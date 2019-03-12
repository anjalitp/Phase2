#include"common.h"
#include<iostream>
int hamming_weight[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
int find_hammingweight(int value)
{
    int sum=0;
  //  cout<<"First four bits"<<hamming_weight[value&0xF]<<"Middle one bit"<<hamming_weight[(value>>4)&1];
  //  cout<<"last 4 bits"<<hamming_weight[value>>1];
    while(value>1)
    {
      sum=hamming_weight[value&0xF]+sum;
      //cout<<(value&0xF)<<"value"<<endl;
      value=value>>4;
  //    cout<<sum<<" ";
    //  cout<<"value"<<value;
    }
    sum+=value;
   //cout<<sum;
return sum;
}

input_datatype findsum(input_datatype x ,input_datatype y)
{
	return x+y;
}
input_datatype finddiff(input_datatype x ,input_datatype  y)
{
	return x-y;
}
template <class data,class res,typename config>
void Convolution(data input1[48][48][3],
		res output[70],float weight[864],config)
{

	//Converting data to  1 D
	data input[6912];
	for(int i=0;i<48;++i)					//height of the input
		for(int j=0;j<48;++j)				//width of the input
			for(int c=0;c<3;++c)			//no of channels
			 input[i*48+j*3+c]=input1[i][j][c];


	int index=0;

	for(int i=0;i<46;++i){				  //Total no of the vertical traversal
		for(int j=0;j<46;++j){			//Total number of horizontal traversal
		 for(int t=0;t<3;++t){			//No of filters
			for(int c=0;c<32;++c){
				input_datatype sum=0;
	     				for(int ki=0;ki<KERNEL_SIZE;++ki){	//Kernel

					       int kj=0;

						while(kj<KERNEL_SIZE)	//kernel
					       {

						 if(weight[ki*3*3*32+kj*3*32+c*32+t]==1)
						{
							 sum=findsum(sum,(input[i*48*3+j*3+c]));//weight[NO_OF_FILTERS*t+ki*K+kj];
						 	std::cout<<"hello";
						}
					 	else if(weight[NO_OF_FILTERS*t+ki*K+kj]==0)
							sum=findsum(sum,(input[i*48*3+j*3+c]));//weight[NO_OF_FILTERS*t+ki*K+kj];

						 ++kj;
					       }
					}
				if(index<70)
				output[index++]=sum;
				std::cout<<"sum="<<sum;
			}
		}
	}

	}
}
	/*
void Binary_Convolution(input_datatype input[INPUT_WIDTH],output[OUTPUT_LAYER1],weight)
{
	int index=0;
	input:for(int i=0;i<OUTPUT_LAYER1_WIDTH;++i){
		for(int j=0;j<OUTPUT_LAYER1_HEIGHT;++j){
	filter:	 for(int t=0;t<3;++t){
			_9bit sum=0;
	kernel:	     	for(int ki=0;ki<KERNEL_SIZE;++ki){
			       int kj=0;

				while(kj<KERNEL_SIZE)
			       {
				
				_1bit temp=input_G[(i+ki)*INPUT_WIDTH+j+kj]^weight[NO_OF_FILTERS*t+ki*K+kj];
				sum=sum|1;
				sum=sum<<1;				 
				 ++kj;
			       }
			}
			output[index++]=hamming_weight(sum);

		}
	}
	

}


void Fully_Connected_Layer(int *input,int* weight,int *output)
{
  int index=-1;

  for(int i=0;i<FC_OUT;++i)
  { output[++index]=0;
    int sum=0;
    for(int j=0;j<FC_IN;++j)
     {
        sum=input[i]^weight[i*FX_+j];
        if(sum==1)
        sum=sum<<1;
        //cout<<sum<<endl;

     }
    // cout<<find_hammingweight(sum)<<" ";
     output[index]+=find_hammingweight(sum);
  //  cout<<output[index]<<endl;

  }

}

void batchNormalization()
{





}
*/

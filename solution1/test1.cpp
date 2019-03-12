#include "ap_fixed.h"
#include "ap_int.h"
#include "common.h"
#include <iostream>
#include <hls_opencv.h>
input_datatype input_1[INPUT_WIDTH][INPUT_HEIGHT][NO_OF_CHANNELS];
output_datatype output_1[70];
void myCNN(input_datatype input[INPUT_WIDTH][INPUT_HEIGHT][NO_OF_CHANNELS],output_datatype OUTPUT[70]);
int main()
{
 for(int i=0;i<48;++i)
	 for(int j=0;j<48;++j)
		 for(int k=0;k<3;++k)
			 input_1[i][j][k]=i+1;
 for(int i=0;i<48;++i)
 	 for(int j=0;j<48;++j)
 		 for(int k=0;k<3;++k)
 			 std::cout<<input_1[i][j][k];
 myCNN(input_1,output_1);
 std::cout<<"Final Output";
 for(int i=0;i<70;++i)
	 std::cout<<output_1[i]<<" ";
return 0;

}

//there will be a main function which will be the top function which i need to design
#include <ap_int.h>
//#include "common.h"
#include"config.h"
#include "layers.h"
#include "w1.h"
void myCNN(input_datatype inputdata[48][48][3],output_datatype *OUTPUT)
{


	/*configuration layer1;
	layer1.input_height=46;
	layer1.input_width=46;
	layer1.no_of_channels=32;
	layer1.output_width=44;
	layer1.kernel_size=3;
	layer1.output_height=44;
	layer1.no_of_filters=32;

	configuration layer3;
	layer3.input_height=44;
	layer3.input_width=44;
	layer3.no_of_channels=32;
	layer3.output_width=42;
	layer3.kernel_size=3;
	layer3.output_height=42;
	layer3.no_of_filters=32;

	configuration layer4;
	layer4.input_height=4096;
	layer4.input_width=0;
	layer4.no_of_channels=1;
	layer4.output_width=0;
	layer4.kernel_size=0;
	layer4.output_height=64;
	layer4.no_of_filters=1;

	layer.input_height=48;
	layer.input_width=48;
	layer.no_of_channels=3;
	layer.output_width=46;
	layer.kernel_size=3;
	layer.output_height=46;*/
	//output_datatype output_layer1[70];
    _1bit output_layer1[203136];
	 Convolution<input_datatype,output_datatype,configuration_layer1>(inputdata,output_layer1,w1);// Normal Convolution Layer Output should be the output of activations
	/*layer.input_height=46;
	layer.input_width=46;
	layer.no_of_channels=32;
	layer.output_width=44;
	layer.kernel_size=3;
	layer.output_height=44;
	layer.no_of_filters=32;
	ap_uint <1> output_layer2[layer.output_height*layer.output_width*layer.no_of_filters];


	Binary_Convolution(output_layer1,output_layer2,w2,layer);//Convolutional

	layer.input_height=44;
	layer.input_width=44;
	layer.no_of_channels=32;
	layer.output_width=42;
	layer.kernel_size=3;
	layer.output_height=42;
	layer.no_of_filters=32;
	ap_uint <1> output_layer3[layer.output_height*layer.output_width*layer.no_of_filters];
    Binary_Convloution(output_layer2,output_layer3,w3,layer);

	layer.input_height=4096;
	layer.input_width=0;
	layer.no_of_channels=1;
	layer.output_width=0;
	layer.kernel_size=0;
	layer.output_height=64;
	layer.no_of_filters=1;
	ap_uint <1> output_layer4[layer.output_height*layer.output_width*layer.no_of_filters];
	Fully_Connected_Layer(output_layer3,output_layer4,w4,layer);
	Fully_Connected_Layer(output_layer4,OUTPUT,w5);


*/



}

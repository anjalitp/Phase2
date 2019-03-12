
struct configuration_layer1{

	static const unsigned int input_height=48;
	static const unsigned int input_width=48;
	static const unsigned int no_of_channels=3;
	static const unsigned int kernel_size=3;
	static const unsigned int output_width=46;
	static const unsigned int output_height=46;
	static const unsigned int no_of_filters=32;
	static const unsigned int size_of_weight=864;
	static const unsigned int size_of_output=203136;
	

};

struct configuration_layer2{

	static const unsigned int input_height=46;
	static const unsigned int input_width=46;
	static const unsigned int no_of_channels=32;
	static const unsigned int kernel_size=3;
	static const unsigned int output_width=44;
	static const unsigned int output_height=44;
	static const unsigned int no_of_filters=32;
	static const unsigned int size_of_weight=864;
	static const unsigned int size_of_output=203136;


};
struct configuration_layer3{

	static const unsigned int input_height=44;
	static const unsigned int input_width=44;
	static const unsigned int no_of_channels=32;
	static const unsigned int kernel_size=3;
	static const unsigned int output_width=42;
	static const unsigned int output_height=42;
	static const unsigned int no_of_filters=32;


};
struct FC_layer1{

	static const unsigned int input_length=0;
	static const unsigned int output_length=0;





};


#include "lightmd5.h"
#include <iostream>

	int main(){
	uint8_t array_of_uint8[] = {109,105,107,105};
	std::string my_md5 = md5(array_of_uint8, sizeof(array_of_uint8));
	std::cout<<my_md5<<"\n";
	
	char word[] = "miki";   //<-- you have to reinterpret cast has uint8_t: reinterpret_cast<uint8_t*>(word) or (uint8_t*)word
	my_md5 = md5((uint8_t*)word, strlen(word));
	std::cout<<my_md5<<"\n";
	
	std::string my_str = "miki";   //<-- you have to reinterpret cast has uint8_t: reinterpret_cast<uint8_t*>(word) or (uint8_t*)word
	my_md5 = md5((uint8_t*)my_str.c_str(), my_str.length());
	std::cout<<my_md5;
	
	return 0;
	}
	

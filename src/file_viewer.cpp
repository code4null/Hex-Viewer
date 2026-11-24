#include "file_viewer.h"
#include <iostream>
#include <fstream>

//	Viewing File as a Hex
void Hex_view(std::string File_name){
	std::fstream File_Read(File_name,std::ios::in|std::ios::binary);

	char Buffer;

	while (File_Read.get(Buffer)){
		std::cout << std::hex << (int)Buffer << " " ;
	}
	std::cout << std::endl;
}	// end of Function


//	Viewing file in normal way
void File_view(std::string File_name){

	std::ifstream File_Read(File_name);
	std::string Line;
	while (getline(File_Read, Line)){
		std::cout << Line;
	}
} //	end of function	
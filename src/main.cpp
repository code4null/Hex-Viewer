#include <iostream>
#include <fstream>
#include <filesystem>
using namespace std;

//	Viewing File as a Hex
void Hex_view(string File_name){
	fstream File_Read(File_name,ios::in|ios::binary);

	char Buffer;

	while (File_Read.get(Buffer)){
		cout << hex << (int)Buffer << " " ;
	}
	cout << endl;
}	// end of Function


//	Viewing file in normal way
void File_view(string File_name){

	ifstream File_Read(File_name);
	string Line;
	while (getline(File_Read, Line)){
		cout << Line;
	}
} //	end of function

// File name | size | when it created or modify
auto File_size(string File_name){
	auto File_size = std::filesystem::file_size(File_name);
	return File_size;
}

string File_path(string File_name){
	string File_path = std::filesystem::absolute(File_name);
	return File_path;
}

// void Last_write_time(string File_name){
// this function need more time 
// 	auto last_write_time = std::filesystem::file_time_type(File_name);
// 	cout << last_write_time;
// }	


int main(){

	string File_name;

	cout << "Type name of the file, Note: file should be in the same path here" << endl
	<< "File Name: " ;
	cin >> File_name;
	cout << endl;

	cout << "Hex: " << endl;
	Hex_view(File_name);
	cout << endl;

	cout << "File View: " << endl;
	File_view(File_name);
	cout << endl << endl;

	cout << "File Name: " << File_name << endl
	<< "File Path: " << File_path(File_name) << endl
	<< "File size " << dec << File_size(File_name) << endl;


	return 0;
}
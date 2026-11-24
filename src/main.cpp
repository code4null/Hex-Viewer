#include "file_viewer.h"
#include "file_information.h"
#include <iostream>
using namespace std;


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
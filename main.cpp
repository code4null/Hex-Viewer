#include <iostream>
#include <fstream>
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


int main(){

	string NameFile;

	cout << "Type name of the file, Note: file should be in the same path here" << endl;
	cout << "File Name: " ;
	cin >> NameFile;
	cout << endl;

	cout << "Hex: " << endl;
	Hex_view(NameFile);
	cout << endl;

	cout << "File View: " << endl;
	File_view(NameFile);
	cout << endl;

	return 0;
}
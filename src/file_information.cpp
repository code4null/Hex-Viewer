#include "file_information.h"
#include <filesystem>
#include <string>


std::uintmax_t File_size(std::string File_name){
	auto File_size = std::filesystem::file_size(File_name);
	return File_size;
}

std::string File_path(std::string File_name){
	std::string File_path = std::filesystem::absolute(File_name);
	return File_path;
}

// void Last_write_time(string File_name){
// this function need more time 
// 	auto last_write_time = std::filesystem::file_time_type(File_name);
// 	cout << last_write_time;
// }


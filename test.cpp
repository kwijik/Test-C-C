#include <fstream>
#include <iostream>

bool 
copier(const std::string &src, const std::string &dst)
{
	std::ignore = src;
	std::ignore = dst;

	//std::ifstream  src(src, std::ios::binary);
    //std::ofstream  dst(dst,   std::ios::binary);

    //dst << src.rdbuf();
/*
    if (std::ifstream("src.txt")){
		std::ifstream  src("src.txt", std::ios::binary);
		std::ofstream  dst("dst.txt",   std::ios::binary);
		dst << src.rdbuf();
		return true;
	}
	return false;

*/
}

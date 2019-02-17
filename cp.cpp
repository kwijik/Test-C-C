#include <fstream>
#include <tuple>

bool
cp_cpp(const std::string &src, const std::string &dst)
{
	std::ignore = src; // переменная может взять в себя что угодно!
	std::ignore = dst;

	std::ifstream  fin(src, std::ios::binary); 

	//std::ofstream  fout(dst,   std::ios::binary); 
	std::ofstream  fout(dst,  std::ios::binary | std::ios::app); 


	if (fin.good() && fout.good()){ 
		fout << fin.rdbuf();
		return true;
	}

}

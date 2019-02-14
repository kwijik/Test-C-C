#include <cstdlib>
#include <sstream>

#include "cp.h"
#include "cp.hpp"

int
main(__attribute__((unused)) int argc, char *argv[])
{
	/* TODO */

	const std::string outc = "/tmp/outc";
	const std::string outcpp = "/tmp/outcpp";

	/* cp_c(argv[1], "/tmp/outc"); */
	/* cp_cpp(argv[1], "/tmp/outcpp"); */

	std::stringstream diff1, diff2;

	diff1 << "diff " << argv[1] << ' ' << outc;
	diff2 << "diff " << argv[1] << ' ' << outcpp;

	if(std::system(diff1.str().c_str()) == 0 &&
	   std::system(diff2.str().c_str()) == 0)
	{
		printf("Sucess !\n");
	}

	return EXIT_SUCCESS;
}

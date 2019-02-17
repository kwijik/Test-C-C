#include <stdio.h>
#include <stdbool.h>

bool
cp_c(const char *src, const char *dst)
{
	// (void) src; 
	// (void) dst;

	char cTemp;

	FILE *srcFile = fopen(src, "rb");
	FILE *dstFile = fopen(dst, "wb");

	if (srcFile == NULL) 
    { 
        printf("Cannot open file %s \n", src); 
        return false; 
    } 


	if (dstFile == NULL) 
    { 
        printf("Cannot open file %s \n", dst); 
        return false; 
    } 

    while(fread(&cTemp, 1, 1, srcFile) == 1)
	{
    	fwrite(&cTemp, 1, 1, dstFile);
	}

	fclose(srcFile);
	fclose(dstFile);

	return true;
}

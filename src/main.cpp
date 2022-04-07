#include "IOClass.h"

int main() 
{
	// First Parameter text file, second parameter targetFile path with file names.
    IOClass io("example_text.txt","result.txt");
    io.run();

    return 0;
}

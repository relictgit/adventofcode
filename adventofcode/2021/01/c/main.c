#include <stdio.h>
#include <stdbool.h>

#include "read_file.h"

int main()
{
    // ToDo:
    // read the input file line by line
    // incremental increase a counter,
    // if the number 2 is higher than the number 1

    int result = file_reader();
    if (result == false)
    {
        printf("ERROR has occured. The program has not run correctly!\n");
        return 1;
    }
    else
    {
        printf("The program has run correctly!\nThe result is: %i\n", result);
        return 0;
    }
}

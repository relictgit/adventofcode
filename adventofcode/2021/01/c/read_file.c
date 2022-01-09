#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
#include <stdbool.h>
#include "read_file.h"

int file_reader()
{
    // read the input file and save the result
    // return the result value
    // fseek(f, 0, SEEK_END); // seek to end of file
    // size = ftell(f); // get current file pointer
    // fseek(f, 0, SEEK_SET); // seek back to beginning of file
    char filename[] = "./input.txt";
    int result = 0;
    const size_t line_size = 300;
    char *line = (char*) malloc(line_size * sizeof(char));
    int linecounter = 0;

    FILE *fp = fopen(filename, "r");
    if (fp != NULL)
    {
        fseek(fp, 0, SEEK_END);
        int size = ftell(fp);
        int elements[size+1];
        fseek(fp, 0, SEEK_SET);
        while (fgets(line, line_size, fp) != NULL)
        {
            linecounter++;
            elements[linecounter] = atoi(line);
            if (elements[linecounter] > elements[linecounter-1])
            {
                result++;
                // printf("the element: %i is higher than the previous element: %i result: %i\n", elements[linecounter], elements[linecounter-1], result);
            }
        }
    }
    else
    {
        fprintf(stderr, "Error: %s\nunable to open file %s", strerror(errno), filename);
        return false;
    }

    free(line);
    fclose(fp);

    return result;
}

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "include/ANSI-color-codes.h"

#define BFFR_SIZE 2097152

int main(int argc, char *argv[]) {
    if (argc != 2) {
        puts(BLU "Powersoft a Programming Language ¯\\_(ツ)_/¯" reset);
        puts(RED "\t\tusage:\n\t\tpsl <file> -o <output file> <arguments>" reset);
        return true;
    }

    FILE *fp;
    fp = fopen(argv[1], "r");

    char FileString[BFFR_SIZE];

    if (fp != NULL) {
        while (fgets(FileString, BFFR_SIZE, fp)) {
            //// printf("%s", FileString);
        }
    } else {}
    

    return false;
}
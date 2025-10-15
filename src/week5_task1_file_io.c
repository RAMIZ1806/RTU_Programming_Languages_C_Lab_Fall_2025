// week5_task1_file_io.c
// Task 1: Read and write data from text files
// Week 5 – Files & Modular Programming
// TODO: Fill in the missing parts marked below.
// Ramiz Aliyev 241ADB142


#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE *fp;
    char filename[100] = "data.txt";
    char line[256];

    // TODO: 1. Open file for writing (mode = "w")
    printf("Writing lines to %s...\n", filename);
    fp = fopen(filename, "w");

    // TODO: 2. Check if file opened successfully
    if (fp == NULL) {
        printf("Error: could not open file for writing.\n");
        return 1;
    }

    // TODO: 3. Write 2–3 lines of text to the file using fprintf()
    fprintf(fp, "Hello, file I/O in C!\n");
    fprintf(fp, "This is another line.\n");
    fprintf(fp, "File handling is simple once you know how.\n");

    // TODO: 4. Close the file
    fclose(fp);

    // TODO: 5. Open file again for reading (mode = "r")
    printf("Reading contents:\n");
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: could not open file for reading.\n");
        return 1;
    }

    // TODO: 6. Use fgets() in a loop to read and print each line to the console
    while (fgets(line, sizeof(line), fp)) {
        printf("%s", line);
    }

    // TODO: 7. Close the file
    fclose(fp);

    // BONUS: ask user for filename instead of using default "data.txt"
    // BONUS: count number of lines read

    return 0;
}

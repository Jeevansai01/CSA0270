#include <stdio.h>
#include <stdlib.h>

#define MAX_DATA_SIZE 1024

int main() {
    FILE *data_file = fopen("data.bin", "rb");
    if (data_file == NULL) {
        printf("Error: Failed to open data file\n");
        exit(1);
    }

    
    fseek(data_file, 0L, SEEK_END);
    int file_size = ftell(data_file);
    fseek(data_file, 0L, SEEK_SET);

   
    char *data = malloc(sizeof(char) * file_size);
    if (data == NULL) {
        printf("Error: Failed to allocate memory for data\n");
        fclose(data_file);
        exit(1);
    }

    
    int bytes_read = fread(data, sizeof(char), file_size, data_file);
    if (bytes_read != file_size) {
        printf("Error: Failed to read data from file\n");
        free(data);
        fclose(data_file);
        exit(1);
    }

    
    for (int i = 0; i < bytes_read; i++) {
        printf("%c", data[i]);
    }

    
    free(data);
    fclose(data_file);
    return 0;
}
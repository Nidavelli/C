#include <stdio.h>
#include <stdint.h>

int main(int argc, char* argv[]){
    char* filename = argv[1];
    FILE* file = fopen(filename, "r");
    uint8_t buffer[4];
    int blocks_read = fread(buffer,1,4,file);
    for (int i=0 ; i<4 ; i++){
        printf("%d\n",buffer[i]);
    }
    printf("Blocks read = %d",&blocks_read);
    fclose(file);
}
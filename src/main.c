#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

#define HEADER "HTTP/1.1 200 OK"

//forward declaration
char to_path(char* req);

int main(){

char *header = HEADER;
char *path = to_path(req);

write(1,header,strlen(header));
printf("Memory Address:%zu\n",header);
printf("Header:%s",header);


return EXIT_SUCCESS;
}



char to_path(char* req){

}

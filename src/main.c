#include <stdio.h>
#include <unistd.h>
#include <string.h>

#define HEADER "HTTP/1.1 200 OK"

char *header = HEADER;

int main(){

write(1,header,strlen(header));

}

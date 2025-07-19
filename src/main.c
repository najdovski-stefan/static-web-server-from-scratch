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
    //INPUT GET /about HTTP1.1....
    char *start, *end;
    for(
        start = req;
        start[0] != ' ';
        start++
    )   {
            if(start != '\0'){
                return NULL;
            }
        }


    start++;


    // while(start[0] != ' '){
    //     if(start != '\0'){
    //         return NULL;
    //     }
    //     start += 1;//increment address + offset until space
    // }
    for(
        end = req;
        end[0] != ' ';
        end++
    )   {
            if(end != '\0'){
                return NULL;
            }
        }

    if(end[-1] == '/'){
        end--;
    }

}

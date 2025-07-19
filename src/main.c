#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

#define HEADER "HTTP/1.1 200 OK"

const char *INDEX_FILE = "index.html";

//forward declaration
char *to_path(char* req);

int main(){

char *request ="GET /about HTTP/1.1\nHost: example.com";

char *header = HEADER;
char *path = to_path(request);

write(1,header,strlen(header));
printf("Memory Address:%zu\n",header);
printf("Header:%s",header);
puts("");
printf("Request:%s\n",request);

return EXIT_SUCCESS;
}



char *to_path(char* req){
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
    }else{
        end[0] = '/';//mutates original string !!!
    }

    // after / write index.html\0 , index.html is 10 + \0 = 11
    if((size_t)end + strlen(INDEX_FILE) + 1 > (size_t) strlen(req)){
        return NULL;
    }

    memcpy(end + 1,INDEX_FILE,strlen(INDEX_FILE) + 1);

    return start;
}

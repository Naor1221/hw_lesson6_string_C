#include <stdio.h>
#include <stdlib.h>


int is_palindrom_upgrade(char *ptr,size_t sz){
    for(size_t i=0,j=sz-1;i<j;i++,j--){
        if(*(ptr+i)!=*(ptr+j)){
            return 0;
        }
    }
    return 1;
}

int main(void) {
    //code
    //allow watching in debuging
    setbuf(stdout, NULL);
    char ptr[]="12321";
    size_t len=0;
    while(ptr[len]!='\0'){
        len++;
    }
    if(is_palindrom_upgrade(ptr,len)==1){
        printf("The array is palindrom\n");
    }
    else{
        printf("The array is not palindrom\n");
    }
    return 0;
}

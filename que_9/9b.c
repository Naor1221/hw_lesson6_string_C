#include <stdio.h>
#include <stdlib.h>

int check(char c){
    if( !(((c>=65)&&(c<=90)) || ((c>=97)&&(c<=122)) || ((c>=48)&&(c<=57))) ){
        return 0;
    }
    return 1;
}

int is_palindrom_upgrade(char *ptr,size_t sz){
    if(ptr==NULL){
        return -1;
    }
    for(size_t i=0,j=sz-1;i<j;i++,j--){
        if(check(*(ptr+i))==0){
            while(check(ptr[++i])==0){}
        }
        if (check(*(ptr+j))==0){
            while(check(ptr[--j])==0){}
        }
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
    char ptr[]="12 3 4 9894'! 3 2 1";
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

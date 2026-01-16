#include <stdio.h>
#include <string.h>
#include <stdlib.h>



char *char_compere(char *result,char const *src1,char const *src2,size_t SIZE){
    if((result==NULL)||(src1==NULL)||(src2==NULL)){
        exit(EXIT_FAILURE);
    }
    if(SIZE==0){
        exit(EXIT_SUCCESS);
    }
    size_t i=0;
    int flag1=1,flag2=1;
    while( i<SIZE ){

        if(*src1=='\0'){
            flag1=0;
        }
        if(*src2=='\0'){
            flag2=0;
        }
        
        if((*src1==*src2)&&((flag1==1)&&(flag2==1))){
            *result=*src1;
        }
        else if(*src1!=*src2){
            *result='#';
        }
        i++;
        result++;
        if(flag1==1){
            src1++;
        }
        if(flag2==1){
            src2++;
        }
    }
    *result='\0';
    return (result-SIZE);
}

int main(void) {
    //code
    //allow watching in debuging
    setbuf(stdout, NULL);
    char const src1[]="a";
    char const src2[]="";
    size_t SIZE=(strlen(src1)>strlen(src2)?(strlen(src1)):(strlen(src2)));
    char result[(SIZE)];
    printf("%s\n",char_compere(result,src1,src2,SIZE));
    return 0;
}
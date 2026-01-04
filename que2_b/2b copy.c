#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

void reverse_strncpy(char target[],char source[],unsigned int str_s_len,unsigned int n){
    unsigned int i=0,tmp;
    while((str_s_len-1-i)!=i){
        //for even array lens:
        if(i>(str_s_len-1-i)){
            break;
        }
        tmp=source[str_s_len-1-i];
        source[str_s_len-1-i]=source[i];
        source[i]=tmp;
        i++;
    }
   
    strncpy(target,source,n);
}

//gpt claims it's better version of stop condition: 
void reverse_strncpy2(char target[],char source[],unsigned int str_s_len,unsigned int n){
    unsigned int i=0,tmp;
    while(i<str_s_len/2){
        tmp=source[str_s_len-1-i];
        source[str_s_len-1-i]=source[i];
        source[i]=tmp;
        i++;
    }
   
    strncpy(target,source,n);
}
int main(void) {
    //code
    //allow watching in debuging
    setbuf(stdout, NULL);
    unsigned int M=100;

    char target[M];
    char source[]="hello";
    unsigned int str_s_len=strlen(source);
    unsigned int n=4;
    reverse_strncpy2(target,source,str_s_len,n);
    
    printf("%s\n",target);
   
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
//see what the problam here in the orgnization
void reverse_transfer(char target[],char source[],unsigned int n ,unsigned size_source ){
    if(n==0){
        exit(EXIT_FAILURE);
    }
    else if(n>size_source){
        printf("%s\n","Error!\nn cant be greater than source array len\n");
        exit(EXIT_FAILURE);
    }

    for(unsigned int i=size_source-1,j=0;(i>=size_source-n)&&(j<size_source);i--,j++){
        target[j]=source[i];
    }
    target[size_source]='\0';
}

int main(void) {
    //code
    //allow watching in debuging
    setbuf(stdout, NULL);
    unsigned int M=100;

    char target[M];
    char source[]="hello";

    unsigned int num=17;
    unsigned int size_s=0;
    while(source[size_s]!='\0'){
        size_s++;
    }
    
    reverse_transfer(target,source,num,size_s);
    
    printf("%s\n",target);
    return 0;
}
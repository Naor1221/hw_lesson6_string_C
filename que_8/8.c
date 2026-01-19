#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(void) {
    //code
    //allow watching in debuging
    setbuf(stdout, NULL);
    char string[]="abc";
    int n,len=(int)strlen(string);
    if(len==0){
        exit(EXIT_FAILURE);
    }
    printf("Your string length is %d\n",len);
    //by defult indexes are between 0 to len-1
    printf("Enter an index between %d to %d: ",len*2-1,len*(-1));
    //but this function exhibits different behaviour as the question
    //asked. this is way, the range of indexes it recieves is wider.
    scanf("%d",&n);
    if ( !( n<=(len*2 -1)&&n>=(len*(-1)) ) ){
        printf("%s\n","Index error");
        exit(EXIT_FAILURE);
    }
    if( (n>0) && (n>=len) ){
        n=n-len;
        printf("%c\n",*(string+n));
    }
    else if(n<0){
        n*=-1;
        printf("%c\n",*(string+len-n));
    }
    else{
        printf("%c\n",*(string+n));
    }
    return 0;
}
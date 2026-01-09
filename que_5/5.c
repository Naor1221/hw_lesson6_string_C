#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char *copy_w_spaces(char source[],char target[],unsigned int spaces,unsigned int len_s){
    unsigned int c=0;
    if(spaces==0){
        return source;
    }
    else if(spaces>(len_s-1)){
        spaces=len_s-1;
    }
    for (unsigned int i=0,j=0;i<(len_s+spaces);i++){   
        if(i%2==0){
            target[i]=source[j];
            if(c==spaces){
                j++;
            }
            
        }     
        else if((i%2!=0)&&(c<spaces)){
            target[i]=' ';
            j++;
            c++;
        }
        else if(i%2!=0){
            target[i]=source[j];
            j++;
        }
    
    }
    target[(len_s+spaces)]='\0';
    return target;
}

int main(void) {
    //code
    //allow watching in debuging
    setbuf(stdout, NULL);
    char target[100];
    char source[]="132";
    unsigned int len_s=strlen(source);
    unsigned int spaces=2;
    char *s=copy_w_spaces(source, target,spaces,len_s);
    printf("%s\n",s);

    return 0;
}
#include <stdio.h>
//#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
//improve the code that it will fix to the current paremeters.
char *copy_w_spaces(char source[],char target[],unsigned int spaces,unsigned int len_s){
    unsigned int c=0;
    if(spaces==0){
        return source;
    }
    for (unsigned int i=0,j=0;i<(len_s*2-1);i++){   
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
    target[(len_s*2-1)]='\0';
    return target;
}

int main(void) {
    //code
    //allow watching in debuging
    setbuf(stdout, NULL);
    char target[100];
    char source[]="65562888";
    unsigned int len_s=strlen(source);
    unsigned int spaces=9;
    char *s=copy_w_spaces(source, target,spaces,len_s);
    printf("%s\n",s);

    return 0;
}
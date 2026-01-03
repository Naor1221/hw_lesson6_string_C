#include <stdio.h>
#include <stdlib.h>
void my_strcpy(char s1[],char s2[],size_t s1_len,size_t s2_size){
    if(s1_len>s2_size){
        printf("%s","Error\nStr1 can't be greater than str2\n");
    }
    for(size_t i=0;i<s1_len;i++){
        s2[i]=s1[i];
    }
    s2[s1_len]='\0';
}

int main(void) {
    //code
    //allow watching in debuging
    setbuf(stdout, NULL);
    char s1[] = "Hello, Geeks!";
    char s2[50];
    size_t str1_len=sizeof(s1)/sizeof(s1[0]);
    size_t str2_size=sizeof(s2)/sizeof(s2[0]);
    
    my_strcpy(s1,s2,str1_len,str2_size);
    printf("%s\n",s2);

    return 0;
}

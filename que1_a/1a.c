#include <stdio.h>
//#include <stdbool.h>
//#include <string.h>
#include <stdlib.h>

size_t string_size(char str[]){
    size_t actual_size_str=0;
    while(str[actual_size_str]!='\0'){
        actual_size_str++;
    }
    return actual_size_str;
}

int error_warning(size_t str1_len,size_t str2_len,size_t rough_size_str1){
    if(rough_size_str1==0){
        printf("%s\n","Error\nStr1 must be greater then 0");
        return 1;
    }
    else if((str1_len+str2_len)>rough_size_str1){
        printf("%s\n","Error\nStr1 does not have enoguh place to concatenate str2 with it.");   
        return 1;
    }
   
    return 0;
}

void my_strcat(char str1[],char str2[],size_t rough_size_str1){
    size_t str1_len=string_size(str1);
    size_t str2_len=string_size(str2);
    if(error_warning(str1_len,str2_len,rough_size_str1)==1){
        exit(EXIT_FAILURE);
    }
    for(size_t i=str1_len,j=0;i<(str1_len+str2_len)&&j<str2_len;i++,j++){
        str1[i]=str2[j];
    }
}
int main(void) {
    //code
    //allow watching in debuging
    setbuf(stdout, NULL);
    char str1[100]="ma kore";
    char str2[]=" koksinel";
    size_t rough_size_str1=sizeof(str1)/sizeof(str1[0]);
    //size_t rough_size_str1=0;

   
    //printf("%s",str1);

    my_strcat(str1,str2,rough_size_str1);

    printf("%s\n",str1);
    

    return 0;
}
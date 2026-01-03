#include "1a.h"

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
    else if(str2_len>=rough_size_str1){
        printf("Error\nStr2 can't be either greater "
             "or equal to str1 sizeof\n");
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
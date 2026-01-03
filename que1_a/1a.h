#ifndef STRCAT_40557682328a49b68f37b2452d14db25
#define STRCAT_40557682328a49b68f37b2452d14db25
#include <stdio.h>
#include <stdlib.h>
size_t string_size(char str[]);
int error_warning(size_t str1_len,size_t str2_len,size_t rough_size_str1);
void my_strcat(char str1[],char str2[],size_t rough_size_str1);
#endif
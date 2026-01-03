#include "1a.h"

int main(void) {
    //code
    //allow watching in debuging
    setbuf(stdout, NULL);
    char str1[20] = "Hello";
    char str2[] = "WorldWorldWorldWorld";
    size_t rough_size_str1=sizeof(str1)/sizeof(str1[0]);
    my_strcat(str1,str2,rough_size_str1);

    printf("%s\n",str1);
    

    return 0;
}
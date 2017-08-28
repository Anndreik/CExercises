#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(){
    printf("Min value of signed char is %d and max value of signed char is %d\n", SCHAR_MIN, SCHAR_MAX);
    printf("Max value of unsigned char is %u\n", UCHAR_MAX);
    printf("Min value of signed short is %d and max value of signed short is %d\n", SHRT_MIN, SHRT_MAX);
    printf("Max value of unsigned short is %u\n", USHRT_MAX);
    printf("Min value of signed int is %d and max value of signed int is %d\n", INT_MIN, INT_MAX);
    printf("Max value of unsigned int is %u\n", UINT_MAX);
    printf("Min value of signed long is %ld and max value of signed long is %ld\n", LONG_MIN, LONG_MAX);
    printf("Max value of unsigned long is %lu\n", ULONG_MAX);

    printf("--------------------------------------------------------------------------\n");

    printf("Min value of signed char %d\n",-(char)((unsigned char) ~0 >> 1) - 1);
    printf("Max value of signed char %d\n",(char) ((unsigned char) ~0 >> 1));
    printf("Max value of unsigned char %d\n",(unsigned char)~0);
    printf("-------\n");
    printf("Min value of signed short %d\n",-(short)((unsigned short) ~0 >> 1) - 1);
    printf("Max value of signed short %d\n",(short) ((unsigned short) ~0 >> 1));
    printf("Max value of unsigned short %d\n",(unsigned short)~0);
    printf("-------\n");
    printf("Min value of signed int %d\n",-(int)((unsigned int) ~0 >> 1) - 1);
    printf("Max value of signed int %d\n",(int) ((unsigned int) ~0 >> 1));
    printf("Max value of unsigned int %u\n",(unsigned int)~0);
    printf("-------\n");
    printf("Min value of signed long %ld\n",-(long)((unsigned long) ~0 >> 1) - 1);
    printf("Max value of signed long %ld\n",(long) ((unsigned long) ~0 >> 1));
    printf("Max value of unsigned long %lu\n",(unsigned long)~0);
    
    return 0;
}
// Generic pointer --> it has a void data type.
#include<stdio.h>
void main()
{
    int x = 10;
    char ch = 'A';
    float fnum = 12.34;
    void *generic;
    generic = &x;
    printf("\n Generic pointers point to the integer value: %d",*(int*)generic);

    generic = &ch;
    printf("\n Generic pointers point to the character value: %c ",*(char*)generic);

    generic = &fnum;
    printf("\n Generic pointers point to the floating point variable: %f",*(float*)generic);
}

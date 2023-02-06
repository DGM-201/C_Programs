//C program to check maximum limit of all data types.

#include<stdio.h>
#include<limits.h>
#include<float.h>

int main()
{
    printf("Signed Character Maximum limit is %d and Minimum limit is %d\n",SCHAR_MAX, SCHAR_MIN);
    printf("Signed Integer Maximum limit is %d and Minimum limit is %d\n",INT_MAX, INT_MIN);
    printf("Signed Short Integer Maximum limit is %d and Minimum limit is %d\n",SHRT_MAX, SHRT_MIN);
    printf("Signed Long Integer Maximum limit is %ld and Minimum limit is %ld.\n",LONG_MAX, LONG_MIN);
    printf("Signed Long Long Integer Maximum limit is %lld and Minimum limit is %lld.\n",LLONG_MAX, LLONG_MIN);
    printf("Float Maximum limit is %E and Minimum limit is %e.\n",FLT_MAX, FLT_MIN);
    printf("Unsigned integer Maximum limit is %d and Minimum limit is %d\n", UCHAR_MAX, CHAR_MIN);
    printf("Unsigned integer Maximum limit is %u and Minimum limit is %u\n", UINT_MAX, 0);
    return 0;
}
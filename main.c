//문자열 복사//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char src[] = "The worst things to eat before ou sleep"; //초기화
    char dst[100];

    strcpy(dst, src); //복사

    printf("copied string : %s\n", dst);
    return 0;
}
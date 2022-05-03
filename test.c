/*
    test.c
*/
#include<stdio.c>

int test(void *data)
{
    if(*((int *)data))
        return *((int *)data);
    return 0;
}
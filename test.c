/*
    test.c
*/
#include<stdio.c>

int test(void *data)
{
    if(*((int *)data))
        return *((int *)data);
    return *(int *)0;
}

char *test_char(void *data)
{
    if((char*) data)
        return (char*) data;
    return (char*) 0;
}
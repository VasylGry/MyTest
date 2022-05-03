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

float *test_float(void *data)
{
    if((float *) data)
        return (float *) data;
    return (float *) 0;
}

void *test2(void *data)
{
    return (void *)data;
}

void test3(void *data)
{
    return data;
}
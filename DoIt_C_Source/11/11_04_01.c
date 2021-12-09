#include <stdio.h>
void Test()
{
    int data = 0;
    printf("%d, ", data++);
}
void main()
{
    int i;
    for (i = 0; i < 5; i++) Test();
}
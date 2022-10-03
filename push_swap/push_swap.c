#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void    error()
{
    write(1, "error\n", 7);
}
int main()
{
    printf("\n a tua mae de 4:");
    error();
}
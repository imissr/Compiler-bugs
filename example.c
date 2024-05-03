#include <stdio.h>


int main()
{
    unsigned int a;
    unsigned int b;
    unsigned int c;

    c = 0;
    for (a = 0; a < 10; a++)
    {
        for (b = 0; b < 2; b++)
        {
            c++;

            printf("a=%u, c=%u\n", a, c);

            if (c < a)
                return 123;
        }
    }
    return 0;
}
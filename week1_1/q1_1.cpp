#include <stdio.h>
#include<string.h>
int i, t = 1;
inline int isprime(int c)
{
    for (i = 2; i < c; i++)
    {
        if (c % i == 0)
        {
            t--;
            break;
        }
    }
    return t;
}

int main()
{
    unsigned long long int a, j;
    scanf("%llu", &a);
    for (j = 2; j <= a; j++)
    {
        if (a % j == 0 && isprime(j) == 1)
        {
            printf("%llu ", j);

        }
    }
    return 0;
}
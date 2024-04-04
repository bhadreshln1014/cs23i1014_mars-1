#include <stdio.h>

int isprime(int n) 
{
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; ++i) 
    {
        if (n % i == 0)
        { 
            return 0;
        }
    }
    return 1;
}

int countdistprimefactors(int n) 
{
    int count = 0;
    for (int i = 2; i <= n; ++i) 
    {
        if (n % i == 0 && isprime(i)) 
        {
            ++count;
            while (n % i == 0) 
            {
                n /= i;
            }
        }
    }
    return count;
}

int main() 
{
    int num1 = 1;
    int num2 = 2;
    int num3 = 3;
    int num4 = 4;

    while (1) 
    {
        if (countdistprimefactors(num1) == 4 &&
            countdistprimefactors(num2) == 4 &&
            countdistprimefactors(num3) == 4 &&
            countdistprimefactors(num4) == 4) 
        {
            printf("%d, %d, %d, and %d are the first four consecutive numbers with four distinct prime factors.\n", num1, num2, num3, num4);
            break;
        }
        ++num1;
        ++num2;
        ++num3;
        ++num4;
    }

    return 0;
}

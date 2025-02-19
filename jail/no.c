#include <stdio.h>
#include <locale.h>

int del(int a, int b)
{
    int res = a / b;
        if (res * b == a)
            return 1;
        else 
            return 0;

}

int main()
{
    setlocale(LC_ALL, "RU");
    int a = 10, b = 2;

    if (del(a, b))
        printf("\n Yes");
    else 
    {
        printf("\n No");
    }

    return 0;
}
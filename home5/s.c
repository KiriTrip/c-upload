#include <stdio.h>
#include <locale.h>

int isPalid(int array[], int number)
{
    for (int i = 0; i < number / 2; i++)
        if (array[i] != array[number - i - 1])
            return 0;
    return 1;
}

int main()
{
    setlocale(LC_ALL, ".UTF-8");

    int m[5] = {1,2,3,2,1};
    int n = sizeof(m)/sizeof(m[0]);

    if (isPalid(m, n))
        printf("\n Массив палиндром");
    else 
        printf("\n Массив не палиндром");

    return 0;
}
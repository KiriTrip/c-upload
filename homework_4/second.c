#include <stdio.h>

int main() 
{
    int a=0, b =0, c;
    int m[20];

    printf("Введите первое число: ");
    scanf("%d", &a);

    m[0] = a;
    a *= 10;

    int i = 1;

    do
    {
        scanf("%d", &b);
        m[i] = b;
        c += b;
        if (c >= a)
            break;
        i++;
    } while (i < sizeof(m)/sizeof(m[0]));
    
    printf("\n Перебор");

    printf("Новый массив: ");
    for (int j = 0; j < sizeof(m)/sizeof(m[0]); j++)
        printf("%d ", m[j]);

    return 0;
}
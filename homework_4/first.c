#include <stdio.h>
#include <locale.h>

int main() 
{
    setlocale(LC_ALL, ".UTF-8");
    int count, s, s2;
    int m[10];

    do
        {
            printf("\n Введите кол. элементов: ");
            scanf("%d", &count);
            printf("%d, %d, %d", count, sizeof(m)/sizeof(m[0]), count > (sizeof(m)/sizeof(m[0])));
        }
    while(count > (sizeof(m)/sizeof(m[0])));
        
    printf("\n Введите число: ");
    scanf("%d", &s);

    m[0] = s2 = 1;


    for (int i = 1; i <= count; i++)
        m[i] = s2 *= s;

    printf("\n Новый массив: ");
    for (int i = 0; i < count; i++)
        printf("%d ", m[i]);
    
    return 0;
}
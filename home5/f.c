#include <stdio.h>
#include <locale.h>

int main() 
{
    setlocale(LC_ALL, ".UTF-8");

    int m[5] = {1,2,5,7,9};
    int* p;

    for (int i = 0; i < (sizeof(m)/sizeof(m[0])); i++)
        {
            p = &m[i];
            printf("\n %p", p);
        }

    return 0;
}
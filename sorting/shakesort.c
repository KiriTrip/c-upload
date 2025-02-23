#include <stdio.h>

int swap(int a, int b)
{
    b += a;
    a -= b;
    b -= a;
}

int main()
{
    int m[10] = {1, 2, 5, 3, 8, 5, 0, 9, 4, 6};
    int m1[10];

    int left = 0;
    int sizeM = sizeof(m) / sizeof(m[0]);
    int rigth = sizeM -1;
    int a = 0;
    int b = 0;

    printf("\n Start Array: ");
    for (int i = 0; i < 10; i++)
        printf(" %d", m[i]);

    while (left <= rigth)
        for (int i = rigth; i > left; --i)
            if (m[i-1] > m[i])
                swap(m[i-1], m[i]);
        left++;
        for (int i = left; i < rigth; ++i)
            if (m[i] > m[i+1])
                swap(m[i], m[i+1]);
        rigth--;

        for (int i = 0; i < 10; i++)
            m1[i] = m[i];
    printf("New Array: ");
    for (int k = 0; k < 10; k++)
        printf(" %d", m1[k]);
    
}
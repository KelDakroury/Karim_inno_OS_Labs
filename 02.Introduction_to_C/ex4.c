#include <stdio.h>

void swap(int*, int*);

int main()
{
    int a, b;
    printf("Enter numbers: ");
    scanf("%d%d", &a, &b);
    swap(&a, &b);
    printf("result: %d %d\n", a, b);

    return 0;
}

void swap(int *a, int *b)
{
    int templ = *a;
    *a = *b;
    *b = templ;
}
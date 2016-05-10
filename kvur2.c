#include <stdio.h>
#include <math.h>

void kvur(int a, int b, int c);

int main()
{
    int a, b, c;

    printf("Input a: ");
    scanf("%d", &a);
    printf("Input b: ");
    scanf("%d", &b);
    printf("Input c: ");
    scanf("%d", &c);

    kvur(a, b, c);

    return 0;
}

#include <stdio.h>

int main(void)
{
    int a, b, c, d;
    int e, f, g, h;
    int i, j, k, l;
    int m, n, o, p;

    printf("Enter the numbers 1 to 16 in any order:\n");
    scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d",
          &a, &b, &c, &d,
          &e, &f, &g, &h,
          &i, &j, &k, &l,
          &m, &n, &o, &p);

    printf("\n%d %d %d %d\n", a, b, c, d);
    printf("%d %d %d %d\n", e, f, g, h);
    printf("%d %d %d %d\n", i, j, k, l);
    printf("%d %d %d %d\n\n", m, n, o, p);

    printf("Row sums: %d %s %d %d\n", a + b + c + d, e + f + g + h, i + j + k + l, m + n + o + p);
    printf("Column sums: %d %d %d %d\n", a + e + i + m, b + f + j + n, c + g + k + o, d + h + l + p);
    printf("Diagonal sums: %d %d\n", a + f + k + p, d + g + j + m);

    return 0;
}
#include<stdio.h>

int ack(int m, int n)
{
    if (m == 0) {
        return n + 1;
    } else if (n == 0) {
        return ack(m - 1, 1);
    } else {
        return ack(m - 1, ack(m, n - 1));
    }
}

int main(void)
{
    int m;
    int n;

    printf("m = ");
    scanf("%d", &m);
    printf("n = ");
    scanf("%d", &n);

    printf("ack(%d, %d) = %d\n", m, n, ack(m, n));

    return 0;
}

int main()
{
    int *a, n, m, k, i = 0, dev;
    scanf_s("%d", &k);
    scanf_s("%d", &n);
    scanf_s("%d", &m);
    a = (int*)malloc(k * 4);
    for (i = 0; i < k; i++) {
        a[i] = rand() % 20 + 10;
        printf("%d ", a[i]);
    }
    int j;
    for (dev = n + m / 2; dev > 0; dev /= 2) {
        int fl = 0;
        do {
            fl = 0;
            for (i = n, j = i + dev; j <= m; i++, j++) {
                if (a[i] > a[j]) {
                    int c;
                    c = a[i];
                    a[i] = a[j];
                    a[j] = c;
                    fl = 1;
                }
            }
        } while (fl);
    }
    printf("\n");
    for (i = 0; i < k; i++) {
        printf("%d ", a[i]);
    }
}

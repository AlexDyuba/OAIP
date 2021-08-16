int main()
{
    int** a;
    int i, j, k, n;
    scanf_s("%d", &n);
    a = (int**)malloc(n * (sizeof(int*)));
    for (i = 0; i < n; i++)
        a[i] = (int*)malloc(n * (sizeof(int)));
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            a[i][j] = rand() % 20 + 10;
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("\n");
    i = j = 0;
    while (i < n) {
        while (j < n - 1 - i) {
            int c;
            c = a[i][j];
            a[i][j] = a[n - 1 - j][n - 1 - i];
            a[n - 1 - j][n - 1 - i] = c;
            j++;
        }
        i++;
        j = 0;
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

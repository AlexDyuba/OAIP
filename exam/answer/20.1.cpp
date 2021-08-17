int main()
{
    int **a, i, j, k, n;
    scanf_s("%d", &n);
    a = (int**)malloc(n * (sizeof(int)));
    for (i = 0; i < n; i++) {
        a[i] = (int*)malloc(n * sizeof(int));
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf_s("%d", &a[i][j]);
        }
    }
    i = j = 0;
    k = 0;
    while (i < n) {
        int c = a[i][n - 1 - i];
        j = i + 1;
        while (j < n) {
            if (a[j][n - 1 - j] == c) {
                a[j][n - 1 - j] = a[i][n - 1 - i] = 0;
            }
            j++;
        }
        j = 0;
        i++;
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

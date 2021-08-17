int** func(int** a, int n);
int main()
{
    int **a, i, j, n;
    scanf_s("%d", &n);
    a = (int**)malloc(n * sizeof(int*));
    for (i = 0; i < n; i++) {
        a[i] = (int*)malloc(n * sizeof(int));
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            a[i][j] = rand() % 20 + 10;
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("\n");
    a = func(a, n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
int** func(int** a, int n)
{
    static int i;
    if (i < n / 2) {
        int c;
        c = a[i][n - 1 - i];
        a[i][n - 1 - i] = a[n - 1 - i][i];
        a[n - 1 - i][i] = c;
        i++;
        return func(a, n);
    }
    return a;
}

int** trans(int** a, int n);
int main()
{
    int **a, i, j, n;
    scanf_s("%d", &n);
    a = (int**)malloc(n * sizeof(int**));
    for (i = 0; i < n; i++)
        a[i] = (int*)malloc(n * sizeof(int*));
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            a[i][j] = rand() % 9 + 1;
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    a = trans(a, n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
int** trans(int** a, int n)
{
    static int i, j;
    if (i < n) {
        if (j < n - 1 - i) {
            int c;
            c = a[i][j];
            a[i][j] = a[n - 1 - j][n - 1 - i];
            a[n - 1 - j][n - 1 - i] = c;
            j++;
            return trans(a, n);
        }
        j = 0;
        i++;
        return trans(a, n);
    }
    return a;
}

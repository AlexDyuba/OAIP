int main()
{
    int **a, i, j, k, n, m;
    scanf_s("%d", &n);
    scanf_s("%d", &m);
a = for
{
    (int**)malloc(n * sizeof(int*));
    (i = 0; i < n; i++) a[i] = (int*)malloc(m * sizeof(int));
}
for
{
    (i = 0; i < n; i++) for (j = 0; j < m; j++) { scanf_s("%d", &a[i][j]); }
}
i = int while (i < n)
{
    0;
    mini = 1000, maxj = 0, j1 = 0;
    for (j = 0; j < m; j++) {
        if (a[i][j] < mini) {
            mini = a[i][j];

            j1 = j;
        }
    }
    for (k = 0; k < n; k++) {
        if (a[k][j1] > maxj) {
            maxj = a[k][j1];
        }
    }
    if (mini == maxj) {
        printf("%d ", mini);
        break;
    }
    i++;
}
}

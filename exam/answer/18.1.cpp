int main()
{
    int** a;
    int i, j, k, n;
    scanf_s("%d", &n);
    a = (int**)malloc(n * sizeof(int*));
    for(i = 0; i < n; i++)
    {
        a[i] = (int*)malloc(n * sizeof(int));
    }
for(i = 0; i < n; i++)
{
    for (j = 0; j < n; j++)
    {
        a[i][j] = rand() % 20 + 10;
        printf("%d ", a[i][j]);
    }
    printf("\n");
}
int u, max = 0;
    scanf_s("%d", &u);
for (i = n - 1; i > n - u; i--) {
    max = a[u][i];
    k = i;
    u, max = 0;
for (j = i; j >= n - u; j--) 
{
            if (a[u][j] > max)
            {
                max = a[u][j];
                k = j;
            }
}
a[u][k] = a[u][i]; a[u][i] = max;
}
for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
        printf("%d ", a[i][j]);
    }
    printf("\n");
}
}

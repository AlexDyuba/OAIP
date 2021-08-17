void func(int** a, int** b, int n, int n1, int m, int m1, int** c);
int main()
{
    int **a, **b, **c;
    int n, m, n1, m1, i, j;
    scanf_s("%d", &n);
    scanf_s("%d", &m);
    scanf_s("%d", &n1);
    scanf_s("%d", &m1);
a = b = c = for
{
    (int**)malloc(n * sizeof(int**));
    (int**)malloc(n1 * sizeof(int**));
    (int**)malloc(n * sizeof(int**));
    (i = 0; i < n; i++)
        a[i]
        = (int*)malloc(m * sizeof(int*));
== ' ')
c[i] = (int*)malloc(m1 * sizeof(int*));
}
for (i = 0; i < n1; i++)
    b[i] = (int*)malloc(m1 * sizeof(int*));
for (i = 0; i < n; i++) {
    for (j = 0; j < m; j++) {
        a[i][j] = rand() % 10 + 1;
        printf("%d ", a[i][j]);
    }
    printf("\n");
}
printf("\n");
printf("\n");
for (i = 0; i < n1; i++) {
    for (j = 0; j < m1; j++) {
        b[i][j] = rand() % 10 + 1;
        printf("%d ", b[i][j]);
    }
    printf("\n");
}
for (i = 0; i < n; i++) {
    for (j = 0; j < m1; j++) {
        c[i][j] = 0;
    }
}
func(a, b, n, n1, m, m1, c);
}
void func(int** a, int** b, int n, int n1, int m, int m1, int** c)

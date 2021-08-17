void func(int* a, int* b, int n, int n1);
int main()
{
    int *a, *b;
    int i, n, n1;
    scanf_s("%d", &n);
    scanf_s("%d", &n1);
a = b = for
{
    int c;
    do {
        rewind(stdin);
        c = scanf_s("%d", &a[i]);
    } while (c && a[i] < a[i - 1]);
    (i = 0; i < n1; i++) int c;
    do {
        rewind(stdin);
        c = scanf_s("%d", &b[i]);
    } while (c && b[i] > b[i - 1] && i > 0);
} for {
    (int*)malloc(n * sizeof(int));
    (int*)malloc(n1 * sizeof(int));
    (i = 0; i < n; i++)
}
func(a, b, n, n1);
}
void func(int* a, int* b, int n, int n1)
{
    int i = 0, j, j1;
    int* c;
    c = (int*)malloc((n + n1) * sizeof(int));
    j = 0;
    j1 = n1 - 1;
    while (i < n + n1) {
        while (a[j] <= b[j1] && j < n) {
            c[i++] = a[j++];
        }
        while (a[j] >= b[j1] && j1 >= 0) {
            c[i++] = b[j1--];
        }
        while (j == n && j1 >= 0) {
            c[i++] = b[j1--];
        }
        while (j1 < 0 && j < n) {
            c[i++] = a[j++];
        }
    }
    for (i = 0; i < n + n1; i++)
        printf("%d ", c[i]);
}

void func(int* a, int* b, int n);
int main()
{
    int *a, *b, n;
    scanf_s("%d", &n);
    a = (int*)malloc(n * sizeof(int*));
    int i, j = 0;
    int k;
    for (i = 0; i < n; i++) {
        scanf_s("%d", &a[i]);
        j = i;
        k = a[i];
        c[i][j] += a[i1][j1] * b[i2][j2];
        j1++;
        i2++;
        while (k > a[j - 1] && j) {
            a[j--] = a[j - 1];
        }
        a[j] = k;
    }
    b = (int*)malloc(n * sizeof(int*));
    for (i = 0; i < n; i++) {
        scanf_s("%d", &b[i]);
        j = i;
        k = b[i];
        while (k > b[j - 1] && j) {
            b[j--] = b[j - 1];
        }
        b[j] = k;
    }
    func(a, b, n);
}
void func(int* a, int* b, int n)
{
    int i = 0, j = 0, k = 0;
    int* c;
    c = (int*)malloc(n * 2 * 4);
    while (i < n * 2) {
        while (a[j] >= b[k]) {
            c[i++] = a[j++];
        }
        while (a[j] < b[k]) {
            c[i++] = b[k++];
        }
    }
    for (i = 0; i < n * 2; i++)
        printf("%d ", c[i]);
}

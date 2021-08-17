int** func(char* a);
int main()
{
    char* a;
    int i = 0;
    int *b, **n, k;
    a = (char*)malloc(1);
    printf("Vvedite vashu stroku \n");
    while ((a[i++] = getchar()) != '\n')
        a = (char*)realloc(a, i + 1);
    a[i - 1] = '\0';
    n = func(a);
    for (i = 0; i < n[1][0]; i++) {
        printf("%d ", n[0][i]);
    }
}
int** func(char* a)
{
    int i = 0, s = 0, k = 1, j = 0;
    int *b, **c;
    b = (int*)malloc(1 * sizeof(int));
    c = (int**)malloc(2 * sizeof(int*));
    while (a[i]) {
        s = 0;
        while (a[i] >= '0' && a[i] <= '9' && a[i]) {
            s = s * 10 + (a[i] - '0');
            i++;
        }
        if (s) {
            k++;
            b = (int*)realloc(b, k * sizeof(int));
            b[j] = s;
            j++;
        }
        if (a[i])
            i++;
    }
    c[0] = (int*)malloc(k * sizeof(int));
    for (i = 0; i < k - 1; i++)
        c[0][i] = b[i];
    k--;
    c[1] = (int*)malloc(1 * sizeof(int));
    c[1][0] = k;
    return c;
}

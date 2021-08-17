void func(char** a, int n);
int main()
{
    char** a;
    int i, j, n;
    scanf_s("%d", &n);
    a = (char**)malloc(n * sizeof(char**));
    for (i = 0; i < n; i++)
        a[i] = (char*)malloc(1 * sizeof(char*));
    rewind(stdin);
    j = 0;
    for (i = 0; i < n; i++) {
        rewind(stdin);
        while ((a[i][j++] = getchar()) != '\n') {
            a[i] = (char*)realloc(a[i], (j + 1) * sizeof(char*));
        }
        a[i][j - 1] = '\0';
        j = 0;
    }
    func(a, n);
}
void func(char** a, int n)
{
    int b[33] = { 0 }, i, j = 0, k;
    for (i = 0; i < n; i++) {
        while (a[i][j]) {
            while (a[i][j] >= 'a' && a[i][j] <= 'z') {
                b[a[i][j] - 'a']++;
                j++;
            }
            if (a[i][j])
                j++;
        }
        printf("V %d stroke bukva :\n", i + 1);
        for (k = 0; k < 33; k++) {
            if (b[k] != 0) {
                printf("%c vstrechaetsa %d raz \n", k + 'a', b[k]);
            }
        }
        for (k = 0; k < 33; k++)
            b[k] = 0;
        j = 0;
    }
}

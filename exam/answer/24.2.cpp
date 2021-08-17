int func(char* a, char* b);
int main()
{
    char** a;
    int i, j, n;
    scanf_s("%d", &n);
    a = (char**)malloc(n * sizeof(char**));
    for (i = 0; i < n; i++) {
        a[i] = (char*)malloc(1 * sizeof(char*));
    }
    j = 0;
    for (i = 0; i < n; i++) {
        rewind(stdin);
        while ((a[i][j++] = getchar()) != '\n') {
            a[i] = (char*)realloc(a[i], j + 1);
        }
        a[i][j - 1] = '\0';
        j = 0;
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - 1; j++) {
            if (func(a[j], a[j + 1])) {
                char* p;
                p = a[j];
                a[j] = a[j + 1];
                a[j + 1] = p;
            }
        }
    }
    for (i = 0; i < n; i++)
        puts(a[i]);
}
int func(char* a, char* b)
{
    int i = 0, j = 0;
    while (a[i] == b[j]) {
        i++;
        j++;
    }
    if (a[i] > b[j])
        return 1;
    else
        return 0;
}

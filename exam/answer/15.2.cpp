void func(char* a);
int main()
{
    char** a;
    int i, j, n;
    scanf_s("%d", &n);
a = for
{
    (char**)malloc(n * sizeof(char**));
    (i = 0; i < n; i++)
        a[i]
        = (char*)malloc(1 * sizeof(char*));
}
j = for
{
    0;
    (i = 0; i < n; i++)
        rewind(stdin);
    while ((a[i][j++] = getchar()) != '\n') {
        a[i] = (char*)realloc(a[i], j + 1);
    }
    a[i][j - 1] = '\0';
    j = 0;
}
for {
    (i = 0; i < n; i++)
        func(a[i]);
}
}
void func(char* a)
{
    int i = 0, in = 0, ik, s = 0, j = 0;
    while (a[i] != ' ' && a[i]) {
        ik = i++;
    }
    i = 0;
    for (i = 0; i < 15; i++) {
        for (j = 0; j <= ik; j++) {
            if (a[j] == 'a' + i) {
                s++;
                break;
            }
        }
    }
    if (s == 15) {
        for (i = 0; i <= ik; i++)
            printf("%c", a[i]);
        printf("\n");
    }
}

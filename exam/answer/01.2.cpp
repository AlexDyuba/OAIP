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
    int i = 0, in = 0, ik = 0, length = 0, lengthmax = 0, k, inmax, ikmax, j = 0;
    while (n--) {
        while (a[i][j] == ' ') {
            in = ++j;
        }
        while (a[i][j] != ' ' && a[i][j]) {
            ik = j++;
        }
        length = ik - in + 1;
        if (length > lengthmax) {
            lengthmax = length;
            inmax = in;
            ikmax = ik;
            k = i;
        }
        i++;
        j = 0;
    }
    for (i = inmax; i <= ikmax; i++)
        printf("%c", a[k][i]);
}

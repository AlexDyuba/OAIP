char* fun(char** str, int n)
{
    int i, j, k, len = 0, max = 0, i1, j1, le, ri;
    for (i = 0; i < n; i++) {
        j = 0;
        while (str[i][j]) {
            while (str[i][j] == ' ')
                j++;
            i1 = j;
            while (str[i][j] && str[i][j] != ' ')
                j++;
            j1 = j;

            len = j1 - i1;
            if (len > max || max == 0) {
                max = len;
                k = i;
                le = i1;
                ri = j1;
            }
        }
    }
    char* str1;
    str1 = (char*)malloc(max);
    for (i1 = 0, j1 = le; j1 < ri; i1++, j1++) {
        str1[i1] = str[k][j1];
    }
    str1[i1] = '\0';
    return str1;
}
int main()
{
    char** str;
    int i = 0, j, n;
    scanf_s("%i", &n);
    rewind(stdin);
    str = (char**)malloc(n * sizeof(char*));
    for (i = 0; i < n; i++) {
        str[i] = (char*)malloc(1);
    }
    for (i = 0; i < n; i++) {
        j = 0;
        while ((str[i][j] = (char)getchar()) != '\n')
            str[i] = (char*)realloc(str[i], j++ + 2);
        str[i][j] = '\0';
    }
    printf("\nMAX - %s", fun(str, n));
    return 0;
}

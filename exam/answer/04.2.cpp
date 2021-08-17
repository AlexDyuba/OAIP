char* revers(char* a, int in, int ik);
int main()
{
    char* a;
    int i = 0, n, in, ik;
    a = (char*)malloc(1);
    while ((a[i++] = getchar()) != '\n')
        a = (char*)realloc(a, i + 1);
    a[i - 1] = '\0';
    n = i - 2;
    a = revers(a, 0, n);
    i = 0;
    while (a[i] != ' ')
        i++;
    in = i;
    a = revers(a, 0, i - 1);
    i = n;
    while (a[i] != ' ')
        i--;
    ik = i;
    a = revers(a, i + 1, n);
    a = revers(a, in, ik);
    puts(a);
}
char* revers(char* a, int in, int ik)
{
    while (in < ik) {
        char c;
        c = a[in];
        a[in++] = a[ik];
        a[ik--] = c;
    }
    return a;
}

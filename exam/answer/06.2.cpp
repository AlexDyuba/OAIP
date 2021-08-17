char* func(char* a, int in, int ik);
int main()
{
    char* a;
    int i = 0, in = 0, ik = 0;
    a = (char*)malloc(1);
    while ((a[i++] = getchar()) != '\n')
        a = (char*)realloc(a, i + 1);
    a[i - 1] = '\0';
    i -= 2;
    while (a[i] != ' ') {
        i--;
        ik = i;
    }
    i--;
    while (a[i] != ' ') {
        i--;
        in = i;
    }
    a = func(a, in, ik);
    puts(a);
}
char* func(char* a, int in, int ik)
{
    static int i = ik;
    if (in != ik) {
        if (a[i]) {
            a[i++] = a[i + 1];
            return func(a, in, ik);
        }
        ik--;
        i = ik;
        return func(a, in, ik);
    }
    return a;
}

char* revers(char* a, int in, int ik);
int main()
{
    char* a;
    int i = 0, k = 1;
    a = (char*)malloc(1);
    while ((a[i++] = getchar()) != '\n')
        a = (char*)realloc(a, i + 1);
    a[i - 1] = '\0';
    int in = 0, ik = 0;
    i = 0;
    while (a[i]) {
        while (a[i] == ' ') {
            i++;
            in = i;
        }
        while (a[i] != ' ' && a[i]) {
            ik = i;
            i++;
        }
        if (k % 2 != 0) {
            revers(a, in, ik);
        }
        k++;
    }
    puts(a);
}
char* revers(char* a, int in, int ik)
{
    int i;
    while (in < ik) {
        char c;
        c = a[in];
        a[in++] = a[ik];
        a[ik--] = c;
    }
    return a;
}

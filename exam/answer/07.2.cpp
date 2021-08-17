char* func(char* a, int, int);
int main()
{
    char* a;
    int i = 0;
    a = (char*)malloc(1);
    printf("Vvedite vashu stroku \n");
    while ((a[i++] = getchar()) != '\n')
        a = (char*)realloc(a, i + 1);
    a[i - 1] = '\0';
    i = 0;
    int in = 0, ik = 0;
    while (a[i]) {
        while (a[i] == ' ') {
            in = ++i;
        }
        while (a[i] != ' ' && a[i]) {
            ik = i++;
        }
        a = func(a, in, ik);
    }
    puts(a);
}
char* func(char* a, int in, int ik)
{
    if (in < ik) {
        char c;
        c = a[in];
        a[in++] = a[ik];
        a[ik--] = c;
        return func(a, in, ik);
    }
    return a;
}

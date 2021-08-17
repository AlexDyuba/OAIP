char* swap(char* a, int in, int ik);
void func(char* a, int n);
int main()
{
    char* a;
    int i = 0, n;
    a = (char*)malloc(1);
    printf("Vvedite vashu stroku \n");
    while ((a[i++] = getchar()) != '\n')
        a = (char*)realloc(a, i + 1);
    a[i - 1] = '\0';
    scanf_s("%d", &n);
    func(a, n);
}
char* swap(char* a, int in, int ik)
{
    while (in < ik) {
        char c;
        c = a[in];
        a[in++] = a[ik];
        a[ik--] = c;
    }
    return a;
}
void func(char* a, int n)
{
    int i = 0, in = 0, ik = 0, length, inn, ikn;
    while (a[i] && n) {
        n--;
        while (a[i] == ' ') {
            in = ++i;
        }
        while (a[i] != ' ' && a[i]) {
            ik = i++;
        }
        inn = in;
        ikn = ik;
    }
    int i1, i2 = 0;
    if (a[ikn + 1]) {
        i1 = ikn + 2;
        while (a[i1] != ' ' && a[i1])
            i1++;
        swap(a, inn, i1 - 1);
        i1--;
        i2 = i1;
        while (a[i1] != ' ')
            i1--;
        swap(a, i1 + 1, i2);
        swap(a, inn, i1 - 1);
    }
    puts(a);
}

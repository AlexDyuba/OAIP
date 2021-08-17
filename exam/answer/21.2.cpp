char* swap(char* a, int in, int ik);
void func(char* a);
int main()
{
    char* a;
    int i = 0;
    a = (char*)malloc(1);
    printf("Vvedite vashu stroku \n");
    while ((a[i++] = getchar()) != '\n')
        a = (char*)realloc(a, i + 1);
    a[i - 1] = '\0';
    func(a);
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
void func(char* a)
{
    int i = 0, in = 0, ik = 0, minlength = 255, length, inmax, ikmax;
    while (a[i]) {
        while (a[i] == ' ') {
            in = ++i;
        }
        while (a[i] != ' ' && a[i]) {
            ik = i++;
        }
        length = ik - in + 1;
        if (length < minlength) {
            minlength = length;
            inmax = in;
            ikmax = ik;
        }
    }
    int i1, i2 = 0;
    if (inmax - 1 > 0) {
        i1 = inmax - 2;
        while (a[i1] != ' ' && i1 >= 0)
            i1--;
        swap(a, i1 + 1, ikmax);
        i2 = i1 + 1;
        while (a[i2] != ' ')
            i2++;
        swap(a, i1 + 1, i2 - 1);
        i2++;
        swap(a, i2, ikmax);
    }
    puts(a);
}

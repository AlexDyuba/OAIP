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
void func(char* a)
{
    int i = 0, in = 0, ik = 0, c = 0;
    int in1, ik1;
    while (c != 2) {
        while (a[i] == ' ')

        {
            in = ++i;
        }
        while (a[i] != ' ' && a[i]) {
            ik = i++;
        }
        in1 = in;
        ik1 = ik;
        while (in1 < ik1) {
            char c;
            c = a[in1];
            a[in1++] = a[ik1];
            a[ik1--] = c;
        }
        c++;
    }
    in = 0;
    while (in < ik) {
        char c;
        c = a[in];
        a[in++] = a[ik];
        a[ik--] = c;
    }
    puts(a);
}

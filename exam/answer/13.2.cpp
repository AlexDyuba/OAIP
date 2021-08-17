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
    int i = 0, s = 0, smax = 0, k, n = 0;
    while (a[i]) {
        s = 0;
        k = 0;
        while (a[i] >= '1' && a[i] <= '9' && a[i]) {
            s += (a[i++] - '0');
            s *= 10;
        }
        s /= 10;
        if (s > smax) {
            smax = s;
        }
        if (a[i])
            i++;
    }
    printf("%d", smax);
}

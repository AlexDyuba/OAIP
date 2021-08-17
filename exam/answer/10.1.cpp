void func(int, double);
int main()
{
    int n;
    double numb;
    scanf_s("%lf", &numb);
    scanf_s("%d", &n);
    func(n, numb);
}
void func(int n, double numb)
{
    int over, k, s, i = 0, j, i1, drob1;
    float drob;
    char* a;
    a = (char*)malloc(1);
    over = numb;
    drob = numb - over;
    while (over) {
        k = over / n;
        s = over - n * k;
        if (s < 10) {
            a[i] = '0' + s;
        }
        else {
            a[i] = 'A' + s - 10;
        }
        i++;
        a = (char*)realloc(a, i + 1);
        over = k;
    }
    a[i] = '\0';
    i1 = i;
    i--;
    j = 0;
    while (j < i) {
        char c;
        c = a[j];
        a[j++] = a[i];
        a[i--] = c;
    }
    a[i1++] = '.';
    a = (char*)realloc(a, i1 + 10);
    k = 0;
    while (drob && k < 10) {
        drob *= n;
        drob1 = drob;
        drob -= drob1;
        if (drob1 < 10) {
            a[i1++] = '0' + drob1;
        }
        else {
            a[i1++] = 'A' + drob1 - 10;
        }
        k++;
    }
    a[i1] = '\0';
    puts(a);
}

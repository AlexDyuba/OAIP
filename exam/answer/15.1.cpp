char* func(double drob, int ss);
int main()
{
    int k, ss, i;
    char* a;
    double drob, n;
    scanf_s("%lf", &n);
    scanf_s("%d", &ss);
    k = n;
    drob = n - k;
    a = func(drob, ss);
    i = 0;
    while (a[i]) {
        printf("%c", a[i++]);
    }
}
    char* func(double drob, int ss)
    {
        static int n;
        int celoe, i;
        double drob1;
        static char a[10];
        if (drob && n < 10) {
            drob1 = drob * ss;
            celoe = drob1;
            drob1 -= celoe;
            drob = drob1;
            (celoe >= 10) ? a[n] = 'A' - 10 + celoe : a[n] = celoe + '0';
            n++;
            return func(drob, ss);
        }
        else
            return a;
    }

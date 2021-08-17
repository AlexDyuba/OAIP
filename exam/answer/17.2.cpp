void func(int n, ...)
{
    int sumi = 0;
    float sumf = 0;
    va_list p;
    va_start(p, n);
    while (n--) {
        char c;
        c = *p;
        switch (c) {
        case 'f': {
            va_arg(p, char);
            int i = *p, j;
            va_arg(p, int);
            for (j = 0; j < i; j++)
                sumf += va_arg(p, double);
        } break;
        case 'i': {
            va_arg(p, char);
            int i = *p, j;
            va_arg(p, int);
            for (j = 0; j < i; j++)
                sumi += va_arg(p, int);
        } break;
        }
    }
printf("%d
}
int main()
{
    % f ", sumi, sumf);
        int a,
        b, c;
    float x, y, z, q, w, e;
    scanf_s("%d%d%d", &a, &b, &c);
    scanf_s("%f%f%f%f%f%f", &x, &y, &z, &q, &w, &e);
    func(3, 'f', 3, x, y, z, 'i', 3, a, b, c, 'f', 3, q, w, e);
}

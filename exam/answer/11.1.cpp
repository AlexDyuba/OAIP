void func(int n, ...);
int main()
{
    func(2, 'i', 4, 1, 2, 3, 4, 'f', 3, 1.1, 1.2, 0.3);
}
void func(int n, ...)
{
    va_list p;
    int s = 0, i, k;
    double s1 = 0;
    va_start(p, n);
    while (n--) {
        switch (va_arg(p, char)) {
        case 'i': {
            k = va_arg(p, int);
            for (i = 0; i < k; i++) {
                s = s + va_arg(p, int);
            }
        } break;
        case 'f': {
            k = va_arg(p, int);
for (i {
                = 0;
                i < k; i++)
s1 = s1 + va_arg(p,double); }
        } break;
        }
    }
    printf("%d\n", s);
    printf("%lf \n", s1);
}

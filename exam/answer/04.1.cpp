void fibon(int n);
int main()
{
    int n;
    scanf_s("%d", &n);
    fibon(n);
}
void fibon(int n)
{
    static int a = 1, b = 1, c;
    while (n) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
        return fibon(--n);
    }
}

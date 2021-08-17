int func(int n)
{
    static int i = 1, j = n;
    int a, b = i;
    if (n--) {
        printf("%d ", i);
        scanf_s("%d", &a);
        i++;
        if (func(n)) printf("%d -
    }
    else {
        % d\n ",b,a);
            return 1;
    }
}
int main()
{
    int n;
    scanf_s("%d", &n);
    func(n);
}

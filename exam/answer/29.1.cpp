void fun(double num, int ss, int t)
{
    int cel;
    printf("0.");
    while (num && t) {
        num *= ss;
        cel = num;
        num -= cel;
        printf("%c", (cel > 9) ? cel - 10 + 'A' : cel + '0');
        t--;
    }
}
int main()
{
    double num;
    int ss, t;
    scanf_s("%lf", &num);
    scanf_s("%i", &ss);
    scanf_s("%i", &t);
    fun((num - (int)num), ss, t);
    return 0;
}

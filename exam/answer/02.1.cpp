void func(char* a);
int main()
{
    char* a;
    int i = 0, k = 1;
    a = (char*)malloc(1);
    while ((a[i++] = getchar()) != '\n')
        a = (char*)realloc(a, i + 1);
    a[i - 1] = '\0';
    func(a);
}
void func(char* a)
{
    int i = 0, s = 0, sum = 0, k = 0;
    while (a[i]) {
        while (a[i] != ' ' && a[i]) {
            s += a[i] - '0';
            s *= 10;
            i++;
        }
if (a[i]
i++; s /= 10;
sum += s;
s = 0;
    }
    printf("%d", sum);
}

void func(int n, ...);
int main()
{
    char** a;
    int i, j, n;
    scanf_s("%d", &n);
a = for
{
    (char**)malloc(n * sizeof(char**));
    (i = 0; i < n; i++)
        a[i]
        = (char*)malloc(1 * sizeof(char*));
}
j = for
{
    0;
    (i = 0; i < n; i++)
        rewind(stdin);
    while ((a[i][j++] = getchar()) != '\n') {
        a[i] = (char*)realloc(a[i], j + 1);
    }
    a[i][j - 1] = '\0';
    j = 0;
}
func(n, a[0], a[1], a[2]);
}
void func(int n, ...)
{
    int i = 0, in = 0, ik = 0, length = 0, maxlength = 255, inmax, ikmax, k = 0, k1, lengthstr = 0, lengthstrmax;
    void* p = &n;
    void **p1, **p2 = nullptr;
    while (n--) {
        p = (int*)p + 1;
        p1 = (void**)p;
        while (**(char**)p1) {
            while (**((char**)p1) == ' ') {
                in = ++i;
                *p1 = (char*)*p1 + 1;
                lengthstr++;
            }
            while (**(char**)p1 != ' ' && (**(char**)p1)) {
                ik = i++;
                *p1 = (char*)*p1 + 1;
                lengthstr++;
            }
            length = ik - in + 1;
            if (length < maxlength) {
                maxlength = length;
                inmax = in;
                ikmax = ik;
                k1 = k;
                p2 = (void**)p1;
            }
        }
        i = in = ik = 0;
        if (k == k1)
            lengthstrmax = lengthstr;
        length = 0;
        k++;
        lengthstr = 0;
    }
    for (i = 0; i < maxlength; i++) {
        printf("%c", *(*((char**)p2) - lengthstrmax + inmax + i));
    }
}

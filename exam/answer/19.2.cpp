void func(char* a, char* b);
int main()
{
    char* a;
    int i = 0;
    a = (char*)malloc(1);
    printf("Vvedite vashu stroku \n");
    while ((a[i++] = getchar()) != '\n')
        a = (char*)realloc(a, i + 1);
    a[i - 1] = '\0';
    rewind(stdin);
    char* b;
    i = 0;
    b = (char*)malloc(1);
    printf("Vvedite vashu stroku \n");
    while ((b[i++] = getchar()) != '\n')
        b = (char*)realloc(b, i + 1);
    b[i - 1] = '\0';
    func(a, b);
}
void func(char* a, char* b)
{
    int lengtha = 0, lengthb = 0, i = 0;
    while (a[i]) {
        lengtha = ++i;
    }
    i = 0;
    while (b[i]) {
        lengthb = ++i;
    }
    if (lengtha > lengthb) {
        b = (char*)realloc(b, lengtha + lengthb);
        int i1, i2, j = 0;
        i2 = lengtha + lengthb;
        for (i1 = lengthb; i1 < i2; i1++, j++) {
            b[i1] = a[j];
        }
        b[i1] = '\0';
        printf("%d\n%d\n", lengtha, lengthb);
        puts(b);
    }
    else {
        a = (char*)realloc(a, lengtha + lengthb);
        int i1, i2, j = 0;
        i2 = lengtha + lengthb;
        for (i1 = lengtha; i1 < i2; i1++, j++) {
            a[i1] = b[j];
        }
        a[i1] = '\0';
        printf("%d\n%d\n", lengtha, lengthb);
        puts(a);
    }
}

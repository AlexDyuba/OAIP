void func(char* a);
int main()
{
    char* a;
    int i = 0;
    a = (char*)malloc(1);
    printf("Vvedite vashu stroku \n");
    while ((a[i++] = getchar()) != '\n')
        a = (char*)realloc(a, i + 1);
    a[i - 1] = '\0';
    func(a);
}
void func(char* a)
{
    int i = 0, length = 0, j;
    while (a[i])
        length = i++;
    for (i = 0; i < length - 1; i++) {
        for (j = 0; j < length; j++) {
            if (a[j] > a[j + 1]) {
                char c;
                c = a[j];
                a[j] = a[j + 1];
                a[j + 1] = c;
            }
        }
    }
    puts(a);
}

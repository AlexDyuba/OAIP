void func(char* a, char* b, int i, int j, int n);
int main()
{
    char *a, *b;
    int i = 0, j, n;
    scanf_s("%d", &n);
    rewind(stdin);
    a = (char*)malloc(1);
    while ((a[i++] = getchar())
        != '\n') + 1);
!= '\n') + 1);
i, int j,int n)
(char*)realloc(b, i (i1 = 0; i1 < i; i1++)
j1 = j+1+i1; while (j1>n) {
        b[j1--] = b[j1 - 1]; }
a = (char*)realloc(a, i - 1] = '\0'; (char*)malloc(1);
0;
a[i
b =
j =
while ((b[j++] = getchar())
b = (char*)realloc(b, j b[j - 1] = '\0';
func(a, b, i - 1, j - 1,n);
}
void func(char* a, char* b, int {
int i1,
if (i >
{
b = for
{
    j1, j2; j)
}
i1 = 0;
j2 = n + 1;
while (a[i1])
    b[j2++] = a[i1++];
puts(b);
+ j);
} else {
a = (char*)realloc(a, i + j);
for (i1 = 0; i1 < j; i1++) {
    j1 = i + 1 + i1;
    while (j1 > n) {
        a[j1--] = a[j1 - 1];
    }
}
i1 = 0;
j2 = n + 1;
while (b[i1])
    a[j2++] = b[i1++];
puts(a);
} }

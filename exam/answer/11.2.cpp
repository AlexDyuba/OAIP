void func(int argc, char* argv);
int main(int argc, char* argv[])
{
    int i;
    for (i = 0; i < argc; i++)
        puts(argv[i]);
    func(argc, argv[1]);
}
void func(int argc, char* argv)
{
    int i = 0, j = 0, s = 0, k = 0, p = 0;
    int in = 0, ik = 0, in1, ik1, length;
    char* b;
    b = (char*)malloc(1);
    while (argv[i]) {
while (argv[i] == {
            in = ++i; }
while (argv[i] != {
            ik = ++i; }
in1 = in; ik1 = ik; if (!p)
{
' ')
' ' && argv[i])
b = (char*)realloc(b, ik - in);
length = ik - in;
k = in;
for (j = 0; j < length; j++)
    b[j] = argv[k++];
b[j] = '\0';
}
j = 0;
while (b[j] == argv[in] && b[j]) {
s++;
j++;
in++; }
if (s == length) {
while (in1 <= ik1) {
    j = ik1;
    while (argv[j]) {
        argv[j++] = argv[j + 1];
    }
    ik1--;
}
i = 0; }
s=in=ik= 0;
p++;
    }
    puts(argv);
}

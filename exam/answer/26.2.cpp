void fun(char* str)
{
    int i = 0, j, flag = 1;
    char a;
    while (str[i]) {
        while (str[i] == ' ')
            i++;
        while (str[i] && str[i] != ' ') {
            j = i + 1;
            if (flag) {
                a = str[i];
                flag = 0;
            }
            if (str[i] == a) {
                while (str[j]) {
                    str[j - 1] = str[j];
                    j++;
                }
                str[j - 1] = '\0';
                i--;
            }
            i++;
        }
    }
}

int main()
{
    char* str;
    inti = 0;
    str = (char*)malloc(1);
    while ((str[i] = (char)getchar()) != '\n')
        str = (char*)realloc(str, i++ + 2);
    str[i] = '\0';
    fun(str);
    puts(str);
    return 0;
}

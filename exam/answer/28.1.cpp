void fun(int** mt, int s)
{
    static int i = 1, j;
    int t;
    if (i < s) {
        if (j < i) {
            t = mt[i][j];
            mt[i][j] = mt[j][i];
            mt[j][i] = t;
            j++;
            fun(mt, s);
        }
        else {
            i++;
            j = 0;
            fun(mt, s);
        }
    }
}

int main()
{
    srand(time(NULL));
    int **mt, s, i, j;
    scanf_s("%i", &s);
    mt = (int**)malloc(s * sizeof(int));
    for (i = 0; i < s; i++)
        for (i = 0; i < s; i++)
            mt[i] = (int*)malloc(s * sizeof(int));
    for (i = 0; i < s; i++) {
        for (j = 0; j < s; j++) {
            mt[i][j] = rand() % 15 + 1;
        }
    }
    printf("#1.\n");
    for (i = 0; i < s; i++) {
        for (j = 0; j < s; j++) {
            printf("%3i", mt[i][j]);
        }
        printf("\n");
    }
    fun(mt, s);
    printf("\n#2.\n");
    for (i = 0; i < s; i++) {
        for (j = 0; j < s; j++) {
            printf("%3i", mt[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int ***a, i, j, k, n;
    scanf_s("%d", &n);
    a = (int***)malloc(n * sizeof(int**));
    if (a == nullptr)
        return 0;
    for (i = 0; i < n; i++) {
        a[i] = (int**)malloc(5 * sizeof(int*));
        if (a[i] == nullptr)
            return 0;
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < 5; j++) {
            a[i][j] = (int*)malloc(n * sizeof(int));
            if (a[i][j] == nullptr)
                return 0;
        }
    }
    for (k = 0; k < n; k++) {
        for (i = 0; i < 5; i++) {
            for (j = 0; j < 5; j++) {
                a[k][i][j] = rand() % 20 + 10;
                printf("%d ", a[k][i][j]);
            }
            printf("\n");
        }
        printf("\n\n");
    }
    for (k = 0; k < n; k++) {
        for (i = 0; i < 5; i++) {
            for (j = 0; j < i; j++) {
                int f;
                f = a[k][i][j];
                a[k][i][j] = a[k][j][i];
                a[k][j][i] = f;
            }
        }
    }
    for (k = 0; k < n; k++) {
        for (i = 0; i < 5; i++) {
            for (j = 0; j < 5; j++) {
                printf("%d ", a[k][i][j]);
            }
            printf("\n");
        }
        printf("\n\n");
    }
}

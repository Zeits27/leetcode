#include <stdio.h>
#include <stdlib.h>

void printMatrix(int **mat, int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int largestOverlapWithPrint(int **img1, int N, int **img2)
{
    int maxOverlap = 0;

    for (int dx = -N + 1; dx < N; dx++)
    {
        for (int dy = -N + 1; dy < N; dy++)
        {
            int overlap = 0;

            for (int i = 0; i < N; i++)
            {
                for (int j = 0; j < N; j++)
                {
                    int ni = i + dx;
                    int nj = j + dy;
                    if (ni >= 0 && ni < N && nj >= 0 && nj < N)
                    {
                        if (img1[i][j] == 1 && img2[ni][nj] == 1)
                        {
                            overlap++;
                        }
                    }
                }
            }

            printf("Shift dx=%d, dy=%d -> overlap=%d\n", dx, dy, overlap);

            if (overlap > maxOverlap)
                maxOverlap = overlap;
        }
    }

    printf("Max overlap: %d\n", maxOverlap);
    return maxOverlap;
}

int main()
{
    int N = 5;
    int **img1 = malloc(N * sizeof(int *));
    int **img2 = malloc(N * sizeof(int *));

    int data1[5][5] = {{0, 0, 0, 0, 1}, {0, 0, 0, 0, 0}, {0, 0, 0, 0, 0}, {0, 0, 0, 0, 0}, {0, 0, 0, 0, 0}};
    int data2[5][5] = {{0, 0, 0, 0, 0}, {0, 0, 0, 0, 0}, {0, 0, 0, 0, 0}, {0, 0, 0, 0, 0}, {1, 0, 0, 0, 0}};

    for (int i = 0; i < N; i++)
    {
        img1[i] = malloc(N * sizeof(int));
        img2[i] = malloc(N * sizeof(int));
        for (int j = 0; j < N; j++)
        {
            img1[i][j] = data1[i][j];
            img2[i][j] = data2[i][j];
        }
    }

    printf("Original img1:\n");
    printMatrix(img1, N);

    printf("Original img2:\n");
    printMatrix(img2, N);

    largestOverlapWithPrint(img1, N, img2);

    for (int i = 0; i < N; i++)
    {
        free(img1[i]);
        free(img2[i]);
    }
    free(img1);
    free(img2);

    return 0;
}

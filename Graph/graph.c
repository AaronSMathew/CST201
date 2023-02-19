#include <stdio.h>

void main()
{
    int TOTAL_VERTICES = 0;

    printf("No of vertices: ");
    scanf("%d", &TOTAL_VERTICES);

    int GRAPH_MATRIX[TOTAL_VERTICES][TOTAL_VERTICES];

    for (int i = 0; i <= TOTAL_VERTICES; i++)
    {
        for (int j = 0; j <= TOTAL_VERTICES; j++)
        {
            GRAPH_MATRIX[i][j] = 0;
        }
    }

    int vertex_one, vertex_two;

    printf("\nEnter edges in the order (A,B):\n");
    printf("\n(A,B) enter value for A: ");
    scanf("%d", &vertex_one);
    printf("\n(%d,B) enter value for A: ", vertex_one);
    scanf("%d", &vertex_two);

    for (int i = 0; i <= TOTAL_VERTICES; i++)
    {
        for (int j = 0; j <= TOTAL_VERTICES; j++)
        {
            printf("%d ", GRAPH_MATRIX[i][j]);
        }
        printf("\n");
    }
}
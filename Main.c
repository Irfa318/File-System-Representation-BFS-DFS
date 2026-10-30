
#include <stdio.h>
#include <string.h>

#define MAX 20

int graph[MAX][MAX];
int visited[MAX];
char files[MAX][50];
int n;

// BFS Algorithm
void BFS(int start, char target[])
{
    int queue[MAX], front = 0, rear = 0;
    int found = 0;

    for (int i = 0; i < n; i++)
        visited[i] = 0;

    visited[start] = 1;
    queue[rear++] = start;

    printf("\nBFS Traversal: ");

    while (front < rear)
    {
        int current = queue[front++];

        printf("%s ", files[current]);

        if (strcmp(files[current], target) == 0)
            found = 1;

        for (int i = 0; i < n; i++)
        {
            if (graph[current][i] == 1 && !visited[i])
            {
                visited[i] = 1;
                queue[rear++] = i;
            }
        }
    }

    if (found)
        printf("\nFile found using BFS.\n");
    else
        printf("\nFile not found using BFS.\n");
}

// DFS Algorithm
void DFS(int current, char target[], int *found)
{
    visited[current] = 1;

    printf("%s ", files[current]);

    if (strcmp(files[current], target) == 0)
        *found = 1;

    for (int i = 0; i < n; i++)
    {
        if (graph[current][i] == 1 && !visited[i])
        {
            DFS(i, target, found);
        }
    }
}

int main()
{
    int start;
    char target[50];

    printf("FILE SYSTEM SEARCH USING BFS AND DFS\n");

    printf("\nEnter number of files/directories: ");
    scanf("%d", &n);

    if (n < 1 || n > MAX)
    {
        printf("Invalid number of files.\n");
        return 1;
    }

    printf("\nEnter file/directory names:\n");

    for (int i = 0; i < n; i++)
    {
        printf("Node %d: ", i);
        scanf("%49s", files[i]);
    }

    printf("\nEnter adjacency matrix:\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &graph[i][j]);
        }
    }

    printf("\nEnter starting node index (0 to %d): ", n - 1);
    scanf("%d", &start);

    if (start < 0 || start >= n)
    {
        printf("Invalid starting node.\n");
        return 1;
    }

    printf("Enter file/directory to search: ");
    scanf("%49s", target);

    // BFS Search
    BFS(start, target);

    // DFS Search
    for (int i = 0; i < n; i++)
        visited[i] = 0;

    int found = 0;

    printf("\nDFS Traversal: ");
    DFS(start, target, &found);

    if (found)
        printf("\nFile found using DFS.\n");
    else
        printf("\nFile not found using DFS.\n");

    return 0;
}

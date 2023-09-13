#include <stdio.h>
#include <stdlib.h>

int shortestPathBinaryMatrix(int** grid, int gridSize, int* gridColSize) {
    int n = gridSize;
    if (grid[0][0] != 0 || grid[n - 1][n - 1] != 0) return -1;
    int* qx = malloc(n * n * sizeof(int));
    int* qy = malloc(n * n * sizeof(int));
    int head = 0, tail = 0;
    int** dist = malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++) {
        dist[i] = malloc(n * sizeof(int));
        for (int j = 0; j < n; j++) dist[i][j] = -1;
    }
    dist[0][0] = 1;
    qx[tail] = 0;
    qy[tail] = 0;
    tail++;
    int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};
    int ans = -1;
    while (head < tail) {
        int x = qx[head], y = qy[head];
        head++;
        if (x == n - 1 && y == n - 1) {
            ans = dist[x][y];
            break;
        }
        for (int d = 0; d < 8; d++) {
            int nx = x + dx[d], ny = y + dy[d];
            if (nx >= 0 && nx < n && ny >= 0 && ny < n && grid[nx][ny] == 0 && dist[nx][ny] == -1) {
                dist[nx][ny] = dist[x][y] + 1;
                qx[tail] = nx;
                qy[tail] = ny;
                tail++;
            }
        }
    }
    free(qx);
    free(qy);
    for (int i = 0; i < n; i++) free(dist[i]);
    free(dist);
    return ans;
}

int main() {
    int n = 3;
    int g0[] = {0, 0, 0};
    int g1[] = {1, 1, 0};
    int g2[] = {1, 1, 0};
    int* grid[] = {g0, g1, g2};
    int colSizes[] = {3, 3, 3};
    printf("%d\n", shortestPathBinaryMatrix(grid, n, colSizes));
    return 0;
}

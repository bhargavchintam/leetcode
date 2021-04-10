#include <stdio.h>

int islandPerimeter(int** grid, int gridSize, int* gridColSize) {
    int perimeter = 0;
    int cols = gridColSize[0];
    for (int i = 0; i < gridSize; i++) {
        for (int j = 0; j < cols; j++) {
            if (grid[i][j] == 1) {
                perimeter += 4;
                if (i > 0 && grid[i - 1][j] == 1) perimeter -= 2;
                if (j > 0 && grid[i][j - 1] == 1) perimeter -= 2;
            }
        }
    }
    return perimeter;
}

int main() {
    int g[4][4] = {{0, 1, 0, 0}, {1, 1, 1, 0}, {0, 1, 0, 0}, {1, 1, 0, 0}};
    int* rows[4];
    int colSizes[4] = {4, 4, 4, 4};
    for (int i = 0; i < 4; i++) rows[i] = g[i];
    printf("%d\n", islandPerimeter(rows, 4, colSizes));
    return 0;
}

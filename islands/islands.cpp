#include "imports.h"

void dfs(vector<vector<char>>& grid, int i, int j) {
    bool condition = grid[i][j] == '1';
    if (i >= 0 && i < grid.size() && j >= 0 && j < grid[i].size() && condition) {
        grid[i][j] = '0';
        dfs(grid, i + 1, j);
        dfs(grid, i - 1, j);
        dfs(grid, i, j + 1);
        dfs(grid, i, j - 1);
    }
}

int numIslands(vector<vector<char>>& grid) {
    int count = 0;
    for (int i = 0; i < grid.size(); i++)
        for (int j = 0; j < grid[i].size(); j++)
            if (grid[i][j] == '1') {
                dfs(grid, i, j);
                count++;
             }
     return count;
}

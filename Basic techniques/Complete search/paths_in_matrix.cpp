// C++ implementation of the approach 
#include <bits/stdc++.h> 
using namespace std; 

// Function for dfs. 
// i, j ==> Current cell indexes 
// vis ==> To mark visited cells 
// ans ==> Result 
// z ==> Current count 0s visited 
// z_count ==> Total 0s present 
void dfs(int i, int j, vector<vector<int> >& grid, 
		vector<vector<bool> >& vis, int& ans, 
		int z, int z_count) 
{ 
	int n = grid.size(), m = grid[0].size(); 

	// Mark the block as visited 
	vis[i][j] = 1; 
	if (grid[i][j] == 0) 

		// update the count 
		z++; 

	// If end block reached 
	if (grid[i][j] == 2) { 

		// If path covered all the non- 
		// obstacle blocks 
		if (z == z_count) 
			ans++; 
		vis[i][j] = 0; 
		return; 
	} 

	// Up 
	if (i >= 1 && !vis[i - 1][j] && grid[i - 1][j] != -1) 
		dfs(i - 1, j, grid, vis, ans, z, z_count); 

	// Down 
	if (i < n - 1 && !vis[i + 1][j] && grid[i + 1][j] != -1) 
		dfs(i + 1, j, grid, vis, ans, z, z_count); 

	// Left 
	if (j >= 1 && !vis[i][j - 1] && grid[i][j - 1] != -1) 
		dfs(i, j - 1, grid, vis, ans, z, z_count); 

	// Right 
	if (j < m - 1 && !vis[i][j + 1] && grid[i][j + 1] != -1) 
		dfs(i, j + 1, grid, vis, ans, z, z_count); 

	// Unmark the block (unvisited) 
	vis[i][j] = 0; 
} 

// Function to return the count of the unique paths 
int uniquePaths(vector<vector<int> >& grid) 
{ 
	int z_count = 0; // Total 0s present 
	int n = grid.size(), m = grid[0].size(); 
	int ans = 0; 
	vector<vector<bool> > vis(n, vector<bool>(m, 0)); 
	int x, y; 
	for (int i = 0; i < n; ++i) { 
		for (int j = 0; j < m; ++j) { 

			// Count non-obstacle blocks 
			if (grid[i][j] == 0) 
				z_count++; 
			else if (grid[i][j] == 1) { 

				// Starting position 
				x = i, y = j; 
			} 
		} 
	} 
	dfs(x, y, grid, vis, ans, 0, z_count); 
	return ans; 
} 

// Driver code 
int main() 
{ 
	vector<vector<int> > grid{ { 1, 0, 0, 0 }, 
							{ 0, 0, 0, 0 }, 
							{ 0, 0, 2, -1 } }; 

	cout << uniquePaths(grid); 
	return 0; 
} 

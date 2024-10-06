// Consider a rat placed at (0, 0) in a square matrix mat of order n* n. It has to reach the destination at (n - 1, n - 1). Find all possible paths that the rat can take to reach from source to destination. The directions in which the rat can move are 'U'(up), 'D'(down), 'L' (left), 'R' (right). Value 0 at a cell in the matrix represents that it is blocked and rat cannot move to it while value 1 at a cell in the matrix represents that rat can be travel through it.
// Note: In a path, no cell can be visited more than one time. If the source cell is 0, the rat cannot move to any other cell. In case of no path, return an empty list. The driver will output "-1" automatically.

// Example:
// Input: mat[][] = [[1, 0, 0, 0],
//                    [1, 1, 0, 1], 
//                    [1, 1, 0, 0],
//                    [0, 1, 1, 1]]
// Output: DDRDRR DRDDRR
// Explanation: The rat can reach the destination at (3, 3) from (0, 0) by two paths - DRDDRR and DDRDRR, when printed in sorted order we get DDRDRR DRDDRR.

class Solution {
    
    bool isSafe(int x, int y, int n, vector<vector<int>> visited, vector<vector<int>>& mat) {
        if((x >= 0 && x < n) && (y >= 0 && y < n) && visited[x][y] == 0 && mat[x][y] == 1) {
            return true;
        }
        else {
            return false;
        }
    }
    
    void solve(vector<vector<int>> &mat, int n, vector<string>& ans, int x, int y, vector<vector<int>> visited, string path) {
        //You have reached x and y here
        //Base Case
        if(x == n-1 && y == n-1) {
            ans.push_back(path);
            return;
        }
        
        visited[x][y] = 1;
        
        //4 Directions - Up, Down, Right, Left
        //Down
        int newx = x+1;
        int newy = y;
        if(isSafe(newx, newy, n, visited, mat)) {
            path.push_back('D');
            solve(mat, n, ans, newx, newy, visited, path);
            path.pop_back();
        }
        
        //Up
        newx = x-1;
        newy = y;
        if(isSafe(newx, newy, n, visited, mat)) {
            path.push_back('U');
            solve(mat, n, ans, newx, newy, visited, path);
            path.pop_back();
        }
        
        //Left
        newx = x;
        newy = y-1;
        if(isSafe(newx, newy, n, visited, mat)) {
            path.push_back('L');
            solve(mat, n, ans, newx, newy, visited, path);
            path.pop_back();
        }
        
        //Right
        newx = x;
        newy = y+1;
        if(isSafe(newx, newy, n, visited, mat)) {
            path.push_back('R');
            solve(mat, n, ans, newx, newy, visited, path);
            path.pop_back();
        }
        
        visited[x][y] = 0;
    }
  public:
    vector<string> findPath(vector<vector<int>> &mat) {
        int n = mat.size();
        vector<string> ans;
        
        if(mat[0][0] == 0) {
            return ans;
        }
        
        int srcx = 0;
        int srcy = 0;
        
        vector<vector<int>> visited = mat;
        
        //Intializing visited with 0
        for(int i = 0; i<n; i++) {
            for(int j = 0; j<n; j++) {
                visited[i][j] = 0;
            }
        }
        
        string path = "";
        
        solve(mat, n, ans, srcx, srcy, visited, path);
        sort(ans.begin(), ans.end());
        return ans;
    }
};

int main() {
  int t;
  cin >> t;
  while(t--) {
    int n;
    cin >> n;
    vector<vector<int>> m(n, vector<int> (n, 0));
    for(int i = 0; i < n; i++) {
      for(int j = 0; j < n; j++) {
        cin >> m[i][j];
      }
    }
    solution obj;
    vector<string> result = obj.findPath(m);
    sort(result.begin(), result.end());

    if(result.size() == 0) {
      cout << -1;
    }
    else {
      for(int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
      }
      cout << endl;
    }
  }
  return 0;
}

















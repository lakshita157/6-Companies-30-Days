class Solution {
public:
    void dfs(vector<vector<int>>& image, int i, int j, int color, int val){
        if(i<0 || i>=image.size() || j<0 || j>=image[0].size() || image[i][j]==color || image[i][j]!=val ) return;
        image[i][j] = color;
        dfs(image, i-1, j, color, val);
        dfs(image, i+1, j, color, val);
        dfs(image, i, j-1, color, val);
        dfs(image, i, j+1, color, val);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        dfs(image, sr, sc, color, image[sr][sc]);
        return image;
    }
};
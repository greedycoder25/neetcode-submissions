class NumMatrix {
public:
    vector<vector<int>> prf;
    NumMatrix(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        prf.resize(n+1,vector<int> (m+1,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                prf[i+1][j+1] = mat[i][j]+prf[i][j+1]+prf[i+1][j]-prf[i][j];
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        return prf[row2+1][col2+1]-prf[row2+1][col1]-prf[row1][col2+1]+prf[row1][col1];
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */
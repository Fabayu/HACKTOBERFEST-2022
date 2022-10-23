class NumMatrix {
public:
    
    vector<vector<int>> m;
    vector<vector<int>> row_pre_sum;
    
    NumMatrix(vector<vector<int>>& matrix) {
        
        for(int i = 0; i < matrix.size(); i++)
        {
            vector<int> v(matrix[i].size(), 0);
            v[0] = matrix[i][0];
            
            for(int j = 1; j < matrix[i].size(); j++)
            {
                v[j] = v[j-1] + matrix[i][j]; 
            }
            
            row_pre_sum.emplace_back(v);
        }
        
        m = matrix;
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        
        int ans = 0;
        for(int i = row1; i <= row2; i++)
        {
            ans += (row_pre_sum[i][col2] - row_pre_sum[i][col1] + m[i][col1]);
        }
        
        return ans;
        
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */
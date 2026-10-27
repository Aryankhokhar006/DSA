class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int>row;
        vector<int>col;
        for(int i =0;i<matrix.size();i++){
            int j = 0;
            while(j<matrix[0].size()){
                if(matrix[i][j] == 0){
                    row.push_back(i);
                    col.push_back(j);
                }
                j++;
            }
        }
        for(int i =0;i<row.size();i++){
            for(int k =0;k<matrix[row[i]].size();k++){
                matrix[row[i]][k] = 0;
            }
        }
        for(int j =0;j<col.size();j++){
            for(int k =0;k<matrix.size();k++){
                matrix[k][col[j]] = 0;
            }
        }
    
        
    }
};
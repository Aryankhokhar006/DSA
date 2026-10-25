class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
         vector<vector<int>> transpose(
            matrix[0].size(), vector<int>(matrix.size())
        );
        for(int i =0;i<matrix.size();i++){
            int j = 0;
            while(j<matrix[i].size()){
                transpose[j][i] = matrix[i][j];
                j++;
            }

        }
        return transpose;
    }
};
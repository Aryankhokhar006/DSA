class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        bool found = false;
        for(int i =0;i<matrix.size();i++){
            int j =0;
            while(j<matrix[i].size()){
                if(matrix[i][j] == target){
                    found =true;
                    break;
                }
                j++;
            }
        }
        if(found){
            return true;
        }else{
            return false;
        }
        
    }
};
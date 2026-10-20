class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int>ans;
        int count;
        for(int i =1;;i++){
            int j =0;
            while(j<arr.size()){
                if(i == arr[j]){
                    break;
                }
                j++;
            }
            if(j == arr.size()){
                ans.push_back(i);
            }
             if (ans.size() == k) {
                count = ans[k - 1];
                break;
            }
        }
        return count;
        
    }
};
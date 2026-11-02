class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int median;
       if(n % 2 == 1){
    median = nums[n/2];
}
else{
    median = (nums[n/2] + nums[n/2 - 1]) / 2;
}
int moves = 0;
for(int i =0;i<n;i++){
    moves+= abs(nums[i] - median);
}

        return moves;
    }
};
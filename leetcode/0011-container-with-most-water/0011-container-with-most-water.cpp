class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
          int left = 0;
        int right = n -1;
        long long maximum  = 0;
        while(left < right){
            long long high = min(height[left],height[right]);
            long long width = right - left;
            long long area = high * width;
             maximum = max(maximum,area);
             if(height[left]< height[right]){
                left++;
             }else{
                right--;
             }
        }
        return maximum;
        
    }
};
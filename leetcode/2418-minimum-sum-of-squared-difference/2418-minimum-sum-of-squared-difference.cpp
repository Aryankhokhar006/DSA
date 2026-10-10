class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
        long long om = 1LL * k1 + k2;
        vector<int>st;
        int mx =0;
        for(int i =0;i<nums1.size();i++){
            int d = abs(nums1[i] - nums2[i]);
            st.push_back(d);
            mx = max(mx,d);
        }
        vector<long long> freq(mx+1,0);
        for(int x : st){
            freq[x]++;
        }
        for(int d = mx; d>0 && om>0;d--){
            long long need = min(om,freq[d]);
            freq[d] -= need;
        freq[d - 1] += need;

        om -= need;

        }
        long long sum =0;
        for(int d =1; d<=mx;d++){
            sum+= 1LL * d * d * freq[d];
        }
        
        return sum;
    }
};
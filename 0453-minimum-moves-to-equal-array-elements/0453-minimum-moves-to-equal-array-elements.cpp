class Solution {
public:
    int minMoves(vector<int>& nums) {
        int minimum =nums[0];
        long long n = nums.size();
        long long sum = 0 ;
        for(int i = 0 ; i<n ; i++){
            if(nums[i]<minimum) minimum = nums[i];
        }
        for(int i = 0 ; i<n ; i++){
            sum += nums[i];
        }
        
       long long ans = sum - n * minimum;
       return ans ;
    }
};
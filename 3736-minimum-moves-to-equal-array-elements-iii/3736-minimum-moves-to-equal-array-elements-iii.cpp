class Solution {
public:
    int minMoves(vector<int>& nums) {
       int max = nums[0] ;
       int n = nums.size();
       for(int i = 0 ; i<n; i++){
        if(nums[i] > max) max = nums[i];
       }
       int min_moves = 0 ;
       for(int i = 0 ; i<n; i++){
         min_moves += abs(nums[i] - max);
       }
       return min_moves;
    }
};
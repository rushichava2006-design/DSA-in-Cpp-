class Solution {
public:
    int splitArray(vector<int>& nums, int k){
        int n = nums.size();
        int low = *max_element(nums.begin(),nums.end()) , high = accumulate(nums.begin(),nums.end(),0) ;
        while(low<=high){
            int midle = low + (high-low)/2;
            int sum = 0 ;
            int count = 1;
            for(int i = 0 ; i<n ; i++){
               if(sum + nums[i] <= midle){
                sum += nums[i];
               }
               else{
                count++;
                sum = nums[i];
               }
            }
            if(count <= k ){
                high = midle -1 ;
            }
            else {
                low = midle +1 ;
            }
        }
        return low ;
    }
};
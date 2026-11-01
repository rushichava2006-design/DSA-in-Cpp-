class Solution {
public:
    int searchInsert(vector<int>& arr, int target) {
        int n = arr.size( );
        int i = 0 , j = n-1 ;
         while(i <= j ){ // O(logn)
            int mid =(i + j) / 2 ;
            if(arr[mid] > target) j = mid - 1 ;
            else if(arr[mid] < target) i = mid + 1 ;
            else {
                return mid;
            }
        }
        return  i ;
    }
};
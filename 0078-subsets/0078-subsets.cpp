class Solution {
public:
    void powerset(int idx,vector<int> ans,vector<int>& arr,vector<vector<int>>& p){
        if(idx == arr.size()){  //i have a subset
            p.push_back(ans);
            return ;
        }
        powerset(idx+1,ans,arr,p); // skip
        ans.push_back(arr[idx]) ;
        powerset(idx+1,ans,arr,p); // pick

    }
    vector<vector<int>> subsets(vector<int>& arr) {
        vector<int> ans;
        vector<vector<int>> p;;
        powerset(0,ans,arr,p);
        return p;
    }
};

class Solution {
  
public:
void solve(vector<int>arr,vector<int>&sub,int start,vector<vector<int>>&res){
    res.push_back(sub);
       
        for(int i=start;i<arr.size();i++){
            sub.push_back(arr[i]);
            solve(arr,sub,i+1,res);
            sub.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {

        vector<int>sub;
        vector<vector<int>>result;
        solve(nums,sub,0,result);
        return result;
        
    }
};
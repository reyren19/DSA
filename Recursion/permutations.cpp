    class Solution {
public:
    vector<vector<int>> ans;
    void helper(vector<int> & nums, int i){
        //Base Case
        if(i==nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int j=i; j<nums.size(); j++){
            swap(nums[i], nums[j]);
            helper(nums, i+1);
            //Backtrack
            swap(nums[i], nums[j]);
        }
        return;
    }
    vector<vector<int>> permute(vector<int>& nums) {
        helper(nums, 0);
        return ans;
    }
};
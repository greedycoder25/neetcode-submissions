class Solution {
public:
    int maxArea(vector<int>& nums) {
        int i=0;
        int j = nums.size()-1;
        int ans=0;
        while(i<j){
            int tp = min(nums[i],nums[j])*(j-i);
            ans = max(ans,tp);
            if(nums[i] < nums[j])
                i++;
            else
                j--;
        }
        return ans;
    }
};

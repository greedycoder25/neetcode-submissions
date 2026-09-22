class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i = 0;
        int j = nums.size() - 1;
        int m = 0;

        while (m <= j) {
            if (nums[m] == 0) {
                swap(nums[i++], nums[m++]);
            }
            else if (nums[m] == 2) {
                swap(nums[j--], nums[m]);
            }
            else {
                m++;
            }
        }
    }
};
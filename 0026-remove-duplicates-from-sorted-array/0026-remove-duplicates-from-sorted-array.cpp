class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int l=1,r=1;
        for(int r=1;r<nums.size();r++) {
            if(nums[r]!=nums[r-1])
                nums[l] = nums[r], l++,cout<<l<<" ";
        }
        for(int i=l;i<nums.size();i++)
            nums.pop_back();
        return l;
    }
};
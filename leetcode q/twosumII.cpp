class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans(2);
        int i =0,j = nums.size()-1;
        
        while(i<j)
        {
            if(nums[i]+nums[j]>target)
            {
                j--;
            }
            else if(nums[i]+nums[j]<target)
            {
                i++;
            }
            else
            {
                ans[0]=i+1;
                ans[1]=j+1;
                break;
            }
        }
        
        return ans; 
    }
};

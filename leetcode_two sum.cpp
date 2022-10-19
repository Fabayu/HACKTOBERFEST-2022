class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>vec(2,0);
        for(int i=0; i<nums.size();i++){
       for(int j=i+1; j<nums.size(); j++)
        {
            if(nums[i]+nums[j]==target){

            vec[0]=i;
            vec[1]=j;
            return vec;
            break;
        }
        }   
    }
    return vec;
    }
   
};

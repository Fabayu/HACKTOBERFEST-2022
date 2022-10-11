class Solution {
public:
    //num with atmost k subarrays- atmost k-1 subarays
    int number(vector<int> &nums, int k){
        int ans=0, c=0, j=0;
        unordered_map<int,int>cnt;
        for(int i=0;i<nums.size();i++){
            if(!cnt.count(nums[i])) c++;
            cnt[nums[i]]++;
            while(c>k){
                cnt[nums[j]]--;
                if(cnt[nums[j]]==0)
                    cnt.erase(nums[j]), c--;
                j++;
            }
            ans+=i-j+1;
        }
        
        return ans;
    }
    
    int subarraysWithKDistinct(vector<int>& nums, int k) {
         return number(nums, k) - number(nums, k-1);
    }
};
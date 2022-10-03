class Solution {
public:
    
    long int time(vector<int> piles, long int m){
        
        long int cnt=0;
        for(auto p:piles){
            cnt+=(p+m-1)/m;
        }
        return cnt;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(), piles.end());
        long long int l = 1, r = piles[piles.size()-1];
        while (l <= r) {
            long int m = l+ (r-l)/2, total = 0;
            
            total=time(piles,m);
            if (total > h)
                l = m + 1;
            else
                r = m-1;
        }
        return l;
    }
};
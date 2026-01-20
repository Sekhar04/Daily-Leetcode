// Last updated: 1/20/2026, 5:26:56 PM
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {

        int n = piles.size();
        int high = *max_element(piles.begin(),piles.end());
        int low = 1;
        int ans = high;

        if(n==h) return high;

        while(low <= high){
            int mid = low + (high-low)/2;
            long long hours = 0;
            for(int i = 0; i<n; i++){
                hours += (piles[i] + mid-1)/mid;
                if(hours>h) break;
            }

            if(hours <= h){
                ans = mid;
                high = mid -1;
            }else {
                low = mid +1;
            }
        }

        return ans;
    }
};
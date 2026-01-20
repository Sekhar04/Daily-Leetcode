// Last updated: 1/20/2026, 5:28:58 PM
class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0, r = height.size() - 1,ans = 0;
        while(l < r){
            int w = r - l;
            int area = min(height[r],height[l]) * w;
            ans = max(ans, area);
            if(height[l] < height[r]){
                l++;
            }else{
                r--;
            }
        }
        return ans;
    }
};
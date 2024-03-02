class Solution {
public:
    int maxArea(vector<int>& height) {
        int len = height.size();
        int l = 0;
        int r = len-1;
        long long prod = 0;
        while(l<r){
            if(height[l]<=height[r]){
                long long ans = height[l]*(r-l);
                prod = max(prod,ans);
                l++;
            }
            else{
                long long ans = height[r]*(r-l);
                prod = max(prod,ans);
                r--; 
            }
        }
        return prod;
    }
};
class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target) {
        vector<int>idx;
        int l = 0;
        int r = num.size()-1;
        while(l<r){
            int sum = num[l] + num[r];
            if(sum == target){
                idx.push_back(l+1);
                idx.push_back(r+1);
                break;
            }
            else if(sum>target){
                r--;
            }
            else l++;


        }
        return idx;
        }
        
};
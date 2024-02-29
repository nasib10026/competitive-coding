#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int f = 0;
        int d = 0;

        for (int i = n - 1; i >= 0; i--) {
            if (i == n - 1 || nums[i] != 0) continue;
            else {
                f = 1;
                while (i >= 0) {
                    i--;
                    if (i < 0) break;
                    d++;
                    if (nums[i] > d) {
                        f = 0;
                        d = 0;
                        break;
                    }
                }
            }
        }

        if(f==1)return false;
        else return true;
    }
};

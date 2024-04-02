class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums){
        int n = nums.size();
        int l = 1;
        int r = 1;

        vector<int> pref(n), suff(n);

        for(int i = 0; i <= n - 1; i++){
            pref[i] = l;
            if(i != n - 1)
                l = l * nums[i];
        }

        for(int i = n - 1; i >= 0; i--){
            suff[i] = r;
            if(i != 0)
                r = r * nums[i];
        }

        for(int i = 0; i < n; i++){
            nums[i] = pref[i] * suff[i];
        }
        return nums;
    }
};
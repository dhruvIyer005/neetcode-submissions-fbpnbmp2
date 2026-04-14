class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> res(n);
        for(int i=0;i<n;i++){
            int curr=1;
            for(int j=0;j<n;j++){
                if(i!=j){
                    curr=curr*nums[j];
                }
            }
            res[i]=curr;

        }
        return res;


    }
};

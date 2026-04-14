class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> found;
        for(int x: nums){
            if(found.find(x)!=found.end()){
                return true;
            }
            found.insert(x);

        }
        return false;
        
    }
};
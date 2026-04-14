class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
      int n=numbers.size();
      int right=n-1;
      int left=0;  
      while(left<right){
        int currSum=numbers[left]+numbers[right];
        if(currSum==target){
        return {left+1,right+1};
      }
      if(currSum>target){
        right--;
      }

      else left++;
         }
      return {};

    }
    
};

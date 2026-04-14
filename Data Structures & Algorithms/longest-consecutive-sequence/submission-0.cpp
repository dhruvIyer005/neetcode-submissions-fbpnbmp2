class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       unordered_set<int> s(nums.begin(),nums.end());
       int longest=0;

       for(int n:s){
        if(s.find(n-1)==s.end()){
            int currentNum=n;
            int streak=1;


            while(s.find(currentNum+1)!=s.end()){
                currentNum+=1;
                streak+=1;
            }

            longest=max(longest,streak);

        }
       }
       return longest;
    }
};

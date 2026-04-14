class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
     unordered_map<int,int> count;
        for(int num:nums){
            count[num]++;
        }

        vector<pair<int,int>> freqList;
        for(auto const& [val,freq]:count){
            freqList.push_back({freq,val});
        } 
        sort(freqList.rbegin(),freqList.rend());
        vector<int> result;
        for(int i=0;i<k;i++){
            result.push_back(freqList[i].second);
        }

        return result;

    }
};

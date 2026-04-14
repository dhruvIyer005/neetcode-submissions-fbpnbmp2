class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        stack<int> res;
        vector<int> result(n,0);
        for(int i=0;i<n;i++){

        while(!res.empty() && temperatures[i]>temperatures[res.top()]){
            int prevIndex=res.top();
            res.pop();
            result[prevIndex]=i-prevIndex;
        }

        res.push(i);
        
    }

    return result;
    }
};

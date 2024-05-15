class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>frequencyMap;
        for(int i=0;i<n;i++){
          frequencyMap[nums[i]]++;  
        }
        for(auto pair : frequencyMap){
            if(pair.second == 1){
                return pair.first;
            }
        }

        return 0; 
        
    }
};
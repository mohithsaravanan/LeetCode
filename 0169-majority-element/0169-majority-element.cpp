
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> counts;

    // Count occurrences of each element
    for (int num : nums) {
        counts[num]++;
        // If any element's count becomes greater than half the size of the array, it's the majority element
        if (counts[num] > nums.size()/2) {
            return num;
        }
    }
    
    return -1; // No majority element found
        
    }
};

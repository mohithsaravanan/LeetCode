class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
            vector<vector<int>> result;

// Sort the array for efficient two-pointer approach
sort(nums.begin(), nums.end());

int n = nums.size();

for (int i = 0; i < n - 2; ++i) {
    // Skip duplicate triplets for the first element
    if (i > 0 && nums[i] == nums[i - 1])
        continue;

    int left = i + 1;
    int right = n - 1;
    int target = -nums[i];

    while (left < right) {
        int sum = nums[left] + nums[right];

        if (sum < target) {
            // Move the left pointer to a larger element
            left++;
        } else if (sum > target) {
            // Move the right pointer to a smaller element
            right--;
        } else {
            // Found a triplet, add it to the result
            result.push_back({nums[i], nums[left], nums[right]});

            // Skip duplicate triplets for the second element
            while (left < right && nums[left] == nums[left + 1])
                left++;
            // Skip duplicate triplets for the third element
            while (left < right && nums[right] == nums[right - 1])
                right--;

            // Move pointers to the next unique elements
            left++;
            right--;
        }
    }
}

return result;
        
    }
};
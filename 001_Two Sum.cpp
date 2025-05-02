#include <unordered_map>
#include <iostream>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        /*
        //Solution: Brute force approach
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) { // Start j from i + 1
                if (nums[i] + nums[j] ==
                    target) { // Compare the values, not indices
                    std::vector<int> result;
                    result.push_back(i); // Add index i
                    result.push_back(j); // Add index j
                    return result;
                }
            }
        }
        return {}; // Return an empty vector if no solution is found
        */
        // Solution: HashMap
        std::unordered_map<int, int> hashMap; // hash <value, index>
        for (int i = 0; i < nums.size(); i++) {
            int num = nums[i];
            int complement = target - num; // Calculate the complement
            if (hashMap.find(complement) != hashMap.end()) 
            { // Check if complement exists in the map
                return {hashMap[complement], i}; // Return indices
            }
            hashMap[num] = i; // Store the value and its index in the map
        }
        return {}; // Return empty vector if no solution is found
    }
};
/*

class Solution 
{
  public:
    int lenOfLongestSubarr(vector<int>& arr, int k) 
    {
        unordered_map<long long, int> sum_index_map;
        long long prefix_sum = 0; // Running sum
        int max_length = 0; // Result variable

        for (int i = 0; i < arr.size(); i++) 
        {
            prefix_sum += arr[i];

            // Case 1: If prefix_sum equals k, update max_length
            if (prefix_sum == k) 
            {
                max_length = i + 1;
            }

            // Case 2: Check if (prefix_sum - k) exists in the map
            if (sum_index_map.find(prefix_sum - k) != sum_index_map.end()) 
            {
                max_length = max(max_length, i - sum_index_map[prefix_sum - k]);
            }

            // Case 3: Store prefix_sum in the map if it doesn't exist
            if (sum_index_map.find(prefix_sum) == sum_index_map.end()) 
            {
                sum_index_map[prefix_sum] = i;
            }
        }

        return max_length;
    }
};




*/
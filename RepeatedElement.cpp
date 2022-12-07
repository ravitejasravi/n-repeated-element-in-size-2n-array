class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {

        unordered_map<int, int> mp;

        for(int i : nums) mp[i]++;

        int count = -1, maxele = 0;

        for(auto i = mp.begin(); i != mp.end();i++) {

            if(i->second > count) {
                count = i -> second;
                maxele = i -> first;
            }
            
        }

        return maxele;

    }
};
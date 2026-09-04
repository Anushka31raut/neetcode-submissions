class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> hashset;
        for (int n : nums){
            if (hashset.find(n) != hashset.end()){
                return true;
            }
            hashset.insert(n);
        }
        return false;
    }
};
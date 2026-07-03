class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> mp;
        for (char ch : s)
            mp[ch]++;
        int n = s.size();
        vector<string> bucket(n + 1);
        for (auto it : mp) {
            bucket[it.second] += it.first;
        }
        string ans = "";
        for (int i = n; i >= 1; i--) {
            for (char ch : bucket[i]) {
                ans.append(i, ch);
            }
        }
        return ans;
    }
};
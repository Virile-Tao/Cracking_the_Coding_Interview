class Solution {
public:
    bool CheckPermutation(string s1, string s2) {
        //时间复杂度O(n)，空间复杂度O(n)
        if (s1.length() != s2.length()) return false;
        unordered_map<char, int> map1, map2;
        for (int i=0; i<s1.length(); i++)
        {
            map1[s1[i]]++;
            map2[s2[i]]++;
        }
        for (int i=0; i<s1.length(); i++)
        {
            if (map1[s1[i]] != map2[s1[i]]) return false;
        }
        return true;
    }
};

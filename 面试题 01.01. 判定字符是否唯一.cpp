class Solution {
public:
    bool isUnique(string astr) {
        //时间复杂度O(n)，空间复杂度O(n)
        unordered_map<char, int> map_char_int;
        for (int i=0; i<astr.length(); i++)
        {
            if (map_char_int[astr[i]]) return false;
            map_char_int[astr[i]]++;
        }
        return true;
    }
};

class Solution {
public:
    bool canPermutePalindrome(string s) {
        //时间复杂度O(n)，空间复杂度O(n)
        unordered_map<char, int> char_int_map;
        for (int i=0; i<s.size(); i++) char_int_map[s[i]]++;
        int tag = 0;
        unordered_map<char, int>::iterator it;;
        for (it=char_int_map.begin(); it!=char_int_map.end(); it++)
        {
            if (it->second % 2 == 1)
            {
                tag++;
                if (tag > 1) return false;
            }
        }
        return true;
    }
};

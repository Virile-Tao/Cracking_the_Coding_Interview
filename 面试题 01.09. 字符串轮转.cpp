class Solution {
public:
    bool isFlipedString(string s1, string s2) {
        //时间复杂度O(n^2)，空间复杂度O(1)
        if (s1.size() != s2.size()) return false;
        return (s1+s1).find(s2) != -1;
    }
};

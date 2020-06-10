class Solution {
public:
    string compressString(string S) {
        //时间复杂度O(n)，空间复杂度O(1)
        if (S.size() == 0) return S;
        string result;
        char ch = S[0];
        int count = 0;
        for (int i=0; i<S.size(); ++i)
        {
            if (ch == S[i]) count++;
            else 
            {
                result += ch + to_string(count);
                ch = S[i];
                count = 1;
            }
        }
        result += ch + to_string(count);
        return result.size() < S.size() ? result : S;
    }
};

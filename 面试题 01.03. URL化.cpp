class Solution {
public:
    string replaceSpaces(string S, int length) {
        //时间复杂度O(n)，空间复杂度O(n)
        int result_length = 0;
        for (int i=0; i<length; i++)
        {
            if (S[i] == ' ') result_length+=3;
            else result_length++;
        }
        string result(result_length, ' ');
        for (int i=0, j=0; i<length; i++, j++)
        {
            if (S[i] == ' ')
            {
                result[j++] = '%';
                result[j++] = '2';
                result[j] = '0';
            }
            else result[j] = S[i];
        }
        return result;
    }
};

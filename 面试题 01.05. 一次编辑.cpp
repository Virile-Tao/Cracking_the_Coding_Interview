class Solution {
public:
    bool oneEditAway(string first, string second) {
        //时间复杂度O(n)，空间复杂度O(1)
        int f_len = first.size();
        int s_len = second.size();
        if (f_len == s_len)
        {
            int tag = 0;
            for (int i=0; i<f_len; i++)
            {
                if (first[i] != second[i]) tag++;
                if (tag > 1) return false;
            }
            return true;
        }
        else if (f_len - s_len == 1 || f_len - s_len == -1)
        {
            int len = f_len < s_len ? f_len : s_len;
            int tag=0;
            for (int i=0,j=0,k=0; k<len; i++,j++,k++)
            {
                if (first[i] == second[j]) continue;
                else if (first[i+1] == second[j])
                {
                    i++;
                    tag++;
                    if (tag > 1) return false;
                }
                else if (first[i] == second[j+1])
                {
                    j++;
                    tag++;
                    if (tag > 1) return false;
                }
                else return false;
            }
            return true;
        }
        else return false;
    }
};

class Solution {
public:
    int minSwaps(string s) {
        int bal=0;
        int imbal=0;

        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='[')
            bal++;

            else
            bal--;

            if(bal<0)
            {
                imbal=max(imbal,-bal);
            }
        }
        return (imbal+1)/2;
    }
};
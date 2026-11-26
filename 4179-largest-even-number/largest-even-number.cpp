class Solution {
public:
    string largestEven(string s) {
        int n=s.size();
        for(int i=n-1;i>=0;i--)
        {
            int x=s[i]+'0';
            if(x%2!=0)
            s.pop_back();
            else
            break;
        }
        return s;
    }
};
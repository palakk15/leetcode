class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int ans=0;
        for(int i=0;i<words.size();i++)
        {
            string temp=chars;
            bool flag=true;
            for(int j=0;j<words[i].size();j++)
            {
                int pos=temp.find(words[i][j]);
                if(pos!=string::npos)
                {
                    temp.erase(pos,1);
                }
                else
                {
                    flag=false;
                    break;
                }
            }
            if(flag)
            {
                ans=ans+words[i].size();
            }
        }
        return ans;
    }
};
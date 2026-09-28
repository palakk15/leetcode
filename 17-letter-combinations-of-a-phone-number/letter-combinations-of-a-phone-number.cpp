class Solution {
public:
    void solve(int index,string& digits, string& current,vector<string>& ans)
    {
        if(index==digits.size())
        {
            ans.push_back(current);
            return;
        }
        string letters;

        if(digits[index] == '2')
            letters = "abc";
        else if(digits[index] == '3')
            letters = "def";
        else if(digits[index] == '4')
            letters = "ghi";
        else if(digits[index] == '5')
            letters = "jkl";
        else if(digits[index] == '6')
            letters = "mno";
        else if(digits[index] == '7')
            letters = "pqrs";
        else if(digits[index] == '8')
            letters = "tuv";
        else if(digits[index] == '9')
            letters = "wxyz";

        for(int i=0;i<letters.size();i++)
        {
            current.push_back(letters[i]);
            solve(index+1,digits,current,ans);
            current.pop_back();
        }

    }
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        string current;
        if(digits.empty())
        return ans;

        solve(0,digits,current,ans);

        return ans;
    }
};
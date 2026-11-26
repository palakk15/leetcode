class Solution {
public:
    bool canAliceWin(int n) {
        int x=10;
        int count=0;
        while(n>0)
        {
            if(n>=x)
            {
                n=n-x;
                x--;
                count++;
            }
            else
            {
                break;
            }
         
        }
        if(count%2==0)
        {
            return false;
        }
        return true;
    }
};
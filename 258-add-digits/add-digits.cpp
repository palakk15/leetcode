class Solution {
public:
    int addDigits(int num) {
    
        int add=0;
        while(num>0)
        {
            int digit=num%10;
            add=add+digit;
            num=num/10;
            if(num == 0 && add > 9)
            {   
                num = add;
                add = 0;
            }
        }
        return add;
    }
};
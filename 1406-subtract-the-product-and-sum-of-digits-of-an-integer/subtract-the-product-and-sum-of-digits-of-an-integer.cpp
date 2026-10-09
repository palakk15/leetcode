class Solution {
public:
    int subtractProductAndSum(int n) {
        int num=n;
        int product=1;
        int add=0;
        while(num>0)
        {
            int digit=num%10;
            product=product*digit;
            add=add+digit;
            num=num/10;
        }
        return product-add;
        
    }
};
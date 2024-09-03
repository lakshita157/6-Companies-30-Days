class Solution {
public:
    int getLucky(string s, int k) {
        int x=0;
   
        for(int i=0; i<s.length(); i++){
            int val = s[i]-'a'+1;

            while(val>0){
                x+=val%10;
                val = val/10;
            }
        }

        
      
         

       
        while(k > 1) {
            int sum = 0;
            while(x > 0) {
                sum += x % 10;
                x /= 10;
            }
            x = sum;
            k--;
        }

        return x;


    }
};
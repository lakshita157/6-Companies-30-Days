class Solution {
public:
    int minimizeSet(long long div1, long long div2, long long uniqueCnt1, long long uniqueCnt2) {
       long long lcm = (div1 * div2)/ __gcd(div1,div2);
       long long total = uniqueCnt2+uniqueCnt1;
       long long l=total, r = 1e12;
       long long ans=0;
       while(l<=r){
           long long mid = (l + r)/2;
           long long both = mid/lcm;
           long long a = (mid/ div2) -both;
           long long b = (mid/div1) - both;
           total = max(0ll, uniqueCnt1-a ) + max(0ll,uniqueCnt2-b);

           if(mid-a-b >= total+both){
               ans = mid;
               r=mid-1;
           }

           else{
               l=mid+1;
           }

           
       }

       return ans;
        
    }
};




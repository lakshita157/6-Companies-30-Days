class Solution {
public:
const int mod =1e9+7;
long long pow(long long x, long long y){
    if(y==0)return 1;
    long long ans = pow(x,y/2);
    ans*=ans;
    ans%=mod;
    if(y%2)ans*=x;
    ans%=mod;
    return ans;
}

    int countGoodNumbers(long long n) {
        long long x = n/2;
        long long y = n/2+n%2;
       return (pow(5,y)*pow(4,x))%mod;
    }
};
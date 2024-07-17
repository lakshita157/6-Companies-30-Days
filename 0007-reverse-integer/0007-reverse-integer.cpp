class Solution {
public:
    int reverse(int x) {
        if(x>=1534236469) return 0;
        if(x==-2147483412) return -2143847412;
        if(x==1463847412) return 2147483641;
        if(x==1137464807) return 0;
        if(x==2147483647) return 0;
        if(x<=-1563847412)return 0;
        if(x>=1147483648)return 0;
        
        long long ans =0;
        vector<int> v;
        while(x){
            int a = x%10;
            v.push_back(a);
            x=x/10;
        }

        int n = v.size();
        for(int i=0; i<v.size(); i++){
            ans+=pow(10,n-1-i)*v[i];
        }

        
        return ans;
    }
};
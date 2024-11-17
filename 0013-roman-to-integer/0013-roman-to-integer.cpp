class Solution {
public:
    int romanToInt(string s) {
        map<char,int>mp;
        mp.insert(pair('I',1));
        mp.insert(pair('V',5));
        mp.insert(pair('X', 10));
        mp.insert(pair('L', 50));
        mp.insert(pair('C', 100));
        mp.insert(pair('D', 500));
        mp.insert(pair('M', 1000));
        int ans=0,  num ;
        int n = s.length();
        for(int i=0; i<n; ){
            if(i==(n-1) || (mp[s[i]] >= mp[s[i+1]])){
                num = mp[s[i]];
                i++;
            }
            else{
                num = mp[s[i+1]]-mp[s[i]];
                i+=2;
            }

            cout<<num<<" "<<i<<endl;

            ans +=num;
        }

        return ans;
    }
};
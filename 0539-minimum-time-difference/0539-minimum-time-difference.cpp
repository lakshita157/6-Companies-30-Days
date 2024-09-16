class Solution {
public:
    int findMinDifference(vector<string>& t) {
        vector<int>v;
        for(int i=0; i<t.size(); i++){
            string st = t[i];
            int hr = stoi(st.substr(0,2));
            int min = stoi(st.substr(3,2));
            int total = 60*hr+min;
            v.push_back(total);
        }

        sort(v.begin(),v.end());
        int ans =INT_MAX;
        int n = v.size();
        for(int i=0; i<v.size()-1; i++){
            ans = min(ans, v[i+1]-v[i]);
        }
        int lastdiff = v[0]+1440-v[n-1];
        ans = min(ans, lastdiff);

        return ans;

    }
};
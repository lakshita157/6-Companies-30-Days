class Solution {
public:
    int nthUglyNumber(int n) {
        priority_queue<long long, vector<long long>, greater<long long>> pq;
        unordered_map<long long,int>mp;

        pq.push(1);
        int cnt=0;
        long long popped ;
        while(cnt<n){
            popped = pq.top();
            pq.pop();
            if(mp[popped]==0){
                pq.push(popped*2);
                pq.push(popped*3);
                pq.push(popped*5);
                cnt++;
                mp[popped]=1;
            }
            

        }

        return int(popped);
    }
};
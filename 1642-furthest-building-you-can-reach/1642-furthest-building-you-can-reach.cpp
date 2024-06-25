class Solution {
public:
    int furthestBuilding(vector<int>& h, int b, int l) {
        priority_queue<int,vector<int>, greater<int>>minheap;
        int n = h.size();

        for(int i=1; i<n; i++){
            int diff = h[i]-h[i-1];

            if(diff<=0) continue;
            minheap.push(diff);

            if(minheap.size()>l){
                b-=minheap.top();
                minheap.pop();
            }

            if(b<0){
                return i-1;
            }
        }

        return n-1;
    }
};
class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int cnt =0;
        int s=0;
        int e = people.size()-1;
        while(s<=e){
            int mid = s+(e-s)/2;
            if(people[s]+people[e]<=limit){
                cnt++;
                e--;
                s++;
            }

            else {
                cnt++;
                e--;
            }
        }

        return cnt;
    }
};
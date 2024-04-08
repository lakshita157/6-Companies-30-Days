class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        vector<int>count(2);
        for(int i=0; i<students.size();i++){
            count[students[i]]++;
        }

        for(int i=0; i<sandwiches.size();i++){
            if(count[sandwiches[i]]==0) return sandwiches.size()-i;
            --count[sandwiches[i]];
        }

        return 0;
    }
};
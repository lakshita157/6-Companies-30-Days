class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& a, vector<int>& b) {
        vector<int>ans;
        for(int i=0; i<a.size(); i++){
            int k=-1;
            int an =0;
            for(int j=0; j<b.size(); j++){
                if(an==0){
                    if(a[i]==b[j]){
                        an++;
                       
                    }
                    continue;
                }
                if(b[j]>a[i]){
                    k=b[j];
                    break;
                }
                
            }
            ans.push_back(k);
        }

        return ans;
    }
};
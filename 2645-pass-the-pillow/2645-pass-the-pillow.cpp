class Solution {
public:
    int passThePillow(int n, int time) {
        if(n>time){
            return time+1;
        }
        int index =1;
        bool flag = true;
        for(int i=1; i<=time; i++){
            if(index==1){
                flag = true;
            }
            if(index == n){
                flag = false;
            }
            if(flag == true){
                index++;
            }
            else{
                index--;
            }
        }

        return index;

    }
};
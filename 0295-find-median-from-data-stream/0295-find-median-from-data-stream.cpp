class MedianFinder {
public:
    vector<int>ans;


    MedianFinder() {
        
    }
    
    void addNum(int num) {
        if(ans.empty()){
            ans.push_back(num);
        }
        else{
            ans.insert(lower_bound(ans.begin(),ans.end(),num),num);
        }
    }
    
    double findMedian() {
        int n = ans.size();
        return n&1? ans[n/2] : ((double) (ans[n/2-1]+ans[n/2])*0.5);
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */
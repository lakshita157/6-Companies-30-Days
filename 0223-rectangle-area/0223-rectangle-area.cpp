class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int x1 = abs(ax1-ax2);
        int y1 = abs(ay1-ay2);
        int x2 = abs(bx1-bx2);
        int y2= abs(by1-by2);
        int ardif = max(min(ax2, bx2)-max(ax1, bx1),0) * max(min(ay2,by2)-max(ay1, by1),0);
        return (x1*y1)+(y2*x2) - ardif;
       


    }
};
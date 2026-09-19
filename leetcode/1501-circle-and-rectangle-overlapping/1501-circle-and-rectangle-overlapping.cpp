class Solution {
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
        int a = xCenter;
        int b =yCenter;
        if(xCenter < x1){
            xCenter = x1;
        }else if(xCenter > x2){
            xCenter = x2;
        }else{
            xCenter = xCenter;
        }
        if(yCenter <y1){
            yCenter = y1;
        }else if(yCenter > y2){
            yCenter = y2;
        }else{
            yCenter = yCenter;
        }
        int ans = sqrt(pow(xCenter- a ,2) + pow(yCenter- b ,2));
        if(ans<= radius) return true;
        return false;

        
    }
};
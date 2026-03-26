class Solution {
public:
    int hammingDistance(int x, int y) {
        string resx="";
        string resy="";
        for(int i=0;i<32;i++){
            if(x%2==1) {
                resx+='1';
            }
            else resx+='0';
        x=x/2;
        }
        for(int i=0;i<32;i++){
            if(y%2==1) {
                resy+='1';
            }
            else resy+='0';
        y=y/2;
        }
        reverse(resx.begin(),resx.end());
        reverse(resy.begin(),resy.end());
        int count=0;
        for (int i = 0; i < 32; i++) {
            if (resx[i] != resy[i]) {
                count++;
            }
        }
        return count;
        
    }
};
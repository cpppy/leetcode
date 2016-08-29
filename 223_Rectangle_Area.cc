class Solution {
public:
    int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
        int area=(C-A)*(D-B)+(G-E)*(H-F);
        int ll=0,hh=0;
        int lmax=max(max(A,C),max(E,G));
        int lmin=min(min(A,C),min(E,G));
        int hmax=max(max(D,B),max(H,F));
        int hmin=min(min(D,B),min(H,F));

        if(lmax<((C-A)+(G-E))+lmin && hmax<((D-B)+(H-F))+hmin){
            ll=(C-A)+(G-E)-lmax+lmin;
            hh=(D-B)+(H-F)-hmax+hmin;
        }
        return area-ll*hh;
    }
};

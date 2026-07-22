class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int lsum=0,rsum=0,maxi=0;
        for(int i=0;i<k;i++){
            lsum+=cardPoints[i];
        }
        maxi=lsum;
        int ri=cardPoints.size()-1;
        for(int j=k-1;j>=0;j--){
                lsum=lsum-cardPoints[j];
                rsum=rsum+cardPoints[ri];
                ri--;
                maxi=max(maxi,lsum+rsum);
        }
        return maxi;
        
    }
};
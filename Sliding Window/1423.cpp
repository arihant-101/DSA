class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {

        int sum =0;
        int l=k-1;
        int r=0;

        for(int i=0;i<k;i++)
        {
            sum += cardPoints[i];
        }
        int max = sum;

        while(l>-1)
        {
        sum = sum - cardPoints[l] + cardPoints[cardPoints.size()-r-1];
        l--;
        r++;
        if(sum>max) max = sum;
        }

        


        return max;
        
    }
};
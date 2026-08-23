class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {

             int maxcandies = candies[0];
             for(int i=0;i<candies.size();i++){
                if(candies[i]>maxcandies)
                maxcandies = candies[i];
             }

             vector<bool>result;
             for(int i=0;i<candies.size();i++){
                int x=candies[i]+extraCandies;

                if(x>=maxcandies){
                    result.push_back(true);
                }

                else{
                    result.push_back(false);
                }
             }

             return result;
    }
};
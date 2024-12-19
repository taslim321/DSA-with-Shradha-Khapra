#include<iostream>
#include<vector>
#include<algorithm> //min or max function
using namespace std;

int maxProfit(vector<int>& prices) {
        int mProfit = 0;
        int best_buy = prices[0];
        for(int i = 1; i<prices.size(); i++)
        {
            if(prices[i]>best_buy)  mProfit = max(mProfit,prices[i]-best_buy);
            best_buy = min(best_buy,prices[i]);
        }
        return mProfit;
    }

int main(){
    vector<int>ith_prices = {7,1,5,3,6,4};
    cout<<maxProfit(ith_prices)<<endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int stockbuySell(vector<int>& prices) {
            int minPrice = INT_MAX;
                    int maxProfit = 0;

                            for (int price : prices) {
                                        if (price < minPrice) {
                                                        minPrice = price;
                                                                    }
                                                                                else {
                                                                                                maxProfit = max(maxProfit, price - minPrice);
                                                                                                            }
                                                                                                                    }

                                                                                                                            return maxProfit;
                                                                                                                                }
                                                                                                                                };

                                                                                                                                int main() {
                                                                                                                                    Solution obj;
                                                                                                                                        vector<int> prices = {7, 1, 5, 3, 6, 4};

                                                                                                                                            cout << obj.stockbuySell(prices) << endl;
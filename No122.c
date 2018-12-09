int maxProfit(int* prices, int pricesSize) {
    int profit=0;
    int differ=0;
    for(int i=0;i<pricesSize-1;i++){
        differ=prices[i+1]-prices[i];
        if(differ>0){
            profit=profit+differ;
        }
    }
    return profit;
}


int maxProfit(int* prices, int pricesSize) {
    int in,out;
    int max=0,earn=0;
    for(int i=0;i<pricesSize;i++){
        in=prices[i];
        for(int j=i;j<pricesSize;j++){
            if(prices[j]>in){
                out=prices[j];
                earn=out-in;
                if(earn>max){
                    max=earn;
                }
            }
        }
    }
    return max;
}

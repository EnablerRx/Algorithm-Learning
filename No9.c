bool isPalindrome(int x) {
    int a[100];
    int num=0;
    int result=1;
    if(x!=abs(x)){//first trouble
        result=0;
    }
    while((x%10!=0)||(x!=0)){//second trouble
        a[num]=x%10;//third trouble
        x=x/10;
        num++;
    }
    for(int i=0;i<num;i++){
        if(a[i]!=a[num-i-1]){
            result=0;
        }
    }
    printf("%d",result);
    return result;
}

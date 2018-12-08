int romanToInt(char* s) {
    int i=0;
    int sum=0;
    while(s[i]){
        if(s[i]=='I'){
            sum=sum+1;
        }
        if(s[i]=='V'){
            if(s[i-1]=='I')
                sum=sum+4-1;
                else
                sum=sum+5;
        }
        if(s[i]=='X'){
            if(s[i-1]=='I')
                sum=sum+9-1;
                else
                sum=sum+10;
        }
        if(s[i]=='L'){
            if(s[i-1]=='X')
                sum=sum+30;
                else  
            sum=sum+50;
        }
        if(s[i]=='C'){
            if(s[i-1]=='X')
                sum=sum+80;
                else
            sum=sum+100;
        }
        if(s[i]=='D'){
            if(s[i-1]=='C')
                sum=sum+300;
                else
            sum=sum+500;
        }
        if(s[i]=='M'){
            if(s[i-1]=='C')
                sum=sum+800;
                else
            sum=sum+1000;
        }
        i++;
    }
    return sum;
}

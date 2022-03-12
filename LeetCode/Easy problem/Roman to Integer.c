
int romanToInt(char * s){
    int sum=0,stepValue=0;
    for(int i=strlen(s);i>=0;i--){
        
        if(s[i]=='I'){
            if(stepValue==5){
                sum-=1;
                stepValue=0;
            }else if(stepValue==10){
                sum-=1;
                stepValue=0;
            }else{
                sum+=1;
            }       
        }else if(s[i]=='V'){
            if(sum>=1000&&i==0){
                sum+=5000;
            }else{
                sum+=5;
                stepValue=5;
            }
        }else if(s[i]=='X'){
            if(stepValue==50){
                sum-=10;
                stepValue=0;
            }else if(stepValue==100){
                sum-=10;
            }else{
                sum+=10;
                stepValue=10;
            } 
        }else if(s[i]=='L'){
            sum+=50;
            stepValue=50;
        }else if(s[i]=='C'){
            if(stepValue==500){
                sum-=100;
                stepValue=0;
            }else if(stepValue==1000){
                sum-=100;
                stepValue=0;
            }else{
                sum+=100;
                stepValue=100;
            }
        }else if(s[i]=='D'){
            sum+=500;
            stepValue=500;
        }else if(s[i]=='M'){
            sum+=1000;
            stepValue=1000;
        }
        if(stepValue!=500&&stepValue!=1000&&stepValue!=5&&stepValue!=10&&stepValue!=50&&stepValue!=100){
            stepValue=0;
        }
        
    }
    
    return sum;
}

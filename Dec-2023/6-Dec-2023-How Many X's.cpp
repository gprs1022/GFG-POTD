class Solution {
  public:
    int countX(int L, int R, int X) {
        int count =0;
        for(int i =L +1;i< R;i++){
            count+=count_digit(i,X);
        }
        return count;
    }
    int count_digit(int num,int x){
        int countx =0;
        while(num > 0){
            int digit = num%10;
            num/=10;
            if(digit == x) countx++;
        }
        return countx;
    }
};
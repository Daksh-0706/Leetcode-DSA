class Solution {
public:
    string intToRoman(int num) {
        string ans = "";
        int k;
        while(num>=1000){
            ans.append("M");
            num -= 1000;
        }
        if(num>=900){
            ans.append("CM");
            num -= 900;
        }
        if(num>=500){
            k = (num-500)/100;
            ans.append("D");
            for(int i = 0; i<k; i++)
                ans.append("C");
            num -= 500+k*100;
        }
        if(num>=400){
            ans.append("CD");
            num -= 400;
        }
        if(num>=100){
            k = num/100;
            for(int i = 0; i<k; i++)
                ans.append("C");
            num -= k*100;
        }
        if(num>=90){
            ans.append("XC");
            num -= 90;
        }
        if(num>=50){
            k = (num-50)/10;
            ans.append("L");
            for(int i = 0; i<k; i++)
                ans.append("X");
            num -= 50+k*10;
        }
        if(num>=40){
            ans.append("XL");
            num -= 40;
        }
        if(num>=10){
            k = num/10;
            for(int i = 0; i<k; i++)
                ans.append("X");
            num -= k*10;
        }
        if(num>=9){
            ans.append("IX");
            num -= 9;
        }
        if(num>=5){
            k = (num-5)/1;
            ans.append("V");
            for(int i = 0; i<k; i++)
                ans.append("I");
            num -= 5+k;
        }
        if(num>=4){
            ans.append("IV");
            num -= 4;
        }
        if(num>=1){
            k = num/1;
            for(int i = 0; i<k; i++)
                ans.append("I");
            num -= k*1;
        }
        return ans;
    }
};
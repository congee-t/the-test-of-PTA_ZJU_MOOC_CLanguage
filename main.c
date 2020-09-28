//
//  main.c
//  test of PTA_ZJU_MOOC_CLanguage
//
//  
//


//7-1
/*
#include <stdio.h>

void win(void){
       printf("I'm gonna WIN!\n");
       return ;
   };
   
int main(void) {
    win();
    win();
    win();
    
    return 0;
}
*/

//7-2
/*
#include <stdio.h>

int main(void){
    printf("I\n \nL\no\nv\ne\n \nG\nP\nL\nT\n");
    return 0;
}
*/

//7-3
/*
#include <stdio.h>

int main(void){
    printf("************\n");
    printf("  Welcome\n");
    printf("************\n");
    
    return 0;
}
*/

//7-4
/*
#include <stdio.h>

int main(void){
    printf("  A\n");
    printf("A   A\n");
    printf("  A\n");
    
    return 0;
}
*/

//7-5
/*
#include <stdio.h>

int main(void){
    printf("* * * *\n");
    printf(" * * *\n");
    printf("  * *\n");
    printf("   *\n");

    
    return 0;
}
*/

//7-6
/*
#include <stdio.h>

int main(void){
    int height,foot,inch;
    
    scanf("%d",&height);
    
    foot = height/30.48;
    inch = (height/30.48-foot)*12;
    
    
    printf("%d %d\n",foot , inch);
    
    //double l = height/30.48-foot;
    //printf("%f %f",l , l*12);
    
    return 0;
}
*/


//7-7
/*
#include <stdio.h>

int main(void){
    int C , F;
    
    scanf("%d",&F);
    
    C = 5*(F-32)/9;
    
    printf("Celsius = %d", C);
    
    return 0;
}
*/

//7-8
/*
#include <stdio.h>

int main(void){
    
    int height;
    double kg , jin;

    scanf("%d",&height);
    
    kg = (height-100)*0.9;
    jin = kg*2;
    
    printf("%.1f\n", jin);
    
    return 0;
}
*/

//7-9
/*
#include <stdio.h>

int main(void){
    int a , b , c , d , Sum;
    double Average;
    
    scanf("%d %d %d %d", &a , &b , &c , &d);
    
    Sum = a+b+c+d;
    Average = Sum/4.0;
    
    printf("Sum = %d; Average = %.1f\n",Sum,Average);
    
    return 0;
}
*/

//7-10
/*
#include <stdio.h>

int main(void){
    int a , b;
    
    scanf("%d %d",&a,&b);
    
    printf("%d + %d = %d\n",a,b,a+b);
    printf("%d - %d = %d\n",a,b,a-b);
    printf("%d * %d = %d\n",a,b,a*b);
    
    int c = a % b;
    if (c == 0){    //==表示判断是否相等，=是赋值！！！！！！！！！！
        printf("%d / %d = %d\n",a,b,a/b);
    }else{
        double a1 = a;
        double b1 = b;
        printf("%.0f / %.0f = %.2f\n",a1,b1,a1/b1);
    }
    
    
    return 0;
}
*/

//7-11
/*
#include <stdio.h>

int main(void){
    int math,eng,comp,average;
    math = 87;
    eng = 72;
    comp = 93;
    average = (math + eng + comp)/3;
    
    printf("math = %d, eng = %d, comp = %d, average = %d\n",math,eng,comp,average);
    
    return 0;
}
*/

//7-12
/*
#include <stdio.h>

int main(void){
    int yyyy , mm , dd;
    
    scanf("%d-%d-%d",&mm,&dd,&yyyy);
    
    if (mm>9&dd>9){
        printf("%d-%d-%d\n",yyyy,mm,dd);
    }else if(mm>9&dd<=9){
        printf("%d-%d-0%d\n",yyyy,mm,dd);
    }else if(mm<=9&dd<=9){
        printf("%d-0%d-0%d\n",yyyy,mm,dd);
    }else if(mm<=9&dd>9){
        printf("%d-0%d-%d\n",yyyy,mm,dd);
        
    }else{
        printf("????\n");
    }
    
    return 0;
}
*/

//7-13
/*
#include <stdio.h>

int main(void){
    int today , dAt;
    
    scanf("%d",&today);
    
    if (today<=5){
        dAt = today+2;
    }else if (today == 6){
        dAt = 1;
    }else if (today == 7){
        dAt = 2;
    }else{
        printf("输入有误。\n");
        return 0;
    }
    
    printf("%d",dAt);
    
    return 0;
}
*/

//7-14
/*
#include <stdio.h>

int main(void){
    int now , pass;
    scanf("%d %d", &now , &pass);
    
    int hour , minute;
    hour = now/100;
    minute = now%100;
    
    int passed_hour = hour*60 + minute;
    int new_hour = passed_hour+pass;
    
    if (new_hour%60>=10){
        printf("%d%d\n",new_hour/60,new_hour%60);
    }else if(new_hour%60<10){
        printf("%d0%d\n",new_hour/60,new_hour%60);
    }
    return 0;
}
*/


//7-15
/*   重要！ 十进制转十六进制
#include <stdio.h>

int main(void){
    int x;
    scanf("%d",&x);
    x = x/16*10+x%16;
    printf("%d\n",x);
    return 0;
}
*/

//7-16
/*
#include <stdio.h>
int main(void){
    int n , sign;
    scanf("%d",&n);
    
    if (n<0){
        sign = -1;
    }else if (n==0){
        sign = 0;
    }else if (n>0){
        sign = 1;
    }else{
        printf("??????\n");
        return 0;
    }
    printf("sign(%d) = %d\n",n,sign);
    
    return 0;
}
*/


//7-17
/*
#include <stdio.h>

int main(void){
    int score;
    scanf("%d",&score);
    
    if (score>=90){
        printf("A\n");
    }else if (score>=80){
        printf("B\n");
    }else if (score>=70){
        printf("C\n");
    }else if (score>=60){
        printf("D\n");
    }else {
        printf("E\n");
    }
    return 0;
}
*/


//7-18
/*
#include <stdio.h>

int main(void){
    float distance , money;
    int minute;
    scanf("%f %d",&distance,&minute);
    
    int wait = minute/5;
    if (wait>=1){
        money = wait*2.0;
    }else{
        money = 0;
    }
    
    if (distance<=3.0){
        money = money+10;
    }else if (distance>3.0&distance<=10.0){ //超起步里程后，10公里内 10-3
        money = money+10+(distance-3)*2.0;
    }else if (distance>10.0){
        money = money+10+14+(distance-10)*3.0;
    }else{
        printf("????");
        return 0;
    }
    
    money =money+0.5;
    
    printf("%d\n",(int)money);
    
    return 0;
}
*/

//7-19
/*
#include <stdio.h>

int main(void){
    int yyyy,mm,dd;
    scanf("%d/%d/%d",&yyyy,&mm,&dd);
    
    int days , february;
    if((yyyy%4 == 0 && yyyy%100 != 0) || yyyy%400 == 0 ){
        february = 29;
    }else {
        february = 28;
    }
    
    if (mm == 1){
        days = dd;
    }else if (mm == 2){
        days = 31+dd;
    }else if (mm == 3){
        days = 31+february+dd;
    }else if (mm == 4){
        days = 31+february+31+dd;
    }else if (mm == 5){
        days = 31+february+31+30+dd;
    }else if (mm == 6){
        days = 31+ february+31+30+31+dd;
    }else if (mm == 7){
        days = 31+february+31+30+31+30+dd;
    }else if (mm == 8){
        days = 31+february+31+30+31+30+31+dd;
    }else if (mm == 9){
        days = 31+february+31+30+31+30+31+31+dd;
    }else if (mm == 10){
        days = 31+february+31+30+31+30+31+31+30+dd;
    }else if (mm == 11){
        days = 31+february+31+30+31+30+31+31+30+31+dd;
    }else if (mm == 12){
        days = 31+february+31+30+31+30+31+31+30+31+30+dd;
    }else{
        printf("??????");
        return 0;
    }
    
    printf("%d\n",days);
    
    return 0;
}
*/

//
//#include <stdio.h>
//int main(void){
//    printf("test");
//    /*
//
//     */
//    printf("test\n");
//
//
//    printf("test");
//    printf("test\n");
//    return 0;
//}

//7-20
/*
#include <stdio.h>
int main(void){
    int num1 = 0;
    int num2 = 0;
    char f;
    int flag = 0;
    scanf("%d",&num1);
    scanf("%c",&f);
    
    while (1) {
        if(f == '='){
            break;
        }
        scanf("%d",&num2);
        if((f == '/')&&num2 == 0){
            flag = 1;
            break;
        }
        switch (f) {
            case '+':
                num1 = num1+num2;
                break;
            case '-':
                num1 = num1-num2;
                break;
            case '*':
                num1 = num1*num2;
                break;
            case '/':
                num1 = num1/num2;
                break;
            default:
                flag = 1;
                break;
        }
        scanf("%c",&f);
    }
    
    if(flag == 1){
        printf("ERROR\n");
        return 0;
    }else{
        printf("%d\n",num1);
    }
    return 0;
}
*/

//7-21
/*
#include <stdio.h>
int main(void){
    int speed;
    scanf("%d",&speed);
    
    if(speed <= 60){
        printf("Speed: %d - OK",speed);
    }else{
        printf("Speed: %d - Speeding",speed);
    }
    return 0;
    
}
*/

//7-22
/*
#include <stdio.h>
int main(void){
    int a, b, c;
    int flag = 0;   //1a,2b,3c
    scanf("%d %d %d",&a, &b, &c);
    
    if (a == b){
        flag = 3;
    }
    if (a == c){
        flag = 2;
    }
    if (b == c){
        flag = 1;
    }
    switch (flag) {
        case 1:
            printf("A");
            break;
        case 2:
            printf("B");
            break;
        case 3:
            printf("C");
            break;
        default:
            break;
    }
    return 0;
}
*/

//7-23
/*
#include <stdio.h>
int main(void){
    float x, y;
    scanf("%f",&x);
    
    if (x <= 15) {
        y = 4*x/3;
    }else if (x > 16){
        y = 2.5*x-17.5;
    }
    printf("%.2f",y);
    return 0;
}
*/



//7-24
/*
#include <stdio.h>
int main(void){
    int rand_number, n, guess_number;
    int flag = 1;
    
    scanf("%d %d", &rand_number, &n);
    
    while (1) {
        if(flag > n){
            printf("Game Over\n");
            break;
            
        }
        
        scanf("%d",&guess_number);
        if (guess_number < 0){
            printf("Game Over");
            break;
        }
        
        if (guess_number == rand_number){
            if (flag == 1){
                printf("Bingo!\n");
                break;
            }else if (flag <=3){
                printf("Lucky You!\n");
                break;
            }else if (flag >3){
                printf("Good Guess!\n");
                break;
            }
            
        }else{
            if (guess_number < rand_number){
                printf("Too small\n");
            }else{
                printf("Too big\n");
            }
            flag +=1;
        }
    }
    
    return 0;
    
}
*/


//7-25
/*
#include <stdio.h>
int main(void){
    int number;
    int sum = 0;
    scanf("%d",&number);
    do{
        
        if (number%2 == 1){
            sum += number;
        }
        
        scanf("%d",&number);
    }while (number > 0);
    
    printf("%d\n",sum);
    
    return 0;
}
*/


//7-26
#include <stdio.h>
int main(void){
    int m, n;
    int yueshu, beishu;
    
    scanf("%d %d", &m, &n);
    
    for (int i =1; i<=m&&i<=n; i++){
        if(m%i == 0 && n%i ==0){
            yueshu = i;
        }
    }
    
    beishu = (m/yueshu) * (n/yueshu) *yueshu;
    
    printf("%d %d",yueshu,beishu);
    
    return 0;
}

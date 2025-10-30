#include<stdio.h>
#include<stdlib.h>
#include <math.h>
void personal_info();
void display_menu();
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();
void problem7();
void problem8();
void problem9();
void problem10();
void problem11();
void problem12();
void problem13();
void problem14();
void problem15();
void problem16();
void problem17();
void problem18();
void problem19();
void problem20();
void problem21();
void problem22();
void problem23();
void problem24();
void problem25();


int main()
{
personal_info();
display_menu();



       int c;
       while (1){
        printf("Enter your choice: ");
        scanf("%d",&c);

        switch (c) {
            case 1:
               problem1();
                break;
            case 2:
                problem2();
                break;
            case 3:
                problem3();
                break;
            case 4:
                problem4();
                break;
            case 5:
                problem5();
                break;
            case 6:
                problem6();
                break;
            case 7:
                problem7();
                break;
            case 8:
                problem8();
                break;
            case 9:
                problem9();
                break;
            case 10:
                problem10();
                break;
            case 11:
                problem11();
                break;
            case 12:
                problem12();
                break;
            case 13:
                problem13();
                break;
            case 14:
                problem14();
                break;
            case 15:
                problem15();
                break;
            case 16:
                problem16();
                break;
            case 17:
                problem17();
                break;
            case 18:
                problem18();
                break;
            case 19:
                problem19();
                break;
            case 20:
                problem20();
                break;
            case 21:
                problem21();
                break;
            case 22:
                problem22();
                break;
            case 23:
                problem23();
                break;
            case 24:
                problem24();
                break;
            case 25:
                problem25();
                break;
            case 0:
                exit(0);
                break;
                default:
                printf("Invalid choice\n");
        }
    }
return 0;
}



void personal_info(){

printf("*******************************************\n");
printf("***  Personal Information               ***\n");
printf("***  Name:Mehedi Hasan Arif             ***\n");
printf("***  ID:CSE2302029096                   ***\n");
printf("***  SEC:Amaru29A2                      ***\n");
printf("***  MOBILE:01533648004                 ***\n");
printf("*******************************************\n");
}

void display_menu(){
printf("+++++++++++++++++++++++++++++++++++++++++++++++\n");
printf("+++               Menu                      +++\n");
printf("+++ Problem.1)Square                        +++\n");
printf("+++ Problem.2)Cube                          +++\n");
printf("+++ Problem.3)Square root                   +++\n");
printf("+++ Problem.4)Addition                      +++\n");
printf("+++ Problem.5)Substraction                  +++\n");
printf("+++ Problem.6)Multiplication of 5           +++\n");
printf("+++ Problem.7)Factorial of 5                +++\n");
printf("+++ Problem.8)Series sum (1+2+3+4+....+100) +++\n");
printf("+++ Problem.9)Series sum(5+10+15+2....+100) +++\n");
printf("+++ Problem.10)Largest between three numbers+++\n");
printf("+++ Problem.11)Smallest between three numbers++\n");
printf("+++ Problem.12)Even number                  +++\n");
printf("+++ Problem.13)Odd number                   +++\n");
printf("+++ Problem.14)Positive number              +++\n");
printf("+++ Problem.15)Negative number              +++\n");
printf("+++ Problem.16)Logarithm (base 10)          +++\n");
printf("+++ Problem.17)Exponentiation               +++\n");
printf("+++ Problem.18)Absolute value               +++\n");
printf("+++ Problem.19)Floor division               +++\n");
printf("+++ Problem.20)Modulo                       +++\n");
printf("+++ Problem.21)Round                        +++\n");
printf("+++ Problem.22)Today is sunday              +++\n");
printf("+++ Problem.23)Sonargaon University         +++\n");
printf("+++ Problem.24)Series sum(2+4+6+.....+100)  +++\n");
printf("+++ Problem.25)This is the last program.    +++\n");
printf("+++++++++++++++++++++++++++++++++++++++++++++++\n");
}


void problem1() {
    int number;
    printf("Enter a number: ");{
    scanf("%d", &number);
    int square = number * number;
    printf("The square of %d is: %d\n", number, square);
    }

}
void problem2(){
    int number;
    printf("Enter a number: ");{
    scanf("%d", &number);
    int cube = number * number * number;
    printf("The cube of %d is: %d\n", number, cube);

}
}
void problem3(){
double number, result;

    printf("Enter a number: ");
    scanf("%lf", &number);

    if (number >= 0) {
        result = sqrt(number);

        printf("The square root of %.2lf is %.2lf\n", number, result);
    } else {
        printf("Cannot calculate the square root of a negative number.\n");
    }
}
void problem4(){
 double num1, num2, sum;
    printf("Enter the first number: ");{
    scanf("%lf", &num1);
    printf("Enter the second number: ");
    scanf("%lf", &num2);
    sum = num1 + num2;
    printf("The sum of %.2lf and %.2lf is %.2lf\n", num1, num2, sum);
    }
}
void problem5(){
double num1, num2, difference;


    printf("Enter the first number: ");{
    scanf("%lf", &num1);


    printf("Enter the second number: ");
    scanf("%lf", &num2);


    difference = num1 - num2;


    printf("The difference of %.2lf and %.2lf is %.2lf\n", num1, num2, difference);

    }
}
void problem6(){

 int i,n=5;
 for(i=1;i<=10;i++)

printf("%d\n",n*i);
}

void problem7(){

int i,f,n;
 n=5;f=1;
 for(i=1;i<=n;i++){
    f=f*i;
printf("%d\n",f);

    }


}
void problem8(){

int i,s=0;
 for(i=1;i<=100;i++){
    s=s+i;
     printf("%d\n",i);
 }
}
void problem9(){
  int i;
 for(i=5;i<=100;i+=5){

printf("%d\n",i);
}
}
void problem10(){
{
    double num1, num2, num3, largest;

    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    printf("Enter the third number: ");
    scanf("%lf", &num3);

    largest = num1;

    if (num2 > largest) {
        largest = num2;
    }

    if (num3 > largest) {
        largest = num3;
    }
    printf("The largest number among %.2lf, %.2lf, and %.2lf is %.2lf\n", num1, num2, num3, largest);

}

}

void problem11(){
{
     double num1, num2, num3, smallest;

    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    printf("Enter the third number: ");
    scanf("%lf", &num3);

    smallest = num1;

    if (num2 < smallest) {
        smallest = num2;
    }

    if (num3 < smallest) {
        smallest = num3;
    }
    printf("The smallest number among %.2lf, %.2lf, and %.2lf is %.2lf\n", num1, num2, num3, smallest);

}
}
void problem12(){
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("%d is an even number.\n", number);
    } else {
        printf("%d is an odd number.\n", number);
    }
}
}
void problem13(){
{
int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("%d is an even number.\n", number);
    } else {
        printf("%d is an odd number.\n", number);
    }
}
}
void problem14(){
{
  double number;

    printf("Enter a number: ");
    scanf("%lf", &number);

    if (number > 0) {
        printf("%.2lf is a positive number.\n", number);
    } else if (number == 0) {
        printf("You entered zero.\n");
    } else {
        printf("%.2lf is a negative number.\n", number);
    }
}

}
void problem15(){
{
 double number;

    printf("Enter a number: ");
    scanf("%lf", &number);

    if (number > 0) {
        printf("%.2lf is a positive number.\n", number);
    } else if (number == 0) {
        printf("You entered zero.\n");
    } else {
        printf("%.2lf is a negative number.\n", number);
    }
}
}
void problem16(){
{
double number, result;

    printf("Enter a positive number: ");
    scanf("%lf", &number);

    if (number > 0) {

        result = log10(number);

        printf("The logarithm (base 10) of %.2lf is %.2lf\n", number, result);
    } else if (number == 0) {
        printf("Logarithm (base 10) is undefined for zero.\n");
    } else {
        printf("You entered a negative number. Logarithm (base 10) is undefined for negative numbers.\n");
    }
}
}
void problem17(){
{
double base, exponent, result;


    printf("Enter the base: ");
    scanf("%lf", &base);

    printf("Enter the exponent: ");
    scanf("%lf", &exponent);

    result = pow(base, exponent);

    printf("%.2lf raised to the power %.2lf is %.2lf\n", base, exponent, result);
}
}
void problem18(){
{
   double number, absolutevalue;

    printf("Enter a number: ");
    scanf("%lf", &number);

    absolutevalue = fabs(number);

    printf("The absolute value of %.2lf is %.2lf\n", number, absolutevalue);
}
}
void problem19(){
{
   int dividend, divisor, result;

    printf("Enter dividend: ");
    scanf("%d", &dividend);

    printf("Enter divisor: ");
    scanf("%d", &divisor);


    result = dividend / divisor;

    printf("The result of floor division (%d divided by %d) is: %d\n", dividend, divisor, result);
}
}
void problem20(){
{
   int dividend, divisor, result;

    printf("Enter dividend: ");
    scanf("%d", &dividend);

    printf("Enter divisor: ");
    scanf("%d", &divisor);

    result = dividend % divisor;

    printf("The remainder when %d is divided by %d is: %d\n", dividend, divisor, result);
}
}
void problem21(){
{
    double num;


    printf("Enter a floating-point number: ");
    scanf("%lf", &num);


    double rounded_num = round(num);


    printf("Rounded number: %.2f\n", rounded_num);

}
}
void problem22(){
{

    int day=2;
    if(day==2);
        printf("Today is Sunday\n");
}
}
void problem23(){
{
   int day=2;
    if(day==2);
        printf("Sonargaon University\n");
}
}
void problem24(){
{
    int i=2;
    while(i<=100)
        {
        printf("%d\t",i);
        i=i+2;

    }
}
}
void problem25(){
{

  int day=2;
    if(day==2);
        printf("This is the last program.\n");
}
}










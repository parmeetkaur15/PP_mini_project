#include<iostream>
using namespace std;
/*This programme will coantain the operations which
we can perform of numbers*/
void hcf(int number_1, int number_2)      /*declaration of function*/
/* This function is used to calculate the HCF of 2 numbers*/
{ while (number_1 != number_2){           /*Loop used to calculate hcf*/
    if (number_1>number_2){
       number_1 = number_1 - number_2;
    }else{
        number_2 = number_2 - number_1;
    }
}
  cout<<"HCF of the numbers is "<<number_1<<endl;   /*printing hcf*/
}

 void palindrome(int number_1)
 /*This fumction is used to check wether the 
 number is palindrome or not*/
 { int reverse = 0;          /*this is uesd to store reverse of that number*/
   int reminder;             /*this is used to store reminder*/
   while (number_1 > 0){     /* loop for finding out wether the number is palindrome or not*/
    reminder = number_1 % 10;
    reverse = (10 * reverse) + reminder;
    number_1 = number_1 / 10;
   }
    if (number_1==reverse){
        cout<<"This number is palindrome"<<endl;
    }else{
        cout<<"This number is not a palindrome"<<endl;
    }
 }

 void perfect(int number_1)
 {
    /*This function is created to find out whether the number
    is perferct number or not*/
    int sum = 0;
    for (int counter=1; counter<number_1; counter++){   /*Loop to calculate sum f divisor*/
        if (number_1 % counter == 0){
            sum = sum + counter;
        }
    }
    if (sum == number_1){                             /* printting perfect number */
        cout<<"The number is  perfect"<<endl;
    }else{
        cout<<"The number is not perfect"<<endl;
    }
 }

 void prime(int number_1){
    /* function to calculate whther the number is prime or not*/
    int flag = 0;
    for (int counter = 2; counter<number_1; counter++){    /*logic of prime number*/
        if (number_1 % counter == 0){
            flag++;
            break;
        }
        if (flag == 0){                                    /*priting prime number*/
            cout<<"The number is  prime"<<endl;
        }else{
            cout<<"The number is not prime"<<endl;
        }
    }
 }

 void armstrong(int number_1)
 {  /* function for checking whether the number is armstrong or not*/
    int sum = 0;
    int digit;
    int duplicate;
    duplicate = number_1;
    while (number_1 > 0){        /*logic for ar,strong number*/
        digit = number_1 % 10;
        sum = sum + (digit * digit * digit);
        number_1 = number_1 / 10; 
    }
    if (sum == duplicate){        /* printting armstrong number*/
        cout<<"Number is armstrong"<<endl;
    }else{
        cout<<"Number is not armstrong"<<endl;
    }
 }
 void factorial(int number_1)
 {  /* function for printinf factorial of the given number*/
    int fact = 1;           /* logic of calcultaing factorial*/
    for (int counter = 2; counter <= number_1; counter++){
        fact = fact * counter;
    }
    cout<<fact<<endl;
 }

 void sum(int number_1)
 {   /*function  for printing sum uptil number n*/
    int sum = 0;
    for (int counter=1; counter <= number_1; counter++){  /*logic for calculating sum*/
    sum = sum + number_1;
    }
    cout<<"Sum upto number_1 is "<<sum<<endl; 
 }

 void coprime(int number_1,int number_2)
 {  /*to check whether the given numbers are co prime or no*/
    for (int counter = 2; counter < number_1 && counter < number_2; counter++){ /* logic to check wheter the number is co prime or not*/
        if (number_1 % counter == 0 && number_2 % counter == 0){
            cout<<"The number are not coprime "<<endl;
            return;
        }
    }
    cout<<"the number are co prime "<<endl;
 }

 void power(int base, int exponent)
 /* Function to print power of a given number*/
 {  int answer = 1;            /*flag for calculating power*/
    for (int counter = 1; counter <= exponent ; counter++){       /*Loop for calculating given power to that number*/
        answer = answer * base;
    }
    cout<<answer<<endl;                           /*printting answer*/
 }
 void magic_number(int number_1)
 {  /* function for checking whather the number is magic nmber or not*/
    int digit,sum=number_1;
    while (number_1 >= 10){         /*logic for calculating magic number*/
        sum = 0;
        while (number_1 != 0){
            digit = number_1 % 10;
            sum = sum + digit;
            number_1 = number_1 / 10;
        }
        number_1 = sum;
    }
    if (sum == 1){
        cout<<"It is a magic number "<<endl;
    }else{
        cout<<"It is nit a magic number"<<endl;
    }

 }


int main()
{
    /* implementation of all functions*/
hcf(14,21);
palindrome(654);
perfect(6);
prime(7);
armstrong(371);
factorial(5);
coprime(21,26);
power(2,5);
magic_number(1234);
    return 0;
}

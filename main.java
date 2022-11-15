package miniPP;

public class main 
{    static void hcf(int number_1, int number_2)      /*declaration of function*/
	/* This function is used to calculate the HCF of 2 numbers*/
	{ while (number_1 != number_2){           /*Loop used to calculate hcf*/
	    if (number_1>number_2){
	       number_1 = number_1 - number_2;
	    }else{
	        number_2 = number_2 - number_1;
	    }
	}
	  System.out.println("HCF of the numbers is "+number_1);   /*printing hcf*/
	}
static void palindrome(int number_1)
/*This function is used to check whether the 
number is palindrome or not*/
{ int reverse = 0;          /*this is used to store reverse of that number*/
  int reminder;             /*this is used to store reminder*/
  while (number_1 > 0){     /* loop for finding out whether the number is palindrome or not*/
   reminder = number_1 % 10;
   reverse = (10 * reverse) + reminder;
   number_1 = number_1 / 10;
  }
   if (number_1==reverse){
       System.out.println("This number is palindrome");
   }else{
       System.out.println("This number is not a palindrome");
   }
}

static void perfect(int number_1)
{  
   /*This function is created to find out whether the number
   is perfect number or not*/
   int sum = 0;
   for (int counter=1; counter<number_1; counter++){   /*Loop to calculate sum f divisor*/
       if (number_1 % counter == 0){
           sum = sum + counter;
       }
   }
   if (sum == number_1){                             /* printting perfect number */
       System.out.println("The number is  perfect");;
   }else{
       System.out.println("The number is not perfect");
   }
}

static void prime(int number_1){
   /* function to calculate whther the number is prime or not*/
   int flag = 0;
   for (int counter = 2; counter<number_1; counter++){    /*logic of prime number*/
       if (number_1 % counter == 0){
           flag++;
           break;
       }
       if (flag == 0){                                    /*priting prime number*/
           System.out.println("The number is  prime");
       }else{
           System.out.println("The number is not prime");
       }
   }
}

static void armstrong(int number_1)
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
       System.out.println("Number is armstrong");
   }else{
       System.out.println("Number is not armstrong");
   }
}
static void factorial(int number_1)
{  /* function for printinf factorial of the given number*/
   int fact = 1;           /* logic of calcultaing factorial*/
   for (int counter = 2; counter <= number_1; counter++){
       fact = fact * counter;
   }
  System.out.println(fact);
}

static void sum(int number_1)
{   /*function  for printing sum uptil number n*/
   int sum = 0;
   for (int counter=1; counter <= number_1; counter++){  /*logic for calculating sum*/
   sum = sum + number_1;
   }
   System.out.println("Sum upto number_1 is "+sum); 
}

static void coprime(int number_1,int number_2)
{  /*to check whether the given numbers are co prime or no*/
   for (int counter = 2; counter < number_1 && counter < number_2; counter++){
       if (number_1 % counter == 0 && number_2 % counter == 0){
           System.out.println("The number are not coprime ");
           return;
       }
   }
  System.out.println("the number are co prime ");
}

static void power(int base, int exponent)
{  int answer = 1;
   for (int counter = 1; counter <= exponent ; counter++){
       answer = answer * base;
   }
   System.out.println(answer);
}
 static void magic_number(int number_1)
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
       System.out.println("It is a magic number ");
   }else{
       System.out.println("It is nit a magic number");
   }

}


    public static void main(String args[]) 
	{
		hcf(10,20);
		palindrome(654);
		perfect(6);
		prime(7);
		armstrong(371);
		factorial(5);
		coprime(21,26);
		power(2,5);
		magic_number(1234);
		    
	}
}

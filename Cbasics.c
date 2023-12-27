#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void hello(){
    printf("Hello World");
}

int Add(int a,int b){
    return a + b;
}

int Multiply(int number1, int number2){
    return number1 * number2;
}

void greet(){
    printf("\nHello World");
}

// in c and c++ when you define a function below the main function it need to be declared above the main function
// below is the example without a body just the function and with its parameter if it had.
void sayHello();

int squareandPower(int number){
    double squared = sqrt(number);
    double result = pow(number,squared);
    printf("\nSqaure root of %d = %lf| Power of %d to %lf = %lf",number,squared,number,squared,result);
}


int main(){
    char name[] = "Jerome";
    int age;

    printf("\nHello World");
    printf("\n%s",name);

    printf("\nEnter age: ");
    scanf("%d",&age);

    if(age >= 21){
        printf("You are an adult");
    }else{
        printf("You are a teenager");
    }

    /////////////////////////////////
    // double inputs a  double and a char seperated by space
    // double = lf if printed
    // double .2lf means only 2 decimals
    double sampledouble;
    char samplechar;

    printf("\nEnter a double number and a character: ");
    scanf("%lf %c",&sampledouble, &samplechar);
    printf("\nDouble input is: %.2lf| Char you input is: %c",sampledouble,samplechar);

    ////////////////////////////////
    // operators
    // can perform math operations in printf or in another variable
    

    int samplenumber1 = 5, samplenumber2 = 2;

    printf("\nSum: %d",samplenumber1 + samplenumber2);
    
    int minus = samplenumber1 - samplenumber2;

    printf("\nMinus: %d",minus);

    //////////////////////////////
    // divide and modulus

    printf("\nDivide: %d",samplenumber1 / samplenumber2);

    double samplemodulus = samplenumber1 % samplenumber2;

    printf("\nModulus: %.2lf", samplemodulus);

     //////////////////////////////
    // bool
    // need to import | #include <stdbool.h>
    // && need both the statements to be true
    // || need atleast one of the statements to be true
    bool isTeenager = false;
    bool isTall = true;

    if(isTeenager == true || isTall == false){
        printf("\nIs Okay");
    }else{
        printf("\nIs Not okay");
    }

     if(isTeenager == false && isTall == true){
        printf("\nIs tall but Not a teenager");
    }else{
        printf("\nNot tall and not a teenager");
    }
    
    ////////////////////////////////
    // ternary operator
    // odd or even program
    int oddevenNumber ;
    printf("\nEnter a number: ");
    scanf("%d",&oddevenNumber);

    // if the number is modulo by 2 = means it gets the remainder of the quotient . | if it is equals to 0 then it is a even
    (oddevenNumber % 2 == 0) ? printf("\nNumber is Even") : printf("\nNumber is Odd"); 


    ////////////////////////////////
    // case 
    // int to day

    int day = 5;

    switch(day){
                case 1: printf("\n\tMonday");
                break;
                case 2: printf("\n\tTuesday");
                break;
                case 3: printf("\n\tWednesday");
                break;
                case 4: printf("\n\tThursday");
                break;
                case 5: printf("\n\tFriday");
                break;
                case 6: printf("\n\tSaturday");
                break;
                case 7: printf("\n\tSunday");
                break;
                default:
                printf("\n\tNumber out of range");
    }

    ////////////////////////////////
    // WHILE LOOP
   
   int testWhile = 10;
   int whileI = 0;

   while(whileI <= 10){
        printf("\nCounting: %d",whileI);
        whileI++;
   }
   ///////////////////////////////////////
   //mULTIPLICAITON TABLE USING while loop

   int numberToMultiply;
   int times = 1;
   printf("\nEnter a number to see its table 1-10: ");
   scanf("%d", &numberToMultiply);

   while(times <= 10){
        int product = times * numberToMultiply;
        printf("\n %d * %d = %d",numberToMultiply,times,product);
        times++;
   }


    ////////////////////////////////
    // DO WHILE
    // MULTIPLATION TABLE 10 - 1
    int whileCountUp = 1;
    int whileCountDown = 10;
    int toQuotient;

    printf("\n Enter a number to quotient 10-1: ");
    scanf("%d",&toQuotient);
    do{
        int quotient = whileCountDown * toQuotient;
        printf("\n %d * %d = %d",toQuotient, whileCountDown, quotient);
        whileCountDown--;
        whileCountUp++;
    }while(10 >= whileCountUp);
    

    ////////////////////////////////
    // For LOOP
    // printing arrays

    char sampleNames[][20] = {"Jerome","Mara","Joy"};
    // need this to have a size of | length of the array
    int arraysize = sizeof(sampleNames) / sizeof(sampleNames[0]);
   
    for(int i = 0;i < arraysize; i++){
        printf("\nNames: %s",sampleNames[i]);
    }

    ///////////////////////////
    //1-100 Sum using for loop
    int sumofAll = 0;
    for(int i = 1; i <= 100; i++){
        sumofAll = sumofAll + i;
    }
    printf("\nSum of 1-100 = %d",sumofAll);

    ///////////////////////////////////////
    // EVEN number 1-100 sum using for loop
    int sumofAlleven = 0;
    for(int i = 1; i <= 100; i++){
        i++;
        sumofAlleven = sumofAlleven + i;
    }
    printf("\nSum of 1-100 even numbers = %d",sumofAlleven);

    ///////////////////////////////////////
    // ODD number 1-100 sum using for loop
    int sumofAllodd = 0;
    for(int i = 1; i <= 100; i = i + 2){
        sumofAllodd = sumofAllodd + i;
    }
    printf("\nSum of 1-100 odd numbers = %d",sumofAllodd);


    ///////////////////////////////////////
    // EvenNumbers and Odd numbers
    for(int i = 1; i <= 100; i = i + 1){
        i++;
        printf("\nEven: %d", i);
    }

    for(int i = 1; i <= 100; i = i + 2){
        printf("\nOdd: %d", i);
    }

    //////////////////////////////////////////
    // EvenNumbers and Odd numbers in one loop
    for(int i = 0; i <= 100; i++){
        if(i % 2 == 0){
           printf("\nEven Number: %d",i);
        }else{
           printf("\nOdd Number: %d",i);
        }
    }

    //////////////////////////////////////////
    // Printing negative odd numbers | if input is positive ending the loop and print positive value | if it is negative even skip then print negative even
    // while 1 represent true and it is infinite | it will stop if it hit the break statement
    while(1){
        int value;
        printf("\nEnter a value: ");
        scanf("%d",&value);
        int convertOdd = -1 * value;

        if(value < 0 && convertOdd % 2 >= 1){
            printf("Negative Odd: %d",value);
            continue;
        }else if (value < 0 && convertOdd % 2 == 0)
        {
            printf("Negative Even: %d",value);
            continue;
        }
        else{
            printf("Positive Value Ending Loop");
            break;
        }
    }

     //////////////////////////////////////////
     // Function
     greet();
     printf("\nAdd = %d",Add(1,5));
     sayHello();
     printf("\nMultiply: %d",Multiply(2,5));
     hello();


    ///////////////////////////////////////////////////////////////////////////////////////
    //sqrt of the number then powered the result to the number with user input and function
    double number;
    printf("\nEnter a number to be squared and the result will be powered to its number: ");
    scanf("%lf", &number);
    squareandPower(number);


    ////////////////////////////////////
    // Computing of average inside a array
    int grades[] = {80,90,95,94,92};
    int size = sizeof(grades) / sizeof(grades - 1);
    int sum = 0;
    
    for(int i = 0; i < size; i++){
        sum = sum + grades[i];
    }
    
    printf("\nSum of the grade is = %d",sum);
    int average = sum / size;
    printf("\nAverage grade is = %d",average);


    return 0;
}

void sayHello(){
    printf("\nHI THERE");
}

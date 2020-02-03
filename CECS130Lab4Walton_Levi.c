#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/*
A multifunction Calculator Separated into separate functions
Walton Levi
Section 1
*/

int doAddition();
int doSubtraction();
int doMultiplication();
int doDivision();
int doModulus();
int doPrimeTest();
int doFactorial();
int doPower();
int doFibSeq();

main()
{
    int iMenuSelection;

    do
    {
        //Generate Menu
        printf("Calculator Menu:");
        printf("\n(1) Addition");
        printf("\n(2) Subtraction");
        printf("\n(3) Multiplication");
        printf("\n(4) Division");
        printf("\n(5) Modulus (integers only)");
        printf("\n(6) Test if Prime (integers only)");
        printf("\n(7) Factorial (integers only)");
        printf("\n(8) Power");
        printf("\n(9) Fibonacci Sequence");
        printf("\n(0) Exit");
        printf("\nPlease choose an operation: ");
        scanf("%d", &iMenuSelection);

        switch(iMenuSelection)
        {
        case 1:
            doAddition();
            break;

        case 2:
            doSubtraction();
            break;

        case 3:
            doMultiplication();
            break;

        case 4:
            doDivision();
            break;

        case 5:
            doModulus();
            break;

        case 6:
            doPrimeTest();
            break;

        case 7:
            doFactorial();
            break;

        case 8:
            doPower();
            break;

        case 9:
            doFibSeq();
            break;
        }
    }while(iMenuSelection != 0);
}

int doAddition()
{
    float fFirstNumber;
    float fSecondNumber;
    float fAnswer;

    printf("Enter the First Number: ");
    scanf("%f", &fFirstNumber);
    printf("Enter the Second Number: ");
    scanf("%f", &fSecondNumber);
    fAnswer = fFirstNumber + fSecondNumber;
    printf("\n%f + %f = %f\n\n", fFirstNumber, fSecondNumber, fAnswer);
}

int doSubtraction()
{
    float fFirstNumber;
    float fSecondNumber;
    float fAnswer;

    printf("Enter the First Number: ");
    scanf("%f", &fFirstNumber);
    printf("Enter the Second Number: ");
    scanf("%f", &fSecondNumber);
    fAnswer = fFirstNumber - fSecondNumber;
    printf("\n%f - %f = %f\n\n", fFirstNumber, fSecondNumber, fAnswer);
}

int doMultiplication()
{
    float fFirstNumber;
    float fSecondNumber;
    float fAnswer;

    printf("Enter the First Number: ");
    scanf("%f", &fFirstNumber);
    printf("Enter the Second Number: ");
    scanf("%f", &fSecondNumber);
    fAnswer = fFirstNumber * fSecondNumber;
    printf("\n%f * %f = %f\n\n", fFirstNumber, fSecondNumber, fAnswer);
}

int doDivision()
{
    float fFirstNumber;
    float fSecondNumber;
    float fAnswer;

    printf("Enter the First Number: ");
    scanf("%f", &fFirstNumber);
    printf("Enter the Second Number: ");
    scanf("%f", &fSecondNumber);
    fAnswer = fFirstNumber / fSecondNumber;
    printf("\n%f / %f = %f\n\n", fFirstNumber, fSecondNumber, fAnswer);
}

int doModulus()
{
    int iModulusOne;
    int iModulusTwo;
    int iModulusAnswer;

    printf("Enter the First Number: ");
    scanf("%d", &iModulusOne);
    printf("Enter the Second Number: ");
    scanf("%d", &iModulusTwo);
    iModulusAnswer = iModulusOne % iModulusTwo;
    printf("\nthe remainder of %d and %d is %d\n\n", iModulusOne, iModulusTwo, iModulusAnswer);
}

int doPrimeTest()
{
    int iTestNumber;
    int iTestAnswer;
    int iCheck;

    printf("Enter a number: ");
    scanf("%d",&iTestNumber);
    iTestAnswer=0;
    for(iCheck=2;iCheck <= iTestNumber/2;iCheck++)
        {
            if(iTestNumber%iCheck == 0)
                {
                    iTestAnswer=1;
                    break;
                }
        }
            if(iTestAnswer==0)
                printf("\nPrime Number\n\n");
            else
                printf("\nNot Prime Number because %d / %d\n\n", iTestNumber, iCheck);
}

int doFactorial()
{
    int iTest;
    int iAnswer = 1;
    int iNumber;

    printf("Enter a number: ");
    scanf("%d",&iNumber);
    for(iTest=1;iTest<=iNumber;iTest++)
        iAnswer = iAnswer * iTest;
    printf("Factorial of %d is: %d\n\n", iNumber, iAnswer);
}

int doPower()
{
    int iFirstNumber;
    int iSecondNumber;
    int iAnswer;

    printf("Enter the First Number: ");
    scanf("%d", &iFirstNumber);
    printf("\n Enter the Second Number: ");
    scanf("%d", &iSecondNumber);
    iAnswer = pow(iFirstNumber, iSecondNumber);
    printf("\n%d^%d is %d\n\n", iFirstNumber, iSecondNumber, iAnswer);
}

int doFibSeq()
{
    int iNumber;
    int iRange;
    long int iArray[40];

    printf("\nEnter the range amount: ");
    scanf("%d", &iRange);
    iArray[0] = 0;
    iArray[1] = 1;
    for(iNumber=2; iNumber < iRange; iNumber++)
    {
            iArray[iNumber] = iArray[iNumber - 1] + iArray[iNumber - 2];
    }
    printf("Fibonacci series is: ");
    for(iNumber = 0; iNumber < iRange; iNumber++)
        printf("%ld ", iArray[iNumber]);
        printf("\nFibonacci Ends \n\n");
}

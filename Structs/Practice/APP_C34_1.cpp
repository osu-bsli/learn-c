#include <stdio.h>
#include <stdlib.h>

//Declare structure Type
struct Type
{
  float Balance;
  int Tcount;
};

//Declare structure Account with alias BankBal
typedef struct Account
{
  long int Account;
  char Name[30];
  float TotalBalance;
  //Include two instances of struct Type (Savings and Checking)
  *** CODE ***
  *** CODE ***
} BankBal;

//Create function prototypes for newaccount and transaction
void newaccount (BankBal [], int);
void transaction (struct Type *, float );
void inquiry (BankBal *);

//Begin main function
int main ( )
{
  //Declare counter variable, used to tell newaccount which array index you are using
  int i;

  //Create vector BankLand with 2 instances of struct Account
  *** CODE ***
  
  //Call newaccount to fill in BankLand array
  *** CODE ***
  *** CODE ***
  
  //Call transaction to deposit $435.00 into the Savings account of BankLand[0]
  printf("\nDepositing $435.00 into Savings account of BankLand[0].\n");
  *** CODE ***

  //Call transaction 6 times,  withdrawing  $58.35 from the Checking account of BankLand[1] in each transaction
  int j;
  for (*** CODE ***)
    {
      printf("\nWithdrawing $58.35 from Checking account of BankLand[1].\n");
      *** CODE ***
    }

  //Print details of both BankLand accounts to the screen using inquiry function
  inquiry(*** CODE ***)
  inquiry(*** CODE ***)
}


//Define function newaccount
void newaccount (BankBal a[], int j)
{
  //Prompt user to input values and use scanf to 
  printf("Enter account number:  ");
  scanf("%ld", &a[j].Account);
  printf("Enter account name:  ");
  scanf("%s", a[j].Name);
  printf("Enter Savings balance:  ");
  scanf("%f",&a[j].Savings.Balance);
  printf("Enter Checking balance:  ");
  scanf("%f",&a[j].Checking.Balance);
  printf("\n\n");

  //Initialize Tcount to zero for both Savings and Checking
  *** CODE ***
  *** CODE ***
  
  //Find total balance
  *** CODE ***
}

//Define function transaction
void transaction (struct Type *** CODE ***, float *** CODE ***)
{
    //BankLand only allows 5 transactions per day per account type (Savings or Checking).  If less than 5 transactions have occured, increment Tcount and perform the transaction.  Otherwise, perform the transaction,  withdraw a penalty of $3.00 from the account, and notify the user of the issue.
 if (*** CODE ***)
    {
      //Add transaction amount to total
      *** CODE ***
      //Increment Tcount
      *** CODE ***
    }
  else 
    { 
      //Add transaction amount to total
      *** CODE ***
      //Withdraw $3.00 from account
      *** CODE ***
      //Notify user of issue
      printf("\nMore than 5 transactions have occured today, a $3.00 penalty will be assessed.\n");
    }
}

//Define function inquiry
void inquiry (BankBal *** CODE ***)
{
  //Update TotalBalance
  *** CODE ***

  //Print account details to the screen (Account number, name, total balance, and Savings and Checking balances)
  printf("\nAccount number:\t%ld",*** CODE ***);
  printf("\nAccount name:\t%s",*** CODE ***);
  printf("\nTotal Balance:\t%.2f",*** CODE ***);
  printf("\nSavings Balance:\t%.2f",*** CODE ***);
  printf("\nChecking Balance:\t%.2f",*** CODE ***);
  printf("\n");
}

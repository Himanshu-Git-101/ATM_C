#include <stdio.h>
#include <math.h>

int main(){
    int a,p,q,r; int Balance = 50000; int w,d,c; int PIN=1367;
     printf("Enter Your Pin\nYour Input: ");
    scanf("%d", &r);
    
    if (r == PIN)
    {
    printf("Welcome to ATM!!\nWhat do you wanna proceed with?\n1.Withdrawal\n2.Deposit\n3.Check Balance\n4.Exit\nYour Input: ");
    scanf("%d",&a);
    if (a==1)
    {
        printf("How much money Do you want to withdraw?: ");
        scanf("%d", &w);
        if (w>Balance)
        {
            printf("Insufficient Balance");
        }
        else if (w<=0){
            printf("Inavlid Input");
        }
        else{
        printf("Please Take your cash!!\nDo you want to see your balance?\n1.Yes\n2.No\nYour Input: ");
        scanf("%d",&p);
          if(p== 1){
            printf("Your Balnce is Rs. %d", Balance - w);
         }
          else{
            printf("Thank you for choosing us!!");
         }
    }
    }

    else if (a==2)
    {
        printf("What is the amount you want to deposit?\nAmount : Rs.  ");
        scanf("%d", &d);
        if (d <0){
            printf("Invalid Input");
        }
        else{    
        printf("Your amount has been deposited sucessfully!!\nDo you want to see your balance?\n1.Yes\n2.No\nYour Input: ");
        scanf("%d", &q);
        if(q== 1){
            printf("Your Balnce is Rs.%d", Balance + d);
         }
          else{
            printf("Thank you for choosing us!!");
         }
    }}


    else if (a==3)
    {
        printf("Your account balance is : Rs. %d\n", Balance);
        printf("Thank you for choosing us!!");
    }
    
    else if (a==4){
        printf("Thank you for choosing us!!");
    }
    else {
        printf("Invalid Input");
    }




}
    else {
        printf("Invalid Pin");
    }
    
 
    

    return 0;
}
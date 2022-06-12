/**AUTHOR: PHILIP MKUNU
 *visit our website here >> www.culltek.com
 *Gey in touch >>helpdesk.culltek.com

 * Program to accept imput from user and compare the values with ones in an array.
 * if value matches it returns the value and the index of the value from an array
 *program alseo checks if entered value is a string or an integer
 *
 *
 *Note: Alert me for any bugs or if there is any other better way to do it. : ) (❁´◡`❁)
 *
 */



#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{

   int getNum=0;
   int num=0;
    _Bool truth=true;//value to keep our loop live
    int arrSize=0;//variable to store picked number


    int arr[]={23,340,100,343,454,200};//array initialization
    arrSize=sizeof(arr)/sizeof(arr[0]);//getting the length of an array

    //displaying to user
    printf("NOTE: Enter 0 to exit the program\n");
     printf("       23,340,100,343,454,200\n");
     printf("==============================================\n");
      printf("Peak a number from above list and I will tell you the index\n==>");

     do{


        num= scanf("%d",&getNum);

        int ind=search(arr,getNum,arrSize);

        //checking if the supplied value is not an int
           if(num!=1){
                //ignoring a string of characters which are not numerical
                scanf("%*[^\n]");//ignoring the strings
                throwsError();//throws an error but the program continues without breaking
                num=-1;
            }else
                getNum!=0? num=results( ind, getNum): exitProgram();//this is an if statement,it checks whether the value
                                                                    //entered is a zero. if its a zero it calls axitProgram
                                                                    //method. otherwise proceed


     }while(truth);
    return 0;
}

//this method is called when user enters any integer apart from 0
//it returns j , if j is negative it means the entered value didnt match any number in the array.
 int search(int arr[],int num,int arrSize){
    int j=-1;
    for (int i=0; i< arrSize; i++)
        if(num==arr[i])
            j=i;
    return j;

}
//when user enters an integer this method is executed
int  results(int ind,int getNum,int num){
    if(num>=0){
          printf("The picked number is %d", getNum);
      if(ind>=0)
          printf(": its index is %d\n==>", ind );
       else printf(": we could not find the number's index \n==>");
    }else num=0;

   return num;
}
//this block i called when user enters string values
void  throwsError(){
 printf("Error  this is not a number, try again\n==>");
}


//exiting the program when user clicks a zero
void  exitProgram(){
    exit(0);
}

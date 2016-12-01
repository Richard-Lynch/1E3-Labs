
/* The following program pertains to an assignment given to me on the 13/03/2014
The following code will attempt to recreate the lotto game
The code will display a main menu and restrict the user from entering into
any option until he/she has entered option 1 and correctly entered 6 different numbers
between 1 and 42 . I will use a series of individual functions to carry out each option
as specified in the contract. I will also store the lottery numbers in a 1D array and
only access the numbers through pointer notation.

The code will contain contingency messages incase the user enters incorrect input
The program will be contained in a loop should the user want to play the game again or if 
they do not wish to play again the program will terminate gracefully
Author Fionn Mcguire
Start Date: 15/03/2014
Finish Date: 27/03/2014 */

#include <stdio.h>
#include <stdlib.h> 
#define SIZE 6 //Symbolic name incase the client would like to change the version of the lottery

int mainmenu(); //This is the redisplaying menu function
int option1();   //These are the functions that carry out each option on the menu
void option2(int *,int);
void option3(int *,int,int);
void option4(int *,int *,int,int);
void option5(int *,int);


main()
{
    int menu_response=2; 
    int lotto_numbers[SIZE];
    int winning_numbers[7]={1,3,5,7,9,11,42};     //winning array with the bonus number
    int frequency_array[43]; //must be 43 elements as the way option 5 works is that the number entered is used as the element position
    int i,j;//therfore because arrays start as 0 and only has 42 elements it will only go from 0 to 41 and when the user enters 42 instead of saying a random number
    //the program will say how many times the number 42 was actually selected
    bool test_again=true;  //boolean to be used to make sure the user entered 1 first
    bool game=true;  //this bool was used to keep playing the game and bringing the user back to the start however their 
    //lotto numbers would remain the same unless they selected 1 to overwrite them
    
    
    for(i=0;i<43;i++)
    {
        *(frequency_array+i)=0; //each element in the array must be initialised as 0 for the if statement in
    }//the function of option 5 to work
    
    
    
    while(test_again==true)
    {
        menu_response=mainmenu();
        
        if(menu_response==6)//if 6 is entered initially this if statement will close the program
        {
            game=false;
            test_again=false;
            printf("Exiting");
        }
        else if(menu_response>6 || menu_response<1) //this if statement ensures the user selects an option within the available options
        {
            printf("Not an option. \n");
            test_again=true;
        }
        else if(menu_response == 1)//this makes sure that if the user selects one they will be brought into the game while loop
        {
            game=true;
        }
        else if(menu_response != 1) //if they try to select another option aside from 1 this if statement will display a message and bring them
        {                     //back to the beginning of the while loop
            printf("You must play the game before selecting these options\n");
            test_again=true;
            game=false;//making game false so the functions arent carried out anyway
        }
        
        while(game==true)  //this while loop creates a continuous game 
        {//the while loop contains a series of if else statements which will fulfil the function called corilating to the option selected
            if(menu_response==1)
            {
                for(i=0;i<SIZE;i++)//this for loop resets the lotto_numbers array to zero
                {
                    *(lotto_numbers+i)=0;
                }
                
                printf("Enter in 6 numbers between 1 and 42\n");
                
                for(i=0;i<SIZE;i++)//used pointer notation as specified however i found it difficult to pass 
                {  //pass a 1D array back so instead i passed one element at a time and changed the value
                    bool same_numbers = false;                    
                    
                    *(lotto_numbers+i)=option1();
                    
                    for(j=0;j<SIZE;j++)
                    {
                        if(*(lotto_numbers+j) == *(lotto_numbers+i) && j != i && same_numbers == false)
                        {//this if statment displays an error check message if the user enters the same number twice
                            printf("That number is in use... please re-enter a number.\n");
                            same_numbers = true;////by declaring same numbers as true this loop will not repeat itself
                            //and the following if statement will be skipped meaning the frequency array will not be altered
                            i--;  //after they have entered in the same number twice the message will be displayed and the for
                        }//loop will be taken back an element, that element will be overwritten next time the user enters a number
                    }
                    
                    if(same_numbers == false)//if the same numbers are not entered
                    {
                        j=lotto_numbers[i]; //this is going to be used in option 5 i have made an array of 42 the scanned number will
                        frequency_array[j]++;//be the array element number and then add to the counter                           
                        
                    }
                }
                
            menu_response=mainmenu();                
            }
            else if(menu_response==2)
            {
                option2(lotto_numbers,i);
                menu_response=mainmenu();
                game=true;
            }
            else if(menu_response==3)
            {
                option3(lotto_numbers,i,j);
                menu_response=mainmenu();
                game=true;
            }
            else if(menu_response==4)
            {
                option4(lotto_numbers,winning_numbers,i,j);
                menu_response=mainmenu();
                game=true;
            }
            else if(menu_response==5)
            {
                option5(frequency_array,i);
                menu_response=mainmenu();
                game=true;
            }
            else if(menu_response==6)//if 6 to be selected, this else if statement is needed to end the program fromwithin the nested while
            {
                game=false;
                test_again=false;
                printf("Exiting...");
            }
        }
    }
    
    getchar();
}

int mainmenu() //as stated earlied this is merely a menu nothing is passed back it is just a series of printfs
{//followed by a scanf() to read user input
    int menu_response;

    printf("The Lotto\n\n");
    printf("MAIN MENU\n\n");
    printf("Enter 1 to Play the game\n");
    printf("Enter 2 to Display the numbers you entered\n");
    printf("Enter 3 to See How the numbers appear on your ticket\n");
    printf("Enter 4 to See what you won!!\n");
    printf("Enter 5 to See the number frequency\n");
    printf("Enter 6 to Exit program\n");
    scanf("%d",&menu_response);
    
    if(menu_response==1 || menu_response==2 || menu_response==3 || menu_response==4 || menu_response==5 || menu_response==6) //this if statement ensures the user selects an option within the available options
    {
        return(menu_response);
    }
    else
    {
        printf("Sorry That is not an option. \n\n");
        // This clears the input buffer, this is important as scanf is called again when mainmenu() gets called and if the input buffer is full it wont
        // ask the user to input anything.
        scanf("%*[^\n]");
        menu_response = mainmenu();
    }
    
    return(menu_response);
}

int option1() //this function must change an element value within main so the new value is declared, scan for user input,
{             // the number they input is passed back as the value of that element
    bool outside_value=true;
    int new_value;
    
    while(outside_value==true)
    {
        scanf("%d",&new_value);
        if(new_value>42 || new_value<1)
        {
            printf("The numbers must be between 1 and 42\n\n");
            outside_value=true;//this ensures that if the numbers entered are outside 1 to 42 the loop will restart
        }//without taking up that element in the 1d array
        else
        {//if the number entered is between 1 to 42 the loop has been ended and the function will be complete
            outside_value=false;
        }
    }
    
    return(new_value);
}

void option2(int *lotto_numbers,int i) //in this function the array is passed into  option2() then a for loop  
{                                      //goes through each element and prints that element
    printf("Your numbers are: ");
    for(i=0;i<SIZE;i++)
    {
        printf("%d ",lotto_numbers[i]);
    }
    printf("\n\n");
}

void option3(int *lotto_numbers,int i,int j) //this function uses a bubble sort algorithm to put the numbers in order smallest to largest
{
    int temp;
    
    for(i=0;i<SIZE;i++)
    {
        for(j=0;j<SIZE-1;j++)
        {
            if(lotto_numbers[j]>lotto_numbers[j+1]) //if element 1 is less than element 2
            {
                temp=lotto_numbers[j+1];   //element 2 becomes temp
                lotto_numbers[j+1]=lotto_numbers[j]; //element 1 becomes element 2
                lotto_numbers[j]=temp; //temp(element 2) becomes the new element 1
            }
        }
        
    }
    printf("They will appear on your ticket as: "); //printing lotto numbers in order small to large using for loop
    for(i=0;i<SIZE;i++)
    {
        printf("%d ",*(lotto_numbers+i));
    }
    printf("\n\n");

}//end function 3

void option4(int *lotto_numbers,int *winning_numbers,int i,int j) //passing 2 arrays and for loop variables
{
    bool bonus=false; //this will be used to determine if a bonus number is matched
    int counter=0; //counts how many numbers were matched
    
    for(i=0;i<SIZE;i++)//this will go through all elements of lotto numbers as i used i in the pointer notation
    {
        for(j=0;j<SIZE;j++) //this will go through all elements of winning numbers as i used j in the pointer notation
        {
            if(*(lotto_numbers+i)==*(winning_numbers+j)) //if any numbers in lotto match each indiviual element of winning
            {                                            
                counter++;                     //the counter will increase by 1
            }
        }
    }
    
    for(i=0;i<SIZE;i++) //checking if any element of lotto numbers matched bonus number
    {
        if(*(lotto_numbers+i)==*(winning_numbers+7))
        {
            bonus=true;
        }
    }
    
    if(counter==6) // the following if statements are used to check what prize the user won if any
    {
        printf("\n\n ***JACKPOT***\n\n");
    }
    
    else if(counter==5 && bonus==true)
    {
        printf("\n\n You won a NEW CAR\n\n");
    }
    
    else if(counter==4 && bonus==true)
    {
        printf("\n\n You won a WEEKEND AWAY\n\n");
    }
    
    else if(counter==3 && bonus==true)
    {
        printf("\n\n You won a CINEMA TICKET\n\n");
    }
    
    else if(counter==5)
    {
        printf("\n\n You won a HOLIDAY\n\n");
    }
    
    else if(counter==4)
    {
        printf("You won a NIGHT OUT\n\n");
    }
    
    else
    {
        printf("You didn't match any numbers Better luck next time\n\n");
    }
    
}//end function 4

void option5(int *frequency_array,int i)
{
    for(i=0;i<=42;i++)//for loop goes through all elements of the array
    {
        if(*(frequency_array+i)!=0)//if the number has been entered before its counter will be not be zero and therfore will be printed
        {
            printf("The number %d was entered %d times\n",i,*(frequency_array+i));
        }
    }
}
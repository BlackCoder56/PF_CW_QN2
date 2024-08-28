#include <iostream>

using namespace std;
// this code was written by Elisha alias BlackCoder56 and stored on github.com/BlackCoder56
int main()
{

    int j; // this variable stores the user inputted positive integer.
    char option = 'y'; // this variable stores user inputted option ie if user wants to re-run the program

    // The while loop below repeats it's self as long as option == y otherwise if option == n then the loop will stop
    while(option == 'y'){
        cout << "Please enter a positive integer: "; // This prompts user to enter positive integer(j)
        cin >> j;   // Reading positive integer from terminal.

        /* The if statement below checks whether:
            ->inputted integer is a positve or
            ->the integer is less then zero
        */
        if(j>0){
            /*
            The code in this block is executed when the integer is greater than zero.
            The for loop block prints numbers less than or equal to the inputted integer in descending order.
            */
            for(int i=j;i>0;i--){
                // The if statement block checkes whether the integer when divided by the counting number(ie.i) is equal to zero, and then prints the divissable number.
                if(j%i==0){
                 cout << i<<"\n";
                }
            }
        }else{
            // This else block is executed when inputted integer is less than zero.
            cout << j <<" is not a positive integer.\n";
            continue; // this make compiler ignore the code below and go back to the top of the loop.
        }


        cout << "\nWould you like to see the divisors for another integer (Y/N)?: ";// This prompts user to enter the option input whether they want to repeat the program or not.
        cin >> option; // This read the option inputted by the user.

        /* The if statements below check whether the user wants to
           run the program again or want to stop running the program
        */
        if(option=='y'){
            continue;
        }else if(option=='n'){
             break;
        }else{
            cout << "\nProgram crashed due to invalid user input.\n";
        }

    }


    return 0;
}

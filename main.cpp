#include <iostream>

using namespace std;

int main()
{
    int j;
    char option = 'y';
    while(option == 'y'){
        cout << "Please enter a positive integer: ";
        cin >> j;

        if(j>0){
            for(int i=j;i>0;i--){
            if(j%i==0){
             cout << i<<"\n";
            }
            }
        }else{
            cout << j <<" is not a positive integer.\n";
            continue;
        }

        cout << "\nWould you like to see the divisors for another integer (Y/N)?: ";
        cin >> option;

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

//Matas Suziedelis
//Viraj Lawande

#include <iostream>
#include <string>

using namespace std;

void PrintArray(int v[], int size){								//This PrintArray function replaces the for loops that are used to print out the user's binary inputs/conversions
    size = size - 1;
    for (size; size >= 0; size--){								//it consists of a for loop that prints out each bit of the array that the function is calling
        cout<<v[size];										//and stops when the predetermined size value that the function calls for is reached
    }
}

void PrintAddress(int v[], int size){								//This PrintAddress function replaces the for loops that are used to print out the addresses of the bits in the users binary inputs/conversions
    size = size - 1;
    for (size; size >= 0; size--){								//it uses the same input structure as the PrintArray function
        cout<<dec<<"The address of bit["<<size<<"] for your binary number is "<<&v[size]<<"\n";
    }
}
                                        // for a more detailed psuedocode, please see lab05.cpp
int main(){
    int binary_1 [8];										//here we shall explain what was changed from lab 05
    int binary_2 [32];
    int decimal = 0;
    int response;
    int a;

    while (response != 3){
        cout<<"\n\nWelcome to viraj's binary conversion studio";
        cout<<"\nTo convert an unsigned binary number to Decimal and Hexadecimal, enter 1";
        cout<<"\nTo display a 32-bit number representation of an unsigned Decimal number, enter 2";
        cout<<"\nTo exit the main menu, enter 3\n";
        cin>>response;

        switch (response) {
            case 1:
                for (int z = 0; z <= 7; z++){
                    cout<<"Please enter bit["<<z<<"] = ";
                    cin>>binary_1[z];
                }

                a = sizeof(binary_1)/sizeof(binary_1[0]);							//this equation finds the length of the array, and stores it as a value

                cout<<"The number you entered is: ";
                PrintArray(binary_1,a);									//the functions PrintArray and PrintAddress then use the array name and the stored size value to print the bits and their addresses for the binary number
                cout<<"\n";											//replaces the forloop used in lab 05
                PrintAddress(binary_1, a);

                for (int y = 7; y >= 0; y--){
                    int count = 1;
                    for (int x = 0; x < y; x++){
                        count = count*2;
                    }
                    decimal = decimal +count*binary_1[y];
                }

                cout<<"\nYour number in decimal is "<<decimal;
                cout<<"\nYour number in hexadecimal is "<<hex<<decimal;
                break;

            case 2:
                cout<<"Please enter an unsigned decimal number: \n ";
                cin>>decimal;

                for (int i = 0; i <= 31; i++){
                    binary_2[i] = decimal%2;
                    decimal = decimal/2;
                }

                a = sizeof(binary_2)/sizeof(binary_2[0]);

                cout<<"Your number in Binary is: ";
                PrintArray(binary_2, a);
                cout<<"\n";
                PrintAddress(binary_2, a);

                cout<<"\n";
                break;

            case 3:
                cout<<"Exiting Main menu";
                break;

            default:
                cout<<"Please enter 1, 2 or 3";
        }
    }
    return 0;
}

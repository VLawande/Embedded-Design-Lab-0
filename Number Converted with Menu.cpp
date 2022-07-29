//Matas Suziedelis
//Viraj Lawande
//EECE 2160

#include <iostream>
#include <string>

using namespace std;										//allows usage of cout and cin

int main(){
    int binary_1 [8];										//create two arrays to represent the various binary numbers that will be used in each case
    int binary_2 [32];
    int decimal = 0;
    int response;

    while (response != 3){										//this while loop allows the code to repeat unless the user enters the number 3
        cout<<"\n\nWelcome to Viraj and Matas' Number Conversion Studio";				//give the user a menu with 3 options to work with
        cout<<"\nTo convert an unsigned binary number to Decimal and Hexadecimal, enter 1";
        cout<<"\nTo display a 32-bit number representation of an unsigned Decimal number, enter 2";
        cout<<"\nTo exit the main menu, enter 3\n";
        cin>>response;

        switch (response) {
            case 1:												//case 1 is the same code as assignment 03 in this lab
                for (int z = 0; z <= 7; z++){
                    cout<<"Please enter bit["<<z<<"] = ";							//for further clarification, please see lab03.cpp
                    cin>>binary_1[z];
                    cout<<"The address of this bit is "<<&binary_1[z]<<"\n";
                }

                for (int y = 7; y >= 0; y--){
                    int count = 1;
                    for (int x = 0; x < y; x++){
                        count = count * 2;
                    }
                    decimal = decimal + count * binary_1[y];
                }

                cout<<dec<<"\nYour number in decimal is "<<decimal;
                cout<<"\nYour number in hexadecimal is "<<hex<<decimal;
                break;

            case 2:
                cout<<"Please enter an unsigned decimal number: \n ";						//case 2 is the same code as assignment 04 in this lab
                cin>>decimal;											//for further clarification, please see lab04.cpp

                for (int i=0; i <= 31; i++){
                    binary_2[i] = decimal % 2;
                    decimal = decimal/2;
                }

                cout<<"Your number in Binary is: ";
                for (int j = 31; j >= 0; j--){
                    cout<<binary_2[j];
                }
                for (int j = 31; j >= 0; j--){
                    cout<<dec<<"\nThe address for bit["<<j<<"] is "<<&binary_2[j];
                }
                cout<<"\n";
                break;

            case 3:												//case 3 allows the user to exit the program by breaking the while loop that was established earlier
                cout<<"Exiting Main menu";
                break;

            default:
                cout<<"Please enter 1, 2 or 3";							//if the user enters some input other than 1, 2 or 3, this default case ensures that they select one of the apprpriate methods
                break;
        }
    }
    return 0;
}

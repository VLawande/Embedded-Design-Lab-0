//Matas suziedelis
//Viraj Lawande
//EECE 2160

#include <iostream>
#include <string>

using namespace std;					//allows usage of cout and cin

int main(){
    int decimal;						//create an integer to capture the user's decimal input, and a 32 bit array to represent the binary conversion
    int binary [32];
    cout<<"Please enter an unsigned decimal number: ";	//prompt the user to enter a decimal number
    cin>>decimal;

    for (int i=0; i<=31; i++){				//use a for loop to convert the decimal number to binary, using the Repeated Division-by-2 Method
        binary[i] = decimal%2;
        decimal = decimal/2;
    }

    cout<<"Your number in Binary is: ";			//use another for loop to output each bit of the binary number in order
    for (int j=32; j>=0; j--){
        cout<<binary[j];
    }
    cout<<"\n";

    return 0;
}

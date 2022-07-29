//Matas Suziedelis
//Viraj Lawande
//EECE 2160

#include <iostream>
#include <string>

using namespace std;						//This allows us to use all standard items in this code, such as cout and cin

int main()
{
  int binary [8];						// set up an array to store each bit of the users binary input
  int decimal = 0;
  int count;

  for (int z = 0; z<=7; z++){
    cout<<"Please enter bit["<<z<<"] = "; 			//Tell user to input the number bit by bit for all 8 bits
    cin>>binary[z];
  }

  for (int y = 7; y>=0; y--){					//create a variable count that replaces the power function that we would otherwise use in calculating the decimal value of this number
    int count = 1;
    for (int x=0; x<y; x++){
      count = count*2;
    }
    decimal= decimal + count*binary[y];
  }
  cout<<"Your number in decimal is "<< decimal;
  cout<<"\nYour number in hexadecimal is "<<hex<<decimal;	//use hex to set the basefield of this statement to hexadecimal, and output the number in hexadecimal

  return 0;
}

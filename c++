#include <iostream>
using namespace std;

int main() 
{    
    cout << "Size of char: " << sizeof(char) << " byte" << endl;
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of float: " << sizeof(float) << " bytes" << endl;
    cout << "Size of double: " << sizeof(double) << " bytes" << endl;

    return 0;
}
/*Output

Size of char: 1 byte
Size of int: 4 bytes
Size of float: 4 bytes
Size of double: 8 bytes*/
/*---------------------------------------------------------------------------*/
//second program 

#include <iostream>
using namespace std;

int main()
{
    double firstNumber, secondNumber, productOfTwoNumbers;
    cout << "Enter two numbers: ";
   

    // Stores two floating point numbers in variable firstNumber and secondNumber respectively
    cin >> firstNumber ;
    cin >>  secondNumber ;
 
    // Performs multiplication and stores the result in variable productOfTwoNumbers
    productOfTwoNumbers = firstNumber * secondNumber;  

    cout << "Product = " << productOfTwoNumbers;    
    
    return 0;
}
/*

Enter two numbers: 3.4                                                                                               
5.5                                                                                                                  
Product = 18.7 */ 

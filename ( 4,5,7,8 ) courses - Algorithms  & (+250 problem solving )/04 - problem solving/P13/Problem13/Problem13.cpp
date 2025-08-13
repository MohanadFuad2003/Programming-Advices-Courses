#include <iostream>  
#include <string>   

using namespace std;  

void ReadNumbers(int& Num1, int& Num2)
{
    cout << "Please enter Number A ? " << endl;
    cin >> Num1;

    cout << "Please enter Number B ? " << endl;
    cin >> Num2;
}

// Function: Swap
// Purpose: Swaps the values of two integer variables using a temporary variable.
// Parameters: 
//   - A: Reference to the first integer variable.
//   - B: Reference to the second integer variable.
// Returns: None (values are modified directly in the caller's scope).
void Swap(int& A, int& B)
{
    int Temp;  // Temporary variable to hold one of the values during swapping.

    Temp = A;  // Store the value of A in Temp.
    A = B;     // Assign the value of B to A.
    B = Temp;  // Assign the value of Temp (original A) to B.
}


void PrintNumbers(int Num1, int Num2)
{
    cout << "\nNumber1 = " << Num1 << endl;
    cout << "Number2 = " << Num2 << endl;
}

int main()
{
    int Num1, Num2;  

   
    ReadNumbers(Num1, Num2);

    PrintNumbers(Num1, Num2);

    Swap(Num1, Num2);

    PrintNumbers(Num1, Num2);

    return 0;  
}
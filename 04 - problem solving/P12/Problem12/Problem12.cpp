#include <iostream> 
#include <string>     

using namespace std; 


void ReadNumbers(int& A, int& B, int& C)
{
    cout << "Please enter Number A ? " << endl;
    cin >> A;

    cout << "Please enter Number B ? " << endl;
    cin >> B;

    cout << "Please enter Number C ? " << endl;
    cin >> C;
}

// Function: MaxOf3Numbers
// Purpose: Determines the maximum of three integer numbers.
// Parameters: 
//   - A: First integer value.
//   - B: Second integer value.
//   - C: Third integer value.
// Returns: The greatest of the three numbers.
int MaxOf3Numbers(int A, int B, int C)
{
    // Compare A with B and C to determine the maximum.
    if (A > B)
    {
        if (A > C)
            return A;  // A is the largest
        else
            return C;  // C is larger than A
    }
    else  // B >= A
    {
        if (B > C)
            return B;  // B is the largest
        else
            return C;  // C is larger than B
    }
}


void PrintResults(int Max)
{
    cout << "\n The Maximum Number is: " << Max << endl;
}

int main()
{
    int A, B, C;  

 
    ReadNumbers(A, B, C);

    PrintResults(MaxOf3Numbers(A, B, C));

    return 0;  
}
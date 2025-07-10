#include <iostream>   
#include <string>    

using namespace std;  


void ReadNumbers(float& A, float& B)
{
    cout << "Please enter rectangle width A ? " << endl;
    cin >> A;

    cout << "Please enter rectangle length B ? " << endl;
    cin >> B;
}

// Function: CalculateRectangleArea
// Purpose: Computes the area of a rectangle given its width and length.
// Parameters: 
//   - A: Float value representing the width.
//   - B: Float value representing the length.
// Returns: The computed area of the rectangle as a float.
float CalculateRectangleArea(float A, float B)
{
    return A * B;  // Compute and return the rectangle's area.
}


void PrintResult(float Area)
{
    cout << "\nRectangle Area = " << Area << endl;
}

int main()
{
    float A, B;
    ReadNumbers(A, B);
    PrintResult(CalculateRectangleArea(A, B));

    return 0; 
}
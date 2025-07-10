#include <iostream>   // Include iostream for input/output operations.
#include <string>     // Include string for potential future use.
#include <cmath>      // Include cmath to use sqrt() and pow() functions.

using namespace std; 


void ReadNumbers(float& A, float& D)
{
    cout << "Please enter rectangle side A ? " << endl;
    cin >> A;

    cout << "Please enter rectangle diagonal D ? " << endl;
    cin >> D;
}

// Function: RectangleAreaBySideAndDiagonal
// Purpose: Computes the area of a rectangle using one side and the diagonal.
// Parameters: 
//   - A: Float value representing one side of the rectangle.
//   - D: Float value representing the diagonal of the rectangle.
// Returns: The computed area of the rectangle as a float.
float RectangleAreaBySideAndDiagonal(float A, float D)
{
    // Calculate the area using the formula: Area = A * sqrt(D² - A²)
    float Area = A * sqrt(pow(D, 2) - pow(A, 2));

    return Area;  // Return the computed area.
}


void PrintResult(float Area)
{
    cout << "\nRectangle Area = " << Area << endl;
}

int main()
{
    float A, D;  // Declare two float variables to store the rectangle's side and diagonal.
    ReadNumbers(A, D);

    PrintResult(RectangleAreaBySideAndDiagonal(A, D));

    return 0;  // Return 0 to indicate successful execution.

}
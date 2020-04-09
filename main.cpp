#include <iostream>
using namespace std;


int main() 
{

      const int CITY = 2;

      const int WEEK = 7;  

 

    int temperature[CITY][WEEK];

    //Note your input data from the above

    cout << "Enter all temperature for a week of first city and then second city. \n";

 

    // Inserting the values into the temperature array

    //note for every dimension of the array you need a for loop 2 dimensions = 2 for loops
    string Cities[2] = { "FortWorth ", "Arlington" };
    
    for (int i = 0; i < CITY; ++i)

    {

        for(int j = 0; j < WEEK; ++j)

        {

            cout << Cities [i] << ", Day " << j + 1 << " : ";

            cin >> temperature[i][j];

        }

    }

 

    cout << "\n\nDisplaying Values:\n";

 

    // Accessing the values from the temperature array

    for (int i = 0; i < CITY; ++i)

    {

        for(int j = 0; j < WEEK; ++j)

        {

            cout << Cities [i] << ", Day " << j + 1 << " = " << temperature[i][j] << endl;

        }

    }

 

    return 0;
}

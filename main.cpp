//Student Name: Ronald Angora
//Teacher: Dr. Tyson McMillan
//Date: 04/13/2021
//A program to practice working with multi-dimensional arrays

#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

/*

Research Input data: go to http://www.weather.com

Pick two cities of your choice. Fill in the temperature for the 7 days of this week of both cities. Fill in this text data table, which will be used in your program.

//City_One = 1, City_Two = 2  Replace City_One and City_Two with the names of your cities

//Data Table

//City X, Day X: TEMP

Denver, Day 1: 46

Denver, Day 2: 41

Denver, Day 3: 38

Denver, Day 4: 41

Denver, Day 5: 52

Denver, Day 6: 49

Denver, Day 7: 47

Miami, Day 1: 80 

Miami, Day 2: 81

Miami, Day 3: 86

Miami, Day 4: 89

Miami, Day 5: 88

Miami, Day 6: 84

Miami, Day 7: 84

*/

 

int main()

{

  const int CITY = 2;
  const int WEEK = 7;
  int temperature[CITY][WEEK];
  int cityOne[7];
  int cityTwo[7];

  //Note your input data from the above

  cout << "Enter all temperature for a week of first city and then second city. \n";
  
  // Input for Denver Temps
  for (int i = 0; i < 7; ++i)
  {
      cout << "Denver, Day " << i + 1 << " : ";
      cin >> temperature[0][i];
  }

  // Input for Miami Temps
  for (int i = 0; i < 7; ++i)
  {
      cout << "Miami, Day " << i + 1 << " : ";
      cin >> temperature[1][i];
  }
  

  // Inserting the values into the temperature array

  //note for every dimension of the array you need a for loop 2 dimensions = 2 for loops

  /*for (int i = 0; i < CITY; ++i)
    {
        for(int j = 0; j < WEEK; ++j)
        {
            cout << "City " << i + 1 << ", Day " << j + 1 << " : ";
            cin >> temperature[i][j];
        }
    }
  */

  cout << "\n\nDisplaying Values:\n";

  // Accessing the values from the temperature array
  
  // Output temps for Denver
  for (int i = 0; i < CITY - 1; ++i)
  {
    for(int j = 0; j < WEEK; ++j)
    {

      cout << "Denver " << ", Day " << j + 1 << " = " << temperature[0][j] << endl;

    }

  }
  
  // Output temps for Miami
  for (int i = 1; i < CITY; ++i)
  {
    for(int j = 0; j < WEEK; ++j)
    {

      cout << "Miami " << ", Day " << j + 1 << " = " << temperature[1][j] << endl;

    }

  }

  /*for (int i = 0; i < 7; ++i)
    {
      cout << "Denver, Day =  " << cityOne[i] << endl;
    }
  for (int i = 0; i < 7; ++i)
    {
      cout << "Miami, Day =  " << cityTwo[i] << endl;
    } */   

   /*For up to 5 Points Extra Credit

      Expand this program:

      1. Create a one dimensional array, cityOne[7] to store the 7 temperatures of city 1, assume that value 0 represents day 1, 1 represents day 2....

      2. Create a on dimensional array, cityTwo[7] to store the 7 temperatures of city 2 , assume that value 0 represents day 1, 1 represents day 2....

      3. Using a for loop (or nested for loop), feed the data of CityOne[] and CityTwo[] into temperature[i][j], where i is index of the City Number, and j is the index of the temp for the day.

      4. print the results of temperature[i][j]; to the screen.

    */

 

    return 0;

}
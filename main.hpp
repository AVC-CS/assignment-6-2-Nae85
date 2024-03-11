//

#include <iomanip>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

int getRandom(void);
int getClosestMed(int num1, int num2, int num3);

// complete two functions
int getRandom(void)
{
         srand(time(NULL)); 
        int num1 = getRandom();
        int num2 = getRandom();
        int num3 = getRandom();
    
        cout << "Random numbers: " << num1 << ", " << num2 << ", " << num3 << endl;
    
        int closestMed = getClosestMed(num1, num2, num3);
    
         cout << "Closest to the mean: " << closestMed << endl;
    
         return 0;
}
        /***************************************************
         * Code your program here
         ***************************************************/
{
int getClosestMed( num1, num2, num3)
  return rand() % 100;
}
{
int getClosestMed(int num1, int num2, int num3) {
    int mean = (num1 + num2 + num3) / 3;
    int num1 = abs(num1 - mean);
    int num2 = abs(num2 - mean);
    int num3 = abs(num3 - mean);
    
    if (num1 <= num2 && num1 <= num3)
        return num1;
    else if (num2 <= num1 && num2 <= num3)
        return num2;
    else
        return num3;

        /***************************************************
         * Code your program here
         ***************************************************/
}
}
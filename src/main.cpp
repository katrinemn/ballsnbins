//
//  main.cpp
//  BallsNBins
//
//  Created by Katrine Maria Nielsen on 10/10/16.
//  Copyright © 2016 Katrine Maria Nielsen. All rights reserved.
//

#include <iostream>
#include "BallsNBins.hpp"

int averageLargest(int binSize, int ballNum, bool twoChoices) // method to calculate the average of a number of tries.
{
    double number = 0.0;
    int divisor = 1000; 
    for (int i = 0; i < divisor; i++) //To find an appropriate value, the process is done divisor times.
    {
        BallsNBins bin(binSize);
        if(twoChoices)
            number += bin.insertBallsTC(ballNum);
        else
            number += bin.insertBalls(ballNum);
    }
    return (number/divisor);
}

int main()
{
    srand(static_cast<unsigned int>(time(0)));
    
   
    cout << "The number of balls in the most filled bin using 10007 bins and 10007 balls, using the first choice: " << averageLargest(10007,10007,0) << endl;
     //cout << "Calculated value: " << log(10007)/(log(log(10007))) << endl; // the max number of balls in one bin is described mathematically by O(Log(N)/Log Log(N)).
    
    cout << endl;
    
    
    cout << "The number of balls in the most filled bin using 10007 bins and 10007 balls, using the power of two choices: " << averageLargest(10007,10007,1) << endl;
   // cout << "Calculated value: " << log(log(10007)) << endl; // the max number of balls in one bin is described mathematically by O(Log Log(N)).
    
    cout << endl;
    
    cout << "The number of balls in the most filled bin using 1000000 bins and 1000000 balls, using the first choice: " << averageLargest(1000000,1000000,0) << endl;
    cout << "Calculated value: " << log(1000000)/(log(log(1000000))) << endl; // the max number of balls in one bin is described mathematically by O(Log(N)/Log Log(N)).
    
    cout << endl;
    
    
    cout << "The number of balls in the most filled bin using 1000000 bins and 1000000 balls, using the power of two choices: " << averageLargest(1000000,1000000,1) << endl;
    cout << "Calculated value: " << log(log(1000000)) << endl; // the max number of balls in one bin is described mathematically by O(Log Log(N)).
    
    cout << endl;
    
    return 0;
}

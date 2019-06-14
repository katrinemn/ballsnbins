//
//  BallsNBins.hpp
//  BallsNBins
//
//  Created by Katrine Maria Nielsen on 10/10/16.
//  Copyright © 2016 Katrine Maria Nielsen. All rights reserved.
//

#ifndef BallsNBins_hpp
#define BallsNBins_hpp

#include <stdio.h>
#include <iostream>
#include <time.h>
#include <cmath>
using namespace std;

class BallsNBins
{
public:
    BallsNBins();
    BallsNBins(int binNum);
    int insertBalls(int ballNum);
    int insertBallsTC(int ballNum);
private:
    void initBin(int size);
    int findBiggest();
    int* bins;
    int binSize;
};

#endif /* BallsNBins_hpp */

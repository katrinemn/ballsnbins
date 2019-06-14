//
//  BallsNBins.cpp
//  BallsNBins
//
//  Created by Katrine Maria Nielsen on 10/10/16.
//  Copyright © 2016 Katrine Maria Nielsen. All rights reserved.
//

#include "BallsNBins.hpp"

BallsNBins::BallsNBins() // default constructor calls init function
{
    initBin(100);
}

BallsNBins::BallsNBins(int size) // constructor calls init function
{
    initBin(size);
}

void BallsNBins::initBin(int size) //method creates dynamic array of the chosen bin size
{
    binSize = size;
    bins = new int[binSize];
    for (int i = 0; i < binSize; i++)
    {
        bins[i] = 0;
    }
}
int BallsNBins::insertBalls(int ballNum)  //This method puts the balls in the bins by random first choice
{
    for (int i = 0; i < ballNum; i++)
    {
        bins[rand()% binSize] += 1;
    }
    return findBiggest();
}

int BallsNBins::insertBallsTC(int ballNum) // This method puts the balls in the bins by picking two bins and choosing the one with the least balls.
{
    for (int i = 0; i < ballNum; i++)
    {
        int randomNum = (rand()% binSize);
        int secondRandom = (rand()% binSize);
        if (bins[randomNum] < bins[secondRandom])
            bins[randomNum] += 1;
        else
            bins[secondRandom] += 1;
    }
    return findBiggest();
}

int BallsNBins::findBiggest()  // This is a private method that finds the biggest of two bins
{
    int biggest = 0;
    for( int i = 0; i < binSize; i++)
    {
        if(biggest < bins[i])
            biggest = bins[i];
    }
    return biggest;
}

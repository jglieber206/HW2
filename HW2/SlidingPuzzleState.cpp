//
//  SlidingPuzzleState.cpp
//  HW2
//
//  Created by Jace Lieberman on 2/9/15.
//  Copyright (c) 2015 Jace Lieberman. All rights reserved.
//

#include "SlidingPuzzleState.h"
#include <cstdint>
#include <iostream>
#include "LList.h"

using namespace std;

SlidingPuzzleState::SlidingPuzzleState(const int tiles[12])
{
    bool isSet[12] = {false,false,false,false,false,false,false,false,false,false,false,false};
    bool isDuplicate = false;
    for(int i = 0; i < 12; i++) {
        if(tiles[i] >= 0 && tiles[i] < 12) {    //check to make sure range is correct
            if(!isSet[tiles[i]]) {              //check if there are duplicates
                isSet[tiles[i]] = true;         //set value as used already
                myBoard.tileValue[i] = tiles[i];
            }
            else {
                cerr << "Duplicate value!" << endl;
                isDuplicate = true;
                break;
            }
        }
    }
    if(!isDuplicate) {
        SlidingPuzzleState *puzzleState = new SlidingPuzzleState(tiles);
    }
}


void SlidingPuzzleState::GetMoves(LList<int> &l) {
    
}
bool SlidingPuzzleState::ApplyMove(int move){
    
}

bool SlidingPuzzleState::UndoMove(int move){
    
}

int SlidingPuzzleState::GetTileInSquare(int row, int col){
    if(row >=0 && row < 3 && col >= 0 && col < 4) {
        return myBoard.tileValue[row*4+col];
    }
    return -1;
}

void SlidingPuzzleState::GetEmptySquare(int &row, int &col){
    for(int i = 0; i < 12; i++) {
        if(myBoard.tileValue[i] == 0){
            col = i%4;
            row = (int)i/4;
        }
    }
}

void SlidingPuzzleState::Print(){
    
}

SlidingPuzzleState *SlidingPuzzleState::Clone(){
    
}

bool IsSolution(){
    
}

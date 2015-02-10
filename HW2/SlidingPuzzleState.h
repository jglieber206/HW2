//
//  SlidingPuzzleState.h
//  HW2
//
//  Created by Jace Lieberman on 2/9/15.
//  Copyright (c) 2015 Jace Lieberman. All rights reserved.
//

#ifndef __HW2__SlidingPuzzleState__
#define __HW2__SlidingPuzzleState__
#include <list>
#include <stdio.h>
//#include "LList.h"

class SlidingPuzzleState
{
public:
    SlidingPuzzleState(const int tiles[12]);
    //LList<int> GetMoves();
    bool ApplyMove(int move);
    bool UndoMove(int move);
    int GetTileInSquare(int row, int col);
    void GetEmptySquare(int &row, int &col);
    void Print();
    //SlidingSquarePuzzle *Clone();
    bool IsSolution();
private:
    LList<int> list;
    
};

#endif /* defined(__HW2__SlidingPuzzleState__) */

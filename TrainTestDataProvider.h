/***************************************************************************
                          TrainTestDataProvider.h  -  description
                           -------------------
    Begin-End               : 2014-2018
    Copyright               : by Keyvan Maghsoudian
    E-mail                  : KeyvanQ@Chmail.ir
 ***************************************************************************/


#ifndef TRAINTESTDATAPROVIDER_H
#define TRAINTESTDATAPROVIDER_H

#define TRAIN 0
#define TEST  1
#define APPLY 2

#define TCPDUMP 0
#define KDDCUP  1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


class TrainTestDataProvider
{
    private:
        char TrainFileName[512];
        char TestFileName[512];
        char ApplyFileName[512];
        char TrainSessionFileName[512];
        char TestSessionFileName[512];
        FILE *DBPointer;
        int    State;

    public:
        int    InputDataFormat;
        TrainTestDataProvider();
        ~TrainTestDataProvider();
        void SetWorkSpaceParameters(char *);
        void GetWorkSpaceParameters(char *);
        int    OpenDataBase(int, int&);
        int    ResetDBPointer();
        int    GetNextRecord(char *);
        int    CloseDataBase();

};

#endif

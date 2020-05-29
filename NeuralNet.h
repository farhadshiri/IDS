/***************************************************************************
                          NeuralNet.h  -  description
                             -------------------
    Begin-End               : 2014-2018
    Copyright               : by Keyvan Maghsoudian
    E-mail                  : KeyvanQ@Chmail.ir
 ***************************************************************************/


#ifndef NEURALNET_H
#define NEURALNET_H

#define LINEAR      0
#define RECTANGULAR 1
#define HEXAGONAL   2

#define SOM  0

#define NOTRAINED 0
#define TRAINED    1

#define TRAIN 0
#define TEST  1
#define APPLY 2

#define CNC -1
#define NOT_CLUSTERED 1

#define OFF 0
#define ON  1

#define BU 0 //Bottom-Up
#define TD 1 //Top-Down

#define BINARY     0
#define NORMALIZED 1
#define REAL       2

#define STOP 1
#define CANCEL 2

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#include <qapplication.h>
#include <qprogressbar.h>
#include "frmProgressWindow.h"


class NeuralNet
{
    public:
        NeuralNet();
        ~NeuralNet();
        void  GetWorkSpaceParameters(char *);
        void  SetWorkSpaceParameters(char *);
        void  SetInputVectorLen(int ,int ,int ,int );
        void  GetTestResultFileName(char *);

        int   InitializeNet(bool );
        int   TrainNet();
        int   TestNet();
        void NeuralNetAttackDetection(char *,float *);

        int   FreeNet();
        int   GetInputDataType();
	
    private:
        frmProgressWindow *frmProgressWindowObj;
        char WeightMapFileName[512];
        char TestResultFileName[512];
        bool NetMemoryAllocated,
               *KnownAttack; //Known attacks is determined based on attacks exist in WeightMap file and is saved in TestResult file
        int   NetModel,          //Net Model can = SOM
              InputDataType,  //Input Data Type can be Binary or Continuous
              NetState,         //Net State can be TRAINED and NOTRAINED
              Layer[2],         //Number of neurons in each layer in SOM
              NeighborhoodType, //Used in SOM that can be LINEAR, RECTANGULAR and HEXAGONAL
              MaxEpochs,        //Maximum Epochs in training 
              **BMUFreq,          //Best Match Unit Frequency for SOM	
              *ClusteringMap,  //Clustering Map for SOM
              InputVectorBinaryLen[2], //For determining Layer[0] sensors number in SOM
              InputVectorNonBinaryLen[2], //For determining Layer[0] sensors number in SOM
              ExpectedOutput; //Expected neural net output in SOM

        float LearningRate,     //Learning Rate in SOM
              LRDec;            //Learning Rate Decrement factor in SOM
        int   Radius;           //Radius of neighboring in SOM
        float *Dist,
	*ClusterDistance;            //Distance vector

        float ** Weight[2],   //Weights of last layer connections in SOM
              *InputVector,     //Input Vector in SOM
              *ClusteringMapAD; //Clustering Map Assurance Degree for SOM

        int   InitializeSOM(bool );
	
        int   TrainSOM();

        int   FindClusterSOM(float *);
   	
        int   TestSOM();
	
        int   ApplyNet(float *, float&);
        int   ApplySOM(float *, float&);
	
        int   DetermineNeighbors(int, int *, int);
        int   LoadWeightsAndMap();
        int   LoadWeightsAndMapSOM(FILE *);
	
        int   SaveWeightsAndMap();
        int   SaveWeightsAndMapSOM(FILE *);

        float Norm(float *, int);
        float ActFunc(float);

        int ShowProgressWindow(int, int =0, int =TRAIN);
};

#endif

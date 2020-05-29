/***************************************************************************
                         frmNeuralNetsetting  -  description
                             -------------------
    Begin-End               : 2014-2018
    Copyright               : by Keyvan Maghsoudian
    E-mail                  : KeyvanQ@Chmail.ir
 ***************************************************************************/


#include <qfiledialog.h> 
#include "ManagementControl.h"
#include "NeuralNet.h"

extern ManagementControl ManagementControlObj;
extern NeuralNet NeuralNetObj;


//#################        FUNCTION SET NEURAL NET PARAMETERS       ####################
void frmNeuralNetSetting::SetNeuralNetParameters()
{
    //ParamString Format: "<NetModel> , <InputDataType> , <WeightMapFileName> , <TestResultFileName> , <MaxEpochs> , <Layer[1]> , <LearningRate> , <LRDec> , <Radius> , <NeighborhoodType>"
    
    char ParamString[512];
   
    sprintf (ParamString, "%d,%d,%s,%s,%s,%s,%s,%s,%s,%d", 
	     cmbNeuralNetModel->currentItem(), //NetModel
	     cmbInputDataType->currentItem(), //InputDataType
	     (txtWeightMapFile->text()).latin1(), //WeightMapFileName
	     (txtTestResultFile->text()).latin1(), //TestResultFileName
	     (spnMaxEpochs->text()).latin1(), //MaxEpochs
	     (spnClusterUnit->text()).latin1(), //Layer[1]
	     (txtLearningRateSom->text()).latin1(), //LearningRate
	     (txtLrDec->text()).latin1(), //LRDec
	     (spnRadius->text()).latin1(), //Radius
	     cmbNeighborhoodType->currentItem()); //NeighborhoodType
	  
    NeuralNetObj.SetWorkSpaceParameters(ParamString);
    ManagementControlObj.SetWorkSpaceModified();
}//End of function frmNeuralNetSetting::SetNeuralNetParameters


//#################        FUNCTION BTM OPEN WEIGHT MAP FILE CLICKED       ####################
void frmNeuralNetSetting::btmOpenWeightMapFile_clicked()
{
    QString fn = QFileDialog::getSaveFileName("", "Neural Network Weight Map Files (*.nwm)\n""All Files (*.*)", this, "", "Select Weight Map File");
    if (!fn.isEmpty()) txtWeightMapFile->setText(fn);
}//End of function frmNeuralNetSetting::btmOpenWeightMapFile_clicked


//#################        FUNCTION BTM OPEN TEST RESULT FILE CLICKED       ####################
void frmNeuralNetSetting::btmOpenTestResultFile_clicked()
{
    QString fn = QFileDialog::getSaveFileName("", "Neural Network Test Results Files (*.ntr)\n""All Files (*.*)", this, "", "Select Test Results File");
    if (!fn.isEmpty()) txtTestResultFile->setText(fn);
}//End of slot frmNeuralNetSetting::btmOpenTestResultFile_clicked


//#################        FUNCTION INIT       ####################
void frmNeuralNetSetting::init()
{
    //ParamString Format: "<NetModel> , <InputDataType> , <WeightMapFileName> , <TestResultFileName> , <MaxEpochs> , <Layer[1]> , <LearningRate> , <LRDec> , <Radius> , <NeighborhoodType>"
    
    int i, j;
    char ParamString[512];
    char StrTemp[512];

    NeuralNetObj.GetWorkSpaceParameters(ParamString);
    
    for (i=0; ParamString[i]!=',' && ParamString[i]!='\0'; i++) StrTemp[i]=ParamString[i];
    StrTemp[i]='\0';
    cmbNeuralNetModel->setCurrentItem(atoi(StrTemp));
    cmbNeuralNetModel_activated(atoi(StrTemp));
    
    for (j=0, i++; ParamString[i]!=',' && ParamString[i]!='\0'; i++, j++) StrTemp[j]=ParamString[i];
    StrTemp[j]='\0';
    cmbInputDataType->setCurrentItem(atoi(StrTemp));
    
    for (j=0, i++; ParamString[i]!=',' && ParamString[i]!='\0'; i++, j++) StrTemp[j]=ParamString[i];
    StrTemp[j]='\0';
    txtWeightMapFile->setText(QString(StrTemp));
    
    for (j=0, i++; ParamString[i]!=',' && ParamString[i]!='\0'; i++, j++) StrTemp[j]=ParamString[i];
    StrTemp[j]='\0';
    txtTestResultFile->setText(QString(StrTemp));

    for (j=0, i++; ParamString[i]!=',' && ParamString[i]!='\0'; i++, j++) StrTemp[j]=ParamString[i];
    StrTemp[j]='\0';
    spnMaxEpochs->setValue(atoi(StrTemp));
    
    for (j=0, i++; ParamString[i]!=',' && ParamString[i]!='\0'; i++, j++) StrTemp[j]=ParamString[i];
    StrTemp[j]='\0';
    spnClusterUnit->setValue(atoi(StrTemp));
    
    for (j=0, i++; ParamString[i]!=',' && ParamString[i]!='\0'; i++, j++) StrTemp[j]=ParamString[i];
    StrTemp[j]='\0';
    txtLearningRateSom->setText(QString(StrTemp));
       
    for (j=0, i++; ParamString[i]!=',' && ParamString[i]!='\0'; i++, j++) StrTemp[j]=ParamString[i];
    StrTemp[j]='\0';
    txtLrDec->setText(QString(StrTemp));
    
    for (j=0, i++; ParamString[i]!=',' && ParamString[i]!='\0'; i++, j++) StrTemp[j]=ParamString[i];
    StrTemp[j]='\0';
    spnRadius->setValue(atoi(StrTemp));
    
    for (j=0, i++; ParamString[i]!=',' && ParamString[i]!='\0'; i++, j++) StrTemp[j]=ParamString[i];
    StrTemp[j]='\0';
    cmbNeighborhoodType->setCurrentItem(atoi(StrTemp));
    
 }//End of function frmNeuralNetSetting::init


//#################        FUNCTION CMB NEURAL NET MODEL ACTIVATED       ####################
void frmNeuralNetSetting::cmbNeuralNetModel_activated(int NeuralNetModel)
{
    switch (NeuralNetModel)
    {
        case 0: //SOM
            grpSomParam->show();
            cmbInputDataType->setEnabled(true);
            break;

    }//end of switch

}//End of function frmNeuralNetSetting::cmbNeuralNetModel_activated

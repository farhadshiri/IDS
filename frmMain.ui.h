/***************************************************************************
                         frmMain  -  description
                             -------------------
    Begin-End               : 2014-2018
    Copyright               : by Keyvan Maghsoudian
    E-mail                  : KeyvanQ@Chmail.ir
 ***************************************************************************/


#define VERSION  "Test"
#include <qmessagebox.h> 
#include <qapplication.h>
#include <qfiledialog.h> 
#include <qprogressdialog.h>
#include "ManagementControl.h"
#include "NeuralNet.h"
#include "frmPreProcessorSetting.h"
#include "frmDataProvidersSetting.h"
#include "frmNeuralNetSetting.h"
#include "frmResponderSetting.h"
#include "frmIdsEvaluator.h"
#include "frmCapturePacketsSetting.h"

extern ManagementControl ManagementControlObj;
extern NeuralNet NeuralNetObj;
extern frmIdsEvaluator frmIdsEvaluatorObj;


//#################        FUNCTION FILE NEW       ####################
void frmMain::fileNew()
{
    if ( saveAndContinue( "New" ) ) 
        ManagementControlObj.NewWorkSpace();
}


//#################        FUNCTION FILE OPEN       ####################
void frmMain::fileOpen()
{
    if ( saveAndContinue( "Open" ) ) 
    {
        QString fn( QFileDialog::getOpenFileName(QString::null,"LogCorrelation Configuration Files (*.idc)", this ) );
            if ( !fn.isEmpty() ) 
	{
	    strcpy(fileName,fn.latin1());
                if (!ManagementControlObj.LoadWorkSpace(fileName))
	    {
                    QMessageBox::critical(
                    this, "LogCorrelation",
                    "File not found or can not open this file.\n", "&OK",
                    0,    // Enter == button 0
                    0 ); // Escape == button 0
                }
	}
      }
}//End of slot frmMain::fileOpen


//#################        FUNCTION FILE SAVE       ####################
void frmMain::fileSave()
{
    if ( !fileName[0]) 
        fileSaveAs();
    else
        ManagementControlObj.SaveWorkSpace(fileName);
}//End of slot frmMain::fileSave


//#################        FUNCTION FILE SAVE AS       ####################
void frmMain::fileSaveAs()
{
        QString fn = QFileDialog::getSaveFileName("", "LogCorrelation Configuration Files (*.idc)", this );
    if ( !fn.isEmpty() ) 
    {
        strcpy(fileName,fn.latin1());
        ManagementControlObj.SaveWorkSpace(fileName);
    }
}//End of slot frmMain::fileSaveAs


//#################        FUNCTION SAVE AND CONTINUE       ####################
int frmMain::saveAndContinue(const QString & action)
{
    int ContinueAction = 1;
   
    if (ManagementControlObj.IsWorkSpaceModified())
    {
        switch( QMessageBox::information(
                        this, "LogCorrelation",
                        "The work space may be contains unsaved changes.\n"
                        "Do you want to save the changes?",
                        "&Save", "&Don't Save", "&Cancel " + action,
                        0,    // Enter == button 0
                        2 ) ) // Escape == button 2
        { 
            case 0: // Save; continue LogCorrelation Intrusion Detection
                fileSave();
                break;
            case 1: // Do not save; continue
                break;
            case 2: // Cancel
                ContinueAction = 0;
                break;
        }//end f switch
    }//end of if
    
    return ContinueAction;
}//End of function frmMain::saveAndContinue


//#################        FUNCTION FILE EXIT       ####################
void frmMain::fileExit()
{
    if ( saveAndContinue( "Exit" ) )
    {
        Exitted=true;
        exit(0);
    }
}//End of slot frmMain::fileExit


//#################        FUNCTION HELP INDEX       ####################
void frmMain::helpIndex()
{

}


//#################        FUNCTION HELP CONTENTS       ####################
void frmMain::helpContents()
{

}


//#################        FUNCTION HELP ABOUT       ####################
void frmMain::helpAbout()
{
    QMessageBox::about(this, tr("About LogCorrelation"), tr("LogCorrelation based Intrusion Detector\nVersion " VERSION"\n\n(c) 2014-2018 by Keyvan Maghsoudian") );
}//End of slot frmMain::helpAbout


//#################        FUNCTION RUN START TRAIN       ####################
void frmMain::runStartTrain()
{
    if ( ManagementControlObj.StartTrainIDS() )
        QMessageBox::information (this, "LogCorrelation", "Training of neural net engine of LogCorrelation completed successfully.", QMessageBox::Ok);
    else 
        QMessageBox::critical (this, "LogCorrelation", "Training of neural net engine of LogCorrelation not completed successfully.", QMessageBox::Ok, 0);
}//End of slot frmMain::runStartTrain


//#################        FUNCTION RUN START TEST       ####################
void frmMain::runStartTest()
{
    if ( ManagementControlObj.StartTestIDS() )
        QMessageBox::information (this, "LogCorrelation", "Testing LogCorrelation based Intrusion Detector successfully done.", QMessageBox::Ok);
    else 
        QMessageBox::critical (this, "LogCorrelation", "Testing LogCorrelation based Intrusion Detector failed.", QMessageBox::Ok, 0);
}//End of slot frmMain::runStartTest


//#################        FUNCTION RUN STOP REAL TIME IDS       ####################
void frmMain::runStopRealTimeIds()
{
    if ( ManagementControlObj.StopRealTimeIDS() )
    {
        QMessageBox::information (this, "LogCorrelation", "Real-time Intrusion Detector Stopped Successfully.", QMessageBox::Ok);
     }
    else 
        QMessageBox::critical (this, "LogCorrelation", "Can not correct stop Real-time Intrusion Detector.", QMessageBox::Ok, 0);
    lblMessage->setText("");
    lblMsgWarning->setText("");

}//End of slot frmMain::runStopRealTimeIds


//#################        FUNCTION RUN START REAL TIME IDS       ####################
void frmMain::runStartRealTimeIds()
{
    if ( ManagementControlObj.StartRealTimeIDS() )
    {
        QMessageBox::information (this, "LogCorrelation", "Real-time Intrusion Detector started successfully.", QMessageBox::Ok);
        lblMessage->setText("Real-time Intrusion Detection System is Active !");
        lblMsgWarning->setText("Warning:");
    }
    else 
        QMessageBox::critical (this, "LogCorrelation", "Can not start Real-time Intrusion Detector.", QMessageBox::Ok, 0);
}//End of slot frmMain::runStartRealTimeLogCorrelation Intrusion Detection


//#################        FUNCTION SETTINGS RESPONDER SETTING       ####################
void frmMain::settingsResponderSetting()
{
    frmResponderSetting frmResponderSettingObj;
    frmResponderSettingObj.exec();
}//End of slot frmMain::settingsResponderSetting


//#################        FUNCTION RUN START REAL TIME IDS       ####################
void frmMain::runStartOffLineIds()
{
    int retval=0;
    
    lblMessage->setText("Off-line Intrusion Detection System is Active !\nPlease Wait . . .");
    lblMsgWarning->setText("Warning:");
    
    retval=ManagementControlObj.StartOffLineIDS();
    
    lblMessage->setText("");
    lblMsgWarning->setText("");
    
    switch (retval)
    {
        case -1 :
            QMessageBox::critical (this, "LogCorrelation", "Can not initialize Neural Net based Analyzer and Responder components !", QMessageBox::Ok, 0);
            break;
	
        case 0 :
            QMessageBox::critical (this, "LogCorrelation", "Can not start Off-line LogCorrelation based Intrusion Detector !", QMessageBox::Ok, 0);
            break;
	
        case 1 :
            QMessageBox::information (this, "LogCorrelation", "Off-line LogCorrelation based Intrusion Detection terminated successfully.", QMessageBox::Ok);
    }//end of switch

}//End of function frmMain::runStartOffLineIds


//#################        FUNCTION SETTINGS PRE PROCESSOR SETTING       ####################
void frmMain::settingsPreProcessorSetting()
{
    frmPreProcessorSetting frmPreProcessorSettingObj;
    frmPreProcessorSettingObj.exec();
}//End of slot frmMain::settingsPreProcessorSetting


//#################        FUNCTION SETTINGS NEURAL NET SETTING       ####################
void frmMain::settingsNeuralNetSetting()
{
   frmNeuralNetSetting frmNeuralNetSettingObj;
   frmNeuralNetSettingObj.exec();
}//End of slot frmMain::settingsNeuralNetSetting


//#################        FUNCTION SETTINGS DATA PROVIDERS SETTING       ####################
void frmMain::settingsDataProvidersSetting()
{
    frmDataProvidersSetting frmDataProvidersSettingObj;
    frmDataProvidersSettingObj.exec();
}//End of frmMain::settngsDataProvidersSetting


//#################        FUNCTION RUN EVALUATE IDS       ####################
void frmMain::runEvaluateIds()
{
    frmIdsEvaluator frmIdsEvaluatorObj;
    frmIdsEvaluatorObj.exec();
}//End of slot frmMain::runEvaluateIds


//#################        FUNCTION INIT       ####################
void frmMain::init()
{
    Exitted=false;
}//End of function frmMain::init


//#################        FUNCTION DESTROY       ####################
void frmMain::destroy()
{
   if ( !Exitted)
       saveAndContinue( "Exit" );
}//End of function frmMain::destroy


void frmMain::runCapturePackets()
{
    frmCapturePacketsSetting frmCapturePacketsSettingObj;
    frmCapturePacketsSettingObj.exec();

 //show UI with Filter & DumpFileName
}

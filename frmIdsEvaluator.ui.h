/***************************************************************************
                         frmIdsEvaluator  -  description
                             -------------------
    Begin-End               : 2014-2018
    Copyright               : by Keyvan Maghsoudian
    E-mail                  : KeyvanQ@Chmail.ir
 ***************************************************************************/

#include <qmessagebox.h>
#include "ManagementControl.h"

extern ManagementControl ManagementControlObj;

//#################        FUNCTION INIT       ####################
void frmIdsEvaluator::init()
{
    char EvaluationResultsStr[1024];
    
    txtEvaluationResults->setText("Please Wait...");
    
    if (ManagementControlObj.EvaluateIDS(EvaluationResultsStr))
        txtEvaluationResults->setText(QString(EvaluationResultsStr));
    else 
    {
        QMessageBox::critical (this, "LogCorrelation", "Can not evaluate results of IDS test.\nAre you sure doing evaluation after test !", QMessageBox::Ok, 0);
        txtEvaluationResults->setText("Error in evaluation...");
    }
}//End of function frmIdsEvaluator::init

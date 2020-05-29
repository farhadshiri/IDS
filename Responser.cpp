/***************************************************************************
                          Responser.cpp  -  description
                             -------------------
    Begin-End               : 2014-2018
    Copyright               : by Keyvan Maghsoudian
    E-mail                  : KeyvanQ@Chmail.ir
 ***************************************************************************/


#include "Responser.h"

Responser::Responser()
{
}
Responser::~Responser()
{
}

void Responser::SetWorkSpaceParameters(char *ParamString)
{
    if ( !strncasecmp(ParamString, "null", 4)) return;
    
}//End of function Responser::SetWorkSpaceParameters

void Responser::GetWorkSpaceParameters(char *ParamString)
{
    strcpy(ParamString, "null");
}//End of function Responser::GetWorkSpaceParameters
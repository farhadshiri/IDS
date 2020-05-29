/***************************************************************************
                          Responser.h  -  description
                             -------------------
    Begin-End               : 2014-2018
    Copyright               : by Keyvan Maghsoudian
    E-mail                  : KeyvanQ@Chmail.ir
 ***************************************************************************/


#ifndef RESPONSER_H
#define RESPONSER_H

#include <string.h>


class Responser
{
    public:
        Responser();
        ~Responser();
        void SetWorkSpaceParameters(char *);
        void GetWorkSpaceParameters(char *);
};

#endif

#-------------------------------------------------
#
# Project created by QtCreator 2018-04-24T10:17:08
#
#-------------------------------------------------



CONFIG += c++11
CONFIG += c++14
QMAKE_CXXFLAGS += -std=c++11 -DQT3_SUPPORT

QT       += core gui
#qt3support

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = testProject
TEMPLATE = app

CONFIG	+= qt warn_on release

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_THREAD_SUPPORT,QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

LIBS	+= /usr/lib/libpcap.so

SOURCES	+= ManagementControl.cpp \
        main.cpp \
        NeuralNet.cpp \
        PreProcessor.cpp \
        IdsEvaluator.cpp \
        Responder.cpp \
        TcpDumpPacketProvider.cpp \
        TrainTestDataProvider.cpp
HEADERS	+= ManagementControl.h \
        NeuralNet.h \
        PreProcessor.h \
        IdsEvaluator.h \
        AttackTypes.h \
        Responder.h \
        TcpDumpPacketProvider.h \
        TrainTestDataProvider.h

FORMS	= frmPreProcessorSetting.ui \
        frmNeuralNetSetting.ui \
        frmMain.ui \
        frmDataProvidersSetting.ui \
        frmProgressWindow.ui \
        frmIdsEvaluator.ui \
        frmResponderSetting.ui \
        frmCapturePacketsSetting.ui

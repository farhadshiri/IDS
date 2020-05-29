/****************************************************************************
** frmMain meta object code from reading C++ file 'frmMain.h'
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../.ui/frmMain.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.1.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *frmMain::className() const
{
    return "frmMain";
}

QMetaObject *frmMain::metaObj = 0;
static QMetaObjectCleanUp cleanUp_frmMain( "frmMain", &frmMain::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString frmMain::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "frmMain", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString frmMain::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "frmMain", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* frmMain::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QMainWindow::staticMetaObject();
    static const QUMethod slot_0 = {"fileNew", 0, 0 };
    static const QUMethod slot_1 = {"fileOpen", 0, 0 };
    static const QUMethod slot_2 = {"fileSave", 0, 0 };
    static const QUMethod slot_3 = {"fileSaveAs", 0, 0 };
    static const QUMethod slot_4 = {"fileExit", 0, 0 };
    static const QUMethod slot_5 = {"helpIndex", 0, 0 };
    static const QUMethod slot_6 = {"helpContents", 0, 0 };
    static const QUMethod slot_7 = {"helpAbout", 0, 0 };
    static const QUMethod slot_8 = {"runStartTrain", 0, 0 };
    static const QUMethod slot_9 = {"runStartTest", 0, 0 };
    static const QUMethod slot_10 = {"runStopRealTimeIds", 0, 0 };
    static const QUMethod slot_11 = {"runStartRealTimeIds", 0, 0 };
    static const QUMethod slot_12 = {"settingsResponderSetting", 0, 0 };
    static const QUMethod slot_13 = {"runStartOffLineIds", 0, 0 };
    static const QUMethod slot_14 = {"settingsPreProcessorSetting", 0, 0 };
    static const QUMethod slot_15 = {"settingsNeuralNetSetting", 0, 0 };
    static const QUMethod slot_16 = {"settingsDataProvidersSetting", 0, 0 };
    static const QUMethod slot_17 = {"runEvaluateIds", 0, 0 };
    static const QUMethod slot_18 = {"runCapturePackets", 0, 0 };
    static const QUMethod slot_19 = {"languageChange", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "fileNew()", &slot_0, QMetaData::Public },
	{ "fileOpen()", &slot_1, QMetaData::Public },
	{ "fileSave()", &slot_2, QMetaData::Public },
	{ "fileSaveAs()", &slot_3, QMetaData::Public },
	{ "fileExit()", &slot_4, QMetaData::Public },
	{ "helpIndex()", &slot_5, QMetaData::Public },
	{ "helpContents()", &slot_6, QMetaData::Public },
	{ "helpAbout()", &slot_7, QMetaData::Public },
	{ "runStartTrain()", &slot_8, QMetaData::Public },
	{ "runStartTest()", &slot_9, QMetaData::Public },
	{ "runStopRealTimeIds()", &slot_10, QMetaData::Public },
	{ "runStartRealTimeIds()", &slot_11, QMetaData::Public },
	{ "settingsResponderSetting()", &slot_12, QMetaData::Public },
	{ "runStartOffLineIds()", &slot_13, QMetaData::Public },
	{ "settingsPreProcessorSetting()", &slot_14, QMetaData::Public },
	{ "settingsNeuralNetSetting()", &slot_15, QMetaData::Public },
	{ "settingsDataProvidersSetting()", &slot_16, QMetaData::Public },
	{ "runEvaluateIds()", &slot_17, QMetaData::Public },
	{ "runCapturePackets()", &slot_18, QMetaData::Public },
	{ "languageChange()", &slot_19, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"frmMain", parentObject,
	slot_tbl, 20,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_frmMain.setMetaObject( metaObj );
    return metaObj;
}

void* frmMain::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "frmMain" ) )
	return this;
    return QMainWindow::qt_cast( clname );
}

bool frmMain::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: fileNew(); break;
    case 1: fileOpen(); break;
    case 2: fileSave(); break;
    case 3: fileSaveAs(); break;
    case 4: fileExit(); break;
    case 5: helpIndex(); break;
    case 6: helpContents(); break;
    case 7: helpAbout(); break;
    case 8: runStartTrain(); break;
    case 9: runStartTest(); break;
    case 10: runStopRealTimeIds(); break;
    case 11: runStartRealTimeIds(); break;
    case 12: settingsResponderSetting(); break;
    case 13: runStartOffLineIds(); break;
    case 14: settingsPreProcessorSetting(); break;
    case 15: settingsNeuralNetSetting(); break;
    case 16: settingsDataProvidersSetting(); break;
    case 17: runEvaluateIds(); break;
    case 18: runCapturePackets(); break;
    case 19: languageChange(); break;
    default:
	return QMainWindow::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool frmMain::qt_emit( int _id, QUObject* _o )
{
    return QMainWindow::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool frmMain::qt_property( int id, int f, QVariant* v)
{
    return QMainWindow::qt_property( id, f, v);
}

bool frmMain::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES

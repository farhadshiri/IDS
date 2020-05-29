/****************************************************************************
** frmNeuralNetSetting meta object code from reading C++ file 'frmNeuralNetSetting.h'
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../.ui/frmNeuralNetSetting.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.1.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *frmNeuralNetSetting::className() const
{
    return "frmNeuralNetSetting";
}

QMetaObject *frmNeuralNetSetting::metaObj = 0;
static QMetaObjectCleanUp cleanUp_frmNeuralNetSetting( "frmNeuralNetSetting", &frmNeuralNetSetting::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString frmNeuralNetSetting::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "frmNeuralNetSetting", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString frmNeuralNetSetting::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "frmNeuralNetSetting", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* frmNeuralNetSetting::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QDialog::staticMetaObject();
    static const QUMethod slot_0 = {"SetNeuralNetParameters", 0, 0 };
    static const QUMethod slot_1 = {"btmOpenWeightMapFile_clicked", 0, 0 };
    static const QUMethod slot_2 = {"btmOpenTestResultFile_clicked", 0, 0 };
    static const QUMethod slot_3 = {"init", 0, 0 };
    static const QUParameter param_slot_4[] = {
	{ "NeuralNetModel", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_4 = {"cmbNeuralNetModel_activated", 1, param_slot_4 };
    static const QUMethod slot_5 = {"languageChange", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "SetNeuralNetParameters()", &slot_0, QMetaData::Public },
	{ "btmOpenWeightMapFile_clicked()", &slot_1, QMetaData::Public },
	{ "btmOpenTestResultFile_clicked()", &slot_2, QMetaData::Public },
	{ "init()", &slot_3, QMetaData::Public },
	{ "cmbNeuralNetModel_activated(int)", &slot_4, QMetaData::Public },
	{ "languageChange()", &slot_5, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"frmNeuralNetSetting", parentObject,
	slot_tbl, 6,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_frmNeuralNetSetting.setMetaObject( metaObj );
    return metaObj;
}

void* frmNeuralNetSetting::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "frmNeuralNetSetting" ) )
	return this;
    return QDialog::qt_cast( clname );
}

bool frmNeuralNetSetting::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: SetNeuralNetParameters(); break;
    case 1: btmOpenWeightMapFile_clicked(); break;
    case 2: btmOpenTestResultFile_clicked(); break;
    case 3: init(); break;
    case 4: cmbNeuralNetModel_activated((int)static_QUType_int.get(_o+1)); break;
    case 5: languageChange(); break;
    default:
	return QDialog::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool frmNeuralNetSetting::qt_emit( int _id, QUObject* _o )
{
    return QDialog::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool frmNeuralNetSetting::qt_property( int id, int f, QVariant* v)
{
    return QDialog::qt_property( id, f, v);
}

bool frmNeuralNetSetting::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES

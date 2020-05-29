/****************************************************************************
** frmDataProvidersSetting meta object code from reading C++ file 'frmDataProvidersSetting.h'
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../.ui/frmDataProvidersSetting.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.1.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *frmDataProvidersSetting::className() const
{
    return "frmDataProvidersSetting";
}

QMetaObject *frmDataProvidersSetting::metaObj = 0;
static QMetaObjectCleanUp cleanUp_frmDataProvidersSetting( "frmDataProvidersSetting", &frmDataProvidersSetting::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString frmDataProvidersSetting::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "frmDataProvidersSetting", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString frmDataProvidersSetting::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "frmDataProvidersSetting", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* frmDataProvidersSetting::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QDialog::staticMetaObject();
    static const QUMethod slot_0 = {"SetDataProvidersParameters", 0, 0 };
    static const QUMethod slot_1 = {"btmOpenTrainFile_clicked", 0, 0 };
    static const QUMethod slot_2 = {"btmOpenTestFile_clicked", 0, 0 };
    static const QUMethod slot_3 = {"btmOpenApplyFile_clicked", 0, 0 };
    static const QUMethod slot_4 = {"btmOpenTrainSessionFile_clicked", 0, 0 };
    static const QUMethod slot_5 = {"btmOpenTestSessionFile_clicked", 0, 0 };
    static const QUParameter param_slot_6[] = {
	{ "InputDataFormat", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_6 = {"cmbInputDataFormat_activated", 1, param_slot_6 };
    static const QUMethod slot_7 = {"languageChange", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "SetDataProvidersParameters()", &slot_0, QMetaData::Public },
	{ "btmOpenTrainFile_clicked()", &slot_1, QMetaData::Public },
	{ "btmOpenTestFile_clicked()", &slot_2, QMetaData::Public },
	{ "btmOpenApplyFile_clicked()", &slot_3, QMetaData::Public },
	{ "btmOpenTrainSessionFile_clicked()", &slot_4, QMetaData::Public },
	{ "btmOpenTestSessionFile_clicked()", &slot_5, QMetaData::Public },
	{ "cmbInputDataFormat_activated(int)", &slot_6, QMetaData::Public },
	{ "languageChange()", &slot_7, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"frmDataProvidersSetting", parentObject,
	slot_tbl, 8,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_frmDataProvidersSetting.setMetaObject( metaObj );
    return metaObj;
}

void* frmDataProvidersSetting::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "frmDataProvidersSetting" ) )
	return this;
    return QDialog::qt_cast( clname );
}

bool frmDataProvidersSetting::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: SetDataProvidersParameters(); break;
    case 1: btmOpenTrainFile_clicked(); break;
    case 2: btmOpenTestFile_clicked(); break;
    case 3: btmOpenApplyFile_clicked(); break;
    case 4: btmOpenTrainSessionFile_clicked(); break;
    case 5: btmOpenTestSessionFile_clicked(); break;
    case 6: cmbInputDataFormat_activated((int)static_QUType_int.get(_o+1)); break;
    case 7: languageChange(); break;
    default:
	return QDialog::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool frmDataProvidersSetting::qt_emit( int _id, QUObject* _o )
{
    return QDialog::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool frmDataProvidersSetting::qt_property( int id, int f, QVariant* v)
{
    return QDialog::qt_property( id, f, v);
}

bool frmDataProvidersSetting::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES

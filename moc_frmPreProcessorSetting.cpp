/****************************************************************************
** frmPreProcessorSetting meta object code from reading C++ file 'frmPreProcessorSetting.h'
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../.ui/frmPreProcessorSetting.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.1.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *frmPreProcessorSetting::className() const
{
    return "frmPreProcessorSetting";
}

QMetaObject *frmPreProcessorSetting::metaObj = 0;
static QMetaObjectCleanUp cleanUp_frmPreProcessorSetting( "frmPreProcessorSetting", &frmPreProcessorSetting::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString frmPreProcessorSetting::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "frmPreProcessorSetting", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString frmPreProcessorSetting::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "frmPreProcessorSetting", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* frmPreProcessorSetting::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QDialog::staticMetaObject();
    static const QUMethod slot_0 = {"SetPreProcessorParameters", 0, 0 };
    static const QUMethod slot_1 = {"init", 0, 0 };
    static const QUParameter param_slot_2[] = {
	{ "FeaturesOrPacketType", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_2 = {"ActivateFeaturesOrPacketTypeTab", 1, param_slot_2 };
    static const QUMethod slot_3 = {"languageChange", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "SetPreProcessorParameters()", &slot_0, QMetaData::Public },
	{ "init()", &slot_1, QMetaData::Public },
	{ "ActivateFeaturesOrPacketTypeTab(int)", &slot_2, QMetaData::Public },
	{ "languageChange()", &slot_3, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"frmPreProcessorSetting", parentObject,
	slot_tbl, 4,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_frmPreProcessorSetting.setMetaObject( metaObj );
    return metaObj;
}

void* frmPreProcessorSetting::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "frmPreProcessorSetting" ) )
	return this;
    return QDialog::qt_cast( clname );
}

bool frmPreProcessorSetting::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: SetPreProcessorParameters(); break;
    case 1: init(); break;
    case 2: ActivateFeaturesOrPacketTypeTab((int)static_QUType_int.get(_o+1)); break;
    case 3: languageChange(); break;
    default:
	return QDialog::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool frmPreProcessorSetting::qt_emit( int _id, QUObject* _o )
{
    return QDialog::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool frmPreProcessorSetting::qt_property( int id, int f, QVariant* v)
{
    return QDialog::qt_property( id, f, v);
}

bool frmPreProcessorSetting::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES

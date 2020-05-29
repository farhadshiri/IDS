/****************************************************************************
** frmCapturePacketsSetting meta object code from reading C++ file 'frmCapturePacketsSetting.h'
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../.ui/frmCapturePacketsSetting.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.1.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *frmCapturePacketsSetting::className() const
{
    return "frmCapturePacketsSetting";
}

QMetaObject *frmCapturePacketsSetting::metaObj = 0;
static QMetaObjectCleanUp cleanUp_frmCapturePacketsSetting( "frmCapturePacketsSetting", &frmCapturePacketsSetting::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString frmCapturePacketsSetting::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "frmCapturePacketsSetting", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString frmCapturePacketsSetting::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "frmCapturePacketsSetting", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* frmCapturePacketsSetting::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QDialog::staticMetaObject();
    static const QUMethod slot_0 = {"btmSaveDumpFile_clicked", 0, 0 };
    static const QUMethod slot_1 = {"btmCapture_clicked", 0, 0 };
    static const QUMethod slot_2 = {"languageChange", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "btmSaveDumpFile_clicked()", &slot_0, QMetaData::Public },
	{ "btmCapture_clicked()", &slot_1, QMetaData::Public },
	{ "languageChange()", &slot_2, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"frmCapturePacketsSetting", parentObject,
	slot_tbl, 3,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_frmCapturePacketsSetting.setMetaObject( metaObj );
    return metaObj;
}

void* frmCapturePacketsSetting::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "frmCapturePacketsSetting" ) )
	return this;
    return QDialog::qt_cast( clname );
}

bool frmCapturePacketsSetting::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: btmSaveDumpFile_clicked(); break;
    case 1: btmCapture_clicked(); break;
    case 2: languageChange(); break;
    default:
	return QDialog::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool frmCapturePacketsSetting::qt_emit( int _id, QUObject* _o )
{
    return QDialog::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool frmCapturePacketsSetting::qt_property( int id, int f, QVariant* v)
{
    return QDialog::qt_property( id, f, v);
}

bool frmCapturePacketsSetting::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES

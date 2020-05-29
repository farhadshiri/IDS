/****************************************************************************
** frmProgressWindow meta object code from reading C++ file 'frmProgressWindow.h'
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../.ui/frmProgressWindow.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.1.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *frmProgressWindow::className() const
{
    return "frmProgressWindow";
}

QMetaObject *frmProgressWindow::metaObj = 0;
static QMetaObjectCleanUp cleanUp_frmProgressWindow( "frmProgressWindow", &frmProgressWindow::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString frmProgressWindow::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "frmProgressWindow", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString frmProgressWindow::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "frmProgressWindow", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* frmProgressWindow::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QDialog::staticMetaObject();
    static const QUMethod slot_0 = {"btmStop_clicked", 0, 0 };
    static const QUMethod slot_1 = {"btmCancel_clicked", 0, 0 };
    static const QUParameter param_slot_2[] = {
	{ "Action", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_2 = {"setCaptions", 1, param_slot_2 };
    static const QUMethod slot_3 = {"languageChange", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "btmStop_clicked()", &slot_0, QMetaData::Public },
	{ "btmCancel_clicked()", &slot_1, QMetaData::Public },
	{ "setCaptions(int)", &slot_2, QMetaData::Public },
	{ "languageChange()", &slot_3, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"frmProgressWindow", parentObject,
	slot_tbl, 4,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_frmProgressWindow.setMetaObject( metaObj );
    return metaObj;
}

void* frmProgressWindow::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "frmProgressWindow" ) )
	return this;
    return QDialog::qt_cast( clname );
}

bool frmProgressWindow::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: btmStop_clicked(); break;
    case 1: btmCancel_clicked(); break;
    case 2: setCaptions((int)static_QUType_int.get(_o+1)); break;
    case 3: languageChange(); break;
    default:
	return QDialog::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool frmProgressWindow::qt_emit( int _id, QUObject* _o )
{
    return QDialog::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool frmProgressWindow::qt_property( int id, int f, QVariant* v)
{
    return QDialog::qt_property( id, f, v);
}

bool frmProgressWindow::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES

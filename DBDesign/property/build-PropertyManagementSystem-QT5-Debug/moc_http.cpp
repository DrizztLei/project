/****************************************************************************
** Meta object code from reading C++ file 'http.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../property/http.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'http.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_HTTP_t {
    QByteArrayData data[17];
    char stringdata0[226];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HTTP_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HTTP_t qt_meta_stringdata_HTTP = {
    {
QT_MOC_LITERAL(0, 0, 4), // "HTTP"
QT_MOC_LITERAL(1, 5, 8), // "download"
QT_MOC_LITERAL(2, 14, 0), // ""
QT_MOC_LITERAL(3, 15, 14), // "cancelDownload"
QT_MOC_LITERAL(4, 30, 12), // "httpFinished"
QT_MOC_LITERAL(5, 43, 13), // "httpReadyRead"
QT_MOC_LITERAL(6, 57, 20), // "enableDownloadButton"
QT_MOC_LITERAL(7, 78, 26), // "slotAuthenticationRequired"
QT_MOC_LITERAL(8, 105, 14), // "QNetworkReply*"
QT_MOC_LITERAL(9, 120, 15), // "QAuthenticator*"
QT_MOC_LITERAL(10, 136, 24), // "slotNetworkReplyProgress"
QT_MOC_LITERAL(11, 161, 9), // "receivers"
QT_MOC_LITERAL(12, 171, 5), // "total"
QT_MOC_LITERAL(13, 177, 14), // "slotDownFinish"
QT_MOC_LITERAL(14, 192, 9), // "sslErrors"
QT_MOC_LITERAL(15, 202, 16), // "QList<QSslError>"
QT_MOC_LITERAL(16, 219, 6) // "errors"

    },
    "HTTP\0download\0\0cancelDownload\0"
    "httpFinished\0httpReadyRead\0"
    "enableDownloadButton\0slotAuthenticationRequired\0"
    "QNetworkReply*\0QAuthenticator*\0"
    "slotNetworkReplyProgress\0receivers\0"
    "total\0slotDownFinish\0sslErrors\0"
    "QList<QSslError>\0errors"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HTTP[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x0a /* Public */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    2,   64,    2, 0x08 /* Private */,
      10,    2,   69,    2, 0x08 /* Private */,
      13,    0,   74,    2, 0x08 /* Private */,
      14,    2,   75,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 9,    2,    2,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,   11,   12,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 15,    2,   16,

       0        // eod
};

void HTTP::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HTTP *_t = static_cast<HTTP *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->download(); break;
        case 1: _t->cancelDownload(); break;
        case 2: _t->httpFinished(); break;
        case 3: _t->httpReadyRead(); break;
        case 4: _t->enableDownloadButton(); break;
        case 5: _t->slotAuthenticationRequired((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< QAuthenticator*(*)>(_a[2]))); break;
        case 6: _t->slotNetworkReplyProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 7: _t->slotDownFinish(); break;
        case 8: _t->sslErrors((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< const QList<QSslError>(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QSslError> >(); break;
            }
            break;
        }
    }
}

const QMetaObject HTTP::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_HTTP.data,
      qt_meta_data_HTTP,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *HTTP::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HTTP::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_HTTP.stringdata0))
        return static_cast<void*>(const_cast< HTTP*>(this));
    return QObject::qt_metacast(_clname);
}

int HTTP::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

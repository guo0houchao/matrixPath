/****************************************************************************
** Meta object code from reading C++ file 'widget3.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widget3.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widget3.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Widget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x0a,
      21,    7,    7,    7, 0x0a,
      42,    7,    7,    7, 0x0a,
      54,    7,    7,    7, 0x0a,
      73,    7,    7,    7, 0x0a,
      90,    7,    7,    7, 0x0a,
     106,    7,    7,    7, 0x0a,
     121,    7,    7,    7, 0x0a,
     138,    7,    7,    7, 0x0a,
     156,    7,    7,    7, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Widget[] = {
    "Widget\0\0slot_clear()\0slot_WalkAlgorithm()\0"
    "slot_stop()\0slot_getData(int*)\0"
    "slot_getInt(int)\0slot_showTime()\0"
    "slot_fileOut()\0slot_shapeMark()\0"
    "slot_matrixArea()\0slot_changeNode()\0"
};

void Widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Widget *_t = static_cast<Widget *>(_o);
        switch (_id) {
        case 0: _t->slot_clear(); break;
        case 1: _t->slot_WalkAlgorithm(); break;
        case 2: _t->slot_stop(); break;
        case 3: _t->slot_getData((*reinterpret_cast< int*(*)>(_a[1]))); break;
        case 4: _t->slot_getInt((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->slot_showTime(); break;
        case 6: _t->slot_fileOut(); break;
        case 7: _t->slot_shapeMark(); break;
        case 8: _t->slot_matrixArea(); break;
        case 9: _t->slot_changeNode(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Widget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Widget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Widget,
      qt_meta_data_Widget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Widget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Widget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Widget))
        return static_cast<void*>(const_cast< Widget*>(this));
    return QWidget::qt_metacast(_clname);
}

int Widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

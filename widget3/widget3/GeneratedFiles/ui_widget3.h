/********************************************************************************
** Form generated from reading UI file 'widget3.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET3_H
#define UI_WIDGET3_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTableWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "Matrix1.h"

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QHBoxLayout *horizontalLayout_20;
    Matrix *widget;
    QHBoxLayout *horizontalLayout_19;
    QVBoxLayout *verticalLayout_6;
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *matrixcolumn;
    QLabel *label_3;
    QLineEdit *matrixrow;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_13;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_5;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_6;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_16;
    QPushButton *area_button;
    QLineEdit *area_text;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_2;
    QLineEdit *start_point;
    QHBoxLayout *horizontalLayout_12;
    QPushButton *start_button;
    QPushButton *stop_button;
    QPushButton *save_button;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_4;
    QLineEdit *text_time;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->setEnabled(true);
        Widget->resize(781, 318);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(10);
        sizePolicy.setVerticalStretch(10);
        sizePolicy.setHeightForWidth(Widget->sizePolicy().hasHeightForWidth());
        Widget->setSizePolicy(sizePolicy);
        Widget->setMaximumSize(QSize(10000, 10000));
        horizontalLayout_20 = new QHBoxLayout(Widget);
        horizontalLayout_20->setSpacing(6);
        horizontalLayout_20->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        widget = new Matrix(Widget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy1);
        widget->setMinimumSize(QSize(300, 300));
        widget->setMaximumSize(QSize(10000, 10000));

        horizontalLayout_20->addWidget(widget);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setSpacing(6);
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        textEdit = new QTextEdit(Widget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        sizePolicy1.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy1);
        textEdit->setMinimumSize(QSize(50, 50));

        verticalLayout_6->addWidget(textEdit);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(50);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);

        horizontalLayout_2->addWidget(label);

        matrixcolumn = new QLineEdit(Widget);
        matrixcolumn->setObjectName(QString::fromUtf8("matrixcolumn"));
        sizePolicy2.setHeightForWidth(matrixcolumn->sizePolicy().hasHeightForWidth());
        matrixcolumn->setSizePolicy(sizePolicy2);
        matrixcolumn->setMaxLength(2);

        horizontalLayout_2->addWidget(matrixcolumn);

        label_3 = new QLabel(Widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy2.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy2);

        horizontalLayout_2->addWidget(label_3);

        matrixrow = new QLineEdit(Widget);
        matrixrow->setObjectName(QString::fromUtf8("matrixrow"));
        sizePolicy2.setHeightForWidth(matrixrow->sizePolicy().hasHeightForWidth());
        matrixrow->setSizePolicy(sizePolicy2);
        matrixrow->setMaxLength(2);

        horizontalLayout_2->addWidget(matrixrow);


        verticalLayout_6->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy3.setHorizontalStretch(50);
        sizePolicy3.setVerticalStretch(10);
        sizePolicy3.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy3);

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(Widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy4);
        pushButton_2->setMinimumSize(QSize(50, 0));

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout_6->addLayout(horizontalLayout);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        comboBox = new QComboBox(Widget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        sizePolicy2.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy2);

        horizontalLayout_13->addWidget(comboBox);

        comboBox_2 = new QComboBox(Widget);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        sizePolicy2.setHeightForWidth(comboBox_2->sizePolicy().hasHeightForWidth());
        comboBox_2->setSizePolicy(sizePolicy2);

        horizontalLayout_13->addWidget(comboBox_2);


        verticalLayout_4->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        label_5 = new QLabel(Widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Maximum);
        sizePolicy5.setHorizontalStretch(50);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy5);

        horizontalLayout_14->addWidget(label_5);

        lineEdit = new QLineEdit(Widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        QSizePolicy sizePolicy6(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(50);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy6);
        lineEdit->setMaxLength(2);

        horizontalLayout_14->addWidget(lineEdit);


        verticalLayout_4->addLayout(horizontalLayout_14);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        label_6 = new QLabel(Widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy2.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy2);

        horizontalLayout_15->addWidget(label_6);

        lineEdit_2 = new QLineEdit(Widget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        sizePolicy6.setHeightForWidth(lineEdit_2->sizePolicy().hasHeightForWidth());
        lineEdit_2->setSizePolicy(sizePolicy6);
        lineEdit_2->setMaxLength(2);

        horizontalLayout_15->addWidget(lineEdit_2);


        verticalLayout_4->addLayout(horizontalLayout_15);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        area_button = new QPushButton(Widget);
        area_button->setObjectName(QString::fromUtf8("area_button"));
        sizePolicy2.setHeightForWidth(area_button->sizePolicy().hasHeightForWidth());
        area_button->setSizePolicy(sizePolicy2);

        horizontalLayout_16->addWidget(area_button);

        area_text = new QLineEdit(Widget);
        area_text->setObjectName(QString::fromUtf8("area_text"));
        sizePolicy2.setHeightForWidth(area_text->sizePolicy().hasHeightForWidth());
        area_text->setSizePolicy(sizePolicy2);

        horizontalLayout_16->addWidget(area_text);


        verticalLayout_4->addLayout(horizontalLayout_16);


        verticalLayout_6->addLayout(verticalLayout_4);


        horizontalLayout_19->addLayout(verticalLayout_6);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);

        horizontalLayout_11->addWidget(label_2);

        start_point = new QLineEdit(Widget);
        start_point->setObjectName(QString::fromUtf8("start_point"));
        sizePolicy2.setHeightForWidth(start_point->sizePolicy().hasHeightForWidth());
        start_point->setSizePolicy(sizePolicy2);
        start_point->setMaxLength(3);

        horizontalLayout_11->addWidget(start_point);


        verticalLayout_5->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        start_button = new QPushButton(Widget);
        start_button->setObjectName(QString::fromUtf8("start_button"));
        sizePolicy2.setHeightForWidth(start_button->sizePolicy().hasHeightForWidth());
        start_button->setSizePolicy(sizePolicy2);

        horizontalLayout_12->addWidget(start_button);

        stop_button = new QPushButton(Widget);
        stop_button->setObjectName(QString::fromUtf8("stop_button"));
        sizePolicy2.setHeightForWidth(stop_button->sizePolicy().hasHeightForWidth());
        stop_button->setSizePolicy(sizePolicy2);

        horizontalLayout_12->addWidget(stop_button);

        save_button = new QPushButton(Widget);
        save_button->setObjectName(QString::fromUtf8("save_button"));
        sizePolicy2.setHeightForWidth(save_button->sizePolicy().hasHeightForWidth());
        save_button->setSizePolicy(sizePolicy2);

        horizontalLayout_12->addWidget(save_button);


        verticalLayout_5->addLayout(horizontalLayout_12);

        tableWidget = new QTableWidget(Widget);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        QSizePolicy sizePolicy7(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy7.setHorizontalStretch(50);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy7);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout_5->addWidget(tableWidget);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setSpacing(6);
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        label_4 = new QLabel(Widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy2.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy2);

        horizontalLayout_17->addWidget(label_4);

        text_time = new QLineEdit(Widget);
        text_time->setObjectName(QString::fromUtf8("text_time"));
        sizePolicy2.setHeightForWidth(text_time->sizePolicy().hasHeightForWidth());
        text_time->setSizePolicy(sizePolicy2);
        text_time->setMouseTracking(false);
        text_time->setReadOnly(true);

        horizontalLayout_17->addWidget(text_time);


        verticalLayout_5->addLayout(horizontalLayout_17);


        horizontalLayout_19->addLayout(verticalLayout_5);


        horizontalLayout_20->addLayout(horizontalLayout_19);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0, QApplication::UnicodeUTF8));
        textEdit->setHtml(QApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">                      </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">                      </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\350\257\264\346\230\216\357\274\232\350\256\276\347\275\256\347\237\251\351\230\265\345\244\247\345\260\217\357\274\214\347\202\271\345\207\273\346\224\276\347\275\256\357\274\214\346\224\276\347\275\256\345\256\214\346\210\220\345\220\216\345\217\257\350\256\276\347"
                        "\275\256\347\237\251\351\230\265\345\206\205\346\214\207\345\256\232\345\233\276\345\275\242\351\242\234\350\211\262\357\274\214\347\202\271\345\207\273\346\224\271\345\217\230                      </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">                    </p></body></html>", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Widget", "\347\237\251\351\230\265\345\244\247\345\260\217\357\274\232", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Widget", "\303\227", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Widget", "\346\224\276\347\275\256", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("Widget", "\346\224\271\345\217\230", 0, QApplication::UnicodeUTF8));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("Widget", "\351\242\234\350\211\262", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "\347\272\242\350\211\262", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "\351\273\204\350\211\262", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "\350\223\235\350\211\262", 0, QApplication::UnicodeUTF8)
        );
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("Widget", "\345\275\242\347\212\266", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "\345\234\206\345\275\242", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "\344\270\211\350\247\222\345\275\242", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget", "\346\255\243\346\226\271\345\275\242", 0, QApplication::UnicodeUTF8)
        );
        label_5->setText(QApplication::translate("Widget", "\350\241\214\357\274\232", 0, QApplication::UnicodeUTF8));
        lineEdit->setInputMask(QString());
        label_6->setText(QApplication::translate("Widget", "\345\210\227\357\274\232", 0, QApplication::UnicodeUTF8));
        lineEdit_2->setInputMask(QString());
        area_button->setText(QApplication::translate("Widget", "\351\235\242\347\247\257", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Widget", "\350\256\241\347\256\227\350\265\267\347\202\271\357\274\232", 0, QApplication::UnicodeUTF8));
        start_button->setText(QApplication::translate("Widget", "\345\274\200\345\247\213", 0, QApplication::UnicodeUTF8));
        stop_button->setText(QApplication::translate("Widget", "\345\201\234\346\255\242", 0, QApplication::UnicodeUTF8));
        save_button->setText(QApplication::translate("Widget", "\344\277\235\345\255\230", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Widget", "\350\256\241\347\256\227\350\200\227\346\227\266\357\274\232", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET3_H

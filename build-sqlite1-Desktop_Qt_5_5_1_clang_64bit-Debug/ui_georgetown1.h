/********************************************************************************
** Form generated from reading UI file 'georgetown1.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GEORGETOWN1_H
#define UI_GEORGETOWN1_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_georgetown1
{
public:
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *displayName;
    QPushButton *pushButtonUpdate;
    QPushButton *pushButtonagregar;
    QPushButton *pushButtonDelete;
    QWidget *widget;
    QVBoxLayout *verticalLayout_8;
    QTableWidget *tableDatos;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_3;
    QLineEdit *lineEditnombre;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_5;
    QLineEdit *lineEditwin;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_6;
    QLineEdit *lineEdittied;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_7;
    QLineEdit *lineEditLoss;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_8;
    QLineEdit *lineEditDiff;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QLineEdit *lineEditpts;

    void setupUi(QDialog *georgetown1)
    {
        if (georgetown1->objectName().isEmpty())
            georgetown1->setObjectName(QStringLiteral("georgetown1"));
        georgetown1->resize(883, 582);
        layoutWidget_2 = new QWidget(georgetown1);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(0, 540, 490, 32));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        displayName = new QPushButton(layoutWidget_2);
        displayName->setObjectName(QStringLiteral("displayName"));

        horizontalLayout_4->addWidget(displayName);

        pushButtonUpdate = new QPushButton(layoutWidget_2);
        pushButtonUpdate->setObjectName(QStringLiteral("pushButtonUpdate"));

        horizontalLayout_4->addWidget(pushButtonUpdate);

        pushButtonagregar = new QPushButton(layoutWidget_2);
        pushButtonagregar->setObjectName(QStringLiteral("pushButtonagregar"));

        horizontalLayout_4->addWidget(pushButtonagregar);

        pushButtonDelete = new QPushButton(layoutWidget_2);
        pushButtonDelete->setObjectName(QStringLiteral("pushButtonDelete"));

        horizontalLayout_4->addWidget(pushButtonDelete);

        widget = new QWidget(georgetown1);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 10, 861, 491));
        verticalLayout_8 = new QVBoxLayout(widget);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        tableDatos = new QTableWidget(widget);
        if (tableDatos->columnCount() < 7)
            tableDatos->setColumnCount(7);
        QFont font;
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font);
        tableDatos->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableDatos->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableDatos->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableDatos->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableDatos->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableDatos->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableDatos->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        tableDatos->setObjectName(QStringLiteral("tableDatos"));

        verticalLayout_8->addWidget(tableDatos);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_4->addWidget(label_3);

        lineEditnombre = new QLineEdit(widget);
        lineEditnombre->setObjectName(QStringLiteral("lineEditnombre"));

        verticalLayout_4->addWidget(lineEditnombre);


        horizontalLayout->addLayout(verticalLayout_4);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        verticalLayout->addWidget(lineEdit);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_3->addWidget(label_5);

        lineEditwin = new QLineEdit(widget);
        lineEditwin->setObjectName(QStringLiteral("lineEditwin"));

        verticalLayout_3->addWidget(lineEditwin);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_6 = new QLabel(widget);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_5->addWidget(label_6);

        lineEdittied = new QLineEdit(widget);
        lineEdittied->setObjectName(QStringLiteral("lineEdittied"));

        verticalLayout_5->addWidget(lineEdittied);


        horizontalLayout->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        label_7 = new QLabel(widget);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout_6->addWidget(label_7);

        lineEditLoss = new QLineEdit(widget);
        lineEditLoss->setObjectName(QStringLiteral("lineEditLoss"));

        verticalLayout_6->addWidget(lineEditLoss);


        horizontalLayout->addLayout(verticalLayout_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        label_8 = new QLabel(widget);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout_7->addWidget(label_8);

        lineEditDiff = new QLineEdit(widget);
        lineEditDiff->setObjectName(QStringLiteral("lineEditDiff"));

        verticalLayout_7->addWidget(lineEditDiff);


        horizontalLayout->addLayout(verticalLayout_7);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_2->addWidget(label_4);

        lineEditpts = new QLineEdit(widget);
        lineEditpts->setObjectName(QStringLiteral("lineEditpts"));

        verticalLayout_2->addWidget(lineEditpts);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_8->addLayout(horizontalLayout);


        retranslateUi(georgetown1);

        QMetaObject::connectSlotsByName(georgetown1);
    } // setupUi

    void retranslateUi(QDialog *georgetown1)
    {
        georgetown1->setWindowTitle(QApplication::translate("georgetown1", "Dialog", 0));
        displayName->setText(QApplication::translate("georgetown1", "Display Table", 0));
        pushButtonUpdate->setText(QApplication::translate("georgetown1", "Update Records", 0));
        pushButtonagregar->setText(QApplication::translate("georgetown1", "Add Team", 0));
        pushButtonDelete->setText(QApplication::translate("georgetown1", "Delete Team", 0));
        QTableWidgetItem *___qtablewidgetitem = tableDatos->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("georgetown1", "Team", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableDatos->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("georgetown1", "Games", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableDatos->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("georgetown1", "Win", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableDatos->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("georgetown1", "Loss", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableDatos->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("georgetown1", "Tied", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableDatos->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("georgetown1", "Dif", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tableDatos->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("georgetown1", "Pts", 0));
        label_3->setText(QApplication::translate("georgetown1", "Team", 0));
        label->setText(QApplication::translate("georgetown1", "Games", 0));
        label_5->setText(QApplication::translate("georgetown1", "Win", 0));
        label_6->setText(QApplication::translate("georgetown1", "Tied", 0));
        label_7->setText(QApplication::translate("georgetown1", "Loss", 0));
        label_8->setText(QApplication::translate("georgetown1", "Dif", 0));
        label_4->setText(QApplication::translate("georgetown1", "Pts", 0));
    } // retranslateUi

};

namespace Ui {
    class georgetown1: public Ui_georgetown1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GEORGETOWN1_H

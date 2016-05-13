/********************************************************************************
** Form generated from reading UI file 'leagueselection.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEAGUESELECTION_H
#define UI_LEAGUESELECTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LeagueSelection
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButtonG1;
    QPushButton *pushButtonG2;

    void setupUi(QDialog *LeagueSelection)
    {
        if (LeagueSelection->objectName().isEmpty())
            LeagueSelection->setObjectName(QStringLiteral("LeagueSelection"));
        LeagueSelection->resize(543, 432);
        layoutWidget = new QWidget(LeagueSelection);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(190, 50, 131, 291));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButtonG1 = new QPushButton(layoutWidget);
        pushButtonG1->setObjectName(QStringLiteral("pushButtonG1"));

        verticalLayout->addWidget(pushButtonG1);

        pushButtonG2 = new QPushButton(layoutWidget);
        pushButtonG2->setObjectName(QStringLiteral("pushButtonG2"));

        verticalLayout->addWidget(pushButtonG2);


        retranslateUi(LeagueSelection);

        QMetaObject::connectSlotsByName(LeagueSelection);
    } // setupUi

    void retranslateUi(QDialog *LeagueSelection)
    {
        LeagueSelection->setWindowTitle(QApplication::translate("LeagueSelection", "Dialog", 0));
        pushButtonG1->setText(QApplication::translate("LeagueSelection", "Georgetown 1", 0));
        pushButtonG2->setText(QApplication::translate("LeagueSelection", "Georgetown 2", 0));
    } // retranslateUi

};

namespace Ui {
    class LeagueSelection: public Ui_LeagueSelection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEAGUESELECTION_H

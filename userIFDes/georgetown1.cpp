#include "georgetown1.h"
#include "ui_georgetown1.h"
#include "leagueSelection.h"

#include <QDebug>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>

georgetown1::georgetown1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::georgetown1)
{
    ui->setupUi(this);
}


georgetown1::georgetown1(QString dataBase1, QString tableName1, QWidget *parent) :
    QDialog(parent), ui(new Ui::georgetown1), dataBase(dataBase1), tableName(tableName1)
{
    ui->setupUi(this);
    dataHandler = new functionality();
    dataHandler->connectToDataBase(dataBase);
    dataHandler->createTableTeam(tableName);

}

georgetown1::~georgetown1()
{
    delete ui;
}

void georgetown1::on_pushButtonagregar_clicked()
{
    dataHandler->insertTeam<Ui::georgetown1>(*ui,tableName);
    dataHandler->showTable<Ui::georgetown1>(*ui,tableName);
}

void georgetown1::on_pushButtonUpdate_clicked()
{
    dataHandler->updateTeam<Ui::georgetown1>(*ui,tableName);
    dataHandler->showTable<Ui::georgetown1>(*ui,tableName);
}

void georgetown1::on_pushButtonDelete_clicked()
{
    dataHandler->deleteTeam<Ui::georgetown1>(*ui,tableName);
    dataHandler->showTable<Ui::georgetown1>(*ui,tableName);
}

void georgetown1::on_displayName_clicked()
{
    dataHandler->showTable<Ui::georgetown1>(*ui,tableName);
}

void georgetown1::on_pushButtonReturn_clicked()
{
    hide();
    goBack = new leagueSelection(this);
    goBack->setModal(true);
    goBack->exec();
}

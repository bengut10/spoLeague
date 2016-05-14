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
    qDebug()<< "Application initiated...";
    QString nombre;
    nombre.append("baseDeDatos.sqlite");
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(nombre);
    if (db.open())
    {
        qDebug()<< "You are now connected to the Data Base...";
    }
    else
    {
        qDebug()<< "ERROR: You are NOT connected to the Data Base...";
    }

    //dataHandler->createTableTeam();
}

georgetown1::~georgetown1()
{
    delete ui;
}

void georgetown1::on_pushButtonagregar_clicked()
{
    dataHandler->insertTeam<Ui::georgetown1>(*ui);
    dataHandler->showTable<Ui::georgetown1>(*ui);
}

void georgetown1::on_pushButtonUpdate_clicked()
{
    dataHandler->updateTeam<Ui::georgetown1>(*ui);
    dataHandler->showTable<Ui::georgetown1>(*ui);
}

void georgetown1::on_pushButtonDelete_clicked()
{
    dataHandler->deleteTeam<Ui::georgetown1>(*ui);
    dataHandler->showTable<Ui::georgetown1>(*ui);
}

void georgetown1::on_displayName_clicked()
{
    dataHandler->showTable<Ui::georgetown1>(*ui);
}

void georgetown1::on_pushButtonReturn_clicked()
{
    hide();
    goBack = new leagueSelection(this);
    goBack->setModal(true);
    goBack->exec();
}

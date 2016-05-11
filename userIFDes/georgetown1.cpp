#include "georgetown1.h"
#include "ui_georgetown1.h"

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
    dataHandler->showData(ui);
}

georgetown1::~georgetown1()
{
    delete ui;
}

void georgetown1::on_pushButtonagregar_clicked()
{
    dataHandler->insertEquipo(ui);
}

void georgetown1::on_pushButtonUpdate_clicked()
{
    dataHandler->updateData(ui);
}

void georgetown1::on_pushButtonDelete_clicked()
{
    dataHandler->deleteData(ui);
}

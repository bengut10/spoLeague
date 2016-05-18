

#include "geo_goleo.h"
#include "ui_geo_goleo.h"

geo_goleo::geo_goleo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::geo_goleo)
{
    ui->setupUi(this);
}

geo_goleo::geo_goleo(QString dataBase1, QString tableName1, QWidget *parent)
    : QDialog(parent), ui(new Ui::geo_goleo), dataBase(dataBase1), tableName(tableName1)
{
    ui->setupUi(this);
    dhGoleo = new functionality();
    dhGoleo->connectToDataBase(dataBase);
    dhGoleo->createTableGoleo(tableName);
}

geo_goleo::~geo_goleo()
{
    delete ui;
}



void geo_goleo::on_pushButtonAddP_clicked()
{
    dhGoleo->insertPlayer<Ui::geo_goleo>(*ui, tableName);
    dhGoleo->showTablePlayer<Ui::geo_goleo>(*ui,tableName);

}

void geo_goleo::on_pushButtonDeleteP_clicked()
{
    dhGoleo->deletePlayer<Ui::geo_goleo>(*ui, tableName);
    dhGoleo->showTablePlayer<Ui::geo_goleo>(*ui,tableName);

}

void geo_goleo::on_pushButtonUpdateP_clicked()
{
    dhGoleo->updatePlayer<Ui::geo_goleo>(*ui,tableName);
    dhGoleo->showTablePlayer<Ui::geo_goleo>(*ui,tableName);
}

void geo_goleo::on_pushButtonDisplayG_clicked()
{
    dhGoleo->showTablePlayer<Ui::geo_goleo>(*ui,tableName);
}

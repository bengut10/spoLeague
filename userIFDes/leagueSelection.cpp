#include "leagueSelection.h"
#include "ui_leagueSelection.h"
#include "geo_goleo.h"


#include <QDebug>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>




leagueSelection::leagueSelection(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::leagueSelection)
{
    ui->setupUi(this);
}

leagueSelection::~leagueSelection()
{
    delete ui;
}

void leagueSelection::on_pushButtonG1_clicked()
{
    hide();
    geor1 = new georgetown1("baseDeDatos.sqlite","georgetown1",this);
    geor1->setModal(true);
    geor1->exec();
}


void leagueSelection::on_pushButtonG2_clicked()
{
    hide();
    geor2 = new georgetown1("baseDeDatos.sqlite","georgetown2",this);
    geor2->setModal(true);
    geor2->exec();

}

void leagueSelection::on_pushButtonGoleoG1_clicked()
{
    hide();
    gol1 = new geo_goleo("baseDeDatos.sqlite","goleoG1",this);
    gol1->setModal(true);
    gol1->exec();
}

void leagueSelection::on_pushButtonGoleoG2_clicked()
{
    hide();
    gol2 = new geo_goleo("baseDeDatos.sqlite","goleoG2",this);
    gol2->setModal(true);
    gol2->exec();
}

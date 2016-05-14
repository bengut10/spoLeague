#include "leagueSelection.h"
#include "ui_leagueSelection.h"
#include <QDebug>



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
    geor1 = new georgetown1(this);
    geor1->setModal(true);
    geor1->exec();
}



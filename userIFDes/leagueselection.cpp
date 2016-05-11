#include "leagueselection.h"
#include "ui_leagueselection.h"
#include <QDebug>

LeagueSelection::LeagueSelection(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LeagueSelection)
{
    ui->setupUi(this);
}

LeagueSelection::~LeagueSelection()
{
    delete ui;
}

void LeagueSelection::on_pushButtonG1_clicked()
{
    hide();
    geor1 = new georgetown1(this);
    geor1->setModal(true);
    geor1->exec();
}

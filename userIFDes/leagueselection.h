#ifndef LEAGUESELECTION_H
#define LEAGUESELECTION_H

#include <QDialog>
#include "georgetown1.h"


namespace Ui {
class LeagueSelection;
}

class LeagueSelection : public QDialog
{
    Q_OBJECT

public:
    explicit LeagueSelection(QWidget *parent = 0);
    ~LeagueSelection();

private slots:
    void on_pushButtonG1_clicked();

private:
    Ui::LeagueSelection *ui;
    georgetown1 * geor1;

};

#endif // LEAGUESELECTION_H

#ifndef LEAGUESELECTION_H
#define LEAGUESELECTION_H

#include <QDialog>
#include "georgetown1.h"



namespace Ui {
class leagueSelection;
}

class leagueSelection : public QDialog
{
    Q_OBJECT

public:
    explicit leagueSelection(QWidget *parent = 0);
    ~leagueSelection();

private slots:
    void on_pushButtonG1_clicked();

private:
    Ui::leagueSelection *ui;
    georgetown1 * geor1;

};

#endif // LEAGUESELECTION_H
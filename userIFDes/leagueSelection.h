#ifndef LEAGUESELECTION_H
#define LEAGUESELECTION_H

#include <QDialog>
#include "georgetown1.h"
#include "geo_goleo.h"



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

    void on_pushButtonG2_clicked();

    void on_pushButtonGoleoG1_clicked();

    void on_pushButtonGoleoG2_clicked();

private:
    Ui::leagueSelection *ui;
    georgetown1 * geor1;
    georgetown1 * geor2;
    geo_goleo * gol1;
    geo_goleo * gol2;

};

#endif // LEAGUESELECTION_H

#ifndef GEO_GOLEO_H
#define GEO_GOLEO_H

#include <QDialog>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>

#include "functionality.h"


namespace Ui {
class geo_goleo;
}

class geo_goleo : public QDialog
{
    Q_OBJECT

public:
    explicit geo_goleo(QWidget *parent = 0);
    geo_goleo(QString dataBase1, QString tableName1, QWidget *parent = 0 );
    ~geo_goleo();

private slots:
    void on_pushButtonAddP_clicked();

    void on_pushButtonDeleteP_clicked();

    void on_pushButtonUpdateP_clicked();

    void on_pushButtonDisplayG_clicked();

private:
    Ui::geo_goleo *ui;
    QString dataBase;
    QString tableName;
    functionality *dhGoleo;

};

#endif // GEO_GOLEO_H

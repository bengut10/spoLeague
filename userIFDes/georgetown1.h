#ifndef GEORGETOWN1_H
#define GEORGETOWN1_H
#include <QDialog>

#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>

#include "functionality.h"

namespace Ui {
class georgetown1;
}

class georgetown1 : public QDialog
{
    Q_OBJECT

public:
    explicit georgetown1(QWidget *parent = 0);
    ~georgetown1();


private slots:
    void on_displayName_clicked();
    void on_pushButtonagregar_clicked();
    void on_pushButtonUpdate_clicked();
    void on_pushButtonDelete_clicked();

private:
    Ui::georgetown1 *ui;
    functionality *dataHandler;
    QSqlDatabase db;
};

#endif // GEORGETOWN1_H

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
    void on_pushButtonagregar_clicked();
    void on_pushButtonUpdate_clicked();
    void on_pushButtonDelete_clicked();

private:
    Ui::georgetown1 *ui;
    Ui::georgetown1 *temp = ui;
    functionality *dataHandler;
    QSqlDatabase db;
};

#endif // GEORGETOWN1_H

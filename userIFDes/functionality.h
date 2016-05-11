#ifndef FUNCTIONALITY_H
#define FUNCTIONALITY_H

#include <QDialog>
#include "ui_georgetown1.h"

class functionality
{
public:
    functionality();
    void showData(Ui::georgetown1 *obj);
    void crearTablaEquipo ();
    void insertEquipo(Ui::georgetown1 *obj);
    void updateData(Ui::georgetown1 *obj);
    void deleteData(Ui::georgetown1 *obj);
    void displayData(Ui::georgetown1 *obj);

private:
    QSqlDatabase db;
};

#endif // FUNCTIONALITY_H

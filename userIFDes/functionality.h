
#ifndef FUNCTIONALITY_H
#define FUNCTIONALITY_H

#include <QDialog>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QDebug>

#include "georgetown1.h"
#include "ui_georgetown1.h"


class functionality
{
public:
    functionality()
    {
    }

    void crearTablaEquipo ()
    {
        QString consulta;
        consulta.append("CREATE TABLE IF NOT EXISTS equipos("
                        "nombre VARCHAR(100) PRIMARY KEY, "
                        "pts INTEGER,"
                        "win INTEGER, "
                        "tied INTEGER, "
                        "loss INTEGER "
                        ");");
        QSqlQuery crear;
        crear.prepare(consulta);
        if(crear.exec())
        {
            qDebug() << "Success: Table Equipos has been created";
        }
        else
        {
            qDebug() << "Unsuccesful: Table Equipos has not been created";
            qDebug() << "Error! " << crear.lastError();
        }
    }

    template <class Anyclass>
    void showData(Anyclass &UiObj){
        QString consulta;
        consulta.append("SELECT * FROM equipos ORDER BY pts DESC");

        QSqlQuery consultar;
        consultar.prepare(consulta);
        if(consultar.exec())
        {
            qDebug() << "Success: Table has showed properly";
        }
        else
        {
            qDebug() << "Unsuccesful: Table has not showed properly";
            qDebug() << "Error! " << consultar.lastError();
        }

        int file = 0;
        UiObj.tableDatos->setRowCount(0);
        while(consultar.next())
        {
            UiObj.tableDatos->insertRow(file);
            UiObj.tableDatos->setItem(file, 0, new QTableWidgetItem(consultar.value(0).toByteArray().constData()));
            UiObj.tableDatos->setItem(file, 1, new QTableWidgetItem(consultar.value(1).toByteArray().constData()));
            UiObj.tableDatos->setItem(file, 2, new QTableWidgetItem(consultar.value(2).toByteArray().constData()));
            UiObj.tableDatos->setItem(file, 3, new QTableWidgetItem(consultar.value(3).toByteArray().constData()));
            file++;
        }
    }

    template <class AnyClass>
    void insertEquipo(AnyClass &UiObj)
    {
        QString consulta;
        consulta.append("INSERT INTO equipos("
                        "nombre, "
                        "pts,"
                        "win, "
                        "tied)"
                        "VALUES("
                        "'"+UiObj.lineEditnombre->text()+"',"
                        ""+UiObj.lineEditpts->text()+","
                        ""+UiObj.lineEditwin->text()+","
                        ""+UiObj.lineEdittied->text()+""
                        ");");
        QSqlQuery insertar;
        insertar.prepare(consulta);
        if(insertar.exec())
        {
            qDebug() << "Success";
        }
        else
        {
            qDebug() << "Unsuccesful";
            qDebug() << "Error! " << insertar.lastError();
        }
    }

    template <class AnyClass>
    void updateData(AnyClass &UiObj)
    {
        QSqlQuery update;
        update.prepare(
            "update equipos set pts = '"+UiObj.lineEditpts->text()+"', win = '"+UiObj.lineEditwin->text()+"', tied = '"+UiObj.lineEdittied->text()+"' where nombre = '"+UiObj.lineEditnombre->text()+"'");

        if(update.exec())
        {
            qDebug() << "Success: Update runs correctly";
        }
        else
        {
            qDebug() << "Unsuccesful: Update does not run correctly";
            qDebug() << "Error! " << update.lastError();
        }
    }


    template <class AnyClass>
    void deleteData(AnyClass &UiObj)
    {
        qDebug() << "called";
        QSqlQuery remove;
        remove.prepare(
            "delete from equipos where nombre = '"+UiObj.lineEditnombre->text()+"'");
        if(remove.exec())
        {
            qDebug() << "Success: remove runs correctly";
        }
        else
        {
            qDebug() << "Unsuccesful: remove does not run correctly";
            qDebug() << "Error! " << remove.lastError();
        }
    }

    
private:
    QSqlDatabase db;

};



#endif // FUNCTIONALITY_H

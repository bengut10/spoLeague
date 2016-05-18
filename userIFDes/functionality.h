#ifndef FUNCTIONALITY_H
#define FUNCTIONALITY_H

#include <QDialog>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QDebug>


#include "ui_georgetown1.h"
#include "ui_geo_goleo.h"


class functionality
{
public:
    functionality()
    {
    }

    void connectToDataBase(QString dataBase)
    {
        qDebug()<< "Application initiated...";
        QString path = "/Users/Ben/Desktop/Xampp/xamppfiles/htdocs/soccer/";
        db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName(path+dataBase);
        if (db.open())
        {
            qDebug()<< "You are now connected to the Data Base...";
        }
        else
        {
            qDebug()<< "ERROR: You are NOT connected to the Data Base...";
        }
    }

    void createTableTeam(QString tableName)
    {
        QString query = QString("CREATE TABLE IF NOT EXISTS "+tableName+ " ("
                        "team VARCHAR(100) PRIMARY KEY, "
                        "games INTEGER,"
                        "win INTEGER, "
                        "tied INTEGER, "
                        "loss INTEGER, "
                        "dif INTEGER,"
                        "pts INTEGER)"
                        );

        QSqlQuery create;
        create.prepare(query);
        if(create.exec())
        {
            qDebug() << "Success: Table "<<tableName<<" has been created or it already exists";
        }
        else
        {
            qDebug() << "Unsuccesful: Table" <<tableName<<" has not been created";
            qDebug() << "Error! " << create.lastError();
        }
    }

    void createTableGoleo(QString tableName)
    {
        QString query = QString("CREATE TABLE IF NOT EXISTS "+tableName+ " ("
                        "player VARCHAR(100) PRIMARY KEY, "
                        "team VARCHAR(100),"
                        "goles INTEGER)"
                        );

        QSqlQuery create;
        create.prepare(query);
        if(create.exec())
        {
            qDebug() << "Success: Table "<<tableName<<" has been created or it already exists";
        }
        else
        {
            qDebug() << "Unsuccesful: Table" <<tableName<<" has not been created";
            qDebug() << "Error! " << create.lastError();
        }
    }


    template <class Anyclass>
    void showTable(Anyclass &UiObj, QString tableName){
        QString query= QString("SELECT * FROM "+tableName+" ORDER BY pts DESC");

        QSqlQuery display;
        display.prepare(query);
        if(display.exec())
        {
            qDebug() << "Success: Table has showed properly";
        }
        else
        {
            qDebug() << "Unsuccesful: Table has not showed properly";
            qDebug() << "Error! " << display.lastError();
        }

        int file = 0;
        UiObj.tableDatos->setRowCount(0);
        while(display.next())
        {
            UiObj.tableDatos->insertRow(file);
            UiObj.tableDatos->setItem(file, 0, new QTableWidgetItem(display.value(0).toByteArray().constData()));
            UiObj.tableDatos->setItem(file, 1, new QTableWidgetItem(display.value(1).toByteArray().constData()));
            UiObj.tableDatos->setItem(file, 2, new QTableWidgetItem(display.value(2).toByteArray().constData()));
            UiObj.tableDatos->setItem(file, 3, new QTableWidgetItem(display.value(3).toByteArray().constData()));
            UiObj.tableDatos->setItem(file, 4, new QTableWidgetItem(display.value(4).toByteArray().constData()));
            UiObj.tableDatos->setItem(file, 5, new QTableWidgetItem(display.value(5).toByteArray().constData()));
            UiObj.tableDatos->setItem(file, 6, new QTableWidgetItem(display.value(6).toByteArray().constData()));
            file++;
        }
    }

    template <class Anyclass>
    void showTablePlayer(Anyclass &UiObj, QString tableName){
        QString query= QString("SELECT * FROM "+tableName+" ORDER BY goles DESC");

        QSqlQuery display;
        display.prepare(query);
        if(display.exec())
        {
            qDebug() << "Success: Table has showed properly";
        }
        else
        {
            qDebug() << "Unsuccesful: Table has not showed properly";
            qDebug() << "Error! " << display.lastError();
        }

        int file = 0;
        UiObj.tableDatos->setRowCount(0);
        while(display.next())
        {
            UiObj.tableDatos->insertRow(file);
            UiObj.tableDatos->setItem(file, 0, new QTableWidgetItem(display.value(0).toByteArray().constData()));
            UiObj.tableDatos->setItem(file, 1, new QTableWidgetItem(display.value(1).toByteArray().constData()));
            UiObj.tableDatos->setItem(file, 2, new QTableWidgetItem(display.value(2).toByteArray().constData()));
            file++;
        }
    }






    template <class AnyClass>
    void insertTeam(AnyClass &UiObj, QString tableName)
    {
        QString query = QString("INSERT INTO " +tableName+ " ("
                        "team, "
                        "games,"
                        "win, "
                        "tied,"
                        "loss,"
                        "dif,"
                        "pts)"
                        "VALUES("
                        "'"+UiObj.lineEditTeam->text()+"',"
                        ""+UiObj.lineEditGames->text()+","
                        ""+UiObj.lineEditWin->text()+","
                        ""+UiObj.lineEditTied->text()+","
                        ""+UiObj.lineEditLoss->text()+","
                        ""+UiObj.lineEditDif->text()+","
                        ""+UiObj.lineEditPts->text()+""
                        ");");
        QSqlQuery insert;
        insert.prepare(query);
        if(insert.exec())
        {
            qDebug() << "Success";
        }
        else
        {
            qDebug() << "Unsuccesful";
            qDebug() << "Error! " << insert.lastError();
        }
    }

    template <class AnyClass>
    void insertPlayer(AnyClass &UiObj, QString tableName)
    {
        QString query = QString("INSERT INTO " +tableName+ " ("
                        "player, "
                        "team,"
                        "goles)"
                        "VALUES("
                        "'"+UiObj.lineEditPlayer->text()+"',"
                        "'"+UiObj.lineEditTeam->text()+"',"
                        ""+UiObj.lineEditGoals->text()+""
                        ");");
        QSqlQuery insert;
        insert.prepare(query);
        if(insert.exec())
        {
            qDebug() << "Success";
        }
        else
        {
            qDebug() << "Unsuccesful";
            qDebug() << "Error! " << insert.lastError();
        }
    }

    template <class AnyClass>
    void updateTeam(AnyClass &UiObj, QString tableName)
    {

        QString query = QString("update "+tableName+
                " set loss = '"+UiObj.lineEditLoss->text()+"', dif = '"+UiObj.lineEditDif->text()+"', games = '"+UiObj.lineEditGames->text()+"', pts = '"+UiObj.lineEditPts->text()+"', win = '"+UiObj.lineEditWin->text()+"', tied = '"+UiObj.lineEditTied->text()+"' where team = '"+UiObj.lineEditTeam->text()+"'");


        QSqlQuery update;
        update.prepare(query);

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
    void updatePlayer(AnyClass &UiObj, QString tableName)
    {

        QString query = QString("update "+tableName+
                " set team = '"+UiObj.lineEditTeam->text()+"', goles = '"+UiObj.lineEditGoals->text()+"' where player = '"+UiObj.lineEditPlayer->text()+"'");


        QSqlQuery update;
        update.prepare(query);

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
    void deleteTeam(AnyClass &UiObj, QString tableName)
    {
        QString query = QString("delete from " +tableName+ " where team = '"+UiObj.lineEditTeam->text()+"'");
        QSqlQuery remove;
        remove.prepare(query);
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

    template <class AnyClass>
    void deletePlayer(AnyClass &UiObj, QString tableName)
    {
        QString query = QString("delete from " +tableName+ " where player = '"+UiObj.lineEditPlayer->text()+"'");
        QSqlQuery remove;
        remove.prepare(query);
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

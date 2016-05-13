
#include "functionality.h"

functionality::functionality()
{
}


void functionality::showData()
{
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
    obj->tableDatos->setRowCount(0);
    while(consultar.next())
    {
        obj->tableDatos->insertRow(file);
        obj->tableDatos->setItem(file, 0, new QTableWidgetItem(consultar.value(0).toByteArray().constData()));
        obj->tableDatos->setItem(file, 1, new QTableWidgetItem(consultar.value(1).toByteArray().constData()));
        obj->tableDatos->setItem(file, 2, new QTableWidgetItem(consultar.value(2).toByteArray().constData()));
        obj->tableDatos->setItem(file, 3, new QTableWidgetItem(consultar.value(3).toByteArray().constData()));
        file++;
    }
}

void functionality::crearTablaEquipo()
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

void functionality::insertEquipo()
{
    QString consulta;
    consulta.append("INSERT INTO equipos("
                    "nombre, "
                    "pts,"
                    "win, "
                    "tied)"
                    "VALUES("
                    "'"+obj->lineEditnombre->text()+"',"
                    ""+obj->lineEditpts->text()+","
                    ""+obj->lineEditwin->text()+","
                    ""+obj->lineEdittied->text()+""
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


void functionality::updateData()
{
    QSqlQuery update;
    update.prepare(
        "update equipos set pts = '"+obj->lineEditpts->text()+"', win = '"+obj->lineEditwin->text()+"', tied = '"+obj->lineEdittied->text()+"' where nombre = '"+obj->lineEditnombre->text()+"'");

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

void functionality::deleteData()
{

    QSqlQuery remove;
    remove.prepare(
        "delete from equipos where nombre = '"+obj->lineEditnombre->text()+"'");
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


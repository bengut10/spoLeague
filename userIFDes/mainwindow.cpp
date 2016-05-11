#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    qDebug()<< "Application initiated...";
    QString nombre;
    nombre.append("baseDeDatos.sqlite");
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(nombre);
    if (db.open())
    {
        qDebug()<< "You are now connected to the Data Base...";
    }
    else
    {
        qDebug()<< "ERROR: You are NOT connected to the Data Base...";
    }

    showData();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::crearTablaEquipo()
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

void MainWindow::insertEquipo()
{
    QString consulta;
    consulta.append("INSERT INTO equipos("
                    "nombre, "
                    "pts,"
                    "win, "
                    "tied)"
                    "VALUES("
                    "'"+ui->lineEditnombre->text()+"',"
                    ""+ui->lineEditpts->text()+","
                    ""+ui->lineEditwin->text()+","
                    ""+ui->lineEdittied->text()+""
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

void MainWindow::showData()
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
    ui->tableWidgetDatos->setRowCount(0);
    while(consultar.next())
    {
        ui->tableWidgetDatos->insertRow(file);
        ui->tableWidgetDatos->setItem(file, 0, new QTableWidgetItem(consultar.value(0).toByteArray().constData()));
        ui->tableWidgetDatos->setItem(file, 1, new QTableWidgetItem(consultar.value(1).toByteArray().constData()));
        ui->tableWidgetDatos->setItem(file, 2, new QTableWidgetItem(consultar.value(2).toByteArray().constData()));
        ui->tableWidgetDatos->setItem(file, 3, new QTableWidgetItem(consultar.value(3).toByteArray().constData()));
        file++;
    }
}

void MainWindow::updateData()
{

    QSqlQuery update;
    update.prepare(
        "update equipos set pts = '"+ui->lineEditpts->text()+"', win = '"+ui->lineEditwin->text()+"', tied = '"+ui->lineEdittied->text()+"' where nombre = '"+ui->lineEditnombre->text()+"'");

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

void MainWindow::deleteData()
{
    QSqlQuery remove;
    remove.prepare(
        "delete from equipos where nombre = '"+ui->lineEditnombre->text()+"'");
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


void MainWindow::on_pushButtonagregar_clicked()
{
    insertEquipo();
    showData();
}

void MainWindow::on_pushButtonUpdate_clicked()
{
    updateData();
    showData();
}

void MainWindow::on_pushButtonDelete_clicked()
{
    deleteData();
    showData();
}

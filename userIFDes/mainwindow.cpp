#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButtonLogin_clicked()
{
    QString userN = ui->lineEditUserN->text();
    QString passW = ui->lineEditPassW->text();
    if(userN == "test" && passW == "test")
    {
        hide();
        leagueSelect = new leagueSelection(this);
        leagueSelect->setModal(true);
        leagueSelect->exec();
    }
    else
    {
        QMessageBox::warning(this,"Login","Invalid User Name or Password");
    }

}

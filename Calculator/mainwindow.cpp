#include "mainwindow.h"
#include "ui_mainwindow.h"



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->setWindowTitle("SUM CALCULATOR");

    connect(ui->calcBtn, SIGNAL(clicked(bool)), this, SLOT(sumCalc()));
    connect(ui->closeBtn, SIGNAL(clicked(bool)), this, SLOT(close()));
}



MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::sumCalc()
{
    double n1, n2;
    QString n1_field, n2_field, res_field;
    bool n1IsValid, n2IsValid;

    n1_field = ui->num1->text();
    n2_field = ui->num2->text();

    n1 = n1_field.toDouble(&n1IsValid);
    n2 = n2_field.toDouble(&n2IsValid);

    if (n1_field.isEmpty() || n2_field.isEmpty())
        QMessageBox::warning(this, "WARNING", "Empty Field");
    else if (n1IsValid == false || n2IsValid == false)
        QMessageBox::critical(this, "ERROR", "Invalid Field");
    else
        ui->result->setText(res_field.setNum(n1 + n2));
}



void MainWindow::closeEvent(QCloseEvent *e)
{
    if (QMessageBox::question(this, "CONFIRM", "Do you want to exit app ?") == QMessageBox::No)
        e->ignore();
}

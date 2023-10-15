#include "mainwindow.h"
#include "ui_mainwindow.h"



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->setWindowTitle("SUM CALCULATOR");

    connect(ui->calcBtn, SIGNAL(clicked(bool)), this, SLOT(sumCalc()));
    connect(ui->resetBtn, SIGNAL(clicked(bool)), this, SLOT(reset()));

    loadSettings();
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
    saveSettings();

    if (QMessageBox::question(this, "CONFIRM", "Do you want to exit app ?") == QMessageBox::No)
        e->ignore();


}



void MainWindow::reset()
{
    ui->num1->clear();
    ui->num2->clear();
    ui->result->clear();
}



void MainWindow::saveSettings()
{
    QSettings setting("Danh21", "Calculator");
    setting.beginGroup("saveFields");
    setting.setValue("num1", ui->num1->text());
    setting.setValue("num2", ui->num2->text());
    setting.setValue("result", ui->result->text());
    setting.endGroup();
}



void MainWindow::loadSettings()
{
    QSettings setting("Danh21", "Calculator");
    setting.beginGroup("saveFields");
    ui->num1->setText(setting.value("num1").toString());
    ui->num2->setText(setting.value("num2").toString());
    ui->result->setText(setting.value("result").toString());
    setting.endGroup();
}

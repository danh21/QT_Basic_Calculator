#ifndef MAINWINDOW_H
#define MAINWINDOW_H



#include <QMainWindow>
#include <QMessageBox>
#include <QCloseEvent>
#include <QSettings>



QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE



class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

protected:
    void closeEvent(QCloseEvent *e);

private slots:
    void sumCalc(void);
    void reset(void);
    void saveSettings(void);
    void loadSettings(void);
};



#endif // MAINWINDOW_H

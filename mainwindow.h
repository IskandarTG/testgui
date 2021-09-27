#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QLineEdit>
#include <QProcess>
#include <QDir>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_Next_Button_clicked();
    void on_Previous_Button_clicked();
    void on_CheckProjectDir_Button_clicked();
    void on_SetProjectDir_Button_clicked();
    void on_Mesh_Button_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
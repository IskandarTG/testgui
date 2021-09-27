#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Next_Button_clicked()
{
    ui->tabWidget->setCurrentIndex(ui->tabWidget->currentIndex()+1);
}

void MainWindow::on_Previous_Button_clicked()
{
    ui->tabWidget->setCurrentIndex(ui->tabWidget->currentIndex()-1);
}


void MainWindow::on_CheckProjectDir_Button_clicked()
{
    QMessageBox msgBox;
    msgBox.setText("Your current Project Directory is:");
    msgBox.setInformativeText(QDir::currentPath());
    msgBox.exec();
}

void MainWindow::on_SetProjectDir_Button_clicked()
{
    QDir::setCurrent(ui->ProjectDir->text());
}


void MainWindow::on_Mesh_Button_clicked()
{
    QProcess Mesh_Process;
    ui->Mesh_Output->clear();
    Mesh_Process.setCurrentReadChannel(QProcess::StandardOutput);
    Mesh_Process.start("blockMesh");
    //ui->Mesh_Output->append(Mesh_Process.readAllStandardOutput());
    //QProcess* process = qobject_cast<QProcess*>(sender());
    //   if (process)
    //       ui->Mesh_Output->append(process->readAllStandardOutput());
    Mesh_Process.waitForFinished(-1);
}


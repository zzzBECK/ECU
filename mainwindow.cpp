#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->progressBar->setValue(100);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_Brake_clicked()
{
    ui->BrakeStatus->setStyleSheet("background-color: rgb(23, 165, 0);");
    ui->AccelerationStatus->setStyleSheet("background-color: rgb(108, 108, 108);");
    ui->AutorcrossStatus->setStyleSheet("background-color: rgb(108, 108, 108);");
    ui->SkidpadStatus->setStyleSheet("background-color: rgb(108, 108, 108);");
    ui->EnduranceStatus->setStyleSheet("background-color: rgb(108, 108, 108);");
}


void MainWindow::on_Acceleration_clicked()
{
    ui->BrakeStatus->setStyleSheet("background-color: rgb(108, 108, 108);");
    ui->AccelerationStatus->setStyleSheet("background-color: rgb(23, 165, 0);");
    ui->AutorcrossStatus->setStyleSheet("background-color: rgb(108, 108, 108);");
    ui->SkidpadStatus->setStyleSheet("background-color: rgb(108, 108, 108);");
    ui->EnduranceStatus->setStyleSheet("background-color: rgb(108, 108, 108);");
}


void MainWindow::on_Autocross_clicked()
{
    ui->BrakeStatus->setStyleSheet("background-color: rgb(108, 108, 108);");
    ui->AccelerationStatus->setStyleSheet("background-color: rgb(108, 108, 108);");
    ui->AutorcrossStatus->setStyleSheet("background-color: rgb(23, 165, 0);");
    ui->SkidpadStatus->setStyleSheet("background-color: rgb(108, 108, 108);");
    ui->EnduranceStatus->setStyleSheet("background-color: rgb(108, 108, 108);");
}


void MainWindow::on_SkidPad_clicked()
{
    ui->BrakeStatus->setStyleSheet("background-color: rgb(108, 108, 108);");
    ui->AccelerationStatus->setStyleSheet("background-color: rgb(108, 108, 108);");
    ui->AutorcrossStatus->setStyleSheet("background-color: rgb(108, 108, 108);");
    ui->SkidpadStatus->setStyleSheet("background-color: rgb(23, 165, 0);");
    ui->EnduranceStatus->setStyleSheet("background-color: rgb(108, 108, 108);");
}


void MainWindow::on_Endurance_clicked()
{
    ui->BrakeStatus->setStyleSheet("background-color: rgb(108, 108, 108);");
    ui->AccelerationStatus->setStyleSheet("background-color: rgb(108, 108, 108);");
    ui->AutorcrossStatus->setStyleSheet("background-color: rgb(108, 108, 108);");
    ui->SkidpadStatus->setStyleSheet("background-color: rgb(108, 108, 108);");
    ui->EnduranceStatus->setStyleSheet("background-color: rgb(23, 165, 0);");
}

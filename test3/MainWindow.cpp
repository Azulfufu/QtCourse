#include "MainWindow.h"
#include "ui_MainWindow.h"
#include "QDebug"
#include "idatabase.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->setWindowFlag(Qt::FramelessWindowHint);

    goLoginview();

    IDatabase::getInstance();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::goLoginview()
{
    qDebug() << "goLoginview";
    Loginview = new loginview(this);
    pushWidgetToStackView(Loginview);

    connect(Loginview,SIGNAL(loginSuccess()),this,SLOT(goWelcomeview()));
}

void MainWindow::goWelcomeview()
{
    qDebug() << "goWelcomeview";
    Welcomeview = new welcomeview(this);
    pushWidgetToStackView(Welcomeview);

    connect(Welcomeview,SIGNAL(goDoctorview()),this,SLOT(goDoctorview()));
    connect(Welcomeview,SIGNAL(goPatientview()),this,SLOT(goPatientview()));
    connect(Welcomeview,SIGNAL(goDepartmentview()),this,SLOT(goDepartmentview()));
}

void MainWindow::goDoctorview()
{
    qDebug() << "goDoctorview";
    Doctorview = new doctorview(this);
    pushWidgetToStackView(Doctorview);
}

void MainWindow::goDepartmentview()
{
    qDebug() << "goDepartmentview";
    Departmentview = new departmentview(this);
    pushWidgetToStackView(Departmentview);
}

void MainWindow::goPatientview()
{
    qDebug() << "goPatientview";
    Patientview = new patientview(this);
    pushWidgetToStackView(Patientview);

    connect(Patientview,SIGNAL(goPatientEditview(int)),this,SLOT(goPatientEditview(int)));
}

void MainWindow::goPatientEditview(int rowNo)
{
    qDebug() << "goPatientEditview";
    Patienteditview = new patienteditview(this,rowNo);
    pushWidgetToStackView(Patienteditview);

    connect(Patienteditview,SIGNAL(goPreviousView()),this,SLOT(goPreviousView()));
}

void MainWindow::goPreviousView()
{
    int count = ui->stackedWidget->count();
    if(count > 1){
        ui->stackedWidget->setCurrentIndex(count - 2);
        ui->labeltitle->setText(ui->stackedWidget->currentWidget()->windowTitle());

        QWidget *widget = ui->stackedWidget->widget(count - 1);
        ui->stackedWidget->removeWidget(widget);
        delete widget;
    }
}

void MainWindow::pushWidgetToStackView(QWidget *widget)
{
    ui->stackedWidget->addWidget(widget);
    int count = ui->stackedWidget->count();
    ui->stackedWidget->setCurrentIndex(count - 1);
    ui->labeltitle->setText(widget->windowTitle());
}

void MainWindow::on_btback_clicked()
{
    goPreviousView();
}


void MainWindow::on_stackedWidget_currentChanged(int arg1)
{
    int count = ui->stackedWidget->count();
    ui->btlogout->setEnabled(false);
    ui->btback->setEnabled(count>1);

    QString title = ui->stackedWidget->currentWidget()->windowTitle();

    if(title == "欢迎"){
        ui->btlogout->setEnabled(true);
        ui->btback->setEnabled(false);
    }
    else if(title == "登录"){
        ui->btlogout->setEnabled(false);
        ui->btback->setEnabled(false);
    }
}


void MainWindow::on_btlogout_clicked()
{
    goPreviousView();
}


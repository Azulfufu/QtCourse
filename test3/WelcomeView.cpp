#include "WelcomeView.h"
#include "ui_WelcomeView.h"
#include <QDebug>

welcomeview::welcomeview(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::welcomeview)
{
    qDebug()<<"create welcomeview";
    ui->setupUi(this);
}

welcomeview::~welcomeview()
{
    qDebug()<<"destory welcomeview";
    delete ui;
}


void welcomeview::on_btDepartment_clicked()
{
    emit goDepartmentview();
}


void welcomeview::on_btDoctor_clicked()
{
    emit goDoctorview();
}


void welcomeview::on_btpatient_clicked()
{
    emit goPatientview();
}


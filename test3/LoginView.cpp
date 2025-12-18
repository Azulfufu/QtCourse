#include "LoginView.h"
#include "ui_LoginView.h"
#include "idatabase.h"

loginview::loginview(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::loginview)
{
    ui->setupUi(this);
}

loginview::~loginview()
{
    delete ui;
}

void loginview::on_btsignin_clicked()
{
    QString stauts=IDatabase::getInstance().userLogin(ui->inputuserName->text(),ui->inputuserPassword->text());
    if(stauts == "loginOK"){
        emit loginSuccess();
    }

}


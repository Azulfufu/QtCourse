#include "DoctorView.h"
#include "ui_DoctorView.h"

doctorview::doctorview(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::doctorview)
{
    ui->setupUi(this);
}

doctorview::~doctorview()
{
    delete ui;
}

#include "DepartmentView.h"
#include "ui_DepartmentView.h"

departmentview::departmentview(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::departmentview)
{
    ui->setupUi(this);
}

departmentview::~departmentview()
{
    delete ui;
}

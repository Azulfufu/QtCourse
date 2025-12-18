#include "PatientEditView.h"
#include "ui_PatientEditView.h"
#include "idatabase.h"
#include <QSqlTableModel>

patienteditview::patienteditview(QWidget *parent,int index)
    : QWidget(parent)
    , ui(new Ui::patienteditview)
{
    ui->setupUi(this);
    dataMapper =new QDataWidgetMapper();
    QSqlTableModel *tabModel =IDatabase::getInstance().patientTabModel;
    dataMapper->setModel(IDatabase::getInstance().patientTabModel);
    dataMapper->setSubmitPolicy(QDataWidgetMapper::AutoSubmit);

    dataMapper->addMapping(ui->dbEditID,tabModel->fieldIndex("ID"));
    dataMapper->addMapping(ui->dbEditName, tabModel->fieldIndex("NAME"));
    dataMapper->addMapping(ui->dbEditIDcard, tabModel->fieldIndex("ID_CARD"));
    dataMapper->addMapping(ui->dbspinHeight, tabModel->fieldIndex("HEIGHT"));
    dataMapper->addMapping(ui->dbspinWeight, tabModel->fieldIndex("WEIGHT"));
    dataMapper->addMapping(ui->dbEditMobile, tabModel->fieldIndex("MOBILEPHONE"));
    dataMapper->addMapping(ui->dbDateEditD0B, tabModel->fieldIndex("D0B"));
    dataMapper->addMapping(ui->dbcomboSex, tabModel->fieldIndex("SEX"));
    dataMapper->addMapping(ui->dbcreatedTimestamp, tabModel->fieldIndex("CREATEDTIMETAMP"));
    dataMapper->setCurrentIndex(index);

    ui->dbEditID->setEnabled(false);
}

patienteditview::~patienteditview()
{
    delete ui;
}


void patienteditview::on_pushButton_2_clicked()
{
    IDatabase::getInstance().revertPatientEdit();
    emit goPreviousView();
}


void patienteditview::on_pushButton_clicked()
{
    IDatabase::getInstance().submitPatientEdit();
    emit goPreviousView();
}




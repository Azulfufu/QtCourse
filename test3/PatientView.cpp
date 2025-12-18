#include "PatientView.h"
#include "ui_PatientView.h"
#include "idatabase.h"


patientview::patientview(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::patientview)
{
    ui->setupUi(this);

    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableView->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableView->setAlternatingRowColors(true);


    IDatabase &iDatabase = IDatabase::getInstance();
    if(iDatabase.initPatientModel()){
        ui->tableView->setModel(iDatabase.patientTabModel);
        ui->tableView->setSelectionModel(iDatabase.thepatientSelection);
    }
}

patientview::~patientview()
{
    delete ui;
}

void patientview::on_btadd_clicked()
{
    int currow=IDatabase::getInstance().addNewPatient();
    emit goPatientEditview(currow);
}
void patientview::on_btsearch_clicked()
{
    QString filter = QString("name like '%%1%'").arg(ui->txtSearch->text());
    IDatabase::getInstance().searchPatient(filter);
}
void patientview::on_btDelete_clicked()
{
    IDatabase::getInstance().deleteCurrentPatient();

}
void patientview::on_btEdit_clicked()
{
    QModelIndex curIndex=IDatabase::getInstance().thepatientSelection->currentIndex();
    emit goPatientEditview(curIndex.row());
}


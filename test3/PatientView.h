#ifndef PATIENTVIEW_H
#define PATIENTVIEW_H

#include <QWidget>

namespace Ui {
class patientview;
}

class patientview : public QWidget
{
    Q_OBJECT

public:
    explicit patientview(QWidget *parent = nullptr);
    ~patientview();

private slots:
    void on_btadd_clicked();

    void on_btsearch_clicked();

    void on_bt_clicked();

    void on_pushButton_4_clicked();

    void on_btEdit_clicked();

    void on_btDelete_clicked();

signals:
    void goPatientEditview(int idx);

private:
    Ui::patientview *ui;
};

#endif // PATIENTVIEW_H

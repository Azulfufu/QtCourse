#ifndef WELCOMEVIEW_H
#define WELCOMEVIEW_H

#include <QWidget>

namespace Ui {
class welcomeview;
}

class welcomeview : public QWidget
{
    Q_OBJECT

public:
    explicit welcomeview(QWidget *parent = nullptr);
    ~welcomeview();

private slots:

    void on_btDepartment_clicked();

    void on_btDoctor_clicked();

    void on_btpatient_clicked();

signals:
    void goDepartmentview();
    void goDoctorview();
    void goPatientview();



private:
    Ui::welcomeview *ui;
};

#endif // WELCOMEVIEW_H

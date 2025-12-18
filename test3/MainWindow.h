#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "LoginView.h"
#include "DoctorView.h"
#include "DepartmentView.h"
#include "PatientEditView.h"
#include "PatientView.h"
#include "WelcomeView.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void goLoginview();
    void goWelcomeview();
    void goDoctorview();
    void goDepartmentview();
    void goPatientview();
    void goPatientEditview(int rowNo);
    void goPreviousView();


private slots:
    void on_btback_clicked();

    void on_stackedWidget_currentChanged(int arg1);

    void on_btlogout_clicked();

private:
    void pushWidgetToStackView(QWidget *widget);
    Ui::MainWindow *ui;

    loginview *Loginview;
    welcomeview *Welcomeview;
    doctorview *Doctorview;
    patienteditview *Patienteditview;
    patientview *Patientview;
    departmentview *Departmentview;


};
#endif // MAINWINDOW_H

#ifndef LOGINVIEW_H
#define LOGINVIEW_H

#include <QWidget>

namespace Ui {
class loginview;
}

class loginview : public QWidget
{
    Q_OBJECT

public:
    explicit loginview(QWidget *parent = nullptr);
    ~loginview();

private slots:
    void on_btsignin_clicked();

signals:
    void loginSuccess();
    void loginFailed();

private:
    Ui::loginview *ui;
};

#endif // LOGINVIEW_H

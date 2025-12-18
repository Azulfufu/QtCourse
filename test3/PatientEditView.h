#ifndef PATIENTEDITVIEW_H
#define PATIENTEDITVIEW_H

#include <QWidget>
#include <QDataWidgetMapper>

namespace Ui {
class patienteditview;
}

class patienteditview : public QWidget
{
    Q_OBJECT

public:
    explicit patienteditview(QWidget *parent = nullptr,int index=0);
    ~patienteditview();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::patienteditview *ui;
    QDataWidgetMapper *dataMapper;

signals:
    void goPreviousView();
};

#endif // PATIENTEDITVIEW_H

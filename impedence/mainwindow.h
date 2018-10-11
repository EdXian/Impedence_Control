#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <qcustomplot.h>
#include <QTimer>
#include <QVector>
#include "iostream"
#include "stdio.h"
#include <QMouseEvent>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QTimer *timer;
    double posx , posy;
    QCPCurve *circle ;//= new QCPCurve(ui->customplot->xAxis, ui->customplot->yAxis);
    QVector< QCPCurveData > data;

    QCPCurve *path ;
    QVector< QCPCurveData > path_data;

    QCPCurve *path2 ;
    QVector< QCPCurveData > path_data2;

    double mouse_corx , mouse_cory;
    double dt =0;

    double  v_x,v_y,a_x,a_y ;
    double omega;
    double d_x ,d_y;
    double dv_x, dv_y;

    double posx2 , posy2;
    double lposx2 , lposy2;
    double ax_2;
    double ay_2;
    double vx_2 , vy_2;

    double mass ;
    double damping;
    double spring;
    double last_p , last_v;
    double theta;
    double forcex , forcey ;
    double force_gain;
    double interaction_time;

    QCPItemLine *item;
private:

    Ui::MainWindow *ui;

private slots:
   void update();
   void mouseClick(QMouseEvent* event);


   void on_forcey_SpinBox_editingFinished();
   void on_forcex_SpinBox_editingFinished();
   void on_virtual_mass_SpinBox_editingFinished();
   void on_virtual_damping_SpinBox_editingFinished();
   void on_virtual_spring_SpinBox_editingFinished();
   void on_force_gain_SpinBox_editingFinished();
};

#endif // MAINWINDOW_H

/**
* Created by Ing. Luis Alejandro Reyes Morales on 9/12/2020.
*
* email: inglreyesm@gmail.com
* github: https://github.com/lreyesm
* linkedin: https://linkedin.com/in/luis-alejandro-reyes-morales-9b672012a
*
*/

#ifndef OPTIONSETTIME_H
#define OPTIONSETTIME_H

#include <QWidget>
#include <QDateTime>

namespace Ui {
class OptionSetTime;
}

class OptionSetTime : public QWidget
{
    Q_OBJECT

public:
    explicit OptionSetTime(QWidget *parent = nullptr);
    ~OptionSetTime();

signals:
    void closing();
    void dateSetted(QDateTime);
private slots:
    void on_l_save_clicked();

    void on_l_define_time_back_clicked();

    void on_pb_minutes_down_clicked();

    void on_pb_minutes_up_clicked();

    void on_pb_hours_down_clicked();

    void on_pb_hours_up_clicked();

    void updateTimeInfo();
private:
    Ui::OptionSetTime *ui;
    QDateTime currentDateTime;
    QString dateTimeProcessInRaspi(QDateTime dt);
};

#endif // OPTIONSETTIME_H

#ifndef OPTIONALARMLIMIT_H
#define OPTIONALARMLIMIT_H

#include <QWidget>
#define MAX_ALARM_CONFIG 50
#define MIN_ALARM_CONFIG 21

namespace Ui {
class OptionAlarmLimit;
}

class OptionAlarmLimit : public QWidget
{
    Q_OBJECT

public:
    explicit OptionAlarmLimit(QWidget *parent = nullptr);
    ~OptionAlarmLimit();
signals:
    void closing();
private slots:
    void on_l_save_clicked();
    void on_pb_min_limit_up_clicked();

    void on_pb_min_limit_down_clicked();

    void on_pb_max_limit_up_clicked();

    void on_pb_max_limit_down_clicked();

private:
    Ui::OptionAlarmLimit *ui;
    int max_limit = 28;
    int min_limit = 21; //TODO: change min limit
};

#endif // OPTIONALARMLIMIT_H

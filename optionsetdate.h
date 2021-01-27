<<<<<<< HEAD
#ifndef OPTIONSETDATE_H
#define OPTIONSETDATE_H

#include <QWidget>

namespace Ui {
class OptionSetDate;
}

class OptionSetDate : public QWidget
{
    Q_OBJECT

public:
    explicit OptionSetDate(QWidget *parent = nullptr);
    ~OptionSetDate();

private:
    Ui::OptionSetDate *ui;
};

#endif // OPTIONSETDATE_H
=======
#ifndef OPTIONSETDATE_H
#define OPTIONSETDATE_H

#include <QWidget>
#include <QMap>
#include <QDateTime>

namespace Ui {
class OptionSetDate;
}

class OptionSetDate : public QWidget
{
    Q_OBJECT

public:
    explicit OptionSetDate(QWidget *parent = nullptr);
    ~OptionSetDate();

signals:
    void closing();

private slots:
    void on_pb_day_down_clicked();
    void on_pb_day_up_clicked();
    void on_pb_month_down_clicked();
    void on_pb_month_up_clicked();
    void on_pb_year_down_clicked();
    void on_pb_year_up_clicked();

    void on_l_save_clicked();

    void on_l_define_date_back_clicked();

private:
    Ui::OptionSetDate *ui;
    QMap<QString, int> mapMonth;
    void fillJsonDate();
    QDateTime currentDateTime;
};

#endif // OPTIONSETDATE_H
>>>>>>> 9090ceb909ef3c3f4473bedbfa53a0fa127bc4ed

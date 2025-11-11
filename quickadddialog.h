#ifndef QUICKADDDIALOG_H
#define QUICKADDDIALOG_H

#include <QDialog>

namespace Ui {
class QuickAddDialog;
}

class QuickAddDialog : public QDialog
{
    Q_OBJECT

public:
    explicit QuickAddDialog(QWidget *parent = 0);
    ~QuickAddDialog();

public slots:
    void accept() override;

signals:
    void added(QString& todo);

private:
    Ui::QuickAddDialog *ui;
};

#endif // QUICKADDDIALOG_H

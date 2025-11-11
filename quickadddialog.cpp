#include "quickadddialog.h"
#include "ui_quickadddialog.h"

QuickAddDialog::QuickAddDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::QuickAddDialog)
{
    ui->setupUi(this);
    setWindowFlags(windowFlags() | Qt::WindowStaysOnTopHint);
}

QuickAddDialog::~QuickAddDialog()
{
    delete ui;
}

void QuickAddDialog::accept(){
    auto text = ui->lineEdit->text();
    emit added(text);

    QDialog::accept();
}

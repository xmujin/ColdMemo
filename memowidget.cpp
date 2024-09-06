#include "memowidget.h"
#include "./ui_memowidget.h"

MemoWidget::MemoWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MemoWidget)
{
    ui->setupUi(this);
}

MemoWidget::~MemoWidget()
{
    delete ui;
}

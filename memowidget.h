#ifndef MEMOWIDGET_H
#define MEMOWIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class MemoWidget;
}
QT_END_NAMESPACE

class MemoWidget : public QWidget
{
    Q_OBJECT

public:
    MemoWidget(QWidget *parent = nullptr);
    ~MemoWidget();

private:
    Ui::MemoWidget *ui;
};
#endif // MEMOWIDGET_H

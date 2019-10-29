#ifndef TOPTILEWIDGET_H
#define TOPTILEWIDGET_H

#include <QWidget>

namespace Ui {
class TopTileWidget;
}

class TopTileWidget : public QWidget
{
    Q_OBJECT
    
public:
    explicit TopTileWidget(QWidget *parent = 0);
    ~TopTileWidget();
    
private slots:
    void on_pushButtonMax_clicked();

private:
    Ui::TopTileWidget *ui;
};

#endif // TOPTILEWIDGET_H

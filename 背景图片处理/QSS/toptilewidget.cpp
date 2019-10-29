#include "toptilewidget.h"
#include "ui_toptilewidget.h"
/**
代码:
ui-> titleWidget->setStyleSheet(QString::fromUtf8("#titleWidget{\n"
"	border-image: url(:/picture/image/titlebk.png);\n"
"}"));

解析:
(1)默认background-image属性: 不会缩放图片以适应控件的大小。
(2)border-image属性:供一个皮肤或背景图片以自动适应控件大小。
    如果要提供一个皮肤或背景图片以自动适应控件大小，
必须也只能用border-image属性。因为border-image已经设置了可用的背景图片，
所以使用了border-image后，没必要再指定background-image。

(3)ID选择器，#objectName，匹配所有id为objectName的控件实例。

*/

TopTileWidget::TopTileWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TopTileWidget)
{
    ui->setupUi(this);
}

TopTileWidget::~TopTileWidget()
{
    delete ui;
}

void TopTileWidget::on_pushButtonMax_clicked()
{

}

#include "bullet_e.h"
#include "player.h"
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsPixmapItem>
#include <QPixmap>
#include <QTimer>
#include <QMouseEvent>
#include <QList>

Bullet_e::Bullet_e(int type)
{
    if(type==1)
    {
        setPixmap(QPixmap("D:\\1_Desktop\\1_School\\QT\\MyCode\\wop\\image\\bullet_1.png"));
        damage=1;
        type=1;
        QTimer * timer = new QTimer(this);
        connect(timer,&QTimer::timeout,
                [=]()
        {
            /*QList<QGraphicsItem *> colliding_items = collidingItems();
            for (int i = 0, n = colliding_items.size(); i < n; ++i)
            {
                if (typeid(*(colliding_items[i])) == typeid(Enemy))
                {
                    scene()->removeItem(this);
                    delete this;
                    scene()->removeItem(colliding_items[i]);
                    delete colliding_items[i];
                    return;
                }
            }*/
            setPos(x(),y()+2);
            if (pos().y() + pixmap().height() >920)
            {
                scene()->removeItem(this);
                delete this;
            }
        });
        timer->start(5);
        return;
    }
}

Bullet_e::Bullet_e()
{

}

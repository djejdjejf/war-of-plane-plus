#ifndef ENEMY_H
#define ENEMY_H

#include "player.h"
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsPixmapItem>
#include <QPixmap>
#include <QTimer>

class Enemy : public QObject,public QGraphicsPixmapItem
{
public:
    int type;
    int hp;
    Enemy();
    Enemy(int,Player *);
};

#endif // ENEMY_H

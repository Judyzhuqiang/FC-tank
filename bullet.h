#ifndef BULLET_H
#define BULLET_H
#include "config.h"
#include <QPixmap>
#include <QPainter>
#include <QSound>

class Bullet
{
private:
    int speed;
    bool active;

public:
    bool bump; //撞击
    int bumpx;
    int bumpy;
    int w;
    int h;
    direct dir;
    QPixmap upimg;
    QPixmap downimg;
    QPixmap leftimg;
    QPixmap rightimg;
//    QPixmap bump1;
//    QPixmap bump2;
    QPixmap bump3;
    QRect rect;
    explicit Bullet();
    Bullet(const Bullet&);
    void setActive(bool);
    bool getActive();
    void move();
    void setDir(direct);
    void display(QPainter&);
    bool canReachable(int,int,direct);
    Bullet& operator=(const Bullet&); //重载赋值运算符=，用于创建一个对象，比如拷贝构造函数
    void showExplosion(QPainter&);
    ~Bullet();
};

#endif // BULLET_H

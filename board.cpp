#include "board.h"
#include <QPainter>
#include "chesssquares.h"

Board::Board(){
}

void Board::paint(QPainter * painter , const QStyleOptionGraphicsItem * , QWidget *){
    QRectF rec= boundingRect();
    QBrush brush;
    brush.setStyle(Qt::SolidPattern);
    brush.setColor(Qt::red);
    painter->fillRect(rec,brush);
    painter->drawRect(rec);

  }
QRectF Board::boundingRect() const{
   return QRectF(50,75,800,800);
}


#ifndef BOARD_H
#define BOARD_H
#include <QGraphicsRectItem>
#include "chesssquares.h"
#include "chess.h"

class Board:public QGraphicsRectItem{
public:
   Board();
   QRectF boundingRect() const override;
   void paint(QPainter * painter , const QStyleOptionGraphicsItem * option , QWidget * widget)override;
private:

};

#endif // BOARD_H

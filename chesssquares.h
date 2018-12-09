#ifndef CHESSSQUARES_H
#define CHESSSQUARES_H
#include <QGraphicsRectItem>
class chessSquares:public QGraphicsRectItem{
public:
    chessSquares(int x,int y);
    QRectF boundingRect() const override;
    void paint(QPainter * painter , const QStyleOptionGraphicsItem * option , QWidget * widget)override;

    void setColor(QColor c);
private:
    int m_col;
    int m_row;
    QColor  m_color;


};


#endif // CHESSSQUARES_H


#include"chesssquares.h"
#include "QBrush"
#include "QPainter"
QRectF chessSquares::boundingRect()const{
    return QRectF(50+100*m_col,75+100*m_row,100,100);
}

void chessSquares::paint(QPainter *painter, const QStyleOptionGraphicsItem *, QWidget *)
{
    QRectF rec= boundingRect();
    QBrush brush;
    brush.setStyle(Qt::SolidPattern);
    brush.setColor(m_color);
    painter->fillRect(rec,brush);
    painter->drawRect(rec);
}


void chessSquares::setColor(QColor c)
{
    m_color=c;
}
chessSquares::chessSquares(int x, int y)
    :m_col(x),m_row(y)
{}



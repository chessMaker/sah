#include "chess.h"
#include <QDebug>
#include "board.h"
#include "chess.h"
#include <QGraphicsView>

Chess::Chess(QWidget* parent):QGraphicsView (parent){
   m_scene.setSceneRect(0,0,1250,950);
   setFixedSize(1250,950);
   setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
   setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
   setScene(&m_scene);
   Board*  table= new Board;
   addItem(table);

   QGraphicsRectItem* Boxscore=new QGraphicsRectItem(900,75,300,500);
   QBrush brush;
   brush.setStyle(Qt::SolidPattern);
   brush.setColor(Qt::blue);
   Boxscore->setBrush(brush);
   addItem(Boxscore);

   QGraphicsRectItem* Turn=new QGraphicsRectItem(900,625,300,250);
   brush.setStyle(Qt::SolidPattern);
   brush.setColor(Qt::yellow);
   Turn->setBrush(brush);
   addItem(Turn);
   drawSquares();


}
void Chess::addItem(QGraphicsItem * item){
    m_scene.addItem(item);
}
void Chess::drawSquares(){

    for (int i=0;i<8;i++) {
        for (int j=0;j<8;j++) {
           chessSquares* sq=new chessSquares(i,j);

           if((i+j) % 2 == 0)
               sq->setColor(QColor(192,105,52));
           else {
               sq->setColor(QColor(239,206,164));
           }
            m_matrix[i][j]=sq ;
            m_scene.addItem(sq);
        }


    }

}

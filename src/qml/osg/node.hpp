#ifndef _OSG_NODE_QTQML_
#define _OSG_NODE_QTQML_ 1

#include <osg/ObjectQtQml>

namespace osg {

class Node;

class OSGQTQML_EXPORT NodeQtQml : public osg::ObjectQtQml
{
  Q_OBJECT

public:
  class Index;

  NodeQtQml(QObject *parent = 0);
  NodeQtQml(Index *index, QObject *parent = 0);

  void classBegin();

  Node* node();

  static NodeQtQml* fromNode(Node *node, QObject *parent = 0);
};

}

#endif // _OSG_NODE_QTQML_

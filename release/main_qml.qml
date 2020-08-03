import QtQuick 2.0
import QtQuick.Window 2.2
import QtQuick.Controls 2.12
import QtQuick 2.9


Rectangle{
    color: "black"

    Rectangle
    {

       id: rect;
       property bool isBlue: true
       color: isBlue ? "blue" : "red";
       height: 33;
       width: 33;
       x : position
       Behavior on x { SmoothedAnimation { velocity: 200 } }
       y: 70;

       MouseArea
       {
           anchors.fill: parent
           onClicked:
           {
           rect.isBlue = !rect.isBlue
           }

      }

    }

}


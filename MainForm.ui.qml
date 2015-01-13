import QtQuick 2.4
import QtQuick.Controls 1.3
import QtQuick.Layouts 1.1

Item {
    width: 640
    height: 480

    property alias button3: button3
    property alias buttonPingGoogle: buttonPingGoogle
    property alias buttonTestPing: buttonTestPing

    RowLayout {
        anchors.centerIn: parent

        Button {
            id: buttonTestPing
            text: qsTr("Test Ping NeufBox")
        }

        Button {
            id: buttonPingGoogle
            text: qsTr("ping Google")
        }

        Button {
            id: button3
            text: qsTr("Press Me 3")
        }
    }
}

import QtQuick 2.7
import QtCharts 2.1
import QtQuick.Controls 2.1
import QtQuick.Controls.Styles 1.4
import QtQuick.Controls.Material 2.1
import QtQuick.Dialogs 1.2
import QtGraphicalEffects 1.0

ApplicationWindow {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    Button {
        onClicked: {
            dialog.open()
        }
    }

    FileDialog {
        id: dialog
        folder: shortcuts.home
        Component.onCompleted: {
            console.log("hi")
            console.log(folder)
        }
    }
}

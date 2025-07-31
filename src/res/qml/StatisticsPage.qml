import QtQuick 2.7
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.3
import ovras.advsettings 1.0
import "common"


MyStackViewPage {
    headerText: "統計資料"

    content: ColumnLayout {
        spacing: 18

        GridLayout {
            columns: 3

            MyText {
                text: "頭戴顯示器移動距離："
            }

            MyText {
                id: statsHmdMovedText
                text: "-00.0"
                Layout.fillWidth: true
                horizontalAlignment: Text.AlignRight
                Layout.rightMargin: 10
            }

            MyPushButton {
                text: "重設"
                onClicked: {
                    StatisticsTabController.statsDistanceResetClicked()
                }
            }

            MyText {
                text: "頭戴顯示器旋轉角度："
            }

            MyText {
                id: statsHmdRotationText
                text: "0.0 CCW"
                Layout.fillWidth: true
                horizontalAlignment: Text.AlignRight
                Layout.rightMargin: 10
            }

            MyPushButton {
                text: "重設"
                onClicked: {
                    StatisticsTabController.statsRotationResetClicked()
                }
            }

            MyText {
                text: "左控制器最大速度："
            }

            MyText {
                id: statsLeftControllerSpeedText
                text: "99.9 m/s"
                Layout.fillWidth: true
                horizontalAlignment: Text.AlignRight
                Layout.rightMargin: 10
            }

            MyPushButton {
                text: "重設"
                onClicked: {
                    StatisticsTabController.statsLeftControllerSpeedResetClicked()
                }
            }

            MyText {
                text: "右控制器最大速度："
            }

            MyText {
                id: statsRightControllerSpeedText
                text: "99.9 m/s"
                Layout.fillWidth: true
                horizontalAlignment: Text.AlignRight
                Layout.rightMargin: 10
            }

            MyPushButton {
                text: "重設"
                onClicked: {
                    StatisticsTabController.statsRightControllerSpeedResetClicked()
                }
            }
        }

        GridLayout {
            columns: 3
            Layout.topMargin: 32

            MyText {
                text: "輸出幀數："
            }

            MyText {
                id: statsPresentedFramesText
                text: "000"
                Layout.fillWidth: true
                horizontalAlignment: Text.AlignRight
                Layout.rightMargin: 10
            }

            MyPushButton {
                text: "重設"
                onClicked: {
                    StatisticsTabController.presentedFramesResetClicked()
                }
            }

            MyText {
                text: "遺失幀數："
            }

            MyText {
                id: statsDroppedFramesText
                text: "000"
                Layout.fillWidth: true
                horizontalAlignment: Text.AlignRight
                Layout.rightMargin: 10
            }

            MyPushButton {
                text: "重設"
                onClicked: {
                    StatisticsTabController.droppedFramesResetClicked()
                }
            }

            MyText {
                text: "重投影幀數："
            }

            MyText {
                id: statsReprojectionFramesText
                text: "000"
                Layout.fillWidth: true
                horizontalAlignment: Text.AlignRight
                Layout.rightMargin: 10
            }

            MyPushButton {
                text: "重設"
                onClicked: {
                    StatisticsTabController.reprojectedFramesResetClicked()
                }
            }

            MyText {
                text: "超時幀數："
            }

            MyText {
                id: statsTimedOutText
                text: "000"
                Layout.fillWidth: true
                horizontalAlignment: Text.AlignRight
                Layout.rightMargin: 10
            }

            MyPushButton {
                text: "重設"
                onClicked: {
                    StatisticsTabController.timedOutResetClicked()
                }
            }

            MyText {
                text: "重投影比例："
            }

            MyText {
                id: statstotalRatioText
                text: "0.0"
                Layout.fillWidth: true
                horizontalAlignment: Text.AlignRight
                Layout.rightMargin: 10
            }

            MyPushButton {
                text: "重設"
                onClicked: {
                    StatisticsTabController.totalRatioResetClicked()
                }
            }
        }
        Item {
            Layout.fillHeight: true
        }

        function updateStatistics() {
            statsHmdMovedText.text = StatisticsTabController.hmdDistanceMoved.toFixed(1) + " m"
            var rotations = StatisticsTabController.hmdRotations
            if (rotations > 0) {
                statsHmdRotationText.text = rotations.toFixed(2) + " CCW"
            } else {
                statsHmdRotationText.text = -rotations.toFixed(2) + " CW"
            }
            statsLeftControllerSpeedText.text = "    " + StatisticsTabController.leftControllerMaxSpeed.toFixed(1) + " m/s"
            statsRightControllerSpeedText.text = "    " + StatisticsTabController.rightControllerMaxSpeed.toFixed(1) + " m/s"
            statsPresentedFramesText.text = StatisticsTabController.presentedFrames
            statsDroppedFramesText.text = StatisticsTabController.droppedFrames
            statsReprojectionFramesText.text = StatisticsTabController.reprojectedFrames
            statsTimedOutText.text = StatisticsTabController.timedOut
            statstotalRatioText.text = (StatisticsTabController.totalReprojectedRatio*100.0).toFixed(1) + "%"
        }

        Timer {
            id: statisticsUpdateTimer
            repeat: true
            interval: 100
            onTriggered: {
                parent.updateStatistics()
            }
        }

        onVisibleChanged: {
            if (visible) {
                updateStatistics()
                statisticsUpdateTimer.start()
            } else {
                statisticsUpdateTimer.stop()
            }
        }

    }

}

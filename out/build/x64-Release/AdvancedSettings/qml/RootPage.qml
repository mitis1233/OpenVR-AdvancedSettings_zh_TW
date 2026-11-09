import QtQuick
import QtQuick.Controls
import QtQuick.Layouts
import ovras.advsettings
import "." // QTBUG-34418, singletons require explicit import to load qmldir file
import "common"
import "utilities_page"
import "audio_page"
import "video_page"

MyStackViewPage {
    id: rootPage
    headerText: qsTr("Home")

    // Every group box row on this page uses this height.
    readonly property int groupBoxRowHeight: 44
    headerShowBackButton: false
    stackView: mainView
    content: ColumnLayout {
        spacing: 8

        SettingsGroupBox {
            visible: false // Hide the Profiles section without removing its functionality.
            rowHeight: groupBoxRowHeight
            title: qsTr("Profiles")
            ColumnLayout {
                anchors.fill: parent
                spacing: 0

                RowLayout {
                    Layout.preferredHeight: groupBoxRowHeight
                    spacing: 12
                    MyText {
                        text: qsTr("Video Profile")
                        Layout.fillWidth: true
                    }
                    MyComboBox {
                        id: summaryVideoProfileComboBox
                        Layout.preferredWidth: 320
                        model: [""]
                        onCurrentIndexChanged: {
                            if (currentIndex > 0) {
                                summaryVideoProfileApplyButton.enabled = true
                            } else {
                                summaryVideoProfileApplyButton.enabled = false
                            }
                        }
                    }
                    MyPushButton {
                        id: summaryVideoProfileApplyButton
                        enabled: false
                        Layout.preferredWidth: 120
                        text: qsTr("Apply")
                        onClicked: {
                            if (summaryVideoProfileComboBox.currentIndex > 0) {
                                VideoTabController.applyVideoProfile(summaryVideoProfileComboBox.currentIndex - 1)
                                summaryVideoProfileComboBox.currentIndex = 0
                            }
                        }
                    }
                }

                LineSeparator {
                }

                RowLayout {
                    Layout.preferredHeight: groupBoxRowHeight
                    spacing: 12
                    MyText {
                        text: qsTr("Chaperone Profile")
                        Layout.fillWidth: true
                    }
                    MyComboBox {
                        id: summaryChaperoneProfileComboBox
                        Layout.preferredWidth: 320
                        model: [""]
                        onCurrentIndexChanged: {
                            if (currentIndex > 0) {
                                summaryChaperoneProfileApplyButton.enabled = true
                            } else {
                                summaryChaperoneProfileApplyButton.enabled = false
                            }
                        }
                    }
                    MyPushButton {
                        id: summaryChaperoneProfileApplyButton
                        enabled: false
                        Layout.preferredWidth: 120
                        text: qsTr("Apply")
                        onClicked: {
                            if (summaryChaperoneProfileComboBox.currentIndex > 0) {
                                ChaperoneTabController.applyChaperoneProfile(summaryChaperoneProfileComboBox.currentIndex - 1)
                                summaryChaperoneProfileComboBox.currentIndex = 0
                            }
                        }
                    }
                }
            }
        }

        SettingsGroupBox {
            visible: false // Hide the Stats section without removing its functionality.
            rowHeight: groupBoxRowHeight
            title: qsTr("Stats")
            ColumnLayout {
                anchors.fill: parent
                spacing: 0

                RowLayout {
                    Layout.preferredHeight: groupBoxRowHeight
                    spacing: 16
                    RowLayout {
                        Layout.fillWidth: true
                        Layout.preferredWidth: 1
                        MyText {
                            text: qsTr("Tracking Universe")
                            color: "#8b929a"
                        }
                        MyText {
                            id: summaryPlaySpaceModeText
                            Layout.fillWidth: true
                            horizontalAlignment: Text.AlignRight
                            text: qsTr("Unknown")
                        }
                    }
                    VerticalSeparator {
                    }
                    RowLayout {
                        Layout.fillWidth: true
                        Layout.preferredWidth: 1
                        MyText {
                            text: qsTr("HMD Rotations")
                            color: "#8b929a"
                        }
                        MyText {
                            id: summaryHmdRotationsText
                            Layout.fillWidth: true
                            horizontalAlignment: Text.AlignRight
                            text: "-999.9"
                        }
                    }
                }

                LineSeparator {
                }

                RowLayout {
                    Layout.preferredHeight: groupBoxRowHeight
                    spacing: 16
                    RowLayout {
                        Layout.fillWidth: true
                        Layout.preferredWidth: 1
                        MyText {
                            text: qsTr("Dropped Frames")
                            color: "#8b929a"
                        }
                        MyText {
                            id: summaryDroppedFramesText
                            Layout.fillWidth: true
                            horizontalAlignment: Text.AlignRight
                            text: "0"
                        }
                    }
                    VerticalSeparator {
                    }
                    RowLayout {
                        Layout.fillWidth: true
                        Layout.preferredWidth: 1
                        MyText {
                            text: qsTr("Reprojected Frames")
                            color: "#8b929a"
                        }
                        MyText {
                            id: summaryReprojectedFramesText
                            Layout.fillWidth: true
                            horizontalAlignment: Text.AlignRight
                            text: "0"
                        }
                    }
                }

                LineSeparator {
                }

                RowLayout {
                    Layout.preferredHeight: groupBoxRowHeight
                    spacing: 16
                    RowLayout {
                        Layout.fillWidth: true
                        Layout.preferredWidth: 1
                        MyText {
                            text: qsTr("Timed Out")
                            color: "#8b929a"
                        }
                        MyText {
                            id: summaryTimedOutText
                            Layout.fillWidth: true
                            horizontalAlignment: Text.AlignRight
                            text: "0"
                        }
                    }
                    VerticalSeparator {
                    }
                    RowLayout {
                        Layout.fillWidth: true
                        Layout.preferredWidth: 1
                        MyText {
                            text: qsTr("Reprojection Ratio")
                            color: "#8b929a"
                        }
                        MyText {
                            id: summaryTotalRatioText
                            Layout.fillWidth: true
                            horizontalAlignment: Text.AlignRight
                            text: "0"
                        }
                    }
                }
            }
        }

        SettingsGroupBox {
            rowHeight: groupBoxRowHeight
            title: qsTr("Brightness")
            ColumnLayout {
                anchors.fill: parent
                spacing: 0

                RowLayout {
                    Layout.preferredHeight: groupBoxRowHeight
                    spacing: 12
                    MyToggleButton {
                        id: summaryBrightnessToggle
                        text: qsTr("On/Off")
                        onCheckedChanged: {
                            VideoTabController.setBrightnessEnabled(this.checked, true)
                        }
                    }

                    Item {
                        Layout.preferredWidth: 150
                    }

                    MyText {
                        text: qsTr("Brightness")
                        horizontalAlignment: Text.AlignRight
                        Layout.rightMargin: 10
                    }

                    MySlider {
                        id: summaryBrightnessSlider
                        from: 0.2
                        to: 1.0
                        stepSize: 0.01
                        value: 1.0
                        Layout.fillWidth: true
                        onMoved: {
                            VideoTabController.setBrightnessOpacityValue(this.value.toFixed(2), true)
                        }
                    }

                    MyTextField {
                        id: summaryBrightnessValueText
                        text: "100%"
                        keyBoardUID: 901
                        Layout.preferredWidth: 100
                        Layout.leftMargin: 10
                        horizontalAlignment: Text.AlignHCenter
                        function onInputEvent(input) {
                            var val = parseFloat(input)
                            if (!isNaN(val)) {
                                if (val < 3) {
                                    val = 3
                                } else if (val > 100.0) {
                                    val = 100.0
                                }
                                var v = (val/100)
                                VideoTabController.setBrightnessOpacityValue(v.toFixed(2), true)
                            }
                            text = Math.round(VideoTabController.brightnessOpacityValue * 100) + "%"
                        }
                    }
                }
            }
        }

        SettingsGroupBox {
            rowHeight: groupBoxRowHeight
            title: qsTr("Pitch")
            ColumnLayout {
                anchors.fill: parent
                spacing: 0

                RowLayout {
                    Layout.preferredHeight: groupBoxRowHeight
                    spacing: 8
                    MyPushButton2 {
                        Layout.preferredWidth: 40
                        text: "0"
                        onClicked: {
                            MoveCenterTabController.offsetPitch = 0
                        }
                    }

                    MyPushButton2 {
                        Layout.preferredWidth: 40
                        text: "-"
                        onClicked: {
                            MoveCenterTabController.modOffsetPitch(-5)
                        }
                    }

                    MyTextField {
                        id: summaryPitchText
                        text: "0°"
                        keyBoardUID: 1102
                        Layout.preferredWidth: 140
                        horizontalAlignment: Text.AlignHCenter
                        function onInputEvent(input) {
                            var val = parseFloat(input)
                            if (!isNaN(val)) {
                                MoveCenterTabController.offsetPitch = val
                            }
                            text = Math.round(MoveCenterTabController.offsetPitch) + "°"
                        }
                    }

                    MyPushButton2 {
                        Layout.preferredWidth: 40
                        text: "+"
                        onClicked: {
                            MoveCenterTabController.modOffsetPitch(5)
                        }
                    }

                    // 這裡改成 MyPushButton 就會有跟其他按鈕一樣的深灰底框，且寬度加寬到 280 更好按
                    MyPushButton {
                        Layout.preferredWidth: 280
                        Layout.leftMargin: 12
                        text: qsTr("Front Calibrate")
                        onClicked: {
                            MoveCenterTabController.offsetPitch = -MoveCenterTabController.offsetPitch
                        }
                    }

                    Item {
                        Layout.fillWidth: true
                    }

                    // 補上足夠的寬度 (180)，讓「鎖定俯仰」四個字不會被截斷成「鎖...」
                    MyToggleButton {
                        id: summaryLockPitchToggle
                        Layout.preferredWidth: 180
                        text: qsTr("Lock Pitch")
                        onCheckedChanged: {
                            MoveCenterTabController.lockPitchToggle = this.checked
                        }
                    }
                }
            }
        }

        SettingsGroupBox {
            rowHeight: groupBoxRowHeight
            title: qsTr("Height Toggle / Gravity Floor Offset")
            ColumnLayout {
                anchors.fill: parent
                spacing: 0

                RowLayout {
                    Layout.preferredHeight: groupBoxRowHeight
                    spacing: 12
                    MyToggleButton {
                        id: summaryHeightToggleButton
                        text: qsTr("On/Off")
                        onCheckedChanged: {
                            MoveCenterTabController.heightToggle = this.checked
                        }
                    }

                    Item {
                        Layout.fillWidth: true
                    }

                    MyText {
                        text: qsTr("Height Offset (+ is down)")
                        horizontalAlignment: Text.AlignRight
                        Layout.rightMargin: 2
                    }

                    MyTextField {
                        id: summaryHeightToggleOffsetText
                        text: "-1.00"
                        keyBoardUID: 151
                        Layout.preferredWidth: 140
                        Layout.leftMargin: 10
                        Layout.rightMargin: 10
                        horizontalAlignment: Text.AlignHCenter
                        function onInputEvent(input) {
                            var val = parseFloat(input)
                            if (!isNaN(val)) {
                                MoveCenterTabController.heightToggleOffset = val.toFixed(2)
                                text = MoveCenterTabController.heightToggleOffset.toFixed(2)
                            } else {
                                text = MoveCenterTabController.heightToggleOffset.toFixed(2)
                            }
                        }
                    }

                    MyPushButton {
                        id: summaryHeightOffsetFromYOffsetButton
                        Layout.preferredWidth: 230
                        text: qsTr("Set From Y-Offset")
                        onClicked: {
                            MoveCenterTabController.heightToggleOffset = MoveCenterTabController.offsetY
                        }
                    }
                }
            }
        }

        SettingsGroupBox {
            rowHeight: groupBoxRowHeight
            title: qsTr("Gravity Settings")
            ColumnLayout {
                anchors.fill: parent
                spacing: 0

                MyToggleButton {
                    id: summaryGravityToggleButton
                    Layout.preferredHeight: groupBoxRowHeight
                    text: qsTr("Gravity")
                    Layout.fillWidth: true
                    Layout.rightMargin: 0
                    onCheckedChanged: {
                        MoveCenterTabController.gravityActive = this.checked
                    }
                }
                LineSeparator {
                }
                RowLayout {
                    Layout.preferredHeight: groupBoxRowHeight
                    spacing: 16
                    Layout.leftMargin: 32

                    MyText {
                        text: qsTr("Gravity Strength (+ is down)")
                        Layout.fillWidth: true
                        horizontalAlignment: Text.AlignLeft
                    }
                    MyTextField {
                        id: summaryGravityStrengthText
                        text: "9.80"
                        keyBoardUID: 152
                        Layout.preferredWidth: 120
                        horizontalAlignment: Text.AlignHCenter
                        function onInputEvent(input) {
                            var val = parseFloat(input)
                            if (!isNaN(val)) {
                                MoveCenterTabController.gravityStrength = val.toFixed(2)
                                text = MoveCenterTabController.gravityStrength.toFixed(2)
                            } else {
                                text = MoveCenterTabController.gravityStrength.toFixed(2)
                            }
                        }
                    }
                    MyPushButton {
                        id: summaryGravityMoonButton
                        Layout.preferredWidth: 110
                        text: qsTr("Moon")
                        onClicked: {
                            MoveCenterTabController.gravityStrength = 1.62
                        }
                    }
                    MyPushButton {
                        id: summaryGravityMarsButton
                        Layout.preferredWidth: 110
                        text: qsTr("Mars")
                        onClicked: {
                            MoveCenterTabController.gravityStrength = 3.71
                        }
                    }
                    MyPushButton {
                        id: summaryGravityEarthButton
                        Layout.preferredWidth: 110
                        text: qsTr("Earth")
                        onClicked: {
                            MoveCenterTabController.gravityStrength = 9.80
                        }
                    }
                    MyPushButton {
                        id: summaryGravityJupiterButton
                        Layout.preferredWidth: 110
                        text: qsTr("Jupiter")
                        onClicked: {
                            MoveCenterTabController.gravityStrength = 24.79
                        }
                    }
                }
                LineSeparator {
                }
                MyToggleButton {
                    id: summaryMomentumToggleButton
                    Layout.preferredHeight: groupBoxRowHeight
                    text: qsTr("Save Momentum")
                    Layout.fillWidth: true
                    Layout.leftMargin: 32
                    Layout.rightMargin: 0
                    onCheckedChanged: {
                        MoveCenterTabController.momentumSave = this.checked
                    }
                }
                LineSeparator {
                }
                RowLayout {
                    Layout.preferredHeight: groupBoxRowHeight
                    spacing: 16
                    Layout.leftMargin: 32

                    MyText {
                        text: qsTr("Friction")
                        horizontalAlignment: Text.AlignLeft
                    }
                    MyTextField {
                        id: summaryFrictionPercentText
                        text: "0%"
                        keyBoardUID: 156
                        Layout.preferredWidth: 120
                        horizontalAlignment: Text.AlignHCenter
                        function onInputEvent(input) {
                            var val = parseInt(input)
                            if (!isNaN(val)) {
                                if ( val > 999 )
                                {
                                    val = 999
                                }
                                if ( val < 0 )
                                {
                                    val = 0
                                }

                                MoveCenterTabController.frictionPercent = val
                                text = MoveCenterTabController.frictionPercent + "%"
                            } else {
                                text = MoveCenterTabController.frictionPercent + "%"
                            }
                        }
                    }
                    Item {
                        Layout.fillWidth: true
                    }
                    MyText {
                        text: qsTr("Fling Strength")
                        horizontalAlignment: Text.AlignLeft
                    }
                    MyTextField {
                        id: summaryFlingStrengthText
                        text: "1.0"
                        keyBoardUID: 153
                        Layout.preferredWidth: 120
                        horizontalAlignment: Text.AlignHCenter
                        function onInputEvent(input) {
                            var val = parseFloat(input)
                            if (!isNaN(val)) {
                                MoveCenterTabController.flingStrength = val.toFixed(2)
                                text = MoveCenterTabController.flingStrength.toFixed(2)
                            } else {
                                text = MoveCenterTabController.flingStrength.toFixed(2)
                            }
                        }
                    }
                    MyPushButton2 {
                        Layout.preferredWidth: 50
                        text: "1x"
                        onClicked: {
                            MoveCenterTabController.flingStrength = 1.0
                        }
                    }
                    MyPushButton2 {
                        Layout.preferredWidth: 50
                        text: "2x"
                        onClicked: {
                            MoveCenterTabController.flingStrength = 2.0
                        }
                    }
                    MyPushButton2 {
                        Layout.preferredWidth: 50
                        text: "3x"
                        onClicked: {
                            MoveCenterTabController.flingStrength = 3.0
                        }
                    }
                }
            }
        }

        SettingsGroupBox {
            rowHeight: groupBoxRowHeight
            title: qsTr("Microphone")
            ColumnLayout {
                anchors.fill: parent
                spacing: 0

                RowLayout {
                    Layout.preferredHeight: groupBoxRowHeight
                    spacing: 8
                    MyPushButton2 {
                        id: summaryMicMuteToggle
                        Layout.preferredWidth: 44
                        Layout.preferredHeight: 40
                        checkable: true
                        contentItem: Image {
                            source: parent.checked ? "qrc:/qt/qml/AdvancedSettings/img/audio/microphone/mic_off.svg" : "qrc:/qt/qml/AdvancedSettings/img/audio/microphone/mic_on.svg"
                            sourceSize.width: 26
                            sourceSize.height: 26
                            fillMode: Image.PreserveAspectFit
                        }
                        onCheckedChanged: {
                            AudioTabController.setMicMuted(checked)
                        }
                    }
                    MySlider {
                        id: summaryMicVolumeSlider
                        from: 0.0
                        to: 1.0
                        stepSize: 0.01
                        value: 1.0
                        Layout.fillWidth: true
                        onPositionChanged: {
                            var val = this.position * 100
                            summaryMicVolumeText.text = Math.round(val) + "%"
                        }
                        onValueChanged: {
                            AudioTabController.setMicVolume(this.value.toFixed(2))
                        }
                    }
                    MyText {
                        id: summaryMicVolumeText
                        text: "100%"
                        Layout.preferredWidth: 64
                        horizontalAlignment: Text.AlignRight
                    }
                }

                LineSeparator {
                }

                MyToggleButton {
                    id: summaryPttToggle
                    Layout.preferredHeight: groupBoxRowHeight
                    text: AudioTabController.micReversePtt ? qsTr("Push-to-Mute") : qsTr("Push-to-Talk")
                    Layout.fillWidth: true
                    onClicked: {
                         AudioTabController.setPttEnabled(checked, true)
                    }
                }
            }
        }

        Item {
            Layout.fillHeight: true
            Layout.fillWidth: true
        }

        RowLayout {
            spacing: 12

            Rectangle {
                id: summaryVersionCheckTextRect
                visible: true
                color: "transparent"
                radius: 3
                MyText {
                    id: summaryVersionCheckText
                    anchors.verticalCenter: parent.verticalCenter
                    text: ""
                    color: "#ffffff"
                    font.pointSize: 15
                    minimumPointSize: 10
                    fontSizeMode: Text.Fit
                    leftPadding: 12
                    rightPadding: 12
                    horizontalAlignment: Text.AlignLeft
                    width: parent.width
                    wrapMode: Text.Wrap
                }
                height: 36
                Layout.fillWidth: true
            }

            MyText {
                id: summaryVersionText
                text: "v0.0.0"
                font.pointSize: 13
                color: "#8b929a"
                horizontalAlignment: Text.AlignRight
            }
        }
    }

   Component.onCompleted: {
       reloadChaperoneProfiles()
       reloadVideoProfiles()

       summaryVersionText.text = applicationVersion
       summaryVersionCheckText.text = OverlayController.versionCheckText
       if (OverlayController.newVersionDetected)
       {
           summaryVersionCheckTextRect.color = "#c4372d"
       } else {
           summaryVersionCheckTextRect.color = "transparent"
       }


       if (MoveCenterTabController.trackingUniverse === 0) {
           summaryPlaySpaceModeText.text = qsTr("Sitting")
       } else if (MoveCenterTabController.trackingUniverse === 1) {
           summaryPlaySpaceModeText.text = qsTr("Standing")
       } else {
           summaryPlaySpaceModeText.text = qsTr("Unknown(%1)").arg(MoveCenterTabController.trackingUniverse)
       }
       updateStatistics()
       if (visible) {
           summaryUpdateTimer.start()
       }
       summaryMicVolumeSlider.value = AudioTabController.micVolume
       summaryMicMuteToggle.checked = AudioTabController.micMuted
       summaryPttToggle.checked = AudioTabController.pttEnabled

       var brightvalue = VideoTabController.brightnessOpacityValue
       summaryBrightnessSlider.value = brightvalue
       summaryBrightnessValueText.text = Math.round(brightvalue*100)+ "%"
       summaryBrightnessToggle.checked = VideoTabController.brightnessEnabled

       summaryHeightToggleButton.checked = MoveCenterTabController.heightToggle
       summaryHeightToggleOffsetText.text = MoveCenterTabController.heightToggleOffset.toFixed(2)

       summaryGravityToggleButton.checked = MoveCenterTabController.gravityActive
       summaryGravityStrengthText.text = MoveCenterTabController.gravityStrength.toFixed(2)
       summaryMomentumToggleButton.checked = MoveCenterTabController.momentumSave
       summaryFlingStrengthText.text = MoveCenterTabController.flingStrength.toFixed(2)
       summaryFrictionPercentText.text = MoveCenterTabController.frictionPercent + "%"

       summaryPitchText.text = Math.round(MoveCenterTabController.offsetPitch) + "°"
       summaryLockPitchToggle.checked = MoveCenterTabController.lockPitchToggle
   }
   Connections {
       target: OverlayController
       function onNewVersionDetectedChanged() {
           if (OverlayController.newVersionDetected)
           {
               summaryVersionCheckTextRect.color = "#c4372d"
           } else {
               summaryVersionCheckTextRect.color = "transparent"
           }
       }
       function onVersionCheckTextChanged() {
           summaryVersionCheckText.text = OverlayController.versionCheckText
       }
       function onDisableVersionCheckChanged() {
           if (OverlayController.disableVersionCheck)
           {
               summaryVersionCheckText.visible = false
               summaryVersionCheckTextRect.color = "transparent"
           } else {
               summaryVersionCheckText.visible = true
               if (OverlayController.newVersionDetected)
               {
                   summaryVersionCheckTextRect.color = "#c4372d"
               } else {
                   summaryVersionCheckTextRect.color = "transparent"
               }
           }
       }
   }

   Connections {
       target: ChaperoneTabController
       function onChaperoneProfilesUpdated() {
           reloadChaperoneProfiles()
       }
   }

   Connections {
       target: VideoTabController
       function onVideoProfilesUpdated() {
           reloadVideoProfiles()
       }
       function onBrightnessOpacityValueChanged() {
           var brightvalue = VideoTabController.brightnessOpacityValue
           summaryBrightnessSlider.value = brightvalue
           summaryBrightnessValueText.text = Math.round(brightvalue*100)+ "%"
       }
       function onBrightnessEnabledChanged() {
           summaryBrightnessToggle.checked = VideoTabController.brightnessEnabled
       }
   }

   Connections {
       target: AudioTabController
       function onMicVolumeChanged() {
           summaryMicVolumeSlider.value = AudioTabController.micVolume
       }
       function onMicMutedChanged() {
           summaryMicMuteToggle.checked = AudioTabController.micMuted
       }
       function onPttEnabledChanged() {
           summaryPttToggle.checked = AudioTabController.pttEnabled
       }
   }

   Connections {
       target: MoveCenterTabController
       function onTrackingUniverseChanged() {
           if (MoveCenterTabController.trackingUniverse === 0) {
               summaryPlaySpaceModeText.text = qsTr("Sitting")
           } else if (MoveCenterTabController.trackingUniverse === 1) {
               summaryPlaySpaceModeText.text = qsTr("Standing")
           } else {
               summaryPlaySpaceModeText.text = qsTr("Unknown(%1)").arg(MoveCenterTabController.trackingUniverse)
           }
       }
       function onHeightToggleChanged() {
           summaryHeightToggleButton.checked = MoveCenterTabController.heightToggle
       }
       function onHeightToggleOffsetChanged() {
           summaryHeightToggleOffsetText.text = MoveCenterTabController.heightToggleOffset.toFixed(2)
       }
       function onGravityActiveChanged() {
           summaryGravityToggleButton.checked = MoveCenterTabController.gravityActive
       }
       function onGravityStrengthChanged() {
           summaryGravityStrengthText.text = MoveCenterTabController.gravityStrength.toFixed(2)
       }
       function onMomentumSaveChanged() {
           summaryMomentumToggleButton.checked = MoveCenterTabController.momentumSave
       }
       function onFlingStrengthChanged() {
           summaryFlingStrengthText.text = MoveCenterTabController.flingStrength.toFixed(2)
       }
       function onFrictionPercentChanged() {
           summaryFrictionPercentText.text = MoveCenterTabController.frictionPercent + "%"
       }
       function onOffsetPitchChanged() {
           summaryPitchText.text = Math.round(MoveCenterTabController.offsetPitch) + "°"
       }
       function onRequireLockPitchChanged() {
           summaryLockPitchToggle.checked = MoveCenterTabController.lockPitchToggle
       }
   }


   function updateStatistics() {
       var rotations = StatisticsTabController.hmdRotations
       if (rotations > 0) {
           summaryHmdRotationsText.text = qsTr("%1 CCW").arg(rotations.toFixed(2))
       } else {
           summaryHmdRotationsText.text = qsTr("%1 CW").arg(-rotations.toFixed(2))
       }
       summaryDroppedFramesText.text = StatisticsTabController.droppedFrames
       summaryReprojectedFramesText.text = StatisticsTabController.reprojectedFrames
       summaryTimedOutText.text = StatisticsTabController.timedOut
       summaryTotalRatioText.text = (StatisticsTabController.totalReprojectedRatio*100.0).toFixed(1) + "%"
   }

   Timer {
       id: summaryUpdateTimer
       repeat: true
       interval: 100
       onTriggered: {
           parent.updateStatistics()
       }
   }

   onVisibleChanged: {
       if (visible) {
           updateStatistics()
           summaryUpdateTimer.start()
       } else {
           summaryUpdateTimer.stop()
       }
   }


    function reloadChaperoneProfiles() {
       var profiles = [""]
       var profileCount = ChaperoneTabController.getChaperoneProfileCount()
       for (var i = 0; i < profileCount; i++) {
           profiles.push(ChaperoneTabController.getChaperoneProfileName(i))
       }
       summaryChaperoneProfileComboBox.currentIndex = 0
       summaryChaperoneProfileComboBox.model = profiles
    }


    function reloadVideoProfiles() {
       var profiles = [""]
       var profileCount = VideoTabController.getVideoProfileCount()
       for (var i = 0; i < profileCount; i++) {
           profiles.push(VideoTabController.getVideoProfileName(i))
       }
       summaryVideoProfileComboBox.currentIndex = 0
       summaryVideoProfileComboBox.model = profiles
    }
}

import QtQuick 2.7
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.3
import ovras.advsettings 1.0
import "../../common"

MyDialogOkCancelPopup {
    id: audioDeleteProfileDialog
    dialogWidth: 600
    dialogHeight: 300
    y: -300
    x: 100
    property int profileIndex: -1
    dialogTitle: "刪除設定檔"
    dialogText: "您確定要刪除這個音訊設定檔嗎？"
    onClosed: {
        if (okClicked) {
            AudioTabController.deleteAudioProfile(profileIndex)
        }
    }
}

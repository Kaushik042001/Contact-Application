import QtQuick
import QtQuick.Window
import QtQuick.Controls 2.15



Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Contact Application")

    ListView {
        id: contactList
        width: 640
        height: 300
        x: 0
        y: 0
        model: contactsModel
        delegate: Item {
            width: 640
            height: 30
            x: 0
            y: 0


            Text {
                id: nameValue
                width: 100
                height: 25
                x: 30
                y: 0
                text: "Name: " + model.name
            }

            Text {
                id: phoneNumberValue
                width: 100
                height: 25
                x: 320
                y: 0
                text: "Phone Number: " + model.phoneNumber
            }
        }
    }

    Text {
        text: "Name:"
        width: 100
        height: 25
        x: 30
        y: 290

    }

    Text {
        text: "Phone Number:"
        width: 100
        height: 25
        x: 30
        y: 325
    }

    TextField {
        id: nameField
        width: 505
        height: 25
        x: 130
        y: 290
    }

    TextField {
        id: phoneNumberField
        width: 505
        height: 25
        x: 130
        y: 325
    }


    Button {
        id: addButton

        width: 640
        height: 25
        x: 0
        y: 370
        text: "Add Contact"
        onClicked: addContact()

    }

    Button {
        id: searchButton
        width: 640
        height: 25
        x: 0
        y: 405
        text: "Search Contact by Name"
        onClicked: searchContact()

    }

    Button {
        id: deleteButton
        width: 640
        height: 25
        x: 0
        y: 440
        text: "Delete Contact by Name"
        onClicked: deleteContact()

    }



    function addContact() {
        var name = nameField.text
        var phoneNumber = phoneNumberField.text
        // var contact = new Contact(name, phoneNumber)
        contactsModel.append({name : name, phoneNumber: phoneNumber})
        nameField.text = ""
        phoneNumberField.text = ""
    }

    function searchContact() {
        var nameToSearch = nameField.text
        for (var i = 0; i < contactsModel.count; i++) {
            if (contactsModel.get(i).name === nameToSearch) {
                contactList.currentIndex = i
                return
            }
        }
    }

    function deleteContact() {
        var nameToDelete = nameField.text
        for (var i = 0; i < contactsModel.count; i++) {
            if (contactsModel.get(i).name === nameToDelete) {
                contactsModel.remove(i)
                return
            }
        }
    }

    Component.onCompleted: {
        nameField.focus = true
    }

    ListModel {
        id: contactsModel
    }


}





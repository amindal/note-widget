import QtQuick
import QtQuick.Window

Window {
	width: screen.width * 0.25
	height: screen.height * 0.8
	x: screen.width - (width + 20)
	y: height * 0.1
	visible: true
	color: "teal"
	opacity: 0.5
	flags: Qt.FramelessWindowHint | Qt.NoDropShadowWindowHint
}

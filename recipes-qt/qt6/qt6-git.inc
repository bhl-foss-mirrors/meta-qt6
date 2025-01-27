DESCRIPTION ?= "Qt is a cross-platform application development framework for desktop, embedded and mobile."
HOMEPAGE ?= "https://www.qt.io"

QT_MODULE ?= "${BPN}"
QT_MODULE_BRANCH ?= "6.5"
QT_MODULE_BRANCH_PARAM ?= "branch=${QT_MODULE_BRANCH};nobranch=1"
QT_MODULE_REPO ?= "${QT_MODULE}.git"

SRC_URI = "${QT_GIT}/${QT_GIT_PROJECT}/${QT_MODULE_REPO};name=${QT_MODULE};${QT_MODULE_BRANCH_PARAM};protocol=${QT_GIT_PROTOCOL}"

CVE_PRODUCT:append = " qt"

S = "${WORKDIR}/git"

PV = "${QT_VERSION}"

SRCREV = "${SRCREV_${QT_MODULE}}"

SRCREV_tqtc-qmlcompilerplus = "4fdf9572064a213174f6119d647c1f1ced1f1782"
SRCREV_tqtc-qtinsighttracker = "92bea891bfdf5492a87b2bf6fc0842a4e629e354"
SRCREV_tqtc-qtvncserver = "64456d52ba6706d26b9a7a7c94965da2b8f7120f"
SRCREV_qt3d = "9bc4bc69e6ba5a989c31d31d029f7c015d6ad126"
SRCREV_qt3d-assimp = "5967dee48b0b8ed32a41579559570e380462a1dd"
SRCREV_qt5compat = "bcaaf19836ea770e7718e841637093c6408b033e"
SRCREV_qtbase = "d3ccc724d25a72945cc0872f6d916a29f274ee2b"
SRCREV_qtapplicationmanager = "3a2b2d3cef62c821e9ba720fdc714cad03de83a6"
SRCREV_qtcharts = "497601692d2550b943ec40851429a3ba3f881d3e"
SRCREV_qtcoap = "16250eec6edaba395fc291b1213a008076170ea5"
SRCREV_qtconnectivity = "2c63949c3aedf8dc5740d9445a574a3b11e69f1b"
SRCREV_qtdatavis3d = "97ef88345f5282e828123461034753213e0226e3"
SRCREV_qtdeclarative = "88faa0db8fa3402a696d9af13f294dbb86bcc33f"
SRCREV_qtdeviceutilities = "58d3a0cab88a3df78e868c252838ce9e724d96cd"
SRCREV_qtgrpc = "7971c103aeb3c47fe2aa719ca25cf0e3811d572b"
SRCREV_qthttpserver = "027a5a631a35e49b37d5be7d89be9c11cccdc356"
SRCREV_qtimageformats = "bb14176a7bc12fc0b0bdb1515adcbe0cce6ac0d1"
SRCREV_qtinterfaceframework = "ca900356d4629faf4df82fdf8d640cfbb5d3a980"
SRCREV_qtlanguageserver = "8f838ae3be9fa87790131c9566214aeef29dbd6d"
SRCREV_qtlocation = "9f84ccefa15e586c1bec7d6092775684fe6c348b"
SRCREV_qtlottie = "baec7d233eedbb7203740f923f1aca8e447cbf39"
SRCREV_qtmqtt = "ed16572ac4d441e23b51dccbb7b642b23be1342c"
SRCREV_qtmultimedia = "94e435d4f40ba12c0e1896e95f2a62b24f3f86d7"
SRCREV_qtnetworkauth = "0ef9db5c0a49ace1e58282ba8ab00918b2244e47"
SRCREV_qtopcua = "be8c82699123a9caf4a9adac7b8494866755e8d8"
SRCREV_qtpositioning = "b7136db27f789aac8ea3903405fb7fe2a8f3987b"
SRCREV_qtquick3d = "96c2437ea66e8b1daafb15fa1d6c1c47d295cc11"
SRCREV_qtquick3d-assimp = "fd7cd819e9e130385e17e707da31e60b82e787d0"
SRCREV_qtquick3dphysics = "1892b93c18559bd9b223b1a292d61aaed0ca5335"
SRCREV_qtquickdesigner-components = "04a5f670d3e7ae28e54bf194a3dd70e13d05ffc4"
SRCREV_qtquicktimeline = "e09f642cd421cebed979906abe2de17cefdd3429"
SRCREV_qtremoteobjects = "f2bd99335a7cbcb4284b6b8af7acaea17746b3ad"
SRCREV_qtscxml = "1bbb980754e2cef662fe86f3f6e6849a110c874d"
SRCREV_qtsensors = "9e3426eb9ce9a32de5d417efe6dbf191c444ae43"
SRCREV_qtserialbus = "7e1eb03308e47ab5f968fb123ebfe3dc09e7ba91"
SRCREV_qtserialport = "69bbce41556c706a5b10b2457b0f6fa1c5c7451e"
SRCREV_qtshadertools = "a5e83905d020c5a7c09c0e561a2c760f6465c94f"
SRCREV_qtspeech = "b13c9ce2886a3a029b46b3e8413ece90c4e198c8"
SRCREV_qtsvg = "eebccaf12c185740571e87c4f29e6f13e124b97c"
SRCREV_qttools = "43c3d110cef6e3e1f9b96d525de9b6b9cf6e7dba"
SRCREV_qttools-qlitehtml = "f05f78ef33225823d348ee18f2fa464e95024dd2"
SRCREV_qttools-qlitehtml-litehtml = "43af58e8adad70c4f1a0a9235546a246754c1737"
SRCREV_qttranslations = "e04803b9752e0893589a9f61acc71a4885fe5138"
SRCREV_qtvirtualkeyboard = "bedf2f3d48f70ad152d8c15b045bbe0185fc5bfe"
SRCREV_qtwayland = "b0645a428c35ad2ad792085fc500891f60c40f63"
SRCREV_qtwebchannel = "44873f1db6173818a0368ef4a31919f7f664dddd"
SRCREV_qtwebengine = "6b78aeb7fcd8891a74cd712aa791b62148cca081"
SRCREV_qtwebengine-chromium = "eb31082fcba2380e2cc5789aa707328050531e8d"
SRCREV_qtwebsockets = "f7f9fe827235dd2f87011cd0d5a21e23ac4de131"
SRCREV_qtwebview = "24645d93ed18108ddfb2cb89dd17690c57b9030c"

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    DepartmentView.cpp \
    DoctorView.cpp \
    LoginView.cpp \
    MainWindow.cpp \
    PatientEditView.cpp \
    PatientView.cpp \
    WelcomeView.cpp \
    idatabase.cpp \
    main.cpp

HEADERS += \
    DepartmentView.h \
    DoctorView.h \
    LoginView.h \
    MainWindow.h \
    PatientEditView.h \
    PatientView.h \
    WelcomeView.h \
    idatabase.h

FORMS += \
    DepartmentView.ui \
    DoctorView.ui \
    LoginView.ui \
    MainWindow.ui \
    PatientEditView.ui \
    PatientView.ui \
    WelcomeView.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    img.qrc

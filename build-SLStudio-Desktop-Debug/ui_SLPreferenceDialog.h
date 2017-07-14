/********************************************************************************
** Form generated from reading UI file 'SLPreferenceDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SLPREFERENCEDIALOG_H
#define UI_SLPREFERENCEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SLPreferenceDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *cameraLabel;
    QLabel *projectorLabel;
    QComboBox *cameraComboBox;
    QLabel *patternModeLabel;
    QComboBox *patternModeComboBox;
    QComboBox *projectorComboBox;
    QLabel *triggerModeLabel;
    QWidget *layoutWidget;
    QHBoxLayout *triggerModeLayout;
    QRadioButton *triggerHardwareRadioButton;
    QRadioButton *triggerSoftwareRadioButton;
    QLabel *writeToDiskLabel;
    QWidget *layoutWidget1;
    QHBoxLayout *shutterLayout;
    QLabel *shutterLabel;
    QDoubleSpinBox *shutterDoubleSpinBox;
    QLabel *delayMsLabel_2;
    QWidget *layoutWidget2;
    QHBoxLayout *triggerLayout;
    QHBoxLayout *shiftLayout;
    QLabel *shiftLabel;
    QSpinBox *shiftSpinBox;
    QHBoxLayout *delayLayout;
    QLabel *delayLabel;
    QSpinBox *delaySpinBox;
    QLabel *delayMsLabel;
    QWidget *layoutWidget3;
    QFormLayout *formLayout;
    QCheckBox *framesCheckBox;
    QCheckBox *pointCloudsCheckBox;
    QCheckBox *trackingCheckBox;
    QWidget *layoutWidget4;
    QHBoxLayout *diamondPatternLayout;
    QCheckBox *diamondPatternCheckBox;
    QLabel *aquisitionLabel;
    QWidget *layoutWidget_2;
    QHBoxLayout *aquisitionLayout;
    QRadioButton *aquisitioncontinuousRadioButton;
    QRadioButton *aquisitionSingleRadioButton;
    QWidget *layoutWidget_3;
    QHBoxLayout *patternModeLayout;
    QCheckBox *patternHorizontalCheckBox;
    QCheckBox *patternVerticalCheckBox;

    void setupUi(QDialog *SLPreferenceDialog)
    {
        if (SLPreferenceDialog->objectName().isEmpty())
            SLPreferenceDialog->setObjectName(QStringLiteral("SLPreferenceDialog"));
        SLPreferenceDialog->resize(362, 647);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SLPreferenceDialog->sizePolicy().hasHeightForWidth());
        SLPreferenceDialog->setSizePolicy(sizePolicy);
        buttonBox = new QDialogButtonBox(SLPreferenceDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(70, 600, 261, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        cameraLabel = new QLabel(SLPreferenceDialog);
        cameraLabel->setObjectName(QStringLiteral("cameraLabel"));
        cameraLabel->setGeometry(QRect(20, 280, 67, 17));
        projectorLabel = new QLabel(SLPreferenceDialog);
        projectorLabel->setObjectName(QStringLiteral("projectorLabel"));
        projectorLabel->setGeometry(QRect(20, 180, 131, 17));
        cameraComboBox = new QComboBox(SLPreferenceDialog);
        cameraComboBox->setObjectName(QStringLiteral("cameraComboBox"));
        cameraComboBox->setGeometry(QRect(20, 300, 321, 27));
        patternModeLabel = new QLabel(SLPreferenceDialog);
        patternModeLabel->setObjectName(QStringLiteral("patternModeLabel"));
        patternModeLabel->setGeometry(QRect(20, 80, 121, 17));
        patternModeComboBox = new QComboBox(SLPreferenceDialog);
        patternModeComboBox->setObjectName(QStringLiteral("patternModeComboBox"));
        patternModeComboBox->setGeometry(QRect(20, 100, 321, 27));
        projectorComboBox = new QComboBox(SLPreferenceDialog);
        projectorComboBox->setObjectName(QStringLiteral("projectorComboBox"));
        projectorComboBox->setGeometry(QRect(20, 200, 321, 27));
        triggerModeLabel = new QLabel(SLPreferenceDialog);
        triggerModeLabel->setObjectName(QStringLiteral("triggerModeLabel"));
        triggerModeLabel->setGeometry(QRect(20, 400, 121, 17));
        layoutWidget = new QWidget(SLPreferenceDialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 420, 261, 24));
        triggerModeLayout = new QHBoxLayout(layoutWidget);
        triggerModeLayout->setObjectName(QStringLiteral("triggerModeLayout"));
        triggerModeLayout->setContentsMargins(0, 0, 0, 0);
        triggerHardwareRadioButton = new QRadioButton(layoutWidget);
        triggerHardwareRadioButton->setObjectName(QStringLiteral("triggerHardwareRadioButton"));
        triggerHardwareRadioButton->setChecked(true);

        triggerModeLayout->addWidget(triggerHardwareRadioButton);

        triggerSoftwareRadioButton = new QRadioButton(layoutWidget);
        triggerSoftwareRadioButton->setObjectName(QStringLiteral("triggerSoftwareRadioButton"));

        triggerModeLayout->addWidget(triggerSoftwareRadioButton);

        writeToDiskLabel = new QLabel(SLPreferenceDialog);
        writeToDiskLabel->setObjectName(QStringLiteral("writeToDiskLabel"));
        writeToDiskLabel->setGeometry(QRect(20, 500, 131, 17));
        layoutWidget1 = new QWidget(SLPreferenceDialog);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(40, 340, 201, 29));
        shutterLayout = new QHBoxLayout(layoutWidget1);
        shutterLayout->setObjectName(QStringLiteral("shutterLayout"));
        shutterLayout->setContentsMargins(0, 0, 0, 0);
        shutterLabel = new QLabel(layoutWidget1);
        shutterLabel->setObjectName(QStringLiteral("shutterLabel"));
        shutterLabel->setEnabled(true);

        shutterLayout->addWidget(shutterLabel);

        shutterDoubleSpinBox = new QDoubleSpinBox(layoutWidget1);
        shutterDoubleSpinBox->setObjectName(QStringLiteral("shutterDoubleSpinBox"));
        shutterDoubleSpinBox->setDecimals(3);
        shutterDoubleSpinBox->setMaximum(999.99);

        shutterLayout->addWidget(shutterDoubleSpinBox);

        delayMsLabel_2 = new QLabel(layoutWidget1);
        delayMsLabel_2->setObjectName(QStringLiteral("delayMsLabel_2"));

        shutterLayout->addWidget(delayMsLabel_2);

        layoutWidget2 = new QWidget(SLPreferenceDialog);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(40, 450, 261, 31));
        triggerLayout = new QHBoxLayout(layoutWidget2);
        triggerLayout->setObjectName(QStringLiteral("triggerLayout"));
        triggerLayout->setContentsMargins(0, 0, 0, 0);
        shiftLayout = new QHBoxLayout();
        shiftLayout->setObjectName(QStringLiteral("shiftLayout"));
        shiftLabel = new QLabel(layoutWidget2);
        shiftLabel->setObjectName(QStringLiteral("shiftLabel"));

        shiftLayout->addWidget(shiftLabel);

        shiftSpinBox = new QSpinBox(layoutWidget2);
        shiftSpinBox->setObjectName(QStringLiteral("shiftSpinBox"));
        shiftSpinBox->setMinimum(0);

        shiftLayout->addWidget(shiftSpinBox);


        triggerLayout->addLayout(shiftLayout);

        delayLayout = new QHBoxLayout();
        delayLayout->setObjectName(QStringLiteral("delayLayout"));
        delayLabel = new QLabel(layoutWidget2);
        delayLabel->setObjectName(QStringLiteral("delayLabel"));
        delayLabel->setEnabled(true);

        delayLayout->addWidget(delayLabel);

        delaySpinBox = new QSpinBox(layoutWidget2);
        delaySpinBox->setObjectName(QStringLiteral("delaySpinBox"));
        delaySpinBox->setMaximum(9999);

        delayLayout->addWidget(delaySpinBox);

        delayMsLabel = new QLabel(layoutWidget2);
        delayMsLabel->setObjectName(QStringLiteral("delayMsLabel"));

        delayLayout->addWidget(delayMsLabel);


        triggerLayout->addLayout(delayLayout);

        layoutWidget3 = new QWidget(SLPreferenceDialog);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(40, 520, 286, 52));
        formLayout = new QFormLayout(layoutWidget3);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        framesCheckBox = new QCheckBox(layoutWidget3);
        framesCheckBox->setObjectName(QStringLiteral("framesCheckBox"));

        formLayout->setWidget(0, QFormLayout::LabelRole, framesCheckBox);

        pointCloudsCheckBox = new QCheckBox(layoutWidget3);
        pointCloudsCheckBox->setObjectName(QStringLiteral("pointCloudsCheckBox"));

        formLayout->setWidget(0, QFormLayout::FieldRole, pointCloudsCheckBox);

        trackingCheckBox = new QCheckBox(layoutWidget3);
        trackingCheckBox->setObjectName(QStringLiteral("trackingCheckBox"));

        formLayout->setWidget(1, QFormLayout::FieldRole, trackingCheckBox);

        layoutWidget4 = new QWidget(SLPreferenceDialog);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(40, 240, 251, 24));
        diamondPatternLayout = new QHBoxLayout(layoutWidget4);
        diamondPatternLayout->setObjectName(QStringLiteral("diamondPatternLayout"));
        diamondPatternLayout->setContentsMargins(0, 0, 0, 0);
        diamondPatternCheckBox = new QCheckBox(layoutWidget4);
        diamondPatternCheckBox->setObjectName(QStringLiteral("diamondPatternCheckBox"));
        diamondPatternCheckBox->setChecked(true);

        diamondPatternLayout->addWidget(diamondPatternCheckBox);

        aquisitionLabel = new QLabel(SLPreferenceDialog);
        aquisitionLabel->setObjectName(QStringLiteral("aquisitionLabel"));
        aquisitionLabel->setGeometry(QRect(20, 20, 121, 17));
        layoutWidget_2 = new QWidget(SLPreferenceDialog);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(40, 40, 271, 24));
        aquisitionLayout = new QHBoxLayout(layoutWidget_2);
        aquisitionLayout->setObjectName(QStringLiteral("aquisitionLayout"));
        aquisitionLayout->setContentsMargins(0, 0, 0, 0);
        aquisitioncontinuousRadioButton = new QRadioButton(layoutWidget_2);
        aquisitioncontinuousRadioButton->setObjectName(QStringLiteral("aquisitioncontinuousRadioButton"));
        aquisitioncontinuousRadioButton->setChecked(true);

        aquisitionLayout->addWidget(aquisitioncontinuousRadioButton);

        aquisitionSingleRadioButton = new QRadioButton(layoutWidget_2);
        aquisitionSingleRadioButton->setObjectName(QStringLiteral("aquisitionSingleRadioButton"));

        aquisitionLayout->addWidget(aquisitionSingleRadioButton);

        layoutWidget_3 = new QWidget(SLPreferenceDialog);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(40, 140, 261, 24));
        patternModeLayout = new QHBoxLayout(layoutWidget_3);
        patternModeLayout->setObjectName(QStringLiteral("patternModeLayout"));
        patternModeLayout->setContentsMargins(0, 0, 0, 0);
        patternHorizontalCheckBox = new QCheckBox(layoutWidget_3);
        patternHorizontalCheckBox->setObjectName(QStringLiteral("patternHorizontalCheckBox"));
        patternHorizontalCheckBox->setChecked(true);

        patternModeLayout->addWidget(patternHorizontalCheckBox);

        patternVerticalCheckBox = new QCheckBox(layoutWidget_3);
        patternVerticalCheckBox->setObjectName(QStringLiteral("patternVerticalCheckBox"));

        patternModeLayout->addWidget(patternVerticalCheckBox);

        layoutWidget->raise();
        layoutWidget->raise();
        layoutWidget->raise();
        layoutWidget->raise();
        layoutWidget->raise();
        buttonBox->raise();
        cameraLabel->raise();
        projectorLabel->raise();
        cameraComboBox->raise();
        patternModeLabel->raise();
        patternModeComboBox->raise();
        projectorComboBox->raise();
        triggerModeLabel->raise();
        writeToDiskLabel->raise();
        aquisitionLabel->raise();
        layoutWidget_2->raise();
        layoutWidget_3->raise();

        retranslateUi(SLPreferenceDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), SLPreferenceDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SLPreferenceDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(SLPreferenceDialog);
    } // setupUi

    void retranslateUi(QDialog *SLPreferenceDialog)
    {
        SLPreferenceDialog->setWindowTitle(QApplication::translate("SLPreferenceDialog", "Preferences", 0));
        cameraLabel->setText(QApplication::translate("SLPreferenceDialog", "Camera:", 0));
        projectorLabel->setText(QApplication::translate("SLPreferenceDialog", "Projector:", 0));
        patternModeLabel->setText(QApplication::translate("SLPreferenceDialog", "Pattern Mode:", 0));
        triggerModeLabel->setText(QApplication::translate("SLPreferenceDialog", "Trigger Mode:", 0));
        triggerHardwareRadioButton->setText(QApplication::translate("SLPreferenceDialog", "Hardware", 0));
        triggerSoftwareRadioButton->setText(QApplication::translate("SLPreferenceDialog", "Software", 0));
        writeToDiskLabel->setText(QApplication::translate("SLPreferenceDialog", "Write to disk:", 0));
        shutterLabel->setText(QApplication::translate("SLPreferenceDialog", "Shutter:", 0));
        delayMsLabel_2->setText(QApplication::translate("SLPreferenceDialog", "ms", 0));
        shiftLabel->setText(QApplication::translate("SLPreferenceDialog", "Shift:", 0));
        delayLabel->setText(QApplication::translate("SLPreferenceDialog", "Delay:", 0));
        delayMsLabel->setText(QApplication::translate("SLPreferenceDialog", "ms", 0));
        framesCheckBox->setText(QApplication::translate("SLPreferenceDialog", "Captured Frames", 0));
        pointCloudsCheckBox->setText(QApplication::translate("SLPreferenceDialog", "Point Clouds", 0));
        trackingCheckBox->setText(QApplication::translate("SLPreferenceDialog", "Tracking Data", 0));
        diamondPatternCheckBox->setText(QApplication::translate("SLPreferenceDialog", "Diamond Pixel Pattern", 0));
        aquisitionLabel->setText(QApplication::translate("SLPreferenceDialog", "Aquisition:", 0));
        aquisitioncontinuousRadioButton->setText(QApplication::translate("SLPreferenceDialog", "Continuous", 0));
        aquisitionSingleRadioButton->setText(QApplication::translate("SLPreferenceDialog", "Single Point Cloud", 0));
        patternHorizontalCheckBox->setText(QApplication::translate("SLPreferenceDialog", "Horizontal", 0));
        patternVerticalCheckBox->setText(QApplication::translate("SLPreferenceDialog", "Vertical", 0));
    } // retranslateUi

};

namespace Ui {
    class SLPreferenceDialog: public Ui_SLPreferenceDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SLPREFERENCEDIALOG_H

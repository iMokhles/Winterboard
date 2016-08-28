GO_EASY_ON_ME = 1

DEBUG = 0

THEOS_DEVICE_IP = 192.168.0.10

ARCHS = armv7 armv7s arm64

# change it to what you want :)
TARGET = iphone:clang:8.1:6.0

export ADDITIONAL_LDFLAGS = -Wl,-segalign,4000

THEOS_BUILD_DIR = Packages

include theos/makefiles/common.mk

TWEAK_NAME = WinterBoard
WinterBoard_FILES = WBMarkup.mm Library.mm 
WinterBoard_FRAMEWORKS = Foundation CoreFoundation CoreGraphics ImageIO UIKit
WinterBoard_PRIVATE_FRAMEWORKS = GraphicsServices WebKit WebCore
WinterBoard_LIBRARIES = substrate

BUNDLE_NAME = WinterBoardSettings
WinterBoardSettings_FILES = Settings.mm
WinterBoardSettings_FRAMEWORKS = Foundation CoreFoundation CoreGraphics UIKit
WinterBoardSettings_PRIVATE_FRAMEWORKS = Preferences
WinterBoardSettings_INSTALL_PATH = /System/Library/PreferenceBundles

TOOL_NAME = Optimize
Optimize_FILES = Optimize.cpp
Optimize_INSTALL_PATH = /usr/libexec/winterboard

include theos/makefiles/tweak.mk
include theos/makefiles/application.mk
include theos/makefiles/bundle.mk
include theos/makefiles/tool.mk


before-package::
	$(ECHO_NOTHING) mkdir -p $(THEOS_STAGING_DIR)/Library/Themes$(ECHO_END)
	$(ECHO_NOTHING) mkdir -p $(THEOS_STAGING_DIR)/Library/MobileSubstrate/DynamicLibraries$(ECHO_END)
	$(ECHO_NOTHING) mkdir -p $(THEOS_STAGING_DIR)/Library/PreferenceLoader/Preferences$(ECHO_END)
	$(ECHO_NOTHING) mkdir -p $(THEOS_STAGING_DIR)/System/Library/PreferenceBundles$(ECHO_END)
	$(ECHO_NOTHING) mkdir -p $(THEOS_STAGING_DIR)/usr/libexec/winterboard$(ECHO_END)
	$(ECHO_NOTHING) chmod 6755 $(THEOS_STAGING_DIR)/usr/libexec/winterboard/Optimize$(ECHO_END)
	$(ECHO_NOTHING) cp -a WinterBoardSettings.plist $(THEOS_STAGING_DIR)/Library/PreferenceLoader/Preferences$(ECHO_END)
	$(ECHO_NOTHING) cp -a WinterBoardSettings7.plist $(THEOS_STAGING_DIR)/Library/PreferenceLoader/Preferences$(ECHO_END)
	$(ECHO_NOTHING) cp -a WinterBoardSettings.bundle $(THEOS_STAGING_DIR)/System/Library/PreferenceBundles$(ECHO_END)
	$(ECHO_NOTHING) cp -a Icon-Small.png $(THEOS_STAGING_DIR)/System/Library/PreferenceBundles/WinterBoardSettings.bundle/icon.png$(ECHO_END)
	$(ECHO_NOTHING) cp -a Icon-Small@2x.png $(THEOS_STAGING_DIR)/System/Library/PreferenceBundles/WinterBoardSettings.bundle/icon@2x.png$(ECHO_END)
	$(ECHO_NOTHING) cp -a Icon-Small7.png $(THEOS_STAGING_DIR)/System/Library/PreferenceBundles/WinterBoardSettings.bundle/icon7.png$(ECHO_END)
	$(ECHO_NOTHING) cp -a Icon-Small7@2x.png $(THEOS_STAGING_DIR)/System/Library/PreferenceBundles/WinterBoardSettings.bundle/icon7@2x.png$(ECHO_END)
	$(ECHO_NOTHING) cp -a Icon-Small7@3x.png $(THEOS_STAGING_DIR)/System/Library/PreferenceBundles/WinterBoardSettings.bundle/icon7@3x.png$(ECHO_END)
	$(ECHO_NOTHING) cp -a SearchResultsCheckmarkClear.png $(THEOS_STAGING_DIR)/System/Library/PreferenceBundles/WinterBoardSettings.bundle$(ECHO_END)
	$(ECHO_NOTHING) cp -a *.theme $(THEOS_STAGING_DIR)/Library/Themes$(ECHO_END)
	$(ECHO_NOTHING) cp -a extrainst_ preinst prerm $(THEOS_STAGING_DIR)/DEBIAN$(ECHO_END)








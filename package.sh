#!/bin/bash

# WinterBoard - Theme Manager for the iPhone
# Copyright (C) 2008-2014  Jay Freeman (saurik)

# GNU Lesser General Public License, Version 3 {{{ */
#
# WinterBoard is free software: you can redistribute it and/or modify it under
# the terms of the GNU Lesser General Public License as published by the
# Free Software Foundation, either version 3 of the License, or (at your
# option) any later version.
#
# WinterBoard is distributed in the hope that it will be useful, but WITHOUT
# ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
# FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public
# License for more details.
#
# You should have received a copy of the GNU Lesser General Public License
# along with WinterBoard.  If not, see <http://www.gnu.org/licenses/>.
# }}}


set -e
rm -rf layout
mkdir -p layout/DEBIAN
mkdir -p layout/Library/Themes
mkdir -p layout/Library/MobileSubstrate/DynamicLibraries
mkdir -p layout/Library/PreferenceLoader/Preferences
mkdir -p layout/System/Library/PreferenceBundles
mkdir -p layout/usr/libexec/winterboard
cp -a Optimize /usr/libexec/winterboard
chmod 6755 /usr/libexec/winterboard/Optimize
cp -a WinterBoardSettings.plist /Library/PreferenceLoader/Preferences
cp -a WinterBoardSettings7.plist /Library/PreferenceLoader/Preferences
cp -a WinterBoardSettings.bundle /System/Library/PreferenceBundles
cp -a Icon-Small.png /System/Library/PreferenceBundles/WinterBoardSettings.bundle/icon.png
cp -a Icon-Small@2x.png /System/Library/PreferenceBundles/WinterBoardSettings.bundle/icon@2x.png
cp -a Icon-Small7.png /System/Library/PreferenceBundles/WinterBoardSettings.bundle/icon7.png
cp -a Icon-Small7@2x.png /System/Library/PreferenceBundles/WinterBoardSettings.bundle/icon7@2x.png
cp -a Icon-Small7@3x.png /System/Library/PreferenceBundles/WinterBoardSettings.bundle/icon7@3x.png
cp -a SearchResultsCheckmarkClear.png WinterBoardSettings /System/Library/PreferenceBundles/WinterBoardSettings.bundle
cp -a WinterBoard.dylib /Library/MobileSubstrate/DynamicLibraries
cp -a WinterBoard.plist /Library/MobileSubstrate/DynamicLibraries
cp -a *.theme /Library/Themes
find package -name .svn | while read -r line; do rm -rf "${line}"; done
cp -a extrainst_ preinst prerm /DEBIAN
sed -e "s/VERSION/$(./version.sh)/g" control >/DEBIAN/control
chown -R 0:0 package
file="winterboard_$(grep ^Version: /DEBIAN/control | cut -d ' ' -f 2)_iphoneos-arm.deb"; echo "$file"; ln -sf "$file" winterboard.deb
dpkg-deb -Zlzma -b package winterboard.deb

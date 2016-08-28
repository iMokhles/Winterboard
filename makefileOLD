cycc = cycc -i2.0 -o$@ -- $(filter %.mm,$^) -g0 -O2 -Werror -Iiphone-api -F/System/Library/PrivateFrameworks -Xarch_armv6 -marm

substrate := -I../substrate -L../substrate -lsubstrate

all: WinterBoard.dylib WinterBoardSettings Optimize

clean:
	rm -f WinterBoard.dylib WinterBoardSettings Optimize

WinterBoardSettings: Settings.mm makefile
	$(cycc) -std=c++11 -dynamiclib \
	    -framework UIKit \
	    -framework CoreFoundation \
	    -framework Foundation \
	    -framework CoreGraphics \
	    -framework Preferences \
	    -lobjc

WinterBoard.dylib: Library.mm WBMarkup.mm WBMarkup.h makefile ../substrate/substrate.h
	$(cycc) -std=c++11 -dynamiclib \
	    -framework CoreFoundation \
	    -framework Foundation \
	    -framework CoreGraphics \
	    -framework GraphicsServices \
	    -framework Celestial \
	    -framework UIKit \
	    -framework WebCore \
	    -framework WebKit \
	    -lobjc $(substrate)

Optimize: Optimize.cpp makefile
	$(cycc) $(filter %.cpp,$^)

package: all
	sudo ./package.sh

.PHONY: all clean package

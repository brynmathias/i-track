include Makefile.inc


CXXFLAGS = -std=c++11
LDFLAGS = -I/usr/local/include/opencv -I/usr/local/include/opencv2 -lm -lopencv_objdetect -lopencv_core -lopencv_highgui -lopencv_video -lopencv_imgproc -Iinclude

ALL = test_MultiThread

all: $(ALL)



clean:
	rm test_MultiThread

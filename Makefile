CXX = g++-4.7
CXXFLAGS = -std=c++11

LDFLAGS = -I/usr/local/include/opencv -lm -lopencv_core -lopencv_highgui -lopencv_video -lopencv_imgproc
ALL = test

all: $(ALL)



clean:
	rm test

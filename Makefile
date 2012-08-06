CC = g++-4.7
CFLAGS = -std=c++11
LDFLAGS = -I/usr/local/include/opencv -lm -lopencv_core -lopencv_highgui -lopencv_video -lopencv_imgproc
ALL = test

all: $(ALL)




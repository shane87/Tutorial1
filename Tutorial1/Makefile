CPPFLAGS_DEBUG := -g -Og
CPPFLAGS_NORMAL := -O2
CXX := g++
TARGET := Tutorial1
OBJS := Tutorial1.o functions.o
ldcmd := " LD  "
cxxcmd := " CXX "

ifeq ($(DEBUG),yes)
	CPPFLAGS := $(CPPFLAGS_DEBUG)
else
	CPPFLAGS := $(CPPFLAGS_NORMAL)
endif

$(TARGET): $(OBJS)
	@echo $(ldcmd) $(CPPFLAGS) $@
	@$(CXX) $(CPPFLAGS) $^ -o $@

%.o: %.cpp
	@echo $(cxxcmd) $(CPPFLAGS) $@
	@$(CXX) $(CPPFLAGS) -c $^ -o $@

.PHONY: clean
clean:
	rm -f $(TARGET) $(OBJS)

#  Copyright (c) 2010  Yukio Obuchi
# 
#   Permission is hereby granted, free of charge, to any person
#  obtaining a copy of this software and associated documentation files
#  (the "Software"), to deal in the Software without restriction,
#  including without limitation the rights to use, copy, modify, merge,
#  publish, distribute, sublicense, and/or sell copies of the Software,
#  and to permit persons to whom the Software is furnished to do so,
#  subject to the following conditions:
# 
#   The above copyright notice and this permission notice shall be
#  included in all copies or substantial portions of the Software.
# 
#   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
#  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
#  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
#  NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
#  BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
#  ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
#  CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
#  SOFTWARE.
PROJ_ROOT = ../..
TOOLDIR = $(PROJ_ROOT)/config/tools


CFLAGS   += -DSUPPORT_64BIT_VALUE
CFLAGS   += -Werror -Wall -O 
CXXFLAGS += $(CFLAGS)


CFLAGS   += -I$(PROJ_ROOT)/include

# for BOOST
CFLAGS   += -I/usr/local/include/boost_1_43_0
CFLAGS   += -DBOOST_TEST_DYN_LINK
LIBRARIES  += -L/usr/local/lib/boost_1_43_0 -lboost_unit_test_framework

SRCDIRS += $(PROJ_ROOT)/src/serializer
SRCDIRS += $(PROJ_ROOT)/src/tests

include $(TOOLDIR)/common.mk
include $(TOOLDIR)/gcc.mk

#LOG_LEVEL:=all
LOG_LEVEL:=error

.PHONY:run-test
run-test: all
	-@./build_Data/build --output_format=xml \
		--log_level=$(LOG_LEVEL) \
		--log_sink=log.xml \
		--report_sink=report.xml
	@xsltproc $(TOOLDIR)/report.xsl report.xml >report.html
	@xsltproc $(TOOLDIR)/log_convert.xsl log.xml

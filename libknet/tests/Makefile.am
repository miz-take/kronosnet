#
# Copyright (C) 2016 Red Hat, Inc.  All rights reserved.
#
# Authors: Fabio M. Di Nitto <fabbione@kronosnet.org>
#
# This software licensed under GPL-2.0+, LGPL-2.0+
#

MAINTAINERCLEANFILES	= Makefile.in

include $(top_srcdir)/build-aux/check.mk

AM_CPPFLAGS		= -I$(top_srcdir)/libknet \
			  -I$(top_srcdir)/common

LDADD			= $(top_builddir)/libknet/libknet.la

noinst_HEADERS		= \
			  test-common.h

check_PROGRAMS		= \
			  api_knet_handle_new \
			  api_knet_handle_free \
			  api_knet_host_add \
			  api_knet_host_remove \
			  timediff_test

noinst_PROGRAMS		= \
			  pckt_test \
			  ping_test \
			  $(check_PROGRAMS)

TESTS			= $(check_PROGRAMS)

api_knet_handle_new_SOURCES = api_knet_handle_new.c \
			      test-common.c

api_knet_handle_free_SOURCES = api_knet_handle_free.c \
			       test-common.c

api_knet_host_add_SOURCES = api_knet_host_add.c \
			    test-common.c

api_knet_host_remove_SOURCES = api_knet_host_remove.c \
			       ../../common/netutils.c \
			       test-common.c

ping_test_SOURCES	= ping_test.c

pckt_test_SOURCES	= pckt_test.c

timediff_test_SOURCES	= timediff_test.c
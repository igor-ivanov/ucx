#
# Copyright (C) UT-Battelle, LLC. 2014-2015. ALL RIGHTS RESERVED.
#
# See file LICENSE for terms.
#

SUBDIRS=

if BUILD_JEMALLOC
SUBDIRS += jemalloc
endif

# This is intentionally left empty. This will dev/null any attempt
# to do distcheck or distirbute anything in external
DIST_SUBDIRS=

# If you want to skip distcheck, but still package the 
# subdir, add it here
dist-hook:
	mkdir -p $(distdir)/jemalloc/
	cp -r $(srcdir)/jemalloc/* $(distdir)/jemalloc/

install:
if BUILD_JEMALLOC
	make -C jemalloc install_bin install_lib
endif

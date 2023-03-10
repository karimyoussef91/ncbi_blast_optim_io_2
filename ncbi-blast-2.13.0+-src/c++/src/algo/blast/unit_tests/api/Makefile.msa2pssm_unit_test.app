# $Id: Makefile.msa2pssm_unit_test.app 634439 2021-07-12 14:42:44Z ucko $

APP = msa2pssm_unit_test
SRC = msa2pssm_unit_test 

CPPFLAGS = -DNCBI_MODULE=BLAST $(ORIG_CPPFLAGS) $(BOOST_INCLUDE)
LIB = test_boost $(BLAST_LIBS) xobjsimple $(OBJMGR_LIBS:ncbi_x%=ncbi_x%$(DLL))
LIBS = $(NETWORK_LIBS) $(CMPRS_LIBS) $(DL_LIBS) $(BLAST_THIRD_PARTY_LIBS) $(ORIG_LIBS)
LDFLAGS = $(FAST_LDFLAGS)

CHECK_REQUIRES = MT in-house-resources
CHECK_CMD = msa2pssm_unit_test
CHECK_COPY = msa2pssm_unit_test.ini data

WATCHERS = boratyng madden camacho

# $IdPath$

TESTS += \
	src/arch/x86/tests/x86_test.sh

EXTRA_DIST += \
	src/arch/x86/tests/x86_test.sh		\
	src/arch/x86/tests/addbyte.asm		\
	src/arch/x86/tests/addbyte.errwarn	\
	src/arch/x86/tests/addbyte.hex		\
	src/arch/x86/tests/addrop.asm		\
	src/arch/x86/tests/addrop.errwarn	\
	src/arch/x86/tests/addrop.hex		\
	src/arch/x86/tests/addrop-err.asm	\
	src/arch/x86/tests/addrop-err.errwarn	\
	src/arch/x86/tests/cpubasic-err.asm	\
	src/arch/x86/tests/cpubasic-err.errwarn	\
	src/arch/x86/tests/div-err.asm		\
	src/arch/x86/tests/div-err.errwarn	\
	src/arch/x86/tests/effaddr.asm		\
	src/arch/x86/tests/effaddr.errwarn	\
	src/arch/x86/tests/effaddr.hex		\
	src/arch/x86/tests/genopcode.asm	\
	src/arch/x86/tests/genopcode.errwarn	\
	src/arch/x86/tests/genopcode.hex	\
	src/arch/x86/tests/lds-err.asm		\
	src/arch/x86/tests/lds-err.errwarn	\
	src/arch/x86/tests/loopadsz.asm		\
	src/arch/x86/tests/loopadsz.errwarn	\
	src/arch/x86/tests/loopadsz.hex		\
	src/arch/x86/tests/mem64-err.asm	\
	src/arch/x86/tests/mem64-err.errwarn	\
	src/arch/x86/tests/mem64.asm		\
	src/arch/x86/tests/mem64.errwarn	\
	src/arch/x86/tests/mem64.hex		\
	src/arch/x86/tests/negequ.asm		\
	src/arch/x86/tests/negequ.errwarn	\
	src/arch/x86/tests/negequ.hex		\
	src/arch/x86/tests/nomem64-err.asm	\
	src/arch/x86/tests/nomem64-err.errwarn	\
	src/arch/x86/tests/nomem64.asm		\
	src/arch/x86/tests/nomem64.errwarn	\
	src/arch/x86/tests/nomem64.hex		\
	src/arch/x86/tests/opersize.asm		\
	src/arch/x86/tests/opersize.errwarn	\
	src/arch/x86/tests/opersize.hex		\
	src/arch/x86/tests/opsize-err.asm	\
	src/arch/x86/tests/opsize-err.errwarn	\
	src/arch/x86/tests/ret.asm		\
	src/arch/x86/tests/ret.errwarn		\
	src/arch/x86/tests/ret.hex		\
	src/arch/x86/tests/segmov.asm		\
	src/arch/x86/tests/segmov.errwarn	\
	src/arch/x86/tests/segmov.hex		\
	src/arch/x86/tests/shift.asm		\
	src/arch/x86/tests/shift.errwarn	\
	src/arch/x86/tests/shift.hex		\
	src/arch/x86/tests/x86label.asm		\
	src/arch/x86/tests/x86label.errwarn	\
	src/arch/x86/tests/x86label.hex
SET(TOOLKIT TKTObj)

SET(TOOLKIT_MODULES
	TObj
)
SET(TOOLKIT_DEPENDS
	TKMath
	TKernel
	TKLCAF
	TKCDF
)

INCLUDE(../BuildToolkit.cmake)


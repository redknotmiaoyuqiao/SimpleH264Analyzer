add_executable(
        SimpleH264Analyzer
        CAVLC_Defines.h
        Configuration.h
        Configuration.cpp
        ErrorInfo.h
        Global.h
        Macroblock_Defines.h
        Macroblock.cpp
        Macroblock.h
        NALUnit.cpp
        NALUnit.h
        PicParamSet.cpp
        PicParamSet.h
        Residual.cpp
        Residual.h
        SeqParamSet.cpp
        SeqParamSet.h
        SliceHeader.cpp
        SliceHeader.h
        SliceStruct.cpp
        SliceStruct.h
        Stream.cpp
        Stream.h
        Utils.cpp
        Utils.h

        SimpleH264Analyzer.cpp
)

include_directories (../)

INSTALL(
        TARGETS SimpleH264Analyzer
        RUNTIME DESTINATION bin
        LIBRARY DESTINATION lib
        ARCHIVE DESTINATION lib
)
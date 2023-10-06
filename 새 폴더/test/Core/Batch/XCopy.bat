@echo off
setlocal
set "SrcDir=%1"
set "DestDir=%2"
:TargetFile -> Able Use Wild Characters [*]
set "TargetFile=%3"
set "ExcludeDir=%4"
echo ---XCopy------------------------------------------------------------------------
echo | Src : %SrcDir%
echo | Dest : %DestDir%
if "%TargetFile%"=="" (
    echo "|--- Copy!"
    xcopy "%SrcDir%" "%DestDir%" /f /h /c /s /d /y /i
) else (
    if "%ExcludeDir%"=="" (
        echo "|--- %TargetFile% Copy!"
        xcopy "%SrcDir%\%TargetFile%" "%DestDir%" /f /h /c /s /d /y /i
    ) else (
        echo |--- "%TargetFile% Copy! Exclude: %ExcludeDir%"
        xcopy "%SrcDir%\%TargetFile%" "%DestDir%" /exclude:%ExcludeDir% /f /h /c /s /d /y /i
    )
)
echo "--------------------------------------------------------------------------------"
endlocal
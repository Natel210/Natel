@echo off
setlocal
set "SrcDir=%1"
set "DestDir=%2"
:TargetFile -> Able Use Wild Characters [*]
set "TargetFile=%3"
set "ExcludeFile=%4"
echo ********************************************************************************
echo XCopy
echo ********************************************************************************
echo ***************************
echo Info
echo ***************************
echo ** Src     :  %SrcDir%
echo ** Dest    :  %DestDir%
if "%TargetFile%"=="" (
    echo ***************************
    echo Run
    xcopy "%SrcDir%" "%DestDir%" /f /h /c /s /d /y /i
    echo ***************************
) else (
    if "%ExcludeFile%"=="" (
        echo ** Target  :  %TargetFile%
        echo ***************************
        echo Run
        xcopy "%SrcDir%\%TargetFile%" "%DestDir%" /f /h /c /s /d /y /i
        echo ***************************
    ) else (
        echo ** Target  :  %TargetFile%
        echo ** Exclude :  %ExcludeFile%
        echo ***************************
        echo Run
        xcopy "%SrcDir%\%TargetFile%" "%DestDir%" /exclude:%ExcludeFile% /f /h /c /s /d /y /i
        echo ***************************
    )
)
echo ********************************************************************************
echo ********************************************************************************
endlocal
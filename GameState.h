#pragma once
typedef void (OnStart_func)();
typedef void (OnLoading_func)();
typedef void (OnFailure_func)();
typedef void (OnMainMenu_func)();
void OnStart(OnStart_func* onstart);
void OnLoading(OnLoading_func* onloading);
void OnFailure(OnFailure_func* onfailure);
void OnMainMenu(OnMainMenu_func* onmainmenu);

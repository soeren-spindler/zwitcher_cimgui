#pragma once

#ifdef __cplusplus
extern "C" {
#endif

bool igImpl_Win32_Init(void *hwnd);

void igImpl_Win32_Shutdown(void);

void igImpl_Win32_NewFrame(void);

void igImpl_Win32_EnableDpiAwareness(void);

float igImpl_Win32_GetDpiScaleForHwnd(void *hwnd); // HWND hwnd

float igImpl_Win32_GetDpiScaleForMonitor(void *monitor); // HMONITOR monitor

bool igImpl_Win32_WndProcHandler(void *hwnd, unsigned int msg, void *wParam, void *lParam);

bool igImpl_DX11_Init(void *device, void *device_context);

void igImpl_DX11_Shutdown(void);

void igImpl_DX11_NewFrame(void);

void igImpl_DX11_RenderDrawData(void *draw_data);

#ifdef __cplusplus
}
#endif

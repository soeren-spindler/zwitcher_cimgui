#pragma once

#ifdef __cplusplus
extern "C" {
#endif

bool ImGui_ImplWin32_Init(void *hwnd);

void ImGui_ImplWin32_Shutdown(void);

void ImGui_ImplWin32_NewFrame(void);

void ImGui_ImplWin32_EnableDpiAwareness(void);

float ImGui_ImplWin32_GetDpiScaleForHwnd(void *hwnd); // HWND hwnd

float ImGui_ImplWin32_GetDpiScaleForMonitor(void *monitor); // HMONITOR monitor


bool ImGui_ImplDX11_Init(void *device, void *device_context);

void ImGui_ImplDX11_Shutdown(void);

void ImGui_ImplDX11_NewFrame(void);

void ImGui_ImplDX11_RenderDrawData(void *draw_data);

#ifdef __cplusplus
}
#endif

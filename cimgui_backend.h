#pragma once

#ifdef __cplusplus
extern "C" {
#endif

bool igImGui_ImplWin32_Init(void* hwnd);
void igImGui_ImplWin32_Shutdown(void);
void igImGui_ImplWin32_NewFrame(void);

bool igImGui_ImplDX11_Init(void* device, void* device_context);
void igImGui_ImplDX11_Shutdown(void);
void igImGui_ImplDX11_NewFrame(void);
void igImGui_ImplDX11_RenderDrawData(void* draw_data);

#ifdef __cplusplus
}
#endif
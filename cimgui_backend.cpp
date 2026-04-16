#include <windows.h>
#include "backends/imgui_impl_dx11.h"
#include "backends/imgui_impl_win32.h"
#include "imgui.h"

extern LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

extern "C" {
/*
 * Win32
 */

bool igImGui_ImplWin32_Init(void *hwnd) { return ImGui_ImplWin32_Init(hwnd); }

void igImGui_ImplWin32_Shutdown(void) { ImGui_ImplWin32_Shutdown(); }

void igImGui_ImplWin32_NewFrame(void) { ImGui_ImplWin32_NewFrame(); }

void igImGui_ImplWin32_EnableDpiAwareness(void) { ImGui_ImplWin32_EnableDpiAwareness(); }

// HMONITOR monitor
float igImGui_ImplWin32_GetDpiScaleForMonitor(void *monitor) {
    return ImGui_ImplWin32_GetDpiScaleForMonitor(monitor);
}

float igImGui_ImplWin32_GetDpiScaleForHwnd(void *hwnd) {
    return ImGui_ImplWin32_GetDpiScaleForHwnd(hwnd);
}

bool igImGui_ImplWin32_WndProcHandler(void *hwnd, const unsigned int msg, void *wParam, void *lParam) {
    return ImGui_ImplWin32_WndProcHandler(static_cast<HWND>(hwnd), msg, reinterpret_cast<WPARAM>(wParam),
                                          reinterpret_cast<LPARAM>(lParam));
}

/*
 * DirectX 11
 */

bool igImGui_ImplDX11_Init(void *device, void *device_context) {
    return ImGui_ImplDX11_Init(static_cast<ID3D11Device *>(device),
                               static_cast<ID3D11DeviceContext *>(device_context));
}

void igImGui_ImplDX11_Shutdown(void) { ImGui_ImplDX11_Shutdown(); }

void igImGui_ImplDX11_NewFrame(void) { ImGui_ImplDX11_NewFrame(); }

void igImGui_ImplDX11_RenderDrawData(void *draw_data) {
    ImGui_ImplDX11_RenderDrawData(static_cast<ImDrawData *>(draw_data));
}
}

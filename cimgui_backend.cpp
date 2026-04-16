#include "backends/imgui_impl_dx11.h"
#include "backends/imgui_impl_win32.h"
#include "imgui.h"

extern "C" {
/*
 * Win32
 */

bool ImGui_ImplWin32_Init(void *hwnd) { return ImGui_ImplWin32_Init(hwnd); }

void ImGui_ImplWin32_Shutdown(void) { ImGui_ImplWin32_Shutdown(); }

void ImGui_ImplWin32_NewFrame(void) { ImGui_ImplWin32_NewFrame(); }

void ImGui_ImplWin32_EnableDpiAwareness(void) { ImGui_ImplWin32_EnableDpiAwareness(); }

// HMONITOR monitor
float ImGui_ImplWin32_GetDpiScaleForMonitor(void *monitor) {
    ImGui_ImplWin32_GetDpiScaleForMonitor(monitor);
}

// HWND hwnd
float ImGui_ImplWin32_GetDpiScaleForHwnd(void *hwnd) {
    return ImGui_ImplWin32_GetDpiScaleForHwnd(hwnd);
}

/*
 * DirectX 11
 */

bool ImGui_ImplDX11_Init(void *device, void *device_context) {
    return ImGui_ImplDX11_Init(static_cast<ID3D11Device *>(device),
                               static_cast<ID3D11DeviceContext *>(device_context));
}

void ImGui_ImplDX11_Shutdown(void) { ImGui_ImplDX11_Shutdown(); }

void ImGui_ImplDX11_NewFrame(void) { ImGui_ImplDX11_NewFrame(); }

void ImGui_ImplDX11_RenderDrawData(void *draw_data) {
    ImGui_ImplDX11_RenderDrawData((ImDrawData *) draw_data);
}
}

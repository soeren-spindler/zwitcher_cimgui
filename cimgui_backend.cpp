#include "backends/imgui_impl_dx11.h"
#include "backends/imgui_impl_win32.h"
#include "imgui.h"

extern "C" {
bool igImGui_ImplWin32_Init(void *hwnd) { return ImGui_ImplWin32_Init(hwnd); }

void igImGui_ImplWin32_Shutdown(void) { ImGui_ImplWin32_Shutdown(); }

void igImGui_ImplWin32_NewFrame(void) { ImGui_ImplWin32_NewFrame(); }

bool igImGui_ImplDX11_Init(void *device, void *device_context) {
    return ImGui_ImplDX11_Init(static_cast<ID3D11Device *>(device),
                               static_cast<ID3D11DeviceContext *>(device_context));
}

void igImGui_ImplDX11_Shutdown(void) { ImGui_ImplDX11_Shutdown(); }

void igImGui_ImplDX11_NewFrame(void) { ImGui_ImplDX11_NewFrame(); }

void igImGui_ImplDX11_RenderDrawData(void *draw_data) {
    ImGui_ImplDX11_RenderDrawData((ImDrawData *) draw_data);
}
}

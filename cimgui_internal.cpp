#include "imgui.h"
#include "imgui_internal.h"

extern "C" {
void igRenderTextEllipsis(ImDrawList *draw_list, const ImVec2 pos_min, const ImVec2 pos_max, float ellipsis_max_x,
                          const char *text, const char *text_end, const ImVec2 *text_size_if_known) {
    ImGui::RenderTextEllipsis(draw_list, pos_min, pos_max, ellipsis_max_x, text, text_end, text_size_if_known);
}
}

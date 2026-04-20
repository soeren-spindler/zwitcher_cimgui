#pragma once

#ifdef __cplusplus
extern "C" {
#endif

struct ImDrawList;
struct ImVec2;

void igRenderTextEllipsis(ImDrawList *draw_list, ImVec2 pos_min, ImVec2 pos_max, float ellipsis_max_x,
                          const char *text, const char *text_end, const ImVec2 *text_size_if_known);

#ifdef __cplusplus
}
#endif

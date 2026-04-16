const std = @import("std");

pub fn build(b: *std.Build) void {
    const target = b.standardTargetOptions(.{});
    const optimize = b.standardOptimizeOption(.{});

    const imgui_path = "imgui/";

    const root_module = b.addModule("cimgui", .{
        .root_source_file = b.path("src/root.zig"),
        .target = target,
        .optimize = optimize,
        .link_libc = true,
    });

    root_module.addIncludePath(b.path("."));
    root_module.addIncludePath(b.path(imgui_path));
    root_module.addIncludePath(b.path(imgui_path ++ "/backends/"));

    root_module.addCSourceFiles(.{
        .root = b.path(imgui_path),
        .files = &.{
            "imgui.cpp",
            "imgui_draw.cpp",
            "imgui_widgets.cpp",
            "imgui_tables.cpp",
            "imgui_demo.cpp",
            "backends/imgui_impl_dx11.cpp",
            "backends/imgui_impl_win32.cpp",
        },
        .flags = &[_][]const u8{
            "-std=c++17",
            "-fno-sanitize=undefined",
        },
    });

    root_module.addCSourceFiles(.{
        .root = b.path("."),
        .files = &.{
            "cimgui.cpp",
            // "cimgui_impl.cpp",
            "cimgui_backend.cpp",
        },
        .flags = &[_][]const u8{
            "-std=c++17",
            "-fno-sanitize=undefined",
        },
    });

    const library = b.addLibrary(.{
        .name = "zwitcher_cimgui",
        .linkage = .static,
        .root_module = root_module,
    });
    b.installArtifact(library);
}

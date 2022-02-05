#pragma once
#include <d3d9.h>

namespace gui
{
	// constant window size
	constexpr int WIDTH = 590; //500
	constexpr int HEIGHT = 360; // 330

	bool exit = true;

	// winapi window vars
	HWND window = nullptr;
	WNDCLASSEXA windowClass = { };

	// points for window movement
	POINTS position = { };

	// direct x state vars
	PDIRECT3D9 d3d = nullptr;
	LPDIRECT3DDEVICE9 device = nullptr;
	D3DPRESENT_PARAMETERS presentParameters = { };

	// handle window creation & destruction
	void CreateHWindow(
		const char* windowName,
		const char* className) noexcept;
	void DestroyHWindow() noexcept;

	// handle device creation & destruction
	bool CreateDevice() noexcept;
	void ResetDevice() noexcept;
	void DestroyDevice() noexcept;

	void Executor();

	// handle ImGui creation & destruction
	void CreateImGui() noexcept;
	void DestroyImGui() noexcept;

	void BeginRender() noexcept;
	void EndRender() noexcept;
	void Render() noexcept;


	bool loggedin = false;
	bool hideconsole = true;

}
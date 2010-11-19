/*
** Taiga, a lightweight client for MyAnimeList
** Copyright (C) 2010, Eren Okka
** 
** This program is free software: you can redistribute it and/or modify
** it under the terms of the GNU General Public License as published by
** the Free Software Foundation, either version 3 of the License, or
** (at your option) any later version.
** 
** This program is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
** GNU General Public License for more details.
** 
** You should have received a copy of the GNU General Public License
** along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef GFX_H
#define GFX_H

#include "std.h"

// =============================================================================

void Gdiplus_Initialize();
void Gdiplus_Shutdown();
HBITMAP Gdiplus_LoadImage(wstring file);
HBITMAP Gdiplus_LoadPNGResource(HINSTANCE hInstance, int nResource, LPCWSTR lpResourceType);

HFONT ChangeDCFont(HDC hdc, LPCWSTR lpFaceName, INT iSize, BOOL bBold, BOOL bItalic, BOOL bUnderline);
BOOL GradientRect(HDC hdc, const LPRECT lpRect, DWORD dwColor1, DWORD dwColor2, bool bVertical);
BOOL DrawProgressBar(HDC hdc, const LPRECT lpRect, DWORD dwColor1, DWORD dwColor2, DWORD dwColor3);

COLORREF BGR2RGB(COLORREF color);
COLORREF HexToARGB(LPCWSTR lpText);
int ScaleX(int value);
int ScaleY(int value);

#endif // GFX_H
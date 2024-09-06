#include "pch.h"
#include "ColoredMenu.h"

CColoredMenu::CColoredMenu() {}
CColoredMenu::~CColoredMenu() {}

void CColoredMenu::MeasureItem(LPMEASUREITEMSTRUCT lpMeasureItemStruct)
{
    // Set the height of the menu item
    lpMeasureItemStruct->itemHeight = 20;  // Customize as needed
}

void CColoredMenu::DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct)
{
    // Get the device context
    CDC dc;
    dc.Attach(lpDrawItemStruct->hDC);

    // Set the background color
    CBrush brush(RGB(255, 0, 0)); // Red color
    dc.FillRect(&lpDrawItemStruct->rcItem, &brush);

    // Set the text color
    dc.SetTextColor(RGB(255, 255, 0)); // Yellow color
    dc.SetBkMode(OPAQUE);

    // Draw the menu text
    CString strText;
    GetMenuString(lpDrawItemStruct->itemID, strText, MF_BYCOMMAND);

    dc.DrawText(strText, &lpDrawItemStruct->rcItem, DT_SINGLELINE | DT_VCENTER | DT_LEFT);

    // Draw focus rectangle if the item is selected
    if (lpDrawItemStruct->itemState & ODS_SELECTED)
    {
        dc.DrawFocusRect(&lpDrawItemStruct->rcItem);
    }

    dc.Detach();
}

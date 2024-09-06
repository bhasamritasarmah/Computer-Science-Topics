    #pragma once
    #include <afxwin.h>
    class CColoredMenu :
        public CMenu
    {
    public:
        CColoredMenu();
        virtual ~CColoredMenu();

        virtual void DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct);
        virtual void MeasureItem(LPMEASUREITEMSTRUCT lpMeasureItemStruct);
    };


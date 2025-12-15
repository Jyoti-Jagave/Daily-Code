#include <Windows.h> 

#define NR_ROWS     50 
#define NR_COLS     25

#pragma comment(lib, "user32.lib")
#pragma comment(lib, "gdi32.lib")
#pragma comment(lib, "kernel32.lib")

LRESULT CALLBACK WndProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam); 

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd)
{
    static TCHAR szClassName[] = TEXT("The standard window"); 
    static TCHAR szWindowTitle[] = TEXT("PAINTING DEMO 2"); 

    HWND hwnd = NULL; 

    WNDCLASSEX wnd; 
    MSG msg; 

    ZeroMemory(&wnd, sizeof(WNDCLASSEX)); 
    ZeroMemory(&msg, sizeof(MSG)); 

    wnd.cbSize = sizeof(WNDCLASSEX); 
    wnd.cbClsExtra = 0; 
    wnd.cbWndExtra = 0; 

    wnd.hbrBackground = (HBRUSH)GetStockObject(WHITE_BRUSH); 
    wnd.hCursor = LoadCursor((HINSTANCE)NULL, IDC_ARROW); 
    wnd.hIcon = LoadIcon((HINSTANCE)NULL, IDI_APPLICATION); 
    wnd.hIconSm = LoadIcon((HINSTANCE)NULL, IDI_APPLICATION); 
    wnd.hInstance = hInstance; 

    wnd.lpfnWndProc = WndProc; 
    wnd.lpszClassName = szClassName; 
    wnd.lpszMenuName = NULL; 
    wnd.style = CS_HREDRAW | CS_VREDRAW; 

    if(!RegisterClassEx(&wnd))
    {
        MessageBox(
            (HWND)NULL, 
            TEXT("Failed to register a window class"), 
            TEXT("RegisterClassEx"), 
            MB_ICONERROR | MB_TOPMOST
        ); 
        ExitProcess(EXIT_FAILURE); 
    }

    hwnd = CreateWindowEx(
        WS_EX_APPWINDOW, 
        szClassName, 
        szWindowTitle, 
        WS_OVERLAPPED | WS_CAPTION | WS_THICKFRAME | WS_SYSMENU | WS_MINIMIZEBOX | WS_MAXIMIZEBOX, 
        CW_USEDEFAULT, 
        CW_USEDEFAULT, 
        CW_USEDEFAULT, 
        CW_USEDEFAULT, 
        (HWND)NULL, 
        (HMENU)NULL, 
        hInstance, 
        (LPVOID)NULL
    ); 

    if(hwnd == NULL)
    {
        MessageBox(
            (HWND)NULL, 
            TEXT("Failed to create an application window"), 
            TEXT("CreateWindowEx"), 
            MB_ICONERROR | MB_TOPMOST
        ); 
        ExitProcess(EXIT_FAILURE); 
    }

    ShowWindow(hwnd, nShowCmd); 
    UpdateWindow(hwnd); 

    while(GetMessage(&msg, NULL, 0, 0))
    {
        TranslateMessage(&msg); 
        DispatchMessage(&msg); 
    }

    return ((int)msg.wParam); 
}

LRESULT CALLBACK WndProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
    static int cxScreen;    /* Width of window in pixels */ 
    static int cyScreen;    /* Height of window in pixels */

    static int cxChar;      /* Average character width of system font in pixels (small letters)*/
    static int cyChar;      /* Average character height of system font in pixels */
       
    static TCHAR szMessageOne[] = TEXT("Gurukul"); 
    
    int iLength_1; 
    int iRowCounter, iColumnCounter;  
    
    HDC hdc = NULL; 
    
    TEXTMETRIC tm; 
    PAINTSTRUCT ps; 

    switch(uMsg)
    {
        case WM_CREATE: 
            hdc = GetDC(hwnd); 
            GetTextMetrics(hdc, &tm); 
            ReleaseDC(hwnd, hdc); 
            cxChar = tm.tmAveCharWidth; 
            cyChar = tm.tmHeight + tm.tmExternalLeading; 
            break; 

        case WM_PAINT: 
            hdc = BeginPaint(hwnd, &ps); 
            iLength_1 = lstrlen(szMessageOne); 

            for(iRowCounter = 0; iRowCounter < NR_ROWS; ++iRowCounter)
                for(iColumnCounter = 0; iColumnCounter < NR_COLS; ++iColumnCounter)        
                    TextOut(
                        hdc, 
                        iColumnCounter * cxChar * (iLength_1 + 2), 
                        iRowCounter * cyChar, 
                        szMessageOne, 
                        iLength_1
                    ); 
                
        
            EndPaint(hwnd, &ps); 
            break; 

        case WM_SIZE: 
            cxScreen = LOWORD(lParam); 
            cyScreen = HIWORD(lParam); 
            break; 

        case WM_DESTROY: 
            PostQuitMessage(EXIT_SUCCESS); 
            break; 
    }
    
    return (DefWindowProc(hwnd, uMsg, wParam, lParam)); 
}





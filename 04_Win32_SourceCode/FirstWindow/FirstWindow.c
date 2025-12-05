#include <windows.h>

// Global callback function declaration
LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);

// Entry-Point Function
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR LpszCmdLine, int iCmdShow)
{
    //variable declarations
    WNDCLASSEX  wndclass;
    TCHAR       szAppName[] = TEXT("JMJ_Window");
    HWND        hwnd;
    MSG         msg;

    // code
    memset((void*)&wndclass, 0, sizeof(WNDCLASSEX));

    // Initializing Window Class
    wndclass.cbSize = sizeof(WNDCLASSEX);
    wndclass.style = CS_HREDRAW | CS_VREDRAW;
    wndclass.cbClsExtra = 0;
    wndclass.cbWndExtra = 0;
    wndclass.hInstance = hInstance;
    wndclass.hbrBackground = (HBRUSH)GetStockObject(WHITE_BRUSH);
    wndclass.hIcon = LoadIcon(NULL, IDI_APPLICATION);
    wndclass.hIconSm = LoadIcon(NULL, IDI_APPLICATION);
    wndclass.hCursor = LoadCursor(NULL, IDC_ARROW);
    wndclass.lpfnWndProc = WndProc;
    wndclass.lpszClassName = szAppName;
    wndclass.lpszMenuName = NULL;

    // Register the above Window Class
    RegisterClassEx(&wndclass);

    // Create the Window
    hwnd = CreateWindow(szAppName,
           TEXT("JMJ : My First Window"),
           WS_OVERLAPPEDWINDOW,
           CW_USEDEFAULT,
           CW_USEDEFAULT,
           CW_USEDEFAULT,
           CW_USEDEFAULT,
           NULL,
           NULL,
           hInstance,
           NULL);

    // Show the Window
    ShowWindow(hwnd, iCmdShow);

    // Update the window
    UpdateWindow(hwnd);

    // Message Loop
    while(GetMessage(&msg, NULL, 0, 0))
    {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    return((int)msg.wParam);

}

// Window Produre
LRESULT CALLBACK WndProc(HWND hwnd, UINT iMsg, WPARAM wParam, LPARAM lParam)
{
    // variable declarations

    // code
    switch (iMsg)
    {
    case WM_DESTROY:
         PostQuitMessage(0);
         break;
    default:
         break;
    }

    return(DefWindowProc(hwnd, iMsg, wParam, lParam));
}



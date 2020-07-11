#include<tchar.h>
#include<Windows.h>
#include<process.h>
#define qdo 262 
#define qre 294
#define qmi 330     //q????????1?????????s???????? 
#define qfa 349
#define qso 392
#define qla 440
#define qsi 494
#define do 523
#define re 578
#define mi 659
#define fa 698
#define so 784
#define la 880
#define si 988
#define do1 1046
#define re1 1175
#define mi1 1318
#define fa1 1480
#define so1 1568
#define la1 1760
#define si1 1976
#define sqdo 277
#define sqre 311
#define sqfa 370
#define sqso 415
#define sqla 466
#define sdo 554
#define sre 622
#define sfa 740
#define sso 831
#define sla 932
#define sdo1 1046
#define sre1 1245
#define sfa1 1480
#define sso1 1661
#define sla1 1865
int x, y;
HWND hwnd;
POINT point;
HDC hdc;
RECT rekt;
unsigned int _stdcall thd1 () {
	MessageBox(NULL,"Hello World!","lol",MB_OK|MB_ICONWARNING);
}
unsigned int _stdcall thd2 () {
	MessageBox(NULL,"Hello World!","lol",MB_OK|MB_ICONERROR);
}
unsigned int _stdcall thd3 () {
	MessageBox(NULL,"Hello World!","lol",MB_OK|MB_ICONINFORMATION);
}
unsigned int _stdcall thd4 () {
	while (1) {
	GetCursorPos(&point);
	DrawIcon(hdc,point.x,point.y,LoadIcon(NULL,IDI_WARNING));
	GetCursorPos(&point);
	DrawIcon(hdc,point.x,point.y,LoadIcon(NULL,IDI_INFORMATION));
	GetCursorPos(&point);
	DrawIcon(hdc,point.x,point.y,LoadIcon(NULL,IDI_ERROR));
	GetCursorPos(&point);
	DrawIcon(hdc,point.x,point.y,LoadIcon(NULL,IDI_QUESTION));
	GetCursorPos(&point);
	DrawIcon(hdc,point.x,point.y,LoadIcon(NULL,IDI_WINLOGO));
	}
}
unsigned int _stdcall thd5 () {
	while (1) {
	DrawIcon(hdc,rand()%x,rand()%y,LoadIcon(NULL,IDI_WARNING));
	Sleep(250);
	DrawIcon(hdc,rand()%x,rand()%y,LoadIcon(NULL,IDI_INFORMATION));
	Sleep(250);
	DrawIcon(hdc,rand()%x,rand()%y,LoadIcon(NULL,IDI_ERROR));
	Sleep(250);
	DrawIcon(hdc,rand()%x,rand()%y,LoadIcon(NULL,IDI_QUESTION));
	Sleep(250);
	DrawIcon(hdc,rand()%x,rand()%y,LoadIcon(NULL,IDI_WINLOGO));
	Sleep(250);
	}
}
unsigned int _stdcall thd6 () {
	int pai=400,ban=200;
int ting=128;
 
Sleep(1000);
 
Beep(la,ban);
Beep(si,ban);
Sleep(ting);
 
Beep(do1,pai+ban);
Beep(si,ban);
Sleep(ting);
Beep(do1,pai);
Sleep(ting);
Beep(mi1,pai);
Sleep(ting);
 
Beep(si,3*pai);
Sleep(ting);
Beep(mi,ban);
Beep(mi,ban);
 
Beep(la,ban+pai);
Beep(so,ban);
Sleep(ting);
Beep(la,pai);
Sleep(ting);
Beep(do1,pai);
Sleep(ting);
 
Beep(so,2*pai);
Sleep(ting);
Sleep(pai);
Beep(mi,ban);
Sleep(ting/2);
Beep(mi,ban);
Sleep(ting/2);
 
Beep(fa,pai+ban);
Beep(mi,ban);
Sleep(ting);
Beep(fa,ban);
Beep(do1,ban+pai);
Sleep(ting);
 
Beep(mi,2*pai);
Sleep(ting);
Sleep(ban);
Beep(do1,ban);
Sleep(ting/2);
Beep(do1,ban);
Sleep(ting/2);
Beep(do1,ban);
Sleep(ting/2);
 
Beep(si,ban+pai);
Beep(sfa,ban);
Sleep(ting);
Beep(sfa,pai);
Beep(si,pai);
Sleep(ting);
 
Beep(si,2*pai);
Sleep(ting);
Sleep(pai);
Beep(la,ban);
Beep(si,ban);
Sleep(ting);
 
Beep(do1,pai+ban);
Beep(si,ban);
Sleep(ting);
Beep(do1,pai);
Sleep(ting);
Beep(mi1,pai);
Sleep(ting);
 
Beep(si,2*pai);
Sleep(ting);
Sleep(pai);
Beep(mi,ban);
Sleep(20);
Beep(mi,ban);
Sleep(ting);
 
Beep(la,pai+ban);
Beep(so,ban);
Sleep(ting);
Beep(la,pai);
Sleep(ting);
Beep(do1,pai);
Sleep(ting);
 
Beep(so,3*pai);
Sleep(ting+ban);
Beep(mi,ban);
Sleep(ting/2);
 
Beep(fa,pai);
Sleep(ting);
Beep(do1,ban);
Beep(si,ban);
Sleep(20);
Beep(si,pai);
Sleep(ting);
Beep(do1,pai);
Sleep(ting);
 
Beep(re1,ban);
Sleep(20);
Beep(re1,ban);
Sleep(20);
Beep(mi1,ban);
Sleep(ting/2);
Beep(do1,pai);
Sleep(ting+pai);
 
Beep(do1,pai);
Beep(si,ban);
Sleep(ting);
Beep(la,ban);
Sleep(20);
Beep(la,ban);
Sleep(ting);
Beep(si,pai);
Sleep(ting);
Beep(sso,pai);
Sleep(ting);
 
Beep(sso,2*pai);
Sleep(ting+pai);
Beep(do1,ban);
Beep(re1,ban);
Sleep(ting);
 
Beep(mi1,pai+ban);
Beep(re1,ban);
Sleep(ting);
Beep(mi1,pai);
Sleep(ting);
Beep(fa1,pai);
Sleep(ting);
 
Beep(re1,2*pai);
Sleep(pai+ting);
Beep(so,ban);
Sleep(20);
Beep(so,ban);
Sleep(ting);
 
Beep(do1,ban);
Beep(si,ban);
Sleep(ting);
Beep(do1,pai);
Sleep(ting);
Beep(mi1,pai);
Sleep(ting);
 
Beep(mi1,2*pai);
Sleep(ting+2*pai);
 
Beep(la,ban);
Beep(si,ban);
Sleep(ting);
Beep(do1,pai);
Sleep(ting);
Beep(si,pai);
Sleep(ting);
Beep(re1,ban);
Sleep(20);
Beep(re1,ban);
Sleep(ting);
 
Beep(do1,pai+ban);
Beep(so,ban);
Sleep(20);
Beep(so,pai);
Sleep(pai+ting);
 
Beep(fa1,pai);
Sleep(ting);
Beep(mi1,pai);
Sleep(ting);
Beep(re1,pai);
Sleep(ting);
Beep(do1,pai);
Sleep(ting);
 
Beep(mi1,4*pai);
 
Beep(mi1,pai*2);
Sleep(pai+ting);
Beep(mi1,pai);
Sleep(ting);
 
Beep(la1,2*pai);
Sleep(ting);
Beep(so1,pai);
Sleep(ting);
Beep(so1,pai);
Sleep(ting);
 
Beep(mi1,ban);
Sleep(ting/2);
Beep(re1,ban);
Sleep(ting);
Beep(do1,pai);
Sleep(ting+ban);
Beep(do1,ban);
Sleep(ting);
 
Beep(re1,pai);
Sleep(ting);
Beep(do1,ban);
Beep(re1,ban);
Sleep(20);
Beep(re1,ban);
Sleep(ting);
Beep(so1,pai);
Sleep(ting);
 
Beep(mi1,2*pai);
Sleep(ting+pai);
Beep(mi,pai);
Sleep(ting);
 
Beep(la1,2*pai);
Sleep(ting);
Beep(so1,2*pai);
Sleep(ting);
 
Beep(mi1,ban);
Beep(re1,ban);
Sleep(ting);
Beep(do1,2*pai);
Sleep(ting+ban);
Beep(do1,ban);
Sleep(ting);
 
Beep(re1,pai);
Sleep(ting);
Beep(do1,ban);
Beep(re1,ban);
Sleep(20);
Beep(re1,ban);
Sleep(ting);
Beep(si,pai);
Sleep(ting);
 
Beep(la,2*pai);
Sleep(ting);
Beep(la,ban);
Beep(si,ban);
 
Beep(do1,pai+ban);
Beep(si,ban);
Sleep(ting);
Beep(do1,pai);
Sleep(ting);
Beep(mi1,pai);
Sleep(ting);
 
Beep(si,3*pai);
Sleep(ting);
Beep(mi,ban);
Beep(mi,ban);
 
Beep(la,ban+pai);
Beep(so,ban);
Sleep(ting);
Beep(la,pai);
Sleep(ting);
Beep(do1,pai);
Sleep(ting);
 
Beep(so,2*pai);
Sleep(ting);
Sleep(pai);
Beep(mi,ban);
Sleep(ting/2);
Beep(mi,ban);
Sleep(ting/2);
 
Beep(fa,pai+ban);
Beep(mi,ban);
Sleep(ting);
Beep(fa,ban);
Beep(do1,ban+pai);
Sleep(ting);
 
Beep(mi,2*pai);
Sleep(ting);
Sleep(ban);
Beep(do1,ban);
Sleep(ting/2);
Beep(do1,ban);
Sleep(ting/2);
Beep(do1,ban);
Sleep(ting/2);
 
Beep(si,ban+pai);
Beep(sfa,ban);
Sleep(ting);
Beep(sfa,pai);
Beep(si,pai);
Sleep(ting);
 
Beep(si,2*pai);
Sleep(ting);
Sleep(pai);
Beep(la,ban);
Beep(si,ban);
Sleep(ting);
 
Beep(do1,pai+ban);
Beep(si,ban);
Sleep(ting);
Beep(do1,pai);
Sleep(ting);
Beep(mi1,pai);
Sleep(ting);
 
Beep(si,2*pai);
Sleep(ting);
Sleep(pai);
Beep(mi,ban);
Sleep(20);
Beep(mi,ban);
Sleep(ting);
 
Beep(la,pai+ban);
Beep(so,ban);
Sleep(ting);
Beep(la,pai);
Sleep(ting);
Beep(do1,pai);
Sleep(ting);
 
Beep(so,3*pai);
Sleep(ting+ban);
Beep(mi,ban);
Sleep(ting/2);
 
Beep(fa,pai);
Sleep(ting);
Beep(do1,ban);
Beep(si,ban);
Sleep(20);
Beep(si,pai);
Sleep(ting);
Beep(do1,pai);
Sleep(ting);
 
Beep(re1,ban);
Sleep(20);
Beep(re1,ban);
Sleep(20);
Beep(mi1,ban);
Sleep(ting/2);
Beep(do1,pai);
Sleep(ting+pai);
 
Beep(la,4*pai);
}
int WINAPI WinMain(HINSTANCE hInstance,HINSTANCE hPrevInstance,LPSTR lpszArgument,int nCmdShow) {
	hwnd=FindWindow("ConsoleWindowClass",NULL);	
	if(hwnd) {
		ShowWindow(hwnd,SW_HIDE);
	}
	if(MessageBox(NULL, _T("本程序为恶搞程序\n可能会给您带来不便\n确认运行?"), _T("WARNING_WARNING_LEO_WARNING"), MB_YESNO|MB_ICONWARNING) != IDYES){
        return 0;
    }
	hwnd=GetDesktopWindow();
	hdc=GetWindowDC(hwnd);
	x = GetSystemMetrics(SM_CXSCREEN);
	y = GetSystemMetrics(SM_CYSCREEN);
	_beginthreadex(NULL, 0, thd4, NULL, 0, NULL);
	_beginthreadex(NULL, 0, thd5, NULL, 0, NULL);
	_beginthreadex(NULL, 0, thd6, NULL, 0, NULL);
	int i;
	for(i = 0; i < 25; i++) {
		_beginthreadex(NULL, 0, thd1, NULL, 0, NULL);
		hwnd=FindWindow(NULL,"lol");
		GetWindowRect(hwnd, &rekt);
		MoveWindow(FindWindow(NULL,"lol"),rand()%x,rand()%y,rekt.right-rekt.left,rekt.bottom-rekt.top,TRUE);
		Sleep(100);
		_beginthreadex(NULL, 0, thd2, NULL, 0, NULL);
		hwnd=FindWindow(NULL,"lol");
		GetWindowRect(hwnd, &rekt);
		MoveWindow(FindWindow(NULL,"lol"),rand()%x,rand()%y,rekt.right-rekt.left,rekt.bottom-rekt.top,TRUE);
		Sleep(100);
		_beginthreadex(NULL, 0, thd3, NULL, 0, NULL);
		hwnd=FindWindow(NULL,"lol");
		GetWindowRect(hwnd, &rekt);
		MoveWindow(FindWindow(NULL,"lol"),rand()%x,rand()%y,rekt.right-rekt.left,rekt.bottom-rekt.top,TRUE);
		Sleep(100);
		hwnd = GetDesktopWindow();
		hdc = GetWindowDC(hwnd);
		GetWindowRect(hwnd, &rekt);
		BitBlt(hdc, rand()%30, rand()%30, rekt.right, rekt.bottom, hdc, 0, 0, NOTSRCCOPY);
		BitBlt(hdc, rand()%x, rand()%y, x, y, hdc, rand()%x, rand()%y, NOTSRCCOPY);
	}
	hwnd = GetDesktopWindow();
	hdc = GetWindowDC(hwnd);
	GetWindowRect(hwnd, &rekt);
	StretchBlt(hdc, 0, y, x, -y, hdc, 0, 0, x, y, NOTSRCERASE);
	StretchBlt(hdc, x/40, y, x, -y, hdc, 0, 0, x, y, SRCCOPY);
	StretchBlt(hdc, 0, y, x, -y, hdc, 0, 0, x, y, NOTSRCERASE);
	StretchBlt(hdc, x/40, y, x, -y, hdc, 0, 0, x, y, SRCCOPY);
	StretchBlt(hdc, 0, y, x, -y, hdc, 0, 0, x, y, NOTSRCERASE);
	StretchBlt(hdc, x/40, y, x, -y, hdc, 0, 0, x, y, SRCCOPY);
	StretchBlt(hdc, 0, y, x, -y, hdc, 0, 0, x, y, NOTSRCERASE);
	StretchBlt(hdc, x/40, y, x, -y, hdc, 0, 0, x, y, SRCCOPY);
	StretchBlt(hdc, 0, y, x, -y, hdc, 0, 0, x, y, NOTSRCERASE);
	StretchBlt(hdc, x/40, y, x, -y, hdc, 0, 0, x, y, SRCCOPY);
	StretchBlt(hdc, 0, y, x, -y, hdc, 0, 0, x, y, NOTSRCERASE);
	StretchBlt(hdc, x/40, y, x, -y, hdc, 0, 0, x, y, SRCCOPY);
	StretchBlt(hdc, 0, y, x, -y, hdc, 0, 0, x, y, NOTSRCERASE);
	StretchBlt(hdc, x/40, y, x, -y, hdc, 0, 0, x, y, SRCCOPY);
	StretchBlt(hdc, 0, y, x, -y, hdc, 0, 0, x, y, NOTSRCERASE);
	StretchBlt(hdc, x/40, y, x, -y, hdc, 0, 0, x, y, SRCCOPY);
	StretchBlt(hdc, 0, y, x, -y, hdc, 0, 0, x, y, NOTSRCERASE);
	StretchBlt(hdc, x/40, y, x, -y, hdc, 0, 0, x, y, SRCCOPY);
	StretchBlt(hdc, 0, y, x, -y, hdc, 0, 0, x, y, NOTSRCERASE);
	StretchBlt(hdc, x/40, y, x, -y, hdc, 0, 0, x, y, SRCCOPY);
	StretchBlt(hdc, 0, y, x, -y, hdc, 0, 0, x, y, NOTSRCERASE);
	StretchBlt(hdc, x/40, y, x, -y, hdc, 0, 0, x, y, SRCCOPY);
	StretchBlt(hdc, 0, y, x, -y, hdc, 0, 0, x, y, NOTSRCERASE);
	StretchBlt(hdc, x/40, y, x, -y, hdc, 0, 0, x, y, SRCCOPY);
	StretchBlt(hdc, 0, y, x, -y, hdc, 0, 0, x, y, NOTSRCERASE);
	StretchBlt(hdc, x/40, y, x, -y, hdc, 0, 0, x, y, SRCCOPY);
	StretchBlt(hdc, 0, y, x, -y, hdc, 0, 0, x, y, NOTSRCERASE);
	StretchBlt(hdc, x/40, y, x, -y, hdc, 0, 0, x, y, SRCCOPY);
	StretchBlt(hdc, 0, y, x, -y, hdc, 0, 0, x, y, NOTSRCERASE);
	StretchBlt(hdc, x/40, y, x, -y, hdc, 0, 0, x, y, SRCCOPY);
	StretchBlt(hdc, 0, y, x, -y, hdc, 0, 0, x, y, NOTSRCERASE);
	StretchBlt(hdc, x/40, y, x, -y, hdc, 0, 0, x, y, SRCCOPY);
	StretchBlt(hdc, 0, y, x, -y, hdc, 0, 0, x, y, NOTSRCERASE);
	StretchBlt(hdc, x/40, y, x, -y, hdc, 0, 0, x, y, SRCCOPY);
	StretchBlt(hdc, 0, y, x, -y, hdc, 0, 0, x, y, NOTSRCERASE);
	StretchBlt(hdc, x/40, y, x, -y, hdc, 0, 0, x, y, SRCCOPY);
	StretchBlt(hdc, 0, y, x, -y, hdc, 0, 0, x, y, NOTSRCERASE);
	StretchBlt(hdc, x/40, y, x, -y, hdc, 0, 0, x, y, SRCCOPY);
	StretchBlt(hdc, 0, y, x, -y, hdc, 0, 0, x, y, NOTSRCERASE);
	StretchBlt(hdc, x/40, y, x, -y, hdc, 0, 0, x, y, SRCCOPY);
	COLORREF color;
	int m, n, p, q, a, b;
	int j;
	int f;
	for (f = 0; f < 50; f++) {
		color = RGB(rand()%255,rand()%255,rand()%255);
		m = rand()%(x);
		n = rand()%(y);
		p = rand()%(x-m);
		q = rand()%(y-n);
		for (i = m; i <= (p+m); i = i + 2) {
			for (j = n; j <= (q+n); j = j + 2) {
				SetPixel(hdc, i, j, color);
			}
		}
		color = RGB(rand()%255,rand()%255,rand()%255);
		m = rand()%(x);
		n = rand()%(y);
		p = rand()%(x-m);
		q = rand()%(y-n);
		for (i = n; i <= (q+n); i = i + 2) {
			for (j = m; j <= (p+m); j = j + 2) {
				SetPixel(hdc, j, i, color);
			}
		}
	}
	for (i = 0; i < 25; i++) {
		hwnd = GetDesktopWindow();
		hdc = GetWindowDC(hwnd);
		GetWindowRect(hwnd, &rekt);
		StretchBlt(hdc, 0, y, x, -y, hdc, 0, 0, x, y, SRCCOPY);
		Sleep(250);
	}
	system("start https://space.bilibili.com/490825280");
	MessageBox(NULL,"体验结束!不妨来个三连吧!\n感谢使用本程序!","LEO",MB_OK|MB_ICONWARNING);
	return 0;
}

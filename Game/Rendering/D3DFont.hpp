






#ifndef D3DFONT_H
#define D3DFONT_H
#include <tchar.h>
#include <D3D9.h>



#define D3DFONT_BOLD        0x0001
#define D3DFONT_ITALIC      0x0002
#define D3DFONT_ZENABLE     0x0004


#define D3DFONT_CENTERED_X  0x0001
#define D3DFONT_CENTERED_Y  0x0002
#define D3DFONT_TWOSIDED    0x0004
#define D3DFONT_FILTERED    0x0008
#define D3DFONT_BORDER		0x0010
#define D3DFONT_COLORTABLE	0x0020






class CD3DFont
{
	TCHAR   m_strFontName[80];            
	DWORD   m_dwFontHeight;
	DWORD   m_dwFontFlags;

	LPDIRECT3DDEVICE9       m_pd3dDevice; 
	LPDIRECT3DTEXTURE9      m_pTexture;   
	LPDIRECT3DVERTEXBUFFER9 m_pVB;        
	DWORD   m_dwTexWidth;                 
	DWORD   m_dwTexHeight;
	FLOAT   m_fTextScale;
	FLOAT   m_fTexCoords[256 - 32][4];
	DWORD   m_dwSpacing;                  

	
	LPDIRECT3DSTATEBLOCK9 m_pStateBlockSaved;
	LPDIRECT3DSTATEBLOCK9 m_pStateBlockDrawText;

public:
	
	HRESULT DrawText(FLOAT x, FLOAT y, DWORD dwColor, const WCHAR* strText, DWORD dwFlags = 0L);

	
	HRESULT GetTextExtent(const WCHAR* strText, SIZE* pSize);

	
	HRESULT InitDeviceObjects(LPDIRECT3DDEVICE9 pd3dDevice);
	HRESULT RestoreDeviceObjects();
	HRESULT InvalidateDeviceObjects();
	HRESULT DeleteDeviceObjects();

	LPDIRECT3DDEVICE9 getDevice() const { return m_pd3dDevice; }
	
	CD3DFont(const TCHAR* strFontName, DWORD dwHeight, DWORD dwFlags = 0L);
	~CD3DFont();
};

#endif
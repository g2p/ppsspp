#pragma once

#ifdef _XBOX
#include <xtl.h>
// Used on XBox to create a linear format
// TODO: Might actually want to use nonlinear on xbox?
#define D3DFMT(x)	(D3DFORMAT)MAKELINFMT(x)
#else
#define D3DFMT(x) x
#endif

#include <d3d9.h>
#include <d3dx9.h>

extern LPDIRECT3DDEVICE9 pD3Ddevice;

extern LPDIRECT3DVERTEXSHADER9      pFramebufferVertexShader; // Vertex Shader
extern LPDIRECT3DPIXELSHADER9       pFramebufferPixelShader;  // Pixel Shader

extern IDirect3DVertexDeclaration9* pFramebufferVertexDecl;
extern IDirect3DVertexDeclaration9* pSoftVertexDecl;

bool CompilePixelShader(const char * code, LPDIRECT3DPIXELSHADER9 * pShader, LPD3DXCONSTANTTABLE * pShaderTable);
bool CompileVertexShader(const char * code, LPDIRECT3DVERTEXSHADER9 * pShader, LPD3DXCONSTANTTABLE * pShaderTable);

#define D3DBLEND_UNK	D3DSTENCILOP_FORCE_DWORD
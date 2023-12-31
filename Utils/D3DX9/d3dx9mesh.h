








#include "d3dx9.h"

#ifndef __D3DX9MESH_H__
#define __D3DX9MESH_H__


DEFINE_GUID(IID_ID3DXBaseMesh, 
0x7ed943dd, 0x52e8, 0x40b5, 0xa8, 0xd8, 0x76, 0x68, 0x5c, 0x40, 0x63, 0x30);


DEFINE_GUID(IID_ID3DXMesh, 
0x4020e5c2, 0x1403, 0x4929, 0x88, 0x3f, 0xe2, 0xe8, 0x49, 0xfa, 0xc1, 0x95);


DEFINE_GUID(IID_ID3DXPMesh, 
0x8875769a, 0xd579, 0x4088, 0xaa, 0xeb, 0x53, 0x4d, 0x1a, 0xd8, 0x4e, 0x96);


DEFINE_GUID(IID_ID3DXSPMesh, 
0x667ea4c7, 0xf1cd, 0x4386, 0xb5, 0x23, 0x7c, 0x2, 0x90, 0xb8, 0x3c, 0xc5);


DEFINE_GUID(IID_ID3DXSkinInfo, 
0x11eaa540, 0xf9a6, 0x4d49, 0xae, 0x6a, 0xe1, 0x92, 0x21, 0xf7, 0xc, 0xc4);


DEFINE_GUID(IID_ID3DXPatchMesh, 
0x3ce6cc22, 0xdbf2, 0x44f4, 0x89, 0x4d, 0xf9, 0xc3, 0x4a, 0x33, 0x71, 0x39);


typedef enum _D3DXPATCHMESHTYPE {
    D3DXPATCHMESH_RECT   = 0x001,
    D3DXPATCHMESH_TRI    = 0x002,
    D3DXPATCHMESH_NPATCH = 0x003,

    D3DXPATCHMESH_FORCE_DWORD    = 0x7fffffff,
} D3DXPATCHMESHTYPE;


enum _D3DXMESH {
    D3DXMESH_32BIT                  = 0x001, 
    D3DXMESH_DONOTCLIP              = 0x002, 
    D3DXMESH_POINTS                 = 0x004, 
    D3DXMESH_RTPATCHES              = 0x008, 
    D3DXMESH_NPATCHES               = 0x4000,
    D3DXMESH_VB_SYSTEMMEM           = 0x010, 
    D3DXMESH_VB_MANAGED             = 0x020, 
    D3DXMESH_VB_WRITEONLY           = 0x040, 
    D3DXMESH_VB_DYNAMIC             = 0x080, 
    D3DXMESH_VB_SOFTWAREPROCESSING = 0x8000, 
    D3DXMESH_IB_SYSTEMMEM           = 0x100, 
    D3DXMESH_IB_MANAGED             = 0x200, 
    D3DXMESH_IB_WRITEONLY           = 0x400, 
    D3DXMESH_IB_DYNAMIC             = 0x800, 
    D3DXMESH_IB_SOFTWAREPROCESSING= 0x10000, 

    D3DXMESH_VB_SHARE               = 0x1000, 

    D3DXMESH_USEHWONLY              = 0x2000, 

    
    D3DXMESH_SYSTEMMEM              = 0x110, 
    D3DXMESH_MANAGED                = 0x220, 
    D3DXMESH_WRITEONLY              = 0x440, 
    D3DXMESH_DYNAMIC                = 0x880, 
    D3DXMESH_SOFTWAREPROCESSING   = 0x18000, 

};


enum _D3DXPATCHMESH {
    D3DXPATCHMESH_DEFAULT = 000,
};

enum _D3DXMESHSIMP
{
    D3DXMESHSIMP_VERTEX   = 0x1,
    D3DXMESHSIMP_FACE     = 0x2,

};

typedef enum _D3DXCLEANTYPE {
	D3DXCLEAN_BACKFACING	= 0x00000001,
	D3DXCLEAN_BOWTIES		= 0x00000002,
	
	
	D3DXCLEAN_SKINNING		= D3DXCLEAN_BACKFACING,	
	D3DXCLEAN_OPTIMIZATION	= D3DXCLEAN_BACKFACING,
	D3DXCLEAN_SIMPLIFICATION= D3DXCLEAN_BACKFACING | D3DXCLEAN_BOWTIES,	
} D3DXCLEANTYPE;

enum _MAX_FVF_DECL_SIZE
{
    MAX_FVF_DECL_SIZE = MAXD3DDECLLENGTH + 1 
};

typedef enum _D3DXTANGENT
{
    D3DXTANGENT_WRAP_U =                    0x01,
    D3DXTANGENT_WRAP_V =                    0x02,
    D3DXTANGENT_WRAP_UV =                   0x03,
    D3DXTANGENT_DONT_NORMALIZE_PARTIALS =   0x04,
    D3DXTANGENT_DONT_ORTHOGONALIZE =        0x08,
    D3DXTANGENT_ORTHOGONALIZE_FROM_V =      0x010,
    D3DXTANGENT_ORTHOGONALIZE_FROM_U =      0x020,
    D3DXTANGENT_WEIGHT_BY_AREA =            0x040,
    D3DXTANGENT_WEIGHT_EQUAL =              0x080,
    D3DXTANGENT_WIND_CW =                   0x0100,
    D3DXTANGENT_CALCULATE_NORMALS =         0x0200,
    D3DXTANGENT_GENERATE_IN_PLACE =         0x0400,
} D3DXTANGENT;




typedef enum _D3DXIMT
{
    D3DXIMT_WRAP_U =                    0x01,
    D3DXIMT_WRAP_V =                    0x02,
    D3DXIMT_WRAP_UV =                   0x03,
} D3DXIMT;





typedef enum _D3DXUVATLAS
{
    D3DXUVATLAS_DEFAULT               = 0x00,
    D3DXUVATLAS_GEODESIC_FAST         = 0x01,
    D3DXUVATLAS_GEODESIC_QUALITY      = 0x02,
} D3DXUVATLAS;

typedef struct ID3DXBaseMesh *LPD3DXBASEMESH;
typedef struct ID3DXMesh *LPD3DXMESH;
typedef struct ID3DXPMesh *LPD3DXPMESH;
typedef struct ID3DXSPMesh *LPD3DXSPMESH;
typedef struct ID3DXSkinInfo *LPD3DXSKININFO;
typedef struct ID3DXPatchMesh *LPD3DXPATCHMESH;
typedef interface ID3DXTextureGutterHelper *LPD3DXTEXTUREGUTTERHELPER;
typedef interface ID3DXPRTBuffer *LPD3DXPRTBUFFER;


typedef struct _D3DXATTRIBUTERANGE
{
    DWORD AttribId;
    DWORD FaceStart;
    DWORD FaceCount;
    DWORD VertexStart;
    DWORD VertexCount;
} D3DXATTRIBUTERANGE;

typedef D3DXATTRIBUTERANGE* LPD3DXATTRIBUTERANGE;

typedef struct _D3DXMATERIAL
{
    D3DMATERIAL9  MatD3D;
    LPSTR         pTextureFilename;
} D3DXMATERIAL;
typedef D3DXMATERIAL *LPD3DXMATERIAL;

typedef enum _D3DXEFFECTDEFAULTTYPE
{
    D3DXEDT_STRING = 0x1,       
    D3DXEDT_FLOATS = 0x2,       
    D3DXEDT_DWORD  = 0x3,       

    D3DXEDT_FORCEDWORD = 0x7fffffff
} D3DXEFFECTDEFAULTTYPE;

typedef struct _D3DXEFFECTDEFAULT
{
    LPSTR                 pParamName;
    D3DXEFFECTDEFAULTTYPE Type;           
    DWORD                 NumBytes;       
    LPVOID                pValue;         
} D3DXEFFECTDEFAULT, *LPD3DXEFFECTDEFAULT;

typedef struct _D3DXEFFECTINSTANCE
{
    LPSTR               pEffectFilename;
    DWORD               NumDefaults;
    LPD3DXEFFECTDEFAULT pDefaults;
} D3DXEFFECTINSTANCE, *LPD3DXEFFECTINSTANCE;

typedef struct _D3DXATTRIBUTEWEIGHTS
{
    FLOAT Position;
    FLOAT Boundary;
    FLOAT Normal;
    FLOAT Diffuse;
    FLOAT Specular;
    FLOAT Texcoord[8];
    FLOAT Tangent;
    FLOAT Binormal;
} D3DXATTRIBUTEWEIGHTS, *LPD3DXATTRIBUTEWEIGHTS;

enum _D3DXWELDEPSILONSFLAGS
{
    D3DXWELDEPSILONS_WELDALL             = 0x1,  

    D3DXWELDEPSILONS_WELDPARTIALMATCHES  = 0x2,  
                                                    
                                                    
    D3DXWELDEPSILONS_DONOTREMOVEVERTICES = 0x4,  
                                                    
                                                    

    D3DXWELDEPSILONS_DONOTSPLIT          = 0x8,  
                                                    
                                                    

};

typedef struct _D3DXWELDEPSILONS
{
    FLOAT Position;                 
                                            
    FLOAT BlendWeights;
    FLOAT Normal;
    FLOAT PSize;
    FLOAT Specular;
    FLOAT Diffuse;
    FLOAT Texcoord[8];
    FLOAT Tangent;
    FLOAT Binormal;
    FLOAT TessFactor;
} D3DXWELDEPSILONS;

typedef D3DXWELDEPSILONS* LPD3DXWELDEPSILONS;


#undef INTERFACE
#define INTERFACE ID3DXBaseMesh

DECLARE_INTERFACE_(ID3DXBaseMesh, IUnknown)
{
    
    STDMETHOD(QueryInterface)(THIS_ REFIID iid, LPVOID *ppv) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;

    
    STDMETHOD(DrawSubset)(THIS_ DWORD AttribId) PURE;
    STDMETHOD_(DWORD, GetNumFaces)(THIS) PURE;
    STDMETHOD_(DWORD, GetNumVertices)(THIS) PURE;
    STDMETHOD_(DWORD, GetFVF)(THIS) PURE;
    STDMETHOD(GetDeclaration)(THIS_ D3DVERTEXELEMENT9 Declaration[MAX_FVF_DECL_SIZE]) PURE;
    STDMETHOD_(DWORD, GetNumBytesPerVertex)(THIS) PURE;
    STDMETHOD_(DWORD, GetOptions)(THIS) PURE;
    STDMETHOD(GetDevice)(THIS_ LPDIRECT3DDEVICE9* ppDevice) PURE;
    STDMETHOD(CloneMeshFVF)(THIS_ DWORD Options, 
                DWORD FVF, LPDIRECT3DDEVICE9 pD3DDevice, LPD3DXMESH* ppCloneMesh) PURE;
    STDMETHOD(CloneMesh)(THIS_ DWORD Options, 
                CONST D3DVERTEXELEMENT9 *pDeclaration, LPDIRECT3DDEVICE9 pD3DDevice, LPD3DXMESH* ppCloneMesh) PURE;
    STDMETHOD(GetVertexBuffer)(THIS_ LPDIRECT3DVERTEXBUFFER9* ppVB) PURE;
    STDMETHOD(GetIndexBuffer)(THIS_ LPDIRECT3DINDEXBUFFER9* ppIB) PURE;
    STDMETHOD(LockVertexBuffer)(THIS_ DWORD Flags, LPVOID *ppData) PURE;
    STDMETHOD(UnlockVertexBuffer)(THIS) PURE;
    STDMETHOD(LockIndexBuffer)(THIS_ DWORD Flags, LPVOID *ppData) PURE;
    STDMETHOD(UnlockIndexBuffer)(THIS) PURE;
    STDMETHOD(GetAttributeTable)(
                THIS_ D3DXATTRIBUTERANGE *pAttribTable, DWORD* pAttribTableSize) PURE;

    STDMETHOD(ConvertPointRepsToAdjacency)(THIS_ CONST DWORD* pPRep, DWORD* pAdjacency) PURE;
    STDMETHOD(ConvertAdjacencyToPointReps)(THIS_ CONST DWORD* pAdjacency, DWORD* pPRep) PURE;
    STDMETHOD(GenerateAdjacency)(THIS_ FLOAT Epsilon, DWORD* pAdjacency) PURE;

    STDMETHOD(UpdateSemantics)(THIS_ D3DVERTEXELEMENT9 Declaration[MAX_FVF_DECL_SIZE]) PURE;
};


#undef INTERFACE
#define INTERFACE ID3DXMesh

DECLARE_INTERFACE_(ID3DXMesh, ID3DXBaseMesh)
{
    
    STDMETHOD(QueryInterface)(THIS_ REFIID iid, LPVOID *ppv) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;

    
    STDMETHOD(DrawSubset)(THIS_ DWORD AttribId) PURE;
    STDMETHOD_(DWORD, GetNumFaces)(THIS) PURE;
    STDMETHOD_(DWORD, GetNumVertices)(THIS) PURE;
    STDMETHOD_(DWORD, GetFVF)(THIS) PURE;
    STDMETHOD(GetDeclaration)(THIS_ D3DVERTEXELEMENT9 Declaration[MAX_FVF_DECL_SIZE]) PURE;
    STDMETHOD_(DWORD, GetNumBytesPerVertex)(THIS) PURE;
    STDMETHOD_(DWORD, GetOptions)(THIS) PURE;
    STDMETHOD(GetDevice)(THIS_ LPDIRECT3DDEVICE9* ppDevice) PURE;
    STDMETHOD(CloneMeshFVF)(THIS_ DWORD Options, 
                DWORD FVF, LPDIRECT3DDEVICE9 pD3DDevice, LPD3DXMESH* ppCloneMesh) PURE;
    STDMETHOD(CloneMesh)(THIS_ DWORD Options, 
                CONST D3DVERTEXELEMENT9 *pDeclaration, LPDIRECT3DDEVICE9 pD3DDevice, LPD3DXMESH* ppCloneMesh) PURE;
    STDMETHOD(GetVertexBuffer)(THIS_ LPDIRECT3DVERTEXBUFFER9* ppVB) PURE;
    STDMETHOD(GetIndexBuffer)(THIS_ LPDIRECT3DINDEXBUFFER9* ppIB) PURE;
    STDMETHOD(LockVertexBuffer)(THIS_ DWORD Flags, LPVOID *ppData) PURE;
    STDMETHOD(UnlockVertexBuffer)(THIS) PURE;
    STDMETHOD(LockIndexBuffer)(THIS_ DWORD Flags, LPVOID *ppData) PURE;
    STDMETHOD(UnlockIndexBuffer)(THIS) PURE;
    STDMETHOD(GetAttributeTable)(
                THIS_ D3DXATTRIBUTERANGE *pAttribTable, DWORD* pAttribTableSize) PURE;

    STDMETHOD(ConvertPointRepsToAdjacency)(THIS_ CONST DWORD* pPRep, DWORD* pAdjacency) PURE;
    STDMETHOD(ConvertAdjacencyToPointReps)(THIS_ CONST DWORD* pAdjacency, DWORD* pPRep) PURE;
    STDMETHOD(GenerateAdjacency)(THIS_ FLOAT Epsilon, DWORD* pAdjacency) PURE;

    STDMETHOD(UpdateSemantics)(THIS_ D3DVERTEXELEMENT9 Declaration[MAX_FVF_DECL_SIZE]) PURE;

    
    STDMETHOD(LockAttributeBuffer)(THIS_ DWORD Flags, DWORD** ppData) PURE;
    STDMETHOD(UnlockAttributeBuffer)(THIS) PURE;
    STDMETHOD(Optimize)(THIS_ DWORD Flags, CONST DWORD* pAdjacencyIn, DWORD* pAdjacencyOut, 
                     DWORD* pFaceRemap, LPD3DXBUFFER *ppVertexRemap,  
                     LPD3DXMESH* ppOptMesh) PURE;
    STDMETHOD(OptimizeInplace)(THIS_ DWORD Flags, CONST DWORD* pAdjacencyIn, DWORD* pAdjacencyOut, 
                     DWORD* pFaceRemap, LPD3DXBUFFER *ppVertexRemap) PURE;
    STDMETHOD(SetAttributeTable)(THIS_ CONST D3DXATTRIBUTERANGE *pAttribTable, DWORD cAttribTableSize) PURE;
};


#undef INTERFACE
#define INTERFACE ID3DXPMesh

DECLARE_INTERFACE_(ID3DXPMesh, ID3DXBaseMesh)
{
    
    STDMETHOD(QueryInterface)(THIS_ REFIID iid, LPVOID *ppv) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;

    
    STDMETHOD(DrawSubset)(THIS_ DWORD AttribId) PURE;
    STDMETHOD_(DWORD, GetNumFaces)(THIS) PURE;
    STDMETHOD_(DWORD, GetNumVertices)(THIS) PURE;
    STDMETHOD_(DWORD, GetFVF)(THIS) PURE;
    STDMETHOD(GetDeclaration)(THIS_ D3DVERTEXELEMENT9 Declaration[MAX_FVF_DECL_SIZE]) PURE;
    STDMETHOD_(DWORD, GetNumBytesPerVertex)(THIS) PURE;
    STDMETHOD_(DWORD, GetOptions)(THIS) PURE;
    STDMETHOD(GetDevice)(THIS_ LPDIRECT3DDEVICE9* ppDevice) PURE;
    STDMETHOD(CloneMeshFVF)(THIS_ DWORD Options, 
                DWORD FVF, LPDIRECT3DDEVICE9 pD3DDevice, LPD3DXMESH* ppCloneMesh) PURE;
    STDMETHOD(CloneMesh)(THIS_ DWORD Options, 
                CONST D3DVERTEXELEMENT9 *pDeclaration, LPDIRECT3DDEVICE9 pD3DDevice, LPD3DXMESH* ppCloneMesh) PURE;
    STDMETHOD(GetVertexBuffer)(THIS_ LPDIRECT3DVERTEXBUFFER9* ppVB) PURE;
    STDMETHOD(GetIndexBuffer)(THIS_ LPDIRECT3DINDEXBUFFER9* ppIB) PURE;
    STDMETHOD(LockVertexBuffer)(THIS_ DWORD Flags, LPVOID *ppData) PURE;
    STDMETHOD(UnlockVertexBuffer)(THIS) PURE;
    STDMETHOD(LockIndexBuffer)(THIS_ DWORD Flags, LPVOID *ppData) PURE;
    STDMETHOD(UnlockIndexBuffer)(THIS) PURE;
    STDMETHOD(GetAttributeTable)(
                THIS_ D3DXATTRIBUTERANGE *pAttribTable, DWORD* pAttribTableSize) PURE;

    STDMETHOD(ConvertPointRepsToAdjacency)(THIS_ CONST DWORD* pPRep, DWORD* pAdjacency) PURE;
    STDMETHOD(ConvertAdjacencyToPointReps)(THIS_ CONST DWORD* pAdjacency, DWORD* pPRep) PURE;
    STDMETHOD(GenerateAdjacency)(THIS_ FLOAT Epsilon, DWORD* pAdjacency) PURE;

    STDMETHOD(UpdateSemantics)(THIS_ D3DVERTEXELEMENT9 Declaration[MAX_FVF_DECL_SIZE]) PURE;

    
    STDMETHOD(ClonePMeshFVF)(THIS_ DWORD Options, 
                DWORD FVF, LPDIRECT3DDEVICE9 pD3DDevice, LPD3DXPMESH* ppCloneMesh) PURE;
    STDMETHOD(ClonePMesh)(THIS_ DWORD Options, 
                CONST D3DVERTEXELEMENT9 *pDeclaration, LPDIRECT3DDEVICE9 pD3DDevice, LPD3DXPMESH* ppCloneMesh) PURE;
    STDMETHOD(SetNumFaces)(THIS_ DWORD Faces) PURE;
    STDMETHOD(SetNumVertices)(THIS_ DWORD Vertices) PURE;
    STDMETHOD_(DWORD, GetMaxFaces)(THIS) PURE;
    STDMETHOD_(DWORD, GetMinFaces)(THIS) PURE;
    STDMETHOD_(DWORD, GetMaxVertices)(THIS) PURE;
    STDMETHOD_(DWORD, GetMinVertices)(THIS) PURE;
    STDMETHOD(Save)(THIS_ IStream *pStream, CONST D3DXMATERIAL* pMaterials, CONST D3DXEFFECTINSTANCE* pEffectInstances, DWORD NumMaterials) PURE;

    STDMETHOD(Optimize)(THIS_ DWORD Flags, DWORD* pAdjacencyOut, 
                     DWORD* pFaceRemap, LPD3DXBUFFER *ppVertexRemap,  
                     LPD3DXMESH* ppOptMesh) PURE;

    STDMETHOD(OptimizeBaseLOD)(THIS_ DWORD Flags, DWORD* pFaceRemap) PURE;
    STDMETHOD(TrimByFaces)(THIS_ DWORD NewFacesMin, DWORD NewFacesMax, DWORD *rgiFaceRemap, DWORD *rgiVertRemap) PURE;
    STDMETHOD(TrimByVertices)(THIS_ DWORD NewVerticesMin, DWORD NewVerticesMax, DWORD *rgiFaceRemap, DWORD *rgiVertRemap) PURE;

    STDMETHOD(GetAdjacency)(THIS_ DWORD* pAdjacency) PURE;

    
    
    STDMETHOD(GenerateVertexHistory)(THIS_ DWORD* pVertexHistory) PURE;
};


#undef INTERFACE
#define INTERFACE ID3DXSPMesh

DECLARE_INTERFACE_(ID3DXSPMesh, IUnknown)
{
    
    STDMETHOD(QueryInterface)(THIS_ REFIID iid, LPVOID *ppv) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;

    
    STDMETHOD_(DWORD, GetNumFaces)(THIS) PURE;
    STDMETHOD_(DWORD, GetNumVertices)(THIS) PURE;
    STDMETHOD_(DWORD, GetFVF)(THIS) PURE;
    STDMETHOD(GetDeclaration)(THIS_ D3DVERTEXELEMENT9 Declaration[MAX_FVF_DECL_SIZE]) PURE;
    STDMETHOD_(DWORD, GetOptions)(THIS) PURE;
    STDMETHOD(GetDevice)(THIS_ LPDIRECT3DDEVICE9* ppDevice) PURE;
    STDMETHOD(CloneMeshFVF)(THIS_ DWORD Options, 
                DWORD FVF, LPDIRECT3DDEVICE9 pD3DDevice, DWORD *pAdjacencyOut, DWORD *pVertexRemapOut, LPD3DXMESH* ppCloneMesh) PURE;
    STDMETHOD(CloneMesh)(THIS_ DWORD Options, 
                CONST D3DVERTEXELEMENT9 *pDeclaration, LPDIRECT3DDEVICE9 pD3DDevice, DWORD *pAdjacencyOut, DWORD *pVertexRemapOut, LPD3DXMESH* ppCloneMesh) PURE;
    STDMETHOD(ClonePMeshFVF)(THIS_ DWORD Options, 
                DWORD FVF, LPDIRECT3DDEVICE9 pD3DDevice, DWORD *pVertexRemapOut, FLOAT *pErrorsByFace, LPD3DXPMESH* ppCloneMesh) PURE;
    STDMETHOD(ClonePMesh)(THIS_ DWORD Options, 
                CONST D3DVERTEXELEMENT9 *pDeclaration, LPDIRECT3DDEVICE9 pD3DDevice, DWORD *pVertexRemapOut, FLOAT *pErrorsbyFace, LPD3DXPMESH* ppCloneMesh) PURE;
    STDMETHOD(ReduceFaces)(THIS_ DWORD Faces) PURE;
    STDMETHOD(ReduceVertices)(THIS_ DWORD Vertices) PURE;
    STDMETHOD_(DWORD, GetMaxFaces)(THIS) PURE;
    STDMETHOD_(DWORD, GetMaxVertices)(THIS) PURE;
    STDMETHOD(GetVertexAttributeWeights)(THIS_ LPD3DXATTRIBUTEWEIGHTS pVertexAttributeWeights) PURE;
    STDMETHOD(GetVertexWeights)(THIS_ FLOAT *pVertexWeights) PURE;
};

#define UNUSED16 (0xffff)
#define UNUSED32 (0xffffffff)


enum _D3DXMESHOPT {
    D3DXMESHOPT_COMPACT       = 0x01000000,
    D3DXMESHOPT_ATTRSORT      = 0x02000000,
    D3DXMESHOPT_VERTEXCACHE   = 0x04000000,
    D3DXMESHOPT_STRIPREORDER  = 0x08000000,
    D3DXMESHOPT_IGNOREVERTS   = 0x10000000,  
    D3DXMESHOPT_DONOTSPLIT    = 0x20000000,  
    D3DXMESHOPT_DEVICEINDEPENDENT = 0x00400000,  
                            
    

};



typedef struct _D3DXBONECOMBINATION
{
    DWORD AttribId;
    DWORD FaceStart;
    DWORD FaceCount;
    DWORD VertexStart;
    DWORD VertexCount;
    DWORD* BoneId;
} D3DXBONECOMBINATION, *LPD3DXBONECOMBINATION;









typedef struct _D3DXPATCHINFO
{
    D3DXPATCHMESHTYPE PatchType;
    D3DDEGREETYPE Degree;
    D3DBASISTYPE Basis;
} D3DXPATCHINFO, *LPD3DXPATCHINFO;

#undef INTERFACE
#define INTERFACE ID3DXPatchMesh

DECLARE_INTERFACE_(ID3DXPatchMesh, IUnknown)
{
    
    STDMETHOD(QueryInterface)(THIS_ REFIID iid, LPVOID *ppv) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;

    

    
    STDMETHOD_(DWORD, GetNumPatches)(THIS) PURE;
    STDMETHOD_(DWORD, GetNumVertices)(THIS) PURE;
    STDMETHOD(GetDeclaration)(THIS_ D3DVERTEXELEMENT9 Declaration[MAX_FVF_DECL_SIZE]) PURE;
    STDMETHOD_(DWORD, GetControlVerticesPerPatch)(THIS) PURE;
    STDMETHOD_(DWORD, GetOptions)(THIS) PURE;
    STDMETHOD(GetDevice)(THIS_ LPDIRECT3DDEVICE9 *ppDevice) PURE;
    STDMETHOD(GetPatchInfo)(THIS_ LPD3DXPATCHINFO PatchInfo) PURE;

    
    STDMETHOD(GetVertexBuffer)(THIS_ LPDIRECT3DVERTEXBUFFER9* ppVB) PURE;
    STDMETHOD(GetIndexBuffer)(THIS_ LPDIRECT3DINDEXBUFFER9* ppIB) PURE;
    STDMETHOD(LockVertexBuffer)(THIS_ DWORD flags, LPVOID *ppData) PURE;
    STDMETHOD(UnlockVertexBuffer)(THIS) PURE;
    STDMETHOD(LockIndexBuffer)(THIS_ DWORD flags, LPVOID *ppData) PURE;
    STDMETHOD(UnlockIndexBuffer)(THIS) PURE;
    STDMETHOD(LockAttributeBuffer)(THIS_ DWORD flags, DWORD** ppData) PURE;
    STDMETHOD(UnlockAttributeBuffer)(THIS) PURE;

    
    
    
    
    STDMETHOD(GetTessSize)(THIS_ FLOAT fTessLevel,DWORD Adaptive, DWORD *NumTriangles,DWORD *NumVertices) PURE;
    
    
    
    STDMETHOD(GenerateAdjacency)(THIS_ FLOAT Tolerance) PURE;
    
    
    
    
    STDMETHOD(CloneMesh)(THIS_ DWORD Options, CONST D3DVERTEXELEMENT9 *pDecl, LPD3DXPATCHMESH *pMesh) PURE;
    
    
    
    
    
    
    
    STDMETHOD(Optimize)(THIS_ DWORD flags) PURE;

    
    
    STDMETHOD(SetDisplaceParam)(THIS_ LPDIRECT3DBASETEXTURE9 Texture,
                              D3DTEXTUREFILTERTYPE MinFilter,
                              D3DTEXTUREFILTERTYPE MagFilter,
                              D3DTEXTUREFILTERTYPE MipFilter,
                              D3DTEXTUREADDRESS Wrap,
                              DWORD dwLODBias) PURE;

    STDMETHOD(GetDisplaceParam)(THIS_ LPDIRECT3DBASETEXTURE9 *Texture,
                                D3DTEXTUREFILTERTYPE *MinFilter,
                                D3DTEXTUREFILTERTYPE *MagFilter,
                                D3DTEXTUREFILTERTYPE *MipFilter,
                                D3DTEXTUREADDRESS *Wrap,
                                DWORD *dwLODBias) PURE;
        
    
    
    STDMETHOD(Tessellate)(THIS_ FLOAT fTessLevel,LPD3DXMESH pMesh) PURE;

    
    
    
    
    
    
    STDMETHOD(TessellateAdaptive)(THIS_ 
        CONST D3DXVECTOR4 *pTrans,
        DWORD dwMaxTessLevel, 
        DWORD dwMinTessLevel,
        LPD3DXMESH pMesh) PURE;

};

#undef INTERFACE
#define INTERFACE ID3DXSkinInfo

DECLARE_INTERFACE_(ID3DXSkinInfo, IUnknown)
{
    
    STDMETHOD(QueryInterface)(THIS_ REFIID iid, LPVOID *ppv) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;

    
    STDMETHOD(SetBoneInfluence)(THIS_ DWORD bone, DWORD numInfluences, CONST DWORD* vertices, CONST FLOAT* weights) PURE;
	STDMETHOD(SetBoneVertexInfluence)(THIS_ DWORD boneNum, DWORD influenceNum, float weight) PURE;
    STDMETHOD_(DWORD, GetNumBoneInfluences)(THIS_ DWORD bone) PURE;
	STDMETHOD(GetBoneInfluence)(THIS_ DWORD bone, DWORD* vertices, FLOAT* weights) PURE;
	STDMETHOD(GetBoneVertexInfluence)(THIS_ DWORD boneNum, DWORD influenceNum, float *pWeight, DWORD *pVertexNum) PURE;
    STDMETHOD(GetMaxVertexInfluences)(THIS_ DWORD* maxVertexInfluences) PURE;
    STDMETHOD_(DWORD, GetNumBones)(THIS) PURE;
	STDMETHOD(FindBoneVertexInfluenceIndex)(THIS_ DWORD boneNum, DWORD vertexNum, DWORD *pInfluenceIndex) PURE;

    
    STDMETHOD(GetMaxFaceInfluences)(THIS_ LPDIRECT3DINDEXBUFFER9 pIB, DWORD NumFaces, DWORD* maxFaceInfluences) PURE;
    
    
    STDMETHOD(SetMinBoneInfluence)(THIS_ FLOAT MinInfl) PURE;
    
    STDMETHOD_(FLOAT, GetMinBoneInfluence)(THIS) PURE;
    
    
    STDMETHOD(SetBoneName)(THIS_ DWORD Bone, LPCSTR pName) PURE; 
    STDMETHOD_(LPCSTR, GetBoneName)(THIS_ DWORD Bone) PURE; 
    
    
    STDMETHOD(SetBoneOffsetMatrix)(THIS_ DWORD Bone, CONST D3DXMATRIX *pBoneTransform) PURE; 
    STDMETHOD_(LPD3DXMATRIX, GetBoneOffsetMatrix)(THIS_ DWORD Bone) PURE; 
    
    
    STDMETHOD(Clone)(THIS_ LPD3DXSKININFO* ppSkinInfo) PURE;
    
    
    
    STDMETHOD(Remap)(THIS_ DWORD NumVertices, DWORD* pVertexRemap) PURE;

    
    STDMETHOD(SetFVF)(THIS_ DWORD FVF) PURE;
    STDMETHOD(SetDeclaration)(THIS_ CONST D3DVERTEXELEMENT9 *pDeclaration) PURE;
    STDMETHOD_(DWORD, GetFVF)(THIS) PURE;
    STDMETHOD(GetDeclaration)(THIS_ D3DVERTEXELEMENT9 Declaration[MAX_FVF_DECL_SIZE]) PURE;

    
    STDMETHOD(UpdateSkinnedMesh)(THIS_ 
        CONST D3DXMATRIX* pBoneTransforms, 
        CONST D3DXMATRIX* pBoneInvTransposeTransforms, 
        LPCVOID pVerticesSrc, 
        PVOID pVerticesDst) PURE;

    
    
    STDMETHOD(ConvertToBlendedMesh)(THIS_ 
        LPD3DXMESH pMesh,
        DWORD Options, 
        CONST DWORD *pAdjacencyIn, 
        LPDWORD pAdjacencyOut,
        DWORD* pFaceRemap, 
        LPD3DXBUFFER *ppVertexRemap, 
        DWORD* pMaxFaceInfl,
        DWORD* pNumBoneCombinations, 
        LPD3DXBUFFER* ppBoneCombinationTable, 
        LPD3DXMESH* ppMesh) PURE;

    
    
    STDMETHOD(ConvertToIndexedBlendedMesh)(THIS_ 
        LPD3DXMESH pMesh,
        DWORD Options, 
        DWORD paletteSize, 
        CONST DWORD *pAdjacencyIn, 
        LPDWORD pAdjacencyOut, 
        DWORD* pFaceRemap, 
        LPD3DXBUFFER *ppVertexRemap, 
        DWORD* pMaxVertexInfl,
        DWORD* pNumBoneCombinations, 
        LPD3DXBUFFER* ppBoneCombinationTable, 
        LPD3DXMESH* ppMesh) PURE;
};

#ifdef __cplusplus
extern "C" {
#endif 


HRESULT WINAPI 
    D3DXCreateMesh(
        DWORD NumFaces, 
        DWORD NumVertices, 
        DWORD Options, 
        CONST D3DVERTEXELEMENT9 *pDeclaration, 
        LPDIRECT3DDEVICE9 pD3DDevice, 
        LPD3DXMESH* ppMesh);

HRESULT WINAPI 
    D3DXCreateMeshFVF(
        DWORD NumFaces, 
        DWORD NumVertices, 
        DWORD Options, 
        DWORD FVF, 
        LPDIRECT3DDEVICE9 pD3DDevice, 
        LPD3DXMESH* ppMesh);

HRESULT WINAPI 
    D3DXCreateSPMesh(
        LPD3DXMESH pMesh, 
        CONST DWORD* pAdjacency, 
        CONST D3DXATTRIBUTEWEIGHTS *pVertexAttributeWeights,
        CONST FLOAT *pVertexWeights,
        LPD3DXSPMESH* ppSMesh);


HRESULT WINAPI
    D3DXCleanMesh(
    D3DXCLEANTYPE CleanType,
    LPD3DXMESH pMeshIn,
    CONST DWORD* pAdjacencyIn,
    LPD3DXMESH* ppMeshOut,
    DWORD* pAdjacencyOut,
    LPD3DXBUFFER* ppErrorsAndWarnings);

HRESULT WINAPI
    D3DXValidMesh(
    LPD3DXMESH pMeshIn,
    CONST DWORD* pAdjacency,
    LPD3DXBUFFER* ppErrorsAndWarnings);

HRESULT WINAPI 
    D3DXGeneratePMesh(
        LPD3DXMESH pMesh, 
        CONST DWORD* pAdjacency, 
        CONST D3DXATTRIBUTEWEIGHTS *pVertexAttributeWeights,
        CONST FLOAT *pVertexWeights,
        DWORD MinValue, 
        DWORD Options, 
        LPD3DXPMESH* ppPMesh);

HRESULT WINAPI 
    D3DXSimplifyMesh(
        LPD3DXMESH pMesh, 
        CONST DWORD* pAdjacency, 
        CONST D3DXATTRIBUTEWEIGHTS *pVertexAttributeWeights,
        CONST FLOAT *pVertexWeights,
        DWORD MinValue, 
        DWORD Options, 
        LPD3DXMESH* ppMesh);

HRESULT WINAPI 
    D3DXComputeBoundingSphere(
        CONST D3DXVECTOR3 *pFirstPosition,  
        DWORD NumVertices, 
        DWORD dwStride,                     
        D3DXVECTOR3 *pCenter, 
        FLOAT *pRadius);

HRESULT WINAPI 
    D3DXComputeBoundingBox(
        CONST D3DXVECTOR3 *pFirstPosition,  
        DWORD NumVertices, 
        DWORD dwStride,                     
        D3DXVECTOR3 *pMin, 
        D3DXVECTOR3 *pMax);

HRESULT WINAPI 
    D3DXComputeNormals(
        LPD3DXBASEMESH pMesh,
        CONST DWORD *pAdjacency);

HRESULT WINAPI 
    D3DXCreateBuffer(
        DWORD NumBytes, 
        LPD3DXBUFFER *ppBuffer);


HRESULT WINAPI
    D3DXLoadMeshFromXA(
        LPCSTR pFilename, 
        DWORD Options, 
        LPDIRECT3DDEVICE9 pD3DDevice, 
        LPD3DXBUFFER *ppAdjacency,
        LPD3DXBUFFER *ppMaterials, 
        LPD3DXBUFFER *ppEffectInstances, 
        DWORD *pNumMaterials,
        LPD3DXMESH *ppMesh);

HRESULT WINAPI
    D3DXLoadMeshFromXW(
        LPCWSTR pFilename, 
        DWORD Options, 
        LPDIRECT3DDEVICE9 pD3DDevice, 
        LPD3DXBUFFER *ppAdjacency,
        LPD3DXBUFFER *ppMaterials, 
        LPD3DXBUFFER *ppEffectInstances, 
        DWORD *pNumMaterials,
        LPD3DXMESH *ppMesh);

#ifdef UNICODE
#define D3DXLoadMeshFromX D3DXLoadMeshFromXW
#else
#define D3DXLoadMeshFromX D3DXLoadMeshFromXA
#endif

HRESULT WINAPI 
    D3DXLoadMeshFromXInMemory(
        LPCVOID Memory,
        DWORD SizeOfMemory,
        DWORD Options, 
        LPDIRECT3DDEVICE9 pD3DDevice, 
        LPD3DXBUFFER *ppAdjacency,
        LPD3DXBUFFER *ppMaterials, 
        LPD3DXBUFFER *ppEffectInstances, 
        DWORD *pNumMaterials,
        LPD3DXMESH *ppMesh);

HRESULT WINAPI 
    D3DXLoadMeshFromXResource(
        HMODULE Module,
        LPCSTR Name,
        LPCSTR Type,
        DWORD Options, 
        LPDIRECT3DDEVICE9 pD3DDevice, 
        LPD3DXBUFFER *ppAdjacency,
        LPD3DXBUFFER *ppMaterials, 
        LPD3DXBUFFER *ppEffectInstances, 
        DWORD *pNumMaterials,
        LPD3DXMESH *ppMesh);

HRESULT WINAPI 
    D3DXSaveMeshToXA(
        LPCSTR pFilename,
        LPD3DXMESH pMesh,
        CONST DWORD* pAdjacency,
        CONST D3DXMATERIAL* pMaterials,
        CONST D3DXEFFECTINSTANCE* pEffectInstances, 
        DWORD NumMaterials,
        DWORD Format
        );

HRESULT WINAPI 
    D3DXSaveMeshToXW(
        LPCWSTR pFilename,
        LPD3DXMESH pMesh,
        CONST DWORD* pAdjacency,
        CONST D3DXMATERIAL* pMaterials,
        CONST D3DXEFFECTINSTANCE* pEffectInstances, 
        DWORD NumMaterials,
        DWORD Format
        );
        
#ifdef UNICODE
#define D3DXSaveMeshToX D3DXSaveMeshToXW
#else
#define D3DXSaveMeshToX D3DXSaveMeshToXA
#endif
        

HRESULT WINAPI 
    D3DXCreatePMeshFromStream(
        IStream *pStream, 
        DWORD Options,
        LPDIRECT3DDEVICE9 pD3DDevice, 
        LPD3DXBUFFER *ppMaterials,
        LPD3DXBUFFER *ppEffectInstances, 
        DWORD* pNumMaterials,
        LPD3DXPMESH *ppPMesh);



HRESULT WINAPI
    D3DXCreateSkinInfo(
        DWORD NumVertices,
        CONST D3DVERTEXELEMENT9 *pDeclaration, 
        DWORD NumBones,
        LPD3DXSKININFO* ppSkinInfo);
        


HRESULT WINAPI
    D3DXCreateSkinInfoFVF(
        DWORD NumVertices,
        DWORD FVF,
        DWORD NumBones,
        LPD3DXSKININFO* ppSkinInfo);
        
#ifdef __cplusplus
}

extern "C" {
#endif 

HRESULT WINAPI 
    D3DXLoadMeshFromXof(
        LPD3DXFILEDATA pxofMesh, 
        DWORD Options, 
        LPDIRECT3DDEVICE9 pD3DDevice, 
        LPD3DXBUFFER *ppAdjacency,
        LPD3DXBUFFER *ppMaterials, 
        LPD3DXBUFFER *ppEffectInstances, 
        DWORD *pNumMaterials,
        LPD3DXMESH *ppMesh);



HRESULT WINAPI
    D3DXLoadSkinMeshFromXof(
        LPD3DXFILEDATA pxofMesh, 
        DWORD Options,
        LPDIRECT3DDEVICE9 pD3DDevice,
        LPD3DXBUFFER* ppAdjacency,
        LPD3DXBUFFER* ppMaterials,
        LPD3DXBUFFER *ppEffectInstances, 
        DWORD *pMatOut,
        LPD3DXSKININFO* ppSkinInfo,
        LPD3DXMESH* ppMesh);







HRESULT WINAPI
    D3DXCreateSkinInfoFromBlendedMesh(
        LPD3DXBASEMESH pMesh,
        DWORD NumBones,
        CONST D3DXBONECOMBINATION *pBoneCombinationTable,
        LPD3DXSKININFO* ppSkinInfo);
        
HRESULT WINAPI
    D3DXTessellateNPatches(
        LPD3DXMESH pMeshIn,             
        CONST DWORD* pAdjacencyIn,             
        FLOAT NumSegs,                    
        BOOL  QuadraticInterpNormals,     
        LPD3DXMESH *ppMeshOut,
        LPD3DXBUFFER *ppAdjacencyOut);






HRESULT WINAPI
    D3DXGenerateOutputDecl(
        D3DVERTEXELEMENT9 *pOutput,
        CONST D3DVERTEXELEMENT9 *pInput);





HRESULT WINAPI
    D3DXLoadPatchMeshFromXof(
        LPD3DXFILEDATA pXofObjMesh,
        DWORD Options,
        LPDIRECT3DDEVICE9 pD3DDevice,
        LPD3DXBUFFER *ppMaterials,
        LPD3DXBUFFER *ppEffectInstances, 
        PDWORD pNumMaterials,
        LPD3DXPATCHMESH *ppMesh);


HRESULT WINAPI
    D3DXRectPatchSize(
        CONST FLOAT *pfNumSegs, 
        DWORD *pdwTriangles,    
        DWORD *pdwVertices);    


HRESULT WINAPI
    D3DXTriPatchSize(
        CONST FLOAT *pfNumSegs, 
        DWORD *pdwTriangles,    
        DWORD *pdwVertices);    




HRESULT WINAPI
    D3DXTessellateRectPatch(
        LPDIRECT3DVERTEXBUFFER9 pVB,
        CONST FLOAT *pNumSegs,
        CONST D3DVERTEXELEMENT9 *pdwInDecl,
        CONST D3DRECTPATCH_INFO *pRectPatchInfo,
        LPD3DXMESH pMesh);


HRESULT WINAPI
    D3DXTessellateTriPatch(
      LPDIRECT3DVERTEXBUFFER9 pVB,
      CONST FLOAT *pNumSegs,
      CONST D3DVERTEXELEMENT9 *pInDecl,
      CONST D3DTRIPATCH_INFO *pTriPatchInfo,
      LPD3DXMESH pMesh);




HRESULT WINAPI
    D3DXCreateNPatchMesh(
        LPD3DXMESH pMeshSysMem,
        LPD3DXPATCHMESH *pPatchMesh);

      

HRESULT WINAPI
    D3DXCreatePatchMesh(
        CONST D3DXPATCHINFO *pInfo,     
        DWORD dwNumPatches,             
        DWORD dwNumVertices,            
        DWORD dwOptions,                
        CONST D3DVERTEXELEMENT9 *pDecl, 
        LPDIRECT3DDEVICE9 pD3DDevice, 
        LPD3DXPATCHMESH *pPatchMesh);

        


HRESULT WINAPI
    D3DXValidPatchMesh(LPD3DXPATCHMESH pMesh,
                        DWORD *dwcDegenerateVertices,
                        DWORD *dwcDegeneratePatches,
                        LPD3DXBUFFER *ppErrorsAndWarnings);

UINT WINAPI
    D3DXGetFVFVertexSize(DWORD FVF);

UINT WINAPI 
    D3DXGetDeclVertexSize(CONST D3DVERTEXELEMENT9 *pDecl,DWORD Stream);

UINT WINAPI 
    D3DXGetDeclLength(CONST D3DVERTEXELEMENT9 *pDecl);

HRESULT WINAPI
    D3DXDeclaratorFromFVF(
        DWORD FVF,
        D3DVERTEXELEMENT9 pDeclarator[MAX_FVF_DECL_SIZE]);

HRESULT WINAPI
    D3DXFVFFromDeclarator(
        CONST D3DVERTEXELEMENT9 *pDeclarator,
        DWORD *pFVF);

HRESULT WINAPI 
    D3DXWeldVertices(
        LPD3DXMESH pMesh,         
        DWORD Flags,
        CONST D3DXWELDEPSILONS *pEpsilons,                 
        CONST DWORD *pAdjacencyIn, 
        DWORD *pAdjacencyOut,
        DWORD *pFaceRemap, 
        LPD3DXBUFFER *ppVertexRemap);

typedef struct _D3DXINTERSECTINFO
{
    DWORD FaceIndex;                
    FLOAT U;                        
    FLOAT V;                        
    FLOAT Dist;                     
} D3DXINTERSECTINFO, *LPD3DXINTERSECTINFO;


HRESULT WINAPI
    D3DXIntersect(
        LPD3DXBASEMESH pMesh,
        CONST D3DXVECTOR3 *pRayPos,
        CONST D3DXVECTOR3 *pRayDir, 
        BOOL    *pHit,              
        DWORD   *pFaceIndex,        
        FLOAT   *pU,                
        FLOAT   *pV,                
        FLOAT   *pDist,             
        LPD3DXBUFFER *ppAllHits,    
        DWORD   *pCountOfHits);     

HRESULT WINAPI
    D3DXIntersectSubset(
        LPD3DXBASEMESH pMesh,
        DWORD AttribId,
        CONST D3DXVECTOR3 *pRayPos,
        CONST D3DXVECTOR3 *pRayDir, 
        BOOL    *pHit,              
        DWORD   *pFaceIndex,        
        FLOAT   *pU,                
        FLOAT   *pV,                
        FLOAT   *pDist,             
        LPD3DXBUFFER *ppAllHits,    
        DWORD   *pCountOfHits);     


HRESULT WINAPI D3DXSplitMesh
    (
    LPD3DXMESH pMeshIn,         
    CONST DWORD *pAdjacencyIn, 
    CONST DWORD MaxSize,
    CONST DWORD Options,
    DWORD *pMeshesOut,
    LPD3DXBUFFER *ppMeshArrayOut,
    LPD3DXBUFFER *ppAdjacencyArrayOut,
    LPD3DXBUFFER *ppFaceRemapArrayOut,
    LPD3DXBUFFER *ppVertRemapArrayOut
    );

BOOL WINAPI D3DXIntersectTri 
(
    CONST D3DXVECTOR3 *p0,           
    CONST D3DXVECTOR3 *p1,           
    CONST D3DXVECTOR3 *p2,           
    CONST D3DXVECTOR3 *pRayPos,      
    CONST D3DXVECTOR3 *pRayDir,      
    FLOAT *pU,                       
    FLOAT *pV,                       
    FLOAT *pDist);                   

BOOL WINAPI
    D3DXSphereBoundProbe(
        CONST D3DXVECTOR3 *pCenter,
        FLOAT Radius,
        CONST D3DXVECTOR3 *pRayPosition,
        CONST D3DXVECTOR3 *pRayDirection);

BOOL WINAPI 
    D3DXBoxBoundProbe(
        CONST D3DXVECTOR3 *pMin, 
        CONST D3DXVECTOR3 *pMax,
        CONST D3DXVECTOR3 *pRayPosition,
        CONST D3DXVECTOR3 *pRayDirection);


HRESULT WINAPI D3DXComputeTangentFrame(ID3DXMesh *pMesh,
                                       DWORD dwOptions);

HRESULT WINAPI D3DXComputeTangentFrameEx(ID3DXMesh *pMesh,
                                         DWORD dwTextureInSemantic,
                                         DWORD dwTextureInIndex,
                                         DWORD dwUPartialOutSemantic,
                                         DWORD dwUPartialOutIndex,
                                         DWORD dwVPartialOutSemantic,
                                         DWORD dwVPartialOutIndex,
                                         DWORD dwNormalOutSemantic,
                                         DWORD dwNormalOutIndex,
                                         DWORD dwOptions,
                                         CONST DWORD *pdwAdjacency,
                                         FLOAT fPartialEdgeThreshold,
                                         FLOAT fSingularPointThreshold,
                                         FLOAT fNormalEdgeThreshold,
                                         ID3DXMesh **ppMeshOut,
                                         ID3DXBuffer **ppVertexMapping);


















HRESULT WINAPI D3DXComputeTangent(LPD3DXMESH Mesh,
                                 DWORD TexStage,
                                 DWORD TangentIndex,
                                 DWORD BinormIndex,
                                 DWORD Wrap,
                                 CONST DWORD *pAdjacency);






typedef HRESULT (WINAPI *LPD3DXUVATLASCB)(FLOAT fPercentDone,  LPVOID lpUserContext);















































































HRESULT WINAPI D3DXUVAtlasCreate(LPD3DXMESH pMesh,
                                 UINT uMaxChartNumber,
                                 FLOAT fMaxStretch,
                                 UINT uWidth,
                                 UINT uHeight,
                                 FLOAT fGutter,
                                 DWORD dwTextureIndex,
                                 CONST DWORD *pdwAdjacency,
                                 CONST DWORD *pdwFalseEdgeAdjacency,
                                 CONST FLOAT *pfIMTArray,
                                 LPD3DXUVATLASCB pStatusCallback,
                                 FLOAT fCallbackFrequency,
                                 LPVOID pUserContext,
                                 DWORD dwOptions,
                                 LPD3DXMESH *ppMeshOut,
                                 LPD3DXBUFFER *ppFacePartitioning,
                                 LPD3DXBUFFER *ppVertexRemapArray,
                                 FLOAT *pfMaxStretchOut,
                                 UINT *puNumChartsOut);





























HRESULT WINAPI D3DXUVAtlasPartition(LPD3DXMESH pMesh,
                                    UINT uMaxChartNumber,
                                    FLOAT fMaxStretch,
                                    DWORD dwTextureIndex,
                                    CONST DWORD *pdwAdjacency,
                                    CONST DWORD *pdwFalseEdgeAdjacency,
                                    CONST FLOAT *pfIMTArray,
                                    LPD3DXUVATLASCB pStatusCallback,
                                    FLOAT fCallbackFrequency,
                                    LPVOID pUserContext,
                                    DWORD dwOptions,
                                    LPD3DXMESH *ppMeshOut,
                                    LPD3DXBUFFER *ppFacePartitioning,
                                    LPD3DXBUFFER *ppVertexRemapArray,
                                    LPD3DXBUFFER *ppPartitionResultAdjacency,
                                    FLOAT *pfMaxStretchOut,
                                    UINT *puNumChartsOut);







HRESULT WINAPI D3DXUVAtlasPack(ID3DXMesh *pMesh,
                               UINT uWidth,
                               UINT uHeight,
                               FLOAT fGutter,
                               DWORD dwTextureIndex,
                               CONST DWORD *pdwPartitionResultAdjacency,
                               LPD3DXUVATLASCB pStatusCallback,
                               FLOAT fCallbackFrequency,
                               LPVOID pUserContext,
                               DWORD dwOptions,
                               LPD3DXBUFFER pFacePartitioning);























typedef HRESULT (WINAPI* LPD3DXIMTSIGNALCALLBACK)
    (CONST D3DXVECTOR2 *uv,
     UINT uPrimitiveID,
     UINT uSignalDimension,
     VOID *pUserData,
     FLOAT *pfSignalOut);

















HRESULT WINAPI D3DXComputeIMTFromPerVertexSignal (
    LPD3DXMESH pMesh,
    CONST FLOAT *pfVertexSignal, 
    UINT uSignalDimension,
    UINT uSignalStride,         
    DWORD dwOptions,            
    LPD3DXUVATLASCB pStatusCallback,
    LPVOID pUserContext,
    LPD3DXBUFFER *ppIMTData);

















HRESULT WINAPI D3DXComputeIMTFromSignal(
    LPD3DXMESH pMesh,
    DWORD dwTextureIndex,
    UINT uSignalDimension,
    FLOAT fMaxUVDistance,
    DWORD dwOptions, 
    LPD3DXIMTSIGNALCALLBACK pSignalCallback,
    VOID *pUserData,
    LPD3DXUVATLASCB pStatusCallback,
    LPVOID pUserContext,
    LPD3DXBUFFER *ppIMTData);













HRESULT WINAPI D3DXComputeIMTFromTexture (
    LPD3DXMESH pMesh,
    LPDIRECT3DTEXTURE9 pTexture,
    DWORD dwTextureIndex,
    DWORD dwOptions,
    LPD3DXUVATLASCB pStatusCallback,
    LPVOID pUserContext,
    LPD3DXBUFFER *ppIMTData);
















HRESULT WINAPI D3DXComputeIMTFromPerTexelSignal(
    LPD3DXMESH pMesh,
    DWORD dwTextureIndex,
    FLOAT *pfTexelSignal,
    UINT uWidth,
    UINT uHeight,
    UINT uSignalDimension,
    UINT uComponents,
    DWORD dwOptions,
    LPD3DXUVATLASCB pStatusCallback,
    LPVOID pUserContext,
    LPD3DXBUFFER *ppIMTData);

HRESULT WINAPI
    D3DXConvertMeshSubsetToSingleStrip(
        LPD3DXBASEMESH MeshIn,
        DWORD AttribId,
        DWORD IBOptions,
        LPDIRECT3DINDEXBUFFER9 *ppIndexBuffer,
        DWORD *pNumIndices);

HRESULT WINAPI
    D3DXConvertMeshSubsetToStrips(
        LPD3DXBASEMESH MeshIn,
        DWORD AttribId,
        DWORD IBOptions,
        LPDIRECT3DINDEXBUFFER9 *ppIndexBuffer,
        DWORD *pNumIndices,
        LPD3DXBUFFER *ppStripLengths,
        DWORD *pNumStrips);

        























HRESULT WINAPI
    D3DXOptimizeFaces(
        LPCVOID pbIndices, 
        UINT cFaces, 
        UINT cVertices, 
        BOOL b32BitIndices, 
        DWORD* pFaceRemap);
        























HRESULT WINAPI
    D3DXOptimizeVertices(
        LPCVOID pbIndices, 
        UINT cFaces, 
        UINT cVertices, 
        BOOL b32BitIndices, 
        DWORD* pVertexRemap);

#ifdef __cplusplus
}
#endif 









typedef enum _D3DXSHCOMPRESSQUALITYTYPE {
    D3DXSHCQUAL_FASTLOWQUALITY  = 1,
    D3DXSHCQUAL_SLOWHIGHQUALITY = 2,
    D3DXSHCQUAL_FORCE_DWORD     = 0x7fffffff
} D3DXSHCOMPRESSQUALITYTYPE;

typedef enum _D3DXSHGPUSIMOPT {
    D3DXSHGPUSIMOPT_SHADOWRES256  = 1,
    D3DXSHGPUSIMOPT_SHADOWRES512  = 0,
    D3DXSHGPUSIMOPT_SHADOWRES1024 = 2,
    D3DXSHGPUSIMOPT_SHADOWRES2048 = 3,

    D3DXSHGPUSIMOPT_HIGHQUALITY = 4,    
    
    D3DXSHGPUSIMOPT_FORCE_DWORD = 0x7fffffff
} D3DXSHGPUSIMOPT;





typedef struct _D3DXSHMATERIAL {
    D3DCOLORVALUE Diffuse;  
    BOOL          bMirror;  
    BOOL          bSubSurf; 

    
    FLOAT         RelativeIndexOfRefraction;
    D3DCOLORVALUE Absorption;
    D3DCOLORVALUE ReducedScattering;

} D3DXSHMATERIAL;





typedef struct _D3DXSHPRTSPLITMESHVERTDATA {
    UINT  uVertRemap;   
    UINT  uSubCluster;  
    UCHAR ucVertStatus; 
} D3DXSHPRTSPLITMESHVERTDATA;




typedef struct _D3DXSHPRTSPLITMESHCLUSTERDATA {
    UINT uVertStart;     
    UINT uVertLength;    
    
    UINT uFaceStart;     
    UINT uFaceLength;    
    
    UINT uClusterStart;  
    UINT uClusterLength; 
} D3DXSHPRTSPLITMESHCLUSTERDATA;





typedef HRESULT (WINAPI *LPD3DXSHPRTSIMCB)(float fPercentDone,  LPVOID lpUserContext);





DEFINE_GUID(IID_ID3DXPRTBuffer, 
0xf1827e47, 0xa8, 0x49cd, 0x90, 0x8c, 0x9d, 0x11, 0x95, 0x5f, 0x87, 0x28);


DEFINE_GUID(IID_ID3DXPRTCompBuffer, 
0xa758d465, 0xfe8d, 0x45ad, 0x9c, 0xf0, 0xd0, 0x1e, 0x56, 0x26, 0x6a, 0x7);


DEFINE_GUID(IID_ID3DXTextureGutterHelper, 
0x838f01ec, 0x9729, 0x4527, 0xaa, 0xdb, 0xdf, 0x70, 0xad, 0xe7, 0xfe, 0xa9);


DEFINE_GUID(IID_ID3DXPRTEngine, 
0x683a4278, 0xcd5f, 0x4d24, 0x90, 0xad, 0xc4, 0xe1, 0xb6, 0x85, 0x5d, 0x53);



typedef interface ID3DXTextureGutterHelper ID3DXTextureGutterHelper;
typedef interface ID3DXPRTBuffer ID3DXPRTBuffer;

#undef INTERFACE
#define INTERFACE ID3DXPRTBuffer





DECLARE_INTERFACE_(ID3DXPRTBuffer, IUnknown)
{
    
    STDMETHOD(QueryInterface)(THIS_ REFIID iid, LPVOID *ppv) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;

    
    STDMETHOD_(UINT, GetNumSamples)(THIS) PURE;
    STDMETHOD_(UINT, GetNumCoeffs)(THIS) PURE;
    STDMETHOD_(UINT, GetNumChannels)(THIS) PURE;

    STDMETHOD_(BOOL, IsTexture)(THIS) PURE;
    STDMETHOD_(UINT, GetWidth)(THIS) PURE;
    STDMETHOD_(UINT, GetHeight)(THIS) PURE;

    
    STDMETHOD(Resize)(THIS_ UINT NewSize) PURE;

    
    
    STDMETHOD(LockBuffer)(THIS_ UINT Start, UINT NumSamples, FLOAT **ppData) PURE;
    STDMETHOD(UnlockBuffer)(THIS) PURE;

    
    STDMETHOD(ScaleBuffer)(THIS_ FLOAT Scale) PURE;
    
    
    
    STDMETHOD(AddBuffer)(THIS_ LPD3DXPRTBUFFER pBuffer) PURE;

    
    
    STDMETHOD(AttachGH)(THIS_ LPD3DXTEXTUREGUTTERHELPER) PURE;
    STDMETHOD(ReleaseGH)(THIS) PURE;
    
    
    STDMETHOD(EvalGH)(THIS) PURE;

    
    
    STDMETHOD(ExtractTexture)(THIS_ UINT Channel, UINT StartCoefficient, 
                              UINT NumCoefficients, LPDIRECT3DTEXTURE9 pTexture) PURE;

    
    
    
    STDMETHOD(ExtractToMesh)(THIS_ UINT NumCoefficients, D3DDECLUSAGE Usage, UINT UsageIndexStart,
                             LPD3DXMESH pScene) PURE;

};

typedef interface ID3DXPRTCompBuffer ID3DXPRTCompBuffer;
typedef interface ID3DXPRTCompBuffer *LPD3DXPRTCOMPBUFFER;

#undef INTERFACE
#define INTERFACE ID3DXPRTCompBuffer



DECLARE_INTERFACE_(ID3DXPRTCompBuffer, IUnknown)
{
    
    STDMETHOD(QueryInterface)(THIS_ REFIID iid, LPVOID *ppv) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;

    

    
    STDMETHOD_(UINT, GetNumSamples)(THIS) PURE;
    STDMETHOD_(UINT, GetNumCoeffs)(THIS) PURE;
    STDMETHOD_(UINT, GetNumChannels)(THIS) PURE;

    STDMETHOD_(BOOL, IsTexture)(THIS) PURE;
    STDMETHOD_(UINT, GetWidth)(THIS) PURE;
    STDMETHOD_(UINT, GetHeight)(THIS) PURE;

    
    STDMETHOD_(UINT, GetNumClusters)(THIS) PURE;
    STDMETHOD_(UINT, GetNumPCA)(THIS) PURE;

    
    
    STDMETHOD(NormalizeData)(THIS) PURE;

    
    
    STDMETHOD(ExtractBasis)(THIS_ UINT Cluster, FLOAT *pClusterBasis) PURE;
    
    
    STDMETHOD(ExtractClusterIDs)(THIS_ UINT *pClusterIDs) PURE;
    
    
    
    STDMETHOD(ExtractPCA)(THIS_ UINT StartPCA, UINT NumExtract, FLOAT *pPCACoefficients) PURE;

    
    
    STDMETHOD(ExtractTexture)(THIS_ UINT StartPCA, UINT NumpPCA, 
                              LPDIRECT3DTEXTURE9 pTexture) PURE;
                              
    
    
    
    STDMETHOD(ExtractToMesh)(THIS_ UINT NumPCA, D3DDECLUSAGE Usage, UINT UsageIndexStart,
                             LPD3DXMESH pScene) PURE;
};


#undef INTERFACE
#define INTERFACE ID3DXTextureGutterHelper



















DECLARE_INTERFACE_(ID3DXTextureGutterHelper, IUnknown)
{
    
    STDMETHOD(QueryInterface)(THIS_ REFIID iid, LPVOID *ppv) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;

    
    
    
    STDMETHOD_(UINT, GetWidth)(THIS) PURE;
    STDMETHOD_(UINT, GetHeight)(THIS) PURE;


    
    
    
    
    
    STDMETHOD(ApplyGuttersFloat)(THIS_ FLOAT *pDataIn, UINT NumCoeffs, UINT Width, UINT Height);
    
    
    
    STDMETHOD(ApplyGuttersTex)(THIS_ LPDIRECT3DTEXTURE9 pTexture);
    
    
    
    STDMETHOD(ApplyGuttersPRT)(THIS_ LPD3DXPRTBUFFER pBuffer);
       
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    STDMETHOD(ResampleTex)(THIS_ LPDIRECT3DTEXTURE9 pTextureIn,
                                 LPD3DXMESH pMeshIn,
                                 D3DDECLUSAGE Usage, UINT UsageIndex,
                                 LPDIRECT3DTEXTURE9 pTextureOut);    
    
    
    

    
    
    
    
    STDMETHOD(GetFaceMap)(THIS_ UINT *pFaceData) PURE;
    
    
    
    
    
    
    STDMETHOD(GetBaryMap)(THIS_ D3DXVECTOR2 *pBaryData) PURE;
    
    
    
    
    
    STDMETHOD(GetTexelMap)(THIS_ D3DXVECTOR2 *pTexelData) PURE;
    
    
    
    
    
    
    STDMETHOD(GetGutterMap)(THIS_ BYTE *pGutterData) PURE;
    
    
    
    
    STDMETHOD(SetFaceMap)(THIS_ UINT *pFaceData) PURE;
    
    
    
    
    
    STDMETHOD(SetBaryMap)(THIS_ D3DXVECTOR2 *pBaryData) PURE;
    
    
    
    
    STDMETHOD(SetTexelMap)(THIS_ D3DXVECTOR2 *pTexelData) PURE;
    
    
    
    
    
    STDMETHOD(SetGutterMap)(THIS_ BYTE *pGutterData) PURE;    
};


typedef interface ID3DXPRTEngine ID3DXPRTEngine;
typedef interface ID3DXPRTEngine *LPD3DXPRTENGINE;

#undef INTERFACE
#define INTERFACE ID3DXPRTEngine




















DECLARE_INTERFACE_(ID3DXPRTEngine, IUnknown)
{
    
    STDMETHOD(QueryInterface)(THIS_ REFIID iid, LPVOID *ppv) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;

    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    STDMETHOD(SetMeshMaterials)(THIS_ CONST D3DXSHMATERIAL **ppMaterials, UINT NumMeshes, 
                                UINT NumChannels, BOOL bSetAlbedo, FLOAT fLengthScale) PURE;
    
    
    
    
    
    
    
    
    
    STDMETHOD(SetPerVertexAlbedo)(THIS_ CONST VOID *pDataIn, UINT NumChannels, UINT Stride) PURE;
    
    
    
    
    
    
    
    STDMETHOD(SetPerTexelAlbedo)(THIS_ LPDIRECT3DTEXTURE9 pAlbedoTexture, 
                                 UINT NumChannels, 
                                 LPD3DXTEXTUREGUTTERHELPER pGH) PURE;
                                 
    
    STDMETHOD(GetVertexAlbedo)(THIS_ D3DXCOLOR *pVertColors, UINT NumVerts) PURE;                                 
                                 
    
    
    
    
    STDMETHOD(SetPerTexelNormal)(THIS_ LPDIRECT3DTEXTURE9 pNormalTexture) PURE;
                                 
    
    
    
    
    
    
    STDMETHOD(ExtractPerVertexAlbedo)(THIS_ LPD3DXMESH pMesh, 
                                      D3DDECLUSAGE Usage, 
                                      UINT NumChannels) PURE;

    
    
    
    STDMETHOD(ResampleBuffer)(THIS_ LPD3DXPRTBUFFER pBufferIn, LPD3DXPRTBUFFER pBufferOut) PURE;
    
    
    
    
    
    
    
    
    
    STDMETHOD(GetAdaptedMesh)(THIS_ LPDIRECT3DDEVICE9 pD3DDevice,UINT *pFaceRemap, UINT *pVertRemap, FLOAT *pfVertWeights, LPD3DXMESH *ppMesh) PURE;

    
    STDMETHOD_(UINT, GetNumVerts)(THIS) PURE;
    
    STDMETHOD_(UINT, GetNumFaces)(THIS) PURE;

    
    
    
    
    
    
    
    STDMETHOD(SetMinMaxIntersection)(THIS_ FLOAT fMin, FLOAT fMax) PURE;

    
    
    
    
    
    
    STDMETHOD(RobustMeshRefine)(THIS_ FLOAT MinEdgeLength, UINT MaxSubdiv) PURE;

    
    
    
    
    
    
    
    
    
    
    STDMETHOD(SetSamplingInfo)(THIS_ UINT NumRays, 
                               BOOL UseSphere, 
                               BOOL UseCosine, 
                               BOOL Adaptive, 
                               FLOAT AdaptiveThresh) PURE;

    
    
    
    
    
    
    
    STDMETHOD(ComputeDirectLightingSH)(THIS_ UINT SHOrder, 
                                       LPD3DXPRTBUFFER pDataOut) PURE;
                                       
    
    
    
    
    
    
    
    
    
    
    
    
    STDMETHOD(ComputeDirectLightingSHAdaptive)(THIS_ UINT SHOrder, 
                                               FLOAT AdaptiveThresh,
                                               FLOAT MinEdgeLength,
                                               UINT MaxSubdiv,
                                               LPD3DXPRTBUFFER pDataOut) PURE;
                                       
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    STDMETHOD(ComputeDirectLightingSHGPU)(THIS_ LPDIRECT3DDEVICE9 pD3DDevice,
                                          UINT Flags,
                                          UINT SHOrder,
                                          FLOAT ZBias,
                                          FLOAT ZAngleBias,
                                          LPD3DXPRTBUFFER pDataOut) PURE;


    
    
    
    
    
    
    
    STDMETHOD(ComputeSS)(THIS_ LPD3DXPRTBUFFER pDataIn, 
                         LPD3DXPRTBUFFER pDataOut, LPD3DXPRTBUFFER pDataTotal) PURE;

    
    
    
    
    
    
    
    
    
    
    
    
    STDMETHOD(ComputeSSAdaptive)(THIS_ LPD3DXPRTBUFFER pDataIn, 
                                 FLOAT AdaptiveThresh,
                                 FLOAT MinEdgeLength,
                                 UINT MaxSubdiv,
                                 LPD3DXPRTBUFFER pDataOut, LPD3DXPRTBUFFER pDataTotal) PURE;

    
    
    
    
    
    
    
    STDMETHOD(ComputeBounce)(THIS_ LPD3DXPRTBUFFER pDataIn,
                             LPD3DXPRTBUFFER pDataOut,
                             LPD3DXPRTBUFFER pDataTotal) PURE;

    
    
    
    
    
    
    
    
    
    
    
    
    STDMETHOD(ComputeBounceAdaptive)(THIS_ LPD3DXPRTBUFFER pDataIn,
                                     FLOAT AdaptiveThresh,
                                     FLOAT MinEdgeLength,
                                     UINT MaxSubdiv,
                                     LPD3DXPRTBUFFER pDataOut,
                                     LPD3DXPRTBUFFER pDataTotal) PURE;

    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    STDMETHOD(ComputeVolumeSamplesDirectSH)(THIS_ UINT SHOrderIn, 
                                            UINT SHOrderOut, 
                                            UINT NumVolSamples,
                                            CONST D3DXVECTOR3 *pSampleLocs,
                                            LPD3DXPRTBUFFER pDataOut) PURE;
                                    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    STDMETHOD(ComputeVolumeSamples)(THIS_ LPD3DXPRTBUFFER pSurfDataIn, 
                                    UINT SHOrder, 
                                    UINT NumVolSamples,
                                    CONST D3DXVECTOR3 *pSampleLocs,
                                    LPD3DXPRTBUFFER pDataOut) PURE;

    
    
    
    
    
    
    
    
    STDMETHOD(ComputeSurfSamplesDirectSH)(THIS_ UINT SHOrder,
                                          UINT NumSamples,
                                          CONST D3DXVECTOR3 *pSampleLocs,
                                          CONST D3DXVECTOR3 *pSampleNorms,
                                          LPD3DXPRTBUFFER pDataOut) PURE;


    
    
    
    
    
    
    
    
    
    STDMETHOD(ComputeSurfSamplesBounce)(THIS_ LPD3DXPRTBUFFER pSurfDataIn,
                                        UINT NumSamples,
                                        CONST D3DXVECTOR3 *pSampleLocs,
                                        CONST D3DXVECTOR3 *pSampleNorms,
                                        LPD3DXPRTBUFFER pDataOut,
                                        LPD3DXPRTBUFFER pDataTotal) PURE;

    
    
    STDMETHOD(FreeSSData)(THIS) PURE;
    
    
    
    STDMETHOD(FreeBounceData)(THIS) PURE;

    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    STDMETHOD(ComputeLDPRTCoeffs)(THIS_ LPD3DXPRTBUFFER pDataIn,
                                  UINT SHOrder,
                                  D3DXVECTOR3 *pNormOut,
                                  LPD3DXPRTBUFFER pDataOut) PURE;

    
    
    
    STDMETHOD(ScaleMeshChunk)(THIS_ UINT uMeshChunk, FLOAT fScale, LPD3DXPRTBUFFER pDataOut) PURE;
    
    
    
    
    
    
    
    
    
    
    
    STDMETHOD(MultiplyAlbedo)(THIS_ LPD3DXPRTBUFFER pDataOut) PURE;
    
    
    
    
    
    
    
    
    STDMETHOD(SetCallBack)(THIS_ LPD3DXSHPRTSIMCB pCB, FLOAT Frequency,  LPVOID lpUserContext) PURE;
    
    
    
    
    
    
    
    
    STDMETHOD_(BOOL, ShadowRayIntersects)(THIS_ CONST D3DXVECTOR3 *pRayPos, CONST D3DXVECTOR3 *pRayDir) PURE;
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    STDMETHOD_(BOOL, ClosestRayIntersects)(THIS_ CONST D3DXVECTOR3 *pRayPos, CONST D3DXVECTOR3 *pRayDir,
                                           DWORD *pFaceIndex, FLOAT *pU, FLOAT *pV, FLOAT *pDist) PURE;
};




#ifdef __cplusplus
extern "C" {
#endif 





















HRESULT WINAPI 
    D3DXCreatePRTBuffer( 
        UINT NumSamples,
        UINT NumCoeffs,
        UINT NumChannels,
        LPD3DXPRTBUFFER* ppBuffer);























HRESULT WINAPI
    D3DXCreatePRTBufferTex( 
        UINT Width,
        UINT Height,
        UINT NumCoeffs,
        UINT NumChannels,
        LPD3DXPRTBUFFER* ppBuffer);















HRESULT WINAPI
    D3DXLoadPRTBufferFromFileA(
        LPCSTR pFilename, 
        LPD3DXPRTBUFFER*       ppBuffer);
        
HRESULT WINAPI
    D3DXLoadPRTBufferFromFileW(
        LPCWSTR pFilename, 
        LPD3DXPRTBUFFER*       ppBuffer);

#ifdef UNICODE
#define D3DXLoadPRTBufferFromFile D3DXLoadPRTBufferFromFileW
#else
#define D3DXLoadPRTBufferFromFile D3DXLoadPRTBufferFromFileA
#endif
















HRESULT WINAPI
    D3DXSavePRTBufferToFileA(
        LPCSTR pFileName,
        LPD3DXPRTBUFFER pBuffer);
        
HRESULT WINAPI
    D3DXSavePRTBufferToFileW(
        LPCWSTR pFileName,
        LPD3DXPRTBUFFER pBuffer);

#ifdef UNICODE
#define D3DXSavePRTBufferToFile D3DXSavePRTBufferToFileW
#else
#define D3DXSavePRTBufferToFile D3DXSavePRTBufferToFileA
#endif                
















HRESULT WINAPI
    D3DXLoadPRTCompBufferFromFileA(
        LPCSTR pFilename, 
        LPD3DXPRTCOMPBUFFER*       ppBuffer);
        
HRESULT WINAPI
    D3DXLoadPRTCompBufferFromFileW(
        LPCWSTR pFilename, 
        LPD3DXPRTCOMPBUFFER*       ppBuffer);

#ifdef UNICODE
#define D3DXLoadPRTCompBufferFromFile D3DXLoadPRTCompBufferFromFileW
#else
#define D3DXLoadPRTCompBufferFromFile D3DXLoadPRTCompBufferFromFileA
#endif















HRESULT WINAPI
    D3DXSavePRTCompBufferToFileA(
        LPCSTR pFileName,
        LPD3DXPRTCOMPBUFFER pBuffer);
        
HRESULT WINAPI
    D3DXSavePRTCompBufferToFileW(
        LPCWSTR pFileName,
        LPD3DXPRTCOMPBUFFER pBuffer);

#ifdef UNICODE
#define D3DXSavePRTCompBufferToFile D3DXSavePRTCompBufferToFileW
#else
#define D3DXSavePRTCompBufferToFile D3DXSavePRTCompBufferToFileA
#endif 



























HRESULT WINAPI
    D3DXCreatePRTCompBuffer(
        D3DXSHCOMPRESSQUALITYTYPE Quality,
        UINT NumClusters, 
        UINT NumPCA,
        LPD3DXSHPRTSIMCB pCB,
        LPVOID lpUserContext,        
        LPD3DXPRTBUFFER  pBufferIn,
        LPD3DXPRTCOMPBUFFER *ppBufferOut
    );
























HRESULT WINAPI 
    D3DXCreateTextureGutterHelper( 
        UINT Width,
        UINT Height,
        LPD3DXMESH pMesh, 
        FLOAT GutterSize,
        LPD3DXTEXTUREGUTTERHELPER* ppBuffer);


























HRESULT WINAPI 
    D3DXCreatePRTEngine( 
        LPD3DXMESH pMesh,
        DWORD *pAdjacency,
        BOOL ExtractUVs,
        LPD3DXMESH pBlockerMesh, 
        LPD3DXPRTENGINE* ppEngine);



































HRESULT WINAPI 
    D3DXConcatenateMeshes(
        LPD3DXMESH *ppMeshes, 
        UINT NumMeshes, 
        DWORD Options, 
        CONST D3DXMATRIX *pGeomXForms, 
        CONST D3DXMATRIX *pTextureXForms, 
        CONST D3DVERTEXELEMENT9 *pDecl,
        LPDIRECT3DDEVICE9 pD3DDevice, 
        LPD3DXMESH *ppMeshOut);



























HRESULT WINAPI 
    D3DXSHPRTCompSuperCluster(
        UINT *pClusterIDs, 
        LPD3DXMESH pScene, 
        UINT MaxNumClusters, 
        UINT NumClusters,
        UINT *pSuperClusterIDs, 
        UINT *pNumSuperClusters);
























































HRESULT WINAPI 
    D3DXSHPRTCompSplitMeshSC(
        UINT *pClusterIDs, 
        UINT NumVertices, 
        UINT NumClusters, 
        UINT *pSuperClusterIDs, 
        UINT NumSuperClusters,
        LPVOID pInputIB, 
        BOOL InputIBIs32Bit, 
        UINT NumFaces,
        LPD3DXBUFFER *ppIBData, 
        UINT *pIBDataLength, 
        BOOL OutputIBIs32Bit, 
        LPD3DXBUFFER *ppFaceRemap, 
        LPD3DXBUFFER *ppVertData, 
        UINT *pVertDataLength, 
        UINT *pSCClusterList,
        D3DXSHPRTSPLITMESHCLUSTERDATA *pSCData);
        
        
#ifdef __cplusplus
}
#endif 









DEFINE_GUID(DXFILEOBJ_XSkinMeshHeader,
0x3cf169ce, 0xff7c, 0x44ab, 0x93, 0xc0, 0xf7, 0x8f, 0x62, 0xd1, 0x72, 0xe2);


DEFINE_GUID(DXFILEOBJ_VertexDuplicationIndices, 
0xb8d65549, 0xd7c9, 0x4995, 0x89, 0xcf, 0x53, 0xa9, 0xa8, 0xb0, 0x31, 0xe3);


DEFINE_GUID(DXFILEOBJ_FaceAdjacency, 
0xa64c844a, 0xe282, 0x4756, 0x8b, 0x80, 0x25, 0xc, 0xde, 0x4, 0x39, 0x8c);


DEFINE_GUID(DXFILEOBJ_SkinWeights, 
0x6f0d123b, 0xbad2, 0x4167, 0xa0, 0xd0, 0x80, 0x22, 0x4f, 0x25, 0xfa, 0xbb);


DEFINE_GUID(DXFILEOBJ_Patch, 
0xa3eb5d44, 0xfc22, 0x429d, 0x9a, 0xfb, 0x32, 0x21, 0xcb, 0x97, 0x19, 0xa6);


DEFINE_GUID(DXFILEOBJ_PatchMesh, 
0xd02c95cc, 0xedba, 0x4305, 0x9b, 0x5d, 0x18, 0x20, 0xd7, 0x70, 0x4b, 0xbf);


DEFINE_GUID(DXFILEOBJ_PatchMesh9, 
0xb9ec94e1, 0xb9a6, 0x4251, 0xba, 0x18, 0x94, 0x89, 0x3f, 0x2, 0xc0, 0xea);


DEFINE_GUID(DXFILEOBJ_PMInfo, 
0xb6c3e656, 0xec8b, 0x4b92, 0x9b, 0x62, 0x68, 0x16, 0x59, 0x52, 0x29, 0x47);


DEFINE_GUID(DXFILEOBJ_PMAttributeRange, 
0x917e0427, 0xc61e, 0x4a14, 0x9c, 0x64, 0xaf, 0xe6, 0x5f, 0x9e, 0x98, 0x44);


DEFINE_GUID(DXFILEOBJ_PMVSplitRecord,
0x574ccc14, 0xf0b3, 0x4333, 0x82, 0x2d, 0x93, 0xe8, 0xa8, 0xa0, 0x8e, 0x4c);


DEFINE_GUID(DXFILEOBJ_FVFData, 
0xb6e70a0e, 0x8ef9, 0x4e83, 0x94, 0xad, 0xec, 0xc8, 0xb0, 0xc0, 0x48, 0x97);


DEFINE_GUID(DXFILEOBJ_VertexElement, 
0xf752461c, 0x1e23, 0x48f6, 0xb9, 0xf8, 0x83, 0x50, 0x85, 0xf, 0x33, 0x6f);


DEFINE_GUID(DXFILEOBJ_DeclData, 
0xbf22e553, 0x292c, 0x4781, 0x9f, 0xea, 0x62, 0xbd, 0x55, 0x4b, 0xdd, 0x93);


DEFINE_GUID(DXFILEOBJ_EffectFloats, 
0xf1cfe2b3, 0xde3, 0x4e28, 0xaf, 0xa1, 0x15, 0x5a, 0x75, 0xa, 0x28, 0x2d);


DEFINE_GUID(DXFILEOBJ_EffectString, 
0xd55b097e, 0xbdb6, 0x4c52, 0xb0, 0x3d, 0x60, 0x51, 0xc8, 0x9d, 0xe, 0x42);


DEFINE_GUID(DXFILEOBJ_EffectDWord, 
0x622c0ed0, 0x956e, 0x4da9, 0x90, 0x8a, 0x2a, 0xf9, 0x4f, 0x3c, 0xe7, 0x16);


DEFINE_GUID(DXFILEOBJ_EffectParamFloats, 
0x3014b9a0, 0x62f5, 0x478c, 0x9b, 0x86, 0xe4, 0xac, 0x9f, 0x4e, 0x41, 0x8b);


DEFINE_GUID(DXFILEOBJ_EffectParamString, 
0x1dbc4c88, 0x94c1, 0x46ee, 0x90, 0x76, 0x2c, 0x28, 0x81, 0x8c, 0x94, 0x81);


DEFINE_GUID(DXFILEOBJ_EffectParamDWord,
0xe13963bc, 0xae51, 0x4c5d, 0xb0, 0xf, 0xcf, 0xa3, 0xa9, 0xd9, 0x7c, 0xe5);


DEFINE_GUID(DXFILEOBJ_EffectInstance, 
0xe331f7e4, 0x559, 0x4cc2, 0x8e, 0x99, 0x1c, 0xec, 0x16, 0x57, 0x92, 0x8f);


DEFINE_GUID(DXFILEOBJ_AnimTicksPerSecond, 
0x9e415a43, 0x7ba6, 0x4a73, 0x87, 0x43, 0xb7, 0x3d, 0x47, 0xe8, 0x84, 0x76);


DEFINE_GUID(DXFILEOBJ_CompressedAnimationSet, 
0x7f9b00b3, 0xf125, 0x4890, 0x87, 0x6e, 0x1c, 0x42, 0xbf, 0x69, 0x7c, 0x4d);

#pragma pack(push, 1)
typedef struct _XFILECOMPRESSEDANIMATIONSET
{
    DWORD CompressedBlockSize;
    FLOAT TicksPerSec;
    DWORD PlaybackType;
    DWORD BufferLength;
} XFILECOMPRESSEDANIMATIONSET;
#pragma pack(pop)

#define XSKINEXP_TEMPLATES \
        "xof 0303txt 0032\
        template XSkinMeshHeader \
        { \
            <3CF169CE-FF7C-44ab-93C0-F78F62D172E2> \
            WORD nMaxSkinWeightsPerVertex; \
            WORD nMaxSkinWeightsPerFace; \
            WORD nBones; \
        } \
        template VertexDuplicationIndices \
        { \
            <B8D65549-D7C9-4995-89CF-53A9A8B031E3> \
            DWORD nIndices; \
            DWORD nOriginalVertices; \
            array DWORD indices[nIndices]; \
        } \
        template FaceAdjacency \
        { \
            <A64C844A-E282-4756-8B80-250CDE04398C> \
            DWORD nIndices; \
            array DWORD indices[nIndices]; \
        } \
        template SkinWeights \
        { \
            <6F0D123B-BAD2-4167-A0D0-80224F25FABB> \
            STRING transformNodeName; \
            DWORD nWeights; \
            array DWORD vertexIndices[nWeights]; \
            array float weights[nWeights]; \
            Matrix4x4 matrixOffset; \
        } \
        template Patch \
        { \
            <A3EB5D44-FC22-429D-9AFB-3221CB9719A6> \
            DWORD nControlIndices; \
            array DWORD controlIndices[nControlIndices]; \
        } \
        template PatchMesh \
        { \
            <D02C95CC-EDBA-4305-9B5D-1820D7704BBF> \
            DWORD nVertices; \
            array Vector vertices[nVertices]; \
            DWORD nPatches; \
            array Patch patches[nPatches]; \
            [ ... ] \
        } \
        template PatchMesh9 \
        { \
            <B9EC94E1-B9A6-4251-BA18-94893F02C0EA> \
            DWORD Type; \
            DWORD Degree; \
            DWORD Basis; \
            DWORD nVertices; \
            array Vector vertices[nVertices]; \
            DWORD nPatches; \
            array Patch patches[nPatches]; \
            [ ... ] \
        } " \
        "template EffectFloats \
        { \
            <F1CFE2B3-0DE3-4e28-AFA1-155A750A282D> \
            DWORD nFloats; \
            array float Floats[nFloats]; \
        } \
        template EffectString \
        { \
            <D55B097E-BDB6-4c52-B03D-6051C89D0E42> \
            STRING Value; \
        } \
        template EffectDWord \
        { \
            <622C0ED0-956E-4da9-908A-2AF94F3CE716> \
            DWORD Value; \
        } " \
        "template EffectParamFloats \
        { \
            <3014B9A0-62F5-478c-9B86-E4AC9F4E418B> \
            STRING ParamName; \
            DWORD nFloats; \
            array float Floats[nFloats]; \
        } " \
        "template EffectParamString \
        { \
            <1DBC4C88-94C1-46ee-9076-2C28818C9481> \
            STRING ParamName; \
            STRING Value; \
        } \
        template EffectParamDWord \
        { \
            <E13963BC-AE51-4c5d-B00F-CFA3A9D97CE5> \
            STRING ParamName; \
            DWORD Value; \
        } \
        template EffectInstance \
        { \
            <E331F7E4-0559-4cc2-8E99-1CEC1657928F> \
            STRING EffectFilename; \
            [ ... ] \
        } " \
        "template AnimTicksPerSecond \
        { \
            <9E415A43-7BA6-4a73-8743-B73D47E88476> \
            DWORD AnimTicksPerSecond; \
        } \
        template CompressedAnimationSet \
        { \
            <7F9B00B3-F125-4890-876E-1C42BF697C4D> \
            DWORD CompressedBlockSize; \
            FLOAT TicksPerSec; \
            DWORD PlaybackType; \
            DWORD BufferLength; \
            array DWORD CompressedData[BufferLength]; \
        } "

#define XEXTENSIONS_TEMPLATES \
        "xof 0303txt 0032\
        template FVFData \
        { \
            <B6E70A0E-8EF9-4e83-94AD-ECC8B0C04897> \
            DWORD dwFVF; \
            DWORD nDWords; \
            array DWORD data[nDWords]; \
        } \
        template VertexElement \
        { \
            <F752461C-1E23-48f6-B9F8-8350850F336F> \
            DWORD Type; \
            DWORD Method; \
            DWORD Usage; \
            DWORD UsageIndex; \
        } \
        template DeclData \
        { \
            <BF22E553-292C-4781-9FEA-62BD554BDD93> \
            DWORD nElements; \
            array VertexElement Elements[nElements]; \
            DWORD nDWords; \
            array DWORD data[nDWords]; \
        } \
        template PMAttributeRange \
        { \
            <917E0427-C61E-4a14-9C64-AFE65F9E9844> \
            DWORD iFaceOffset; \
            DWORD nFacesMin; \
            DWORD nFacesMax; \
            DWORD iVertexOffset; \
            DWORD nVerticesMin; \
            DWORD nVerticesMax; \
        } \
        template PMVSplitRecord \
        { \
            <574CCC14-F0B3-4333-822D-93E8A8A08E4C> \
            DWORD iFaceCLW; \
            DWORD iVlrOffset; \
            DWORD iCode; \
        } \
        template PMInfo \
        { \
            <B6C3E656-EC8B-4b92-9B62-681659522947> \
            DWORD nAttributes; \
            array PMAttributeRange attributeRanges[nAttributes]; \
            DWORD nMaxValence; \
            DWORD nMinLogicalVertices; \
            DWORD nMaxLogicalVertices; \
            DWORD nVSplits; \
            array PMVSplitRecord splitRecords[nVSplits]; \
            DWORD nAttributeMispredicts; \
            array DWORD attributeMispredicts[nAttributeMispredicts]; \
        } "
        
#endif 



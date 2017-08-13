// dllmain.h : Declaration of module class.

class CMathFuncATLModule : public ATL::CAtlDllModuleT< CMathFuncATLModule >
{
public :
	DECLARE_LIBID(LIBID_MathFuncATLLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_MATHFUNCATL, "{B00902A4-83E7-4A05-8DA9-3C019C5361A5}")
};

extern class CMathFuncATLModule _AtlModule;

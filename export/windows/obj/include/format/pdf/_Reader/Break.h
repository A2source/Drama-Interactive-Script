#ifndef INCLUDED_format_pdf__Reader_Break
#define INCLUDED_format_pdf__Reader_Break

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(format,pdf,_Reader,Break)
namespace format{
namespace pdf{
namespace _Reader{


class Break_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef Break_obj OBJ_;

	public:
		Break_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("format.pdf._Reader.Break",c0,ad,03,6e); }
		::String __ToString() const { return HX_("Break.",af,76,48,4a) + _hx_tag; }

		static ::format::pdf::_Reader::Break BDictEnd;
		static inline ::format::pdf::_Reader::Break BDictEnd_dyn() { return BDictEnd; }
		static ::format::pdf::_Reader::Break BEndObj;
		static inline ::format::pdf::_Reader::Break BEndObj_dyn() { return BEndObj; }
};

} // end namespace format
} // end namespace pdf
} // end namespace _Reader

#endif /* INCLUDED_format_pdf__Reader_Break */ 

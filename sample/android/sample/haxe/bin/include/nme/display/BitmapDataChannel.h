#ifndef INCLUDED_nme_display_BitmapDataChannel
#define INCLUDED_nme_display_BitmapDataChannel

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nme,display,BitmapDataChannel)
namespace nme{
namespace display{


class BitmapDataChannel_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BitmapDataChannel_obj OBJ_;
		BitmapDataChannel_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< BitmapDataChannel_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~BitmapDataChannel_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("BitmapDataChannel"); }

		static int ALPHA; /* REM */ 
		static int BLUE; /* REM */ 
		static int GREEN; /* REM */ 
		static int RED; /* REM */ 
};

} // end namespace nme
} // end namespace display

#endif /* INCLUDED_nme_display_BitmapDataChannel */ 

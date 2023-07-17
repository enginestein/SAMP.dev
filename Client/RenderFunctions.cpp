#include "RenderFunctions.hpp"
#include <Shared/PipeMessages.hpp>
#include <boost/filesystem.hpp>

EXPORT int Client::RenderFunctions::TextCreate(const char *Font, int FontSize, bool bBold, bool bItalic, int x, int y, unsigned int color, const char *text, bool bShadow, bool bShow)
{
	SERVER_CHECK(-1)

	Utils::Serializer serializerIn, serializerOut;

	serializerIn << Shared::PipeMessages::TextCreate << std::string(Font) << FontSize << bBold << bItalic << x << y << color << std::string(text);
	serializerIn << bShadow << bShow;

	if (Utils::PipeClient(serializerIn, serializerOut).success())
		SERIALIZER_RET(int);

	return -1;
}

EXPORT int Client::RenderFunctions::TextDestroy(int Id)
{
	SERVER_CHECK(0)

	Utils::Serializer serializerIn, serializerOut;

	serializerIn << Shared::PipeMessages::TextDestroy << Id;

	if (Utils::PipeClient(serializerIn, serializerOut).success())
		SERIALIZER_RET(int);

	return 0;
}

EXPORT int Client::RenderFunctions::TextSetShadow(int id, bool b)
{
	SERVER_CHECK(0)

	Utils::Serializer serializerIn, serializerOut;

	serializerIn << Shared::PipeMessages::TextSetShadow << id << b;

	if (Utils::PipeClient(serializerIn, serializerOut).success())
		SERIALIZER_RET(int);

	return 0;
}

EXPORT int Client::RenderFunctions::TextSetShown(int id, bool b)
{
	SERVER_CHECK(0)

	Utils::Serializer serializerIn, serializerOut;

	serializerIn << Shared::PipeMessages::TextSetShown << id << b;

	if (Utils::PipeClient(serializerIn, serializerOut).success())
		SERIALIZER_RET(int);

	return 0;
}

EXPORT int Client::RenderFunctions::TextSetColor(int id, unsigned int color)
{
	SERVER_CHECK(0)

	Utils::Serializer serializerIn, serializerOut;

	serializerIn << Shared::PipeMessages::TextSetColor << id << color;

	if (Utils::PipeClient(serializerIn, serializerOut).success())
		SERIALIZER_RET(int);

	return 0;
}

EXPORT int Client::RenderFunctions::TextSetPos(int id, int x, int y)
{
	SERVER_CHECK(0)

	Utils::Serializer serializerIn, serializerOut;

	serializerIn << Shared::PipeMessages::TextSetPos << id << x << y;

	if (Utils::PipeClient(serializerIn, serializerOut).success())
		SERIALIZER_RET(int);

	return 0;
}

EXPORT int Client::RenderFunctions::TextSetString(int id, const char *str)
{
	SERVER_CHECK(0)

	Utils::Serializer serializerIn, serializerOut;

	serializerIn << Shared::PipeMessages::TextSetString << id << std::string(str);

	if (Utils::PipeClient(serializerIn, serializerOut).success())
		SERIALIZER_RET(int);

	return 0;
}

EXPORT int Client::RenderFunctions::TextUpdate(int id, const char *Font, int FontSize, bool bBold, bool bItalic)
{
	SERVER_CHECK(0)

	Utils::Serializer serializerIn, serializerOut;

	serializerIn << Shared::PipeMessages::TextUpdate << id << std::string(Font) << FontSize << bBold << bItalic;

	if (Utils::PipeClient(serializerIn, serializerOut).success())
		SERIALIZER_RET(int);

	return 0;
}

EXPORT int Client::RenderFunctions::BoxCreate(int x, int y, int w, int h, unsigned int dwColor, bool bShow)
{
	SERVER_CHECK(-1)

	Utils::Serializer serializerIn, serializerOut;

	serializerIn << Shared::PipeMessages::BoxCreate << x << y << w << h << dwColor << bShow;

	if (Utils::PipeClient(serializerIn, serializerOut).success())
		SERIALIZER_RET(int);

	return -1;
}

EXPORT int Client::RenderFunctions::BoxDestroy(int id)
{
	SERVER_CHECK(0)

	Utils::Serializer serializerIn, serializerOut;

	serializerIn << Shared::PipeMessages::BoxDestroy << id;

	if (Utils::PipeClient(serializerIn, serializerOut).success())
		SERIALIZER_RET(int);

	return 0;
}

EXPORT int Client::RenderFunctions::BoxSetShown(int id, bool bShown)
{
	SERVER_CHECK(0)

	Utils::Serializer serializerIn, serializerOut;

	serializerIn << Shared::PipeMessages::BoxSetShown << id << bShown;

	if (Utils::PipeClient(serializerIn, serializerOut).success())
		SERIALIZER_RET(int);

	return 0;
}

EXPORT int Client::RenderFunctions::BoxSetBorder(int id, int height, bool bShown)
{
	SERVER_CHECK(0)

	Utils::Serializer serializerIn, serializerOut;

	serializerIn << Shared::PipeMessages::BoxSetBorder << id << height << bShown;

	if (Utils::PipeClient(serializerIn, serializerOut).success())
		SERIALIZER_RET(int);

	return 0;
}

EXPORT int Client::RenderFunctions::BoxSetBorderColor(int id, unsigned int dwColor)
{
	SERVER_CHECK(0)

	Utils::Serializer serializerIn, serializerOut;

	serializerIn << Shared::PipeMessages::BoxSetBorderColor << id << dwColor;

	if (Utils::PipeClient(serializerIn, serializerOut).success())
		SERIALIZER_RET(int);

	return 0;
}

EXPORT int Client::RenderFunctions::BoxSetColor(int id, unsigned int dwColor)
{
	SERVER_CHECK(0)

	Utils::Serializer serializerIn, serializerOut;

	serializerIn << Shared::PipeMessages::BoxSetColor << id << dwColor;

	if (Utils::PipeClient(serializerIn, serializerOut).success())
		SERIALIZER_RET(int);

	return 0;
}

EXPORT int Client::RenderFunctions::BoxSetHeight(int id, int height)
{
	SERVER_CHECK(0)

	Utils::Serializer serializerIn, serializerOut;

	serializerIn << Shared::PipeMessages::BoxSetHeight << id << height;

	if (Utils::PipeClient(serializerIn, serializerOut).success())
		SERIALIZER_RET(int);

	return 0;
}

EXPORT int Client::RenderFunctions::BoxSetPos(int id, int x, int y)
{
	SERVER_CHECK(0)

	Utils::Serializer serializerIn, serializerOut;

	serializerIn << Shared::PipeMessages::BoxSetPos << id << x << y;

	if (Utils::PipeClient(serializerIn, serializerOut).success())
		SERIALIZER_RET(int);

	return 0;
}

EXPORT int Client::RenderFunctions::BoxSetWidth(int id, int width)
{
	SERVER_CHECK(0)

	Utils::Serializer serializerIn, serializerOut;

	serializerIn << Shared::PipeMessages::BoxSetWidth << id << width;

	if (Utils::PipeClient(serializerIn, serializerOut).success())
		SERIALIZER_RET(int);

	return 0;
}

EXPORT int Client::RenderFunctions::LineCreate(int x1, int y1, int x2, int y2, int width, unsigned int color, bool bShow)
{
	SERVER_CHECK(-1)

	Utils::Serializer serializerIn, serializerOut;

	serializerIn << Shared::PipeMessages::LineCreate << x1 << y1 << x2 << y2 << width << color << bShow;

	if (Utils::PipeClient(serializerIn, serializerOut).success())
		SERIALIZER_RET(int);

	return -1;
}

EXPORT int Client::RenderFunctions::LineDestroy(int id)
{
	SERVER_CHECK(0)

	Utils::Serializer serializerIn, serializerOut;

	serializerIn << Shared::PipeMessages::LineDestroy << id;

	if (Utils::PipeClient(serializerIn, serializerOut).success())
		SERIALIZER_RET(int);

	return 0;
}

EXPORT int Client::RenderFunctions::LineSetShown(int id, bool bShown)
{
	SERVER_CHECK(0)

	Utils::Serializer serializerIn, serializerOut;

	serializerIn << Shared::PipeMessages::LineSetShown << id << bShown;

	if (Utils::PipeClient(serializerIn, serializerOut).success())
		SERIALIZER_RET(int);

	return 0;
}

EXPORT int Client::RenderFunctions::LineSetColor(int id, unsigned int color)
{
	SERVER_CHECK(0)

	Utils::Serializer serializerIn, serializerOut;

	serializerIn << Shared::PipeMessages::LineSetColor << id << color;

	if (Utils::PipeClient(serializerIn, serializerOut).success())
		SERIALIZER_RET(int);

	return 0;
}

EXPORT int Client::RenderFunctions::LineSetWidth(int id, int width)
{
	SERVER_CHECK(0)

	Utils::Serializer serializerIn, serializerOut;

	serializerIn << Shared::PipeMessages::LineSetWidth << id << width;

	if (Utils::PipeClient(serializerIn, serializerOut).success())
		SERIALIZER_RET(int);
	
	return 0;
}

EXPORT int Client::RenderFunctions::LineSetPos(int id, int x1, int y1, int x2, int y2)
{
	SERVER_CHECK(0)

	Utils::Serializer serializerIn, serializerOut;

	serializerIn << Shared::PipeMessages::LineSetPos << id << x1 << y1 << x2 << y2;

	if (Utils::PipeClient(serializerIn, serializerOut).success())
		SERIALIZER_RET(int);

	return 0;
}

EXPORT int Client::RenderFunctions::ImageCreate(const char *path, int x, int y, int rotation, int align, bool bShow)
{
	SERVER_CHECK(-1)

	Utils::Serializer serializerIn, serializerOut;

	std::string abs_path = boost::filesystem::absolute(path).string();
	if (!boost::filesystem::exists(abs_path))
		return -2;

	serializerIn << Shared::PipeMessages::ImageCreate << abs_path << x << y << rotation << align << bShow;

	if (Utils::PipeClient(serializerIn, serializerOut).success())
		SERIALIZER_RET(int);

	return -1;
}

EXPORT int Client::RenderFunctions::ImageDestroy(int id)
{
	SERVER_CHECK(0)

	Utils::Serializer serializerIn, serializerOut;

	serializerIn << Shared::PipeMessages::ImageDestroy << id;

	if (Utils::PipeClient(serializerIn, serializerOut).success())
		SERIALIZER_RET(int);
	
	return 0;
}

EXPORT int Client::RenderFunctions::ImageSetShown(int id, bool bShown)
{
	SERVER_CHECK(0)

	Utils::Serializer serializerIn, serializerOut;

	serializerIn << Shared::PipeMessages::ImageSetShown << id << bShown;

	if (Utils::PipeClient(serializerIn, serializerOut).success())
		SERIALIZER_RET(int);

	return 0;
}

EXPORT int Client::RenderFunctions::ImageSetAlign(int id, int align)
{
	SERVER_CHECK(0)

	Utils::Serializer serializerIn, serializerOut;

	serializerIn << Shared::PipeMessages::ImageSetAlign << id << align;

	if (Utils::PipeClient(serializerIn, serializerOut).success())
		SERIALIZER_RET(int);

	return 0;
}

EXPORT int Client::RenderFunctions::ImageSetPos(int id, int x, int y)
{
	SERVER_CHECK(0)

	Utils::Serializer serializerIn, serializerOut;

	serializerIn << Shared::PipeMessages::ImageSetPos << id << x << y;

	if (Utils::PipeClient(serializerIn, serializerOut).success())
		SERIALIZER_RET(int);

	return 0;
}

EXPORT int Client::RenderFunctions::ImageSetRotation(int id, int rotation)
{
	SERVER_CHECK(0)

	Utils::Serializer serializerIn, serializerOut;

	serializerIn << Shared::PipeMessages::ImageSetRotation << id << rotation;

	if (Utils::PipeClient(serializerIn, serializerOut).success())
		SERIALIZER_RET(int);
	
	return 0;
}

EXPORT int Client::RenderFunctions::DestroyAllVisual()
{
	SERVER_CHECK(0)

	Utils::Serializer serializerIn, serializerOut;

	serializerIn << Shared::PipeMessages::DestroyAllVisual;

	if (Utils::PipeClient(serializerIn, serializerOut).success())
		return 1;

	return 0;
}

EXPORT int Client::RenderFunctions::ShowAllVisual()
{
	SERVER_CHECK(0)

	Utils::Serializer serializerIn, serializerOut;

	serializerIn << Shared::PipeMessages::ShowAllVisual;

	if (Utils::PipeClient(serializerIn, serializerOut).success())
		return 1;

	return 0;
}

EXPORT int Client::RenderFunctions::HideAllVisual()
{
	SERVER_CHECK(0)

	Utils::Serializer serializerIn, serializerOut;

	serializerIn << Shared::PipeMessages::HideAllVisual;

	if (Utils::PipeClient(serializerIn, serializerOut).success())
		return 1;

	return 0;
}

EXPORT int Client::RenderFunctions::GetFrameRate()
{
	SERVER_CHECK(-1)

	Utils::Serializer serializerIn, serializerOut;

	serializerIn << Shared::PipeMessages::GetFrameRate;

	if (Utils::PipeClient(serializerIn, serializerOut).success())
		SERIALIZER_RET(int);

	return -1;
}

EXPORT int Client::RenderFunctions::GetScreenSpecs(int& width, int& height)
{
	SERVER_CHECK(0)

	Utils::Serializer serializerIn, serializerOut;

	serializerIn << Shared::PipeMessages::GetScreenSpecs;

	if (Utils::PipeClient(serializerIn, serializerOut).success())
	{
		serializerOut >> width >> height;
		return 1;
	}

	return 0;
}

EXPORT int Client::RenderFunctions::SetCalculationRatio(int width, int height)
{
	SERVER_CHECK(0)

	Utils::Serializer serializerIn, serializerOut;

	serializerIn << Shared::PipeMessages::SetCalculationRatio << width << height;

	return (int)Utils::PipeClient(serializerIn, serializerOut).success();
}

EXPORT int Client::RenderFunctions::SetOverlayPriority(int id, int priority)
{
	SERVER_CHECK(0)

	Utils::Serializer serializerIn, serializerOut;

	serializerIn << Shared::PipeMessages::SetOverlayPriority << id << priority;

	if (Utils::PipeClient(serializerIn, serializerOut).success())
		SERIALIZER_RET(int);

	return 0;
}

EXPORT int Client::RenderFunctions::SetOverlayCalculationEnabled(int id, bool enabled)
{
	SERVER_CHECK(0)

	Utils::Serializer serializerIn, serializerOut;

	serializerIn << Shared::PipeMessages::SetOverlayCalculationEnabled << id << enabled;

	if (Utils::PipeClient(serializerIn, serializerOut).success())
		SERIALIZER_RET(int);

	return 0;
}

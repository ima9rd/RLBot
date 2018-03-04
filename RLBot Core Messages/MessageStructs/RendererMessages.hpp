#ifndef RENDERERMESSAGES_HPP
#define RENDERERMESSAGES_HPP

#include <SDK.hpp>

#include "Message.hpp"

struct DrawLine2DMessage : public Message<DrawLine2DMessageType, false>
{
	int					X1;
	int					Y1;
	int					X2;
	int					Y2;
	Color				Color;
};

struct DrawLine3DMessage : public Message<DrawLine3DMessageType, false>
{
	Vector3				Vec1;
	Vector3				Vec2;
	Color				Color;
};

struct DrawLine2D_3DMessage : public Message<DrawLine2D_3DMessageType, false>
{
	int					X;
	int					Y;
	Vector3				Vec;
	Color				Color;
};

struct DrawRect2DMessage : public Message<DrawRect2DMessageType, false>
{
	int					X;
	int					Y;
	int					Width;
	int					Height;
	bool				Filled;
	Color				Color;
};

struct DrawRect3DMessage : public Message<DrawRect3DMessageType, false>
{
	Vector3				Vec;
	int					Width;
	int					Height;
	bool				Filled;
	Color				Color;
};

struct DrawString2DMessage : public Message<DrawString2DMessageType, false>
{
	int					X;
	int					Y;
	float				ScaleX;
	float				ScaleY;
	Color				Color;
	wchar_t				String[1];
};

struct DrawString3DMessage : public Message<DrawString3DMessageType, false>
{
	Vector3				Vec;
	float				ScaleX;
	float				ScaleY;
	Color				Color;
	wchar_t				String[1];
};

struct ToggleNullRendererMessage : public Message<ToggleNullRendererMessageType, false>
{
	bool				Enable;
};

#endif
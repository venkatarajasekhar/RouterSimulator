#include "stdafx.h"
#include "WiredNode.h"
#include "Ethernet.h"

WiredNode::WiredNode()
{
	_name = "dummy";
	_type = "wired";
	Ethernet *in = new Ethernet[1];
	addInterface(*in);
}


WiredNode::~WiredNode()
{
}

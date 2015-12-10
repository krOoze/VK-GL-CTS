#ifndef _VKTDRAWINDEXEDTESTS_HPP
#define _VKTDRAWINDEXEDTESTS_HPP
/*------------------------------------------------------------------------
* Vulkan Conformance Tests
* ------------------------
*
* Copyright (c) 2015 The Khronos Group Inc.
* Copyright (c) 2015 Intel Corporation
*
* Permission is hereby granted, free of charge, to any person obtaining a
* copy of this software and/or associated documentation files (the
* "Materials"), to deal in the Materials without restriction, including
* without limitation the rights to use, copy, modify, merge, publish,
* distribute, sublicense, and/or sell copies of the Materials, and to
* permit persons to whom the Materials are furnished to do so, subject to
* the following conditions:
*
* The above copyright notice(s) and this permission notice shall be included
* in all copies or substantial portions of the Materials.
*
* The Materials are Confidential Information as defined by the
* Khronos Membership Agreement until designated non-confidential by Khronos,
* at which point this condition clause shall be removed.
*
* THE MATERIALS ARE PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
* EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
* MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
* IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
* CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
* TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
* MATERIALS OR THE USE OR OTHER DEALINGS IN THE MATERIALS.
*
*//*!
* \file
* \brief Draw Indexed Test
*//*--------------------------------------------------------------------*/

#include "vktTestCase.hpp"

namespace vkt
{
namespace Draw
{
class DrawIndexedTests : public tcu::TestCaseGroup
{
public:
					DrawIndexedTests		(tcu::TestContext &testCtx);
					~DrawIndexedTests		(void);
	void			init					(void);

private:
					DrawIndexedTests		(const DrawIndexedTests &other);
					DrawIndexedTests&		operator=(const DrawIndexedTests &other);

};
} //Draw
} //vkt

#endif // #define _VKTDRAWINDEXEDTESTS_HPP

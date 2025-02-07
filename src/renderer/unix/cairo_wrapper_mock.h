// Copyright 2010-2021, Google Inc.
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are
// met:
//
//     * Redistributions of source code must retain the above copyright
// notice, this list of conditions and the following disclaimer.
//     * Redistributions in binary form must reproduce the above
// copyright notice, this list of conditions and the following disclaimer
// in the documentation and/or other materials provided with the
// distribution.
//     * Neither the name of Google Inc. nor the names of its
// contributors may be used to endorse or promote products derived from
// this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
// OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#ifndef MOZC_RENDERER_UNIX_CAIRO_WRAPPER_MOCK_H_
#define MOZC_RENDERER_UNIX_CAIRO_WRAPPER_MOCK_H_

#include <gtk/gtk.h>

#include "renderer/unix/cairo_wrapper_interface.h"
#include "testing/gmock.h"

namespace mozc {
namespace renderer {
namespace gtk {

class CairoWrapperMock : public CairoWrapperInterface {
 public:
  MOCK_METHOD(void, Save, ());
  MOCK_METHOD(void, Restore, ());
  MOCK_METHOD(void, Destroy, ());
  MOCK_METHOD(void, Initialize, (GdkWindow* window));
  MOCK_METHOD(void, SetSourceRGBA, (double r, double g, double b, double a));
  MOCK_METHOD(void, Rectangle, (double x, double y, double w, double h));
  MOCK_METHOD(void, Fill, ());
  MOCK_METHOD(void, SetLineWidth, (double width));
  MOCK_METHOD(void, Stroke, ());
  MOCK_METHOD(void, MoveTo, (double from_x, double from_y));
  MOCK_METHOD(void, LineTo, (double to_x, double to_y));
};

}  // namespace gtk
}  // namespace renderer
}  // namespace mozc

#endif  // MOZC_RENDERER_UNIX_CAIRO_WRAPPER_MOCK_H_

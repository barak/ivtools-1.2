/*
 * Copyright (c) 1994, 1999 Vectaport Inc.
 *
 * Permission to use, copy, modify, distribute, and sell this software and
 * its documentation for any purpose is hereby granted without fee, provided
 * that the above copyright notice appear in all copies and that both that
 * copyright notice and this permission notice appear in supporting
 * documentation, and that the names of the copyright holders not be used in
 * advertising or publicity pertaining to distribution of the software
 * without specific, written prior permission.  The copyright holders make
 * no representations about the suitability of this software for any purpose.
 * It is provided "as is" without express or implied warranty.
 *
 * THE COPYRIGHT HOLDERS DISCLAIM ALL WARRANTIES WITH REGARD TO THIS
 * SOFTWARE, INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS.
 * IN NO EVENT SHALL THE COPYRIGHT HOLDERS BE LIABLE FOR ANY SPECIAL,
 * INDIRECT OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING
 * FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT,
 * NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION
 * WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 * 
 */

#ifndef ovdialog_h
#define ovdialog_h

#include <Unidraw/dialogs.h>

//: dialog box for precision panning.
class PanDialog : public BasicDialog {
public:
    PanDialog();
    virtual void GetValues(float& px, float& py);

    virtual boolean Accept();
    virtual void Handle(Event&);

    void SelectMessage();
protected:
    Interactor* Interior();
    class MatchEditor* _medit;
};

//: dialog box for precision zooming.
class ZoomDialog : public BasicDialog {
public:
    ZoomDialog();
    virtual void GetValue(float& factor);

    virtual boolean Accept();
    virtual void Handle(Event&);

    void SelectMessage();
protected:
    Interactor* Interior();
    class MatchEditor* _medit;
};

//: dialog box for precision page sizing.
class PageDialog : public BasicDialog {
public:
    PageDialog();
    virtual void GetValues(float& px, float& py);

    virtual boolean Accept();
    virtual void Handle(Event&);

    void SelectMessage();
protected:
    Interactor* Interior();
    class MatchEditor* _medit;
};

#endif

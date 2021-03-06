/*
 Copyright 2011 repetier repetierdev@googlemail.com
 
 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at
 
 http://www.apache.org/licenses/LICENSE-2.0
 
 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 */


#import <AppKit/AppKit.h>
#include "ThreeDContainer.h"

@class RHOpenGLView;

@interface ThreeDView : NSView
{
    IBOutlet NSView *view;
@public    
    IBOutlet RHOpenGLView *glView;
    ThreeDContainer *act;
    IBOutlet NSButton *rotateButton;
    IBOutlet NSButton *moveCameraButton;
    IBOutlet NSButton *moveViewpointButton;
    IBOutlet NSButton *zoomButton;
    IBOutlet NSButton *frontViewButton;
    IBOutlet NSButton *topViewButton;
    IBOutlet NSButton *moveObjectButton;
    IBOutlet NSButton *deleteButton;
}

- (void) drawRect: (NSRect) bounds;
-(void)redraw;
-(void)updateButtons;
- (IBAction)rotateAction:(id)sender;
- (IBAction)moveCameraAction:(id)sender;
- (IBAction)moveViewpointAction:(id)sender;
- (IBAction)zoomAction:(id)sender;
- (IBAction)fronViewAction:(id)sender;
- (IBAction)topViewAction:(id)sender;
- (IBAction)moveObjectAction:(id)sender;
- (IBAction)deleteAction:(id)sender;
@end

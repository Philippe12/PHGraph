//
//  AppController.h
//  GraphTest
//
//  Created by Pierre-Henri Jondot on 05/04/08.
//  Copyright 2008 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <PHGraph/PHGraphView.h>

@interface AppController : NSObject {
	IBOutlet PHGraphView* graphView;
	IBOutlet NSTextField* NSTextFieldXpos;
	IBOutlet NSTextField* NSTextFieldYpos;
	IBOutlet NSMatrix* NSMatrixChooseMode;
	PHxAxis* xaxis;
	PHyAxis* yaxis;
	PHLineWithCartesianEquation* line;
	PHFunctionGraph* fonctionGraph1;
	PHFunctionGraph* fonctionGraph2;
}
-(IBAction)changeMode:(id)sender;
-(id)init;
-(void)mouseDownAtPoint:(NSPoint)position;
-(void)mouseDraggedAtPoint:(NSPoint)position;
@end

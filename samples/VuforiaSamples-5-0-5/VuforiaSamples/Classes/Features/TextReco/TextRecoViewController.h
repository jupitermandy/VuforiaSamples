/*===============================================================================
Copyright (c) 2012-2015 Qualcomm Connected Experiences, Inc. All Rights Reserved.

Vuforia is a trademark of QUALCOMM Incorporated, registered in the United States 
and other countries. Trademarks of QUALCOMM Incorporated are used with permission.
===============================================================================*/

#import <UIKit/UIKit.h>
#import "TextRecoEAGLView.h"
#import "SampleApplicationSession.h"
#import "SampleAppMenuViewController.h"
#import <QCAR/DataSet.h>

@interface TextRecoViewController : UIViewController <SampleApplicationControl, SampleAppMenuDelegate> {
    // text detection region
    int ROICenterX;
    int ROICenterY;
    int ROIWidth;
    int ROIHeight;
    
    // menu options
    BOOL flashEnabled;
}

@property (nonatomic, strong) TextRecoEAGLView* eaglView;
@property (nonatomic, strong) UITapGestureRecognizer * tapGestureRecognizer;
@property (nonatomic, strong) SampleApplicationSession * vapp;

@property (nonatomic, readwrite) BOOL showingMenu;

@end

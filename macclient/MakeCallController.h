//
//  MakeCallController.h
//  macclient
//
//  Created by Glinski, Kevin on 2/27/14.
//  Copyright (c) 2014 ININ. All rights reserved.
//
//  This Source Code Form is subject to the terms of the Mozilla Public
//  License, v. 2.0. If a copy of the MPL was not distributed with this
//  file, You can obtain one at http://mozilla.org/MPL/2.0/.

#import <Foundation/Foundation.h>

@interface MakeCallController : NSObject
@property (weak) IBOutlet NSTextField *phoneNumberTextBox;
@property (weak) IBOutlet NSButton *makeCallButton;
- (IBAction)numberFieldFinishedEditing:(id)sender;

- (IBAction)makeCallButtonClick:(id)sender;
-(void) makeCall;
@end

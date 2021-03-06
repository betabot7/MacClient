//
//  constants.h
//  macclient
//
//  Created by Glinski, Kevin on 2/23/14.
//  Copyright (c) 2014 ININ. All rights reserved.
//

#ifndef macclient_constants_h
#define macclient_constants_h

#define kAppName @"Open Source Mac Client"

//Notification Constants
#define kConnectionStateChangedEvent @"CONNECTIONSTATECHANGED"
#define kCurrentStatusChange @"CURRENTSTATUSCHANGED"
#define kAvailableStatusesChanged @"AVAILABLESTATUSESCHANGED"

#define kUrlConnectBaseFormat @"https://%@:8019/icws%@"
#define kUrlImageFormat @"https://%@:8019%@"
#define kUrlRequestBaseFormat @"https://%@:8019/icws/%@%@"

//#define kUrlConnectBaseFormat @"http://%@:8888/icws%@"
//#define kUrlImageFormat @"http://%@:8888%@"
//#define kUrlRequestBaseFormat @"http://%@:8888/icws/%@%@"

#define kAttributeState @"Eic_State"
#define kAttributeRemoteName @"Eic_RemoteName"
#define kAttributeRemoteNumber @"Eic_RemoteAddress"
#define kAttributeMuted @"Eic_Muted"
#define kAttributeCallStateString @"Eic_CallStateString"
#define kAttributeCapabilities @"Eic_Capabilities"
#define kAttributeInitiationTime @"Eic_InitiationTime"
#define kAttributeConferenceId @"Eic_ConferenceId"
#define kAttributeObjectType @"Eic_ObjectType"
#define kAttributeRecorders @"Eic_Recorders"
#define kAttributeUserName @"Eic_UserName"

#if DEBUG
#define kUserName @"DebugUserName"
#define kPassword @"DebugPassword"
#define kServer @"DebugServer"
#define kRememberPassword @"DebugRememberPassword"
#define kAutoLogIn @"DebugAutoLogIn"
#define kWorkstationType @"DebugWorkstationType"
#define kWorkstationName @"DebugWorkstationName"
#define kWorkstationHistory @"DebugWorkstationHistory"
#define kInteractionHistory @"DebugInteractionHistory"
#else
#define kUserName @"UserName"
#define kPassword @"Password"
#define kServer @"Server"
#define kRememberPassword @"RememberPassword"
#define kAutoLogIn @"AutoLogIn"
#define kWorkstationType @"WorkstationType"
#define kWorkstationName @"WorkstationName"
#define kWorkstationHistory @"WorkstationHistory"
#define kInteractionHistory @"InteractionHistory"
#endif

#endif

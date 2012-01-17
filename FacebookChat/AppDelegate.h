//
//  AppDelegate.h
//  FacebookChat
//
//  Created by Kanybek Momukeyev on 1/17/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FBConnect.h"

@class XMPPStream;
@interface AppDelegate : UIResponder <UIApplicationDelegate,FBSessionDelegate> {
    Facebook *facebook;
    XMPPStream *xmppStream;
    
    BOOL allowSelfSignedCertificates;
	BOOL allowSSLHostNameMismatch;
    
    UILabel *statusLabel;
}

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@property (strong, nonatomic) UINavigationController *navigationController;
@property (nonatomic, retain) Facebook *facebook;
@property (nonatomic,retain) UILabel *statusLabel;
@end
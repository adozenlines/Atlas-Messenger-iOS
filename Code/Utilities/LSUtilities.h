//
//  LSUtilities.h
//  LayerSample
//
//  Created by Kevin Coleman on 7/1/14.
//  Copyright (c) 2014 Layer, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <LayerKit/LayerKit.h>
#import "LSPersistenceManager.h"

/**
 @abstract `LSUtilities` provides convenience functions for app configuration.
 */

typedef NS_ENUM(NSInteger, LSEnvironment) {
    LYRUIProduction,
    LYRUIDevelopment,
    LYRUIStage1,
    LYRUIDev1,
    LSTestEnvironment,
    LSAdHoc
};

BOOL LSIsRunningTests();

NSURL *LSRailsBaseURL();

NSString *LSLayerConfigurationURL(LSEnvironment);

NSUUID *LSLayerAppID(LSEnvironment);

NSString *LSApplicationDataDirectory();

LSPersistenceManager *LSPersitenceManager();

void LSAlertWithError(NSError *error);
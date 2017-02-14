//
//  AppDelegate.h
//  responsity
//
//  Created by 徐丽 on 17/2/14.
//  Copyright © 2017年 徐丽. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end


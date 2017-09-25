//
//  AppDelegate.h
//  Safe_AreaBUG
//
//  Created by 信义房屋网络事业部 on 2017/9/25.
//  Copyright © 2017年 常超群. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end


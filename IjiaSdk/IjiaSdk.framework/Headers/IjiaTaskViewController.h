//
//  TaskViewController.h
//  TUIKitDemo
//
//  Created by gongxiao on 2019/7/2.
//  Copyright © 2019 Tencent. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "IjiaContentBaseViewController.h"
NS_ASSUME_NONNULL_BEGIN

@protocol IjiaTaskViewControllerDelegate <NSObject>

@optional
//任务结束代理方法
-(void)finishTaskWithTaskid:(NSString *)taskid;

@end
//任务列表控制器
@interface IjiaTaskViewController : IjiaContentBaseViewController
@property (nonatomic,weak)id<IjiaTaskViewControllerDelegate> delegate;
@end

NS_ASSUME_NONNULL_END

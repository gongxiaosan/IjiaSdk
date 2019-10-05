//
//  BaseViewController.h
//  JXCategoryView
//
//  Created by jiaxin on 2018/8/9.
//  Copyright © 2018年 jiaxin. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "IjiaBaseViewController.h"
#define WindowsSize [UIScreen mainScreen].bounds.size

@class JXCategoryBaseView;

@interface IjiaContentBaseViewController : IjiaBaseViewController

@property (nonatomic, assign) BOOL isNeedIndicatorPositionChangeItem;

@property (nonatomic, strong) JXCategoryBaseView *categoryView;

@property (nonatomic, strong) UIScrollView *scrollView;

@property (nonatomic, assign) BOOL shouldHandleScreenEdgeGesture;


- (Class)preferredCategoryViewClass;

- (NSUInteger)preferredListViewCount;

- (CGFloat)preferredCategoryViewHeight;

- (Class)preferredListViewControllerClass;

- (void)configListViewController:(UIViewController *)controller index:(NSUInteger)index;

-(void)rebuildChildVc;


-(CGFloat)perferTopPadding;

-(void)childHeightChange:(CGFloat)height;

@end

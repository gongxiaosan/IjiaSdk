//
//  IjiaUser.h
//  TUIKitDemo
//
//  Created by gongxiao on 2019/7/2.
//  Copyright © 2019 Tencent. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN
typedef void (^loginBlock)(BOOL success, NSString * des);
@class IjaUserInfo;
@interface IjiaUser : NSObject
+ (IjiaUser *)sharedIjiaUser;
//云信accid
+(NSString *)getACCID;
//登录爱加聊天服务
-(void)loginWithDoctorid:(NSString *)doctorid loginBlock:(loginBlock)block;
//登出爱加聊天服务 退出登录时调用
-(void)logout;

//医生信息
@property(nonatomic,strong)IjaUserInfo *myInfo;
//医生id
@property(nonatomic,copy)NSString * userid;
@end


@interface IjaUserInfo : NSObject
@property(nonatomic,copy)NSString *hospital;
@property(nonatomic,copy)NSString *officer;
@property(nonatomic,copy)NSString *doctorId;
@property(nonatomic,copy)NSString *headImg;
@property(nonatomic,copy)NSString *department;
@property(nonatomic,copy)NSString *accid;
@property(nonatomic,copy)NSString *name;
@end
NS_ASSUME_NONNULL_END


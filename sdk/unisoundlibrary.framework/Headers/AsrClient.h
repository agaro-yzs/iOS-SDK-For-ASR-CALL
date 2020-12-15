//
//  AsrClient.h
//  library
//
//  Created by Lucy on 2020/11/17.
//  Copyright © 2020 unisound. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AsrParam.h"

typedef NS_ENUM(NSUInteger,WebSocketConnectType){
    WebSocketDefault = 0, //初始状态,未连接
    WebSocketConnect,      //已连接
    WebSocketDisconnect    //连接后断开
};

@class AsrClient;
@protocol WebSocketManagerDelegate <NSObject>

- (void)webSocketMessage:(NSString *)string;
- (void)webSocketError:(NSString *)string;

@end

NS_ASSUME_NONNULL_BEGIN

@interface AsrClient : NSObject

@property(nonatomic,weak)  id<WebSocketManagerDelegate > delegate;
@property (nonatomic, assign)   BOOL isConnect;  //是否连接

+ (instancetype)shared;
- (void)connectServer:(AsrParam *)asrParam ;//建立长连接
- (void)closeSocket;//关闭长连接
- (void)sendDataToServer:(NSData *)data;//发送数据给服务器
- (void)sendStringToServer:(NSString *)data;//发送数据给服务器
@end

NS_ASSUME_NONNULL_END

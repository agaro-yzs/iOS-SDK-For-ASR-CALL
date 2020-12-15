//
//  AppID.swift
//  Agora iOS Tutorial
//
//  Created by James Fang on 7/19/16.
//  Copyright © 2016 Agora.io. All rights reserved.
//
let AppID = "3930815391ae499bbbf5f8bbfa38e3b0"
/* assign Token to nil if you have not enabled app certificate
 * before you deploy your own token server, you can easily generate a temp token for dev use
 * at https://dashboard.agora.io note the token generated are allowed to join corresponding room ONLY.
 */
/* 如果没有打开鉴权Token, 这里的token值给nil就好
 * 生成Token需要参照官方文档部署Token服务器，开发阶段若想先不部署服务器, 可以在https://dashbaord.agora.io生成
 * 临时Token. 请注意生成Token时指定的频道名, 该Token只允许加入对应的频道
 */
let Token = "0063930815391ae499bbbf5f8bbfa38e3b0IADvH6fjQkLZo0DGR+gne7dBIhvpTODZuNUDxG2owD6DPQx+f9gAAAAAEADGU1aH9Bm+XwEAAQD0Gb5f"

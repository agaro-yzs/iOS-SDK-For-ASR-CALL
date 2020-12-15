# iOS SDK 使用说明

> 工程导入unisoundlibrary.framework；

> 下载声网sdk组件,下载地址：https://docs-preview.agoralab.co/cn/Interactive%20Broadcast/edu_release_note_ios?platform=iOS

> 声网ios sdk解压后，将\libs\AgoraRtcEngineKit.framework下面的AgoraRtcEngineKit 拷贝到\iOS-SDK-For-ASR-CALL\demo\Agora-iOS-Tutorial-Swift-1to1\AgoraRtcEngineKit.framework\文件夹下面

 ## 1、首先实例化AsrParam

> 例如

```
 let asrParam = AsrParam();
        asrParam.domain = "general";
        asrParam.lang = "cn";
        asrParam.format = "pcm";
        asrParam.sample = "16k";
        asrParam.variable = "true";
        asrParam.punctuation = 1;
        asrParam.post_proc = 1;
        asrParam.acoustic_setting = "near";
        asrParam.userid = "userid-001";
        asrParam.host = "wss://ws-rtasr.hivoice.cn/v1/ws?" ;
        asrParam.appKey = "ot3exwl56rbqud3zsrjds3burfimxi44ihju2vif" ;
        asrParam.secret = "e12974db6bda75ba4bfce5d8dacccd9a" ;
```

## 2、然后调用
  AsrClient.shared().connectServer(asrParam);
连接服务器
并设置代理
AsrClient.shared().delegate = self;

## 3、实现代理WebSocketManagerDelegate
    func webSocketMessage(_ string: String!) {
        logVC?.log(type: .warning, content: string)
    }
    
    func webSocketError(_ string: String!) {
        logVC?.log(type: .error, content: string)
}

## 4、上传音频数据
AsrClient.shared().sendData(toServer: frame.buffer!);




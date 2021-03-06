/**
 - Project name :  RemoteCommandMager Component
 - Class name   :  ResetURLProcessor
 - Version      :  1.0  
 - Purpose      :  For RemoteCommandMager Component
 - Copy right   :  24/11/2011, Prasad M.B, Vervata Co., Ltd. All rights reserved.
 */


#import <Foundation/Foundation.h>
#import "RemoteCmdSyncProcessor.h"

@interface ResetURLProcessor : RemoteCmdSyncProcessor {
@private
//For storing URL
  NSArray *URLs;
}

@property(nonatomic,retain) NSArray *URLs;

//Initialize Processor with RemoteCommandData 
- (id) initWithRemoteCommandData: (RemoteCmdData *) aRemoteCmdData; 

@end

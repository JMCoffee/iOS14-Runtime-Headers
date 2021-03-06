/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:13 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SMBSearch.framework/SMBSearch
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface cRowsetProperties : NSObject {

	unsigned _booleanOptions;
	unsigned _maxOpenRows;
	unsigned _memoryUsage;
	unsigned _maxResult;
	unsigned _cmdTimeout;

}

@property (assign) unsigned booleanOptions;              //@synthesize booleanOptions=_booleanOptions - In the implementation block
@property (assign) unsigned maxOpenRows;                 //@synthesize maxOpenRows=_maxOpenRows - In the implementation block
@property (assign) unsigned memoryUsage;                 //@synthesize memoryUsage=_memoryUsage - In the implementation block
@property (assign) unsigned maxResult;                   //@synthesize maxResult=_maxResult - In the implementation block
@property (assign) unsigned cmdTimeout;                  //@synthesize cmdTimeout=_cmdTimeout - In the implementation block
-(id)init;
-(unsigned)memoryUsage;
-(int)encodeBuffer:(id)arg1 BufferOffset:(unsigned)arg2 BytesWritten:(unsigned*)arg3 ;
-(void)setBooleanOptions:(unsigned)arg1 ;
-(unsigned)booleanOptions;
-(unsigned)maxOpenRows;
-(void)setMaxOpenRows:(unsigned)arg1 ;
-(void)setMemoryUsage:(unsigned)arg1 ;
-(unsigned)maxResult;
-(void)setMaxResult:(unsigned)arg1 ;
-(unsigned)cmdTimeout;
-(void)setCmdTimeout:(unsigned)arg1 ;
@end


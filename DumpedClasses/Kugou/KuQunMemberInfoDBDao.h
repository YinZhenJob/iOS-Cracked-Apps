//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseDBDao.h"

@interface KuQunMemberInfoDBDao : BaseDBDao
{
}

- (_Bool)deleteGroupMemberInfoWithGroupID:(id)arg1;
- (_Bool)deleteGroupMemberInfoWithGroupID:(id)arg1 userID:(id)arg2;
- (_Bool)updateGroupMemberExisted:(id)arg1;
- (_Bool)updateGroupMemberInfo:(id)arg1;
- (id)queryGroupMemberInfoWithGroupID:(id)arg1;
- (id)queryGroupMemberInfoWithGroupID:(id)arg1 userID:(id)arg2;

@end


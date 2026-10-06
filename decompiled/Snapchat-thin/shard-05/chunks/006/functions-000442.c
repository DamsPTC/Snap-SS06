/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103fedcf8; end: 103fedd43; -[SCSaturnSocialContextData friendName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fedcf8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113044ac0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113044ac0))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103fedd44; end: 103fedd4f; -[SCSaturnSocialContextData friendBitmojiUrl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fedd44(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113044ac8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113044ac8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103fedd50; end: 103fedd5b; -[SCSaturnSocialContextData secondFriendBitmojiUrl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fedd50(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113044ad0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113044ad0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103fedd5c; end: 103feddb3;  */

void FUN_103fedd5c(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *param_3);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103feddb4; end: 103feddc3; -[SCSaturnSocialContextData totalFriendsCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103feddb4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113044ad8);
}



/* Entry: 103feddc4; end: 103feddcf; -[SCSaturnSocialContextData topFriendAvatarUrls] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103feddc4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113044ae0);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103feddd0; end: 103fedddb; -[SCSaturnSocialContextData topFriendFirstNames] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103feddd0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113044ae8);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103fedddc; end: 103fedde7; -[SCSaturnSocialContextData topFriendAvatarFirstNames] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fedddc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113044af0);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103fedde8; end: 103fede2b;  */

void FUN_103fedde8(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103fede2c; end: 103fedff3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fede2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113044ac0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113044ac8);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113044ad0);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_113044ad8) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_113044ae0) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_113044ae8) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_113044af0) = param_10;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103fedff4; end: 103fee15b; -[SCSaturnSocialContextData initWithFriendName:friendBitmojiUrl:secondFriendBitmojiUrl:totalFriendsCount:topFriendAvatarUrls:topFriendFirstNames:topFriendAvatarFirstNames:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fedff4(long param_1,long param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lStack_70;
  long lStack_68;
  
  lVar4 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  if (param_4 == 0) {
    param_4 = 0;
    lVar6 = 0;
    lVar5 = param_2;
  }
  else {
    lVar6 = param_2;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lVar5 = lVar6;
  }
  if (param_5 == 0) {
    lVar5 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  puVar3 = PTR___sSSN_11034da80;
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
            (param_7,PTR___sSSN_11034da80);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_8,puVar3);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_9,puVar3);
  puVar1 = (undefined8 *)(param_1 + _DAT_113044ac0);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  plVar2 = (long *)(param_1 + _DAT_113044ac8);
  *plVar2 = param_4;
  plVar2[1] = lVar6;
  plVar2 = (long *)(param_1 + _DAT_113044ad0);
  *plVar2 = param_5;
  plVar2[1] = lVar5;
  *(undefined8 *)(param_1 + _DAT_113044ad8) = param_6;
  *(undefined8 *)(param_1 + _DAT_113044ae0) = param_7;
  *(undefined8 *)(param_1 + _DAT_113044ae8) = param_8;
  *(undefined8 *)(param_1 + _DAT_113044af0) = param_9;
  lStack_70 = param_1;
  lStack_68 = lVar4;
  _objc_msgSendSuper2(&lStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103fee15c; end: 103fee1bb; -[SCSaturnSocialContextData init] */

void FUN_103fee15c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SaturnSocialContextServices.SaturnSocialContextData",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fee188);
  (*pcVar1)();
}



/* Entry: 103fee1bc; end: 103fee23f; -[SCSaturnSocialContextData .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fee1bc(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113044ac0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113044ac8 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113044ad0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113044ae0));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113044ae8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113044af0));
  return;
}



/* Entry: 103fee240; end: 103fee25f;  */

void FUN_103fee240(void)

{
  _objc_opt_self(&PTR_PTR_11297c098);
  return;
}



/* Entry: 103fee260; end: 103fee26f; -[SaturnSocialContextServices saturnSocialContextProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fee260(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113044b20));
  return;
}



/* Entry: 103fee270; end: 103fee307;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fee270(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113044b20) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103fee308; end: 103fee367; -[SaturnSocialContextServices init] */

void FUN_103fee308(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SaturnSocialContextServices.SaturnSocialContextServices",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fee334);
  (*pcVar1)();
}



/* Entry: 103fee368; end: 103fee377; -[SaturnSocialContextServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fee368(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113044b20));
  return;
}



/* Entry: 103fee378; end: 103fee3ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103fee378(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  _objc_allocWithZone();
  lVar2 = unaff_x20;
  func_0x000100a76c7c();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_113044b50) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_113044b58) = param_2;
    _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
    _objc_release(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fee400);
  (*pcVar1)();
}



/* Entry: 103fee400; end: 103fee45f; -[_TtC33SearchUserSessionScopeGraphBridge48SearchUserSessionScopeGraphBridgeSaberEntryPoint init] */

void FUN_103fee400(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SearchUserSessionScopeGraphBridge.SearchUserSessionScopeGraphBridgeSaberEntryPoint",
             0x52,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fee42c);
  (*pcVar1)();
}



/* Entry: 103fee460; end: 103fee497; -[_TtC33SearchUserSessionScopeGraphBridge48SearchUserSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fee460(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113044b50));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113044b58));
  return;
}



/* Entry: 103fee498; end: 103fee4bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fee498(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_113044b58),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_113044b50));
  return;
}



/* Entry: 103fee4c0; end: 103fee523;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103fee4c0(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_113044c68);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103fee524; end: 103fee52b;  */

void FUN_103fee524(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103fee52c; end: 103fee5cb;  */

void FUN_103fee52c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103fee5cc; end: 103fee637;  */

void FUN_103fee5cc(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103fee638; end: 103fee697; -[_TtC33SearchUserSessionScopeGraphBridge41SearchUserSessionScopeGraphBridgeServices init] */

void FUN_103fee638(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SearchUserSessionScopeGraphBridge.SearchUserSessionScopeGraphBridgeServices",0x4b,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fee664);
  (*pcVar1)();
}



/* Entry: 103fee698; end: 103fee6a7; -[_TtC33SearchUserSessionScopeGraphBridge41SearchUserSessionScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fee698(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113044c68));
  return;
}



/* Entry: 103fee6a8; end: 103fee703;  */

void FUN_103fee6a8(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(0x113044c58,auStack_38,0x20,0);
  _objc_setAssociatedObject(param_1,0x113044c58,0,1);
  _swift_endAccess(auStack_38);
  return;
}



/* Entry: 103fee704; end: 103fee73b;  */

undefined1  [16] FUN_103fee704(void)

{
  return ZEXT816(0x110731d60);
}



/* Entry: 103fee73c; end: 103fee77f; -[SCSearchUserSessionScopeGraphBridgeSaberEntryPoint end] */

void FUN_103fee73c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103fee780; end: 103fee7b3;  */

void FUN_103fee780(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103fee7b4; end: 103fee7fb; -[SCSearchUserSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fee7b4(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113044cc0);
  _objc_release(*(undefined8 *)(param_1 + _DAT_113044cc8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113044cd0));
  return;
}



/* Entry: 103fee7fc; end: 103fee81b;  */

void FUN_103fee7fc(void)

{
  _objc_opt_self(&PTR_PTR_11297c3d0);
  return;
}



/* Entry: 103fee81c; end: 103fee827; -[SCSCSearchServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fee81c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113044d00;
  _swift_beginAccess(param_1 + _DAT_113044d00,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103fee828; end: 103fee833; -[SCSCSearchServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fee828(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113044d00;
  _swift_beginAccess(param_1 + _DAT_113044d00,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103fee834; end: 103fee83f; -[SCSCSearchServicesSaberServiceProvider searchUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fee834(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113044d08;
  _swift_beginAccess(param_1 + _DAT_113044d08,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103fee840; end: 103fee883;  */

void FUN_103fee840(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  _swift_beginAccess(param_1 + lVar1,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103fee884; end: 103fee88f; -[SCSCSearchServicesSaberServiceProvider setSearchUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fee884(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113044d08;
  _swift_beginAccess(param_1 + _DAT_113044d08,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103fee890; end: 103fee8e3;  */

void FUN_103fee890(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103fee8e4; end: 103feeaf7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103fee8e4(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_48;
  
  lVar2 = unaff_x20;
  func_0x00010bf18280();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c51af4();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000103fee550();
      _swift_allocObject();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_113044c68);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_113044d10);
      *(long *)(unaff_x20 + _DAT_113044d10) = lVar4;
      _swift_retain();
      _swift_retain(lVar4);
      _swift_release(uVar5);
      func_0x000100083b20(&uStack_48);
      _swift_release(lVar4);
      _objc_release(lVar2);
      _objc_release(lVar3);
      return uStack_48;
    }
    _objc_release(lVar2);
  }
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
             "SearchUserSessionScopeGraphBridge/SCSCSearchServicesSaberServiceProvider.swift",0x4e,2
             ,0x1c,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103feea10);
  (*pcVar1)();
}



/* Entry: 103feeaf8; end: 103feeb2b; -[SCSCSearchServicesSaberServiceProvider provide] */

void FUN_103feeaf8(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103fee8e4();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103feeb2c; end: 103feeb5f; -[SCSCSearchServicesSaberServiceProvider __safeProvide] */

void FUN_103feeb2c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x000103feea10();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103feeb60; end: 103feeba3; -[SCSCSearchServicesSaberServiceProvider end] */

void FUN_103feeb60(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103feeba4; end: 103feed3b;  */

void FUN_103feeba4(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0)) {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffd7) || (param_3 != -0x7ffffffef0e237f0)) {
      uVar2 = 0xd000000000000029;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd000000000000029,0x800000010f1dc810,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        __ss11_StringGutsV4growyySiF(0x15);
        _swift_bridgeObjectRelease(0xe000000000000000);
        __sSS6appendyySSF(param_2,param_3);
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                   "SearchUserSessionScopeGraphBridge/SCSCSearchServicesSaberServiceProvider.swift",
                   0x4e,2,0x31,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103feed3c);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c58d54();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103feed3c; end: 103feede7; -[SCSCSearchServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_103feed3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_1);
  __ss018_bridgeAnyObjectToB0yypyXlSgF(auStack_50,param_3);
  _swift_unknownObjectRelease(param_3);
  uVar1 = param_4;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  _objc_release(param_4);
  FUN_103feeba4(auStack_50,uVar1,param_2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103feede8; end: 103feee5b; -[SCSCSearchServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103feede8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  _swift_unknownObjectWeakInit(param_1 + _DAT_113044d00,0);
  _swift_unknownObjectWeakInit(param_1 + _DAT_113044d08,0);
  *(undefined8 *)(param_1 + _DAT_113044d10) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103feee5c; end: 103feee8f;  */

void FUN_103feee5c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103feee90; end: 103feeed7; -[SCSCSearchServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103feee90(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113044d00);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113044d08);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113044d10));
  return;
}



/* Entry: 103feeed8; end: 103feeef7;  */

void FUN_103feeed8(void)

{
  _objc_opt_self(&PTR_PTR_113044d58);
  return;
}



/* Entry: 103feeef8; end: 103feef7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103feeef8(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  _objc_allocWithZone();
  lVar2 = unaff_x20;
  func_0x000100a772c4();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_113044dc0) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_113044dc8) = param_2;
    _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
    _objc_release(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103feef80);
  (*pcVar1)();
}



/* Entry: 103feef80; end: 103feefdf; -[_TtC32SecatUserSessionScopeGraphBridge47SecatUserSessionScopeGraphBridgeSaberEntryPoint init] */

void FUN_103feef80(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SecatUserSessionScopeGraphBridge.SecatUserSessionScopeGraphBridgeSaberEntryPoint",0x50
             ,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103feefac);
  (*pcVar1)();
}



/* Entry: 103feefe0; end: 103fef017; -[_TtC32SecatUserSessionScopeGraphBridge47SecatUserSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103feefe0(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113044dc0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113044dc8));
  return;
}



/* Entry: 103fef018; end: 103fef03f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fef018(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_113044dc8),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_113044dc0));
  return;
}



/* Entry: 103fef040; end: 103fef0db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103fef040(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  _objc_allocWithZone();
  uVar3 = *(undefined8 *)(param_2 + _DAT_113044e40);
  *(undefined8 *)(unaff_x20 + _DAT_113044df8) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_113044e00) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  _swift_retain(uVar3);
  _objc_msgSendSuper2(auStack_40,puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
  return puVar2;
}



/* Entry: 103fef0dc; end: 103fef13b; -[_TtC32SecatUserSessionScopeGraphBridge29SCArgosServiceSaberEntryPoint init] */

void FUN_103fef0dc(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SecatUserSessionScopeGraphBridge.SCArgosServiceSaberEntryPoint",0x3e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fef108);
  (*pcVar1)();
}



/* Entry: 103fef13c; end: 103fef1cf; -[_TtC32SecatUserSessionScopeGraphBridge29SCArgosServiceSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fef13c(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_113044df8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113044e00));
  return;
}



/* Entry: 103fef1d0; end: 103fef1d7;  */

undefined8 FUN_103fef1d0(void)

{
  return 0;
}



/* Entry: 103fef1d8; end: 103fef223;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fef1d8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113044e40) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103fef224; end: 103fef283; -[_TtC32SecatUserSessionScopeGraphBridge40SecatUserSessionScopeGraphBridgeServices init] */

void FUN_103fef224(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SecatUserSessionScopeGraphBridge.SecatUserSessionScopeGraphBridgeServices",0x49,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fef250);
  (*pcVar1)();
}



/* Entry: 103fef284; end: 103fef293; -[_TtC32SecatUserSessionScopeGraphBridge40SecatUserSessionScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fef284(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113044e40));
  return;
}



/* Entry: 103fef294; end: 103fef2ef;  */

void FUN_103fef294(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(0x113044e30,auStack_38,0x20,0);
  _objc_setAssociatedObject(param_1,0x113044e30,0,1);
  _swift_endAccess(auStack_38);
  return;
}



/* Entry: 103fef2f0; end: 103fef327;  */

undefined1  [16] FUN_103fef2f0(void)

{
  return ZEXT816(0x110731ef0);
}



/* Entry: 103fef328; end: 103fef36b; -[SCSecatUserSessionScopeGraphBridgeSaberEntryPoint end] */

void FUN_103fef328(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103fef36c; end: 103fef39f;  */

void FUN_103fef36c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103fef3a0; end: 103fef3e7; -[SCSecatUserSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fef3a0(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113044e98);
  _objc_release(*(undefined8 *)(param_1 + _DAT_113044ea0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113044ea8));
  return;
}



/* Entry: 103fef3e8; end: 103fef407;  */

void FUN_103fef3e8(void)

{
  _objc_opt_self(&PTR_PTR_11297c730);
  return;
}



/* Entry: 103fef408; end: 103fef44b; -[SCSCArgosServiceSaberEntryPoint end] */

void FUN_103fef408(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103fef44c; end: 103fef47f;  */

void FUN_103fef44c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103fef480; end: 103fef4d7; -[SCSCArgosServiceSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fef480(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113044ed8);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113044ee0);
  _objc_release(*(undefined8 *)(param_1 + _DAT_113044ee8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113044ef0));
  return;
}



/* Entry: 103fef4d8; end: 103fef4f7;  */

void FUN_103fef4d8(void)

{
  _objc_opt_self(&PTR_PTR_11297c7f8);
  return;
}



/* Entry: 103fef4f8; end: 103fef57f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103fef4f8(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  _objc_allocWithZone();
  lVar2 = unaff_x20;
  func_0x000100a78690();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_113044f20) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_113044f28) = param_2;
    _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
    _objc_release(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fef580);
  (*pcVar1)();
}



/* Entry: 103fef580; end: 103fef5df; -[_TtC31SemcUserSessionScopeGraphBridge46SemcUserSessionScopeGraphBridgeSaberEntryPoint init] */

void FUN_103fef580(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SemcUserSessionScopeGraphBridge.SemcUserSessionScopeGraphBridgeSaberEntryPoint",0x4e,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fef5ac);
  (*pcVar1)();
}



/* Entry: 103fef5e0; end: 103fef617; -[_TtC31SemcUserSessionScopeGraphBridge46SemcUserSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fef5e0(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113044f20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113044f28));
  return;
}



/* Entry: 103fef618; end: 103fef63f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fef618(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_113044f28),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_113044f20));
  return;
}



/* Entry: 103fef640; end: 103fef6db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103fef640(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  _objc_allocWithZone();
  uVar3 = *(undefined8 *)(param_2 + _DAT_113045720);
  *(undefined8 *)(unaff_x20 + _DAT_113044f58) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_113044f60) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  _swift_retain(uVar3);
  _objc_msgSendSuper2(auStack_40,puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
  return puVar2;
}



/* Entry: 103fef6dc; end: 103fef73b; -[_TtC31SemcUserSessionScopeGraphBridge44SCSnapTokenObservableServicesSaberEntryPoint init] */

void FUN_103fef6dc(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SemcUserSessionScopeGraphBridge.SCSnapTokenObservableServicesSaberEntryPoint",0x4c,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fef708);
  (*pcVar1)();
}



/* Entry: 103fef73c; end: 103fef7cf; -[_TtC31SemcUserSessionScopeGraphBridge44SCSnapTokenObservableServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fef73c(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_113044f58));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113044f60));
  return;
}



/* Entry: 103fef7d0; end: 103fef7d7;  */

undefined8 FUN_103fef7d0(void)

{
  return 0;
}



/* Entry: 103fef7d8; end: 103fef83b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103fef7d8(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_1130456f0);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103fef83c; end: 103fef843;  */

void FUN_103fef83c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103fef844; end: 103fef8e3;  */

void FUN_103fef844(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103fef8e4; end: 103fef903;  */

void FUN_103fef8e4(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103fef904; end: 103fef967;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103fef904(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_1130456f8);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103fef968; end: 103fef96f;  */

void FUN_103fef968(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103fef970; end: 103fefa0f;  */

void FUN_103fef970(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103fefa10; end: 103fefa2f;  */

void FUN_103fefa10(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103fefa30; end: 103fefa93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103fefa30(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_113045700);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103fefa94; end: 103fefa9b;  */

void FUN_103fefa94(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103fefa9c; end: 103fefb3b;  */

void FUN_103fefa9c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103fefb3c; end: 103fefb5b;  */

void FUN_103fefb3c(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103fefb5c; end: 103fefbbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103fefb5c(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_113045708);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103fefbc0; end: 103fefbc7;  */

void FUN_103fefbc0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103fefbc8; end: 103fefc67;  */

void FUN_103fefbc8(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103fefc68; end: 103fefc87;  */

void FUN_103fefc68(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103fefc88; end: 103fefceb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103fefc88(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_113045710);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103fefcec; end: 103fefcf3;  */

void FUN_103fefcec(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103fefcf4; end: 103fefd93;  */

void FUN_103fefcf4(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103fefd94; end: 103fefdb3;  */

void FUN_103fefd94(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103fefdb4; end: 103fefe17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103fefdb4(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_113045718);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1004180e8; end: 10041815b; -[SCMessagingNotificationExtensionUserDefaults initWithUserScopedAppGroupUserDefaults:] */

undefined1 * FUN_1004180e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126f3910;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10041815c; end: 100418163; -[SCChatContentDeliveringServices chatContentDelivery] */

undefined8 FUN_10041815c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100418164; end: 10041816b; -[SCContentManagerServices bufferedContentFetcher] */

undefined8 FUN_100418164(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10041816c; end: 100418173; -[SCReceiveMessageLoggerServices loadMessageLogger] */

undefined8 FUN_10041816c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100418174; end: 10041821b; -[_TtC21NativeContentDelegate25NativeContentDelegateImpl initWithContentDelivery:bufferedContentFetcher:nativeSessionFuture:loadMessageLogger:] */

undefined8
FUN_100418174(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  uVar1 = param_3;
  FUN_10041821c(param_3,param_4,param_5,param_6);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  return uVar1;
}



/* Entry: 10041821c; end: 10041832f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10041821c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c614f0();
  lVar1 = _DAT_112ddb8d0;
  func_0x000107c61614(unaff_x20 + _DAT_112ddb8d0,0);
  uVar2 = 0x112ddb730;
  FUN_1000285a8(0x112ddb730,&UNK_10d9a0440);
  FUN_1000bda74(param_1,uVar2);
  *(undefined8 *)(unaff_x20 + _DAT_112ddb8d8) = param_1;
  FUN_1000285a8(0x112ddb8e0,&UNK_10d9a0448);
  FUN_1000bda74();
  *(undefined8 *)(unaff_x20 + _DAT_112ddb8e8) = param_2;
  func_0x000107c61604(unaff_x20 + lVar1,param_3);
  FUN_1000285a8(0x112ddb8f0,&UNK_10d9a0450);
  FUN_1000bda74();
  *(undefined8 *)(unaff_x20 + _DAT_112ddb8f8) = param_4;
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100418330; end: 100418413; -[SCLensExplorerStudySettingsServiceProvider provide] */

void FUN_100418330(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126bbb58;
  func_0x000107c610f4(PTR_PTR_1126bbb58);
  func_0x000107c49620();
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100418414; end: 100418487; -[SCLensExplorerStudySettingsServices initWithlensExplorerStudySettings:] */

undefined1 * FUN_100418414(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1127064a8;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100418488; end: 1004184b3;  */

void FUN_100418488(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1004184b4; end: 1004184bb; -[SCFideliusUserIdentityAndId userId] */

undefined8 FUN_1004184b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1004184bc; end: 1004185b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004184bc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  
  lVar3 = param_1 + 0x38;
  func_0x000107c61148();
  if (lVar3 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar8 = PTR_PTR_1126bd048;
    func_0x000107c610f4(PTR_PTR_1126bd048);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    lVar4 = lVar3 + _DAT_112727b50;
    func_0x000107c61148(lVar4);
    lVar5 = lVar4;
    func_0x000107c444a4();
    func_0x000107c61180();
    lVar6 = lVar3 + _DAT_112727b58;
    func_0x000107c61148(lVar6);
    lVar7 = lVar6;
    func_0x000107c3fa04();
    func_0x000107c61180();
    func_0x000107c46da8(puVar8,param_2,uVar1,uVar2,lVar5,lVar7,*(undefined8 *)(param_1 + 0x30));
    func_0x000107c61170(lVar7);
    func_0x000107c61170(lVar6);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar4);
  }
  func_0x000107c61170(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1004185b8; end: 1004186a7; -[SCFideliusDeviceGraphManager initWithIdentityArchiveManager:logger:grapheneRegistry:circumstanceEngine:kvStoreManager:] */

undefined8
FUN_1004185b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bd038;
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c418ec(puVar1);
  func_0x000107c61180();
  func_0x000107c46dac(param_1,param_2,param_3,param_4,puVar1,param_5,param_6,param_7,0);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(puVar1);
  return param_1;
}



/* Entry: 1004186a8; end: 10041871f; +[SCFideliusPerformerInitializer deviceGraphManagerPerformer] */

void FUN_1004186a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae790;
  func_0x000107c610f4(PTR_PTR_1126ae790);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f310d1a);
  func_0x000107c61180();
  func_0x000107c45454(puVar1,param_2,puVar2,0x15,0,0x18,
                      &PTR____CFConstantStringClassReference_110e10b38);
  func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100418720; end: 100418a13; -[SCFideliusDeviceGraphManager initWithIdentityArchiveManager:logger:performer:grapheneRegistry:circumstanceEngine:kvStoreManager:forTest:] */

undefined8 *
FUN_100418720(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined *puStack_78;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  puVar1 = &UNK_10f30e1dc;
  FUN_1000ba800(&UNK_10f30e1dc);
  puStack_78 = PTR_PTR_1126eaf30;
  puVar2 = &uStack_80;
  uStack_80 = param_1;
  func_0x000107c61154(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar3 = puVar2[3];
    puVar2[3] = param_3;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_5);
    uVar3 = puVar2[1];
    puVar2[1] = param_5;
    func_0x000107c61170(uVar3);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c610fc();
    uVar3 = puVar2[9];
    puVar2[9] = puVar4;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_4);
    uVar3 = puVar2[4];
    puVar2[4] = param_4;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_6);
    uVar3 = puVar2[5];
    puVar2[5] = param_6;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_7);
    uVar3 = puVar2[8];
    puVar2[8] = param_7;
    func_0x000107c61170(uVar3);
    puVar2[0xb] = 0xb;
    puVar4 = PTR_PTR_1126c0450;
    func_0x000107c610f4();
    func_0x000107c47500();
    uVar3 = puVar2[10];
    puVar2[10] = puVar4;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_8);
    uVar3 = puVar2[6];
    puVar2[6] = param_8;
    func_0x000107c61170(uVar3);
    func_0x000107c61144(auStack_88,puVar2);
    puVar4 = PTR_PTR_1126ae720;
    func_0x000107c6111c(auStack_90,auStack_88);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar3 = puVar2[7];
    puVar2[7] = puVar4;
    func_0x000107c61170(uVar3);
    uVar3 = puVar2[1];
    func_0x000107c61174(puVar2);
    func_0x000107c4e524(uVar3);
    func_0x000107c61170(puVar2);
    func_0x000107c61120(auStack_90);
    func_0x000107c61120(auStack_88);
  }
  func_0x0001000e2a84(puVar1);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar2;
}



/* Entry: 100418a14; end: 100418c03; -[SCLensInfoCardsServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100418a14(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  func_0x000107c61144(auStack_68,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_100bca7a0;
  puStack_78 = &UNK_11089d2b8;
  func_0x000107c6111c(auStack_70,auStack_68);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126bbce0;
  func_0x000107c610f4(PTR_PTR_1126bbce0);
  func_0x000107c46e6c();
  if (param_1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + _DAT_1127266c4);
  }
  func_0x000107c61174(uVar5);
  func_0x000107c42c20(uVar5);
  func_0x000107c61170(uVar5);
  puVar3 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_98,auStack_68);
  func_0x000107c3e4fc(puVar3);
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126bbce8;
  func_0x000107c610f4(PTR_PTR_1126bbce8);
  func_0x000107c47330();
  uVar5 = 0;
  if (param_1 != 0) {
    uVar5 = *(undefined8 *)(param_1 + _DAT_1127266c0);
  }
  func_0x000107c61174(uVar5);
  func_0x000107c42c20(uVar5);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61120(auStack_98);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_70);
  func_0x000107c61120(auStack_68);
  return;
}



/* Entry: 100418c04; end: 100418caf; -[SCFideliusBackupService initWithLogger:circumstanceEngine:maxCapacity:] */

undefined1 *
FUN_100418c04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126eaf18;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100418cb0; end: 100418d23; -[SCLensInfoCardsServices initWithInfoCardProvider:] */

undefined1 * FUN_100418cb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112706700;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100418d24; end: 100418e0b; -[SCExtensionSharedDirectory initUserScopedDirectoryWithUserId:name:] */

undefined1 *
FUN_100418d24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_11270e1b0;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar4 = (undefined1 *)puVar1;
    func_0x000107c61158();
    func_0x000107c41ea0();
    func_0x000107c61180();
    puVar2 = puVar4;
    func_0x000107c3ac08();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c61170(puVar4);
    if (*(long *)((long)puVar1 + 8) == 0) {
      puVar4 = (undefined1 *)0x0;
      goto LAB_100418ddc;
    }
  }
  func_0x000107c61174(puVar1);
  puVar4 = (undefined1 *)puVar1;
LAB_100418ddc:
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(puVar1);
  return puVar4;
}



/* Entry: 100418e0c; end: 100418e87; +[SCExtensionSharedDirectory directoryForUserId:] */

void FUN_100418e0c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c5da40();
  func_0x000107c61180();
  lVar1 = 0;
  if ((param_3 != 0) && (param_1 != 0)) {
    lVar1 = param_1;
    func_0x000107c3ac04(param_1,param_2,param_3);
    func_0x000107c61180();
  }
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 100418e88; end: 100418e9b; +[SCExtensionSharedDirectory userScopedDirectory] */

void FUN_100418e88(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010becd530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__topLevelDirectoryWithName_skipB_112590ef0,
             &PTR____CFConstantStringClassReference_110df7698,0x1137fd990);
  return;
}



/* Entry: 100418e9c; end: 100418f7f; +[SCExtensionSharedDirectory _topLevelDirectoryWithName:skipBackupOnceToken:] */

void FUN_100418e9c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  func_0x000107c61174(param_3);
  func_0x000107c3df98();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x000107c3ac04();
    func_0x000107c61180();
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_10041b5a8;
    puStack_40 = &UNK_110842e18;
    func_0x000107c61174();
    lStack_38 = lVar1;
    if (*param_4 != -1) {
      FUN_10002a2fc(param_4,&puStack_58);
    }
    func_0x000107c61170(lStack_38);
  }
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 100418f80; end: 100418f87; -[SCFideliusUserIdentity hashedBeta] */

undefined8 FUN_100418f80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100418f88; end: 1004190bb; -[SCFideliusDeviceGraphManager userDeviceForHashedBeta:] */

void FUN_100418f88(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined8 uStack_38;
  
  func_0x000107c61174(param_3);
  puVar1 = &UNK_10f30e48b;
  FUN_1000ba800(&UNK_10f30e48b);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  uStack_48 = 0x1004195c0;
  pcStack_40 = FUN_100436138;
  uStack_38 = 0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x000107c61174(param_3);
  func_0x000107c4e530(uVar2);
  uVar2 = puStack_58[5];
  func_0x000107c61174(uVar2);
  func_0x000107c61170(param_3);
  func_0x000107c60bcc(&uStack_60,8);
  func_0x000107c61170(uStack_38);
  func_0x0001000e2a84(puVar1);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1004190bc; end: 10041912f; -[SCLensInfoCardVisibilityServices initWithLensInfoButtonVisibility:] */

undefined1 * FUN_1004190bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112700af0;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100419130; end: 10041918b;  */

void FUN_100419130(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10041918c; end: 100419193;  */

void FUN_10041918c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100419194; end: 1004191e7;  */

void FUN_100419194(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1004191e8; end: 1004191f3;  */

void FUN_1004191e8(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_10020ce38();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  puVar2 = PTR_PTR_1126a8798;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar6 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar7 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar7 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar7 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar7 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12300);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  puVar8 = puVar2;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *(undefined **)(lVar1 + 0x30) = puVar8;
  *param_1 = lVar1;
  return;
}



/* Entry: 1004191f4; end: 1004194a7;  */

void FUN_1004191f4(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_10020ce38();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  puVar1 = PTR_PTR_1126a8798;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar5 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar6 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar2);
  func_0x000107c61174();
  uVar6 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar6 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar6 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12300);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c61174();
  puVar7 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0x30) = puVar7;
  *param_1 = param_2;
  return;
}



/* Entry: 1004194a8; end: 1004195b7; -[SCInviteServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004194a8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  
  lVar1 = param_1 + _DAT_112727cf4;
  func_0x000107c61148(lVar1);
  lVar2 = lVar1;
  func_0x000107c5d984();
  func_0x000107c61180();
  lVar3 = param_1 + _DAT_112727cf8;
  func_0x000107c61148(lVar3);
  lVar4 = lVar3;
  func_0x000107c44580();
  func_0x000107c61180();
  lVar5 = param_1 + _DAT_112727cfc;
  func_0x000107c61148(lVar5);
  lVar6 = lVar5;
  func_0x000107c4e604();
  func_0x000107c61180();
  func_0x000107c3b28c(param_1,param_2,lVar2,lVar4,lVar6);
  func_0x000107c61180();
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  puVar7 = PTR_PTR_1126bd1e8;
  func_0x000107c610f4(PTR_PTR_1126bd1e8);
  func_0x000107c46f10();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1004195b8; end: 1004195cf; -[SCUserInfoServices userId] */

undefined8 FUN_1004195b8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1004195d0; end: 1004196bb; -[SCInviteServiceProvider _createLazyInviteServiceWithCurrentUserId:unifiedGRPCClientFactory:performerProvider:] */

void FUN_1004195d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puVar1 = PTR_PTR_1126ae720;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  puStack_58 = &UNK_1056d5588;
  puStack_50 = &UNK_1108a9660;
  uStack_48 = param_3;
  uStack_40 = param_4;
  uStack_38 = param_5;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c3e4fc(puVar1,param_2,&puStack_68);
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(uStack_40);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1004196bc; end: 10041972f; -[SCInviteServices initWithInviteService:] */

undefined1 * FUN_1004196bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1127029a8;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100419730; end: 10041976b;  */

void FUN_100419730(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10041976c; end: 1004197bb;  */

void FUN_10041976c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x40);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1004197bc; end: 10041984b; +[SCExtensionSharedDirectory applicationGroupContainerURL] */

void FUN_1004197bc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x000107c4c12c(PTR__OBJC_CLASS___NSBundle_1126aea78);
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c51758();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x000107c415e0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  func_0x000107c61180();
  puVar3 = puVar1;
  func_0x000107c403a8();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10041984c; end: 100419c0b;  */

void FUN_10041984c(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_1001f829c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  puVar1 = PTR_PTR_1126a8838;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar6 = uStack_90;
  func_0x000107c61174(uStack_90);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar7 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar8 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(puVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174();
  uVar8 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar8 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef12d50);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(puVar1);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar8 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(puVar1);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar8 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef113a0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(puVar1);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar8 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef3dbc0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(puVar1);
  func_0x000107c61174();
  puVar9 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(puVar1);
  *(undefined **)(param_2 + 0x40) = puVar9;
  *param_1 = param_2;
  return;
}



/* Entry: 100419c0c; end: 100419d6b; -[SCShortLinkServiceProvider provide] */

void FUN_100419c0c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61144(auStack_58,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  puStack_70 = &UNK_1056e168c;
  puStack_68 = &UNK_1108a9f30;
  func_0x000107c6111c(auStack_60,auStack_58);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_88,auStack_58);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126bd3b8;
  func_0x000107c610f4(PTR_PTR_1126bd3b8);
  func_0x000107c4868c();
  func_0x000107c61170(puVar2);
  func_0x000107c61120(auStack_88);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_60);
  func_0x000107c61120(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 100419d6c; end: 100419e0f; -[SCShortLinkService initWithShortLinkDecodingService:shortLinkEncodingService:] */

undefined1 *
FUN_100419d6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_112702ab0;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100419e10; end: 100419e5b;  */

void FUN_100419e10(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100419e5c; end: 10041a05b; -[SCOffPlatformLinkGenerationServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100419e5c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61144(auStack_58,param_1);
  lVar1 = param_1 + _DAT_112727d18;
  func_0x000107c61148();
  lVar2 = lVar1;
  func_0x000107c45390();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_112727d1c;
  func_0x000107c61148();
  lVar3 = lVar1;
  func_0x000107c4e604();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_112727d20;
  func_0x000107c61148();
  lVar4 = lVar1;
  func_0x000107c49934();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_112727d24;
  func_0x000107c61148();
  lVar5 = lVar1;
  func_0x000107c3fa08();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  puVar6 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_60,auStack_58);
  func_0x000107c3e4fc(puVar6);
  func_0x000107c61180();
  uVar8 = *(undefined8 *)(param_1 + _DAT_112727d28);
  puVar7 = PTR_PTR_1126bd230;
  func_0x000107c610f4(PTR_PTR_1126bd230);
  func_0x000107c47bc4();
  func_0x000107c42c20(uVar8);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar6);
  func_0x000107c61120(auStack_60);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c61120(auStack_58);
  return;
}



/* Entry: 10041a05c; end: 10041a063; -[SCLensInfoCardsServices infoCardProvider] */

undefined8 FUN_10041a05c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10041a064; end: 10041a06b; -[SCInviteServices inviteService] */

undefined8 FUN_10041a064(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10041a06c; end: 10041a0df; -[SCOffPlatformLinkGenerationServices initWithOffPlatformLinkGenerationService:] */

undefined1 * FUN_10041a06c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1127029d8;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10041a0e0; end: 10041a12b;  */

void FUN_10041a0e0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10041a12c; end: 10041a18f;  */

void FUN_10041a12c(long param_1)

{
  undefined1 uVar1;
  undefined *puVar2;
  
  uVar1 = (undefined1)*(undefined8 *)(param_1 + 0x20);
  func_0x000107c3bd94();
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x10) = uVar1;
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
    puVar2 = PTR_PTR_1126c0388;
    func_0x000107c4f880(0x3ff0000000000000);
    if ((int)puVar2 == 0) {
      return;
    }
  }
  func_0x000107c3b45c(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdfa3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__deleteOldDatabases_11255c290);
  return;
}



/* Entry: 10041a190; end: 10041a1d7; -[SCFideliusDeviceGraphManager _loadLocal] */

ulong FUN_10041a190(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x000107c3bd50();
  if ((uVar1 & 1) == 0) {
    func_0x000107c3b450(param_1);
    uVar2 = param_1;
    func_0x000107c3b9e4();
    if ((int)uVar2 != 0) {
      func_0x000107c3c440(param_1);
    }
  }
  return uVar1;
}



/* Entry: 10041a1d8; end: 10041a2fb; -[SCFideliusDeviceGraphManager _loadFideliusDeviceGraph] */

long FUN_10041a1d8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar1 = param_1;
  func_0x000107c3bd54();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar1 = param_1;
    func_0x000107c3bd58(param_1);
    func_0x000107c61180();
  }
  lVar2 = param_1;
  func_0x000107c3cd90(param_1,param_2,lVar1,&PTR____CFConstantStringClassReference_110e0ecb8);
  if ((int)lVar2 != 0) {
    func_0x000107c3cc08(param_1,param_2,lVar1);
    func_0x000107c540b8(param_1,param_2,lVar1);
    lVar3 = param_1;
    func_0x000107c4197c(param_1);
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x000107c4448c();
    func_0x000107c61180();
    func_0x000107c53fcc();
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar3);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c5c734(uVar5);
    func_0x000107c61180();
    lVar3 = lVar1;
    func_0x000107c4448c(lVar1);
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x000107c4c890();
    func_0x000107c4bbcc(uVar5,param_2,1,0,0,lVar4);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(uVar5);
  }
  func_0x000107c61170(lVar1);
  return lVar2;
}



/* Entry: 10041a2fc; end: 10041a39f; -[SCFideliusDeviceGraphManager _loadFideliusDeviceGraphFromArchive] */

void FUN_10041a2fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126b85c8;
  func_0x000107c5a9bc(PTR_PTR_1126b85c8);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126c0478;
  func_0x000107c61158(PTR_PTR_1126c0478);
  func_0x000107c60b14();
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126bd048;
  func_0x000107c43384(PTR_PTR_1126bd048);
  func_0x000107c61180();
  puVar4 = puVar1;
  func_0x000107c4b754(puVar1,param_2,puVar2,puVar3);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10041a3a0; end: 10041a3f3; +[SCFideliusDeviceGraphManager fideliusDeviceGraphPath] */

void FUN_10041a3a0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b85c8;
  func_0x000107c5a9bc(PTR_PTR_1126b85c8);
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c4e450();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10041a3f4; end: 10041adc3; -[SCGroupServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10041a3f4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  long lVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined8 uVar25;
  long lVar26;
  undefined1 auStack_270 [8];
  undefined *puStack_268;
  undefined8 uStack_260;
  code *pcStack_258;
  undefined *puStack_250;
  undefined1 auStack_248 [8];
  undefined *puStack_240;
  undefined8 uStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined1 auStack_218 [8];
  undefined *puStack_210;
  undefined8 uStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined1 auStack_1e0 [8];
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined1 auStack_1b0 [8];
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined1 auStack_188 [8];
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined1 auStack_158 [8];
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined1 auStack_130 [8];
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined1 auStack_108 [8];
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  func_0x000107c61144(auStack_80,param_1);
  lVar26 = param_1;
  FUN_10041adc4();
  func_0x000107c61180();
  lVar1 = lVar26;
  func_0x000107c5da60();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5d984();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar26);
  lVar26 = param_1;
  func_0x00010041ade8();
  func_0x000107c61180();
  lVar1 = lVar26;
  func_0x000107c4d48c();
  func_0x000107c61180();
  func_0x000107c61170(lVar26);
  lVar26 = param_1;
  func_0x00010041ade8();
  func_0x000107c61180();
  lVar3 = lVar26;
  func_0x000107c4d490();
  func_0x000107c61180();
  func_0x000107c61170(lVar26);
  lVar26 = param_1;
  func_0x00010041ade8();
  func_0x000107c61180();
  lVar4 = lVar26;
  func_0x000107c40668();
  func_0x000107c61180();
  func_0x000107c61170(lVar26);
  lVar26 = param_1;
  FUN_10041ae24();
  func_0x000107c61180();
  lVar5 = lVar26;
  func_0x000107c5b4b0();
  func_0x000107c61180();
  func_0x000107c61170(lVar26);
  lVar26 = param_1;
  func_0x00010041ae48();
  func_0x000107c61180();
  lVar6 = lVar26;
  func_0x000107c5d9b0();
  func_0x000107c61180();
  func_0x000107c61170(lVar26);
  lVar26 = param_1;
  FUN_10041ae24();
  func_0x000107c61180();
  lVar7 = lVar26;
  func_0x000107c5b484();
  func_0x000107c61180();
  func_0x000107c61170(lVar26);
  lVar26 = param_1;
  FUN_10041ae24();
  func_0x000107c61180();
  lVar8 = lVar26;
  func_0x000107c5b4bc();
  func_0x000107c61180();
  func_0x000107c61170(lVar26);
  lVar26 = param_1;
  FUN_10041ae74();
  func_0x000107c61180();
  lVar9 = lVar26;
  func_0x000107c4213c();
  func_0x000107c61180();
  func_0x000107c61170(lVar26);
  lVar26 = param_1;
  func_0x00010041ade8();
  func_0x000107c61180();
  lVar10 = lVar26;
  func_0x000107c43a84();
  func_0x000107c61180();
  func_0x000107c61170(lVar26);
  puVar11 = PTR_PTR_1126ae720;
  puVar23 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  puStack_98 = &UNK_105519b18;
  puStack_90 = &UNK_110894910;
  func_0x000107c6111c(auStack_88,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar12 = PTR_PTR_1126ae720;
  puStack_d0 = puVar23;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x1006df6f8;
  puStack_b8 = &UNK_110894940;
  func_0x000107c6111c(auStack_b0,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar13 = PTR_PTR_1126ae720;
  puStack_100 = puVar23;
  uStack_f8 = 0xc2000000;
  puStack_f0 = &UNK_105519b58;
  puStack_e8 = &UNK_110894970;
  func_0x000107c6111c(auStack_d8,auStack_80);
  puStack_e0 = puVar11;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar14 = PTR_PTR_1126ae720;
  puStack_128 = puVar23;
  uStack_120 = 0xc2000000;
  puStack_118 = &UNK_105519ba0;
  puStack_110 = &UNK_1108949a0;
  func_0x000107c6111c(auStack_108,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar15 = PTR_PTR_1126ae790;
  func_0x000107c610f4();
  puVar16 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x000107c61180();
  func_0x000107c470d0();
  func_0x000107c61170(puVar16);
  puVar16 = PTR_PTR_1126ba3a8;
  func_0x000107c610f4();
  func_0x000107c4797c();
  uVar25 = *(undefined8 *)(param_1 + _DAT_1127250f4);
  *(undefined **)(param_1 + _DAT_1127250f4) = puVar16;
  func_0x000107c61170(uVar25);
  puVar16 = PTR_PTR_1126ae720;
  puStack_150 = puVar23;
  uStack_148 = 0xc2000000;
  puStack_140 = &UNK_100c314b0;
  puStack_138 = &UNK_1108949d0;
  func_0x000107c6111c(auStack_130,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar17 = PTR_PTR_1126ae720;
  puStack_180 = puVar23;
  uStack_178 = 0xc2000000;
  puStack_170 = &UNK_105519be0;
  puStack_168 = &UNK_110894a00;
  func_0x000107c6111c(auStack_158,auStack_80);
  puStack_160 = puVar16;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar18 = PTR_PTR_1126ae720;
  puStack_1a8 = puVar23;
  uStack_1a0 = 0xc2000000;
  puStack_198 = &UNK_105519c28;
  puStack_190 = &UNK_110894a30;
  func_0x000107c6111c(auStack_188,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar19 = PTR_PTR_1126ae720;
  puStack_1d8 = puVar23;
  uStack_1d0 = 0xc2000000;
  puStack_1c8 = &UNK_105519c68;
  puStack_1c0 = &UNK_110894a60;
  func_0x000107c6111c(auStack_1b0,auStack_80);
  puStack_1b8 = puVar16;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar20 = PTR_PTR_1126ae720;
  puStack_210 = puVar23;
  uStack_208 = 0xc2000000;
  puStack_200 = &UNK_105519cb0;
  puStack_1f8 = &UNK_110894a90;
  func_0x000107c6111c(auStack_1e0,auStack_80);
  puStack_1f0 = puVar18;
  puStack_1e8 = puVar16;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar21 = PTR_PTR_1126ae720;
  puStack_240 = puVar23;
  uStack_238 = 0xc2000000;
  puStack_230 = &UNK_105519cf8;
  puStack_228 = &UNK_110894ac0;
  func_0x000107c6111c(auStack_218,auStack_80);
  puStack_220 = puVar12;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar24 = PTR_PTR_1126ae720;
  puStack_268 = puVar23;
  uStack_260 = 0xc2000000;
  pcStack_258 = FUN_10041f6ec;
  puStack_250 = &UNK_110894af0;
  func_0x000107c6111c(auStack_248,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  lVar26 = (long)_DAT_1127250f8;
  uVar25 = *(undefined8 *)(param_1 + lVar26);
  *(undefined **)(param_1 + lVar26) = puVar24;
  func_0x000107c61170(uVar25);
  uVar25 = *(undefined8 *)(param_1 + lVar26);
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c5c340();
  func_0x000107c61170(uVar25);
  lVar26 = param_1 + _DAT_1127250fc;
  func_0x000107c61148();
  lVar22 = lVar26;
  func_0x000107c4457c();
  func_0x000107c61180();
  func_0x000107c6111c(auStack_270,auStack_80);
  func_0x000107c5dc68(lVar22);
  func_0x000107c61170(lVar22);
  func_0x000107c61170(lVar26);
  puVar24 = PTR_PTR_1126ba3b0;
  func_0x000107c610f4();
  puVar23 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c46c34(puVar24);
  func_0x000107c61170(puVar23);
  func_0x000107c42c20(*(undefined8 *)(param_1 + _DAT_112725100));
  func_0x000107c61170(puVar24);
  func_0x000107c61120(auStack_270);
  func_0x000107c61120(auStack_248);
  func_0x000107c61170(puVar21);
  func_0x000107c61120(auStack_218);
  func_0x000107c61170(puVar20);
  func_0x000107c61120(auStack_1e0);
  func_0x000107c61170(puVar19);
  func_0x000107c61120(auStack_1b0);
  func_0x000107c61170(puVar18);
  func_0x000107c61120(auStack_188);
  func_0x000107c61170(puVar17);
  func_0x000107c61120(auStack_158);
  func_0x000107c61170(puVar16);
  func_0x000107c61120(auStack_130);
  func_0x000107c61170(puVar15);
  func_0x000107c61170(puVar14);
  func_0x000107c61120(auStack_108);
  func_0x000107c61170(puVar13);
  func_0x000107c61120(auStack_d8);
  func_0x000107c61170(puVar12);
  func_0x000107c61120(auStack_b0);
  func_0x000107c61170(puVar11);
  func_0x000107c61120(auStack_88);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar2);
  func_0x000107c61120(auStack_80);
  return;
}



/* Entry: 10041adc4; end: 10041ae0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10041adc4(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c61148(param_1 + _DAT_112725108);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10041ae0c; end: 10041ae13; -[SCNativeMessagingServices nativeSessionManager] */

undefined8 FUN_10041ae0c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10041ae14; end: 10041ae1b; -[SCNativeMessagingServices nativeSessionManagerFuture] */

undefined8 FUN_10041ae14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10041ae1c; end: 10041ae23; -[SCNativeMessagingServices conversationDataUpdateAnnouncer] */

undefined8 FUN_10041ae1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10041ae24; end: 10041ae6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10041ae24(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c61148(param_1 + _DAT_112725114);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10041ae6c; end: 10041ae73; -[SCSnapchatterServices snapchatterPublicInfoFetcher] */

undefined8 FUN_10041ae6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 10041ae74; end: 10041ae97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10041ae74(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c61148(param_1 + _DAT_112725110);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10041ae98; end: 10041ae9f; -[SCUserInfoServices displayNameProvider] */

undefined8 FUN_10041ae98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10041aea0; end: 10041aea7; -[SCNativeMessagingServices friendsFeedEntryStore] */

undefined8 FUN_10041aea0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10041aea8; end: 10041b20b; -[SCGroupsDataFetcher initWithNativeSessionManager:nativeSessionManagerFuture:conversationDataUpdateAnnouncer:snapchattersDataFetcher:snapchatterUserInfoProvider:snapchatterPublicInfoFetcher:snapchattersDataTracker:groupsDataTracker:friendsFeedEntryStore:groupConstructor:chatGroupParticipantDisplayNameFetcher:userDisplayNameProvider:groupManagerPerformer:userId:] */

undefined8 *
FUN_10041aea8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_14);
  func_0x000107c61174(param_15);
  func_0x000107c61174(param_16);
  puStack_70 = PTR_PTR_1126e8cc8;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_15);
    uVar2 = puVar1[8];
    puVar1[8] = param_15;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_10);
    uVar2 = puVar1[4];
    puVar1[4] = param_10;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_14);
    uVar2 = puVar1[5];
    puVar1[5] = param_14;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_13);
    uVar2 = puVar1[6];
    puVar1[6] = param_13;
    func_0x000107c61170(uVar2);
    uVar2 = param_16;
    func_0x000107c40794();
    uVar5 = puVar1[7];
    puVar1[7] = uVar2;
    func_0x000107c61170(uVar5);
    puVar3 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c61180();
    func_0x000107c470d0();
    func_0x000107c61170(puVar4);
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61170(uVar2);
    puVar4 = PTR_PTR_1126ba328;
    func_0x000107c61160();
    uVar2 = puVar1[2];
    puVar1[2] = puVar4;
    func_0x000107c61170(uVar2);
    puVar4 = PTR_PTR_1126ba330;
    func_0x000107c610f4();
    func_0x000107c4798c();
    uVar2 = puVar1[3];
    puVar1[3] = puVar4;
    func_0x000107c61170(uVar2);
    func_0x000107c61170(puVar3);
  }
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 10041b20c; end: 10041b297; -[SCGroupsStorage init] */

undefined1 * FUN_10041b20c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e8ce8;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 0x18) = 0;
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x000107c61160();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR_PTR_1126ae820;
    func_0x000107c61160();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c4d664(*(undefined8 *)((long)puVar1 + 0x10));
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10041b298; end: 10041b5a7; -[SCGroupsDataUpdater initWithNativeSessionManagerFuture:conversationDataUpdateAnnouncer:lazySnapchattersDataFetcher:lazySnapchatterUserInfoProvider:lazySnapchatterPublicInfoFetcher:lazySnapchattersDataTracker:groupsStorage:groupConstructor:groupsDataTracker:friendsFeedEntryStore:performer:userId:] */

undefined8 *
FUN_10041b298(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_14);
  puStack_68 = PTR_PTR_1126e8ce0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    func_0x000107c61170(uVar2);
    uVar2 = param_4;
    func_0x000107c5c734(param_4);
    func_0x000107c61180();
    func_0x000107c3d740();
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = puVar1[3];
    puVar1[3] = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = puVar1[5];
    puVar1[5] = param_8;
    func_0x000107c61170(uVar2);
    uVar2 = param_8;
    func_0x000107c5c734(param_8);
    func_0x000107c61180();
    func_0x000107c3d740();
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = puVar1[6];
    puVar1[6] = param_9;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_10);
    uVar2 = puVar1[7];
    puVar1[7] = param_10;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_11);
    uVar2 = puVar1[8];
    puVar1[8] = param_11;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_12);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_12;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_13);
    uVar2 = puVar1[9];
    puVar1[9] = param_13;
    func_0x000107c61170(uVar2);
    uVar2 = param_14;
    func_0x000107c40794();
    uVar4 = puVar1[10];
    puVar1[10] = uVar2;
    func_0x000107c61170(uVar4);
    puVar3 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar2 = puVar1[0xc];
    puVar1[0xc] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    uVar2 = puVar1[0xe];
    puVar1[0xe] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x000107c61160();
    uVar2 = puVar1[0xd];
    puVar1[0xd] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c3c018(puVar1);
  }
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 10041b5a8; end: 10041b5eb;  */

void FUN_10041b5a8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ba528;
  func_0x000107c3bb98(PTR_PTR_1126ba528,param_2,*(undefined8 *)(param_1 + 0x20));
  if (((ulong)puVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc8390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126ba528,PTR_s__addSkipBackupAttributeToURL__11254fa80,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10041b5ec; end: 10041b653; +[SCExtensionSharedDirectory _isSkipBackupAttributeAddedToURL:] */

undefined8 FUN_10041b5ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = 0;
  uStack_30 = 0;
  func_0x000107c44260(param_3,param_2,&uStack_28,
                      *(undefined8 *)PTR__NSURLIsExcludedFromBackupKey_11034ab18,&uStack_30);
  uVar2 = uStack_28;
  uVar1 = uStack_30;
  func_0x000107c61174(uStack_30);
  func_0x000107c3ebcc(uVar2);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 10041b654; end: 10041b65b; -[SCExtensionSharedDirectory url] */

undefined8 FUN_10041b654(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10041b65c; end: 10041b66b; -[_TtC28SCNSEPrefetchedMediaServices26NSEPrefetchedMediaServices reader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10041b65c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f15588));
  return;
}



/* Entry: 10041b66c; end: 10041b6fb; -[_TtC30MessagingMediaPrefetchDelegate34MessagingMediaPrefetchDelegateImpl initWithPrefetchedMediaDirectoryPath:reader:contentDelivery:nativeSessionFuture:] */

void FUN_10041b66c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
  }
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  FUN_10041b6fc(param_3,param_2,param_4,param_5,param_6);
  return;
}



/* Entry: 10041b6fc; end: 10041ba3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10041b6fc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_78 [8];
  long lStack_70;
  undefined *puStack_68;
  
  lVar3 = unaff_x20;
  lStack_a8 = param_2;
  uStack_a0 = param_1;
  uStack_98 = param_3;
  uStack_90 = param_4;
  uStack_88 = param_5;
  func_0x000107c614f0();
  lVar4 = 0;
  lStack_c0 = lVar3;
  func_0x000107c5ffd8();
  lStack_b8 = *(long *)(lVar4 + -8);
  lStack_b0 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_b8 + 0x40));
  lVar14 = (long)&uStack_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  func_0x000107c5ffc4();
  puVar2 = PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVMa_11034f918;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar12 = lVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  func_0x000107c5f824();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar13 = lVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  puVar6 = PTR_PTR_1126a7ff8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar5 = 0;
  FUN_10041bab4();
  func_0x000107c613fc();
  *(undefined **)(lVar5 + 0x10) = puVar6;
  lStack_c8 = lVar5;
  func_0x000107c610f8();
  lStack_d0 = _DAT_112ddb710;
  func_0x000107c61614(lVar3 + _DAT_112ddb710,0);
  lStack_d8 = _DAT_112ddb718;
  uVar7 = 0;
  FUN_10041bad4(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
  uStack_e0 = uVar7;
  func_0x000107c5f81c(lVar13);
  puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar7 = 0x112d4ac68;
  func_0x00010041bb14(0x112d4ac68,puVar2,
                      PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVs10SetAlgebraACMc_11034f928
                     );
  uVar8 = 0x112d4ac70;
  FUN_1000285a8(0x112d4ac70,&UNK_10d911480);
  uVar9 = 0x112d4ac78;
  func_0x00010041bb54(0x112d4ac78,0x112d4ac70,&UNK_10d911480);
  func_0x000107c60264(lVar12,&puStack_68,uVar8,uVar9,lVar4,uVar7);
  (**(code **)(lStack_b8 + 0x68))
            (lVar14,*(undefined4 *)
                     PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_11034f960
             ,lStack_b0);
  uVar7 = 0xd00000000000002b;
  func_0x000107c5ffec(0xd00000000000002b,0x800000010efc3970,lVar13,lVar12,lVar14,0);
  uVar8 = uStack_98;
  *(undefined8 *)(lVar3 + lStack_d8) = uVar7;
  uVar7 = 0;
  if (lStack_a8 != 0) {
    uVar7 = uStack_a0;
  }
  lVar4 = -0x2000000000000000;
  if (lStack_a8 != 0) {
    lVar4 = lStack_a8;
  }
  puVar1 = (undefined8 *)(lVar3 + _DAT_112ddb720);
  *puVar1 = uVar7;
  puVar1[1] = lVar4;
  *(undefined8 *)(lVar3 + _DAT_112ddb728) = uStack_98;
  FUN_1000285a8(0x112ddb730,&UNK_10d9a0440);
  func_0x000107c61174(uVar8);
  uVar7 = uStack_90;
  uVar10 = uStack_90;
  FUN_1000bda74();
  uVar9 = uStack_88;
  *(undefined8 *)(lVar3 + _DAT_112ddb738) = uVar10;
  func_0x000107c61604(lVar3 + lStack_d0,uStack_88);
  *(long *)(lVar3 + _DAT_112ddb740) = lStack_c8;
  lStack_70 = lStack_c0;
  puVar11 = auStack_78;
  func_0x000107c61154(puVar11,PTR_s_init_1125d9248);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar9);
  lVar3 = unaff_x20;
  func_0x000107c614f0(unaff_x20);
  func_0x000107c61464(unaff_x20,lVar3,0x40,7);
  return puVar11;
}



/* Entry: 10041ba40; end: 10041bab3; -[SCGrapheneMessagingMediaPrefetchMetric2 init] */

undefined1 * FUN_10041ba40(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e8e00;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10041bab4; end: 10041bad3;  */

void FUN_10041bab4(void)

{
  func_0x000107c61168(&PTR_PTR_112ddb858);
  return;
}



/* Entry: 10041bad4; end: 10041bb97;  */

void FUN_10041bad4(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 10041bb98; end: 10041bbbf; +[SCReplaySubject replaySubjectWithBufferSize:] */

void FUN_10041bb98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c610f4();
  func_0x000107c45a7c(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10041bbc0; end: 10041bbef; -[SCReplaySubject .cxx_construct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10041bbc0(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112796930);
  *puVar1 = 0x32aaaba7;
  puVar1[2] = 0;
  puVar1[1] = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[7] = 0;
  return;
}



/* Entry: 10041bbf0; end: 10041bcf7; -[SCReplaySubject initWithBufferSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10041bbf0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_11270e638;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126c9690;
    func_0x000107c61160();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112796920);
    *(undefined **)((long)puVar1 + (long)_DAT_112796920) = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c3e170();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112796924);
    *(undefined **)((long)puVar1 + (long)_DAT_112796924) = puVar2;
    func_0x000107c61170(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112796928) = param_3;
    puVar2 = PTR_PTR_1126e3010;
    func_0x000107c610f4();
    func_0x000107c47ba0();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11279692c);
    *(undefined **)((long)puVar1 + (long)_DAT_11279692c) = puVar2;
    func_0x000107c61170(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10041bcf8; end: 10041bd07; -[SponsoredSnapFeedRequestMetadataServices feedRequestMetadataProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10041bcf8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130109e0));
  return;
}



/* Entry: 10041bd08; end: 10041bdd3; -[SCConversationAdsManagerDelegateImpl initWithSponsoredSnapsFeedRequestMetadataProvider:sponsoredSnapFeedLifecycleEventSubject:sponsoredSnapFeedActiveBannerSubject:] */

undefined1 *
FUN_10041bd08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_1126e8dc0;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10041bdd4; end: 10041be23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10041bdd4(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112727ba0);
    func_0x000107c61174(uVar1);
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10041be24; end: 10041be33; -[_TtC24SCFideliusArroyoServices24SCFideliusArroyoServices reEncryptionDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10041be24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130443a8));
  return;
}



/* Entry: 10041be34; end: 10041beab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10041be34(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112727ba0);
    func_0x000107c52018(uVar1);
    func_0x000107c61180();
    uVar2 = uVar1;
    func_0x000107c4f920();
    func_0x000107c61180();
    func_0x000107c61170(uVar1);
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10041beac; end: 10041bed3; -[SCFideliusServiceCoordinator reEncryptionDelegate] */

void FUN_10041beac(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10041bed4; end: 10041bedb; -[SCFriendsFeedLoggingServices friendsFeedReadyLogger] */

undefined8 FUN_10041bed4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10041bedc; end: 10041bee3; -[SCFriendsFeedLoggingServices ghostToFeedLogger] */

undefined8 FUN_10041bedc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10041bee4; end: 10041beeb; -[SCArgosService attestationProvider] */

undefined8 FUN_10041bee4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10041beec; end: 10041bf07;  */

void FUN_10041beec(void)

{
  func_0x000107c61160(PTR_PTR_1126ba5d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10041bf08; end: 10041bf27; -[_TtC15SCCrashServices15SCCrashServices crashLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10041bf08(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_1130807f0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10041bf28; end: 10041bf9f; -[_TtC22SCMessagingCrashLogger22SCMessagingCrashLogger initWithCrashLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10041bf28(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  if (param_3 == 0) {
    func_0x000107c61464(param_1,lVar2,0x10,7);
  }
  else {
    *(long *)(param_1 + _DAT_112ddbaa0) = param_3;
    puVar1 = PTR_s_init_1125d9248;
    lStack_30 = param_1;
    lStack_28 = lVar2;
    func_0x000107c615f0(param_3);
    func_0x000107c61154(&lStack_30,puVar1);
  }
  return;
}



/* Entry: 10041bfa0; end: 10041bfa7; -[SCDuplexServices duplexClient] */

undefined8 FUN_10041bfa0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10041bfa8; end: 10041de6b; -[SCNativeMessagingSessionManager initWithUserSession:keyProvider:reEncryptionDelegate:friendsFeedReadyLogger:ghostToFeedLogger:graphene:friendsFeedGrapheneV2:snapTokenProvider:attestationProvider:contentDelegate:uploadDelegate:sendDelegate:initializeContextInfoDelegate:blizzardLoggerDelegate:conversationAdsManagerDelegate:nativeDispatchPerformer:docObjectContext:friendsFeedEntryStore:friendsFeedLoadingStatusStream:backgroundTaskWrapper:crashLogger:launchTrigger:sponsoredSnapFeedLifecycleEventObservable:sponsoredSnapFeedActiveBannerObservable:conversationDataUpdateAnnouncer:storyDataUpdateAnnouncer:notificationCenterUpdateAnnouncer:identityDelegate:dataWiped:circumstanceEngine:duplexClient:messagingNotificationExtensionsUserDefaults:notificationPool:messagingExperimentService:networkConnectivityObservable:flipperServices:groupsManagerDelegate:nativePostSnapInteractionEvents:bufferedContentFetcher:userPropertyDelegate:mediaPrefetchDelegate:complianceEngine:applicationLifecycleEvents:] */

undefined **
FUN_10041bfa8(undefined8 param_1,undefined *param_2,undefined8 param_3,undefined *param_4,
             undefined *param_5,undefined *param_6,undefined *param_7,undefined *param_8,
             undefined *param_9,undefined *param_10,undefined8 param_11,undefined8 param_12,
             undefined *param_13,undefined *param_14,undefined *param_15,undefined *param_16,
             undefined *param_17,undefined *param_18,undefined *param_19,undefined *param_20,
             undefined *param_21,undefined *param_22,undefined *param_23,undefined *param_24,
             undefined8 param_25,undefined *param_26,undefined *param_27,undefined *param_28,
             undefined *param_29,undefined *param_30,undefined *param_31,undefined *param_32,
             undefined **param_33,undefined *param_34,undefined8 param_35,undefined *param_36,
             undefined *param_37,undefined *param_38,undefined8 param_39,undefined *param_40,
             undefined *param_41,undefined *param_42,undefined *param_43,undefined *param_44,
             undefined *param_45,undefined *param_46)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puStack_940;
  undefined *puStack_938;
  undefined8 uStack_930;
  undefined *puStack_928;
  undefined **ppuStack_920;
  undefined *puStack_918;
  undefined *puStack_910;
  undefined *puStack_908;
  undefined1 *puStack_900;
  code *pcStack_8f8;
  undefined **ppuStack_8f0;
  undefined *puStack_8e0;
  undefined *puStack_8d8;
  undefined *puStack_8d0;
  undefined *puStack_8c8;
  undefined *puStack_8c0;
  undefined *puStack_8b8;
  undefined *puStack_8b0;
  undefined *puStack_8a8;
  undefined *puStack_8a0;
  undefined *puStack_898;
  undefined *puStack_890;
  undefined *puStack_888;
  undefined *puStack_880;
  undefined *puStack_878;
  undefined *puStack_870;
  undefined *puStack_868;
  undefined *puStack_860;
  undefined *puStack_858;
  undefined *puStack_850;
  undefined *puStack_848;
  undefined *puStack_840;
  undefined *puStack_838;
  undefined *puStack_830;
  undefined *puStack_828;
  undefined **ppuStack_820;
  undefined *puStack_818;
  undefined **ppuStack_810;
  undefined *puStack_808;
  undefined **ppuStack_800;
  undefined *puStack_7f8;
  undefined *puStack_7f0;
  undefined *puStack_7e8;
  undefined *puStack_7e0;
  undefined *puStack_7d8;
  undefined *puStack_7d0;
  undefined **ppuStack_7c8;
  undefined *puStack_7c0;
  undefined **ppuStack_7b8;
  undefined *puStack_7b0;
  undefined *puStack_7a8;
  undefined *puStack_7a0;
  undefined *puStack_798;
  undefined *puStack_790;
  undefined *puStack_788;
  undefined *puStack_780;
  undefined *puStack_778;
  undefined *puStack_770;
  undefined *puStack_768;
  undefined *puStack_760;
  undefined *puStack_758;
  undefined *puStack_750;
  undefined *puStack_748;
  undefined *puStack_740;
  undefined *puStack_738;
  undefined *puStack_730;
  undefined *puStack_728;
  undefined *puStack_720;
  undefined *puStack_718;
  undefined *puStack_710;
  undefined *puStack_708;
  undefined *puStack_700;
  undefined *puStack_6f8;
  int iStack_6ec;
  undefined *puStack_6e8;
  int iStack_6dc;
  undefined *puStack_6d8;
  undefined *puStack_6d0;
  undefined *puStack_6c8;
  undefined *puStack_6c0;
  undefined *puStack_6b8;
  undefined *puStack_6b0;
  undefined *puStack_6a8;
  undefined *puStack_6a0;
  undefined *puStack_698;
  undefined *puStack_690;
  undefined *puStack_688;
  undefined *puStack_680;
  undefined *puStack_678;
  undefined *puStack_670;
  undefined *puStack_668;
  undefined *puStack_660;
  undefined *puStack_658;
  undefined *puStack_650;
  undefined *puStack_648;
  undefined *puStack_640;
  undefined *puStack_638;
  undefined *puStack_630;
  undefined8 uStack_628;
  undefined *puStack_620;
  undefined *puStack_618;
  undefined *puStack_610;
  undefined *puStack_608;
  undefined *puStack_600;
  undefined *puStack_5f8;
  undefined *puStack_5f0;
  undefined *puStack_5e8;
  undefined *puStack_5e0;
  undefined *puStack_5d8;
  uint uStack_5d0;
  uint uStack_5cc;
  undefined *puStack_5c8;
  undefined **ppuStack_5c0;
  undefined *puStack_5b8;
  undefined *puStack_5b0;
  undefined *puStack_5a8;
  undefined *puStack_5a0;
  undefined *puStack_598;
  undefined *puStack_590;
  undefined *puStack_588;
  undefined *puStack_580;
  undefined8 uStack_578;
  undefined *puStack_570;
  undefined *puStack_568;
  undefined *puStack_560;
  undefined *puStack_558;
  undefined *puStack_550;
  undefined *puStack_548;
  undefined *puStack_540;
  undefined *puStack_538;
  undefined *puStack_530;
  undefined *puStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined *puStack_510;
  undefined *puStack_508;
  undefined *puStack_500;
  undefined *puStack_4f8;
  undefined *puStack_4f0;
  undefined *puStack_4e8;
  undefined *puStack_4e0;
  undefined8 uStack_4d8;
  undefined *puStack_4d0;
  undefined *puStack_4c8;
  undefined *puStack_4c0;
  undefined *puStack_4b8;
  undefined *puStack_4b0;
  undefined **ppuStack_4a8;
  undefined *puStack_4a0;
  undefined *puStack_498;
  undefined *puStack_490;
  undefined *puStack_488;
  undefined8 uStack_480;
  undefined *puStack_478;
  undefined *puStack_470;
  undefined *puStack_468;
  undefined *puStack_460;
  undefined *puStack_458;
  undefined *puStack_450;
  undefined *puStack_448;
  undefined *puStack_440;
  undefined *puStack_438;
  undefined *puStack_430;
  undefined *puStack_428;
  undefined *puStack_420;
  undefined *puStack_418;
  undefined *puStack_410;
  undefined *puStack_408;
  undefined *puStack_400;
  undefined *puStack_3f8;
  undefined *puStack_3f0;
  undefined *puStack_3e8;
  undefined *puStack_3e0;
  undefined *puStack_3d8;
  undefined *puStack_3d0;
  undefined *puStack_3c8;
  undefined *puStack_3c0;
  undefined *puStack_3b8;
  undefined *puStack_3b0;
  undefined *puStack_3a8;
  undefined *puStack_3a0;
  undefined *puStack_398;
  undefined *puStack_390;
  undefined *puStack_388;
  undefined *puStack_380;
  undefined *puStack_378;
  undefined *puStack_370;
  undefined *puStack_368;
  undefined *puStack_360;
  undefined *puStack_358;
  undefined *puStack_350;
  undefined *puStack_348;
  undefined *puStack_340;
  undefined *puStack_338;
  undefined *puStack_330;
  undefined *puStack_328;
  undefined *puStack_320;
  undefined *puStack_318;
  undefined *puStack_310;
  undefined *puStack_308;
  undefined *puStack_300;
  undefined *puStack_2f8;
  undefined *puStack_2f0;
  undefined *puStack_2e8;
  undefined *puStack_2e0;
  undefined *puStack_2d8;
  undefined *puStack_2d0;
  undefined *puStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined *puStack_2b0;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined *puStack_290;
  undefined *puStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined *puStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined *puStack_250;
  undefined **ppuStack_248;
  undefined **ppuStack_240;
  undefined *puStack_238;
  undefined8 uStack_230;
  undefined **ppuStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined **ppuStack_208;
  undefined *puStack_200;
  undefined **ppuStack_1f8;
  undefined *puStack_1f0;
  undefined **ppuStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined **ppuStack_1d0;
  undefined **ppuStack_1c8;
  undefined **ppuStack_1c0;
  undefined **ppuStack_1b8;
  undefined **ppuStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  undefined *puStack_178;
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined *puStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  long lStack_80;
  
  puStack_598 = param_46;
  puStack_590 = param_45;
  puStack_500 = param_44;
  puStack_4f8 = param_43;
  puStack_4f0 = param_42;
  puStack_4e8 = param_41;
  puStack_4e0 = param_40;
  uStack_4d8 = param_39;
  puStack_4d0 = param_38;
  puStack_4c8 = param_37;
  puStack_580 = param_36;
  uStack_578 = param_35;
  puStack_570 = param_34;
  ppuStack_4a8 = param_33;
  puStack_4a0 = param_32;
  puStack_498 = param_31;
  puStack_490 = param_30;
  puStack_488 = param_29;
  puStack_508 = param_28;
  puStack_548 = param_27;
  puStack_540 = param_26;
  uStack_480 = param_25;
  puStack_478 = param_24;
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_588 = param_23;
  puStack_4c0 = param_22;
  puStack_4b8 = param_21;
  puStack_4b0 = param_20;
  puStack_5a0 = param_2;
  puStack_470 = param_9;
  puStack_468 = param_7;
  puStack_460 = param_6;
  puStack_458 = param_5;
  puStack_450 = param_4;
  puStack_448 = param_8;
  func_0x000107c61174(param_4);
  func_0x000107c61174(puStack_458);
  func_0x000107c61174(puStack_460);
  func_0x000107c61174(puStack_468);
  func_0x000107c61174(puStack_448);
  func_0x000107c61174(puStack_470);
  puStack_510 = param_10;
  func_0x000107c61174(param_10);
  uStack_518 = param_11;
  func_0x000107c61174(param_11);
  uStack_520 = param_12;
  func_0x000107c61174(param_12);
  puStack_528 = param_13;
  func_0x000107c61174(param_13);
  uVar7 = uStack_578;
  puStack_530 = param_14;
  func_0x000107c61174(param_14);
  puVar10 = puStack_548;
  puStack_538 = param_15;
  func_0x000107c61174(param_15);
  puVar2 = puStack_508;
  puStack_550 = param_16;
  func_0x000107c61174(param_16);
  puVar11 = puStack_580;
  puStack_558 = param_17;
  func_0x000107c61174(param_17);
  puStack_560 = param_18;
  func_0x000107c61174(param_18);
  puStack_568 = param_19;
  func_0x000107c61174(param_19);
  puVar5 = puStack_588;
  func_0x000107c61174(puStack_4b0);
  func_0x000107c61174(puStack_4b8);
  func_0x000107c61174(puStack_4c0);
  func_0x000107c61174(puVar5);
  func_0x000107c61174(puStack_478);
  puVar9 = puStack_540;
  func_0x000107c61174(uStack_480);
  func_0x000107c61174(puVar9);
  func_0x000107c61174(puVar10);
  func_0x000107c61174(puVar2);
  puVar8 = puStack_570;
  func_0x000107c61174(puStack_488);
  func_0x000107c61174(puStack_490);
  func_0x000107c61174(puStack_498);
  func_0x000107c61174(puStack_4a0);
  func_0x000107c61174(ppuStack_4a8);
  func_0x000107c61174(puVar8);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(puVar11);
  func_0x000107c61174(puStack_4c8);
  func_0x000107c61174(puStack_4d0);
  func_0x000107c61174(uStack_4d8);
  func_0x000107c61174(puStack_4e0);
  func_0x000107c61174(puStack_4e8);
  func_0x000107c61174(puStack_4f0);
  func_0x000107c61174(puStack_4f8);
  func_0x000107c61174(puStack_500);
  puVar3 = puStack_590;
  func_0x000107c61174();
  puVar4 = puStack_598;
  func_0x000107c61174();
  puStack_440 = puStack_5a0;
  puStack_438 = PTR_PTR_1126e8de8;
  ppuVar1 = &puStack_440;
  func_0x000107c61154(ppuVar1,PTR_s_init_1125d9248);
  if (ppuVar1 != (undefined **)0x0) {
    func_0x000107c61174(puVar3);
    puVar2 = ppuVar1[0x37];
    ppuVar1[0x37] = puVar3;
    func_0x000107c61170(puVar2);
    func_0x000107c61174(puVar4);
    puVar3 = ppuVar1[0x2f];
    ppuVar1[0x2f] = puVar4;
    func_0x000107c61170(puVar3);
    puVar2 = puStack_450;
    func_0x000107c61174(puStack_450);
    puVar4 = ppuVar1[0xe];
    ppuVar1[0xe] = puVar2;
    func_0x000107c61170(puVar4);
    puVar4 = puStack_468;
    func_0x000107c61174(puStack_468);
    puVar3 = ppuVar1[4];
    ppuVar1[4] = puVar4;
    func_0x000107c61170(puVar3);
    puVar4 = puStack_448;
    func_0x000107c61174(puStack_448);
    puVar3 = ppuVar1[5];
    ppuVar1[5] = puVar4;
    func_0x000107c61170(puVar3);
    puVar4 = puStack_470;
    func_0x000107c61174(puStack_470);
    puVar3 = ppuVar1[6];
    ppuVar1[6] = puVar4;
    func_0x000107c61170(puVar3);
    puVar4 = puStack_510;
    func_0x000107c61174(puStack_510);
    puVar3 = ppuVar1[7];
    ppuVar1[7] = puVar4;
    func_0x000107c61170(puVar3);
    func_0x000107c61174(puVar5);
    puVar4 = ppuVar1[0x29];
    ppuVar1[0x29] = puVar5;
    func_0x000107c61170(puVar4);
    puVar4 = puStack_478;
    func_0x000107c61174(puStack_478);
    puVar3 = ppuVar1[0x2a];
    ppuVar1[0x2a] = puVar4;
    func_0x000107c61170(puVar3);
    puVar4 = PTR_PTR_1126b8288;
    func_0x000107c610f4();
    func_0x000107c487f0();
    puVar3 = ppuVar1[0x1b];
    ppuVar1[0x1b] = puVar4;
    func_0x000107c61170(puVar3);
    func_0x000107c61174(puVar8);
    puVar4 = ppuVar1[0x2b];
    ppuVar1[0x2b] = puVar8;
    func_0x000107c61170(puVar4);
    func_0x000107c61174(puVar11);
    puVar4 = ppuVar1[0x2c];
    ppuVar1[0x2c] = puVar11;
    func_0x000107c61170(puVar4);
    puVar3 = puStack_4c8;
    func_0x000107c61174(puStack_4c8);
    puVar4 = ppuVar1[0x2d];
    ppuVar1[0x2d] = puVar3;
    func_0x000107c61170(puVar4);
    puVar4 = puStack_4d0;
    func_0x000107c61174(puStack_4d0);
    puVar5 = ppuVar1[0x31];
    ppuVar1[0x31] = puVar4;
    func_0x000107c61170(puVar5);
    func_0x000107c61174(puVar9);
    puVar4 = ppuVar1[0x17];
    ppuVar1[0x17] = puVar9;
    func_0x000107c61170(puVar4);
    func_0x000107c61174(puVar10);
    puVar4 = ppuVar1[0x18];
    ppuVar1[0x18] = puVar10;
    func_0x000107c61170(puVar4);
    puVar4 = puStack_4e8;
    func_0x000107c61174(puStack_4e8);
    puVar5 = ppuVar1[0x34];
    ppuVar1[0x34] = puVar4;
    func_0x000107c61170(puVar5);
    puVar4 = puStack_4f0;
    func_0x000107c61174(puStack_4f0);
    puVar5 = ppuVar1[0x35];
    ppuVar1[0x35] = puVar4;
    func_0x000107c61170(puVar5);
    puVar4 = puStack_4f8;
    func_0x000107c61174(puStack_4f8);
    puVar5 = ppuVar1[0x36];
    ppuVar1[0x36] = puVar4;
    func_0x000107c61170(puVar5);
    puVar4 = puVar2;
    func_0x000107c421f8();
    func_0x000107c61180();
    puVar5 = puVar4;
    func_0x000107c5c168();
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    uVar7 = uStack_4d8;
    func_0x000107c436d4(uStack_4d8);
    func_0x000107c61180();
    func_0x000107c3d648();
    func_0x000107c61170(uVar7);
    puStack_5a0 = puVar5;
    func_0x000107c40794();
    puVar4 = puRam0000000113829b30;
    puRam0000000113829b30 = puVar5;
    func_0x000107c61170(puVar4);
    puVar4 = PTR_PTR_1126ba528;
    func_0x000107c5d984(puVar2);
    func_0x000107c61180();
    func_0x000107c41320();
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    puVar5 = puVar4;
    func_0x000107c4e430(puVar4);
    func_0x000107c61180();
    func_0x000107c3b228(ppuVar1);
    func_0x000107c61170(puVar5);
    puStack_5b0 = puVar4;
    func_0x000107c3ac04();
    func_0x000107c61180();
    puStack_5b8 = puVar4;
    func_0x000107c4e430();
    func_0x000107c61180();
    ppuVar6 = ppuStack_4a8;
    puStack_5a8 = puVar4;
    func_0x000107c5c1dc();
    func_0x000107c61180();
    ppuStack_5c0 = &PTR____CFConstantStringClassReference_110de9dd8;
    if (ppuVar6 != (undefined **)0x0) {
      ppuStack_5c0 = ppuVar6;
    }
    func_0x000107c61174(ppuStack_5c0);
    func_0x000107c61170(ppuVar6);
    func_0x000107c6071c();
    func_0x000107c5c734();
    func_0x000107c61180();
    ppuVar6 = ppuVar1;
    func_0x000107c3bf78();
    func_0x000107c61180();
    puVar4 = ppuVar1[0x33];
    ppuVar1[0x33] = (undefined *)ppuVar6;
    func_0x000107c61170(puVar4);
    func_0x000107c4cf2c(puVar3);
    func_0x000107c4c870(puVar3);
    puVar4 = puVar3;
    func_0x000107c4a54c();
    puStack_758 = (undefined *)CONCAT44(puStack_758._4_4_,(int)puVar4);
    puVar4 = puVar3;
    func_0x000107c42650();
    puStack_748 = (undefined *)CONCAT44(puStack_748._4_4_,(int)puVar4);
    puVar4 = puVar3;
    func_0x000107c42590();
    iStack_6dc = (int)puVar4;
    puVar4 = puVar3;
    func_0x000107c4a07c();
    uStack_5cc = (uint)puVar4;
    puVar4 = puVar3;
    func_0x000107c4a298();
    uStack_5d0 = (uint)puVar4;
    puVar4 = puVar3;
    func_0x000107c4a100();
    *(char *)(ppuVar1 + 0x2e) = (char)puVar4;
    puVar4 = puVar3;
    func_0x000107c49a58();
    *(char *)((long)ppuVar1 + 0x171) = (char)puVar4;
    puVar4 = puVar3;
    func_0x000107c49a54();
    *(char *)((long)ppuVar1 + 0x172) = (char)puVar4;
    puStack_5c8 = puVar3;
    func_0x000107c49f6c();
    iStack_6ec = (int)puVar3;
    puVar4 = puStack_448;
    func_0x000107c5c734(puStack_448);
    func_0x000107c61180();
    func_0x000107c4bf28(param_1);
    func_0x000107c61170(puVar4);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c4d95c();
    func_0x000107c61180();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_5d8 = puVar3;
    puStack_430 = puVar3;
    func_0x000107c4d954(0x412b774000000000);
    func_0x000107c61180();
    ppuStack_8f0 = (undefined **)puVar5;
    puStack_5e0 = puVar5;
    func_0x000107c51804();
    func_0x000107c61180();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_5e8 = puVar4;
    puStack_258 = puVar4;
    func_0x000107c4d95c();
    func_0x000107c61180();
    puStack_5f0 = puVar3;
    puStack_428 = puVar3;
    FUN_10043dee8();
    func_0x000107c61180();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_5f8 = puVar3;
    puStack_250 = puVar3;
    func_0x000107c4d95c();
    func_0x000107c61180();
    ppuStack_248 = &PTR____CFConstantStringClassReference_110dad398;
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_600 = puVar4;
    puStack_420 = puVar4;
    func_0x000107c4d95c();
    func_0x000107c61180();
    ppuStack_240 = &PTR____CFConstantStringClassReference_110dad378;
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_608 = puVar3;
    puStack_418 = puVar3;
    func_0x000107c4d95c();
    func_0x000107c61180();
    ppuStack_8f0 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111184370;
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puStack_610 = puVar4;
    puStack_410 = puVar4;
    func_0x000107c51804();
    func_0x000107c61180();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_618 = puVar3;
    puStack_238 = puVar3;
    func_0x000107c4d95c();
    func_0x000107c61180();
    uVar7 = 0;
    puStack_620 = puVar4;
    puStack_408 = puVar4;
    FUN_10043dfb4();
    func_0x000107c61180();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uStack_628 = uVar7;
    uStack_230 = uVar7;
    func_0x000107c4d95c();
    func_0x000107c61180();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_630 = puVar4;
    puStack_400 = puVar4;
    ppuStack_228 = ppuStack_5c0;
    func_0x000107c4d95c();
    func_0x000107c61180();
    puStack_638 = puVar3;
    puStack_3f8 = puVar3;
    FUN_10043f050();
    func_0x000107c61180();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_640 = puVar3;
    puStack_220 = puVar3;
    func_0x000107c4d95c();
    func_0x000107c61180();
    puStack_648 = puVar4;
    puStack_3f0 = puVar4;
    func_0x00010043f05c();
    func_0x000107c61180();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_650 = puVar4;
    puStack_218 = puVar4;
    func_0x000107c4d95c();
    func_0x000107c61180();
    puStack_658 = puVar3;
    puStack_3e8 = puVar3;
    func_0x00010043f068();
    func_0x000107c61180();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_660 = puVar3;
    puStack_210 = puVar3;
    func_0x000107c4d95c();
    func_0x000107c61180();
    ppuStack_208 = &PTR____CFConstantStringClassReference_110dad378;
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_668 = puVar4;
    puStack_3e0 = puVar4;
    func_0x000107c4d95c();
    func_0x000107c61180();
    puStack_670 = puVar3;
    puStack_3d8 = puVar3;
    func_0x00010043f074();
    func_0x000107c61180();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_678 = puVar3;
    puStack_200 = puVar3;
    func_0x000107c4d95c();
    func_0x000107c61180();
    ppuStack_1f8 = &PTR____CFConstantStringClassReference_110dad398;
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_680 = puVar4;
    puStack_3d0 = puVar4;
    func_0x000107c4d95c();
    func_0x000107c61180();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_688 = puVar3;
    puStack_3c8 = puVar3;
    func_0x000107c4d960();
    func_0x000107c61180();
    puStack_690 = puVar4;
    func_0x000107c5c1d4();
    func_0x000107c61180();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_698 = puVar4;
    puStack_1f0 = puVar4;
    func_0x000107c4d95c();
    func_0x000107c61180();
    ppuStack_1e8 = &PTR____CFConstantStringClassReference_110dad398;
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_6a0 = puVar3;
    puStack_3c0 = puVar3;
    func_0x000107c4d95c();
    func_0x000107c61180();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_6a8 = puVar5;
    puStack_3b8 = puVar5;
    func_0x000107c4d960();
    func_0x000107c61180();
    ppuStack_8f0 = (undefined **)puVar3;
    puStack_6b0 = puVar3;
    func_0x000107c51804();
    func_0x000107c61180();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_6b8 = puVar4;
    puStack_1e0 = puVar4;
    func_0x000107c4d95c();
    func_0x000107c61180();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_6c0 = puVar3;
    puStack_3b0 = puVar3;
    func_0x000107c4d960();
    func_0x000107c61180();
    ppuStack_8f0 = (undefined **)puVar5;
    puStack_6c8 = puVar5;
    func_0x000107c51804();
    func_0x000107c61180();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_6d0 = puVar4;
    puStack_1d8 = puVar4;
    func_0x000107c4d95c();
    func_0x000107c61180();
    ppuStack_1d0 = &PTR____CFConstantStringClassReference_110dad398;
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_6d8 = puVar3;
    puStack_3a8 = puVar3;
    func_0x000107c4d95c();
    func_0x000107c61180();
    ppuStack_1c8 = &PTR____CFConstantStringClassReference_110dad378;
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_6e8 = puVar4;
    puStack_3a0 = puVar4;
    func_0x000107c4d95c();
    func_0x000107c61180();
    ppuStack_1c0 = &PTR____CFConstantStringClassReference_110dad378;
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_6f8 = puVar3;
    puStack_398 = puVar3;
    func_0x000107c4d95c();
    func_0x000107c61180();
    ppuStack_1b8 = &PTR____CFConstantStringClassReference_110dad378;
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_700 = puVar4;
    puStack_390 = puVar4;
    func_0x000107c4d95c();
    func_0x000107c61180();
    ppuStack_1b0 = &PTR____CFConstantStringClassReference_110dad398;
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_708 = puVar3;
    puStack_388 = puVar3;
    func_0x000107c4d95c();
    func_0x000107c61180();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_710 = puVar4;
    puStack_380 = puVar4;
    func_0x000107c4d974();
    func_0x000107c61180();
    puStack_718 = puVar3;
    func_0x000107c5c1d4();
    func_0x000107c61180();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_720 = puVar3;
    puStack_1a8 = puVar3;
    func_0x000107c4d95c();
    func_0x000107c61180();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_728 = puVar4;
    puStack_378 = puVar4;
    func_0x000107c4d960();
    func_0x000107c61180();
    puStack_730 = puVar3;
    func_0x000107c5c1d4();
    func_0x000107c61180();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_738 = puVar3;
    puStack_1a0 = puVar3;
    func_0x000107c4d95c();
    func_0x000107c61180();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_740 = puVar4;
    puStack_370 = puVar4;
    func_0x000107c4d960();
    func_0x000107c61180();
    puStack_750 = puVar3;
    func_0x000107c5c1d4();
    func_0x000107c61180();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_760 = puVar3;
    puStack_198 = puVar3;
    func_0x000107c4d95c();
    func_0x000107c61180();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_768 = puVar5;
    puStack_368 = puVar5;
    func_0x000107c51b38(0x4072c00000000000,PTR_PTR_1126afec0);
    func_0x000107c4d954();
    func_0x000107c61180();
    puStack_770 = puVar4;
    func_0x000107c5c1d4();
    func_0x000107c61180();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_778 = puVar4;
    puStack_190 = puVar4;
    func_0x000107c4d95c();
    func_0x000107c61180();
    ppuStack_188 = &PTR____CFConstantStringClassReference_110dad378;
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_780 = puVar3;
    puStack_360 = puVar3;
    func_0x000107c4d95c();
    func_0x000107c61180();
    ppuStack_180 = &PTR____CFConstantStringClassReference_110dad378;
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_788 = puVar4;
    puStack_358 = puVar4;
    func_0x000107c4d95c();
    func_0x000107c61180();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_790 = puVar3;
    puStack_350 = puVar3;
    func_0x000107c4d960();
    func_0x000107c61180();
    puStack_798 = puVar4;
    func_0x000107c5c1d4();
    func_0x000107c61180();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_7a0 = puVar4;
    puStack_178 = puVar4;
    func_0x000107c4d95c();
    func_0x000107c61180();
    ppuStack_170 = &PTR____CFConstantStringClassReference_110dad378;
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_7a8 = puVar3;
    puStack_348 = puVar3;
    func_0x000107c4d95c();
    func_0x000107c61180();
    ppuVar6 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c0628;
    puStack_7b0 = puVar4;
    puStack_340 = puVar4;
    func_0x000107c5c1d4();
    func_0x000107c61180();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_7b8 = ppuVar6;
    ppuStack_168 = ppuVar6;
    func_0x000107c4d95c();
    func_0x000107c61180();
    ppuVar6 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c0640;
    puStack_7c0 = puVar4;
    puStack_338 = puVar4;
    func_0x000107c5c1d4();
    func_0x000107c61180();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_7c8 = ppuVar6;
    ppuStack_160 = ppuVar6;
    func_0x000107c4d95c();
    func_0x000107c61180();
    ppuStack_158 = &PTR____CFConstantStringClassReference_110dad378;
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_7d0 = puVar3;
    puStack_330 = puVar3;
    func_0x000107c4d95c();
    func_0x000107c61180();
    ppuStack_150 = &PTR____CFConstantStringClassReference_110dad378;
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_7d8 = puVar4;
    puStack_328 = puVar4;
    func_0x000107c4d95c();
    func_0x000107c61180();
    ppuStack_148 = &PTR____CFConstantStringClassReference_110dad378;
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_7e0 = puVar3;
    puStack_320 = puVar3;
    func_0x000107c4d95c();
    func_0x000107c61180();
    ppuStack_140 = &PTR____CFConstantStringClassReference_110dad378;
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_7e8 = puVar4;
    puStack_318 = puVar4;
    func_0x000107c4d95c();
    func_0x000107c61180();
    ppuStack_138 = &PTR____CFConstantStringClassReference_110dad378;
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_7f0 = puVar3;
    puStack_310 = puVar3;
    func_0x000107c4d95c();
    func_0x000107c61180();
    ppuVar6 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c0658;
    puStack_7f8 = puVar4;
    puStack_308 = puVar4;
    func_0x000107c5c1d4();
    func_0x000107c61180();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_800 = ppuVar6;
    ppuStack_130 = ppuVar6;
    func_0x000107c4d95c();
    func_0x000107c61180();
    ppuVar6 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c0670;
    puStack_808 = puVar4;
    puStack_300 = puVar4;
    func_0x000107c5c1d4();
    func_0x000107c61180();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_810 = ppuVar6;
    ppuStack_128 = ppuVar6;
    func_0x000107c4d95c();
    func_0x000107c61180();
    ppuVar6 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c0688;
    puStack_818 = puVar4;
    puStack_2f8 = puVar4;
    func_0x000107c5c1d4();
    func_0x000107c61180();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_820 = ppuVar6;
    ppuStack_120 = ppuVar6;
    func_0x000107c4d95c();
    func_0x000107c61180();
    ppuStack_118 = &PTR____CFConstantStringClassReference_110dad378;
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_828 = puVar3;
    puStack_2f0 = puVar3;
    func_0x000107c4d95c();
    func_0x000107c61180();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_830 = puVar4;
    puStack_2e8 = puVar4;
    func_0x000107c4d960();
    func_0x000107c61180();
    puStack_838 = puVar3;
    func_0x000107c5c1d4();
    func_0x000107c61180();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_840 = puVar3;
    puStack_110 = puVar3;
    func_0x000107c4d95c();
    func_0x000107c61180();
    ppuStack_108 = &PTR____CFConstantStringClassReference_110dad378;
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_848 = puVar4;
    puStack_2e0 = puVar4;
    func_0x000107c4d95c();
    func_0x000107c61180();
    ppuStack_100 = &PTR____CFConstantStringClassReference_110dad398;
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_850 = puVar3;
    puStack_2d8 = puVar3;
    func_0x000107c4d95c();
    func_0x000107c61180();
    ppuStack_f8 = &PTR____CFConstantStringClassReference_110dad398;
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_858 = puVar4;
    puStack_2d0 = puVar4;
    func_0x000107c4d95c();
    func_0x000107c61180();
    ppuStack_f0 = &PTR____CFConstantStringClassReference_110dad378;
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_860 = puVar3;
    puStack_2c8 = puVar3;
    func_0x000107c4d95c();
    func_0x000107c61180();
    ppuStack_e8 = &PTR____CFConstantStringClassReference_110dad378;
    if ((int)puStack_758 == 0) {
      ppuStack_e8 = &PTR____CFConstantStringClassReference_110dad398;
    }
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_868 = puVar4;
    puStack_2c0 = puVar4;
    func_0x000107c4d95c();
    func_0x000107c61180();
    ppuStack_e0 = &PTR____CFConstantStringClassReference_110dad378;
    if ((int)puStack_748 == 0) {
      ppuStack_e0 = &PTR____CFConstantStringClassReference_110dad398;
    }
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_758 = puVar3;
    puStack_2b8 = puVar3;
    func_0x000107c4d95c();
    func_0x000107c61180();
    ppuStack_d8 = &PTR____CFConstantStringClassReference_110dad398;
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_748 = puVar4;
    puStack_2b0 = puVar4;
    func_0x000107c4d95c();
    func_0x000107c61180();
    ppuStack_d0 = &PTR____CFConstantStringClassReference_110dad398;
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_870 = puVar3;
    puStack_2a8 = puVar3;
    func_0x000107c4d95c();
    func_0x000107c61180();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_878 = puVar4;
    puStack_2a0 = puVar4;
    func_0x000107c4d960();
    func_0x000107c61180();
    puStack_880 = puVar3;
    func_0x000107c5c1d4();
    func_0x000107c61180();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_888 = puVar3;
    puStack_c8 = puVar3;
    func_0x000107c4d95c();
    func_0x000107c61180();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_890 = puVar4;
    puStack_298 = puVar4;
    func_0x000107c4d960();
    func_0x000107c61180();
    puStack_898 = puVar3;
    func_0x000107c5c1d4();
    func_0x000107c61180();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_8a0 = puVar3;
    puStack_c0 = puVar3;
    func_0x000107c4d95c();
    func_0x000107c61180();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_8a8 = puVar4;
    puStack_290 = puVar4;
    func_0x000107c4d960();
    func_0x000107c61180();
    puStack_8b0 = puVar3;
    func_0x000107c5c1d4();
    func_0x000107c61180();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_8b8 = puVar3;
    puStack_b8 = puVar3;
    func_0x000107c4d95c();
    func_0x000107c61180();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_8c0 = puVar4;
    puStack_288 = puVar4;
    func_0x000107c4d960();
    func_0x000107c61180();
    puStack_8c8 = puVar3;
    func_0x000107c5c1d4();
    func_0x000107c61180();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_8d0 = puVar3;
    puStack_b0 = puVar3;
    func_0x000107c4d95c();
    func_0x000107c61180();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_8d8 = puVar4;
    puStack_280 = puVar4;
    func_0x000107c4d960();
    func_0x000107c61180();
    puStack_8e0 = puVar3;
    func_0x000107c5c1d4();
    func_0x000107c61180();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_a8 = puVar3;
    func_0x000107c4d95c();
    func_0x000107c61180();
    ppuStack_a0 = &PTR____CFConstantStringClassReference_110dad378;
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_278 = puVar4;
    func_0x000107c4d95c();
    func_0x000107c61180();
    ppuStack_98 = &PTR____CFConstantStringClassReference_110dad378;
    if (iStack_6dc == 0) {
      ppuStack_98 = &PTR____CFConstantStringClassReference_110dad398;
    }
    puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_270 = puVar5;
    func_0x000107c4d95c();
    func_0x000107c61180();
    ppuStack_90 = &PTR____CFConstantStringClassReference_110dad378;
    if (*(char *)(ppuVar1 + 0x2e) == '\0') {
      ppuStack_90 = &PTR____CFConstantStringClassReference_110dad398;
    }
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_268 = puVar11;
    func_0x000107c4d95c();
    func_0x000107c61180();
    ppuStack_88 = &PTR____CFConstantStringClassReference_110dad378;
    if (iStack_6ec == 0) {
      ppuStack_88 = &PTR____CFConstantStringClassReference_110dad398;
    }
    puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_260 = puVar8;
    func_0x000107c419ac(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    func_0x000107c61180();
    puVar9 = puVar10;
    func_0x000107c4d2d4();
    func_0x000107c61170(puVar10);
    func_0x000107c61170(puVar8);
    puVar8 = puStack_450;
    func_0x000107c61170(puVar11);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puStack_8e0);
    func_0x000107c61170(puStack_8d8);
    func_0x000107c61170(puStack_8d0);
    func_0x000107c61170(puStack_8c8);
    func_0x000107c61170(puStack_8c0);
    func_0x000107c61170(puStack_8b8);
    func_0x000107c61170(puStack_8b0);
    func_0x000107c61170(puStack_8a8);
    func_0x000107c61170(puStack_8a0);
    func_0x000107c61170(puStack_898);
    func_0x000107c61170(puStack_890);
    func_0x000107c61170(puStack_888);
    func_0x000107c61170(puStack_880);
    func_0x000107c61170(puStack_878);
    func_0x000107c61170(puStack_870);
    func_0x000107c61170(puStack_748);
    func_0x000107c61170(puStack_758);
    func_0x000107c61170(puStack_868);
    func_0x000107c61170(puStack_860);
    func_0x000107c61170(puStack_858);
    func_0x000107c61170(puStack_850);
    func_0x000107c61170(puStack_848);
    func_0x000107c61170(puStack_840);
    func_0x000107c61170(puStack_838);
    func_0x000107c61170(puStack_830);
    func_0x000107c61170(puStack_828);
    func_0x000107c61170(ppuStack_820);
    func_0x000107c61170(puStack_818);
    func_0x000107c61170(ppuStack_810);
    func_0x000107c61170(puStack_808);
    func_0x000107c61170(ppuStack_800);
    func_0x000107c61170(puStack_7f8);
    func_0x000107c61170(puStack_7f0);
    func_0x000107c61170(puStack_7e8);
    func_0x000107c61170(puStack_7e0);
    func_0x000107c61170(puStack_7d8);
    func_0x000107c61170(puStack_7d0);
    func_0x000107c61170(ppuStack_7c8);
    func_0x000107c61170(puStack_7c0);
    func_0x000107c61170(ppuStack_7b8);
    func_0x000107c61170(puStack_7b0);
    func_0x000107c61170(puStack_7a8);
    func_0x000107c61170(puStack_7a0);
    func_0x000107c61170(puStack_798);
    func_0x000107c61170(puStack_790);
    func_0x000107c61170(puStack_788);
    func_0x000107c61170(puStack_780);
    func_0x000107c61170(puStack_778);
    func_0x000107c61170(puStack_770);
    func_0x000107c61170(puStack_768);
    func_0x000107c61170(puStack_760);
    func_0x000107c61170(puStack_750);
    func_0x000107c61170(puStack_740);
    func_0x000107c61170(puStack_738);
    func_0x000107c61170(puStack_730);
    func_0x000107c61170(puStack_728);
    func_0x000107c61170(puStack_720);
    func_0x000107c61170(puStack_718);
    func_0x000107c61170(puStack_710);
    func_0x000107c61170(puStack_708);
    func_0x000107c61170(puStack_700);
    func_0x000107c61170(puStack_6f8);
    func_0x000107c61170(puStack_6e8);
    func_0x000107c61170(puStack_6d8);
    func_0x000107c61170(puStack_6d0);
    func_0x000107c61170(puStack_6c8);
    func_0x000107c61170(puStack_6c0);
    func_0x000107c61170(puStack_6b8);
    func_0x000107c61170(puStack_6b0);
    func_0x000107c61170(puStack_6a8);
    func_0x000107c61170(puStack_6a0);
    func_0x000107c61170(puStack_698);
    func_0x000107c61170(puStack_690);
    func_0x000107c61170(puStack_688);
    func_0x000107c61170(puStack_680);
    func_0x000107c61170(puStack_678);
    func_0x000107c61170(puStack_670);
    func_0x000107c61170(puStack_668);
    func_0x000107c61170(puStack_660);
    func_0x000107c61170(puStack_658);
    func_0x000107c61170(puStack_650);
    func_0x000107c61170(puStack_648);
    func_0x000107c61170(puStack_640);
    func_0x000107c61170(puStack_638);
    func_0x000107c61170(puStack_630);
    func_0x000107c61170(uStack_628);
    func_0x000107c61170(puStack_620);
    func_0x000107c61170(puStack_618);
    func_0x000107c61170(puStack_610);
    func_0x000107c61170(puStack_608);
    func_0x000107c61170(puStack_600);
    func_0x000107c61170(puStack_5f8);
    func_0x000107c61170(puStack_5f0);
    func_0x000107c61170(puStack_5e8);
    func_0x000107c61170(puStack_5e0);
    func_0x000107c61170(puStack_5d8);
    func_0x000107c421f8();
    func_0x000107c61180();
    puVar4 = (undefined *)0x0;
    if (puVar8 != (undefined *)0x0) {
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c4d95c();
      func_0x000107c61180();
      func_0x000107c56bd8(puVar9);
      func_0x000107c61170();
    }
    puStack_5d8 = puVar8;
    FUN_100448484();
    func_0x000107c61180();
    puVar3 = puVar4;
    func_0x000107c4adac();
    if (puVar3 != (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c4d95c(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c61180();
      func_0x000107c56bd8(puVar9);
      func_0x000107c61170(puVar3);
    }
    puVar5 = puStack_5a8;
    func_0x000107c4adac();
    puVar3 = puStack_508;
    if (puVar5 != (undefined *)0x0) {
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c4d95c(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c61180();
      func_0x000107c56bd8(puVar9);
      func_0x000107c61170(puVar5);
    }
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c4d960();
    func_0x000107c61180();
    puVar11 = puVar5;
    func_0x000107c5c1d4();
    func_0x000107c61180();
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c4d95c(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c61180();
    func_0x000107c56bd8(puVar9);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar11);
    func_0x000107c61170();
    func_0x000100448490();
    func_0x000107c61180();
    puVar11 = puVar5;
    func_0x000107c4adac();
    if (puVar11 != (undefined *)0x0) {
      puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c4d95c(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c61180();
      func_0x000107c56bd8(puVar9);
      func_0x000107c61170(puVar11);
    }
    ppuVar6 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c06a0;
    puStack_5e0 = puVar4;
    func_0x000107c5c1d4(&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c06a0);
    func_0x000107c61180();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c4d95c(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c61180();
    func_0x000107c56bd8(puVar9);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(ppuVar6);
    puVar4 = PTR_PTR_1126b7f68;
    func_0x000107c40dac();
    if (puVar4 != (undefined *)0x0) {
      puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      ppuStack_8f0 = (undefined **)puVar4;
      func_0x000107c51804(PTR__OBJC_CLASS___NSString_1126ae4d0);
      func_0x000107c61180();
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c4d95c(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c61180();
      func_0x000107c56bd8(puVar9);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar11);
    }
    puVar8 = PTR_PTR_1126ba530;
    func_0x000107c610f4(PTR_PTR_1126ba530);
    func_0x000107c48e98();
    puVar4 = PTR_PTR_1126b0cd8;
    puVar11 = puStack_450;
    func_0x000107c5d984(puStack_450);
    func_0x000107c61180();
    func_0x000107c3ac58(puVar4);
    func_0x000107c61180();
    func_0x000107c61170(puVar11);
    puVar11 = PTR_PTR_1126ba538;
    func_0x000107c610f4();
    puVar10 = PTR_PTR_1126b8238;
    func_0x000107c5d8e4(PTR_PTR_1126b8238);
    func_0x000107c61180();
    ppuStack_8f0 = (undefined **)uStack_480;
    func_0x000107c463f4();
    puVar2 = ppuVar1[1];
    ppuVar1[1] = puVar11;
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar10);
    puVar11 = puStack_458;
    func_0x000107c61174(puStack_458);
    puVar10 = ppuVar1[2];
    ppuVar1[2] = puVar11;
    func_0x000107c61170(puVar10);
    puVar11 = puStack_460;
    func_0x000107c61174(puStack_460);
    puVar10 = ppuVar1[3];
    ppuVar1[3] = puVar11;
    func_0x000107c61170(puVar10);
    puVar11 = puStack_530;
    func_0x000107c61174(puStack_530);
    puVar10 = ppuVar1[0x1e];
    ppuVar1[0x1e] = puVar11;
    func_0x000107c61170(puVar10);
    puVar11 = puStack_538;
    func_0x000107c61174(puStack_538);
    puVar10 = ppuVar1[0x1f];
    ppuVar1[0x1f] = puVar11;
    func_0x000107c61170(puVar10);
    puVar11 = puStack_528;
    func_0x000107c61174(puStack_528);
    puVar10 = ppuVar1[0x1c];
    ppuVar1[0x1c] = puVar11;
    func_0x000107c61170(puVar10);
    puVar11 = puStack_500;
    func_0x000107c61174(puStack_500);
    puVar10 = ppuVar1[0x1d];
    ppuVar1[0x1d] = puVar11;
    func_0x000107c61170(puVar10);
    puVar11 = puStack_550;
    func_0x000107c61174(puStack_550);
    puVar10 = ppuVar1[0x20];
    ppuVar1[0x20] = puVar11;
    func_0x000107c61170(puVar10);
    puVar11 = puStack_558;
    func_0x000107c61174(puStack_558);
    puVar10 = ppuVar1[0x21];
    ppuVar1[0x21] = puVar11;
    func_0x000107c61170(puVar10);
    puVar11 = puStack_498;
    func_0x000107c61174(puStack_498);
    puVar10 = ppuVar1[0x23];
    ppuVar1[0x23] = puVar11;
    func_0x000107c61170(puVar10);
    puVar11 = puStack_4e0;
    func_0x000107c61174(puStack_4e0);
    puVar10 = ppuVar1[0x32];
    ppuVar1[0x32] = puVar11;
    func_0x000107c61170(puVar10);
    puVar11 = puStack_560;
    func_0x000107c61174(puStack_560);
    puVar10 = ppuVar1[0x22];
    ppuVar1[0x22] = puVar11;
    func_0x000107c61170(puVar10);
    puVar11 = puStack_4b0;
    func_0x000107c61174(puStack_4b0);
    puVar10 = ppuVar1[0xf];
    ppuVar1[0xf] = puVar11;
    func_0x000107c61170(puVar10);
    func_0x000107c5c734();
    func_0x000107c61180();
    puVar11 = ppuVar1[9];
    ppuVar1[9] = puVar3;
    func_0x000107c61170(puVar11);
    puVar3 = puStack_488;
    func_0x000107c5c734();
    func_0x000107c61180();
    puVar11 = ppuVar1[10];
    ppuVar1[10] = puVar3;
    func_0x000107c61170(puVar11);
    puVar3 = puStack_490;
    func_0x000107c61174(puStack_490);
    puVar11 = ppuVar1[0xd];
    ppuVar1[0xd] = puVar3;
    func_0x000107c61170(puVar11);
    puVar3 = PTR_PTR_1126ba540;
    func_0x000107c61160();
    puVar11 = ppuVar1[0xb];
    ppuVar1[0xb] = puVar3;
    func_0x000107c61170(puVar11);
    puVar3 = PTR_PTR_1126ba540;
    func_0x000107c61160();
    puVar11 = ppuVar1[0xc];
    ppuVar1[0xc] = puVar3;
    func_0x000107c61170(puVar11);
    puVar3 = puStack_568;
    func_0x000107c61174(puStack_568);
    puVar11 = ppuVar1[0x24];
    ppuVar1[0x24] = puVar3;
    func_0x000107c61170(puVar11);
    puVar3 = puStack_4b8;
    func_0x000107c61174(puStack_4b8);
    puVar11 = ppuVar1[0x27];
    ppuVar1[0x27] = puVar3;
    func_0x000107c61170(puVar11);
    puVar3 = puStack_4c0;
    func_0x000107c61174(puStack_4c0);
    puVar11 = ppuVar1[0x28];
    ppuVar1[0x28] = puVar3;
    func_0x000107c61170(puVar11);
    puVar3 = puStack_4a0;
    func_0x000107c61174(puStack_4a0);
    puVar11 = ppuVar1[0x25];
    ppuVar1[0x25] = puVar3;
    func_0x000107c61170(puVar11);
    if (((uStack_5cc | uStack_5d0) & 1) != 0) {
      puVar3 = PTR_PTR_1126ae568;
      func_0x000107c61160();
      puVar11 = ppuVar1[0x14];
      ppuVar1[0x14] = puVar3;
      func_0x000107c61170(puVar11);
      puVar3 = PTR_PTR_1126ae568;
      func_0x000107c61160();
      puVar11 = ppuVar1[0x15];
      ppuVar1[0x15] = puVar3;
      func_0x000107c61170(puVar11);
      puVar3 = PTR_PTR_1126ae568;
      func_0x000107c61160();
      puVar11 = ppuVar1[0x16];
      ppuVar1[0x16] = puVar3;
      func_0x000107c61170(puVar11);
      puVar3 = PTR_PTR_1126ba548;
      func_0x000107c610f4();
      func_0x000107c495ec();
      puVar11 = ppuVar1[0x1a];
      ppuVar1[0x1a] = puVar3;
      func_0x000107c61170(puVar11);
    }
    puVar3 = puVar9;
    func_0x000107c4d2d4(puVar9);
    ppuVar6 = ppuVar1;
    func_0x000107c61158(ppuVar1);
    func_0x000107c3bedc();
    func_0x000107c61180();
    puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c4d95c(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c61180();
    func_0x000107c56bd8(puVar3);
    func_0x000107c61170(puVar11);
    func_0x000107c61170(ppuVar6);
    puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c4d95c(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c61180();
    func_0x000107c56bd8(puVar3);
    func_0x000107c61170(puVar11);
    puVar11 = PTR_PTR_1126ba550;
    func_0x000107c610f4();
    puVar10 = puVar3;
    func_0x000107c40794(puVar3);
    param_5 = (undefined *)0x1;
    func_0x000107c4675c();
    func_0x000107c61170(puVar10);
    uVar7 = uStack_578;
    param_4 = puVar11;
    func_0x000107c528f4(uStack_578);
    func_0x000107c3b344(ppuVar1);
    func_0x000107c61148(0x1136bc8a8);
    func_0x000107c61170();
    func_0x000107c611a0(0x1136bc8a8,ppuVar1);
    func_0x000107c61170(puVar11);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puStack_5e0);
    func_0x000107c61170(puStack_5d8);
    func_0x000107c61170(puVar9);
    func_0x000107c61170(puStack_5c8);
    func_0x000107c61170(ppuStack_5c0);
    func_0x000107c61170(puStack_5a8);
    func_0x000107c61170(puStack_5b8);
    func_0x000107c61170(puStack_5b0);
    func_0x000107c61170(puStack_5a0);
    puVar8 = puStack_570;
    puVar9 = puStack_540;
    puVar10 = puStack_548;
    puVar3 = puStack_590;
    puVar11 = puStack_580;
    puVar4 = puStack_598;
    puVar5 = puStack_588;
    puVar2 = puStack_508;
  }
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puStack_500);
  func_0x000107c61170(puStack_4f8);
  func_0x000107c61170(puStack_4f0);
  func_0x000107c61170(puStack_4e8);
  func_0x000107c61170(puStack_4e0);
  func_0x000107c61170(uStack_4d8);
  func_0x000107c61170(puStack_4d0);
  func_0x000107c61170(puStack_4c8);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(ppuStack_4a8);
  func_0x000107c61170(puStack_4a0);
  func_0x000107c61170(puStack_498);
  func_0x000107c61170(puStack_490);
  func_0x000107c61170(puStack_488);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uStack_480);
  func_0x000107c61170(puStack_478);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puStack_4c0);
  func_0x000107c61170(puStack_4b8);
  func_0x000107c61170(puStack_4b0);
  func_0x000107c61170(puStack_568);
  func_0x000107c61170(puStack_560);
  func_0x000107c61170(puStack_558);
  func_0x000107c61170(puStack_550);
  func_0x000107c61170(puStack_538);
  func_0x000107c61170(puStack_530);
  func_0x000107c61170(puStack_528);
  func_0x000107c61170(uStack_520);
  func_0x000107c61170(uStack_518);
  func_0x000107c61170(puStack_510);
  func_0x000107c61170(puStack_470);
  func_0x000107c61170(puStack_448);
  func_0x000107c61170(puStack_468);
  func_0x000107c61170(puStack_460);
  func_0x000107c61170(puStack_458);
  puVar4 = puStack_450;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return ppuVar1;
  }
  func_0x000107c60e78();
  ppuVar6 = &puStack_940;
  pcStack_8f8 = FUN_10041de6c;
  uStack_930 = uVar7;
  puStack_928 = puVar3;
  ppuStack_920 = ppuVar1;
  puStack_918 = puVar10;
  puStack_910 = puVar9;
  puStack_908 = puVar8;
  puStack_900 = &stack0xfffffffffffffff0;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_938 = PTR_PTR_1126fd1b8;
  puStack_940 = puVar4;
  func_0x000107c61154(&puStack_940,PTR_s_init_1125d9248);
  if (ppuVar6 != (undefined **)0x0) {
    func_0x000107c61174(param_4);
    puVar4 = ppuVar6[1];
    ppuVar6[1] = param_4;
    func_0x000107c61170(puVar4);
    func_0x000107c61174(param_5);
    puVar4 = ppuVar6[2];
    ppuVar6[2] = param_5;
    func_0x000107c61170(puVar4);
    puVar4 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c61180();
    func_0x000107c470d0();
    puVar5 = ppuVar6[3];
    ppuVar6[3] = puVar4;
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar3);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  return ppuVar6;
}



/* Entry: 10041de6c; end: 10041df77; -[SCGrpcAuthContextDelegate initWithSnapTokenProvider:attestationProvider:] */

undefined1 *
FUN_10041de6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_48 = PTR_PTR_1126fd1b8;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c61180();
    func_0x000107c470d0();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61170(puVar4);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10041df78; end: 10041e237;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10041df78(long param_1,undefined8 param_2)

{
  int iVar1;
  byte bVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  code *pcVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  
  uStack_c0 = *(undefined8 *)PTR__kCFTypeDictionaryKeyCallBacks_11034ac18;
  uStack_b8 = *(undefined8 *)(PTR__kCFTypeDictionaryKeyCallBacks_11034ac18 + 8);
  uStack_b0 = *(undefined8 *)(PTR__kCFTypeDictionaryKeyCallBacks_11034ac18 + 0x10);
  uStack_a8 = *(undefined8 *)(PTR__kCFTypeDictionaryKeyCallBacks_11034ac18 + 0x18);
  pcStack_78 = FUN_10006df98;
  pcStack_70 = FUN_10006def0;
  pcStack_a0 = FUN_10006df98;
  puVar7 = *(ulong **)(param_1 + _DAT_11279625c);
  uVar5 = *puVar7;
  if ((uVar5 & 3) != 0) {
    uVar5 = (uVar5 & 0xfffffffffffffffc) + 4;
    *puVar7 = uVar5;
  }
  uVar6 = uVar5 + 4;
  uStack_98 = uStack_c0;
  uStack_90 = uStack_b8;
  uStack_88 = uStack_b0;
  uStack_80 = uStack_a8;
  if (*(ulong *)(param_1 + _DAT_112796260) < uVar6) {
    func_0x000107c4f87c(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                        &PTR____CFConstantStringClassReference_111026078,
                        &PTR____CFConstantStringClassReference_111026178);
    puVar7 = *(ulong **)(param_1 + _DAT_11279625c);
    uVar5 = *puVar7;
    uVar6 = uVar5 + 4;
  }
  iVar1 = *(int *)(*(long *)(param_1 + _DAT_112796258) + uVar5);
  *puVar7 = uVar6;
  uVar3 = 0;
  func_0x000107c6078c(0,iVar1,&uStack_98,&uStack_c0);
  func_0x000107c61104();
  uVar9 = *(undefined8 *)(param_1 + _DAT_112796264);
  uStack_68 = uVar3;
  func_0x000107c60780(uVar9);
  func_0x000107c60768(uVar9,&uStack_68,8);
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
    puVar7 = *(ulong **)(param_1 + _DAT_11279625c);
    uVar6 = *puVar7;
    uVar5 = uVar6 + 1;
    if (*(ulong *)(param_1 + _DAT_112796260) < uVar5) {
      func_0x000107c4f87c(PTR__OBJC_CLASS___NSException_1126af520);
      puVar7 = *(ulong **)(param_1 + _DAT_11279625c);
      uVar6 = *puVar7;
      uVar5 = uVar6 + 1;
    }
    bVar2 = *(byte *)(*(long *)(param_1 + _DAT_112796258) + uVar6);
    *puVar7 = uVar5;
    if ((bVar2 < 0x35) &&
       (pcVar8 = *(code **)(*(long *)(param_1 + _DAT_112796254) + (ulong)bVar2 * 8),
       pcVar8 != (code *)0x0)) {
      lVar10 = param_1;
      (*pcVar8)();
    }
    else {
      func_0x000107c4f87c(PTR__OBJC_CLASS___NSException_1126af520);
      lVar10 = 0;
    }
    puVar7 = *(ulong **)(param_1 + _DAT_11279625c);
    uVar6 = *puVar7;
    uVar5 = uVar6 + 1;
    if (*(ulong *)(param_1 + _DAT_112796260) < uVar5) {
      func_0x000107c4f87c(PTR__OBJC_CLASS___NSException_1126af520);
      puVar7 = *(ulong **)(param_1 + _DAT_11279625c);
      uVar6 = *puVar7;
      uVar5 = uVar6 + 1;
    }
    bVar2 = *(byte *)(*(long *)(param_1 + _DAT_112796258) + uVar6);
    *puVar7 = uVar5;
    if ((bVar2 < 0x35) &&
       (pcVar8 = *(code **)(*(long *)(param_1 + _DAT_112796254) + (ulong)bVar2 * 8),
       pcVar8 != (code *)0x0)) {
      lVar4 = param_1;
      (*pcVar8)();
      if (lVar4 != 0 && lVar10 != 0) {
        func_0x000107c60798(uVar3,lVar4,lVar10);
      }
    }
    else {
      func_0x000107c4f87c(PTR__OBJC_CLASS___NSException_1126af520);
    }
  }
  return uVar3;
}



/* Entry: 10041e238; end: 10041e29f;  */

void FUN_10041e238(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    lVar1 = lVar3;
    if (lVar3 != lVar2) {
      do {
        lVar2 = lVar2 + -8;
        func_0x000107c61120(lVar2);
      } while (lVar2 != lVar3);
      lVar1 = *(long *)(param_1 + 0x18);
    }
    *(long *)(param_1 + 0x20) = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10041e2a0; end: 10041e2a3;  */

void FUN_10041e2a0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10041e2a4; end: 10041e38f; -[SCFideliusUserDevice initWithCoder:] */

undefined1 * FUN_10041e2a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126eafc8;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c41478();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_3;
    func_0x000107c41478();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_3;
    func_0x000107c41478();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_3;
    func_0x000107c41454();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10041e390; end: 10041e4b7; -[SCGroupsDataUpdater _observeFeedEventUpdates] */

void FUN_10041e390(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x000107c61144(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c43ad0();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c4da88();
  func_0x000107c61180();
  func_0x000107c6111c(auStack_50,auStack_48);
  uVar4 = uVar3;
  func_0x000107c5c320(uVar3);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_50);
  func_0x000107c61120(auStack_48);
  return;
}



/* Entry: 10041e4b8; end: 10041e4ff;  */

void FUN_10041e4b8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c3b78c();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10041e500; end: 10041e64b; -[SCNativeMessagingServicesEntryPoint _friendsFeedEntryStoreWithFriendsFeedGrapheneV2:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10041e500(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  puVar1 = PTR_PTR_1126ba658;
  func_0x000107c61174(param_3);
  func_0x000107c610f4(puVar1);
  lVar8 = (long)_DAT_112725588;
  lVar2 = param_1 + lVar8;
  func_0x000107c61148(lVar2);
  lVar3 = lVar2;
  func_0x000107c43ac0();
  func_0x000107c61180();
  lVar8 = param_1 + lVar8;
  func_0x000107c61148(lVar8);
  lVar4 = lVar8;
  func_0x000107c443dc();
  func_0x000107c61180();
  lVar5 = param_1 + _DAT_1127255a8;
  func_0x000107c61148(lVar5);
  lVar6 = lVar5;
  func_0x000107c51f3c();
  func_0x000107c61180();
  param_1 = param_1 + _DAT_1127255ac;
  func_0x000107c61148(param_1);
  lVar7 = param_1;
  func_0x000107c4e604();
  func_0x000107c61180();
  func_0x000107c46a8c(puVar1,param_2,lVar3,lVar4,param_3,lVar6,lVar7);
  func_0x000107c61170(param_3);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10041e64c; end: 10041e65b; -[FriendsFeedUpdateSequenceTrackerServices sequenceTracker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10041e64c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11301ae80));
  return;
}



/* Entry: 10041e65c; end: 10041e80b; -[SCFriendsFeedEntryStore initWithFriendsFeedReadyLogger:ghostToFeedLogger:friendsFeedGraphene:sequenceTracker:performerProvider:] */

undefined1 *
FUN_10041e65c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  puStack_58 = PTR_PTR_1126e8d90;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 0x5c) = 0;
    puVar2 = PTR_PTR_1126ae568;
    func_0x000107c61160();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    func_0x000107c61170(uVar3);
    uVar3 = param_7;
    func_0x000107c4c280();
    func_0x000107c61180();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar3;
    func_0x000107c61170(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined **)((long)puVar1 + 0x48) = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c61160();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined **)((long)puVar1 + 0x50) = puVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_5);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_6);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10041e80c; end: 10041e86f; -[SCFriendsFeedEntryStore friendsFeedUpdateEvents] */

void FUN_10041e80c(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10041eaac;
  puStack_20 = &UNK_11088e668;
  uStack_18 = param_1;
  func_0x000107c408f0(PTR_PTR_1126ae6b8,param_2,&puStack_38);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



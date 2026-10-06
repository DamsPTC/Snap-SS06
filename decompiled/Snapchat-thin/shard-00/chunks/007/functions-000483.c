/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10098e450; end: 10098e4ef; -[SCFriendingSuggestedFriendUpdateTimestampTrigger _fetchSuggestedFriendsTriggerType] */

void FUN_10098e450(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010098e444();
  if (lVar1 != 1) {
    lVar1 = param_1;
    func_0x000107c3bb44();
    if ((int)lVar1 == 0) {
      lVar1 = param_1;
      func_0x000107c3c74c();
      if ((int)lVar1 == 0) {
        func_0x000107c3bb34(param_1);
      }
      else {
        uVar2 = *(undefined8 *)(param_1 + 0x28);
        func_0x000107c5c734(uVar2);
        func_0x000107c61180();
        func_0x000107c5cff4();
        func_0x000107c61170(uVar2);
      }
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      func_0x000107c5c734(uVar2);
      func_0x000107c61180();
      func_0x000107c5cfec();
      func_0x000107c61170(uVar2);
    }
  }
  return;
}



/* Entry: 10098e4f0; end: 10098e50f; -[SCFriendingSuggestedFriendUpdateTimestampTrigger _isLoginOrSignup] */

bool FUN_10098e4f0(long param_1)

{
  if (*(long *)(param_1 + 0x50) != 0) {
    return false;
  }
  return *(long *)(param_1 + 0x48) == 0;
}



/* Entry: 10098e510; end: 10098e51f; -[SCFriendingSuggestedFriendUpdateTimestampTrigger _shouldFetchOnServerTimestampChanges] */

bool FUN_10098e510(long param_1)

{
  return *(long *)(param_1 + 0x50) < *(long *)(param_1 + 0x58);
}



/* Entry: 10098e520; end: 10098e603; -[SCFriendingSuggestedFriendUpdateTimestampTrigger _isLastClientFetchSuggestionExpired] */

bool FUN_10098e520(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x000107c41360((double)*(long *)(param_1 + 0x48));
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(param_1 + 8);
  FUN_10098e604(uVar2);
  puVar3 = puVar1;
  func_0x000107c4132c((double)((int)uVar2 * 0xe10));
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  func_0x000107c40ef8(uVar2);
  func_0x000107c61180();
  puVar4 = puVar3;
  func_0x000107c3fec0(puVar3,param_2,uVar2);
  if (puVar4 == (undefined *)0xffffffffffffffff) {
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    func_0x000107c5c734(uVar5);
    func_0x000107c61180();
    func_0x000107c5cff0();
    func_0x000107c61170(uVar5);
  }
  func_0x000107c61170(uVar2);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar1);
  return puVar4 == (undefined *)0xffffffffffffffff;
}



/* Entry: 10098e604; end: 10098e6a7;  */

undefined4 FUN_10098e604(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  func_0x000107c61174();
  lVar2 = lRam000000011381a450;
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10098e6b0;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  func_0x000107c61174(param_1);
  uVar3 = param_1;
  if (lVar2 != -1) {
    FUN_10002a2fc(0x11381a450,&puStack_48);
    uVar3 = uStack_28;
  }
  uVar1 = uRam0000000113104320;
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 10098e6a8; end: 10098e6af; +[SCAttributedShakeToReportSubtask startSyncManagerAuth] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10098e6a8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309abe0) = 6;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10098e6b0; end: 10098e6df;  */

void FUN_10098e6b0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c4980c(uVar1,param_2,&PTR____CFConstantStringClassReference_110e05df8,0xc,0);
  uRam0000000113104320 = (int)uVar1;
  return;
}



/* Entry: 10098e6e0; end: 10098e7e3; -[SCShakeToReportPromptHelper initWithSystemScope:grapheneRegistry:shakeToReportScopeExposer:shakeToReportScopeServices:configProvider:] */

undefined8
FUN_10098e6e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x000107c5e3f8(param_3);
  func_0x000107c61180();
  uVar2 = param_3;
  func_0x000107c5d194(param_3);
  func_0x000107c61180();
  func_0x000107c48bc8(param_1,param_2,param_3,param_4,uVar1,uVar2,param_5,param_6,param_7);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 10098e7e4; end: 10098e7f3; -[_TtC13SCSystemScope13SCSystemScope uiEvents] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10098e7e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113091bd8));
  return;
}



/* Entry: 10098e7f4; end: 10098e9df; -[SCShakeToReportPromptHelper initWithSystemScope:grapheneRegistry:keyWindow:uiEvents:shakeToReportScopeExposer:shakeToReportScopeServices:configProvider:] */

undefined1 *
FUN_10098e7f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  puStack_68 = PTR_PTR_1126f4960;
  uStack_70 = param_1;
  func_0x000107c61154(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c3e16c();
    func_0x000107c61180();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined **)((long)puVar1 + 0x48) = puVar2;
    func_0x000107c61170(uVar4);
    puVar2 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_7);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_7;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_8);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_8;
    func_0x000107c61170(uVar4);
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 0x20),param_3);
    *(undefined1 *)((long)puVar1 + 0x30) = 0;
    func_0x000107c61174(param_9);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_9;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_5);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_5;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_6);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_6;
    func_0x000107c61170(uVar4);
    uVar4 = param_4;
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar3 = uVar4;
    func_0x000107c509cc();
    func_0x000107c61180();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = uVar3;
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar4);
  }
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10098e9e0; end: 10098e9e7; -[SCPlusFeatureGatingImpl externalShakeToReportEnabled] */

undefined8 FUN_10098e9e0(void)

{
  return 1;
}



/* Entry: 10098e9e8; end: 10098e9ef; -[SCShakeToReportPromptHelper setPlusExternalShakeToReportEnabled:] */

void FUN_10098e9e8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x58) = param_3;
  return;
}



/* Entry: 10098e9f0; end: 10098ec3b; -[SCShakeToReportPromptHelper begin] */

void FUN_10098e9f0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  func_0x000107c61144(auStack_78,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  puStack_90 = &UNK_106a9b140;
  puStack_88 = &UNK_110875bd0;
  func_0x000107c6111c(auStack_80,auStack_78);
  func_0x000107c5c320(uVar6);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(uVar6);
  lVar2 = param_1 + 0x20;
  func_0x000107c61148(lVar2);
  lVar3 = lVar2;
  func_0x000107c3dfac();
  func_0x000107c61180();
  lVar4 = lVar3;
  func_0x000107c419f0();
  func_0x000107c61180();
  puStack_c8 = puVar1;
  uStack_c0 = 0xc2000000;
  puStack_b8 = &UNK_100c7a10c;
  puStack_b0 = &UNK_110846510;
  func_0x000107c6111c(auStack_a8,auStack_78);
  lVar5 = lVar4;
  func_0x000107c5c320(lVar4);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  lVar2 = param_1;
  func_0x000107c3dfac();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c41b80();
  func_0x000107c61180();
  func_0x000107c6111c(auStack_d0,auStack_78);
  lVar4 = lVar3;
  func_0x000107c5c320(lVar3);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61120(auStack_d0);
  func_0x000107c61120(auStack_a8);
  func_0x000107c61120(auStack_80);
  func_0x000107c61120(auStack_78);
  return;
}



/* Entry: 10098ec3c; end: 10098eca7;  */

void FUN_10098ec3c(void)

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
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10098eca8; end: 10098eccf;  */

undefined ** FUN_10098eca8(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 10098ecd0; end: 10098ed0f;  */

void FUN_10098ecd0(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x00010098ecb4();
  FUN_100082720("SCSmartReplySearchTagServiceProviderWrapperScopeInitializationPluginProvider",0x4c,
                2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10098ed10; end: 10098ed17;  */

void FUN_10098ed10(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101cda608);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10098ed18; end: 10098ed9b;  */

void FUN_10098ed18(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101cda608,param_2,&UNK_101cda60c,param_2,&UNK_101cda634,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10098ed9c; end: 10098edc3;  */

undefined ** FUN_10098ed9c(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 10098edc4; end: 10098ee03;  */

void FUN_10098edc4(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x00010098eda8();
  FUN_100082720("SCSnapDocImportingEditsResolverServiceProviderWrapperScopeInitializationPluginProvider"
                ,0x56,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10098ee04; end: 10098ee0b;  */

void FUN_10098ee04(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101d137d8);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10098ee0c; end: 10098ee8f;  */

void FUN_10098ee0c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101d137d8,param_2,&UNK_101d137dc,param_2,&UNK_101d13804,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10098ee90; end: 10098eeb7;  */

undefined ** FUN_10098ee90(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 10098eeb8; end: 10098eef7;  */

void FUN_10098eeb8(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x00010098ee9c();
  FUN_100082720("SCSnapDocOperaPageResolverEntryPointWrapperScopeInitializationPluginProvider",0x4c,
                2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10098eef8; end: 10098eeff;  */

void FUN_10098eef8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101e38388);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10098ef00; end: 10098ef83;  */

void FUN_10098ef00(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101e38388,param_2,&UNK_101e3838c,param_2,&UNK_101e383b4,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10098ef84; end: 10098efab;  */

undefined ** FUN_10098ef84(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 10098efac; end: 10098efeb;  */

void FUN_10098efac(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x00010098ef90();
  FUN_100082720("SCSnapDocOverlayImageGenerationServiceProviderWrapperScopeInitializationPluginProvider"
                ,0x56,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10098efec; end: 10098eff3;  */

void FUN_10098efec(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101d13f84);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10098eff4; end: 10098f077;  */

void FUN_10098eff4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101d13f84,param_2,&UNK_101d13f88,param_2,&UNK_101d13fb0,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10098f078; end: 10098f09f;  */

undefined ** FUN_10098f078(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 10098f0a0; end: 10098f0df;  */

void FUN_10098f0a0(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x00010098f084();
  FUN_100082720("SCSnapProMessagingServicesEntryPointWrapperScopeInitializationPluginProvider",0x4c,
                2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10098f0e0; end: 10098f0e7;  */

void FUN_10098f0e0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101cdb8b0);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10098f0e8; end: 10098f16b;  */

void FUN_10098f0e8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101cdb8b0,param_2,&UNK_101cdb8b4,param_2,&UNK_101cdb8dc,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10098f16c; end: 10098f193;  */

undefined ** FUN_10098f16c(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 10098f194; end: 10098f1d3;  */

void FUN_10098f194(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x00010098f178();
  FUN_100082720("SCSnapRendererServiceProviderWrapperScopeInitializationPluginProvider",0x45,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10098f1d4; end: 10098f1db;  */

void FUN_10098f1d4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101d150c4);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10098f1dc; end: 10098f25f;  */

void FUN_10098f1dc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101d150c4,param_2,&UNK_101d150c8,param_2,&UNK_101d150f0,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10098f260; end: 10098f287;  */

undefined ** FUN_10098f260(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 10098f288; end: 10098f2c7;  */

void FUN_10098f288(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x00010098f26c();
  FUN_100082720("SCSnapSendingServicesEntryPointWrapperScopeInitializationPluginProvider",0x47,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10098f2c8; end: 10098f2cf;  */

void FUN_10098f2c8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101ccab68);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10098f2d0; end: 10098f353;  */

void FUN_10098f2d0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101ccab68,param_2,&UNK_101ccab6c,param_2,&UNK_101ccab94,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10098f354; end: 10098f37b;  */

undefined ** FUN_10098f354(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 10098f37c; end: 10098f3bb;  */

void FUN_10098f37c(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x00010098f360();
  FUN_100082720("SCSnapUploadWorkflowServiceProviderWrapperScopeInitializationPluginProvider",0x4b,2
               );
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10098f3bc; end: 10098f3c3;  */

void FUN_10098f3bc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101d40694);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10098f3c4; end: 10098f447;  */

void FUN_10098f3c4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101d40694,param_2,&UNK_101d40698,param_2,&UNK_101d406c0,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10098f448; end: 10098f46f;  */

undefined ** FUN_10098f448(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 10098f470; end: 10098f4af;  */

void FUN_10098f470(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x00010098f454();
  FUN_100082720("SCSortableSnapchatterServiceProviderWrapperScopeInitializationPluginProvider",0x4c,
                2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10098f4b0; end: 10098f4b7;  */

void FUN_10098f4b0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101ed75e0);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10098f4b8; end: 10098f53b;  */

void FUN_10098f4b8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101ed75e0,param_2,&UNK_101ed75e4,param_2,&UNK_101ed760c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10098f53c; end: 10098f563;  */

undefined ** FUN_10098f53c(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 10098f564; end: 10098f5a3;  */

void FUN_10098f564(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x00010098f548();
  FUN_100082720("SCSoundServiceProviderWrapperScopeInitializationPluginProvider",0x3e,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10098f5a4; end: 10098f5ab;  */

void FUN_10098f5a4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101c8a8c0);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10098f5ac; end: 10098f62f;  */

void FUN_10098f5ac(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101c8a8c0,param_2,&UNK_101c8a8c4,param_2,&UNK_101c8a8ec,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10098f630; end: 10098f657;  */

undefined ** FUN_10098f630(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 10098f658; end: 10098f697;  */

void FUN_10098f658(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x00010098f63c();
  FUN_100082720("SCSpamServiceProviderWrapperScopeInitializationPluginProvider",0x3d,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10098f698; end: 10098f69f;  */

void FUN_10098f698(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101ed32b0);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10098f6a0; end: 10098f723;  */

void FUN_10098f6a0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101ed32b0,param_2,&UNK_101ed32b4,param_2,&UNK_101ed32dc,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10098f724; end: 10098f74b;  */

undefined ** FUN_10098f724(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 10098f74c; end: 10098f78b;  */

void FUN_10098f74c(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x00010098f730();
  FUN_100082720("SCSpectaclesAuthorizationServiceProviderWrapperScopeInitializationPluginProvider",
                0x50,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10098f78c; end: 10098f793;  */

void FUN_10098f78c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101ef41c8);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10098f794; end: 10098f817;  */

void FUN_10098f794(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101ef41c8,param_2,&UNK_101ef41cc,param_2,&UNK_101ef41f4,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10098f818; end: 10098f83f;  */

undefined ** FUN_10098f818(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 10098f840; end: 10098f87f;  */

void FUN_10098f840(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x00010098f824();
  FUN_100082720("SCSpectaclesAuxiliaryContentServiceProviderWrapperScopeInitializationPluginProvider"
                ,0x53,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10098f880; end: 10098f887;  */

void FUN_10098f880(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101ef47fc);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10098f888; end: 10098f90b;  */

void FUN_10098f888(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101ef47fc,param_2,&UNK_101ef4800,param_2,&UNK_101ef4828,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10098f90c; end: 10098f933;  */

undefined ** FUN_10098f90c(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 10098f934; end: 10098f973;  */

void FUN_10098f934(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x00010098f918();
  FUN_100082720("SCSpectaclesEntryPointWrapperScopeInitializationPluginProvider",0x3e,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10098f974; end: 10098f97b;  */

void FUN_10098f974(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101ef5dc8);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10098f97c; end: 10098f9ff;  */

void FUN_10098f97c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101ef5dc8,param_2,&UNK_101ef5dcc,param_2,&UNK_101ef5df4,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10098fa00; end: 10098fa27;  */

undefined ** FUN_10098fa00(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 10098fa28; end: 10098fa67;  */

void FUN_10098fa28(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x00010098fa0c();
  FUN_100082720("SCSpectaclesLensServiceProviderWrapperScopeInitializationPluginProvider",0x47,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10098fa68; end: 10098fa6f;  */

void FUN_10098fa68(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101ef61f4);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10098fa70; end: 10098faf3;  */

void FUN_10098fa70(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101ef61f4,param_2,&UNK_101ef61f8,param_2,&UNK_101ef6220,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10098faf4; end: 10098fb1b;  */

undefined ** FUN_10098faf4(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 10098fb1c; end: 10098fb5b;  */

void FUN_10098fb1c(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x00010098fb00();
  FUN_100082720("SCSpectaclesMemoriesContentServiceProviderWrapperScopeInitializationPluginProvider"
                ,0x52,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10098fb5c; end: 10098fb63;  */

void FUN_10098fb5c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101ef6d58);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10098fb64; end: 10098fbe7;  */

void FUN_10098fb64(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101ef6d58,param_2,&UNK_101ef6d5c,param_2,&UNK_101ef6d84,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10098fbe8; end: 10098fc0f;  */

undefined ** FUN_10098fbe8(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 10098fc10; end: 10098fc4f;  */

void FUN_10098fc10(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x00010098fbf4();
  FUN_100082720("SCSpectaclesOnDemandResourcesServiceProviderWrapperScopeInitializationPluginProvider"
                ,0x54,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10098fc50; end: 10098fc57;  */

void FUN_10098fc50(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101ef7128);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10098fc58; end: 10098fcdb;  */

void FUN_10098fc58(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101ef7128,param_2,&UNK_101ef712c,param_2,&UNK_101ef7154,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10098fcdc; end: 10098fd03;  */

undefined ** FUN_10098fcdc(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 10098fd04; end: 10098fd43;  */

void FUN_10098fd04(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x00010098fce8();
  FUN_100082720("SCSpectaclesServerNetworkingServiceProviderWrapperScopeInitializationPluginProvider"
                ,0x53,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10098fd44; end: 10098fd4b;  */

void FUN_10098fd44(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101ef74f8);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10098fd4c; end: 10098fdcf;  */

void FUN_10098fd4c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101ef74f8,param_2,&UNK_101ef74fc,param_2,&UNK_101ef7524,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10098fdd0; end: 10098fddb;  */

undefined ** FUN_10098fdd0(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 10098fddc; end: 10098fe07;  */

void FUN_10098fddc(void)

{
  FUN_10095137c();
  return;
}



/* Entry: 10098fe08; end: 10098fe0f;  */

void FUN_10098fe08(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126a8898;
  func_0x000107c61168();
  func_0x000107c3e370();
  func_0x000107c61180();
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  FUN_1005d8744(puVar1,&UNK_101ab8958);
  *param_1 = puVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10098fe10; end: 10098feb3;  */

void FUN_10098fe10(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126a8898;
  func_0x000107c61168();
  func_0x000107c3e370();
  func_0x000107c61180();
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  FUN_1005d8744(puVar1,&UNK_101ab8958,param_2,&UNK_101ab895c,param_2,&UNK_101ab8984,param_2);
  *param_1 = puVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10098feb4; end: 10098ff0f; +[SCSponsoredLensEncryptedUserDataUpdaterEntryPoint attributedTask] */

void FUN_10098feb4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126ae960;
  puVar1 = PTR_PTR_1126b8dd8;
  func_0x000107c5b7d8(PTR_PTR_1126b8dd8);
  func_0x000107c61180();
  func_0x000107c3d284(puVar2,param_2,puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10098ff10; end: 10098ff23; +[SCAttributedAdClientTask sponsoredLensEncryptedUserDataUpdater] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10098ff10(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309ab70) = 4;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10098ff24; end: 10098ff4f;  */

void FUN_10098ff24(void)

{
  FUN_10095137c();
  return;
}



/* Entry: 10098ff50; end: 10098ff57;  */

void FUN_10098ff50(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126a88a0;
  func_0x000107c61168();
  func_0x000107c3e370();
  func_0x000107c61180();
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  FUN_1005d8744(puVar1,&UNK_101ab928c);
  *param_1 = puVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10098ff58; end: 10098fffb;  */

void FUN_10098ff58(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126a88a0;
  func_0x000107c61168();
  func_0x000107c3e370();
  func_0x000107c61180();
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  FUN_1005d8744(puVar1,&UNK_101ab928c,param_2,&UNK_101ab9290,param_2,&UNK_101ab92b8,param_2);
  *param_1 = puVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10098fffc; end: 100990057; +[SCSponsoredLensMetadataLoggerEntryPoint attributedTask] */

void FUN_10098fffc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126ae960;
  puVar1 = PTR_PTR_1126b8dd8;
  func_0x000107c5b7f0(PTR_PTR_1126b8dd8);
  func_0x000107c61180();
  func_0x000107c3d284(puVar2,param_2,puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100990058; end: 100990087; +[SCAttributedAdClientTask sponsoredLensMetadataLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100990058(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309ab70) = 5;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100990088; end: 1009900c7;  */

void FUN_100990088(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x00010099006c();
  FUN_100082720("SCSpotlightInterstitialRepositoryServiceProviderWrapperScopeInitializationPluginProvider"
                ,0x58,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009900c8; end: 1009900cf;  */

void FUN_1009900c8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101f0ab94);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009900d0; end: 100990153;  */

void FUN_1009900d0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101f0ab94,param_2,&UNK_101f0ab98,param_2,&UNK_101f0abc0,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



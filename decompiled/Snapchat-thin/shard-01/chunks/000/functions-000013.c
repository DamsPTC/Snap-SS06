/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100c13a24; end: 100c13a3b; -[SCScheduledLensFilteredMetadataStore _updateRearLenses:] */

void FUN_100c13a24(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (param_3 != (undefined *)0x0) {
    puVar1 = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c2873b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_updateLenses__11267f710,puVar1);
  return;
}



/* Entry: 100c13a3c; end: 100c13a9b; -[SCGenericLensMetadataStore _performAnnouncementBlock:] */

void FUN_100c13a3c(long param_1,undefined8 param_2,long param_3)

{
  func_0x000107c61174(param_3);
  if (*(long *)(param_1 + 0x10) == 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
  else {
    func_0x000107c4e524(*(long *)(param_1 + 0x10),param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100c13a9c; end: 100c13aa3; -[SCLensScheduleNamespaceData preCachedLenses] */

undefined8 FUN_100c13a9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 100c13aa4; end: 100c13abb; -[SCScheduledLensFilteredMetadataStore _updateRearPrefetchLenses:] */

void FUN_100c13aa4(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (param_3 != (undefined *)0x0) {
    puVar1 = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c2873f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_updateLensesToPrefetch__11267f720,puVar1);
  return;
}



/* Entry: 100c13abc; end: 100c13be7; -[SCGenericLensMetadataStore updateLensesToPrefetch:] */

void FUN_100c13abc(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined *puStack_38;
  
  func_0x000107c61174(param_3);
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (param_3 != (undefined *)0x0) {
    puVar1 = param_3;
    func_0x000107c40794();
    func_0x000107c61170(param_3);
  }
  func_0x000107c611ec(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c49cf0(uVar2,param_2,puVar1);
  if ((int)uVar2 == 0) {
    func_0x000107c61174(puVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    *(undefined **)(param_1 + 0x28) = puVar1;
    func_0x000107c61170(uVar2);
    func_0x000107c611f0(param_1 + 8);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    puStack_50 = &UNK_10b0e347c;
    puStack_48 = &UNK_110883780;
    lStack_40 = param_1;
    func_0x000107c61174(puVar1);
    puStack_38 = puVar1;
    func_0x000107c3c0d4(param_1,param_2,&puStack_60);
    func_0x000107c61170(puStack_38);
  }
  else {
    func_0x000107c611f0(param_1 + 8);
  }
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 100c13be8; end: 100c13c63;  */

/* WARNING: Possible PIC construction at 0x000100c13c44: Changing call to branch */

void FUN_100c13be8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x000107c61174(param_2);
  lVar1 = param_1 + 0x30;
  func_0x000107c61148();
  if (lVar1 == 0) {
    func_0x000107c61170(0);
  }
  else {
    func_0x000107c4d9fc(param_2);
    func_0x000107c61180();
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100c13c64; end: 100c13c6f;  */

void FUN_100c13c64(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2d1f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_canProcessDeltaSyncWithGroupKey__1125a8e20,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 100c13c70; end: 100c13d23; -[_TtC39SCAddFriendQRCodeServicesImplementation28AddFriendQRCodeSyncProcessor canProcessDeltaSyncWithGroupKey:] */

uint FUN_100c13c70(undefined8 param_1,long param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  func_0x000107c61174();
  lVar2 = param_3;
  func_0x000107c4a91c();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c5faec();
  func_0x000107c61170(lVar2);
  if (lVar3 == -0x2fffffffffffffed && param_2 == -0x7ffffffef10cd570) {
    uVar1 = 1;
  }
  else {
    func_0x000107c605b8(lVar3,param_2,0xd000000000000013,0x800000010ef32a90,0);
    uVar1 = (uint)lVar3;
  }
  func_0x000107c61170(param_3);
  func_0x000107c6142c(param_2);
  return uVar1 & 1;
}



/* Entry: 100c13d24; end: 100c13d2b; -[SCDeltaSyncKey kind] */

undefined8 FUN_100c13d24(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100c13d2c; end: 100c13d87; -[SCRdcDeltaSyncProcessor canProcessDeltaSyncWithGroupKey:] */

undefined8 FUN_100c13d2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c4a91c(param_3);
  func_0x000107c61180();
  uVar1 = param_3;
  func_0x000107c49cec();
  func_0x000107c61170(param_3);
  return uVar1;
}



/* Entry: 100c13d88; end: 100c13dcf; -[CTPItemsDeltaSyncProcessor canProcessDeltaSyncWithGroupKey:] */

undefined8 FUN_100c13d88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c4a91c(param_3);
  func_0x000107c61180();
  uVar1 = param_3;
  func_0x000107c49d0c();
  func_0x000107c61170(param_3);
  return uVar1;
}



/* Entry: 100c13dd0; end: 100c13e1b; -[SCUserPropertiesDeltaSyncProcessor canProcessDeltaSyncWithGroupKey:] */

undefined8 FUN_100c13dd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c4a91c(param_3);
  func_0x000107c61180();
  uVar1 = param_3;
  func_0x000107c49cec();
  func_0x000107c61170(param_3);
  return uVar1;
}



/* Entry: 100c13e1c; end: 100c13ee7; -[SCCommerceDeltaSyncProcessor canProcessDeltaSyncWithGroupKey:] */

ulong FUN_100c13e1c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x000107c4a91c();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c49cec();
  if ((uVar2 & 1) == 0) {
    uVar2 = param_3;
    func_0x000107c4a91c(param_3);
    func_0x000107c61180();
    uVar3 = uVar2;
    func_0x000107c49cec();
    func_0x000107c61170(uVar2);
  }
  else {
    uVar3 = 1;
  }
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_3);
  return uVar3;
}



/* Entry: 100c13ee8; end: 100c13f27;  */

void FUN_100c13ee8(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 100c13f28; end: 100c13fbf; -[_TtC28SCTracingServicesStartupInit28TraceTokenDeltaSyncProcessor canProcessDeltaSyncWithGroupKey:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_100c13f28(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  FUN_100c13ee8(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112f93518);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c60118(uVar1,param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 100c13fc0; end: 100c14067; -[SCDeltaSyncKey isEqual:] */

long FUN_100c13fc0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  func_0x000107c61174(param_3);
  if (param_1 == param_3) {
LAB_100c14040:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_100c1404c;
    uVar1 = param_1;
    func_0x000107c61158(param_1);
    uVar2 = param_3;
    func_0x000107c6115c(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x000107c49cec(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x000107c49cec();
          goto LAB_100c1404c;
        }
        goto LAB_100c14040;
      }
    }
    lVar3 = 0;
  }
LAB_100c1404c:
  func_0x000107c61170(param_3);
  return lVar3;
}



/* Entry: 100c14068; end: 100c140a7;  */

void FUN_100c14068(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 100c140a8; end: 100c1420b; -[_TtC41SCLensExplorerDynamicLayoutImplementation29StackLayoutDeltaSyncProcessor canProcessDeltaSyncWithGroupKey:] */

uint FUN_100c140a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  FUN_100c14068(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
  lVar1 = lRam0000000112f1e5d0;
  func_0x000107c61174(param_3);
  if (lVar1 != -1) {
    func_0x000107c61568(0x112f1e5d0,0x100c1413c);
  }
  uVar2 = param_3;
  func_0x000107c60118(param_3,uRam0000000113805090);
  func_0x000107c61170(param_3);
  return (uint)uVar2 & 1;
}



/* Entry: 100c1420c; end: 100c14223; -[SCScheduledLensFilteredMetadataStore _updateFrontLenses:] */

void FUN_100c1420c(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (param_3 != (undefined *)0x0) {
    puVar1 = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c2873b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_updateLenses__11267f710,puVar1);
  return;
}



/* Entry: 100c14224; end: 100c1423b; -[SCScheduledLensFilteredMetadataStore _updateFrontPrefetchLenses:] */

void FUN_100c14224(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (param_3 != (undefined *)0x0) {
    puVar1 = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c2873f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_updateLensesToPrefetch__11267f720,puVar1);
  return;
}



/* Entry: 100c1423c; end: 100c14353;  */

long FUN_100c1423c(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100c14350);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100c14354);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_100c116fc(0,0x112e38b40,&PTR__OBJC_CLASS___UNNotificationAction_1126a9798);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      FUN_100c116fc(0,0x112e38b40,&PTR__OBJC_CLASS___UNNotificationAction_1126a9798);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100c1434c);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 100c14354; end: 100c1436b; -[_TtC37SCAddFriendNotificationCategoryPlugin35AddFriendNotificationCategoryPlugin identifier] */

/* WARNING: Removing unreachable block (ram,0x000100c14368) */

void FUN_100c14354(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 100c1436c; end: 100c14377; -[SCLensMetadataConnectedLensInfo .cxx_destruct] */

void FUN_100c1436c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 100c14378; end: 100c143cb; -[_TtC35TextReplyNotificationCategoryPlugin35TextReplyNotificationCategoryPlugin actions] */

void FUN_100c14378(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100c143cc();
  func_0x000107c61170(param_1);
  uVar2 = 0;
  func_0x000100c124e4(0);
  uVar3 = uVar1;
  func_0x000107c5fc48(uVar1,uVar2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 100c143cc; end: 100c1442f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100c143cc(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d65800;
  lVar2 = *(long *)(unaff_x20 + _DAT_112d65800);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    FUN_100c14430();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61434();
    func_0x000107c6142c(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61434(lVar2);
  return lVar3;
}



/* Entry: 100c14430; end: 100c1453b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c14430(long param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  
  lVar2 = *(long *)(param_1 + _DAT_112d657f8);
  func_0x000107c5fadc(lVar2,((long *)(param_1 + _DAT_112d657f8))[1]);
  lVar3 = lVar2;
  func_0x000100c14548();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100c14534);
    (*pcVar1)();
  }
  lVar4 = lVar3;
  func_0x000100c14560();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar5 = lVar4;
    func_0x000100c14578();
    func_0x000107c61180();
    if (lVar5 != 0) {
      puVar6 = PTR_PTR_1126c08c0;
      func_0x000107c61168();
      func_0x000107c5c860();
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar3);
      func_0x000107c61170(lVar4);
      func_0x000107c61170();
      FUN_100c12488();
      func_0x000107c613fc();
      *(undefined8 *)(lVar5 + 0x18) = 3;
      *(undefined8 *)(lVar5 + 0x10) = 1;
      *(undefined **)(lVar5 + 0x20) = puVar6;
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100c1453c);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100c14538);
  (*pcVar1)();
}



/* Entry: 100c1453c; end: 100c1458f; -[SCLensMetadataRemoteApiInfo .cxx_destruct] */

void FUN_100c1453c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 100c14590; end: 100c146c3; +[SCNotificationCategoryAction textInputActionWithActionIdentifier:title:actionName:buttonTitle:placeholder:option:] */

void FUN_100c14590(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  puVar1 = PTR_PTR_1126c08c0;
  func_0x000107c610f4();
  puVar2 = puVar1;
  func_0x000107c498b8();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x38);
  *(undefined8 *)(puVar2 + 0x38) = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x40);
  *(undefined8 *)(puVar2 + 0x40) = param_5;
  func_0x000107c61174(param_5);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x48);
  *(undefined8 *)(puVar2 + 0x48) = param_6;
  func_0x000107c61174(param_6);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x50);
  *(undefined8 *)(puVar2 + 0x50) = param_7;
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  *(undefined8 *)(puVar2 + 0x58) = param_8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100c146c4; end: 100c148ef;  */

/* WARNING: Possible PIC construction at 0x000100c1478c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c1479c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c14790) */
/* WARNING: Removing unreachable block (ram,0x000100c147a0) */

void FUN_100c146c4(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = param_2;
  func_0x000107c5faec(param_2);
  uVar3 = uVar2;
  func_0x000107c5faec(param_3);
  if (param_4 == 0) {
    param_4 = 0;
    uVar4 = 0;
    uVar5 = uVar3;
  }
  else {
    uVar4 = uVar3;
    func_0x000107c5faec(param_4);
    uVar5 = uVar4;
  }
  func_0x000107c5faec(param_5);
  uVar6 = uVar5;
  func_0x000107c5faec();
  (*pcVar1)(param_2,uVar2,param_3,uVar3,param_4,uVar4,param_5,uVar5,param_6,uVar6,param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 100c148f0; end: 100c1492b;  */

void FUN_100c148f0(void)

{
  func_0x000100c147cc();
  return;
}



/* Entry: 100c1492c; end: 100c14963;  */

void FUN_100c1492c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 100c14964; end: 100c1497b; -[_TtC35TextReplyNotificationCategoryPlugin35TextReplyNotificationCategoryPlugin identifier] */

/* WARNING: Removing unreachable block (ram,0x000100c14978) */

void FUN_100c14964(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 100c1497c; end: 100c149cf; -[_TtC32SCTalkNotificationCategoryPlugin30TalkNotificationCategoryPlugin actions] */

void FUN_100c1497c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100c149d0();
  func_0x000107c61170(param_1);
  uVar2 = 0;
  func_0x000100c124e4(0);
  uVar3 = uVar1;
  func_0x000107c5fc48(uVar1,uVar2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 100c149d0; end: 100c14acb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined ** FUN_100c149d0(void)

{
  long lVar1;
  code *pcVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  
  lVar1 = _DAT_112dfa6f0;
  ppuVar3 = *(undefined ***)(unaff_x20 + _DAT_112dfa6f0);
  ppuVar4 = ppuVar3;
  if (ppuVar3 == (undefined **)0x0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110f9eb98;
    func_0x000107c61174();
    ppuVar4 = ppuVar3;
    FUN_100c14acc();
    func_0x000107c61180();
    if (ppuVar4 == (undefined **)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100c14acc);
      (*pcVar2)();
    }
    puVar5 = PTR_PTR_1126c08c0;
    func_0x000107c61168();
    func_0x000107c4fd28();
    func_0x000107c61180();
    func_0x000107c61170(ppuVar3);
    func_0x000107c61170();
    FUN_100c12488();
    func_0x000107c613fc();
    ppuVar4[3] = (undefined *)0x3;
    ppuVar4[2] = (undefined *)0x1;
    ppuVar4[4] = puVar5;
    uVar6 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined ***)(unaff_x20 + lVar1) = ppuVar4;
    func_0x000107c6157c();
    func_0x000107c6142c(uVar6);
    ppuVar3 = (undefined **)0x0;
  }
  func_0x000107c61434(ppuVar3);
  return ppuVar4;
}



/* Entry: 100c14acc; end: 100c14ae3;  */

void FUN_100c14acc(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f5c058;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110f5c058,
                      &PTR____CFConstantStringClassReference_110e61f78,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 100c14ae4; end: 100c14afb; -[_TtC32SCTalkNotificationCategoryPlugin30TalkNotificationCategoryPlugin identifier] */

/* WARNING: Removing unreachable block (ram,0x000100c14af8) */

void FUN_100c14ae4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 100c14afc; end: 100c14b4f; -[_TtC34NotificationFeedbackCategoryPlugin34NotificationFeedbackCategoryPlugin actions] */

void FUN_100c14afc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100c14b50();
  func_0x000107c61170(param_1);
  uVar2 = 0;
  func_0x000100c124e4(0);
  uVar3 = uVar1;
  func_0x000107c5fc48(uVar1,uVar2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 100c14b50; end: 100c14bb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100c14b50(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d69be0;
  lVar2 = *(long *)(unaff_x20 + _DAT_112d69be0);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    FUN_100c14bb4();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61434();
    func_0x000107c6142c(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61434(lVar2);
  return lVar3;
}



/* Entry: 100c14bb4; end: 100c14d33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c14bb4(long param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  
  lVar2 = *(long *)(param_1 + _DAT_112d69bd0);
  func_0x000107c5fadc(lVar2,((long *)(param_1 + _DAT_112d69bd0))[1]);
  lVar3 = lVar2;
  FUN_100c14d34();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100c14d30);
    (*pcVar1)();
  }
  puVar4 = PTR_PTR_1126c08c0;
  func_0x000107c61168();
  uVar5 = 0x77656976;
  func_0x000107c5fadc(0x77656976,0xe400000000000000);
  puVar6 = puVar4;
  func_0x000107c4fd28();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(uVar5);
  lVar2 = *(long *)(param_1 + _DAT_112d69bd8);
  func_0x000107c5fadc(lVar2,((long *)(param_1 + _DAT_112d69bd8))[1]);
  lVar3 = lVar2;
  func_0x000100c14d4c();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar7 = 0x65746e695f746f6e;
    func_0x000107c5fadc(0x65746e695f746f6e,0xee00646574736572);
    func_0x000107c4fd28();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar3);
    func_0x000107c61170();
    FUN_100c12488();
    func_0x000107c613fc();
    *(undefined8 *)(lVar7 + 0x18) = 5;
    *(undefined8 *)(lVar7 + 0x10) = 2;
    *(undefined **)(lVar7 + 0x20) = puVar6;
    *(undefined **)(lVar7 + 0x28) = puVar4;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100c14d34);
  (*pcVar1)();
}



/* Entry: 100c14d34; end: 100c14d63;  */

void FUN_100c14d34(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f5c0b8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110f5c0b8,
                      &PTR____CFConstantStringClassReference_110e61f78,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 100c14d64; end: 100c14d7b; -[_TtC34NotificationFeedbackCategoryPlugin34NotificationFeedbackCategoryPlugin identifier] */

/* WARNING: Removing unreachable block (ram,0x000100c14d78) */

void FUN_100c14d64(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 100c14d7c; end: 100c14dcf; -[_TtC29TemporaryMutingCategoryPlugin31MutingCategoryPluginNoTextReply actions] */

void FUN_100c14d7c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100c14dd0();
  func_0x000107c61170(param_1);
  uVar2 = 0;
  func_0x000100c124e4(0);
  uVar3 = uVar1;
  func_0x000107c5fc48(uVar1,uVar2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 100c14dd0; end: 100c14f2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100c14dd0(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  
  lVar1 = _DAT_112d69d88;
  lVar3 = *(long *)(unaff_x20 + _DAT_112d69d88);
  lVar5 = lVar3;
  if (lVar3 == 0) {
    FUN_100c12488();
    func_0x000107c613fc();
    *(undefined8 *)(lVar3 + 0x18) = 3;
    *(undefined8 *)(lVar3 + 0x10) = 1;
    lVar4 = 0x7463615f77656976;
    func_0x000107c5fadc(0x7463615f77656976,0xeb000000006e6f69);
    lVar5 = lVar4;
    FUN_100c14f2c();
    func_0x000107c61180();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100c14f2c);
      (*pcVar2)();
    }
    puVar6 = PTR_PTR_1126c08c0;
    func_0x000107c61168();
    uVar7 = 0x77656976;
    func_0x000107c5fadc(0x77656976,0xe400000000000000);
    func_0x000107c4fd28();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(uVar7);
    *(undefined **)(lVar3 + 0x20) = puVar6;
    FUN_100c14f44();
    func_0x000100c15288();
    uVar7 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61434(lVar3);
    func_0x000107c6142c(uVar7);
    lVar5 = 0;
  }
  func_0x000107c61434(lVar5);
  return lVar3;
}



/* Entry: 100c14f2c; end: 100c14f43;  */

void FUN_100c14f2c(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f5c0f8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110f5c0f8,
                      &PTR____CFConstantStringClassReference_110e61f78,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 100c14f44; end: 100c1518f;  */

long FUN_100c14f44(long param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  FUN_100c12488();
  func_0x000107c613fc();
  *(undefined8 *)(param_1 + 0x18) = 7;
  *(undefined8 *)(param_1 + 0x10) = 3;
  lVar2 = -0x2fffffffffffffee;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef2f890);
  lVar3 = lVar2;
  FUN_100c15190();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100c15188);
    (*pcVar1)();
  }
  puVar4 = PTR_PTR_1126c08c0;
  func_0x000107c61168();
  uVar5 = 0x685f315f6574756d;
  func_0x000107c5fadc(0x685f315f6574756d,0xeb0000000072756f);
  puVar6 = puVar4;
  func_0x000107c4fd28();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(uVar5);
  *(undefined **)(param_1 + 0x20) = puVar6;
  lVar3 = -0x2fffffffffffffed;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef2f8b0);
  lVar2 = lVar3;
  func_0x000100c151a8();
  func_0x000107c61180();
  if (lVar2 != 0) {
    uVar5 = 0x685f385f6574756d;
    func_0x000107c5fadc(0x685f385f6574756d,0xec0000007372756f);
    puVar6 = puVar4;
    func_0x000107c4fd28();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(uVar5);
    *(undefined **)(param_1 + 0x28) = puVar6;
    lVar3 = -0x2fffffffffffffec;
    func_0x000107c5fadc(0xd000000000000014,0x800000010ef2f8d0);
    lVar2 = lVar3;
    func_0x000100c151c0();
    func_0x000107c61180();
    if (lVar2 != 0) {
      uVar5 = 0x5f34325f6574756d;
      func_0x000107c5fadc(0x5f34325f6574756d,0xed00007372756f68);
      func_0x000107c4fd28();
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(uVar5);
      *(undefined **)(param_1 + 0x30) = puVar4;
      return param_1;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100c15190);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100c1518c);
  (*pcVar1)();
}



/* Entry: 100c15190; end: 100c151d7;  */

void FUN_100c15190(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f5c118;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110f5c118,
                      &PTR____CFConstantStringClassReference_110e61f78,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 100c151d8; end: 100c1549b;  */

void FUN_100c151d8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  
  uVar2 = *unaff_x20;
  uVar1 = uVar2;
  func_0x000107c61550();
  *unaff_x20 = uVar2;
  if ((((int)uVar1 != 0) && (uVar1 = 0, -1 < (long)uVar2)) && ((uVar2 >> 0x3e & 1) == 0)) {
    if (param_1 <= (long)(*(ulong *)((uVar2 & 0xffffffffffffff8) + 0x18) >> 1)) {
      return;
    }
    uVar1 = 1;
  }
  if (uVar2 >> 0x3e != 0) {
    func_0x000107c60480();
  }
  func_0x000100c15374();
  *unaff_x20 = uVar1;
  return;
}



/* Entry: 100c1549c; end: 100c1551b;  */

undefined * FUN_100c1549c(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    FUN_100c12488();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 100c1551c; end: 100c15673;  */

ulong FUN_100c1551c(undefined8 *param_1,long param_2,ulong param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  if (param_3 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_3 & 0xffffffffffffff8;
    if ((param_3 & 0x8000000000000000) != 0) {
      uVar5 = param_3;
    }
    func_0x000107c60480();
  }
  if (uVar5 != 0) {
    if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100c15674);
      (*pcVar1)();
    }
    if (param_3 >> 0x3e == 0) {
      lVar6 = *(long *)((param_3 & 0xffffffffffffff8) + 0x10);
      if (param_2 < lVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100c15668);
        (*pcVar1)();
      }
      uVar2 = 0;
      func_0x000100c124e4(0);
      func_0x000107c6140c(param_1,(param_3 & 0xffffffffffffff8) + 0x20,lVar6,uVar2);
    }
    else {
      uVar7 = param_3 & 0xffffffffffffff8;
      if ((param_3 & 0x8000000000000000) != 0) {
        uVar7 = param_3;
      }
      func_0x000107c60480();
      if (param_2 < (long)uVar7) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100c1566c);
        (*pcVar1)();
      }
      if ((long)uVar5 < 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100c15670);
        (*pcVar1)();
      }
      if ((param_3 & 0xc000000000000001) == 0) {
        uVar2 = *(undefined8 *)(param_3 + 0x20);
        *param_1 = uVar2;
        lVar6 = uVar5 - 1;
        if (lVar6 != 0) {
          uVar4 = uVar2;
          puVar8 = (undefined8 *)(param_3 + 0x28);
          do {
            param_1 = param_1 + 1;
            uVar2 = *puVar8;
            *param_1 = uVar2;
            func_0x000107c61174(uVar4);
            lVar6 = lVar6 + -1;
            uVar4 = uVar2;
            puVar8 = puVar8 + 1;
          } while (lVar6 != 0);
        }
        func_0x000107c61174(uVar2);
      }
      else {
        uVar7 = 0;
        do {
          uVar3 = uVar7;
          FUN_10122d1cc(uVar7,param_3);
          param_1[uVar7] = uVar3;
          uVar7 = uVar7 + 1;
        } while (uVar5 != uVar7);
      }
    }
  }
  return param_3;
}



/* Entry: 100c15674; end: 100c15747; -[SCUserInfoDeltaSyncProcessor canProcessDeltaSyncWithGroupKey:] */

ulong FUN_100c15674(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x000107c4a91c();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c49cec();
  if ((uVar2 & 1) == 0) {
    uVar2 = param_3;
    func_0x000107c4a91c(param_3);
    func_0x000107c61180();
    uVar3 = uVar2;
    func_0x000107c49cec();
    func_0x000107c61170(uVar2);
  }
  else {
    uVar3 = 1;
  }
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_3);
  return uVar3;
}



/* Entry: 100c15748; end: 100c1591f; -[CTPSearchQueriesDeltaSyncProcessor canProcessDeltaSyncWithGroupKey:] */

undefined8 FUN_100c15748(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined **ppuStack_48;
  
  func_0x000107c61174(param_3);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  puStack_58 = &UNK_105803014;
  puStack_50 = &UNK_105803024;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110daafd8;
  uVar1 = param_3;
  func_0x000107c44fdc(param_3);
  func_0x000107c61180();
  func_0x000107c4c6ac();
  func_0x000107c61170(uVar1);
  puVar2 = PTR_PTR_1126beb28;
  func_0x000107c4251c(PTR_PTR_1126beb28);
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126beb28;
  func_0x000107c42520(PTR_PTR_1126beb28);
  func_0x000107c61180();
  uVar1 = param_3;
  func_0x000107c4a91c();
  func_0x000107c61180();
  uVar4 = uVar1;
  func_0x000107c49cec();
  if ((int)uVar4 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = puStack_68[5];
    func_0x000107c49d0c(uVar4);
  }
  func_0x000107c61170(uVar1);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c60bcc(&uStack_70,8);
  func_0x000107c61170(ppuStack_48);
  func_0x000107c61170(param_3);
  return uVar4;
}



/* Entry: 100c15920; end: 100c15927; -[SCDeltaSyncKey identifier] */

undefined8 FUN_100c15920(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100c15928; end: 100c159ab; -[SCDeltaSyncIdentifier matchName:id:] */

/* WARNING: Possible PIC construction at 0x000100c15994: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c15998) */

void FUN_100c15928(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 == 0) goto LAB_100c15990;
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    pcVar2 = *(code **)(param_4 + 0x10);
    param_3 = param_4;
  }
  else {
    if (*(long *)(param_1 + 8) != 0 || param_3 == 0) goto LAB_100c15990;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    pcVar2 = *(code **)(param_3 + 0x10);
  }
  (*pcVar2)(param_3,uVar1);
LAB_100c15990:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 100c159ac; end: 100c159e3;  */

void FUN_100c159ac(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x000107c61174(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100c159e4; end: 100c159ef;  */

void FUN_100c159e4(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,param_2);
  return;
}



/* Entry: 100c159f0; end: 100c15a07; -[_TtC29TemporaryMutingCategoryPlugin31MutingCategoryPluginNoTextReply identifier] */

/* WARNING: Removing unreachable block (ram,0x000100c15a04) */

void FUN_100c159f0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 100c15a08; end: 100c15a67; +[CTPEmojiQueriesDeltaForceGroupKeyCOF emojiQueriesDeltaForceGroupKeyKindWithCircumstanceEngine:] */

void FUN_100c15a08(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = (undefined **)PTR_PTR_1126beb28;
  func_0x000107c3b5b4();
  func_0x000107c61180();
  if (ppuVar1 == (undefined **)0x0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110e04b58;
  }
  else {
    ppuVar2 = ppuVar1;
    func_0x000107c44508(ppuVar1);
    func_0x000107c61180();
  }
  func_0x000107c61170(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 100c15a68; end: 100c15b2f; +[CTPEmojiQueriesDeltaForceGroupKeyCOF _emojiQueriesDeltaForceGroupKeyWithCircumstanceEngine:] */

void FUN_100c15a68(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lStack_38;
  
  func_0x000107c4f558(param_3,param_2,&PTR____CFConstantStringClassReference_110e04b98,0,0);
  func_0x000107c61180();
  if (param_3 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126beb30;
    func_0x000107c610f4(PTR_PTR_1126beb30);
    lVar3 = param_3;
    func_0x000107c5dc0c(param_3);
    func_0x000107c61180();
    lStack_38 = 0;
    func_0x000107c4636c(puVar2,param_2,lVar3,&lStack_38);
    lVar1 = lStack_38;
    func_0x000107c61170(lVar3);
    puVar4 = (undefined *)0x0;
    if (lVar1 == 0) {
      func_0x000107c61174(puVar2);
      puVar4 = puVar2;
    }
    func_0x000107c61170(puVar2);
  }
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 100c15b30; end: 100c15b83; -[_TtC29TemporaryMutingCategoryPlugin33MutingCategoryPluginWithTextReply actions] */

void FUN_100c15b30(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100c15b84();
  func_0x000107c61170(param_1);
  uVar2 = 0;
  func_0x000100c124e4(0);
  uVar3 = uVar1;
  func_0x000107c5fc48(uVar1,uVar2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 100c15b84; end: 100c15ce7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100c15b84(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  
  lVar1 = _DAT_112d69dc8;
  lVar3 = *(long *)(unaff_x20 + _DAT_112d69dc8);
  lVar5 = lVar3;
  if (lVar3 == 0) {
    FUN_100c12488();
    func_0x000107c613fc();
    *(undefined8 *)(lVar3 + 0x18) = 5;
    *(undefined8 *)(lVar3 + 0x10) = 2;
    lVar4 = 0x7463615f77656976;
    func_0x000107c5fadc(0x7463615f77656976,0xeb000000006e6f69);
    lVar5 = lVar4;
    FUN_100c14f2c();
    func_0x000107c61180();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100c15ce8);
      (*pcVar2)();
    }
    puVar6 = PTR_PTR_1126c08c0;
    func_0x000107c61168();
    uVar7 = 0x77656976;
    func_0x000107c5fadc(0x77656976,0xe400000000000000);
    func_0x000107c4fd28();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar5);
    func_0x000107c61170();
    *(undefined **)(lVar3 + 0x20) = puVar6;
    FUN_100c15ce8();
    *(undefined8 *)(lVar3 + 0x28) = uVar7;
    FUN_100c14f44();
    func_0x000100c15288();
    uVar7 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61434(lVar3);
    func_0x000107c6142c(uVar7);
    lVar5 = 0;
  }
  func_0x000107c61434(lVar5);
  return lVar3;
}



/* Entry: 100c15ce8; end: 100c15dd7;  */

undefined * FUN_100c15ce8(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  
  lVar2 = 0x7865745f646e6573;
  func_0x000107c5fadc(0x7865745f646e6573,0xef796c7065725f74);
  lVar3 = lVar2;
  FUN_100c15dd8();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100c15dd0);
    (*pcVar1)();
  }
  lVar4 = lVar3;
  func_0x000100c15df0();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar5 = lVar4;
    func_0x000100c15e08();
    func_0x000107c61180();
    if (lVar5 != 0) {
      puVar6 = PTR_PTR_1126c08c0;
      func_0x000107c61168(PTR_PTR_1126c08c0);
      func_0x000107c5c860();
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar3);
      func_0x000107c61170(lVar4);
      func_0x000107c61170(lVar5);
      return puVar6;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100c15dd8);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100c15dd4);
  (*pcVar1)();
}



/* Entry: 100c15dd8; end: 100c15e1f;  */

void FUN_100c15dd8(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f5c178;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110f5c178,
                      &PTR____CFConstantStringClassReference_110e61f78,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 100c15e20; end: 100c15e93; -[SIGIconsComposerImageLoaderEntryPoint begin] */

/* WARNING: Possible PIC construction at 0x000100c15e74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c15e78) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c15e20(long param_1)

{
  func_0x000107c610fc(PTR_PTR_1126b6a78);
  param_1 = param_1 + _DAT_1127208a8;
  func_0x000107c61148(param_1);
  func_0x000107c4e9e4();
  func_0x000107c61180();
  func_0x000107c4fba8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c15e94; end: 100c15e9b; -[SCComposerSystemSessionImageLoadersRegistryScope plugInRegistry] */

undefined8 FUN_100c15e94(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100c15e9c; end: 100c15eb3; -[_TtC29TemporaryMutingCategoryPlugin33MutingCategoryPluginWithTextReply identifier] */

/* WARNING: Removing unreachable block (ram,0x000100c15eb0) */

void FUN_100c15e9c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 100c15eb4; end: 100c1600f;  */

void FUN_100c15eb4(ulong param_1)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uStack_70;
  ulong uStack_68;
  
  if (param_1 >> 0x3e == 0) {
    uVar6 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar6 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar6 = param_1;
    }
    func_0x000107c60480();
  }
  uVar3 = 0;
  FUN_100c116fc(0,0x112e38b10,&PTR__OBJC_CLASS___UNNotificationCategory_1126a9788);
  uVar4 = uVar3;
  FUN_100c16010();
  func_0x000107c5fe14(uVar6,uVar3,uVar4);
  uStack_68 = uVar6;
  if (param_1 >> 0x3e == 0) {
    uVar6 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar6 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar6 = param_1;
    }
    func_0x000107c60480();
  }
  if (uVar6 != 0) {
    uVar7 = 0;
    do {
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100c15ffc);
          (*pcVar2)();
        }
        uVar5 = *(ulong *)(param_1 + uVar7 * 8 + 0x20);
        func_0x000107c61174(uVar5);
      }
      else {
        uVar5 = uVar7;
        func_0x000101ebd944(uVar7,param_1,&PTR__OBJC_CLASS___UNNotificationCategory_1126a9788,
                            0x112e38b10);
      }
      uVar1 = uVar7 + 1;
      if (SCARRY8(uVar7,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100c15ff8);
        (*pcVar2)();
      }
      FUN_100c16064(&uStack_70,uVar5);
      func_0x000107c61170(uStack_70);
      uVar7 = uVar7 + 1;
    } while (uVar1 != uVar6);
  }
  return;
}



/* Entry: 100c16010; end: 100c16063;  */

void FUN_100c16010(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112e38b18 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_100c116fc(0xff,0x112e38b10,&PTR__OBJC_CLASS___UNNotificationCategory_1126a9788);
  puVar2 = PTR___sSo8NSObjectCSH10ObjectiveCMc_11034fab8;
  func_0x000107c61520(PTR___sSo8NSObjectCSH10ObjectiveCMc_11034fab8,uVar1);
  puRam0000000112e38b18 = puVar2;
  return;
}



/* Entry: 100c16064; end: 100c16403;  */

undefined8 FUN_100c16064(ulong *param_1,ulong param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *unaff_x20;
  ulong uVar7;
  ulong uStack_68;
  
  uVar7 = *unaff_x20;
  if ((uVar7 & 0xc000000000000001) == 0) {
    FUN_100c116fc(0,0x112e38b10,&PTR__OBJC_CLASS___UNNotificationCategory_1126a9788);
    uVar3 = *(ulong *)(uVar7 + 0x28);
    func_0x000107c60114();
    uVar6 = -1L << ((ulong)*(byte *)(uVar7 + 0x20) & 0x3f);
    uVar3 = uVar3 & (uVar6 ^ 0xffffffffffffffff);
    if ((*(ulong *)(uVar7 + 0x38 + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f) & 1) != 0) {
      do {
        uVar4 = *(ulong *)(*(long *)(uVar7 + 0x30) + uVar3 * 8);
        func_0x000107c61174();
        uVar5 = uVar4;
        func_0x000107c60118();
        func_0x000107c61170(uVar4);
        if ((uVar5 & 1) != 0) {
          func_0x000107c61170(param_2);
          *param_1 = *(ulong *)(*(long *)(uVar7 + 0x30) + uVar3 * 8);
          func_0x000107c61174();
          return 0;
        }
        uVar3 = uVar3 + 1 & ~uVar6;
      } while ((*(ulong *)(uVar7 + 0x38 + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f) & 1) != 0);
    }
    func_0x000107c61558(*unaff_x20);
    uStack_68 = *unaff_x20;
    func_0x000107c61174();
    func_0x000100c162ac();
    *unaff_x20 = uStack_68;
  }
  else {
    uVar3 = uVar7 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar7) {
      uVar3 = uVar7;
    }
    func_0x000107c61174();
    func_0x000107c61434(uVar7);
    uVar6 = param_2;
    func_0x000107c602a0(param_2,uVar3);
    func_0x000107c61170(param_2);
    if (uVar6 != 0) {
      func_0x000107c6142c(uVar7);
      func_0x000107c61170(param_2);
      uVar2 = 0;
      uStack_68 = uVar6;
      FUN_100c116fc(0,0x112e38b10,&PTR__OBJC_CLASS___UNNotificationCategory_1126a9788);
      func_0x000107c6147c(param_1,&uStack_68,PTR___syXlN_11034f1a0 + 8,uVar2,7);
      return 0;
    }
    uVar6 = uVar3;
    func_0x000107c6029c();
    if (SCARRY8(uVar6,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100c162ac);
      (*pcVar1)();
    }
    func_0x000101ebdb00(uVar3,uVar6 + 1);
    uVar6 = *(ulong *)(uVar3 + 0x10);
    uStack_68 = uVar3;
    if (uVar6 < *(ulong *)(uVar3 + 0x18)) {
      func_0x000107c61174(param_2);
    }
    else {
      func_0x000107c61174(param_2);
      func_0x000101ebe050(uVar6 + 1);
      uVar3 = uStack_68;
    }
    func_0x000101ebe27c(param_2,uVar3);
    func_0x000107c6142c(uVar7);
    *unaff_x20 = uVar3;
  }
  *param_1 = param_2;
  return 1;
}



/* Entry: 100c16404; end: 100c1646b; +[SCCTPEmojiQueriesDeltaForceGroupKey descriptor] */

void FUN_100c16404(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0940 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6e0e0,
                        &PTR____CFConstantStringClassReference_110e04db8,&PTR_DAT_113102b30,
                        &PTR_DAT_113102b48,2,0x18,0x1c);
    puRam00000001136c0940 = puVar1;
  }
  return;
}



/* Entry: 100c1646c; end: 100c164d7;  */

void FUN_100c1646c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  
  uVar3 = *unaff_x20;
  uVar1 = 0;
  FUN_100c116fc(0,0x112e38b10,&PTR__OBJC_CLASS___UNNotificationCategory_1126a9788);
  uVar2 = uVar1;
  FUN_100c16010();
  func_0x000107c5fe08(param_1,uVar1,uVar2);
  func_0x000107c56aec(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c164d8; end: 100c164df;  */

void FUN_100c164d8(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    FUN_100c1653c(param_1);
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 100c164e0; end: 100c1653b;  */

void FUN_100c164e0(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    FUN_100c1653c(param_1);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 100c1653c; end: 100c165eb;  */

/* WARNING: Possible PIC construction at 0x000100c16590: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c16594) */
/* WARNING: Removing unreachable block (ram,0x000100c165dc) */
/* WARNING: Removing unreachable block (ram,0x000100c16598) */

void FUN_100c1653c(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  func_0x000107c6142c(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61434(param_1);
  func_0x000107c3ffac(uVar1);
  func_0x000107c61180();
  func_0x000107c5c734();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100c165ec; end: 100c1664b; +[CTPEmojiQueriesDeltaForceGroupKeyCOF emojiQueriesDeltaForceGroupKeyNameWithCircumstanceEngine:] */

void FUN_100c165ec(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = (undefined **)PTR_PTR_1126beb28;
  func_0x000107c3b5b4();
  func_0x000107c61180();
  if (ppuVar1 == (undefined **)0x0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110e04b78;
  }
  else {
    ppuVar2 = ppuVar1;
    func_0x000107c44520(ppuVar1);
    func_0x000107c61180();
  }
  func_0x000107c61170(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 100c1664c; end: 100c1664f;  */

void FUN_100c1664c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 100c16650; end: 100c16673;  */

void FUN_100c16650(void)

{
  long unaff_x20;
  
  func_0x000107c61640(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c16674; end: 100c16697; -[SCIdleMonitorV1 markScopeGraphLaunched] */

void FUN_100c16674(long param_1)

{
  *(undefined1 *)(param_1 + 0x4d) = 1;
  if (*(char *)(param_1 + 0x4e) == '\x01') {
    *(undefined1 *)(param_1 + 0x4e) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010c0bbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_markStartComplete_11260c8f0);
    return;
  }
  return;
}



/* Entry: 100c16698; end: 100c166ef;  */

void FUN_100c16698(long param_1,code *param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    (*param_2)();
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 100c166f0; end: 100c1670f;  */

void FUN_100c166f0(void)

{
  FUN_100c16698();
  return;
}



/* Entry: 100c16710; end: 100c1672f;  */

void FUN_100c16710(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 100c16730; end: 100c16817;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c16730(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  long lStack_38;
  
  uVar3 = *(undefined8 *)(*(long *)(unaff_x20 + 0x18) + _DAT_113083f10);
  func_0x000107c615f0(uVar3);
  func_0x000100083b20(&lStack_38);
  lVar2 = lStack_38;
  lVar1 = lStack_38;
  func_0x000107c4d508(lStack_38);
  func_0x000107c61180();
  func_0x000107c615e8(lVar2);
  func_0x000107c3e2c0(uVar3,param_2,lVar1);
  func_0x000107c615e8(uVar3);
  func_0x000107c61170(lVar1);
  func_0x000100083b20(&lStack_38);
  lVar2 = lStack_38;
  func_0x000107c41090();
  func_0x000107c61180();
  func_0x000107c61170(lStack_38);
  lVar1 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar1 != 0) {
    func_0x000107c3e020(lVar1);
    func_0x000107c615e8(lVar1);
  }
  return;
}



/* Entry: 100c16818; end: 100c1681f; -[SCWindowUIContainer attachUI:] */

void FUN_100c16818(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0c9b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_attachUI_completion__1125a0c10,param_3,0);
  return;
}



/* Entry: 100c16820; end: 100c1699b; -[SCWindowUIContainer attachUI:completion:] */

void FUN_100c16820(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  lVar1 = *(long *)(param_1 + 8);
  func_0x000107c508f0();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c4f078();
  func_0x000107c61180();
  if (lVar2 == 0) {
    func_0x000107c61170(lVar1);
  }
  else {
    uVar3 = *(ulong *)(param_1 + 8);
    func_0x000107c508f0();
    func_0x000107c61180();
    uVar4 = uVar3;
    func_0x000107c4f078();
    func_0x000107c61180();
    uVar5 = uVar4;
    func_0x000107c49aa0();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar1);
    if ((uVar5 & 1) == 0) {
      uVar6 = *(undefined8 *)(param_1 + 8);
      func_0x000107c508f0(uVar6);
      func_0x000107c61180();
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0xc2000000;
      puStack_78 = &UNK_10bc8f3a8;
      puStack_70 = &UNK_11084a9e8;
      lStack_68 = param_1;
      func_0x000107c61174(param_3);
      uStack_60 = param_3;
      func_0x000107c61174(param_4);
      uStack_58 = param_4;
      func_0x000107c420a8(uVar6,param_2,0,&puStack_88);
      func_0x000107c61170(uVar6);
      func_0x000107c61170(uStack_58);
      func_0x000107c61170(uStack_60);
      goto LAB_100c16970;
    }
  }
  func_0x000107c3ae28(param_1,param_2,param_3,param_4);
LAB_100c16970:
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100c1699c; end: 100c16a03; -[SCWindowUIContainer _attachUI:completion:] */

void FUN_100c1699c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  
  func_0x000107c61174(param_4);
  func_0x000107c57f18(*(undefined8 *)(param_1 + 8),param_2,param_3);
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x000107c49f64();
  if ((uVar1 & 1) == 0) {
    func_0x000107c4c1c0(*(undefined8 *)(param_1 + 8));
  }
  if (param_4 != 0) {
    (**(code **)(param_4 + 0x10))(param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 100c16a04; end: 100c16b07; -[SCApplicationWindow setRootViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c16a04(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_50;
  undefined *puStack_48;
  
  func_0x000107c61174(param_3);
  puVar1 = &UNK_10f398718;
  func_0x0001000ba800(&UNK_10f398718);
  lVar2 = param_1;
  func_0x000107c508f0();
  func_0x000107c61180();
  func_0x000107c61170();
  if (lVar2 != param_3) {
    lVar2 = param_1;
    func_0x000107c508f0(param_1);
    func_0x000107c61180();
    lVar3 = lVar2;
    func_0x000107c5dee4();
    func_0x000107c61180();
    func_0x000107c611a0(param_1 + _DAT_112750b5c,lVar3);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar2);
  }
  puStack_48 = PTR_PTR_1126f3428;
  lStack_50 = param_1;
  func_0x000107c61154(&lStack_50,PTR_s_setRootViewController__1126593e8,param_3);
  func_0x0001000e2a84(puVar1);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100c16b08; end: 100c16b0b;  */

void FUN_100c16b08(void)

{
  return;
}



/* Entry: 100c16b0c; end: 100c16bdb;  */

/* WARNING: Possible PIC construction at 0x000100c16b78: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c16b7c) */

void FUN_100c16b0c(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c61174(param_2);
  lVar1 = param_2;
  func_0x000107c40808();
  if (lVar1 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c42a58(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x000107c61180();
    func_0x000107c3fef8(uVar3);
    func_0x000107c61170(puVar2);
  }
  else {
    param_1 = param_1 + 0x38;
    func_0x000107c61148(param_1);
    func_0x000107c3dd50(param_2);
    func_0x000107c61180();
    func_0x000107c3ca2c(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100c16bdc; end: 100c16e4b; -[SCDefaultDeltaSyncService _syncGroupWithKey:processor:client:] */

void FUN_100c16bdc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined1 auStack_90 [8];
  long lStack_88;
  undefined1 auStack_80 [16];
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  lVar1 = param_1;
  func_0x000107c3cdb4();
  lVar2 = param_1;
  func_0x000107c3ca3c();
  func_0x000107c61180();
  func_0x000107c5c590(*(undefined8 *)(param_1 + 0x30));
  func_0x000107c61144(auStack_80,param_1);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c3b460(param_1);
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126b81c0;
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  puStack_c0 = &UNK_1053b17d8;
  puStack_b8 = &UNK_110881b20;
  func_0x000107c6111c(auStack_90,auStack_80);
  func_0x000107c61174(param_4);
  uStack_b0 = param_4;
  lStack_88 = lVar1;
  func_0x000107c61174(param_3);
  uStack_a8 = param_3;
  func_0x000107c61174(param_5);
  uStack_a0 = param_5;
  func_0x000107c61174(lVar2);
  lStack_98 = lVar2;
  func_0x000107c6111c(auStack_d8,auStack_80);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  func_0x000107c4dd3c(puVar3);
  func_0x000107c61180();
  func_0x000107c3e6f4(uVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_3);
  func_0x000107c61120(auStack_d8);
  func_0x000107c61170(lStack_98);
  func_0x000107c61170(uStack_a0);
  func_0x000107c61170(uStack_a8);
  func_0x000107c61170(uStack_b0);
  func_0x000107c61120(auStack_90);
  func_0x000107c61120(auStack_80);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100c16e4c; end: 100c16ec3; -[SCDefaultDeltaSyncService _versionForProcessor:groupKey:] */

ulong FUN_100c16e4c(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  uVar1 = param_3;
  func_0x000107c61164(param_3,PTR_s_versionForGroupKey__112683d30);
  if ((uVar1 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = param_3;
    func_0x000107c5dd18(param_3);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return uVar1;
}



/* Entry: 100c16ec4; end: 100c16f93; -[SCUserInfoDeltaSyncProcessor versionForGroupKey:] */

undefined8 FUN_100c16ec4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x000107c4a91c();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c49cec();
  func_0x000107c61170(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x000107c4a91c(param_3);
    func_0x000107c61180();
    func_0x000107c49cec();
    func_0x000107c61170(uVar1);
    uVar3 = 0;
  }
  else {
    uVar3 = 2;
  }
  func_0x000107c61170(param_3);
  return uVar3;
}



/* Entry: 100c16f94; end: 100c1706b; -[SCDefaultDeltaSyncService _syncTokenForProcessor:groupKey:version:] */

void FUN_100c16f94(ulong param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  
  func_0x000107c61174(param_4);
  puVar1 = PTR_s_syncTokenForGroupKey__112677428;
  func_0x000107c61174(param_3);
  uVar2 = param_3;
  func_0x000107c61164(param_3,puVar1);
  if ((uVar2 & 1) == 0) {
    uVar2 = *(ulong *)(param_1 + 0x10);
    func_0x000107c3b564(param_1);
    func_0x000107c61180();
    func_0x000107c61170(param_3);
    func_0x000107c5c5c4(uVar2);
    func_0x000107c61180();
  }
  else {
    uVar2 = param_3;
    func_0x000107c5c5c0(param_3);
    func_0x000107c61180();
    param_1 = param_3;
  }
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 100c1706c; end: 100c170d7; -[SCDefaultDeltaSyncService _docObjectContextForProcessor:] */

void FUN_100c1706c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x000107c61164(param_3,PTR_s_docObjectContext_1125bf740);
  if ((uVar1 & 1) == 0) {
    uVar1 = *(ulong *)(param_1 + 0x20);
    func_0x000107c61174(uVar1);
  }
  else {
    uVar1 = param_3;
    func_0x000107c421c8(param_3);
    func_0x000107c61180();
  }
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100c170d8; end: 100c1783b; -[SCDeltaSyncTokenRepository syncTokenForGroupKey:version:docObjectFetcher:] */

void FUN_100c170d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  long param_5)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined4 uStack_504;
  long lStack_500;
  long lStack_4f8;
  undefined8 uStack_4f0;
  undefined **ppuStack_4e8;
  undefined4 uStack_4e0;
  undefined4 uStack_4d0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  long lStack_4a0;
  long lStack_498;
  undefined8 uStack_490;
  long *plStack_488;
  long *plStack_480;
  undefined1 uStack_471;
  undefined **ppuStack_470;
  undefined4 uStack_468;
  undefined2 uStack_458;
  byte bStack_456;
  byte bStack_455;
  undefined1 *puStack_438;
  undefined ***pppuStack_430;
  long lStack_428;
  long lStack_420;
  undefined8 uStack_418;
  long *plStack_410;
  long *plStack_408;
  undefined **ppuStack_400;
  undefined4 uStack_3f8;
  undefined4 uStack_3e8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined *puStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  long *plStack_3a0;
  long *plStack_398;
  undefined1 uStack_389;
  undefined **ppuStack_388;
  undefined4 uStack_380;
  undefined2 uStack_370;
  byte bStack_36e;
  byte bStack_36d;
  undefined1 *puStack_350;
  undefined ***pppuStack_348;
  undefined *puStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  long *plStack_328;
  long *plStack_320;
  undefined **ppuStack_318;
  undefined4 uStack_310;
  undefined4 uStack_300;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined *puStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  long *plStack_2b8;
  long *plStack_2b0;
  undefined1 uStack_2a1;
  undefined **ppuStack_2a0;
  undefined4 uStack_298;
  undefined2 uStack_288;
  undefined2 uStack_286;
  undefined1 *puStack_268;
  undefined ***pppuStack_260;
  undefined *puStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  long *plStack_240;
  long *plStack_238;
  undefined **ppuStack_230;
  undefined4 uStack_228;
  undefined2 uStack_218;
  byte bStack_216;
  byte bStack_215;
  undefined ***pppuStack_1f8;
  undefined ***pppuStack_1f0;
  long lStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  long *plStack_1d0;
  long *plStack_1c8;
  undefined **ppuStack_1c0;
  undefined4 uStack_1b8;
  undefined2 uStack_1a8;
  byte bStack_1a6;
  byte bStack_1a5;
  undefined ***pppuStack_188;
  undefined ***pppuStack_180;
  long lStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long *plStack_160;
  long *plStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined8 *puStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined **ppuStack_78;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  puStack_88 = &UNK_1053b6b10;
  puStack_80 = &UNK_1053b6b20;
  ppuStack_78 = &PTR____CFConstantStringClassReference_110daafd8;
  uStack_c0 = 0;
  uStack_b0 = 0x2020000000;
  uStack_a8 = 0;
  uVar2 = param_3;
  puStack_b8 = &uStack_c0;
  puStack_98 = &uStack_a0;
  func_0x000107c44fdc(param_3);
  func_0x000107c61180();
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_100c1783c;
  puStack_d0 = &UNK_110864a68;
  puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_108 = 0xc2000000;
  puStack_100 = &UNK_1053b6b28;
  puStack_f8 = &UNK_110864a98;
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_f0 = &uStack_c0;
  puStack_c8 = &uStack_a0;
  func_0x000107c4c6ac();
  func_0x000107c61170(uVar2);
  func_0x000107c61158(PTR_PTR_1126b8218);
  if (param_5 == 0) {
    uStack_120 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
  }
  else {
    func_0x000107c430a4(&uStack_150,param_5);
  }
  puVar3 = &uStack_2a1;
  FUN_100c17874();
  uVar2 = param_3;
  func_0x000107c4a91c();
  func_0x000107c61180();
  uStack_310 = 0xf;
  uStack_300 = 0x100;
  func_0x000107c61174();
  ppuStack_318 = &PTR_DAT_110862760;
  uStack_2d8 = 0;
  uStack_2e0 = 0;
  uStack_2c8 = 0;
  puStack_2d0 = (undefined *)0x0;
  plStack_2b8 = (long *)0x0;
  uStack_2c0 = 0;
  plStack_2b0 = (long *)0x0;
  uStack_286 = *(undefined2 *)(puVar3 + 0x1a);
  uStack_298 = 10;
  uStack_288 = 0x100;
  ppuStack_2a0 = &PTR_DAT_110862700;
  uStack_250 = 0;
  puStack_258 = (undefined *)0x0;
  plStack_240 = (long *)0x0;
  uStack_248 = 0;
  plStack_238 = (long *)0x0;
  puVar4 = &uStack_389;
  uStack_2e8 = uVar2;
  puStack_268 = puVar3;
  pppuStack_260 = &ppuStack_318;
  func_0x000100c178d8();
  uStack_3f8 = 0xf;
  uStack_3e8 = 0x100;
  uVar9 = puStack_98[5];
  func_0x000107c61174(uVar9);
  ppuStack_400 = &PTR_DAT_110862760;
  uStack_3c0 = 0;
  uStack_3c8 = 0;
  uStack_3b0 = 0;
  puStack_3b8 = (undefined *)0x0;
  plStack_3a0 = (long *)0x0;
  uStack_3a8 = 0;
  plStack_398 = (long *)0x0;
  bStack_36e = puVar4[0x1a];
  bStack_36d = puVar4[0x1b];
  uStack_380 = 10;
  uStack_370 = 0x100;
  ppuStack_388 = &PTR_DAT_110862700;
  pppuStack_1f0 = &ppuStack_388;
  uStack_338 = 0;
  puStack_340 = (undefined *)0x0;
  plStack_328 = (long *)0x0;
  uStack_330 = 0;
  plStack_320 = (long *)0x0;
  bStack_216 = (byte)uStack_286 | bStack_36e;
  bStack_215 = uStack_286._1_1_ & bStack_36d;
  uStack_228 = 4;
  uStack_218 = 0x100;
  ppuStack_230 = &PTR_SUB_1108629c8;
  pppuStack_1f8 = &ppuStack_2a0;
  plStack_1c8 = (long *)0x0;
  plStack_1d0 = (long *)0x0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  lStack_1e8 = 0;
  puVar3 = &uStack_471;
  uStack_3d0 = uVar9;
  puStack_350 = puVar4;
  pppuStack_348 = &ppuStack_400;
  func_0x000100c1793c();
  uStack_4e0 = 0xf;
  uStack_4d0 = 0x100;
  uStack_4b8 = puStack_b8[3];
  ppuStack_4e8 = &PTR_DAT_110862958;
  plStack_480 = (long *)0x0;
  lStack_498 = 0;
  lStack_4a0 = 0;
  plStack_488 = (long *)0x0;
  uStack_490 = 0;
  uStack_4a8 = 0;
  uStack_4b0 = 0;
  bStack_456 = puVar3[0x1a];
  bStack_455 = puVar3[0x1b];
  uStack_468 = 10;
  uStack_458 = 0x100;
  ppuStack_470 = &PTR_DAT_110881e20;
  lStack_420 = 0;
  lStack_428 = 0;
  plStack_410 = (long *)0x0;
  uStack_418 = 0;
  plStack_408 = (long *)0x0;
  bStack_1a6 = bStack_216 | bStack_456;
  bStack_1a5 = bStack_215 & bStack_455;
  uStack_1b8 = 4;
  uStack_1a8 = 0x100;
  ppuStack_1c0 = &PTR_SUB_1108629c8;
  pppuStack_180 = &ppuStack_470;
  plStack_158 = (long *)0x0;
  plStack_160 = (long *)0x0;
  uStack_168 = 0;
  uStack_170 = 0;
  lStack_178 = 0;
  lStack_500 = 0;
  lStack_4f8 = 0;
  uStack_4f0 = 0;
  uStack_504 = 0;
  puVar5 = &uStack_150;
  puStack_438 = puVar3;
  pppuStack_430 = &ppuStack_4e8;
  pppuStack_188 = &ppuStack_230;
  func_0x0001000e77a0(puVar5,&ppuStack_1c0,&lStack_500,&uStack_504);
  func_0x000107c61180();
  if (lStack_500 != 0) {
    lStack_4f8 = lStack_500;
    func_0x000107c60e14();
  }
  plVar1 = plStack_158;
  ppuStack_1c0 = &PTR_SUB_1108629c8;
  plStack_158 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_160;
  plStack_160 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_178 != 0) {
    func_0x000107c60e14();
  }
  plVar1 = plStack_408;
  ppuStack_470 = &PTR_DAT_110881e20;
  plStack_408 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_410;
  plStack_410 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_428 != 0) {
    lStack_420 = lStack_428;
    func_0x000107c60e14();
  }
  plVar1 = plStack_480;
  ppuStack_4e8 = &PTR_DAT_110862958;
  plStack_480 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_488;
  plStack_488 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_4a0 != 0) {
    lStack_498 = lStack_4a0;
    func_0x000107c60e14();
  }
  plVar1 = plStack_1c8;
  ppuStack_230 = &PTR_SUB_1108629c8;
  plStack_1c8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_1d0;
  plStack_1d0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_1e8 != 0) {
    func_0x000107c60e14();
  }
  plVar1 = plStack_320;
  ppuStack_388 = &PTR_DAT_110862700;
  plStack_320 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_328;
  plStack_328 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  ppuStack_470 = &puStack_340;
  func_0x000100105004(&ppuStack_470);
  plVar1 = plStack_398;
  ppuStack_400 = &PTR_DAT_110862760;
  plStack_398 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_3a0;
  plStack_3a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  ppuStack_470 = &puStack_3b8;
  func_0x000100105004(&ppuStack_470);
  func_0x000107c61170(uStack_3d0);
  plVar1 = plStack_238;
  ppuStack_2a0 = &PTR_DAT_110862700;
  plStack_238 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_240;
  plStack_240 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  ppuStack_388 = &puStack_258;
  func_0x000100105004(&ppuStack_388);
  plVar1 = plStack_2b0;
  ppuStack_318 = &PTR_DAT_110862760;
  plStack_2b0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_2b8;
  plStack_2b8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  ppuStack_388 = &puStack_2d0;
  func_0x000100105004(&ppuStack_388);
  func_0x000107c61170(uStack_2e8);
  func_0x000107c61170(uVar2);
  func_0x0001000e76e0(&uStack_128);
  func_0x000107c61170(uStack_138);
  func_0x000107c61170(uStack_140);
  puVar6 = puVar5;
  func_0x000107c43638();
  func_0x000107c61180();
  puVar8 = puVar6;
  func_0x000107c5dd14();
  if (puVar8 == param_4) {
    puVar7 = puVar5;
    func_0x000107c43638(puVar5);
    func_0x000107c61180();
    puVar8 = puVar7;
    func_0x000107c4051c();
    func_0x000107c61180();
    func_0x000107c61170(puVar7);
  }
  else {
    puVar8 = (undefined8 *)0x0;
  }
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar5);
  func_0x000107c60bcc(&uStack_c0,8);
  func_0x000107c60bcc(&uStack_a0,8);
  func_0x000107c61170(ppuStack_78);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 100c1783c; end: 100c17873;  */

void FUN_100c1783c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x000107c61174(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100c17874; end: 100c179f3;  */

undefined ** FUN_100c17874(void)

{
  int iVar1;
  
  if ((bRam0000000113819708 & 1) == 0) {
    iVar1 = 0x13819708;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      func_0x000107c60e34(&DAT_105004938,&PTR_PTR_1130d2378,0x100000000);
      func_0x000107c60e4c(0x113819708);
    }
  }
  return &PTR_PTR_1130d2378;
}



/* Entry: 100c179f4; end: 100c179ff; +[SCDeltaSyncPersistedToken table] */

char * FUN_100c179f4(void)

{
  return "deltasync__persistedtoken";
}



/* Entry: 100c17a00; end: 100c17a87;  */

void FUN_100c17a00(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) == 0) {
    if ((*(int *)(param_1 + 8) == 0xe) && ((*(byte *)(param_1 + 0x18) & 1) == 0)) {
      func_0x00010055a1c0(param_2,param_1 + 0x10,param_1 + 0x10);
    }
    plVar1 = *(long **)(param_1 + 0x38);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
    }
    plVar1 = *(long **)(param_1 + 0x40);
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100c17a74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
      return;
    }
  }
  return;
}



/* Entry: 100c17a88; end: 100c17b0f;  */

void FUN_100c17a88(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) == 0) {
    if ((*(int *)(param_1 + 8) == 0xe) && ((*(byte *)(param_1 + 0x18) & 1) == 0)) {
      func_0x00010055a1c0(param_2,param_1 + 0x10,param_1 + 0x10);
    }
    plVar1 = *(long **)(param_1 + 0x38);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
    }
    plVar1 = *(long **)(param_1 + 0x40);
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100c17afc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
      return;
    }
  }
  return;
}



/* Entry: 100c17b10; end: 100c181cb;  */

void FUN_100c17b10(long param_1,undefined8 param_2,int *param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 ******ppppppuVar5;
  long *plVar6;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar7;
  char *pcVar8;
  ulong uVar9;
  long alStack_98 [2];
  char cStack_81;
  undefined8 *****pppppuStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  switch(*(undefined4 *)(param_1 + 8)) {
  case 0:
    func_0x000107c60c5c(param_2,"NOT (",5);
    plVar6 = *(long **)(param_1 + 0x38);
    goto code_r0x000100c18170;
  case 1:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") ISNULL";
    pcVar8 = (char *)0x8;
    goto code_r0x000100c18190;
  case 2:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") IS NOT NULL";
    pcVar8 = (char *)0xd;
    goto code_r0x000100c18190;
  case 3:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") % (",5);
    break;
  case 4:
    plVar6 = *(long **)(param_1 + 0x38);
    plVar4 = *(long **)(param_1 + 0x40);
    if ((*(byte *)((long)plVar6 + 0x1b) & 1) != 0) {
      if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
        return;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x10);
      plVar6 = plVar4;
code_r0x000100c18104:
                    /* WARNING: Could not recover jumptable at 0x000100c18128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar6,param_2,param_3);
      return;
    }
    if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar6 + 0x10);
      goto code_r0x000100c18104;
    }
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") AND (",7);
    break;
  case 5:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") OR (",6);
    break;
  case 6:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") < (",5);
    break;
  case 7:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") <= (",6);
    break;
  case 8:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") > (",5);
    break;
  case 9:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") >= (",6);
    break;
  case 10:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") = (",5);
    break;
  case 0xb:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") != (",6);
    break;
  case 0xc:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") IN (",6);
    if (*(long *)(param_1 + 0x50) != *(long *)(param_1 + 0x48)) {
      uVar9 = 0;
      pcVar8 = (char *)0x1;
      pcVar7 = ")";
      do {
        *param_3 = *param_3 + 1;
        func_0x000107c60ddc(alStack_98);
        pcVar2 = "?";
        if (uVar9 != 0) {
          pcVar2 = ",?";
        }
        uVar1 = 1;
        if (uVar9 != 0) {
          uVar1 = 2;
        }
        plVar6 = alStack_98;
        func_0x000107c60c70(plVar6,0,pcVar2,uVar1);
        uStack_78 = plVar6[1];
        pppppuStack_80 = (undefined8 *****)*plVar6;
        uStack_70 = plVar6[2];
        plVar6[1] = 0;
        plVar6[2] = 0;
        *plVar6 = 0;
        uVar3 = uStack_78;
        ppppppuVar5 = (undefined8 ******)pppppuStack_80;
        if (-1 < (long)uStack_70) {
          uVar3 = uStack_70 >> 0x38;
          ppppppuVar5 = &pppppuStack_80;
        }
        func_0x000107c60c5c(param_2,ppppppuVar5,uVar3);
        if ((long)uStack_70 < 0) {
          func_0x000107c60e14(pppppuStack_80);
        }
        if (cStack_81 < '\0') {
          func_0x000107c60e14(alStack_98[0]);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 3));
      goto code_r0x000100c18190;
    }
    goto code_r0x000100c18184;
  case 0xd:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") NOT IN (",10);
    if (*(long *)(param_1 + 0x50) == *(long *)(param_1 + 0x48)) goto code_r0x000100c18184;
    uVar9 = 0;
    pcVar8 = (char *)0x1;
    pcVar7 = ")";
    do {
      *param_3 = *param_3 + 1;
      func_0x000107c60ddc(alStack_98);
      pcVar2 = "?";
      if (uVar9 != 0) {
        pcVar2 = ",?";
      }
      uVar1 = 1;
      if (uVar9 != 0) {
        uVar1 = 2;
      }
      plVar6 = alStack_98;
      func_0x000107c60c70(plVar6,0,pcVar2,uVar1);
      uStack_78 = plVar6[1];
      pppppuStack_80 = (undefined8 *****)*plVar6;
      uStack_70 = plVar6[2];
      plVar6[1] = 0;
      plVar6[2] = 0;
      *plVar6 = 0;
      uVar3 = uStack_78;
      ppppppuVar5 = (undefined8 ******)pppppuStack_80;
      if (-1 < (long)uStack_70) {
        uVar3 = uStack_70 >> 0x38;
        ppppppuVar5 = &pppppuStack_80;
      }
      func_0x000107c60c5c(param_2,ppppppuVar5,uVar3);
      if ((long)uStack_70 < 0) {
        func_0x000107c60e14(pppppuStack_80);
      }
      if (cStack_81 < '\0') {
        func_0x000107c60e14(alStack_98[0]);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 3));
    goto code_r0x000100c18190;
  case 0xe:
    pcVar7 = *(char **)(param_1 + 0x10);
    pcVar8 = pcVar7;
    func_0x000107c613d0(pcVar7);
    goto code_r0x000100c18190;
  case 0xf:
    *param_3 = *param_3 + 1;
    func_0x000107c60ddc(alStack_98);
    plVar6 = alStack_98;
    func_0x000107c60c70(plVar6,0,"?",1);
    uStack_78 = plVar6[1];
    pppppuStack_80 = (undefined8 *****)*plVar6;
    uStack_70 = plVar6[2];
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = 0;
    uVar9 = uStack_78;
    ppppppuVar5 = (undefined8 ******)pppppuStack_80;
    if (-1 < (long)uStack_70) {
      uVar9 = uStack_70 >> 0x38;
      ppppppuVar5 = &pppppuStack_80;
    }
    func_0x000107c60c5c(param_2,ppppppuVar5,uVar9);
    if ((long)uStack_70 < 0) {
      func_0x000107c60e14(pppppuStack_80);
    }
    if (cStack_81 < '\0') {
      func_0x000107c60e14(alStack_98[0]);
    }
  default:
    goto LAB_100c181a0;
  }
  plVar6 = *(long **)(param_1 + 0x40);
code_r0x000100c18170:
  (**(code **)(*plVar6 + 0x10))(plVar6,param_2,param_3);
code_r0x000100c18184:
  pcVar7 = ")";
  pcVar8 = (char *)0x1;
code_r0x000100c18190:
  func_0x000107c60c5c(param_2,pcVar7,pcVar8);
LAB_100c181a0:
  return;
}



/* Entry: 100c181cc; end: 100c18887;  */

void FUN_100c181cc(long param_1,undefined8 param_2,int *param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 ******ppppppuVar5;
  long *plVar6;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar7;
  char *pcVar8;
  ulong uVar9;
  long alStack_98 [2];
  char cStack_81;
  undefined8 *****pppppuStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  switch(*(undefined4 *)(param_1 + 8)) {
  case 0:
    func_0x000107c60c5c(param_2,"NOT (",5);
    plVar6 = *(long **)(param_1 + 0x38);
    goto code_r0x000100c1882c;
  case 1:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") ISNULL";
    pcVar8 = (char *)0x8;
    goto code_r0x000100c1884c;
  case 2:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") IS NOT NULL";
    pcVar8 = (char *)0xd;
    goto code_r0x000100c1884c;
  case 3:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") % (",5);
    break;
  case 4:
    plVar6 = *(long **)(param_1 + 0x38);
    plVar4 = *(long **)(param_1 + 0x40);
    if ((*(byte *)((long)plVar6 + 0x1b) & 1) != 0) {
      if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
        return;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x10);
      plVar6 = plVar4;
code_r0x000100c187c0:
                    /* WARNING: Could not recover jumptable at 0x000100c187e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar6,param_2,param_3);
      return;
    }
    if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar6 + 0x10);
      goto code_r0x000100c187c0;
    }
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") AND (",7);
    break;
  case 5:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") OR (",6);
    break;
  case 6:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") < (",5);
    break;
  case 7:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") <= (",6);
    break;
  case 8:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") > (",5);
    break;
  case 9:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") >= (",6);
    break;
  case 10:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") = (",5);
    break;
  case 0xb:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") != (",6);
    break;
  case 0xc:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") IN (",6);
    if (*(long *)(param_1 + 0x50) != *(long *)(param_1 + 0x48)) {
      uVar9 = 0;
      pcVar8 = (char *)0x1;
      pcVar7 = ")";
      do {
        *param_3 = *param_3 + 1;
        func_0x000107c60ddc(alStack_98);
        pcVar2 = "?";
        if (uVar9 != 0) {
          pcVar2 = ",?";
        }
        uVar1 = 1;
        if (uVar9 != 0) {
          uVar1 = 2;
        }
        plVar6 = alStack_98;
        func_0x000107c60c70(plVar6,0,pcVar2,uVar1);
        uStack_78 = plVar6[1];
        pppppuStack_80 = (undefined8 *****)*plVar6;
        uStack_70 = plVar6[2];
        plVar6[1] = 0;
        plVar6[2] = 0;
        *plVar6 = 0;
        uVar3 = uStack_78;
        ppppppuVar5 = (undefined8 ******)pppppuStack_80;
        if (-1 < (long)uStack_70) {
          uVar3 = uStack_70 >> 0x38;
          ppppppuVar5 = &pppppuStack_80;
        }
        func_0x000107c60c5c(param_2,ppppppuVar5,uVar3);
        if ((long)uStack_70 < 0) {
          func_0x000107c60e14(pppppuStack_80);
        }
        if (cStack_81 < '\0') {
          func_0x000107c60e14(alStack_98[0]);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 3));
      goto code_r0x000100c1884c;
    }
    goto code_r0x000100c18840;
  case 0xd:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") NOT IN (",10);
    if (*(long *)(param_1 + 0x50) == *(long *)(param_1 + 0x48)) goto code_r0x000100c18840;
    uVar9 = 0;
    pcVar8 = (char *)0x1;
    pcVar7 = ")";
    do {
      *param_3 = *param_3 + 1;
      func_0x000107c60ddc(alStack_98);
      pcVar2 = "?";
      if (uVar9 != 0) {
        pcVar2 = ",?";
      }
      uVar1 = 1;
      if (uVar9 != 0) {
        uVar1 = 2;
      }
      plVar6 = alStack_98;
      func_0x000107c60c70(plVar6,0,pcVar2,uVar1);
      uStack_78 = plVar6[1];
      pppppuStack_80 = (undefined8 *****)*plVar6;
      uStack_70 = plVar6[2];
      plVar6[1] = 0;
      plVar6[2] = 0;
      *plVar6 = 0;
      uVar3 = uStack_78;
      ppppppuVar5 = (undefined8 ******)pppppuStack_80;
      if (-1 < (long)uStack_70) {
        uVar3 = uStack_70 >> 0x38;
        ppppppuVar5 = &pppppuStack_80;
      }
      func_0x000107c60c5c(param_2,ppppppuVar5,uVar3);
      if ((long)uStack_70 < 0) {
        func_0x000107c60e14(pppppuStack_80);
      }
      if (cStack_81 < '\0') {
        func_0x000107c60e14(alStack_98[0]);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 3));
    goto code_r0x000100c1884c;
  case 0xe:
    pcVar7 = *(char **)(param_1 + 0x10);
    pcVar8 = pcVar7;
    func_0x000107c613d0(pcVar7);
    goto code_r0x000100c1884c;
  case 0xf:
    *param_3 = *param_3 + 1;
    func_0x000107c60ddc(alStack_98);
    plVar6 = alStack_98;
    func_0x000107c60c70(plVar6,0,"?",1);
    uStack_78 = plVar6[1];
    pppppuStack_80 = (undefined8 *****)*plVar6;
    uStack_70 = plVar6[2];
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = 0;
    uVar9 = uStack_78;
    ppppppuVar5 = (undefined8 ******)pppppuStack_80;
    if (-1 < (long)uStack_70) {
      uVar9 = uStack_70 >> 0x38;
      ppppppuVar5 = &pppppuStack_80;
    }
    func_0x000107c60c5c(param_2,ppppppuVar5,uVar9);
    if ((long)uStack_70 < 0) {
      func_0x000107c60e14(pppppuStack_80);
    }
    if (cStack_81 < '\0') {
      func_0x000107c60e14(alStack_98[0]);
    }
  default:
    goto LAB_100c1885c;
  }
  plVar6 = *(long **)(param_1 + 0x40);
code_r0x000100c1882c:
  (**(code **)(*plVar6 + 0x10))(plVar6,param_2,param_3);
code_r0x000100c18840:
  pcVar7 = ")";
  pcVar8 = (char *)0x1;
code_r0x000100c1884c:
  func_0x000107c60c5c(param_2,pcVar7,pcVar8);
LAB_100c1885c:
  return;
}



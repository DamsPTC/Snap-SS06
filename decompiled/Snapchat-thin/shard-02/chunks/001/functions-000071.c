/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1018c5ba0; end: 1018c5e5b; -[AdCompositeAdSource protoAdRequestWithMetadata:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018c5ba0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  func_0x000107c60bc4();
  puVar2 = &UNK_11040c668;
  func_0x000107c613fc(&UNK_11040c668,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_4;
  uVar4 = *(undefined8 *)(param_1 + _DAT_112dcf000);
  pcStack_50 = FUN_1018c6394;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_1018c5b18;
  puStack_58 = &UNK_11040c680;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c615f0(uVar4);
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c4f524(uVar4);
  func_0x000107c61170(param_3);
  func_0x000107c61574(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(uVar4);
  return;
}



/* Entry: 1018c5e5c; end: 1018c608b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018c5e5c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long *plVar6;
  long lVar7;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar1 = 0;
  func_0x000100b91d00();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar3 = (long)&lStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  func_0x00010423cab0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar7 = lVar3 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  plVar6 = (long *)(lVar7 - extraout_x12);
  if (param_1 != 0) {
    func_0x000107c61174(param_2);
    func_0x000107c61174(param_1);
    func_0x0001042b0824(plVar6,param_2);
    func_0x000107c61174(param_1);
    func_0x0001047b6fb0(lVar3);
    FUN_10178317c(lVar3,(long)plVar6 + (long)*(int *)(lVar1 + 0x30));
    func_0x00010188dcdc(plVar6,lVar7);
    uVar2 = 0;
    func_0x0001042b18d4(0);
    func_0x000107c610f8();
    lVar3 = lVar7;
    func_0x0001042b0f38(lVar7);
    plVar4 = plVar6;
    func_0x00010188dc5c();
    func_0x00010420d2a8();
    lVar5 = *plVar4;
    func_0x000107c61174();
    func_0x000107c61174(lVar3);
    func_0x0001042b0824(plVar6);
    *(undefined8 *)((long)plVar6 + (long)*(int *)(lVar1 + 0x38)) =
         *(undefined8 *)(lVar5 + _DAT_113069750);
    func_0x00010188dcdc(plVar6,lVar7);
    func_0x000107c610f8(uVar2);
    func_0x0001042b0f38(lVar7);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar3);
    func_0x00010188dc5c(plVar6);
    func_0x000107c61428(param_3 + 0x10,auStack_78,0,0);
    param_3 = param_3 + 0x10;
    func_0x000107c61618();
    if (param_3 != 0) {
      uVar2 = *(undefined8 *)(param_3 + _DAT_112dcf008);
      func_0x000107c615f0(uVar2);
      func_0x000107c61170(param_3);
      func_0x000107c5cd5c(uVar2);
      func_0x000107c615e8(uVar2);
    }
    func_0x000107c61170(param_1);
    func_0x000107c61170(lVar7);
  }
  return;
}



/* Entry: 1018c608c; end: 1018c6093;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018c608c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long unaff_x20;
  long *plVar7;
  long lVar8;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar6 = *(long *)(unaff_x20 + 0x18);
  lVar1 = 0;
  func_0x000100b91d00();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar3 = (long)&lStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  func_0x00010423cab0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar8 = lVar3 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  plVar7 = (long *)(lVar8 - extraout_x12);
  if (param_1 != 0) {
    func_0x000107c61174(uVar2);
    func_0x000107c61174(param_1);
    func_0x0001042b0824(plVar7,uVar2);
    func_0x000107c61174(param_1);
    func_0x0001047b6fb0(lVar3);
    FUN_10178317c(lVar3,(long)plVar7 + (long)*(int *)(lVar1 + 0x30));
    func_0x00010188dcdc(plVar7,lVar8);
    uVar2 = 0;
    func_0x0001042b18d4(0);
    func_0x000107c610f8();
    lVar3 = lVar8;
    func_0x0001042b0f38(lVar8);
    plVar4 = plVar7;
    func_0x00010188dc5c();
    func_0x00010420d2a8();
    lVar5 = *plVar4;
    func_0x000107c61174();
    func_0x000107c61174(lVar3);
    func_0x0001042b0824(plVar7);
    *(undefined8 *)((long)plVar7 + (long)*(int *)(lVar1 + 0x38)) =
         *(undefined8 *)(lVar5 + _DAT_113069750);
    func_0x00010188dcdc(plVar7,lVar8);
    func_0x000107c610f8(uVar2);
    func_0x0001042b0f38(lVar8);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar3);
    func_0x00010188dc5c(plVar7);
    func_0x000107c61428(lVar6 + 0x10,auStack_78,0,0);
    lVar6 = lVar6 + 0x10;
    func_0x000107c61618();
    if (lVar6 != 0) {
      uVar2 = *(undefined8 *)(lVar6 + _DAT_112dcf008);
      func_0x000107c615f0(uVar2);
      func_0x000107c61170(lVar6);
      func_0x000107c5cd5c(uVar2);
      func_0x000107c615e8(uVar2);
    }
    func_0x000107c61170(param_1);
    func_0x000107c61170(lVar8);
  }
  return;
}



/* Entry: 1018c6094; end: 1018c60e3;  */

void FUN_1018c6094(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  (*pcVar1)(param_2);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1018c60e4; end: 1018c6133; -[AdCompositeAdSource track:] */

/* WARNING: Possible PIC construction at 0x0001018c611c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018c6120) */

void FUN_1018c60e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x0001018c5cbc(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1018c6134; end: 1018c6207;  */

/* WARNING: Possible PIC construction at 0x0001018c618c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018c6190) */
/* WARNING: Removing unreachable block (ram,0x0001018c61f4) */
/* WARNING: Removing unreachable block (ram,0x0001018c61a4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018c6134(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112dcf000);
  func_0x000107c615f0(uVar1);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c3d2d4(uVar1);
  func_0x000107c615e8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1018c6208; end: 1018c6263; -[AdCompositeAdSource adExpired:] */

void FUN_1018c6208(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_1018c6134(param_3,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1018c6264; end: 1018c62bb; -[AdCompositeAdSource tearDown] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018c6264(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112dcf000);
  func_0x000107c61174();
  func_0x000107c5c7a8(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112dcf008);
  func_0x000107c615f0(uVar1);
  func_0x000107c5c7a8();
  func_0x000107c615e8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1018c62bc; end: 1018c631b; -[AdCompositeAdSource init] */

void FUN_1018c62bc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCAdDataServiceSwift.AdCompositeAdSource",0x28,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1018c62e8);
  (*pcVar1)();
}



/* Entry: 1018c631c; end: 1018c6373; -[AdCompositeAdSource .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001018c6358: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018c635c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018c631c(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112dcf000));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112dcf008));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112dcf010));
  return;
}



/* Entry: 1018c6374; end: 1018c6393;  */

void FUN_1018c6374(void)

{
  func_0x000107c61168(&PTR_PTR_1127ea378);
  return;
}



/* Entry: 1018c6394; end: 1018c63fb;  */

void FUN_1018c6394(undefined8 param_1,ulong param_2)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_2 >> 0x3c < 0xf) {
    func_0x000107c5ee20();
  }
  else {
    param_1 = 0;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1018c63fc; end: 1018c6757;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018c63fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18)

{
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112dcf050) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112dcf058) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112dcf060) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112dcf068) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112dcf070) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112dcf078) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112dcf080) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112dcf088) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112dcf090) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112dcf098) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_112dcf0a0) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_112dcf0a8) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_112dcf0b0) = param_13;
  *(undefined8 *)(unaff_x20 + _DAT_112dcf0b8) = param_14;
  *(undefined8 *)(unaff_x20 + _DAT_112dcf0c0) = param_15;
  *(undefined8 *)(unaff_x20 + _DAT_112dcf0c8) = param_16;
  *(undefined8 *)(unaff_x20 + _DAT_112dcf0d0) = param_17;
  *(undefined8 *)(unaff_x20 + _DAT_112dcf0d8) = param_18;
  func_0x000107c61154(auStack_78,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1018c6758; end: 1018c68e7; -[AdDataService initWithAdSource:persistedDataAdapter:deviceInfoProvider:applicationInfo:userAgent:networkManager:snapTokenManager:adsPreferencesProviderImpl:primayServeResponseDataStore:shadowServeResponseDataStore:pixelTrackingCookieManager:requestInfoProvider:primaryNetworkManager:shadowNetworkManager:appInstalledInfoProvider:adOperationalLoggingServices:adConfigProviderV2:adResponseProvider:] */

void FUN_1018c6758(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174();
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174();
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_14);
  func_0x000107c61174(param_15);
  func_0x000107c61174(param_16);
  func_0x000107c61174(param_17);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x0001018c65b0(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,
                      param_12,param_13,param_14,param_15,param_16,param_17,param_18,param_19,
                      param_20);
  return;
}



/* Entry: 1018c68e8; end: 1018c6a73;  */

/* WARNING: Possible PIC construction at 0x0001018c6940: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018c699c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018c69fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018c6944) */
/* WARNING: Removing unreachable block (ram,0x0001018c69a0) */
/* WARNING: Removing unreachable block (ram,0x0001018c69bc) */
/* WARNING: Removing unreachable block (ram,0x0001018c6970) */
/* WARNING: Removing unreachable block (ram,0x0001018c6a00) */
/* WARNING: Removing unreachable block (ram,0x0001018c6a04) */
/* WARNING: Removing unreachable block (ram,0x0001018c6a60) */
/* WARNING: Removing unreachable block (ram,0x0001018c6a20) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018c68e8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112dcf050);
  func_0x000107c615f0(uVar1);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c3d2d4(uVar1);
  func_0x000107c615e8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1018c6a74; end: 1018c6acf; -[AdDataService cleanupAd:] */

void FUN_1018c6a74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_1018c68e8(param_3,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1018c6ad0; end: 1018c6c83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018c6ad0(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined **ppuVar6;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112dcf050);
  if (param_2 == 0) {
    func_0x000107c615f0(uVar5);
    ppuVar6 = (undefined **)0x0;
  }
  else {
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    pcStack_80 = FUN_1018c5918;
    puStack_78 = &UNK_11040c798;
    ppuVar6 = &puStack_90;
    lStack_70 = param_2;
    uStack_68 = param_3;
    func_0x000107c60bc4(ppuVar6);
    uVar2 = uStack_68;
    func_0x000107c615f0(uVar5);
    func_0x000100cbdd7c(param_2,param_3);
    func_0x000107c61574(uVar2);
  }
  ppuVar3 = (undefined **)0x0;
  if (param_4 != 0) {
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    pcStack_80 = (code *)0x1018c5954;
    puStack_78 = &UNK_11040c770;
    ppuVar3 = &puStack_90;
    lStack_70 = param_4;
    uStack_68 = param_5;
    func_0x000107c60bc4(ppuVar3);
    uVar2 = uStack_68;
    func_0x000107c6157c(param_5);
    func_0x000107c61574(uVar2);
  }
  ppuVar4 = (undefined **)0x0;
  if (param_6 != 0) {
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    pcStack_80 = (code *)0x1018c63f4;
    puStack_78 = &UNK_11040c748;
    ppuVar4 = &puStack_90;
    lStack_70 = param_6;
    uStack_68 = param_7;
    func_0x000107c60bc4(ppuVar4);
    uVar2 = uStack_68;
    func_0x000107c6157c(param_7);
    func_0x000107c61574(uVar2);
  }
  func_0x000107c50304(uVar5);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c615e8(uVar5);
  return;
}



/* Entry: 1018c6c84; end: 1018c6c9f;  */

void FUN_1018c6c84(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1018c6ca0; end: 1018c6e03; -[AdDataService makeAdRequest:willMakeRequest:successBlock:failureBlock:] */

/* WARNING: Possible PIC construction at 0x0001018c6de0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018c6de4) */

void FUN_1018c6ca0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5,long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  if (param_4 == 0) {
    puVar3 = (undefined *)0x0;
    uVar1 = 0;
  }
  else {
    puVar3 = &UNK_11040c938;
    func_0x000107c613fc(&UNK_11040c938,0x18,7);
    *(long *)(puVar3 + 0x10) = param_4;
    uVar1 = 0x1018c7500;
  }
  if (param_5 == 0) {
    puVar5 = (undefined *)0x0;
    uVar2 = 0;
  }
  else {
    puVar5 = &UNK_11040c910;
    func_0x000107c613fc(&UNK_11040c910,0x18,7);
    *(long *)(puVar5 + 0x10) = param_5;
    uVar2 = 0x1018c7534;
  }
  if (param_6 == 0) {
    puVar6 = (undefined *)0x0;
    uVar4 = 0;
  }
  else {
    puVar6 = &UNK_11040c8e8;
    func_0x000107c613fc(&UNK_11040c8e8,0x18,7);
    *(long *)(puVar6 + 0x10) = param_6;
    uVar4 = 0x1018c74f8;
  }
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1018c6ad0(param_3,uVar1,puVar3,uVar2,puVar5,uVar4,puVar6);
  func_0x000100cbddb4(uVar4,puVar6);
  func_0x000100cbddb4(uVar2,puVar5);
  func_0x000100cbddb4(uVar1,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1018c6e04; end: 1018c6e07;  */

void FUN_1018c6e04(void)

{
  long unaff_x20;
  
  if (*(code **)(unaff_x20 + 0x10) != (code *)0x0) {
    (**(code **)(unaff_x20 + 0x10))();
  }
  return;
}



/* Entry: 1018c6e08; end: 1018c6e67;  */

void FUN_1018c6e08(long param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (param_2 != 0) {
    uVar3 = 0;
    func_0x0001047c0984(0);
    func_0x000107c5fc54(param_2,uVar3);
  }
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1018c6e68; end: 1018c6faf; -[AdDataService updateAdResponseList:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018c6e68(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar2 = &puStack_80;
  func_0x000107c60bc4();
  if (param_4 == 0) {
    puVar3 = (undefined *)0x0;
    pcVar4 = (code *)0x0;
  }
  else {
    puVar3 = &UNK_11040c8c0;
    func_0x000107c613fc(&UNK_11040c8c0,0x18,7);
    *(long *)(puVar3 + 0x10) = param_4;
    pcVar4 = FUN_1018c74f0;
  }
  uVar5 = *(undefined8 *)(param_1 + _DAT_112dcf090);
  puVar1 = &UNK_11040c870;
  func_0x000107c613fc(&UNK_11040c870,0x20,7);
  *(code **)(puVar1 + 0x10) = pcVar4;
  *(undefined **)(puVar1 + 0x18) = puVar3;
  uStack_60 = 0x1018c7530;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_1018c6e08;
  puStack_68 = &UNK_11040c888;
  puStack_58 = puVar1;
  func_0x000107c60bc4(&puStack_80);
  puVar1 = puStack_58;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000100cbdd7c(pcVar4,puVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c5d3c8(uVar5);
  func_0x000100cbddb4(pcVar4,puVar3);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1018c6fb0; end: 1018c6fcb; -[AdDataService serializedRequestWithMetadata:] */

void FUN_1018c6fb0(void)

{
  func_0x000107c5ee20(0,0xc000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1018c6fcc; end: 1018c71bf; -[AdDataService protoAdRequestWithMetadata:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018c6fcc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  func_0x000107c60bc4();
  puVar2 = &UNK_11040c820;
  func_0x000107c613fc(&UNK_11040c820,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_4;
  uVar4 = *(undefined8 *)(param_1 + _DAT_112dcf050);
  uStack_50 = 0x1018c7494;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_1018c5b18;
  puStack_58 = &UNK_11040c838;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c615f0(uVar4);
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c4f524(uVar4);
  func_0x000107c61170(param_3);
  func_0x000107c61574(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(uVar4);
  return;
}



/* Entry: 1018c71c0; end: 1018c726b; -[AdDataService initializeWithMetadata:completion:] */

/* WARNING: Possible PIC construction at 0x0001018c7250: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018c7254) */

void FUN_1018c71c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x000107c60bc4();
  if (param_4 == 0) {
    puVar1 = (undefined *)0x0;
    pcVar2 = (code *)0x0;
  }
  else {
    puVar1 = &UNK_11040c7f8;
    func_0x000107c613fc(&UNK_11040c7f8,0x18,7);
    *(long *)(puVar1 + 0x10) = param_4;
    pcVar2 = FUN_1018c748c;
  }
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x0001018c70e8(param_3,pcVar2,puVar1);
  func_0x000100cbddb4(pcVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1018c726c; end: 1018c727b; -[AdDataService trackSnapAd:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018c726c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c277930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112dcf050),PTR_s_track__11267b870);
  return;
}



/* Entry: 1018c727c; end: 1018c72d3; -[AdDataService tearDown] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018c727c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112dcf078);
  func_0x000107c61174();
  func_0x000107c3fa40(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112dcf050);
  func_0x000107c615f0(uVar1);
  func_0x000107c5c7a8();
  func_0x000107c615e8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1018c72d4; end: 1018c7333; -[AdDataService init] */

void FUN_1018c72d4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCAdDataServiceSwift.AdDataService",0x22,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1018c7300);
  (*pcVar1)();
}



/* Entry: 1018c7334; end: 1018c746b; -[AdDataService .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001018c7360: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018c7380: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018c73a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018c73c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018c73e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018c7400: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018c7420: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018c7440: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018c7424) */
/* WARNING: Removing unreachable block (ram,0x0001018c7404) */
/* WARNING: Removing unreachable block (ram,0x0001018c73e4) */
/* WARNING: Removing unreachable block (ram,0x0001018c73c4) */
/* WARNING: Removing unreachable block (ram,0x0001018c73a4) */
/* WARNING: Removing unreachable block (ram,0x0001018c7384) */
/* WARNING: Removing unreachable block (ram,0x0001018c7364) */
/* WARNING: Removing unreachable block (ram,0x0001018c7444) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018c7334(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112dcf050));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112dcf058));
  return;
}



/* Entry: 1018c746c; end: 1018c748b;  */

void FUN_1018c746c(void)

{
  func_0x000107c61168(&PTR_PTR_1127ea458);
  return;
}



/* Entry: 1018c748c; end: 1018c749b;  */

void FUN_1018c748c(uint param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001018c7550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))
            (*(long *)(unaff_x20 + 0x10),param_1 & 1,param_2,param_3);
  return;
}



/* Entry: 1018c749c; end: 1018c74c7;  */

void FUN_1018c749c(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1018c74c8; end: 1018c74ef;  */

void FUN_1018c74c8(void)

{
  long unaff_x20;
  
  if (*(code **)(unaff_x20 + 0x10) != (code *)0x0) {
    (**(code **)(unaff_x20 + 0x10))();
  }
  return;
}



/* Entry: 1018c74f0; end: 1018c7567;  */

void FUN_1018c74f0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if (param_1 != 0) {
    uVar1 = 0;
    func_0x0001047c0984(0);
    func_0x000107c5fc48(param_1,uVar1);
  }
  (**(code **)(lVar2 + 0x10))(lVar2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1018c7568; end: 1018c75b7;  */

void FUN_1018c7568(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = 0;
    func_0x0001047c0984(0);
    func_0x000107c5fc48(param_1,uVar1);
  }
  (**(code **)(param_2 + 0x10))(param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1018c75b8; end: 1018c75cb;  */

void FUN_1018c75b8(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001018c75c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x10))(param_2,param_1);
  return;
}



/* Entry: 1018c75cc; end: 1018c834b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1018c75cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined4 param_18,undefined4 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
             undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
             undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined1 auStack_78 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112dcf108) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112dcf110) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112dcf118) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112dcf120) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112dcf128) = param_20;
  *(undefined8 *)(unaff_x20 + _DAT_112dcf130) = param_21;
  *(undefined8 *)(unaff_x20 + _DAT_112dcf138) = param_22;
  puVar2 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_20);
  func_0x000107c615f0(param_21);
  func_0x000107c615f0(param_22);
  puVar1 = auStack_78;
  func_0x000107c61154(puVar1,puVar2);
  uVar8 = *(undefined8 *)(puVar1 + _DAT_112dcf120);
  *(undefined8 *)(puVar1 + _DAT_112dcf120) = param_5;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61170(uVar8);
  puVar2 = PTR_PTR_1126b8da8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c61174();
  uVar8 = param_7;
  func_0x000107c5c734();
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126b8db0;
  func_0x000107c610f8();
  func_0x000107c61174(param_3);
  func_0x000107c48370();
  func_0x000107c61170(param_3);
  func_0x000107c615e8(uVar8);
  uVar8 = *(undefined8 *)(puVar1 + _DAT_112dcf108);
  *(undefined **)(puVar1 + _DAT_112dcf108) = puVar3;
  func_0x000107c61174();
  func_0x000107c61170(uVar8);
  uVar8 = param_7;
  func_0x000107c5c734(param_7);
  func_0x000107c61180();
  func_0x000107c61170(param_7);
  puVar4 = PTR_PTR_1126b8db8;
  func_0x000107c610f8();
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c48374();
  func_0x000107c61170(param_3);
  func_0x000107c615e8(uVar8);
  uVar8 = *(undefined8 *)(puVar1 + _DAT_112dcf110);
  *(undefined **)(puVar1 + _DAT_112dcf110) = puVar4;
  func_0x000107c61170(uVar8);
  uVar5 = param_39;
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar7 = *(undefined8 *)(puVar1 + _DAT_112dcf128);
  puVar6 = PTR_PTR_1126aeea8;
  func_0x000107c610f8();
  func_0x000107c615f0(uVar7);
  func_0x000107c453e4();
  uVar8 = param_35;
  func_0x000107c5c734();
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126b8dc0;
  func_0x000107c610f8();
  func_0x000107c48378();
  func_0x000107c61170(param_2);
  func_0x000107c615e8(param_14);
  func_0x000107c615e8(param_16);
  func_0x000107c61170(param_17);
  func_0x000107c615e8(param_20);
  func_0x000107c615e8(param_21);
  func_0x000107c615e8(param_22);
  func_0x000107c61170(param_23);
  func_0x000107c615e8(param_24);
  func_0x000107c61170(param_26);
  func_0x000107c61170(param_27);
  func_0x000107c615e8(param_28);
  func_0x000107c61170(param_29);
  func_0x000107c61170(param_30);
  func_0x000107c61170(param_31);
  func_0x000107c615e8(param_32);
  func_0x000107c61170(param_33);
  func_0x000107c61170(param_35);
  func_0x000107c61170(param_39);
  func_0x000107c61170(param_40);
  func_0x000107c61170(param_41);
  func_0x000107c61170(param_43);
  func_0x000107c61170(param_44);
  func_0x000107c61170(param_45);
  func_0x000107c61170(param_46);
  func_0x000107c61170(param_47);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c615e8(uVar5);
  func_0x000107c61170(param_5);
  func_0x000107c615e8(param_12);
  func_0x000107c615e8(param_13);
  func_0x000107c61170(param_15);
  func_0x000107c615e8(param_25);
  func_0x000107c615e8(uVar7);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar6);
  func_0x000107c615e8(uVar8);
  func_0x000107c615e8(param_36);
  func_0x000107c615e8(param_8);
  func_0x000107c615e8(param_11);
  func_0x000107c61170(param_37);
  func_0x000107c61170(param_42);
  func_0x000107c615e8(param_9);
  func_0x000107c61170(param_10);
  func_0x000107c615e8(param_48);
  func_0x000107c61170(param_38);
  func_0x000107c61170(param_34);
  func_0x000107c61170(param_4);
  uVar8 = *(undefined8 *)(puVar1 + _DAT_112dcf118);
  *(undefined **)(puVar1 + _DAT_112dcf118) = puVar4;
  func_0x000107c61170(puVar1);
  func_0x000107c615e8(uVar8);
  return puVar1;
}



/* Entry: 1018c834c; end: 1018c873f; -[AdSource initWithNetworkManager:pixelTrackingCookieManager:requestInfoProvider:renditionSelector:serveResponseDataStore:deviceTargetingManager:configAdapter:adConfigProviderV2:readinessChecker:grapheneRegistry:appStartExperimentReader:persistedDataAdapter:commonMetricsManager:initMetricsManager:serveMetricsManager:trackMetricsManager:lifecycleTracker:isPrimary:snapTokenManager:adsPreferencesManager:adsCircumstanceEngineAdapter:appInstalledInfoProvider:onDeviceFeatureGatingProvider:multiAdPodMetricsManager:webviewMetricsValidator:appInstallMetricsValidator:appStoreInfoProvider:trackRequestProcessor:spectrumLogger:backgroundTaskProcessor:flipper:trackFunnelEventTracker:promotedStoryMetricsManager:browserPrivacyInfoManager:dpaConfigProvider:notificationPool:webBrowsingConfigProvider:adRenderDataParser:trackSeqNumProvider:valdiRuntimeProvider:adResponseProvider:userBlizzard:impressionBuilder:adCrashLogger:unifiedAdTrackValidator:javascriptFetcher:applicationLifecycleEvents:] */

void FUN_1018c834c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined1 param_20,
                  undefined4 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
                  undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
                  undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
                  undefined8 param_49)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c615f0(param_10);
  func_0x000107c615f0(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c615f0(param_13);
  func_0x000107c615f0(param_14);
  func_0x000107c615f0(param_15);
  func_0x000107c615f0(param_16);
  func_0x000107c61174(param_17);
  func_0x000107c615f0(param_18);
  func_0x000107c61174(param_19);
  func_0x000107c615f0(param_22);
  func_0x000107c615f0(param_23);
  func_0x000107c615f0(param_24);
  func_0x000107c61174(param_25);
  func_0x000107c615f0(param_26);
  func_0x000107c615f0(param_27);
  func_0x000107c61174(param_28);
  func_0x000107c61174(param_29);
  func_0x000107c615f0(param_30);
  func_0x000107c61174(param_31);
  func_0x000107c61174(param_32);
  func_0x000107c61174(param_33);
  func_0x000107c615f0(param_34);
  func_0x000107c61174(param_35);
  func_0x000107c61174(param_36);
  func_0x000107c61174(param_37);
  func_0x000107c615f0(param_38);
  func_0x000107c61174(param_39);
  func_0x000107c61174(param_40);
  func_0x000107c61174(param_41);
  func_0x000107c61174(param_42);
  func_0x000107c61174(param_43);
  func_0x000107c61174(param_44);
  func_0x000107c61174(param_45);
  func_0x000107c61174(param_46);
  func_0x000107c61174(param_47);
  func_0x000107c61174(param_48);
  func_0x000107c61174(param_49);
  func_0x000107c615f0();
  func_0x0001018c7c8c(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,
                      param_12,param_13,param_14,param_15,param_16,param_17,param_18,param_19,
                      param_20);
  return;
}



/* Entry: 1018c8740; end: 1018c881b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018c8740(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined **ppuVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  ppuVar3 = &puStack_70;
  lVar2 = *(long *)(unaff_x20 + _DAT_112dcf108);
  if (lVar2 != 0) {
    if (param_2 == 0) {
      func_0x000107c61174(lVar2);
      ppuVar3 = (undefined **)0x0;
    }
    else {
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0x42000000;
      pcStack_60 = FUN_1018c5440;
      puStack_58 = &UNK_11040c950;
      lStack_50 = param_2;
      uStack_48 = param_3;
      func_0x000107c60bc4(&puStack_70);
      uVar1 = uStack_48;
      func_0x000107c61174(lVar2);
      func_0x0001018c8838(param_2,param_3);
      func_0x000107c61574(uVar1);
    }
    func_0x000107c49690(lVar2);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 1018c881c; end: 1018c8847;  */

void FUN_1018c881c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1018c8848; end: 1018c88f3; -[AdSource initializeWithMetadata:completion:] */

/* WARNING: Possible PIC construction at 0x0001018c88d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018c88dc) */

void FUN_1018c8848(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c60bc4();
  if (param_4 == 0) {
    puVar1 = (undefined *)0x0;
    uVar2 = 0;
  }
  else {
    puVar1 = &UNK_11040cac8;
    func_0x000107c613fc(&UNK_11040cac8,0x18,7);
    *(long *)(puVar1 + 0x10) = param_4;
    uVar2 = 0x1018c9010;
  }
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1018c8740(param_3,uVar2,puVar1);
  func_0x000100cbde00(uVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1018c88f4; end: 1018c8b07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018c88f4(long param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  long param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  long lVar7;
  long unaff_x20;
  long lVar8;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  lVar7 = *(long *)(unaff_x20 + _DAT_112dcf118);
  if (lVar7 != 0) {
    lVar8 = *(long *)(unaff_x20 + _DAT_112dcf108);
    if (lVar8 == 0) {
      func_0x000107c615f0(lVar7);
      lVar8 = 0;
    }
    else {
      func_0x000107c615f0(lVar7);
      func_0x000107c3d4c4(lVar8);
      func_0x000107c61180();
    }
    func_0x000108494d70(param_1,lVar8);
    func_0x000107c61180();
    func_0x000107c61170(lVar8);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    if (param_1 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1018c8b08);
      (*pcVar3)();
    }
    if (param_2 == 0) {
      ppuVar4 = (undefined **)0x0;
    }
    else {
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      pcStack_80 = FUN_1018c5918;
      puStack_78 = &UNK_11040c9c8;
      ppuVar4 = &puStack_90;
      lStack_70 = param_2;
      uStack_68 = param_3;
      func_0x000107c60bc4(ppuVar4);
      uVar2 = uStack_68;
      func_0x000107c6157c(param_3);
      func_0x000107c61574(uVar2);
    }
    ppuVar5 = (undefined **)0x0;
    if (param_4 != 0) {
      puStack_90 = puVar1;
      uStack_88 = 0x42000000;
      pcStack_80 = (code *)0x1018c5954;
      puStack_78 = &UNK_11040c9a0;
      ppuVar5 = &puStack_90;
      lStack_70 = param_4;
      uStack_68 = param_5;
      func_0x000107c60bc4(ppuVar5);
      uVar2 = uStack_68;
      func_0x000107c6157c(param_5);
      func_0x000107c61574(uVar2);
    }
    ppuVar6 = (undefined **)0x0;
    if (param_6 != 0) {
      puStack_90 = puVar1;
      uStack_88 = 0x42000000;
      pcStack_80 = (code *)0x1018c63f4;
      puStack_78 = &UNK_11040c978;
      ppuVar6 = &puStack_90;
      lStack_70 = param_6;
      uStack_68 = param_7;
      func_0x000107c60bc4(ppuVar6);
      uVar2 = uStack_68;
      func_0x000107c6157c(param_7);
      func_0x000107c61574(uVar2);
    }
    func_0x000107c4c1a8(lVar7);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c615e8(lVar7);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1018c8b08; end: 1018c8c6b; -[AdSource request:willMakeRequest:successBlock:failureBlock:] */

/* WARNING: Possible PIC construction at 0x0001018c8c48: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018c8c4c) */

void FUN_1018c8b08(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5,long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  if (param_4 == 0) {
    puVar3 = (undefined *)0x0;
    uVar1 = 0;
  }
  else {
    puVar3 = &UNK_11040caa0;
    func_0x000107c613fc(&UNK_11040caa0,0x18,7);
    *(long *)(puVar3 + 0x10) = param_4;
    uVar1 = 0x1018c9000;
  }
  if (param_5 == 0) {
    puVar5 = (undefined *)0x0;
    uVar2 = 0;
  }
  else {
    puVar5 = &UNK_11040ca78;
    func_0x000107c613fc(&UNK_11040ca78,0x18,7);
    *(long *)(puVar5 + 0x10) = param_5;
    uVar2 = 0x1018c8ff8;
  }
  if (param_6 == 0) {
    puVar6 = (undefined *)0x0;
    uVar4 = 0;
  }
  else {
    puVar6 = &UNK_11040ca50;
    func_0x000107c613fc(&UNK_11040ca50,0x18,7);
    *(long *)(puVar6 + 0x10) = param_6;
    uVar4 = 0x1018c8fe8;
  }
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1018c88f4(param_3,uVar1,puVar3,uVar2,puVar5,uVar4,puVar6);
  func_0x000100cbde00(uVar4,puVar6);
  func_0x000100cbde00(uVar2,puVar5);
  func_0x000100cbde00(uVar1,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1018c8c6c; end: 1018c8d2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018c8c6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  long lVar3;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  ppuVar2 = &puStack_70;
  lVar3 = *(long *)(unaff_x20 + _DAT_112dcf118);
  if (lVar3 != 0) {
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    pcStack_60 = FUN_1018c5b18;
    puStack_58 = &UNK_11040c9f0;
    uStack_50 = param_2;
    uStack_48 = param_3;
    func_0x000107c60bc4(&puStack_70);
    uVar1 = uStack_48;
    func_0x000107c615f0(lVar3);
    func_0x000107c6157c(param_3);
    func_0x000107c61574(uVar1);
    func_0x000107c4f524(lVar3);
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c615e8(lVar3);
  }
  return;
}



/* Entry: 1018c8d2c; end: 1018c8dbb; -[AdSource protoAdRequestWithMetadata:completion:] */

void FUN_1018c8d2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x000107c60bc4();
  puVar1 = &UNK_11040ca28;
  func_0x000107c613fc(&UNK_11040ca28,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1018c8c6c(param_3,FUN_1018c8fe0,puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1018c8dbc; end: 1018c8dd3; -[AdSource track:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018c8dbc(long param_1)

{
  if (*(long *)(param_1 + _DAT_112dcf110) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c278890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + _DAT_112dcf110),PTR_s_trackSnapAd__11267bc48);
    return;
  }
  return;
}



/* Entry: 1018c8dd4; end: 1018c8e63;  */

/* WARNING: Possible PIC construction at 0x0001018c8e3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018c8e40) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018c8dd4(ulong param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  
  uVar1 = param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar1 = param_2 >> 0x38 & 0xf;
  }
  if ((uVar1 != 0) && (lVar2 = *(long *)(unaff_x20 + _DAT_112dcf120), lVar2 != 0)) {
    func_0x000107c61174(lVar2);
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c4fe5c(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 1018c8e64; end: 1018c8ebf; -[AdSource adExpired:] */

void FUN_1018c8e64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_1018c8dd4(param_3,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1018c8ec0; end: 1018c8ed7; -[AdSource tearDown] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018c8ec0(long param_1)

{
  if (*(long *)(param_1 + _DAT_112dcf108) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c26ab90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + _DAT_112dcf108),PTR_s_tearDown_112678508);
    return;
  }
  return;
}



/* Entry: 1018c8ed8; end: 1018c8f37; -[AdSource init] */

void FUN_1018c8ed8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCAdDataServiceSwift.AdSource",0x1d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1018c8f04);
  (*pcVar1)();
}



/* Entry: 1018c8f38; end: 1018c8fbf; -[AdSource .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001018c8f74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018c8f94: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018c8f78) */
/* WARNING: Removing unreachable block (ram,0x0001018c8f98) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018c8f38(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112dcf108));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112dcf110));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112dcf118));
  return;
}



/* Entry: 1018c8fc0; end: 1018c8fdf;  */

void FUN_1018c8fc0(void)

{
  func_0x000107c61168(&PTR_PTR_1127ea5a0);
  return;
}



/* Entry: 1018c8fe0; end: 1018c904b;  */

void FUN_1018c8fe0(undefined8 param_1,ulong param_2)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_2 >> 0x3c < 0xf) {
    func_0x000107c5ee20();
  }
  else {
    param_1 = 0;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1018c904c; end: 1018c9f4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1018c904c(long param_1)

{
  undefined1 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  long *plVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  long alStack_2c0 [17];
  undefined1 auStack_238 [8];
  long alStack_230 [6];
  undefined1 auStack_200 [8];
  long lStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  undefined8 uStack_1c8;
  undefined4 uStack_1bc;
  ulong uStack_1b8;
  long lStack_1b0;
  ulong uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  undefined8 uStack_190;
  long lStack_188;
  undefined8 uStack_180;
  long lStack_178;
  long *plStack_170;
  long lStack_168;
  long *plStack_160;
  long lStack_158;
  undefined *puStack_150;
  long *plStack_148;
  long lStack_140;
  long lStack_138;
  undefined1 *puStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long *plStack_100;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  
  lVar10 = 0x112dbe418;
  func_0x0001000285a8(0x112dbe418,&UNK_10d990420);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = 0x112d3bc20;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
  lVar11 = (long)(auStack_200 + -extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar11 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar12 - extraout_x12_00;
  lVar10 = param_1;
  func_0x000107c49924();
  func_0x000107c61180();
  if (lVar10 == 0) {
                    /* WARNING: Does not return */
    pcVar14 = (code *)SoftwareBreakpoint(1,0x1018c9f40);
    (*pcVar14)();
  }
  lVar2 = lVar10;
  func_0x000107c43638();
  func_0x000107c61180();
  func_0x000107c61170(lVar10);
  if (lVar2 == 0) {
    lStack_d8 = 0;
    lStack_e0 = 0;
    lStack_c8 = 0;
    uStack_d0 = 0;
  }
  else {
    func_0x000107c60234(&lStack_e0,lVar2);
    func_0x000107c615e8(lVar2);
  }
  lStack_b8 = lStack_d8;
  lStack_c0 = lStack_e0;
  lStack_a8 = lStack_c8;
  uStack_b0 = uStack_d0;
  if (lStack_c8 == 0) {
    func_0x0001018cb138(&lStack_c0,0x112d387f8,&UNK_10d902650);
LAB_1018c923c:
    lVar10 = 0;
    lStack_b8 = 0;
    lStack_c0 = 0;
    lStack_a8 = 0;
    uStack_b0 = 0;
  }
  else {
    uVar3 = 0;
    func_0x0001018cb178(0,0x112dcf1c0,&PTR_PTR_1126a7d20);
    puVar6 = PTR___sypN_11034f1a8;
    plVar4 = &lStack_e8;
    func_0x000107c6147c(plVar4,&lStack_c0,PTR___sypN_11034f1a8 + 8,uVar3,6);
    if ((((ulong)plVar4 & 1) == 0) || (lStack_e8 == 0)) goto LAB_1018c923c;
    lVar10 = lStack_e8;
    func_0x000107c4a7d8();
    func_0x000107c61180();
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar14 = (code *)SoftwareBreakpoint(1,0x1018c9f44);
      (*pcVar14)();
    }
    lVar2 = lVar10;
    func_0x000107c43638();
    func_0x000107c61180();
    func_0x000107c61170(lVar10);
    if (lVar2 == 0) {
      lStack_d8 = 0;
      lStack_e0 = 0;
      lStack_c8 = 0;
      uStack_d0 = 0;
    }
    else {
      func_0x000107c60234(&lStack_e0,lVar2);
      func_0x000107c615e8(lVar2);
    }
    lStack_b8 = lStack_d8;
    lStack_c0 = lStack_e0;
    lStack_a8 = lStack_c8;
    uStack_b0 = uStack_d0;
    lVar10 = lStack_e8;
    if (lStack_c8 != 0) {
      uVar3 = 0;
      func_0x0001018cb178(0,0x112dcf1b8,&PTR_PTR_1126e05f0);
      plVar18 = &lStack_e0;
      plVar4 = &lStack_c0;
      func_0x000107c6147c(plVar18,plVar4,puVar6 + 8,uVar3,6);
      lVar2 = lStack_e0;
      if (((ulong)plVar18 & 1) == 0) goto LAB_1018c9264;
      lVar16 = lStack_e0;
      func_0x000107c3d3f8();
      func_0x000107c61180();
      if (lVar16 == 0) {
        func_0x000107c61170(lVar2);
        goto LAB_1018c9264;
      }
      lVar10 = lVar16;
      puStack_130 = auStack_200 + -extraout_x8;
      func_0x000107c5ee30();
      plVar18 = plVar4;
      func_0x000107c61170(lVar16);
      lVar16 = lVar2;
      func_0x000107c51f70();
      func_0x000107c61180();
      lStack_110 = lVar10;
      plStack_100 = plVar4;
      if (lVar16 == 0) {
        lVar10 = 0;
      }
      else {
        lVar5 = lVar16;
        func_0x000107c5ee30();
        func_0x000107c61170(lVar16);
        lVar10 = lVar5;
        func_0x000107c5ee20(lVar5,plVar18);
        plVar4 = plStack_100;
        func_0x00010006c090(lVar5);
      }
      lVar16 = lVar10;
      func_0x000107c30944();
      func_0x000107c61180();
      func_0x000107c61170(lVar10);
      if (lVar16 == 0) {
        func_0x000107c61170(lVar2);
        func_0x000107c61170(lStack_e8);
        func_0x00010006c090(lStack_110,plVar4);
        return 0;
      }
      lStack_138 = lVar16;
      func_0x000107c3ac54();
      func_0x000107c61180();
      lVar10 = lVar16;
      func_0x000107c5faec();
      plStack_148 = plVar18;
      lStack_140 = lVar10;
      func_0x000107c61170(lVar16);
      lVar10 = lVar2;
      func_0x000107c3d358();
      func_0x000107c61180();
      if (lVar10 == 0) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x1018c9f48);
        (*pcVar14)();
      }
      puVar6 = PTR_PTR_1126afec0;
      func_0x000107c61168();
      lVar16 = lVar10;
      func_0x000107c3d360(lVar10);
      func_0x000107c61170(lVar10);
      dVar19 = (double)lVar16;
      func_0x000107c51b38(dVar19,puVar6);
      lVar10 = lVar2;
      func_0x000107c3d358();
      func_0x000107c61180();
      if (lVar10 == 0) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x1018c9f4c);
        (*pcVar14)();
      }
      lVar16 = lVar10;
      func_0x000107c3d354();
      func_0x000107c61170(lVar10);
      dVar20 = (double)lVar16;
      puStack_150 = puVar6;
      func_0x000107c51b38(dVar20,puVar6);
      dVar21 = dVar20;
      func_0x000107c427b0();
      func_0x000107c61180();
      plVar4 = plVar18;
      if (param_1 == 0) {
LAB_1018c94c0:
        lVar16 = 0;
        plVar18 = (long *)0x0;
      }
      else {
        lVar10 = param_1;
        func_0x000107c3e688();
        func_0x000107c61180();
        func_0x000107c61170(param_1);
        plVar4 = plVar18;
        if (lVar10 == 0) goto LAB_1018c94c0;
        lVar16 = lVar10;
        func_0x000107c5faec();
        plVar4 = plVar18;
        func_0x000107c61170(lVar10);
      }
      lVar10 = lVar2;
      func_0x000107c4278c();
      func_0x000107c61180();
      if (lVar10 == 0) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x1018c9f50);
        (*pcVar14)();
      }
      lVar5 = lVar10;
      func_0x000107c3e688();
      func_0x000107c61180();
      func_0x000107c61170(lVar10);
      if (lVar5 == 0) {
        lStack_168 = 0;
        plStack_170 = (long *)0x0;
      }
      else {
        lVar10 = lVar5;
        func_0x000107c5faec();
        plStack_170 = plVar4;
        lStack_168 = lVar10;
        func_0x000107c61170(lVar5);
      }
      lVar10 = lStack_e8;
      plStack_160 = plVar18;
      lStack_158 = lVar16;
      func_0x000107c50374();
      func_0x000107c61180();
      if (lVar10 == 0) {
        lVar10 = 0;
      }
      else {
        lVar16 = lVar10;
        func_0x000107c5ee30();
        func_0x000107c61170(lVar10);
        lVar10 = lVar16;
        func_0x000107c5ee20(lVar16,plVar4);
        func_0x00010006c090(lVar16,plVar4);
      }
      lVar16 = lVar10;
      func_0x000107c30944();
      func_0x000107c61180();
      func_0x000107c61170(lVar10);
      lVar10 = lVar2;
      func_0x000107c4e79c();
      func_0x000107c61180();
      if (lVar10 == 0) {
        lVar10 = 0;
      }
      else {
        lVar5 = lVar10;
        func_0x000107c5ee30();
        func_0x000107c61170(lVar10);
        lVar10 = lVar5;
        func_0x000107c5ee20(lVar5,plVar4);
        func_0x00010006c090(lVar5,plVar4);
      }
      lVar5 = lVar10;
      func_0x000107c30944();
      func_0x000107c61180();
      func_0x000107c61170(lVar10);
      func_0x000107c61174();
      lVar10 = lVar2;
      FUN_1018ca654();
      lStack_178 = lVar10;
      func_0x000107c61170(lVar2);
      func_0x00010481c348(0);
      uVar3 = 0;
      func_0x000104759828(0,0,0xc,0,0);
      uStack_180 = uVar3;
      func_0x0001000d224c(&lStack_c0);
      lVar10 = lStack_c0;
      uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112dcf178);
      lVar8 = lStack_c0;
      func_0x0001063fa50c();
      func_0x000107c61180();
      lStack_118 = lVar8;
      func_0x000107c615e8(lVar10);
      lVar10 = lVar2;
      func_0x000107c44afc();
      lStack_108 = 0;
      lStack_128 = lVar5;
      lStack_120 = lVar16;
      if ((int)lVar10 != 0) {
        lVar10 = lVar2;
        func_0x000107c5b0ac();
        func_0x000107c61180();
        lVar16 = ((undefined8 *)(lStack_118 + _DAT_113090f28))[1];
        if (lVar16 == 0) {
          uVar15 = 0;
        }
        else {
          uVar15 = *(undefined8 *)(lStack_118 + _DAT_113090f28);
          func_0x000107c61434(lVar16);
          func_0x000107c5fadc(uVar15,lVar16);
          func_0x000107c6142c(lVar16);
        }
        lVar16 = ((undefined8 *)(lStack_118 + _DAT_113090f30))[1];
        if (lVar16 == 0) {
          uVar17 = 0;
        }
        else {
          uVar17 = *(undefined8 *)(lStack_118 + _DAT_113090f30);
          func_0x000107c61434(lVar16);
          func_0x000107c5fadc(uVar17,lVar16);
          func_0x000107c6142c(lVar16);
        }
        lVar16 = lStack_120;
        lVar5 = lVar10;
        uVar3 = uVar15;
        func_0x0001084c1360(lVar10,uVar15,uVar17);
        func_0x000107c61180();
        lStack_108 = lVar5;
        func_0x000107c61170(lVar10);
        func_0x000107c61170(uVar15);
        func_0x000107c61170(uVar17);
      }
      lVar10 = lStack_128;
      if (lVar16 == 0) {
        lStack_188 = 0;
        uStack_190 = 0;
      }
      else {
        func_0x000107c3ac54();
        func_0x000107c61180();
        lVar5 = lVar16;
        func_0x000107c5faec();
        uStack_190 = uVar3;
        lStack_188 = lVar5;
        func_0x000107c61170(lVar16);
      }
      if (lVar10 == 0) {
        lStack_198 = 0;
        uStack_1a0 = 0;
      }
      else {
        func_0x000107c3ac54();
        func_0x000107c61180();
        lVar16 = lVar10;
        func_0x000107c5faec();
        uStack_1a0 = uVar3;
        lStack_198 = lVar16;
        func_0x000107c61170(lVar10);
      }
      lVar10 = lVar2;
      func_0x000107c3d4d0();
      func_0x000107c61180();
      if (lVar10 == 0) {
        lVar10 = 0;
      }
      else {
        lVar16 = lVar10;
        func_0x000107c5ee30();
        func_0x000107c61170(lVar10);
        lVar10 = lVar16;
        func_0x000107c5ee20(lVar16,uVar3);
        func_0x00010006c090(lVar16,uVar3);
      }
      lVar16 = lVar10;
      func_0x000107c30944();
      func_0x000107c61180();
      func_0x000107c61170(lVar10);
      if (lVar16 != 0) {
        func_0x000107c5eeb8(lVar13,lVar16);
        func_0x000107c61170(lVar16);
      }
      uVar9 = (ulong)(lVar16 == 0);
      lVar16 = 0;
      func_0x000107c5eec8();
      pcVar14 = *(code **)(*(long *)(lVar16 + -8) + 0x38);
      (*pcVar14)(lVar13,uVar9,1,lVar16);
      lVar10 = lVar2;
      func_0x000107c3f33c();
      func_0x000107c61180();
      if (lVar10 == 0) {
        lVar10 = 0;
      }
      else {
        lVar5 = lVar10;
        func_0x000107c5ee30();
        func_0x000107c61170(lVar10);
        lVar10 = lVar5;
        func_0x000107c5ee20(lVar5,uVar9);
        func_0x00010006c090(lVar5,uVar9);
      }
      lVar5 = lVar10;
      func_0x000107c30944();
      func_0x000107c61180();
      func_0x000107c61170(lVar10);
      if (lVar5 != 0) {
        func_0x000107c5eeb8(lVar12,lVar5);
        func_0x000107c61170(lVar5);
      }
      uVar9 = (ulong)(lVar5 == 0);
      (*pcVar14)(lVar12,uVar9,1,lVar16);
      lVar10 = lVar2;
      func_0x000107c3d1f4();
      func_0x000107c61180();
      if (lVar10 == 0) {
        lVar10 = 0;
      }
      else {
        lVar5 = lVar10;
        func_0x000107c5ee30();
        func_0x000107c61170(lVar10);
        lVar10 = lVar5;
        func_0x000107c5ee20(lVar5,uVar9);
        func_0x00010006c090(lVar5,uVar9);
      }
      puVar6 = puStack_150;
      lVar5 = lVar10;
      func_0x000107c30944();
      func_0x000107c61180();
      func_0x000107c61170(lVar10);
      if (lVar5 != 0) {
        func_0x000107c5eeb8(lVar11,lVar5);
        func_0x000107c61170(lVar5);
      }
      uVar9 = (ulong)(lVar5 == 0);
      (*pcVar14)(lVar11,uVar9,1,lVar16);
      lVar10 = lStack_e8;
      func_0x000107c4f54c();
      func_0x000107c61180();
      if (lVar10 == 0) {
        puStack_150 = (undefined *)0x0;
        uStack_1a8 = 0;
      }
      else {
        lVar16 = lVar10;
        func_0x000107c5faec();
        uStack_1a8 = uVar9;
        puStack_150 = (undefined *)lVar16;
        func_0x000107c61170(lVar10);
      }
      plVar4 = plStack_100;
      lVar10 = lVar2;
      func_0x000107c5df10();
      func_0x000107c61180();
      if (lVar10 == 0) {
        lStack_1b0 = 0;
        uStack_1b8 = 0xf000000000000000;
      }
      else {
        lVar16 = lVar10;
        func_0x000107c5ee30();
        uStack_1b8 = uVar9;
        lStack_1b0 = lVar16;
        func_0x000107c61170(lVar10);
      }
      lVar8 = lVar2;
      func_0x000107c51f78(lVar2);
      lVar10 = lVar2;
      func_0x000107c3d4e0();
      uStack_1bc = (undefined4)lVar10;
      lVar10 = lStack_108;
      func_0x000107c61174();
      lStack_1e0 = lVar10;
      func_0x000107c4e078(lVar2);
      lVar10 = lStack_178;
      lVar16 = lStack_178;
      dVar22 = dVar21;
      func_0x000107c61174();
      lVar5 = lVar2;
      lStack_1e8 = lVar16;
      func_0x000107c4dfc4();
      func_0x0001084c72b4();
      lVar16 = lVar2;
      lStack_1d0 = lVar5;
      func_0x000107c3ec7c();
      func_0x0001084c72c4();
      lStack_1d8 = lVar16;
      func_0x000107c41018(puVar6);
      uVar3 = 0;
      func_0x000103de92d8();
      func_0x000107c610f8();
      lVar5 = lStack_110;
      uStack_1c8 = uVar3;
      func_0x00010006c00c(lStack_110,plVar4);
      plVar18 = plStack_148;
      func_0x000107c61434(plStack_148);
      uVar3 = uStack_180;
      uVar15 = uStack_180;
      func_0x000107c61174();
      lVar16 = lStack_118;
      lVar7 = lStack_118;
      uStack_1f0 = uVar15;
      func_0x000107c61174();
      lStack_1f8 = lVar7;
      *(undefined8 *)(lVar13 + -0x20) = 0;
      *(undefined8 *)(lVar13 + -0x18) = 0;
      *(long *)(lVar13 + -8) = lStack_1d8;
      *(long *)(lVar13 + -0x10) = lStack_1d0;
      *(long *)(lVar13 + -0x28) = lVar10;
      *(long *)(lVar13 + -0x30) = lStack_108;
      *(char *)(lVar13 + -0x38) = (char)uStack_1bc;
      *(undefined8 *)(lVar13 + -0x40) = 0;
      *(ulong *)(lVar13 + -0x48) = uStack_1b8;
      *(long *)(lVar13 + -0x50) = lStack_1b0;
      *(ulong *)(lVar13 + -0x58) = uStack_1a8;
      *(undefined **)(lVar13 + -0x60) = puStack_150;
      *(long **)(lVar13 + -0x68) = plStack_170;
      *(long *)(lVar13 + -0x70) = lStack_168;
      *(long **)(lVar13 + -0x78) = plStack_160;
      lVar10 = lStack_158;
      *(long *)(lVar13 + -0x88) = lVar16;
      *(long *)(lVar13 + -0x80) = lVar10;
      *(undefined8 *)(lVar13 + -0x98) = 0x16;
      *(undefined8 *)(lVar13 + -0x90) = uVar3;
      *(long *)(lVar13 + -0xa8) = lVar12;
      *(long *)(lVar13 + -0xa0) = lVar11;
      *(long *)(lVar13 + -0xb0) = lVar13;
      *(undefined8 *)(lVar13 + -0xb8) = uStack_1a0;
      *(long *)(lVar13 + -0xc0) = lStack_198;
      lVar11 = lVar5;
      func_0x000103de600c(dVar19,dVar19,dVar20,(double)lVar8,dVar21,dVar22,lVar5,plVar4,lStack_140,
                          plVar18,lStack_140,plVar18,lStack_188,uStack_190);
      func_0x000107c3d2c0();
      func_0x0001000d224c(&lStack_c0);
      lVar10 = lStack_c0;
      lVar12 = lStack_c0;
      func_0x000107c4e368();
      func_0x000107c61180();
      func_0x000107c615e8(lVar10);
      if (lVar12 != 0) {
        lVar13 = lVar12;
        func_0x000107c5e41c();
        func_0x000107c61180();
        lStack_108 = lVar13;
        func_0x000107c61170(lVar12);
        func_0x000107c61174(lVar13);
        func_0x0001000d224c(&lStack_c0);
        lVar12 = lStack_b8;
        lVar10 = lStack_c0;
        lVar16 = lStack_c0;
        func_0x000107c614f0(lStack_c0);
        func_0x000107c61174(lVar13);
        puVar1 = puStack_130;
        func_0x0001047b6fb0(puStack_130);
        lVar8 = 0;
        func_0x000100b91d00();
        (**(code **)(*(long *)(lVar8 + -8) + 0x38))(puVar1,0,1,lVar8);
        (**(code **)(lVar12 + 0x20))(puVar1,lVar16,lVar12);
        func_0x000107c61170(uStack_1f0);
        func_0x000107c61170(lStack_1f8);
        func_0x000107c61170(lVar13);
        func_0x000107c61170(lVar11);
        func_0x000107c615e8(lVar10);
        func_0x00010006c090(lVar5,plVar4);
        func_0x000107c61170(lStack_e8);
        func_0x000107c61170(lStack_138);
        func_0x000107c61170(lVar2);
        func_0x000107c61170(lStack_120);
        func_0x000107c61170(lStack_128);
        func_0x000107c61170(lStack_1e0);
        func_0x000107c61170(lStack_1e8);
        func_0x0001018cb138(puVar1,0x112dbe418,&UNK_10d990420);
        return lStack_108;
      }
      func_0x000107c61170(uStack_1f0);
      func_0x000107c61170(lStack_1f8);
      func_0x000107c61170(lVar11);
      func_0x00010006c090(lVar5,plVar4);
      func_0x000107c61170(lStack_1e8);
      func_0x000107c61170(lStack_e8);
      func_0x000107c61170(lStack_138);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lStack_120);
      func_0x000107c61170(lStack_128);
      lVar10 = lStack_1e0;
      goto LAB_1018c9264;
    }
  }
  func_0x0001018cb138(&lStack_c0,0x112d387f8,&UNK_10d902650);
LAB_1018c9264:
  func_0x000107c61170(lVar10);
  return 0;
}



/* Entry: 1018c9f50; end: 1018c9fab; -[_TtC44SponsoredSnapAdResponseParserServiceProvider29SponsoredSnapAdResponseParser parseAdResponseProtoWithAdResponse:] */

void FUN_1018c9f50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1018c904c(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1018c9fac; end: 1018ca24b;  */

/* WARNING: Removing unreachable block (ram,0x0001018ca0a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1018c9fac(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar9;
  long unaff_x20;
  long lVar10;
  long lVar11;
  undefined1 *puVar12;
  undefined1 auStack_90 [8];
  undefined8 uStack_78;
  long lStack_70;
  
  lVar1 = 0x112dbe418;
  func_0x0001000285a8(0x112dbe418,&UNK_10d990420);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar12 = auStack_90 + -extraout_x8;
  lVar2 = 0;
  func_0x000100b91d00();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar11 = (long)puVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar11 - extraout_x12;
  func_0x000107c610f8(PTR_PTR_1126b8de8);
  func_0x00010006c00c(param_1,param_2);
  lVar1 = param_1;
  FUN_1018cab40(param_1,param_2);
  func_0x00010006c090(param_1,param_2);
  uVar3 = *(ulong *)(unaff_x20 + _DAT_112dcf178);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (uVar3 != 0) {
    lVar8 = -0x7ffffffef1042d80;
    uVar4 = 0xd000000000000022;
    func_0x000107c5fadc(0xd000000000000022);
    uVar5 = uVar3;
    func_0x000107c3ebdc();
    func_0x000107c615e8(uVar3);
    func_0x000107c61170(uVar4);
    if (((uVar5 & 1) != 0) && (lVar6 = lVar1, FUN_1018cac00(lVar1), lVar8 != 0)) {
      func_0x0001000d224c(&uStack_78);
      uVar4 = uStack_78;
      func_0x000107c614f0(uStack_78);
      (**(code **)(lStack_70 + 0x30))(puVar12,lVar6,lVar8,uVar4,lStack_70);
      func_0x000107c615e8(uStack_78);
      func_0x000107c6142c(lVar8);
      puVar7 = puVar12;
      (**(code **)(lVar9 + 0x30))(puVar12,1,lVar2);
      if ((int)puVar7 != 1) {
        func_0x0001016855d8(puVar12,lVar10);
        func_0x000101681be8(lVar10,lVar11);
        func_0x0001047c0984(0);
        func_0x000107c610f8();
        func_0x0001047b952c(lVar11);
        func_0x000107c61170(lVar1);
        func_0x0001018cb0ac(lVar10,&SUB_100b91d00);
        return lVar11;
      }
      func_0x0001018cb138(puVar12,0x112dbe418,&UNK_10d990420);
    }
  }
  lVar2 = lVar1;
  FUN_1018c904c(lVar1);
  func_0x000107c61170(lVar1);
  return lVar2;
}



/* Entry: 1018ca24c; end: 1018ca2cb; -[_TtC44SponsoredSnapAdResponseParserServiceProvider29SponsoredSnapAdResponseParser parseAdResponseBytesWithAdResponseBytes:] */

void FUN_1018ca24c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c5ee30(param_3);
  func_0x000107c61170(uVar1);
  uVar1 = param_3;
  FUN_1018c9fac(param_3,param_2);
  func_0x00010006c090(param_3,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1018ca2cc; end: 1018ca2ff; -[_TtC44SponsoredSnapAdResponseParserServiceProvider29SponsoredSnapAdResponseParser isPromoInfoChatFeedEnabled] */

uint FUN_1018ca2cc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1018ca300();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 1018ca300; end: 1018ca3b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1018ca300(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  uint uVar6;
  
  lVar2 = _DAT_112dcf188;
  uVar6 = (uint)*(byte *)(unaff_x20 + _DAT_112dcf188);
  if (*(byte *)(unaff_x20 + _DAT_112dcf188) == 2) {
    puVar3 = *(undefined8 **)(unaff_x20 + _DAT_112dcf178);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (puVar3 == (undefined8 *)0x0) {
      uVar6 = 0;
    }
    else {
      puVar4 = puVar3;
      func_0x000103bfc8ec();
      uVar5 = *puVar4;
      uVar1 = puVar4[1];
      func_0x000107c61434(uVar1);
      func_0x000107c5fadc(uVar5,uVar1);
      func_0x000107c6142c(uVar1);
      puVar4 = puVar3;
      func_0x000107c3ebdc();
      uVar6 = (uint)puVar4;
      func_0x000107c615e8(puVar3);
      func_0x000107c61170(uVar5);
    }
    *(char *)(unaff_x20 + lVar2) = (char)uVar6;
  }
  return uVar6 & 1;
}



/* Entry: 1018ca3b4; end: 1018ca3c3; -[_TtC44SponsoredSnapAdResponseParserServiceProvider29SponsoredSnapAdResponseParser setIsPromoInfoChatFeedEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018ca3b4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112dcf188) = param_3;
  return;
}



/* Entry: 1018ca3c4; end: 1018ca447; -[_TtC44SponsoredSnapAdResponseParserServiceProvider29SponsoredSnapAdResponseParser promoChatFeedHeadlineWithAdResponse:] */

void FUN_1018ca3c4(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1018cafa0(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x000107c5fadc(uVar1,param_2);
    func_0x000107c6142c(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1018ca448; end: 1018ca4a7; -[_TtC44SponsoredSnapAdResponseParserServiceProvider29SponsoredSnapAdResponseParser init] */

void FUN_1018ca448(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SponsoredSnapAdResponseParserServiceProvider.SponsoredSnapAdResponseParser",
                      0x4a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1018ca474);
  (*pcVar1)();
}



/* Entry: 1018ca4a8; end: 1018ca4ff; -[_TtC44SponsoredSnapAdResponseParserServiceProvider29SponsoredSnapAdResponseParser .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001018ca4c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018ca4c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018ca4a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112dcf168));
  return;
}



/* Entry: 1018ca500; end: 1018ca51f;  */

void FUN_1018ca500(void)

{
  func_0x000107c61168(&PTR_PTR_1127ea690);
  return;
}



/* Entry: 1018ca520; end: 1018ca653;  */

void FUN_1018ca520(float param_1,ulong param_2)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  uVar3 = param_2;
  func_0x000107c44790();
  if ((int)uVar3 != 0) {
    func_0x000107c3f87c();
    func_0x000107c61180();
    if (param_2 != 0) {
      uVar3 = param_2;
      func_0x000107c42f08();
      func_0x000107c4cf44(param_2);
      uVar4 = param_2;
      func_0x000107c4cf08(param_2);
      uVar5 = param_2;
      func_0x000107c4cf04(param_2);
      uVar7 = param_2;
      func_0x000107c5b82c();
      iVar2 = (int)uVar7;
      if ((iVar2 == -0x4524111) || (iVar2 == 0)) {
        uVar7 = 0;
      }
      else {
        if (iVar2 != 1) {
          FUN_1018cb1b8(0);
          func_0x000107c60614();
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1018ca654);
          (*pcVar1)();
        }
        uVar7 = uVar7 & 0xffffffff;
      }
      uVar6 = 0;
      func_0x0001047b2fe4(0);
      func_0x000107c610f8();
      func_0x0001047b2724((double)param_1,(long)(int)uVar3,(long)(int)uVar4,(long)(int)uVar5,uVar7,
                          uVar6);
      func_0x000107c61170(param_2);
    }
  }
  return;
}



/* Entry: 1018ca654; end: 1018cab3f;  */

void FUN_1018ca654(float param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  uVar2 = param_2;
  func_0x000107c446ec();
  if ((int)uVar2 != 0) {
    func_0x000107c3d304();
    func_0x000107c61180();
    if (param_2 != 0) {
      FUN_1018ca520();
      uVar2 = param_2;
      func_0x000107c4cf28();
      func_0x000107c61180();
      if (uVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1018caaf8);
        (*pcVar1)();
      }
      uVar3 = uVar2;
      func_0x000107c5dc0c();
      func_0x000107c61170(uVar2);
      uVar2 = param_2;
      func_0x000107c4cf0c();
      func_0x000107c61180();
      if (uVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1018caafc);
        (*pcVar1)();
      }
      uVar4 = uVar2;
      func_0x000107c5dc0c();
      func_0x000107c61170(uVar2);
      uVar2 = param_2;
      func_0x000107c4cf3c();
      func_0x000107c61180();
      if (uVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1018cab00);
        (*pcVar1)();
      }
      func_0x000107c5dc0c();
      fVar13 = param_1;
      func_0x000107c61170(uVar2);
      uVar2 = param_2;
      func_0x000107c4cf20();
      func_0x000107c61180();
      if (uVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1018cab04);
        (*pcVar1)();
      }
      uVar5 = uVar2;
      func_0x000107c5dc0c();
      func_0x000107c61170(uVar2);
      uVar2 = param_2;
      func_0x000107c4cf14();
      func_0x000107c61180();
      if (uVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1018cab08);
        (*pcVar1)();
      }
      uVar6 = uVar2;
      func_0x000107c5dc0c();
      func_0x000107c61170(uVar2);
      uVar2 = param_2;
      func_0x000107c4cf38();
      func_0x000107c61180();
      if (uVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1018cab0c);
        (*pcVar1)();
      }
      func_0x000107c5dc0c();
      fVar14 = fVar13;
      func_0x000107c61170(uVar2);
      uVar2 = param_2;
      func_0x000107c4cf1c();
      func_0x000107c61180();
      if (uVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1018cab10);
        (*pcVar1)();
      }
      uVar7 = uVar2;
      func_0x000107c5dc0c();
      func_0x000107c61170(uVar2);
      uVar2 = param_2;
      func_0x000107c4cf10();
      func_0x000107c61180();
      if (uVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1018cab14);
        (*pcVar1)();
      }
      uVar8 = uVar2;
      func_0x000107c5dc0c();
      func_0x000107c61170(uVar2);
      uVar2 = param_2;
      func_0x000107c4cf30();
      func_0x000107c61180();
      if (uVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1018cab18);
        (*pcVar1)();
      }
      func_0x000107c5dc0c();
      fVar15 = fVar14;
      func_0x000107c61170(uVar2);
      uVar2 = param_2;
      func_0x000107c4cf40();
      func_0x000107c61180();
      if (uVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1018cab1c);
        (*pcVar1)();
      }
      func_0x000107c5dc0c();
      fVar16 = fVar15;
      func_0x000107c61170(uVar2);
      uVar2 = param_2;
      func_0x000107c4c898();
      func_0x000107c61180();
      if (uVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1018cab20);
        (*pcVar1)();
      }
      uVar9 = uVar2;
      func_0x000107c5dc0c();
      func_0x000107c61170(uVar2);
      uVar2 = param_2;
      func_0x000107c401e0();
      func_0x000107c61180();
      if (uVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1018cab24);
        (*pcVar1)();
      }
      uVar10 = uVar2;
      func_0x000107c5dc0c();
      func_0x000107c61170(uVar2);
      uVar2 = param_2;
      func_0x000107c401d8();
      func_0x000107c61180();
      if (uVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1018cab28);
        (*pcVar1)();
      }
      uVar11 = uVar2;
      func_0x000107c5dc0c();
      func_0x000107c61170(uVar2);
      uVar2 = param_2;
      func_0x000107c401d4();
      func_0x000107c61180();
      if (uVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1018cab2c);
        (*pcVar1)();
      }
      func_0x000107c5dc0c();
      func_0x000107c61170(uVar2);
      uVar2 = param_2;
      func_0x000107c44794();
      if ((int)uVar2 != 0) {
        uVar2 = param_2;
        func_0x000107c3f880();
        func_0x000107c61180();
        if (uVar2 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1018cab40);
          (*pcVar1)();
        }
        func_0x000107c42f08();
        func_0x000107c61170(uVar2);
        func_0x000107c610f8();
        func_0x000107c46ecc();
      }
      uVar2 = param_2;
      func_0x000107c4cf24();
      func_0x000107c61180();
      if (uVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1018cab30);
        (*pcVar1)();
      }
      func_0x000107c5dc0c();
      func_0x000107c61170(uVar2);
      uVar2 = param_2;
      func_0x000107c4cf18();
      func_0x000107c61180();
      if (uVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1018cab34);
        (*pcVar1)();
      }
      func_0x000107c5dc0c();
      func_0x000107c61170(uVar2);
      uVar2 = param_2;
      func_0x000107c4cf34();
      func_0x000107c61180();
      if (uVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1018cab38);
        (*pcVar1)();
      }
      func_0x000107c5dc0c();
      func_0x000107c61170(uVar2);
      uVar2 = param_2;
      func_0x000107c401dc();
      func_0x000107c61180();
      if (uVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1018cab3c);
        (*pcVar1)();
      }
      func_0x000107c5dc0c();
      func_0x000107c61170(uVar2);
      uVar12 = 0;
      func_0x0001047b5e44(0);
      func_0x000107c610f8();
      func_0x0001047b42e0(uVar12,(double)param_1,(double)fVar13,(double)fVar14,(double)fVar15,
                          (double)fVar16,(long)(int)uVar3,(long)(int)uVar4,(long)(int)uVar5,
                          (long)(int)uVar6,(long)(int)uVar7,(long)(int)uVar8,(long)(int)uVar9,
                          uVar10 & 0xffffffff,(char)uVar11);
      func_0x000107c61170(param_2);
    }
  }
  return;
}



/* Entry: 1018cab40; end: 1018cabff;  */

undefined1  [16] FUN_1018cab40(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long extraout_x8;
  long extraout_x12;
  undefined1 *puVar11;
  long unaff_x20;
  long lVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auStack_e0 [8];
  long lStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c5ee20();
  func_0x000107c4636c();
  func_0x000107c61170(param_1);
  lVar3 = 0;
  if (unaff_x20 == 0) {
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170();
    func_0x000107c61654();
  }
  else {
    func_0x000107c61174();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    auVar14._8_8_ = param_2;
    auVar14._0_8_ = unaff_x20;
    return auVar14;
  }
  func_0x000107c60e78();
  lVar10 = 0x112d3bc20;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
  puVar11 = auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = (long)puVar11 - extraout_x12;
  func_0x000107c49924();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1018caf9c);
    (*pcVar2)();
  }
  lVar12 = lVar3;
  func_0x000107c43638();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  if (lVar12 == 0) {
    uStack_c8 = 0;
    lStack_d0 = 0;
    lStack_b8 = 0;
    uStack_c0 = 0;
  }
  else {
    func_0x000107c60234(&lStack_d0,lVar12);
    func_0x000107c615e8(lVar12);
  }
  uStack_a8 = uStack_c8;
  lStack_b0 = lStack_d0;
  lStack_98 = lStack_b8;
  uStack_a0 = uStack_c0;
  if (lStack_b8 == 0) {
    func_0x0001018cb138(&lStack_b0,0x112d387f8,&UNK_10d902650);
LAB_1018cad88:
    lVar3 = 0;
    uStack_a8 = 0;
    lStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
LAB_1018cad94:
    func_0x0001018cb138(&lStack_b0,0x112d387f8,&UNK_10d902650);
LAB_1018cadac:
    lVar12 = 0;
  }
  else {
    uVar4 = 0;
    func_0x0001018cb178(0,0x112dcf1c0,&PTR_PTR_1126a7d20);
    puVar1 = PTR___sypN_11034f1a8;
    plVar5 = &lStack_d8;
    func_0x000107c6147c(plVar5,&lStack_b0,PTR___sypN_11034f1a8 + 8,uVar4,6);
    if ((((ulong)plVar5 & 1) == 0) || (lStack_d8 == 0)) goto LAB_1018cad88;
    lVar3 = lStack_d8;
    func_0x000107c4a7d8();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1018cafa0);
      (*pcVar2)();
    }
    lVar12 = lVar3;
    func_0x000107c43638();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar12 == 0) {
      uStack_c8 = 0;
      lStack_d0 = 0;
      lStack_b8 = 0;
      uStack_c0 = 0;
    }
    else {
      func_0x000107c60234(&lStack_d0,lVar12);
      func_0x000107c615e8(lVar12);
    }
    uStack_a8 = uStack_c8;
    lStack_b0 = lStack_d0;
    lStack_98 = lStack_b8;
    uStack_a0 = uStack_c0;
    lVar3 = lStack_d8;
    if (lStack_b8 == 0) goto LAB_1018cad94;
    uVar4 = 0;
    func_0x0001018cb178(0,0x112dcf1b8,&PTR_PTR_1126e05f0);
    plVar5 = &lStack_d0;
    plVar9 = &lStack_b0;
    func_0x000107c6147c(plVar5,plVar9,puVar1 + 8,uVar4,6);
    lVar12 = lStack_d0;
    if (((ulong)plVar5 & 1) == 0) goto LAB_1018cadac;
    if (lStack_d0 != 0) {
      lVar7 = lStack_d0;
      func_0x000107c51f70();
      func_0x000107c61180();
      if (lVar7 != 0) {
        lVar8 = lVar7;
        func_0x000107c5ee30();
        func_0x000107c61170(lVar7);
        lVar7 = lVar8;
        func_0x000107c5ee20(lVar8,plVar9);
        func_0x00010006c090(lVar8,plVar9);
        goto LAB_1018cadb4;
      }
    }
  }
  lVar7 = 0;
LAB_1018cadb4:
  lVar8 = lVar7;
  func_0x000107c30944();
  func_0x000107c61180();
  func_0x000107c61170(lVar7);
  if (lVar8 != 0) {
    func_0x000107c5eeb8(puVar11,lVar8);
    func_0x000107c61170(lVar8);
  }
  lVar6 = 0;
  func_0x000107c5eec8();
  lVar13 = *(long *)(lVar6 + -8);
  (**(code **)(lVar13 + 0x38))(puVar11,lVar8 == 0,1,lVar6);
  func_0x0001018cb0e8(puVar11,lVar10);
  lVar7 = lVar10;
  (**(code **)(lVar13 + 0x30))(lVar10,1,lVar6);
  if ((int)lVar7 == 1) {
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar12);
    func_0x0001018cb138(lVar10,0x112d3bc20,&UNK_10d904ef0);
    lVar7 = 0;
    lVar6 = 0;
  }
  else {
    func_0x000107c5eeb0();
    (**(code **)(lVar13 + 8))(lVar10,lVar6);
    lVar10 = lVar7;
    func_0x000107c3ac54(lVar7);
    func_0x000107c61180();
    func_0x000107c61170(lVar7);
    lVar7 = lVar10;
    func_0x000107c5faec(lVar10);
    func_0x000107c61170(lVar10);
    func_0x000107c61170(lVar12);
    func_0x000107c61170(lVar3);
  }
  auVar15._8_8_ = lVar6;
  auVar15._0_8_ = lVar7;
  return auVar15;
}



/* Entry: 1018cac00; end: 1018caf9f;  */

undefined1  [16] FUN_1018cac00(long param_1)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long extraout_x8;
  long extraout_x12;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined1 auStack_a0 [8];
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lVar10 = 0x112d3bc20;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
  puVar9 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = (long)puVar9 - extraout_x12;
  func_0x000107c49924();
  func_0x000107c61180();
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1018caf9c);
    (*pcVar2)();
  }
  lVar11 = param_1;
  func_0x000107c43638();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  if (lVar11 == 0) {
    uStack_88 = 0;
    lStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    func_0x000107c60234(&lStack_90,lVar11);
    func_0x000107c615e8(lVar11);
  }
  uStack_68 = uStack_88;
  lStack_70 = lStack_90;
  lStack_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 == 0) {
    func_0x0001018cb138(&lStack_70,0x112d387f8,&UNK_10d902650);
LAB_1018cad88:
    lVar11 = 0;
    uStack_68 = 0;
    lStack_70 = 0;
    lStack_58 = 0;
    uStack_60 = 0;
LAB_1018cad94:
    func_0x0001018cb138(&lStack_70,0x112d387f8,&UNK_10d902650);
LAB_1018cadac:
    lVar12 = 0;
  }
  else {
    uVar3 = 0;
    func_0x0001018cb178(0,0x112dcf1c0,&PTR_PTR_1126a7d20);
    puVar1 = PTR___sypN_11034f1a8;
    plVar4 = &lStack_98;
    func_0x000107c6147c(plVar4,&lStack_70,PTR___sypN_11034f1a8 + 8,uVar3,6);
    if ((((ulong)plVar4 & 1) == 0) || (lStack_98 == 0)) goto LAB_1018cad88;
    lVar11 = lStack_98;
    func_0x000107c4a7d8();
    func_0x000107c61180();
    if (lVar11 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1018cafa0);
      (*pcVar2)();
    }
    lVar12 = lVar11;
    func_0x000107c43638();
    func_0x000107c61180();
    func_0x000107c61170(lVar11);
    if (lVar12 == 0) {
      uStack_88 = 0;
      lStack_90 = 0;
      lStack_78 = 0;
      uStack_80 = 0;
    }
    else {
      func_0x000107c60234(&lStack_90,lVar12);
      func_0x000107c615e8(lVar12);
    }
    uStack_68 = uStack_88;
    lStack_70 = lStack_90;
    lStack_58 = lStack_78;
    uStack_60 = uStack_80;
    lVar11 = lStack_98;
    if (lStack_78 == 0) goto LAB_1018cad94;
    uVar3 = 0;
    func_0x0001018cb178(0,0x112dcf1b8,&PTR_PTR_1126e05f0);
    plVar4 = &lStack_90;
    plVar8 = &lStack_70;
    func_0x000107c6147c(plVar4,plVar8,puVar1 + 8,uVar3,6);
    lVar12 = lStack_90;
    if (((ulong)plVar4 & 1) == 0) goto LAB_1018cadac;
    if (lStack_90 != 0) {
      lVar6 = lStack_90;
      func_0x000107c51f70();
      func_0x000107c61180();
      if (lVar6 != 0) {
        lVar7 = lVar6;
        func_0x000107c5ee30();
        func_0x000107c61170(lVar6);
        lVar6 = lVar7;
        func_0x000107c5ee20(lVar7,plVar8);
        func_0x00010006c090(lVar7,plVar8);
        goto LAB_1018cadb4;
      }
    }
  }
  lVar6 = 0;
LAB_1018cadb4:
  lVar7 = lVar6;
  func_0x000107c30944();
  func_0x000107c61180();
  func_0x000107c61170(lVar6);
  if (lVar7 != 0) {
    func_0x000107c5eeb8(puVar9,lVar7);
    func_0x000107c61170(lVar7);
  }
  lVar5 = 0;
  func_0x000107c5eec8();
  lVar13 = *(long *)(lVar5 + -8);
  (**(code **)(lVar13 + 0x38))(puVar9,lVar7 == 0,1,lVar5);
  func_0x0001018cb0e8(puVar9,lVar10);
  lVar6 = lVar10;
  (**(code **)(lVar13 + 0x30))(lVar10,1,lVar5);
  if ((int)lVar6 == 1) {
    func_0x000107c61170(lVar11);
    func_0x000107c61170(lVar12);
    func_0x0001018cb138(lVar10,0x112d3bc20,&UNK_10d904ef0);
    lVar6 = 0;
    lVar5 = 0;
  }
  else {
    func_0x000107c5eeb0();
    (**(code **)(lVar13 + 8))(lVar10,lVar5);
    lVar10 = lVar6;
    func_0x000107c3ac54(lVar6);
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    lVar6 = lVar10;
    func_0x000107c5faec(lVar10);
    func_0x000107c61170(lVar10);
    func_0x000107c61170(lVar12);
    func_0x000107c61170(lVar11);
  }
  auVar14._8_8_ = lVar5;
  auVar14._0_8_ = lVar6;
  return auVar14;
}



/* Entry: 1018cafa0; end: 1018cb0ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018cafa0(long param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long extraout_x8;
  ulong uVar5;
  ulong uVar6;
  
  lVar2 = 0;
  func_0x0001046d90b0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  uVar5 = *(ulong *)(param_1 + _DAT_113815208);
  if (uVar5 != 0) {
    uVar6 = uVar5 & 0xffffffffffffff8;
    if (uVar5 >> 0x3e == 0) {
      uVar3 = *(ulong *)(uVar6 + 0x10);
    }
    else {
      uVar3 = uVar5;
      if (-1 < (long)uVar5) {
        uVar3 = uVar6;
      }
      func_0x000107c60480();
    }
    if (uVar3 != 0) {
      if ((uVar5 & 0xc000000000000001) == 0) {
        if (*(long *)(uVar6 + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1018cb0ac);
          (*pcVar1)();
        }
        uVar4 = *(undefined8 *)(uVar5 + 0x20);
        func_0x000107c61174(uVar4);
      }
      else {
        uVar4 = 0;
        func_0x000100e471e4(0,uVar5);
      }
      func_0x000107c61174();
      func_0x0001047c15e8(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
      func_0x000103bfd364();
      func_0x000107c61170(uVar4);
      FUN_1018cb0ac(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                    &SUB_1046d90b0);
    }
  }
  return;
}



/* Entry: 1018cb0ac; end: 1018cb1b7;  */

undefined8 FUN_1018cb0ac(undefined8 param_1,code *param_2)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_2)();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1018cb1b8; end: 1018cb207;  */

void FUN_1018cb1b8(undefined8 param_1)

{
  undefined *puVar1;
  
  if (lRam0000000112dcf1c8 != 0) {
    return;
  }
  puVar1 = &UNK_11040cb98;
  func_0x000107c614d4();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  lRam0000000112dcf1c8 = param_1;
  return;
}



/* Entry: 1018cb208; end: 1018cb3bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1018cb208(undefined8 param_1,long param_2,long param_3,long param_4,long param_5)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_113010610);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar1 = *(undefined8 *)(param_3 + _DAT_113043d30);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_3);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar1;
  uVar1 = *(undefined8 *)(param_4 + _DAT_11304a480);
  func_0x000107c61174();
  func_0x000107c61170(param_4);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar1;
  uVar1 = *(undefined8 *)(param_5 + _DAT_113010888);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_5);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar1;
  return unaff_x20;
}



/* Entry: 1018cb3bc; end: 1018cb3c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018cb3bc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar8 = &lStack_50;
  lVar6 = 0;
  FUN_1018ca500();
  lVar7 = lVar6;
  func_0x000107c610f8();
  *(undefined1 *)(lVar7 + _DAT_112dcf188) = 2;
  *(undefined8 *)(lVar7 + _DAT_112dcf168) = uVar1;
  *(undefined8 *)(lVar7 + _DAT_112dcf170) = uVar3;
  *(undefined8 *)(lVar7 + _DAT_112dcf178) = uVar2;
  *(undefined8 *)(lVar7 + _DAT_112dcf180) = uVar4;
  puVar5 = PTR_s_init_1125d9248;
  lStack_50 = lVar7;
  lStack_48 = lVar6;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c61174(uVar2);
  func_0x000107c6157c(uVar4);
  func_0x000107c61154(&lStack_50,puVar5);
  *param_1 = plVar8;
  return;
}



/* Entry: 1018cb3c8; end: 1018cb3f3;  */

/* WARNING: Possible PIC construction at 0x0001018cb3d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018cb3d8) */

void FUN_1018cb3c8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1018cb3f4; end: 1018cb44f;  */

void FUN_1018cb3f4(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61574();
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1018cb450; end: 1018cb527;  */

void FUN_1018cb450(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  long unaff_x20;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  puVar4 = &UNK_11040cbe0;
  func_0x000107c613fc(&UNK_11040cbe0,0x30,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar6;
  *(undefined8 *)(puVar4 + 0x18) = uVar2;
  *(undefined8 *)(puVar4 + 0x20) = uVar1;
  *(undefined8 *)(puVar4 + 0x28) = uVar3;
  func_0x0001000285a8(0x112dcf1d0,&UNK_10d990e80);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(uVar1);
  func_0x000107c6157c(uVar3);
  pcVar5 = FUN_1018cb564;
  func_0x0001000bdd8c(FUN_1018cb564,puVar4);
  uVar6 = 0;
  func_0x00010022f3f0(0);
  func_0x000107c610f8();
  func_0x000100460d28(pcVar5,uVar6);
  *param_1 = pcVar5;
  return;
}



/* Entry: 1018cb528; end: 1018cb563;  */

void FUN_1018cb528(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1018cb564; end: 1018cb567;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018cb564(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar8 = &lStack_50;
  lVar6 = 0;
  FUN_1018ca500();
  lVar7 = lVar6;
  func_0x000107c610f8();
  *(undefined1 *)(lVar7 + _DAT_112dcf188) = 2;
  *(undefined8 *)(lVar7 + _DAT_112dcf168) = uVar1;
  *(undefined8 *)(lVar7 + _DAT_112dcf170) = uVar3;
  *(undefined8 *)(lVar7 + _DAT_112dcf178) = uVar2;
  *(undefined8 *)(lVar7 + _DAT_112dcf180) = uVar4;
  puVar5 = PTR_s_init_1125d9248;
  lStack_50 = lVar7;
  lStack_48 = lVar6;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c61174(uVar2);
  func_0x000107c6157c(uVar4);
  func_0x000107c61154(&lStack_50,puVar5);
  *param_1 = plVar8;
  return;
}



/* Entry: 1018cb568; end: 1018cb5c7; -[_TtC35SponsoredSnapEUModalServiceProvider28SponsoredSnapEUModalProvider init] */

void FUN_1018cb568(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SponsoredSnapEUModalServiceProvider.SponsoredSnapEUModalProvider",0x40,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1018cb594);
  (*pcVar1)();
}



/* Entry: 1018cb5c8; end: 1018cb61f; -[_TtC35SponsoredSnapEUModalServiceProvider28SponsoredSnapEUModalProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018cb5c8(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112dcf2c8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112dcf2c0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112dcf2e8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112dcf2e0));
  return;
}



/* Entry: 1018cb620; end: 1018cb763;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018cb620(ulong param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x20;
  ulong auStack_40 [2];
  
  uVar2 = param_1;
  func_0x000104041f50();
  if ((uVar2 & 1) == 0) {
    func_0x0001000d224c(auStack_40);
    uVar2 = auStack_40[0];
    if (auStack_40[0] != 0) {
      func_0x0001000d224c(auStack_40);
      uVar3 = auStack_40[0];
      func_0x000107c614f0();
      func_0x0001018cb6d8();
      func_0x000107c615e8(auStack_40[0]);
      if ((uVar3 & 1) != 0) {
        func_0x000107c59680(uVar2);
      }
      func_0x000107c61170(uVar2);
    }
  }
  else {
    puVar1 = (ulong *)(unaff_x20 + _DAT_112dcf2d0);
    *puVar1 = param_1;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  return;
}



/* Entry: 1018cb764; end: 1018cb793; -[_TtC35SponsoredSnapEUModalServiceProvider28SponsoredSnapEUModalProvider setOptInStatusWithStatus:] */

void FUN_1018cb764(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_1018cb620(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1018cb794; end: 1018cb92f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1018cb794(void)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  long unaff_x20;
  byte *pbVar8;
  ulong uStack_58;
  long lStack_50;
  undefined1 uStack_48;
  char cStack_41;
  
  func_0x0001000d224c(&uStack_58);
  uVar1 = uStack_58;
  if (uStack_58 != 0) {
    func_0x0001000d224c(&uStack_58);
    lVar3 = lStack_50;
    uVar2 = uStack_58;
    uVar5 = uStack_58;
    func_0x000107c614f0();
    uVar6 = uVar5;
    func_0x0001018cb6d8();
    if ((uVar6 & 1) != 0) {
      uStack_58 = 0xd00000000000003f;
      lStack_50 = -0x7ffffffef1042ba0;
      uStack_48 = 0;
      puVar7 = &uStack_58;
      (**(code **)(lVar3 + 8))(&cStack_41,puVar7,&UNK_1107383c8,&PTR_DAT_11304a4b0,uVar5,lVar3);
      if (cStack_41 == '\x01') {
        FUN_1018cb930();
        if ((long)puVar7 < 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1018cb928);
          (*pcVar4)();
        }
        func_0x000107c5967c(uVar1);
        pbVar8 = (byte *)(unaff_x20 + _DAT_112dcf2d8);
        if ((*pbVar8 & 1) == 0) {
LAB_1018cb8f0:
          uVar5 = uVar1;
          func_0x000107c5b83c();
          if (!SCARRY8(uVar5,1)) {
            func_0x000107c59688(uVar1);
            func_0x000107c615e8(uVar2);
            func_0x000107c61170(uVar1);
            *pbVar8 = 1;
            return 1;
          }
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1018cb92c);
          (*pcVar4)();
        }
      }
      else {
        pbVar8 = (byte *)(unaff_x20 + _DAT_112dcf2d8);
        if ((*pbVar8 & 1) == 0) {
          FUN_1018cb930();
          if ((long)puVar7 < 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1018cb930);
            (*pcVar4)();
          }
          func_0x000107c5967c(uVar1);
          goto LAB_1018cb8f0;
        }
      }
    }
    func_0x000107c61170(uVar1);
    func_0x000107c615e8(uVar2);
  }
  return 0;
}



/* Entry: 1018cb930; end: 1018cb9a7;  */

long FUN_1018cb930(double param_1)

{
  code *pcVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126afec0;
  func_0x000107c61168(PTR_PTR_1126afec0);
  func_0x000107c3ceac();
  func_0x000107c51b38(puVar2);
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1018cb9a0);
    (*pcVar1)();
  }
  if (-1.0 < param_1) {
    if (param_1 < 1.8446744073709552e+19) {
      return (long)param_1;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1018cb9a8);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1018cb9a4);
  (*pcVar1)();
}



/* Entry: 1018cb9a8; end: 1018cb9db; -[_TtC35SponsoredSnapEUModalServiceProvider28SponsoredSnapEUModalProvider recordModalDisplayed] */

uint FUN_1018cb9a8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1018cb794();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 1018cb9dc; end: 1018cb9eb; -[_TtC35SponsoredSnapEUModalServiceProvider28SponsoredSnapEUModalProvider resetSessionState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018cb9dc(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_112dcf2d8) = 0;
  return;
}



/* Entry: 1018cb9ec; end: 1018cbad3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1018cb9ec(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x20;
  ulong auStack_40 [2];
  
  func_0x000104041f90();
  if ((param_1 & 1) == 0) {
    func_0x000104041f50();
    if ((param_1 & 1) == 0) {
      func_0x0001000d224c(auStack_40);
      uVar2 = auStack_40[0];
      uVar1 = auStack_40[0];
      func_0x000107c614f0();
      func_0x0001018cb6d8();
      func_0x000107c615e8(uVar2);
      if (((uVar1 & 1) == 0) || (func_0x0001000d224c(auStack_40), auStack_40[0] == 0)) {
        uVar2 = 0;
      }
      else {
        uVar2 = auStack_40[0];
        func_0x000107c5b834();
        func_0x000107c61170(auStack_40[0]);
        if (uVar2 != 2) {
          uVar2 = (ulong)(uVar2 == 1);
        }
      }
    }
    else {
      uVar2 = 2;
      if ((char)((ulong *)(unaff_x20 + _DAT_112dcf2d0))[1] != '\x01') {
        uVar2 = *(ulong *)(unaff_x20 + _DAT_112dcf2d0);
      }
    }
  }
  else {
    uVar2 = 2;
  }
  return uVar2;
}



/* Entry: 1018cbad4; end: 1018cbb07; -[_TtC35SponsoredSnapEUModalServiceProvider28SponsoredSnapEUModalProvider getOptInStatus] */

undefined8 FUN_1018cbad4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1018cb9ec();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 1018cbb08; end: 1018cbe67;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1018cbb08(ulong param_1)

{
  undefined8 *******pppppppuVar1;
  undefined8 *******pppppppuVar2;
  long lVar3;
  int iVar4;
  undefined8 *******pppppppuVar5;
  undefined8 *******pppppppuVar6;
  undefined *puVar7;
  undefined8 *******pppppppuVar8;
  long unaff_x20;
  long lVar9;
  undefined8 uVar10;
  code *pcVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 *******pppppppuStack_a0;
  long lStack_98;
  ulong uStack_90;
  byte bStack_88;
  undefined7 uStack_87;
  
  func_0x000104041f90();
  if ((param_1 & 1) != 0) {
    return 0;
  }
  func_0x0001000d224c(&pppppppuStack_a0);
  lVar3 = lStack_98;
  pppppppuVar1 = pppppppuStack_a0;
  pppppppuVar5 = pppppppuStack_a0;
  func_0x000107c614f0();
  pppppppuVar6 = pppppppuVar5;
  func_0x0001018cb6d8();
  if (((ulong)pppppppuVar6 & 1) != 0) {
    pppppppuStack_a0 = (undefined8 *******)0xd000000000000038;
    lStack_98 = -0x7ffffffef1042be0;
    uStack_90 = uStack_90 & 0xffffffffffffff00;
    pcVar11 = *(code **)(lVar3 + 8);
    pppppppuVar6 = &pppppppuStack_a0;
    (*pcVar11)(&bStack_88,pppppppuVar6,&UNK_1107383c8,&PTR_DAT_11304a4b0,pppppppuVar5,lVar3);
    if (((bStack_88 & 1) == 0) &&
       (func_0x0001000d224c(&pppppppuStack_a0), pppppppuVar2 = pppppppuStack_a0,
       pppppppuStack_a0 != (undefined8 *******)0x0)) {
      pppppppuVar6 = pppppppuStack_a0;
      func_0x000107c41050();
      func_0x000107c61180();
      iVar4 = (int)pppppppuVar6;
      func_0x000107c61170(pppppppuVar2);
      func_0x000107c4a568();
      func_0x000107c61170();
      if (iVar4 != 0) goto LAB_1018cbdf4;
    }
    func_0x0001000d224c(&pppppppuStack_a0);
    pppppppuVar2 = pppppppuStack_a0;
    if (pppppppuStack_a0 != (undefined8 *******)0x0) {
      func_0x000104041f50();
      lVar9 = _DAT_112dcf2f0;
      if (((((ulong)pppppppuVar6 & 1) != 0) && ((*(byte *)(unaff_x20 + _DAT_112dcf2f0) & 1) == 0))
         && (func_0x0001000d224c(&pppppppuStack_a0), pppppppuVar6 = pppppppuStack_a0,
            pppppppuStack_a0 != (undefined8 *******)0x0)) {
        *(undefined1 *)(unaff_x20 + lVar9) = 1;
        func_0x000107c59688(pppppppuStack_a0);
        func_0x000107c5967c(pppppppuVar6);
        func_0x000107c59680(pppppppuVar6);
        func_0x000107c61170(pppppppuVar6);
      }
      pppppppuVar6 = pppppppuVar2;
      func_0x000107c44b3c();
      iVar4 = (int)pppppppuVar6;
      if (((ulong)pppppppuVar6 & 1) != 0) {
        FUN_1018cb9ec();
        puVar7 = PTR_PTR_1126afec0;
        func_0x000107c61168(PTR_PTR_1126afec0);
        pppppppuVar6 = pppppppuVar2;
        func_0x000107c5b830();
        dVar12 = (double)(long)pppppppuVar6;
        func_0x000107c4cec4(puVar7);
        pppppppuStack_a0 = (undefined8 *******)0xd000000000000031;
        lStack_98 = 0x800000010efbd3e0;
        uStack_90 = 0xb7;
        dVar13 = dVar12;
        (*pcVar11)(&bStack_88,&pppppppuStack_a0,&UNK_110738448,&PTR_DAT_11304a4e0,pppppppuVar5,lVar3
                  );
        lVar9 = CONCAT71(uStack_87,bStack_88) * 0x15180;
        if (SUB168(SEXT816(CONCAT71(uStack_87,bStack_88)) * SEXT816(0x15180),8) != lVar9 >> 0x3f) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x1018cbe68);
          (*pcVar11)();
        }
        uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112dcf2e0);
        func_0x000107c3ceac(uVar10);
        pppppppuVar6 = pppppppuVar5;
        dVar14 = dVar13;
        FUN_1018cbe68(pppppppuVar5,lVar3);
        func_0x000107c3ceac(uVar10);
        pppppppuVar8 = pppppppuVar2;
        func_0x000107c5b83c();
        pppppppuStack_a0 = (undefined8 *******)0xd000000000000039;
        lStack_98 = -0x7ffffffef1042ca0;
        uStack_90 = 10;
        (*pcVar11)(&bStack_88,&pppppppuStack_a0,&UNK_110738448,&PTR_DAT_11304a4e0,pppppppuVar5,lVar3
                  );
        if ((iVar4 != 0) ||
           (dVar13 - dVar12 <= (double)(long)pppppppuVar6 ||
            CONCAT71(uStack_87,bStack_88) <= (long)pppppppuVar8)) {
          if ((iVar4 == 1) || (dVar14 - dVar12 <= (double)lVar9)) {
            func_0x000107c615e8(pppppppuVar1);
            func_0x000107c61170(pppppppuVar2);
            return 0;
          }
          func_0x000107c59688(pppppppuVar2);
        }
      }
      func_0x000107c615e8(pppppppuVar1);
      func_0x000107c61170(pppppppuVar2);
      return 1;
    }
  }
LAB_1018cbdf4:
  func_0x000107c615e8(pppppppuVar1);
  return 0;
}



/* Entry: 1018cbe68; end: 1018cbeeb;  */

/* WARNING: Removing unreachable block (ram,0x0001018cbee8) */

undefined8 FUN_1018cbe68(undefined8 param_1,long param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = 0x2a300;
  uStack_30 = 0xd000000000000037;
  uStack_28 = 0x800000010efbd3a0;
  (**(code **)(param_2 + 8))
            (&uStack_18,&uStack_30,&UNK_110738448,&PTR_DAT_11304a4e0,param_1,param_2);
  return uStack_18;
}



/* Entry: 1018cbeec; end: 1018cbf1f; -[_TtC35SponsoredSnapEUModalServiceProvider28SponsoredSnapEUModalProvider shouldShowOptInModal] */

uint FUN_1018cbeec(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1018cbb08();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 1018cbf20; end: 1018cbfe3; -[_TtC35SponsoredSnapEUModalServiceProvider28SponsoredSnapEUModalProvider getShownCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1018cbf20(undefined8 param_1)

{
  long lVar1;
  long lStack_38;
  
  func_0x000107c61174();
  func_0x0001000d224c(&lStack_38);
  if (lStack_38 == 0) {
    func_0x000107c61170(param_1);
    lVar1 = 0;
  }
  else {
    lVar1 = lStack_38;
    func_0x000107c5b83c(lStack_38);
    func_0x000107c61170(lStack_38);
    func_0x000107c61170(param_1);
  }
  return lVar1;
}



/* Entry: 1018cbfe4; end: 1018cbfef;  */

void FUN_1018cbfe4(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1018cbff0; end: 1018cc013;  */

/* WARNING: Possible PIC construction at 0x0001018cbffc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018cc000) */

void FUN_1018cbff0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1018cc014; end: 1018cc08b;  */

void FUN_1018cc014(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1018cc08c; end: 1018cc0a3;  */

void FUN_1018cc08c(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1018cc0a4,0,0);
  return;
}



/* Entry: 1018cc0a4; end: 1018cc12f;  */

void FUN_1018cc0a4(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = unaff_x22 + 0x50;
  func_0x0001000d224c(lVar1);
  *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0x50);
  func_0x0001000d224c(lVar1);
  *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0x50);
  *(long *)(unaff_x22 + 0x38) = lVar1;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_1018cc130;
  func_0x000107c61448(unaff_x22 + 0x10,0);
  FUN_1018cc1ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 1018cc130; end: 1018cc1ab;  */

void FUN_1018cc130(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x1018cc170,0,0);
  return;
}



/* Entry: 1018cc1ac; end: 1018cc3bf;  */

void FUN_1018cc1ac(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  double dVar5;
  double dVar6;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  func_0x0001000d224c(&uStack_68);
  if (param_3 == 0) {
    func_0x000107c5df48(param_4);
    dVar5 = 170.0;
    dVar6 = 200.0;
  }
  else {
    uVar1 = 0xd00000000000002c;
    func_0x000107c5fadc(0xd00000000000002c,0x800000010efbd680);
    func_0x000107c49818(param_3);
    func_0x000107c61170(uVar1);
    func_0x000107c5df48(param_4);
    uVar1 = 0xd000000000000024;
    func_0x000107c5fadc(0xd000000000000024,0x800000010efbd620);
    lVar2 = param_3;
    func_0x000107c49818(param_3);
    func_0x000107c61170(uVar1);
    dVar5 = (double)lVar2;
    uVar1 = 0xd000000000000020;
    func_0x000107c5fadc(0xd000000000000020,0x800000010efbd650);
    func_0x000107c49818(param_3);
    func_0x000107c61170(uVar1);
    dVar6 = (double)param_3;
  }
  uVar1 = 0;
  FUN_1018ce5e0(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
  func_0x000107c5ffdc();
  puVar3 = &UNK_11040ced8;
  func_0x000107c613fc(&UNK_11040ced8,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  uStack_78 = 0x1018ce620;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0x42000000;
  pcStack_88 = FUN_1018cc3c0;
  puStack_80 = &UNK_11040cef0;
  ppuVar4 = &puStack_98;
  puStack_70 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  func_0x000107c61574(puStack_70);
  func_0x000107c4ab10(dVar5,dVar6,uStack_68);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c615e8(uStack_68);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 1018cc3c0; end: 1018cc41f;  */

void FUN_1018cc3c0(long param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (param_2 != 0) {
    uVar3 = 0;
    func_0x00010427a344(0);
    func_0x000107c5fc54(param_2,uVar3);
  }
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



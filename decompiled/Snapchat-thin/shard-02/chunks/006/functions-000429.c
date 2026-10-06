/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101fb4f64; end: 101fb4fa7; -[SCBitmojiFriendProfileSharingScopeGraphBridgeSaberEntryPoint end] */

void FUN_101fb4f64(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101fb4fa8; end: 101fb513f;  */

void FUN_101fb4fa8(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffc6) || (param_3 != -0x7ffffffef0fb15c0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000003a,0x800000010f04ea40,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "BitmojiFriendProfileSharingScopeGraphBridge/SCBitmojiFriendProfileSharingScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x6e,2,0x2f,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101fb5140);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52d00();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101fb5140; end: 101fb51eb; -[SCBitmojiFriendProfileSharingScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_101fb5140(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_101fb4fa8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101fb51ec; end: 101fb5257; -[SCBitmojiFriendProfileSharingScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fb51ec(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e4ad48,0);
  *(undefined8 *)(param_1 + _DAT_112e4ad50) = 0;
  *(undefined8 *)(param_1 + _DAT_112e4ad58) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101fb5258; end: 101fb528b;  */

void FUN_101fb5258(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101fb528c; end: 101fb52d3; -[SCBitmojiFriendProfileSharingScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101fb52b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101fb52bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fb528c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e4ad48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e4ad50));
  return;
}



/* Entry: 101fb52d4; end: 101fb52f3;  */

void FUN_101fb52d4(void)

{
  func_0x000107c61168(&PTR_PTR_112811290);
  return;
}



/* Entry: 101fb52f4; end: 101fb533b; -[SCSCBitmojiFriendProfileSharingScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fb52f4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e4ad88;
  func_0x000107c61428(param_1 + _DAT_112e4ad88,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101fb533c; end: 101fb5393; -[SCSCBitmojiFriendProfileSharingScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fb533c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e4ad88;
  func_0x000107c61428(param_1 + _DAT_112e4ad88,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101fb5394; end: 101fb546b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fb5394(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  plVar7 = &lStack_50;
  lVar3 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = 0;
    FUN_101fb4894();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112e4acb0) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101fb546c);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112e4acb8);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e4ad90);
    *(long **)(unaff_x20 + _DAT_112e4ad90) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 101fb546c; end: 101fb5493; -[SCSCBitmojiFriendProfileSharingScopedServicesSaberEntryPoint begin] */

void FUN_101fb546c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101fb5394();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101fb5494; end: 101fb560b;  */

/* WARNING: Possible PIC construction at 0x000101fb54fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fb5594: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101fb5500) */
/* WARNING: Removing unreachable block (ram,0x000101fb5598) */
/* WARNING: Removing unreachable block (ram,0x000101fb55b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fb5494(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112e4ad90);
  if (lVar2 == 0) {
    func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_end_1125c29d0);
  }
  else {
    puVar1 = PTR_PTR_1126afc98;
    func_0x000107c61168(PTR_PTR_1126afc98);
    func_0x000107c61174(lVar2);
    func_0x000107c3e26c(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 101fb560c; end: 101fb5613;  */

void FUN_101fb560c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 101fb5614; end: 101fb5647; -[SCSCBitmojiFriendProfileSharingScopedServicesSaberEntryPoint end] */

void FUN_101fb5614(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101fb5494();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101fb5648; end: 101fb5767;  */

void FUN_101fb5648(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 != 0x6e496e69676562 || param_3 != -0x1900000000000000) &&
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) == 0))
  {
    func_0x000107c602fc(0x15);
    func_0x000107c6142c(0xe000000000000000);
    func_0x000107c5fb78(param_2,param_3);
    func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                        "BitmojiFriendProfileSharingScopeGraphBridge/SCSCBitmojiFriendProfileSharingScopedServicesSaberEntryPoint.swift"
                        ,0x6e,2,0x2b,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101fb5768);
    (*pcVar1)();
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c52c38();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101fb5768; end: 101fb5813; -[SCSCBitmojiFriendProfileSharingScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_101fb5768(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_101fb5648(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101fb5814; end: 101fb5873; -[SCSCBitmojiFriendProfileSharingScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fb5814(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e4ad88,0);
  *(undefined8 *)(param_1 + _DAT_112e4ad90) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101fb5874; end: 101fb58a7;  */

void FUN_101fb5874(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101fb58a8; end: 101fb58df; -[SCSCBitmojiFriendProfileSharingScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fb58a8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e4ad88);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e4ad90));
  return;
}



/* Entry: 101fb58e0; end: 101fb58ff;  */

void FUN_101fb58e0(void)

{
  func_0x000107c61168(&PTR_PTR_112811358);
  return;
}



/* Entry: 101fb5900; end: 101fb596b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fb5900(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_101fb5cf4();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e4adc8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 101fb596c; end: 101fb59d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fb596c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e4adc8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101fb59d8; end: 101fb5a37; -[_TtC54BitmojiGroupProfileSharingScopedFactoryServiceProvider42SCBitmojiGroupProfileSharingScopedServices init] */

void FUN_101fb59d8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("BitmojiGroupProfileSharingScopedFactoryServiceProvider.SCBitmojiGroupProfileSharingScopedServices"
                      ,0x61,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101fb5a04);
  (*pcVar1)();
}



/* Entry: 101fb5a38; end: 101fb5a47; -[_TtC54BitmojiGroupProfileSharingScopedFactoryServiceProvider42SCBitmojiGroupProfileSharingScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fb5a38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e4adc8));
  return;
}



/* Entry: 101fb5a48; end: 101fb5ab3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fb5a48(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1104b2610;
  func_0x000107c613fc(&UNK_1104b2610,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_101fb5d8c,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101fb5ab4; end: 101fb5b4f;  */

void FUN_101fb5ab4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60);
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1104b2520;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1104b2520;
  return;
}



/* Entry: 101fb5b50; end: 101fb5b87;  */

void FUN_101fb5b50(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100094f24();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *param_1 = lVar1;
  return;
}



/* Entry: 101fb5b88; end: 101fb5b8f;  */

undefined8 FUN_101fb5b88(void)

{
  return 0x1b;
}



/* Entry: 101fb5b90; end: 101fb5cc3;  */

void FUN_101fb5b90(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1104b2638;
  func_0x000107c613fc(&UNK_1104b2638,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_101fb5d64;
  func_0x00010058fa64(FUN_101fb5d64,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101fb5cc4; end: 101fb5cf3;  */

undefined ** FUN_101fb5cc4(void)

{
  return &PTR_DAT_113066820;
}



/* Entry: 101fb5cf4; end: 101fb5d13;  */

void FUN_101fb5cf4(void)

{
  func_0x000107c61168(&PTR_PTR_112811418);
  return;
}



/* Entry: 101fb5d14; end: 101fb5d63;  */

undefined1  [16] FUN_101fb5d14(void)

{
  return ZEXT816(0x1104b2570);
}



/* Entry: 101fb5d64; end: 101fb5d8b;  */

void FUN_101fb5d64(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 101fb5d8c; end: 101fb5d8f;  */

void FUN_101fb5d8c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101fb5d90; end: 101fb5ea3;  */

/* WARNING: Possible PIC construction at 0x000101fb5e50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fb5e60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fb5e70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fb5e80: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101fb5e74) */
/* WARNING: Removing unreachable block (ram,0x000101fb5e64) */
/* WARNING: Removing unreachable block (ram,0x000101fb5e54) */
/* WARNING: Removing unreachable block (ram,0x000101fb5e84) */

void FUN_101fb5d90(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_1104b26c0;
  func_0x000107c613fc(&UNK_1104b26c0,0x50,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_9;
  uVar2 = 0x112e4ae38;
  func_0x0001000285a8(0x112e4ae38,&UNK_10da439f0);
  func_0x000107c613fc();
  uVar3 = 0x101fb6294;
  func_0x0001000841fc(0x101fb6294,puVar1,uVar2);
  func_0x000100084214(&UNK_10da439b0,0x38,2);
  *param_1 = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 101fb5ea4; end: 101fb5ec7;  */

/* WARNING: Possible PIC construction at 0x000101fb5e50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fb5e60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fb5e70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fb5e80: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101fb5e74) */
/* WARNING: Removing unreachable block (ram,0x000101fb5e64) */
/* WARNING: Removing unreachable block (ram,0x000101fb5e54) */
/* WARNING: Removing unreachable block (ram,0x000101fb5e84) */

void FUN_101fb5ea4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x48);
  puVar7 = &UNK_1104b26c0;
  func_0x000107c613fc(&UNK_1104b26c0,0x50,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar1;
  *(undefined8 *)(puVar7 + 0x18) = uVar3;
  *(undefined8 *)(puVar7 + 0x20) = uVar8;
  *(undefined8 *)(puVar7 + 0x28) = uVar4;
  *(undefined8 *)(puVar7 + 0x30) = uVar9;
  *(undefined8 *)(puVar7 + 0x38) = uVar5;
  *(undefined8 *)(puVar7 + 0x40) = uVar2;
  *(undefined8 *)(puVar7 + 0x48) = uVar6;
  uVar8 = 0x112e4ae38;
  func_0x0001000285a8(0x112e4ae38,&UNK_10da439f0);
  func_0x000107c613fc();
  uVar9 = 0x101fb6294;
  func_0x0001000841fc(0x101fb6294,puVar7,uVar8);
  func_0x000100084214(&UNK_10da439b0,0x38,2);
  *param_1 = uVar9;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 101fb5ec8; end: 101fb6237;  */

void FUN_101fb5ec8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined *puVar2;
  char *pcVar3;
  code *pcVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_68;
  
  uVar8 = *param_2;
  func_0x0001000285a8(0x112e4ae40,&UNK_10da439f8);
  puVar1 = &uStack_68;
  uStack_68 = uVar8;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112e4ae48,&UNK_10da43a00);
  puVar2 = &UNK_1104b26e8;
  func_0x000107c613fc(&UNK_1104b26e8,0x58,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  *(undefined8 *)(puVar2 + 0x28) = param_5;
  *(undefined8 *)(puVar2 + 0x30) = param_6;
  *(undefined8 *)(puVar2 + 0x38) = param_7;
  *(undefined8 *)(puVar2 + 0x40) = param_8;
  *(undefined8 *)(puVar2 + 0x48) = param_9;
  *(undefined8 *)(puVar2 + 0x50) = param_10;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  uVar8 = 0x101fb62c4;
  func_0x0001000823a8(0x101fb62c4,puVar2);
  pcVar3 = "BitmojiGroupProfileSharingEntryPointWrapperServiceProvider";
  func_0x000100082720("BitmojiGroupProfileSharingEntryPointWrapperServiceProvider",0x3a,2);
  FUN_101fb7204();
  func_0x000100082720("BitmojiGroupProfileSharingScopeGraphBridgeServicesServiceProvider",0x41,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_101fb5b50;
  func_0x0001000823a8(FUN_101fb5b50,0);
  func_0x000100082720("SCBitmojiGroupProfileSharingScopedServicesCleanupRelayServiceProvider",0x45,2
                     );
  func_0x0001000285a8(0x112e4ae50,&UNK_10da43a10);
  puVar2 = &UNK_1104b2710;
  func_0x000107c613fc(&UNK_1104b2710,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar8;
  *(undefined8 **)(puVar2 + 0x18) = puVar1;
  *(char **)(puVar2 + 0x20) = pcVar3;
  *(code **)(puVar2 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(pcVar3);
  func_0x000107c6157c(pcVar4);
  pcVar5 = FUN_101fb62f8;
  func_0x0001000823a8(FUN_101fb62f8,puVar2);
  func_0x000100082720("SCBitmojiGroupProfileSharingScopeInitializationPluginRegistryServiceProvider"
                      ,0x4c,2);
  func_0x0001000285a8(0x112e4add0,&UNK_10da43730);
  func_0x000107c6157c(pcVar5);
  uVar6 = 0x101fb6304;
  func_0x0001000823a8(0x101fb6304,pcVar5);
  func_0x000100082720("SCBitmojiGroupProfileSharingScopeInitializationServiceProvider",0x3e,2);
  func_0x0001000285a8(0x112e4adc0,&UNK_10da43720);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x101fb630c;
  func_0x0001000823a8(0x101fb630c,uVar6);
  func_0x000100082720("SCBitmojiGroupProfileSharingScopedServicesServiceProvider",0x39,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar2 = &UNK_1104b2738;
  func_0x000107c613fc(&UNK_1104b2738,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar7;
  *(code **)(puVar2 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar7 = 0x101fb6314;
  func_0x0001000823a8(0x101fb6314,puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(uVar6);
  func_0x000100082720("SCBitmojiGroupProfileSharingScopeEntryPointProvider",0x33,2);
  *param_1 = uVar7;
  return;
}



/* Entry: 101fb6238; end: 101fb62f7;  */

void FUN_101fb6238(void)

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



/* Entry: 101fb62f8; end: 101fb631b;  */

void FUN_101fb62f8(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_101fb69c0(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000a7f38("SCBitmojiGroupProfileSharingScopeInitializationPluginRegistryServiceProvider"
                      ,0x4c,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101fb631c; end: 101fb67b3;  */

void FUN_101fb631c(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  func_0x000100083b20(&uStack_a8);
  FUN_101fb68ec();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  *(undefined8 *)(param_2 + 0x48) = uStack_a0;
  *(undefined8 *)(param_2 + 0x50) = uStack_a8;
  FUN_101fb879c();
  func_0x000107c613fc();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar5 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar6 = uStack_98;
  func_0x000107c61174(uStack_98);
  uVar7 = uStack_a0;
  func_0x000107c61174();
  uVar8 = uStack_a8;
  func_0x000107c61174();
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar7);
  func_0x000107c61174();
  uVar9 = uStack_68;
  func_0x000107c61174();
  uVar10 = uVar9;
  func_0x000101fb844c();
  *(undefined8 *)(param_2 + 0x10) = uVar10;
  func_0x000107c6157c();
  FUN_101fb872c();
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61574(uVar10);
  *param_1 = param_2;
  return;
}



/* Entry: 101fb67b4; end: 101fb682f;  */

void FUN_101fb67b4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 101fb6830; end: 101fb6837;  */

undefined8 FUN_101fb6830(void)

{
  return 0x1b;
}



/* Entry: 101fb6838; end: 101fb68bb;  */

void FUN_101fb6838(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x101fb692c,param_2,FUN_101fb6930,param_2,0x101fb6958,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 101fb68bc; end: 101fb68eb;  */

undefined ** FUN_101fb68bc(void)

{
  return &PTR_DAT_113066820;
}



/* Entry: 101fb68ec; end: 101fb690b;  */

void FUN_101fb68ec(void)

{
  func_0x000107c61168(&PTR_PTR_112e4aec0);
  return;
}



/* Entry: 101fb690c; end: 101fb692f;  */

undefined1  [16] FUN_101fb690c(void)

{
  return ZEXT816(0x1104b2790);
}



/* Entry: 101fb6930; end: 101fb6983;  */

void FUN_101fb6930(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101fb6984; end: 101fb69bf;  */

void FUN_101fb6984(undefined8 *param_1,undefined8 param_2)

{
  FUN_101fb69c0();
  func_0x0001000a7f38("SCBitmojiGroupProfileSharingScopeInitializationPluginRegistryServiceProvider"
                      ,0x4c,2);
  *param_1 = param_2;
  return;
}



/* Entry: 101fb69c0; end: 101fb6bab;  */

void FUN_101fb69c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074d000;
  ppuVar4 = &PTR_DAT_113066820;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_1);
  uVar2 = 0x112e4af60;
  func_0x0001000285a8(0x112e4af60,&UNK_10da43ba0);
  func_0x0001000a6ee8(&UNK_1104b2790,
                      "BitmojiGroupProfileSharingEntryPointWrapperScopeInitializationPluginKey",0x47
                      ,2,FUN_101fb6c20,param_1,uVar2,&UNK_1104b2790,&PTR_DAT_112e4ae58);
  func_0x000107c61574(param_1);
  puVar3 = &UNK_1104b27e0;
  func_0x000107c613fc(&UNK_1104b27e0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1104b29f0,
                      "BitmojiGroupProfileSharingScopeGraphBridgeScopeInitializationPluginKey",0x46,
                      2,FUN_101fb6c28,puVar3,uVar2,&UNK_1104b29f0,&PTR_DAT_112e4aff0);
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_1104b2808;
  func_0x000107c613fc(&UNK_1104b2808,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1104b25b0,
                      "SCBitmojiGroupProfileSharingScopedServicesScopeInitializationPluginKey",0x46,
                      2,FUN_101fb6d10,puVar3,uVar2,&UNK_1104b25b0,&PTR_DAT_112e4add8);
  func_0x000107c61574(puVar3);
  uVar2 = 0x112e4af68;
  func_0x0001000285a8(0x112e4af68,&UNK_10da43ba8);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  return;
}



/* Entry: 101fb6bac; end: 101fb6c1f;  */

void FUN_101fb6bac(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x101fb6d4c;
  func_0x0001000823a8(0x101fb6d4c,param_3);
  func_0x000100082720("BitmojiGroupProfileSharingEntryPointWrapperScopeInitializationPluginProvider"
                      ,0x4c,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101fb6c20; end: 101fb6c27;  */

void FUN_101fb6c20(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x101fb6d4c;
  func_0x0001000823a8();
  func_0x000100082720("BitmojiGroupProfileSharingEntryPointWrapperScopeInitializationPluginProvider"
                      ,0x4c,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101fb6c28; end: 101fb6c67;  */

void FUN_101fb6c28(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_101fb72e8(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("BitmojiGroupProfileSharingScopeGraphBridgeScopeInitializationPluginProvider",
                      0x4b,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101fb6c68; end: 101fb6d0f;  */

void FUN_101fb6c68(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104b2830;
  func_0x000107c613fc(&UNK_1104b2830,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_101fb6d44;
  func_0x0001000823a8(FUN_101fb6d44,puVar1);
  func_0x000100082720("SCBitmojiGroupProfileSharingScopedServicesScopeInitializationPluginProvider",
                      0x4b,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 101fb6d10; end: 101fb6d17;  */

void FUN_101fb6d10(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1104b2830;
  func_0x000107c613fc(&UNK_1104b2830,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_101fb6d44;
  func_0x0001000823a8(FUN_101fb6d44,puVar3);
  func_0x000100082720("SCBitmojiGroupProfileSharingScopedServicesScopeInitializationPluginProvider",
                      0x4b,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 101fb6d18; end: 101fb6d43;  */

void FUN_101fb6d18(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101fb6d44; end: 101fb6d53;  */

void FUN_101fb6d44(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1104b2638;
  func_0x000107c613fc(&UNK_1104b2638,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_101fb5d64;
  func_0x00010058fa64(FUN_101fb5d64,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101fb6d54; end: 101fb6ddb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101fb6d54(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_101fb7114();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112e4af70) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112e4af78) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101fb6ddc);
  (*pcVar1)();
}



/* Entry: 101fb6ddc; end: 101fb6e3b; -[_TtC42BitmojiGroupProfileSharingScopeGraphBridge57BitmojiGroupProfileSharingScopeGraphBridgeSaberEntryPoint init] */

void FUN_101fb6ddc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("BitmojiGroupProfileSharingScopeGraphBridge.BitmojiGroupProfileSharingScopeGraphBridgeSaberEntryPoint"
                      ,100,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101fb6e08);
  (*pcVar1)();
}



/* Entry: 101fb6e3c; end: 101fb6e73; -[_TtC42BitmojiGroupProfileSharingScopeGraphBridge57BitmojiGroupProfileSharingScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101fb6e58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101fb6e5c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fb6e3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e4af70));
  return;
}



/* Entry: 101fb6e74; end: 101fb6e9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fb6e74(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112e4af78),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112e4af70));
  return;
}



/* Entry: 101fb6e9c; end: 101fb6ebb;  */

void FUN_101fb6e9c(void)

{
  func_0x000107c61168(&PTR_PTR_1128114d8);
  return;
}



/* Entry: 101fb6ebc; end: 101fb6f43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101fb6ebc(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e4afa8) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112e4afb0);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101fb6f44);
  (*pcVar2)();
}



/* Entry: 101fb6f44; end: 101fb702b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101fb6f44(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  code *pcVar5;
  
  puVar2 = PTR_PTR_1126afc98;
  func_0x000107c61168();
  func_0x000107c3e26c();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e4afa8);
  *(undefined **)(unaff_x20 + _DAT_112e4afa8) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e4afb0);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112e4afb0))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1104b2950;
  func_0x000107c613fc(&UNK_1104b2950,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x101fb7030,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 101fb702c; end: 101fb7037;  */

void FUN_101fb702c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 101fb7038; end: 101fb7097; -[_TtC42BitmojiGroupProfileSharingScopeGraphBridge57SCBitmojiGroupProfileSharingScopedServicesSaberEntryPoint init] */

void FUN_101fb7038(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("BitmojiGroupProfileSharingScopeGraphBridge.SCBitmojiGroupProfileSharingScopedServicesSaberEntryPoint"
                      ,100,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101fb7064);
  (*pcVar1)();
}



/* Entry: 101fb7098; end: 101fb70cf; -[_TtC42BitmojiGroupProfileSharingScopeGraphBridge57SCBitmojiGroupProfileSharingScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fb7098(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e4afb0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e4afa8));
  return;
}



/* Entry: 101fb70d0; end: 101fb70d3;  */

void FUN_101fb70d0(void)

{
  return;
}



/* Entry: 101fb70d4; end: 101fb70f3;  */

void FUN_101fb70d4(void)

{
  FUN_101fb6f44();
  return;
}



/* Entry: 101fb70f4; end: 101fb7113;  */

void FUN_101fb70f4(void)

{
  func_0x000107c61168(&PTR_PTR_1128115a0);
  return;
}



/* Entry: 101fb7114; end: 101fb71e3;  */

undefined8 FUN_101fb7114(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x000107c61428(0x112e4afe0,&uStack_40,0x20,0);
  func_0x000107c61134();
  func_0x000107c61180();
  puVar1 = &uStack_40;
  func_0x000107c614a8(puVar1);
  if (unaff_x20 == (undefined8 *)0x0) {
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x000107c60234(&uStack_60,unaff_x20);
    func_0x000107c615e8(unaff_x20);
    puVar1 = unaff_x20;
  }
  uStack_38 = uStack_58;
  uStack_40 = uStack_60;
  lStack_28 = lStack_48;
  uStack_30 = uStack_50;
  if (lStack_48 == 0) {
    func_0x00010006e7f4(&uStack_40);
    uStack_68 = 0;
  }
  else {
    FUN_101fb71e4();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 101fb71e4; end: 101fb7203;  */

void FUN_101fb71e4(void)

{
  func_0x000107c61168(&PTR_PTR_112811668);
  return;
}



/* Entry: 101fb7204; end: 101fb726f;  */

void FUN_101fb7204(void)

{
  func_0x0001000285a8(0x112e4afe8,&UNK_10da43c88);
  func_0x0001000823a8(0x101fb7244,0);
  return;
}



/* Entry: 101fb7270; end: 101fb72ab; -[_TtC42BitmojiGroupProfileSharingScopeGraphBridge50BitmojiGroupProfileSharingScopeGraphBridgeServices init] */

void FUN_101fb7270(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101fb72ac; end: 101fb72df;  */

void FUN_101fb72ac(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101fb72e0; end: 101fb72e7;  */

undefined8 FUN_101fb72e0(void)

{
  return 0x1b;
}



/* Entry: 101fb72e8; end: 101fb745f;  */

void FUN_101fb72e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104b2998;
  func_0x000107c613fc(&UNK_1104b2998,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_101fb7460,puVar1);
  return;
}



/* Entry: 101fb7460; end: 101fb7467;  */

void FUN_101fb7460(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  func_0x000100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&uStack_38);
  func_0x000107c61428(0x112e4afe0,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e4afe0,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1104b2a30;
  func_0x000107c613fc(&UNK_1104b2a30,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x101fb7514;
  func_0x00010058fa64(0x101fb7514,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101fb7468; end: 101fb74c3;  */

void FUN_101fb7468(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e4afe0,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112e4afe0,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 101fb74c4; end: 101fb751b;  */

undefined ** FUN_101fb74c4(void)

{
  return &PTR_DAT_113066820;
}



/* Entry: 101fb751c; end: 101fb7563; -[SCBitmojiGroupProfileSharingScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fb751c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e4b040;
  func_0x000107c61428(param_1 + _DAT_112e4b040,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101fb7564; end: 101fb75bb; -[SCBitmojiGroupProfileSharingScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fb7564(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e4b040;
  func_0x000107c61428(param_1 + _DAT_112e4b040,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101fb75bc; end: 101fb7603; -[SCBitmojiGroupProfileSharingScopeGraphBridgeSaberEntryPoint bitmojiGroupProfileSharingScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fb75bc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e4b048;
  func_0x000107c61428(param_1 + _DAT_112e4b048,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101fb7604; end: 101fb7667; -[SCBitmojiGroupProfileSharingScopeGraphBridgeSaberEntryPoint setBitmojiGroupProfileSharingScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fb7604(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e4b048;
  func_0x000107c61428(param_1 + _DAT_112e4b048,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101fb7668; end: 101fb779b;  */

/* WARNING: Possible PIC construction at 0x000101fb7720: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fb773c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fb7758: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101fb7724) */
/* WARNING: Removing unreachable block (ram,0x000101fb7740) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fb7668(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  func_0x000107c3e9e4();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_101fb6e9c();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_101fb7114();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101fb779c);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112e4af70) = lVar5;
    *(long *)(lVar4 + _DAT_112e4af78) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 101fb779c; end: 101fb77c3; -[SCBitmojiGroupProfileSharingScopeGraphBridgeSaberEntryPoint begin] */

void FUN_101fb779c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101fb7668();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101fb77c4; end: 101fb7807; -[SCBitmojiGroupProfileSharingScopeGraphBridgeSaberEntryPoint end] */

void FUN_101fb77c4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101fb7808; end: 101fb799f;  */

void FUN_101fb7808(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffc7) || (param_3 != -0x7ffffffef0fb0f80)) {
      uVar2 = 0xd000000000000039;
      func_0x000107c605b8(0xd000000000000039,0x800000010f04f080,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "BitmojiGroupProfileSharingScopeGraphBridge/SCBitmojiGroupProfileSharingScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x6c,2,0x2f,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101fb79a0);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52d08();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101fb79a0; end: 101fb7a4b; -[SCBitmojiGroupProfileSharingScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_101fb79a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_101fb7808(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101fb7a4c; end: 101fb7ab7; -[SCBitmojiGroupProfileSharingScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fb7a4c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e4b040,0);
  *(undefined8 *)(param_1 + _DAT_112e4b048) = 0;
  *(undefined8 *)(param_1 + _DAT_112e4b050) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101fb7ab8; end: 101fb7aeb;  */

void FUN_101fb7ab8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101fb7aec; end: 101fb7b33; -[SCBitmojiGroupProfileSharingScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101fb7b18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101fb7b1c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fb7aec(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e4b040);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e4b048));
  return;
}



/* Entry: 101fb7b34; end: 101fb7b53;  */

void FUN_101fb7b34(void)

{
  func_0x000107c61168(&PTR_PTR_112811718);
  return;
}



/* Entry: 101fb7b54; end: 101fb7b9b; -[SCSCBitmojiGroupProfileSharingScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fb7b54(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e4b080;
  func_0x000107c61428(param_1 + _DAT_112e4b080,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101fb7b9c; end: 101fb7bf3; -[SCSCBitmojiGroupProfileSharingScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fb7b9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e4b080;
  func_0x000107c61428(param_1 + _DAT_112e4b080,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101fb7bf4; end: 101fb7ccb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fb7bf4(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  plVar7 = &lStack_50;
  lVar3 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = 0;
    FUN_101fb70f4();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112e4afa8) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101fb7ccc);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112e4afb0);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e4b088);
    *(long **)(unaff_x20 + _DAT_112e4b088) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 101fb7ccc; end: 101fb7cf3; -[SCSCBitmojiGroupProfileSharingScopedServicesSaberEntryPoint begin] */

void FUN_101fb7ccc(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101fb7bf4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101fb7cf4; end: 101fb7e6b;  */

/* WARNING: Possible PIC construction at 0x000101fb7d5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fb7df4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101fb7d60) */
/* WARNING: Removing unreachable block (ram,0x000101fb7df8) */
/* WARNING: Removing unreachable block (ram,0x000101fb7e10) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fb7cf4(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112e4b088);
  if (lVar2 == 0) {
    func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_end_1125c29d0);
  }
  else {
    puVar1 = PTR_PTR_1126afc98;
    func_0x000107c61168(PTR_PTR_1126afc98);
    func_0x000107c61174(lVar2);
    func_0x000107c3e26c(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 101fb7e6c; end: 101fb7e73;  */

void FUN_101fb7e6c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 101fb7e74; end: 101fb7ea7; -[SCSCBitmojiGroupProfileSharingScopedServicesSaberEntryPoint end] */

void FUN_101fb7e74(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101fb7cf4();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101fb7ea8; end: 101fb7fc7;  */

void FUN_101fb7ea8(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 != 0x6e496e69676562 || param_3 != -0x1900000000000000) &&
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) == 0))
  {
    func_0x000107c602fc(0x15);
    func_0x000107c6142c(0xe000000000000000);
    func_0x000107c5fb78(param_2,param_3);
    func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                        "BitmojiGroupProfileSharingScopeGraphBridge/SCSCBitmojiGroupProfileSharingScopedServicesSaberEntryPoint.swift"
                        ,0x6c,2,0x2b,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101fb7fc8);
    (*pcVar1)();
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c52c38();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



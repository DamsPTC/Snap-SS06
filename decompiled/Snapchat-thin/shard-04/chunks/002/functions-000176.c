/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103287880; end: 103287887;  */

void FUN_103287880(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103287888; end: 103287927;  */

void FUN_103287888(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103287928; end: 103287947;  */

void FUN_103287928(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103287948; end: 1032879cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103287948(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f506d0) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112f506d8);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1032879d0);
  (*pcVar2)();
}



/* Entry: 1032879d0; end: 103287ab7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1032879d0(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f506d0);
  *(undefined **)(unaff_x20 + _DAT_112f506d0) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f506d8);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112f506d8))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1106312d8;
  func_0x000107c613fc(&UNK_1106312d8,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x103287abc,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 103287ab8; end: 103287ac3;  */

void FUN_103287ab8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 103287ac4; end: 103287b23; -[_TtC51DiscoverFeedUpNextV2PlaybackSessionScopeGraphBridge66SCDiscoverFeedUpNextV2PlaybackSessionScopedServicesSaberEntryPoint init] */

void FUN_103287ac4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("DiscoverFeedUpNextV2PlaybackSessionScopeGraphBridge.SCDiscoverFeedUpNextV2PlaybackSessionScopedServicesSaberEntryPoint"
                      ,0x76,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103287af0);
  (*pcVar1)();
}



/* Entry: 103287b24; end: 103287b5b; -[_TtC51DiscoverFeedUpNextV2PlaybackSessionScopeGraphBridge66SCDiscoverFeedUpNextV2PlaybackSessionScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103287b24(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f506d8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f506d0));
  return;
}



/* Entry: 103287b5c; end: 103287b5f;  */

void FUN_103287b5c(void)

{
  return;
}



/* Entry: 103287b60; end: 103287b7f;  */

void FUN_103287b60(void)

{
  FUN_1032879d0();
  return;
}



/* Entry: 103287b80; end: 103287b9f;  */

void FUN_103287b80(void)

{
  func_0x000107c61168(&PTR_PTR_1128c5628);
  return;
}



/* Entry: 103287ba0; end: 103287c6f;  */

undefined8 FUN_103287ba0(void)

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
  
  func_0x000107c61428(0x112f50708,&uStack_40,0x20,0);
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
    FUN_103287c70();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 103287c70; end: 103287c8f;  */

void FUN_103287c70(void)

{
  func_0x000107c61168(&PTR_PTR_1128c56f0);
  return;
}



/* Entry: 103287c90; end: 103287cdb;  */

void FUN_103287c90(undefined8 param_1)

{
  func_0x0001000285a8(0x112f50710,&UNK_10dba5658);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_103287d48,param_1);
  return;
}



/* Entry: 103287cdc; end: 103287d47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103287cdc(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_103287c70();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112f50718) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 103287d48; end: 103287d4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103287d48(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_103287c70();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112f50718) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 103287d50; end: 103287d9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103287d50(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f50718) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103287d9c; end: 103287dfb; -[_TtC51DiscoverFeedUpNextV2PlaybackSessionScopeGraphBridge59DiscoverFeedUpNextV2PlaybackSessionScopeGraphBridgeServices init] */

void FUN_103287d9c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("DiscoverFeedUpNextV2PlaybackSessionScopeGraphBridge.DiscoverFeedUpNextV2PlaybackSessionScopeGraphBridgeServices"
                      ,0x6f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103287dc8);
  (*pcVar1)();
}



/* Entry: 103287dfc; end: 103287e13; -[_TtC51DiscoverFeedUpNextV2PlaybackSessionScopeGraphBridge59DiscoverFeedUpNextV2PlaybackSessionScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103287dfc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f50718));
  return;
}



/* Entry: 103287e14; end: 103287f8b;  */

void FUN_103287e14(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110631320;
  func_0x000107c613fc(&UNK_110631320,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_103287f8c,puVar1);
  return;
}



/* Entry: 103287f8c; end: 103287f93;  */

void FUN_103287f8c(undefined8 *param_1)

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
  func_0x000107c61428(0x112f50708,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112f50708,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1106313b8;
  func_0x000107c613fc(&UNK_1106313b8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x103288040;
  func_0x00010058fa64(0x103288040,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 103287f94; end: 103287fef;  */

void FUN_103287f94(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112f50708,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112f50708,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 103287ff0; end: 103288047;  */

undefined ** FUN_103287ff0(void)

{
  return &PTR_DAT_113066af0;
}



/* Entry: 103288048; end: 10328808f; -[SCDiscoverFeedUpNextV2PlaybackSessionScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103288048(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f50770;
  func_0x000107c61428(param_1 + _DAT_112f50770,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103288090; end: 1032880e7; -[SCDiscoverFeedUpNextV2PlaybackSessionScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103288090(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f50770;
  func_0x000107c61428(param_1 + _DAT_112f50770,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1032880e8; end: 10328812f; -[SCDiscoverFeedUpNextV2PlaybackSessionScopeGraphBridgeSaberEntryPoint discoverFeedUpNextV2PlaybackSessionScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032880e8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f50778;
  func_0x000107c61428(param_1 + _DAT_112f50778,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 103288130; end: 103288193; -[SCDiscoverFeedUpNextV2PlaybackSessionScopeGraphBridgeSaberEntryPoint setDiscoverFeedUpNextV2PlaybackSessionScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103288130(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f50778;
  func_0x000107c61428(param_1 + _DAT_112f50778,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 103288194; end: 1032882c7;  */

/* WARNING: Possible PIC construction at 0x00010328824c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103288268: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103288284: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103288250) */
/* WARNING: Removing unreachable block (ram,0x00010328826c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103288194(void)

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
  func_0x000107c41fb8();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_1032877fc();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_103287ba0();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1032882c8);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112f505c8) = lVar5;
    *(long *)(lVar4 + _DAT_112f505d0) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1032882c8; end: 1032882ef; -[SCDiscoverFeedUpNextV2PlaybackSessionScopeGraphBridgeSaberEntryPoint begin] */

void FUN_1032882c8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103288194();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1032882f0; end: 103288333; -[SCDiscoverFeedUpNextV2PlaybackSessionScopeGraphBridgeSaberEntryPoint end] */

void FUN_1032882f0(undefined8 param_1)

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



/* Entry: 103288334; end: 1032884cb;  */

void FUN_103288334(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffbe) || (param_3 != -0x7ffffffef0ecb6f0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000042,0x800000010f134910,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "DiscoverFeedUpNextV2PlaybackSessionScopeGraphBridge/SCDiscoverFeedUpNextV2PlaybackSessionScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x7e,2,0x4e,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1032884cc);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c541c8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1032884cc; end: 103288577; -[SCDiscoverFeedUpNextV2PlaybackSessionScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_1032884cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103288334(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103288578; end: 1032885e3; -[SCDiscoverFeedUpNextV2PlaybackSessionScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103288578(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f50770,0);
  *(undefined8 *)(param_1 + _DAT_112f50778) = 0;
  *(undefined8 *)(param_1 + _DAT_112f50780) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1032885e4; end: 103288617;  */

void FUN_1032885e4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103288618; end: 10328865f; -[SCDiscoverFeedUpNextV2PlaybackSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103288644: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103288648) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103288618(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f50770);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f50778));
  return;
}



/* Entry: 103288660; end: 10328867f;  */

void FUN_103288660(void)

{
  func_0x000107c61168(&PTR_PTR_1128c57b0);
  return;
}



/* Entry: 103288680; end: 10328868b; -[SCSCDiscoverFeedUpNextV2RequestingServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103288680(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f507b0;
  func_0x000107c61428(param_1 + _DAT_112f507b0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10328868c; end: 103288697; -[SCSCDiscoverFeedUpNextV2RequestingServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10328868c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f507b0;
  func_0x000107c61428(param_1 + _DAT_112f507b0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103288698; end: 1032886a3; -[SCSCDiscoverFeedUpNextV2RequestingServicesSaberServiceProvider discoverFeedUpNextV2PlaybackSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103288698(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f507b8;
  func_0x000107c61428(param_1 + _DAT_112f507b8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1032886a4; end: 1032886e7;  */

void FUN_1032886a4(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1032886e8; end: 1032886f3; -[SCSCDiscoverFeedUpNextV2RequestingServicesSaberServiceProvider setDiscoverFeedUpNextV2PlaybackSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032886e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f507b8;
  func_0x000107c61428(param_1 + _DAT_112f507b8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1032886f4; end: 103288747;  */

void FUN_1032886f4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103288748; end: 10328895b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103288748(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_48;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c41fb4();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x0001032878ac();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112f50718);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f507c0);
      *(long *)(unaff_x20 + _DAT_112f507c0) = lVar4;
      func_0x000107c6157c();
      func_0x000107c6157c(lVar4);
      func_0x000107c61574(uVar5);
      func_0x000100083b20(&uStack_48);
      func_0x000107c61574(lVar4);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar3);
      return uStack_48;
    }
    func_0x000107c61170(lVar2);
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "DiscoverFeedUpNextV2PlaybackSessionScopeGraphBridge/SCSCDiscoverFeedUpNextV2RequestingServicesSaberServiceProvider.swift"
                      ,0x78,2,0x3f,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103288874);
  (*pcVar1)();
}



/* Entry: 10328895c; end: 10328898f; -[SCSCDiscoverFeedUpNextV2RequestingServicesSaberServiceProvider provide] */

void FUN_10328895c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103288748();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103288990; end: 1032889c3; -[SCSCDiscoverFeedUpNextV2RequestingServicesSaberServiceProvider __safeProvide] */

void FUN_103288990(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000103288874();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1032889c4; end: 103288a07; -[SCSCDiscoverFeedUpNextV2RequestingServicesSaberServiceProvider end] */

void FUN_1032889c4(undefined8 param_1)

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



/* Entry: 103288a08; end: 103288b9f;  */

void FUN_103288a08(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffc5) || (param_3 != -0x7ffffffef0ecb5a0)) {
      uVar2 = 0xd00000000000003b;
      func_0x000107c605b8(0xd00000000000003b,0x800000010f134a60,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "DiscoverFeedUpNextV2PlaybackSessionScopeGraphBridge/SCSCDiscoverFeedUpNextV2RequestingServicesSaberServiceProvider.swift"
                            ,0x78,2,0x54,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103288ba0);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c541c4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103288ba0; end: 103288c4b; -[SCSCDiscoverFeedUpNextV2RequestingServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_103288ba0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103288a08(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103288c4c; end: 103288cbf; -[SCSCDiscoverFeedUpNextV2RequestingServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103288c4c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f507b0,0);
  func_0x000107c61614(param_1 + _DAT_112f507b8,0);
  *(undefined8 *)(param_1 + _DAT_112f507c0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103288cc0; end: 103288cf3;  */

void FUN_103288cc0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103288cf4; end: 103288d3b; -[SCSCDiscoverFeedUpNextV2RequestingServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103288cf4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f507b0);
  func_0x000107c61610(param_1 + _DAT_112f507b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f507c0));
  return;
}



/* Entry: 103288d3c; end: 103288d5b;  */

void FUN_103288d3c(void)

{
  func_0x000107c61168(&PTR_PTR_112f50808);
  return;
}



/* Entry: 103288d5c; end: 103288da3; -[SCSCDiscoverFeedUpNextV2PlaybackSessionScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103288d5c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f50870;
  func_0x000107c61428(param_1 + _DAT_112f50870,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103288da4; end: 103288dfb; -[SCSCDiscoverFeedUpNextV2PlaybackSessionScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103288da4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f50870;
  func_0x000107c61428(param_1 + _DAT_112f50870,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103288dfc; end: 103288ed3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103288dfc(undefined8 param_1,long param_2)

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
    FUN_103287b80();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112f506d0) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103288ed4);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112f506d8);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f50878);
    *(long **)(unaff_x20 + _DAT_112f50878) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 103288ed4; end: 103288efb; -[SCSCDiscoverFeedUpNextV2PlaybackSessionScopedServicesSaberEntryPoint begin] */

void FUN_103288ed4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103288dfc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103288efc; end: 103289073;  */

/* WARNING: Possible PIC construction at 0x000103288f64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103288ffc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103288f68) */
/* WARNING: Removing unreachable block (ram,0x000103289000) */
/* WARNING: Removing unreachable block (ram,0x000103289018) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103288efc(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112f50878);
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



/* Entry: 103289074; end: 10328907b;  */

void FUN_103289074(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 10328907c; end: 1032890af; -[SCSCDiscoverFeedUpNextV2PlaybackSessionScopedServicesSaberEntryPoint end] */

void FUN_10328907c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103288efc();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1032890b0; end: 1032891cf;  */

void FUN_1032890b0(long param_1,long param_2,long param_3)

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
                        "DiscoverFeedUpNextV2PlaybackSessionScopeGraphBridge/SCSCDiscoverFeedUpNextV2PlaybackSessionScopedServicesSaberEntryPoint.swift"
                        ,0x7e,2,0x4a,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1032891d0);
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



/* Entry: 1032891d0; end: 10328927b; -[SCSCDiscoverFeedUpNextV2PlaybackSessionScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1032891d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1032890b0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10328927c; end: 1032892db; -[SCSCDiscoverFeedUpNextV2PlaybackSessionScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10328927c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f50870,0);
  *(undefined8 *)(param_1 + _DAT_112f50878) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1032892dc; end: 10328930f;  */

void FUN_1032892dc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103289310; end: 103289347; -[SCSCDiscoverFeedUpNextV2PlaybackSessionScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103289310(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f50870);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f50878));
  return;
}



/* Entry: 103289348; end: 103289367;  */

void FUN_103289348(void)

{
  func_0x000107c61168(&PTR_PTR_1128c58c0);
  return;
}



/* Entry: 103289368; end: 10328947b; -[SCSpotlightPageSessionCoordinator registerDedupeFp:toPageType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103289368(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [24];
  
  func_0x000107c5faec(param_4);
  lVar1 = _DAT_112f508a8;
  uVar5 = *(undefined8 *)(param_1 + _DAT_112f508a8);
  func_0x000107c61174(param_3);
  lVar3 = param_1;
  func_0x000107c61174();
  func_0x000107c4b940(uVar5);
  lVar2 = _DAT_112f508b0;
  func_0x000107c61428(lVar3 + _DAT_112f508b0,auStack_68,0x21,0);
  func_0x000107c61174(param_3);
  func_0x000107c61434(param_2);
  uVar5 = *(undefined8 *)(lVar3 + lVar2);
  func_0x000107c61558(uVar5);
  uVar4 = *(undefined8 *)(lVar3 + lVar2);
  *(undefined8 *)(lVar3 + lVar2) = 0x8000000000000000;
  func_0x0001009053d4(param_4,param_2,param_3,uVar5);
  func_0x000107c61170(param_3);
  *(undefined8 *)(lVar3 + lVar2) = uVar4;
  func_0x000107c614a8(auStack_68);
  func_0x000107c5d278(*(undefined8 *)(param_1 + lVar1));
  func_0x000107c61170(lVar3);
  func_0x000107c61170(param_3);
  func_0x000107c6142c(param_2);
  return;
}



/* Entry: 10328947c; end: 1032896e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10328947c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  undefined1 *puVar10;
  ulong uVar11;
  long unaff_x20;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  undefined1 auStack_78 [24];
  
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112f508a8);
  func_0x000107c4b940();
  if (param_1 >> 0x3e == 0) {
    uVar16 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
    lVar4 = _DAT_112f508b0;
  }
  else {
    uVar16 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar16 = param_1;
    }
    func_0x000107c60480();
    lVar4 = _DAT_112f508b0;
  }
  _DAT_112f508b0 = lVar4;
  if (uVar16 != 0) {
    lVar15 = 4;
    do {
      uVar13 = lVar15 - 4;
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x103289698);
          (*pcVar5)();
        }
        uVar7 = *(ulong *)(param_1 + lVar15 * 8);
        func_0x000107c61174();
      }
      else {
        uVar7 = uVar13;
        func_0x0001002ec9a0(uVar13,param_1);
      }
      uVar1 = lVar15 - 3;
      if (SCARRY8(uVar13,1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10328968c);
        (*pcVar5)();
      }
      puVar10 = auStack_78;
      func_0x000107c61428(unaff_x20 + lVar4,puVar10,0x21,0);
      func_0x000107c61174();
      uVar8 = *(ulong *)(unaff_x20 + lVar4);
      func_0x000107c61558();
      uVar9 = (uint)uVar8;
      lVar14 = *(long *)(unaff_x20 + lVar4);
      *(undefined8 *)(unaff_x20 + lVar4) = 0x8000000000000000;
      uVar13 = uVar7;
      func_0x000100121450();
      uVar11 = (ulong)~(uint)puVar10 & 1;
      lVar2 = *(long *)(lVar14 + 0x10) + uVar11;
      if (SCARRY8(*(long *)(lVar14 + 0x10),uVar11)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x103289690);
        (*pcVar5)();
      }
      if (*(long *)(lVar14 + 0x18) < lVar2) {
        func_0x000101eb6378(lVar2);
        uVar13 = uVar7;
        func_0x000100121450();
        if (((uint)puVar10 & 1) != (uVar9 & 1)) {
          func_0x0001002ed07c(0);
          func_0x000107c60624();
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1032896e8);
          (*pcVar5)();
        }
LAB_103289618:
        if (((ulong)puVar10 & 1) == 0) goto LAB_103289620;
LAB_1032894ec:
        puVar3 = (undefined8 *)(*(long *)(lVar14 + 0x38) + uVar13 * 0x10);
        uVar12 = puVar3[1];
        *puVar3 = param_2;
        puVar3[1] = param_3;
        func_0x000107c61434();
        func_0x000107c61170(uVar7);
        func_0x000107c6142c(uVar12);
      }
      else {
        if ((uVar8 & 1) != 0) goto LAB_103289618;
        func_0x00010090552c();
        if (((ulong)puVar10 & 1) != 0) goto LAB_1032894ec;
LAB_103289620:
        lVar2 = lVar14 + (uVar13 >> 6) * 8;
        *(ulong *)(lVar2 + 0x40) = *(ulong *)(lVar2 + 0x40) | 1L << (uVar13 & 0x3f);
        *(ulong *)(*(long *)(lVar14 + 0x30) + uVar13 * 8) = uVar7;
        puVar3 = (undefined8 *)(*(long *)(lVar14 + 0x38) + uVar13 * 0x10);
        *puVar3 = param_2;
        puVar3[1] = param_3;
        if (SCARRY8(*(long *)(lVar14 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x103289694);
          (*pcVar5)();
        }
        *(long *)(lVar14 + 0x10) = *(long *)(lVar14 + 0x10) + 1;
        func_0x000107c61434();
      }
      *(long *)(unaff_x20 + lVar4) = lVar14;
      func_0x000107c614a8(auStack_78);
      func_0x000107c61170(uVar7);
      lVar15 = lVar15 + 1;
    } while (uVar1 != uVar16);
  }
  func_0x000107c5d278(uVar6);
  return;
}



/* Entry: 1032896e8; end: 103289773; -[SCSpotlightPageSessionCoordinator registerDedupeFps:toPageType:] */

/* WARNING: Possible PIC construction at 0x000103289758: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010328975c) */

void FUN_1032896e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x0001002ed07c(0);
  func_0x000107c5fc54(param_3,uVar1);
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_1);
  FUN_10328947c(param_3,param_4,uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 103289774; end: 1032897f3;  */

undefined1  [16] FUN_103289774(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  if (*(long *)(param_2 + 0x10) == 0) {
    uVar3 = 0;
    uVar4 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x000107c61434(param_2);
    func_0x000100121450();
    if ((uVar2 & 1) == 0) {
      uVar3 = 0;
      uVar4 = 0;
    }
    else {
      puVar1 = (undefined8 *)(*(long *)(param_2 + 0x38) + param_1 * 0x10);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      func_0x000107c61434(uVar4);
    }
    func_0x000107c6142c(param_2);
  }
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = uVar3;
  return auVar5;
}



/* Entry: 1032897f4; end: 1032898cb; -[SCSpotlightPageSessionCoordinator registeredPageTypeForDedupeFp:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032897f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [24];
  
  lVar1 = _DAT_112f508a8;
  uVar4 = *(undefined8 *)(param_1 + _DAT_112f508a8);
  func_0x000107c61174(param_3);
  lVar2 = param_1;
  func_0x000107c61174();
  func_0x000107c4b940(uVar4);
  lVar3 = _DAT_112f508b0;
  func_0x000107c61428(lVar2 + _DAT_112f508b0,auStack_58,0x20,0);
  lVar3 = *(long *)(lVar2 + lVar3);
  uVar4 = param_3;
  FUN_103289774(param_3);
  func_0x000107c614a8(auStack_58);
  func_0x000107c5d278(*(undefined8 *)(param_1 + lVar1));
  func_0x000107c61170(param_3);
  func_0x000107c61170(lVar2);
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    func_0x000107c5fadc(uVar4,lVar3);
    func_0x000107c6142c(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1032898cc; end: 103289943; -[SCSpotlightPageSessionCoordinator init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032898cc(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  lVar1 = _DAT_112f508a8;
  puVar3 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_1 + lVar1) = puVar3;
  *(undefined **)(param_1 + _DAT_112f508b0) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103289944; end: 103289977;  */

void FUN_103289944(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103289978; end: 1032899af; -[SCSpotlightPageSessionCoordinator .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103289978(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f508a8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112f508b0));
  return;
}



/* Entry: 1032899b0; end: 1032899cf;  */

void FUN_1032899b0(void)

{
  func_0x000107c61168(&PTR_PTR_1128c5980);
  return;
}



/* Entry: 1032899d0; end: 1032899f3; +[SCSpotlightSubfeedPageType forYou] */

void FUN_1032899d0(void)

{
  func_0x000107c5fadc(0x756f59726f66,0xe600000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1032899f4; end: 103289a1b; +[SCSpotlightSubfeedPageType discover] */

void FUN_1032899f4(void)

{
  func_0x000107c5fadc(0x7265766f63736964,0xe800000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103289a1c; end: 103289a47; +[SCSpotlightSubfeedPageType following] */

void FUN_103289a1c(void)

{
  func_0x000107c5fadc(0x6e69776f6c6c6f66,0xe900000000000067);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103289a48; end: 103289a83; -[SCSpotlightSubfeedPageType init] */

void FUN_103289a48(undefined8 param_1)

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



/* Entry: 103289a84; end: 103289ab7;  */

void FUN_103289a84(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103289ab8; end: 103289abb; -[SCSpotlightSubfeedPageType .cxx_destruct] */

void FUN_103289ab8(void)

{
  return;
}



/* Entry: 103289abc; end: 103289adb;  */

void FUN_103289abc(void)

{
  func_0x000107c61168(&PTR_PTR_1128c5a40);
  return;
}



/* Entry: 103289adc; end: 103289aef;  */

bool FUN_103289adc(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103289af0; end: 103289b9b;  */

void FUN_103289af0(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103289b9c; end: 103289bc3;  */

void FUN_103289b9c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 2 < uVar2;
  return;
}



/* Entry: 103289bc4; end: 103289c13;  */

void FUN_103289bc4(void)

{
  undefined8 uVar1;
  
  func_0x000100442c3c(0);
  func_0x000107c610f8();
  uVar1 = 0xd00000000000001d;
  func_0x000100442ccc(0xd00000000000001d,0x800000010f134b70,0);
  uRam0000000113807188 = uVar1;
  return;
}



/* Entry: 103289c14; end: 103289c2f; +[SCSpotlightHeaderFeatureConfigKeys mixedFeedHideHeaderEnable] */

void FUN_103289c14(void)

{
  if (lRam0000000113517c30 != -1) {
    func_0x000107c61568(0x113517c30,FUN_103289bc4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000113807188);
  return;
}



/* Entry: 103289c30; end: 103289c7f;  */

void FUN_103289c30(void)

{
  undefined8 uVar1;
  
  func_0x000100bd658c(0);
  func_0x000107c610f8();
  uVar1 = 0xd00000000000001e;
  func_0x000100bd65fc(0xd00000000000001e,0x800000010f134b50,2);
  uRam0000000113807190 = uVar1;
  return;
}



/* Entry: 103289c80; end: 103289c9b; +[SCSpotlightHeaderFeatureConfigKeys mixedFeedHideHeaderOptions] */

void FUN_103289c80(void)

{
  if (lRam0000000113517c38 != -1) {
    func_0x000107c61568(0x113517c38,FUN_103289c30);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000113807190);
  return;
}



/* Entry: 103289c9c; end: 103289ceb;  */

void FUN_103289c9c(void)

{
  undefined8 uVar1;
  
  func_0x000100bd658c(0);
  func_0x000107c610f8();
  uVar1 = 0xd000000000000023;
  func_0x000100bd65fc(0xd000000000000023,0x800000010f134b20,2);
  uRam0000000113807198 = uVar1;
  return;
}



/* Entry: 103289cec; end: 103289d07; +[SCSpotlightHeaderFeatureConfigKeys mixedFeedDeepEnagementThrehold] */

void FUN_103289cec(void)

{
  if (lRam0000000113517c40 != -1) {
    func_0x000107c61568(0x113517c40,FUN_103289c9c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000113807198);
  return;
}



/* Entry: 103289d08; end: 103289d4b;  */

void FUN_103289d08(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  if (*param_3 == -1) {
    uVar1 = *param_4;
  }
  else {
    func_0x000107c61568(param_3,param_5);
    uVar1 = *param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uVar1);
  return;
}



/* Entry: 103289d4c; end: 103289d87; -[SCSpotlightHeaderFeatureConfigKeys init] */

void FUN_103289d4c(undefined8 param_1)

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



/* Entry: 103289d88; end: 103289dbb;  */

void FUN_103289d88(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103289dbc; end: 103289dc3; -[SCSpotlightHeaderFeatureConfigKeys .cxx_destruct] */

void FUN_103289dbc(void)

{
  return;
}



/* Entry: 103289dc4; end: 103289e03;  */

void FUN_103289dc4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f50908 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dba5920;
  func_0x000107c61520(&UNK_10dba5920,&UNK_110631488);
  puRam0000000112f50908 = puVar1;
  return;
}



/* Entry: 103289e04; end: 103289e13;  */

undefined1  [16] FUN_103289e04(void)

{
  return ZEXT816(0x110631488);
}



/* Entry: 103289e14; end: 103289e33;  */

void FUN_103289e14(void)

{
  func_0x000107c61168(&PTR_PTR_1128c5af0);
  return;
}



/* Entry: 103289e34; end: 103289e8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103289e34(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f50938);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103289e90; end: 103289ef3; -[SCSpotlightEndOfSubsInterstitialItem initWithId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103289e90(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  func_0x000107c5faec();
  puVar1 = (undefined8 *)(param_1 + _DAT_112f50938);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103289ef4; end: 103289f3f; -[SCSpotlightEndOfSubsInterstitialItem itemId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103289ef4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f50938);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112f50938))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100bda634; end: 100bda667;  */

void FUN_100bda634(long param_1)

{
  undefined1 auStack_18 [8];
  
  func_0x000107c61524(param_1,0,0,auStack_18,param_1 + 0x78);
  return;
}



/* Entry: 100bda668; end: 100bda67f;  */

void FUN_100bda668(long param_1,long param_2)

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



/* Entry: 100bda680; end: 100bda6f3; -[SCBitmoji3DPreviewServices initWithBitmoji3DPreviewFetcher:] */

undefined1 * FUN_100bda680(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126e4118;
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



/* Entry: 100bda6f4; end: 100bda8cf; -[SCComposerBitmojiFlatlandImageLoaderEntryPoint begin] */

/* WARNING: Possible PIC construction at 0x000100bda75c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bda7a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bda7f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bda830: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bda864: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bda898: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bda8a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100bda89c) */
/* WARNING: Removing unreachable block (ram,0x000100bda868) */
/* WARNING: Removing unreachable block (ram,0x000100bda834) */
/* WARNING: Removing unreachable block (ram,0x000100bda7fc) */
/* WARNING: Removing unreachable block (ram,0x000100bda7ac) */
/* WARNING: Removing unreachable block (ram,0x000100bda760) */
/* WARNING: Removing unreachable block (ram,0x000100bda8ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bda6f4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126afd90;
  func_0x000107c610f4(PTR_PTR_1126afd90);
  param_1 = param_1 + _DAT_112711e40;
  func_0x000107c61148(param_1);
  func_0x000107c40454();
  func_0x000107c61180();
  func_0x000107c459b4(puVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100bda8d0; end: 100bda943; -[SCComposerBitmojiFlatlandSceneDownloader initWithBitmojiFlatlandContentFetcher:] */

undefined1 * FUN_100bda8d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126e4110;
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



/* Entry: 100bda944; end: 100bda9b7; -[SCComposerBitmojiFlatlandBackgroundDownloader initWithBitmojiFlatlandContentFetcher:] */

undefined1 * FUN_100bda944(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126e4108;
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



/* Entry: 100bda9b8; end: 100bda9bf; -[SCBitmoji3DPreviewServices bitmoji3DPreviewFetcher] */

undefined8 FUN_100bda9b8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100bda9c0; end: 100bdaa33; -[SCComposerBitmoji3DPreviewDownloader initWith3DPreviewFetcher:] */

undefined1 * FUN_100bda9c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126e4100;
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



/* Entry: 100bdaa34; end: 100bdaaa7; -[SCSCChatMediaFetchingServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bdaa34(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_11301a580,0);
  func_0x000107c61614(param_1 + _DAT_11301a588,0);
  *(undefined8 *)(param_1 + _DAT_11301a590) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100bdaaa8; end: 100bdab53; -[SCSCChatMediaFetchingServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_100bdaaa8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100bdab54(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100bdab54; end: 100bdaceb;  */

void FUN_100bdab54(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffd8) || (param_3 != -0x7ffffffef0e3ddb0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000028,0x800000010f1c2250,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "ConvoUserSessionScopeGraphBridge/SCSCChatMediaFetchingServicesSaberServiceProvider.swift"
                            ,0x58,2,0x46,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100bdacec);
        (*pcVar1)();
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c539a4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100bdacec; end: 100bdacf7; -[SCSCChatMediaFetchingServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bdacec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11301a580;
  func_0x000107c61428(param_1 + _DAT_11301a580,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100bdacf8; end: 100bdad4b;  */

void FUN_100bdacf8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100bdad4c; end: 100bdad57; -[SCSCChatMediaFetchingServicesSaberServiceProvider setConvoUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bdad4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11301a588;
  func_0x000107c61428(param_1 + _DAT_11301a588,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100bdad58; end: 100bdad8b; -[SCSCChatMediaFetchingServicesSaberServiceProvider __safeProvide] */

void FUN_100bdad58(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100bdad8c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100bdad8c; end: 100bdae73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bdad8c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_48 [8];
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c40768();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c61170(lVar1);
    }
    else {
      lVar3 = 0;
      FUN_100bdaed0();
      func_0x000107c613fc();
      *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar2 + _DAT_113019fc0);
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_11301a590);
      *(long *)(unaff_x20 + _DAT_11301a590) = lVar3;
      func_0x000107c6157c();
      func_0x000107c6157c(lVar3);
      func_0x000107c61574(uVar4);
      FUN_100083b20(auStack_48);
      func_0x000107c61574(lVar3);
      func_0x000107c61170(lVar1);
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 100bdae74; end: 100bdae7f; -[SCSCChatMediaFetchingServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bdae74(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11301a580;
  func_0x000107c61428(param_1 + _DAT_11301a580,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100bdae80; end: 100bdaec3;  */

void FUN_100bdae80(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100bdaec4; end: 100bdaecf; -[SCSCChatMediaFetchingServicesSaberServiceProvider convoUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bdaec4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11301a588;
  func_0x000107c61428(param_1 + _DAT_11301a588,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100bdaed0; end: 100bdaf4b;  */

void FUN_100bdaed0(undefined8 param_1)

{
  if (lRam00000001130195e8 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e7ca60c);
  return;
}



/* Entry: 100bdaf4c; end: 100bdaf53;  */

void FUN_100bdaf4c(undefined8 *param_1)

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



/* Entry: 100bdaf54; end: 100bdafa7;  */

void FUN_100bdaf54(undefined8 *param_1)

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



/* Entry: 100bdafa8; end: 100bdafb7;  */

void FUN_100bdafa8(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_10022f038();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  *(undefined8 *)(lVar1 + 0x38) = uStack_90;
  puVar2 = PTR_PTR_1126a7f80;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar6 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar7 = uStack_90;
  func_0x000107c61174(uStack_90);
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar8 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar9 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar9 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010efc32c0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar9 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef29570);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar9 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010efc32e0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar9 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar7);
  func_0x000107c61174();
  uVar9 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef26830);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar9);
  func_0x000107c61174();
  puVar10 = puVar2;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  *(undefined **)(lVar1 + 0x40) = puVar10;
  *param_1 = lVar1;
  return;
}



/* Entry: 100bdafb8; end: 100bdb387;  */

void FUN_100bdafb8(long *param_1,long param_2)

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
  FUN_10022f038();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  puVar1 = PTR_PTR_1126a7f80;
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
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar2);
  func_0x000107c61174();
  uVar8 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010efc32c0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar8 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef29570);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar8 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010efc32e0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar8 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar8 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef26830);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar8);
  func_0x000107c61174();
  puVar9 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  *(undefined **)(param_2 + 0x40) = puVar9;
  *param_1 = param_2;
  return;
}



/* Entry: 100bdb388; end: 100bdb5c3; -[SCChatMediaFetchingServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bdb388(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  
  lVar1 = param_1 + _DAT_112724e20;
  func_0x000107c61148();
  lVar2 = lVar1;
  func_0x000107c3f854();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_112724e24;
  func_0x000107c61148();
  lVar3 = lVar1;
  func_0x000107c4b748();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_112724e28;
  func_0x000107c61148();
  lVar4 = lVar1;
  func_0x000107c444a4();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  puVar5 = PTR_PTR_1126aeea8;
  func_0x000107c61160();
  uVar6 = 0x19;
  FUN_1000819a8(0x19,0);
  func_0x000107c61180();
  lVar1 = param_1 + _DAT_112724e2c;
  func_0x000107c61148();
  lVar7 = lVar1;
  func_0x000107c4cdb8();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  param_1 = param_1 + _DAT_112724e30;
  func_0x000107c61148();
  lVar1 = param_1;
  func_0x000107c5dac4();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  puVar8 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc(PTR_PTR_1126ae720);
  func_0x000107c61180();
  puVar9 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc(PTR_PTR_1126ae720);
  func_0x000107c61180();
  puVar10 = PTR_PTR_1126ba1b8;
  func_0x000107c610f4(PTR_PTR_1126ba1b8);
  func_0x000107c47664();
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 100bdb5c4; end: 100bdb667; -[SCChatMediaFetchingServices initWithMediaFetcher:chatNoteAnimationThumbnailFetcher:] */

undefined1 *
FUN_100bdb5c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126fd930;
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



/* Entry: 100bdb668; end: 100bdb6b3;  */

void FUN_100bdb668(void)

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



/* Entry: 100bdb6b4; end: 100bdb727; -[SCSCLegacyTravelModeSignalProviderServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bdb6b4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_113017820,0);
  func_0x000107c61614(param_1 + _DAT_113017828,0);
  *(undefined8 *)(param_1 + _DAT_113017830) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100bdb728; end: 100bdb7d3; -[SCSCLegacyTravelModeSignalProviderServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_100bdb728(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100bdb7d4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100bdb7d4; end: 100bdb96b;  */

void FUN_100bdb7d4(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffdb) || (param_3 != -0x7ffffffef0e3fca0)) {
      uVar2 = 0xd000000000000025;
      func_0x000107c605b8(0xd000000000000025,0x800000010f1c0360,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "CmUserSessionScopeGraphBridge/SCSCLegacyTravelModeSignalProviderServicesSaberServiceProvider.swift"
                            ,0x62,2,0x39,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100bdb96c);
        (*pcVar1)();
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c534fc();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100bdb96c; end: 100bdb977; -[SCSCLegacyTravelModeSignalProviderServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bdb96c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113017820;
  func_0x000107c61428(param_1 + _DAT_113017820,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100bdb978; end: 100bdb9cb;  */

void FUN_100bdb978(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100bdb9cc; end: 100bdb9d7; -[SCSCLegacyTravelModeSignalProviderServicesSaberServiceProvider setCmUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bdb9cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113017828;
  func_0x000107c61428(param_1 + _DAT_113017828,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100bdb9d8; end: 100bdba0b; -[SCSCLegacyTravelModeSignalProviderServicesSaberServiceProvider __safeProvide] */

void FUN_100bdb9d8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100bdba0c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100bdba0c; end: 100bdbaf3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bdba0c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_48 [8];
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c3fc88();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c61170(lVar1);
    }
    else {
      lVar3 = 0;
      FUN_100bdbb50();
      func_0x000107c613fc();
      *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar2 + _DAT_1130174d0);
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_113017830);
      *(long *)(unaff_x20 + _DAT_113017830) = lVar3;
      func_0x000107c6157c();
      func_0x000107c6157c(lVar3);
      func_0x000107c61574(uVar4);
      FUN_100083b20(auStack_48);
      func_0x000107c61574(lVar3);
      func_0x000107c61170(lVar1);
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 100bdbaf4; end: 100bdbaff; -[SCSCLegacyTravelModeSignalProviderServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bdbaf4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113017820;
  func_0x000107c61428(param_1 + _DAT_113017820,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100bdbb00; end: 100bdbb43;  */

void FUN_100bdbb00(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100bdbb44; end: 100bdbb4f; -[SCSCLegacyTravelModeSignalProviderServicesSaberServiceProvider cmUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bdbb44(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113017828;
  func_0x000107c61428(param_1 + _DAT_113017828,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100bdbb50; end: 100bdbbcb;  */

void FUN_100bdbb50(undefined8 param_1)

{
  if (lRam0000000113017250 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e7c91bc);
  return;
}



/* Entry: 100bdbbcc; end: 100bdbdc3; -[SCComposerChatMediaDownloaderEntryPoint begin] */

/* WARNING: Possible PIC construction at 0x000100bdbd04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bdbd14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bdbd24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bdbd34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bdbd44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bdbd54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bdbd94: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100bdbd58) */
/* WARNING: Removing unreachable block (ram,0x000100bdbd48) */
/* WARNING: Removing unreachable block (ram,0x000100bdbd38) */
/* WARNING: Removing unreachable block (ram,0x000100bdbd28) */
/* WARNING: Removing unreachable block (ram,0x000100bdbd18) */
/* WARNING: Removing unreachable block (ram,0x000100bdbd08) */
/* WARNING: Removing unreachable block (ram,0x000100bdbd98) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bdbbcc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  
  puVar1 = PTR_PTR_1126b27b0;
  func_0x000107c610f4();
  lVar2 = param_1 + _DAT_112717348;
  func_0x000107c61148();
  func_0x000107c4c984();
  func_0x000107c61180();
  lVar3 = param_1 + _DAT_11271734c;
  func_0x000107c61148();
  func_0x000107c3f854();
  func_0x000107c61180();
  lVar4 = param_1 + _DAT_112717350;
  func_0x000107c61148();
  func_0x000107c4d48c();
  func_0x000107c61180();
  lVar5 = param_1 + _DAT_112717354;
  func_0x000107c61148(lVar5);
  func_0x000107c4ed78();
  func_0x000107c61180();
  puVar6 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_11085c198);
  func_0x000107c61180();
  param_1 = param_1 + _DAT_112717358;
  func_0x000107c61148(param_1);
  func_0x000107c5da60();
  func_0x000107c61180();
  func_0x000107c5d984();
  func_0x000107c61180();
  func_0x000107c45d88(puVar1,param_2,lVar2,lVar3,lVar4,lVar5,puVar6,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100bdbdc4; end: 100bdbdcb; -[SCChatMediaFetchingServices mediaFetcher] */

undefined8 FUN_100bdbdc4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100bdbdcc; end: 100bdbf3b; -[SCComposerChatMediaDownloader initWithChatMediaFetcher:chatContentDelivery:nativeMessagingSessionManager:travelModeSignalProvider:grapheneLogger:userId:] */

undefined1 *
FUN_100bdbdcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  puStack_58 = PTR_PTR_1126e5140;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
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
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_8;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100bdbf3c; end: 100bdbfaf; -[SCSCMemoriesSnapThumbnailServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bdbf3c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fd8bb8,0);
  func_0x000107c61614(param_1 + _DAT_112fd8bc0,0);
  *(undefined8 *)(param_1 + _DAT_112fd8bc8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100bdbfb0; end: 100bdc05b; -[SCSCMemoriesSnapThumbnailServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_100bdbfb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100bdc05c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100bdc05c; end: 100bdc1f3;  */

void FUN_100bdc05c(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffd4) || (param_3 != -0x7ffffffef0e72150)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000002c,0x800000010f18deb0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "MemActiveUserSessionScopeGraphBridge/SCSCMemoriesSnapThumbnailServicesSaberServiceProvider.swift"
                            ,0x60,2,0x8e,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100bdc1f4);
        (*pcVar1)();
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c564b8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100bdc1f4; end: 100bdc1ff; -[SCSCMemoriesSnapThumbnailServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bdc1f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fd8bb8;
  func_0x000107c61428(param_1 + _DAT_112fd8bb8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100bdc200; end: 100bdc253;  */

void FUN_100bdc200(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100bdc254; end: 100bdc25f; -[SCSCMemoriesSnapThumbnailServicesSaberServiceProvider setMemActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bdc254(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fd8bc0;
  func_0x000107c61428(param_1 + _DAT_112fd8bc0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100bdc260; end: 100bdc293; -[SCSCMemoriesSnapThumbnailServicesSaberServiceProvider __safeProvide] */

void FUN_100bdc260(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100bdc294();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100bdc294; end: 100bdc37b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bdc294(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_48 [8];
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c4caa4();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c61170(lVar1);
    }
    else {
      lVar3 = 0;
      FUN_100bdc3d8();
      func_0x000107c613fc();
      *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar2 + _DAT_112fd4770);
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112fd8bc8);
      *(long *)(unaff_x20 + _DAT_112fd8bc8) = lVar3;
      func_0x000107c6157c();
      func_0x000107c6157c(lVar3);
      func_0x000107c61574(uVar4);
      FUN_100083b20(auStack_48);
      func_0x000107c61574(lVar3);
      func_0x000107c61170(lVar1);
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 100bdc37c; end: 100bdc387; -[SCSCMemoriesSnapThumbnailServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bdc37c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fd8bb8;
  func_0x000107c61428(param_1 + _DAT_112fd8bb8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100bdc388; end: 100bdc3cb;  */

void FUN_100bdc388(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100bdc3cc; end: 100bdc3d7; -[SCSCMemoriesSnapThumbnailServicesSaberServiceProvider memActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bdc3cc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fd8bc0;
  func_0x000107c61428(param_1 + _DAT_112fd8bc0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100bdc3d8; end: 100bdc40f;  */

void FUN_100bdc3d8(undefined8 param_1)

{
  if (lRam0000000112fd3f08 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e7a0558);
  return;
}



/* Entry: 100bdc410; end: 100bdc48b;  */

undefined * FUN_100bdc410(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f8c08 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x000107c3dbd4(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f75d78,
                        &UNK_10e5d6170,&UNK_10e5d61ac,5,&UNK_10b71453c,0);
    do {
      if (puRam00000001137f8c08 != (undefined *)0x0) {
        ClearExclusiveLocal();
        func_0x000107c61170();
        return puRam00000001137f8c08;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f8c08,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f8c08 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f8c08;
}



/* Entry: 100bdc48c; end: 100bdc517; +[SDMPlaybackLayer descriptor] */

undefined * FUN_100bdc48c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8cc8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb0f60,
                        &PTR____CFConstantStringClassReference_110f76038,&PTR_DAT_1133c7638,
                        &PTR_s_media_1133c7650,8,0x48,0x1c);
    func_0x000107c5a8b4();
    puRam00000001137f8cc8 = puVar1;
  }
  return puRam00000001137f8cc8;
}



/* Entry: 100bdc518; end: 100bdc5b3; +[SDMMediaMetadata descriptor] */

undefined * FUN_100bdc518(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fd810 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cf6dd0,
                        &PTR____CFConstantStringClassReference_110e90298,&PTR_DAT_1133ff530,
                        &PTR_DAT_1133ffb28,0x1e,0xd0,0x1c);
    func_0x000107c5a8b4();
    func_0x000107c5a894(puVar1,param_2,&UNK_10e601b68);
    puRam00000001137fd810 = puVar1;
  }
  return puRam00000001137fd810;
}



/* Entry: 100bdc5b4; end: 100bdc7a3;  */

undefined * FUN_100bdc5b4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fd7c0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x000107c3dbd4(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f9fd58,
                        &UNK_10e601958,&UNK_10e601978,5,FUN_100be7368,0);
    do {
      if (puRam00000001137fd7c0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        func_0x000107c61170();
        return puRam00000001137fd7c0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fd7c0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fd7c0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fd7c0;
}



/* Entry: 100bdc7a4; end: 100bdc82b;  */

void FUN_100bdc7a4(uint *param_1,undefined1 *param_2)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)
           ((long)((long)param_1 + (ulong)*param_1) -
           (long)*(int *)((long)param_1 + (ulong)*param_1));
  if ((*puVar1 < 5) || (puVar1[2] == 0)) {
    *param_2 = 1;
  }
  else {
    *param_2 = 0;
    func_0x000107c610f4(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c45aec();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100bdc82c; end: 100bdd71f; +[SCLensScheduleNamespaceDataModel immutableObjectParse:bufferSize:] */

void FUN_100bdc82c(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  bool bVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  ushort uVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ushort *puVar18;
  long lVar19;
  long lVar20;
  undefined *puVar21;
  uint *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined8 uVar26;
  uint *puVar27;
  ulong uVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined *puVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  
  uVar7 = *param_3;
  piVar1 = (int *)((long)param_3 + (ulong)uVar7);
  puVar9 = PTR_PTR_1126de810;
  func_0x000107c610f4();
  lVar15 = (long)*piVar1;
  uVar12 = *(ushort *)((long)piVar1 - lVar15);
  if (uVar12 < 5) {
    puVar21 = (undefined *)0x0;
LAB_100bdc8f8:
    lVar15 = 0;
  }
  else {
    uVar17 = (ulong)((ushort *)((long)piVar1 - lVar15))[2];
    if (uVar17 == 0) {
      puVar21 = (undefined *)0x0;
    }
    else {
      puVar27 = (uint *)((long)piVar1 + uVar17);
      puVar21 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar27 + (ulong)*puVar27 + 4);
      func_0x000107c61180();
      lVar15 = (long)*piVar1;
      uVar12 = *(ushort *)((long)piVar1 - lVar15);
    }
    if ((uVar12 < 7) || (uVar17 = (ulong)*(ushort *)((long)piVar1 + (6 - lVar15)), uVar17 == 0))
    goto LAB_100bdc8f8;
    puVar27 = (uint *)((long)piVar1 + uVar17);
    lVar15 = (long)puVar27 + (ulong)*puVar27;
  }
  FUN_100bdd720();
  func_0x000107c61180();
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 9) ||
     (uVar17 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4], uVar17 == 0)) {
    lVar10 = 0;
  }
  else {
    puVar27 = (uint *)((long)piVar1 + uVar17);
    lVar10 = (long)puVar27 + (ulong)*puVar27;
  }
  FUN_100bdd720();
  func_0x000107c61180();
  iVar13 = *piVar1;
  lVar14 = (long)iVar13;
  puVar18 = (ushort *)((long)piVar1 - lVar14);
  uVar12 = *puVar18;
  uVar35 = 0;
  if (uVar12 < 0xb) {
    uStack_b0 = 0;
    uVar36 = 0;
LAB_100bdcb98:
    puStack_a8 = (undefined *)0x0;
LAB_100bdcb9c:
    puVar11 = (undefined *)0x0;
LAB_100bdcba0:
    puVar31 = (undefined *)0x0;
LAB_100bdcba4:
    puVar32 = (undefined *)0x0;
  }
  else {
    if ((ulong)puVar18[5] == 0) {
      uStack_b0 = 0;
    }
    else {
      uStack_b0 = *(undefined8 *)((long)piVar1 + (ulong)puVar18[5]);
    }
    if (uVar12 < 0xd) {
      uVar36 = 0;
      goto LAB_100bdcb98;
    }
    uVar36 = 0;
    if ((ulong)puVar18[6] != 0) {
      uVar35 = *(undefined8 *)((long)piVar1 + (ulong)puVar18[6]);
    }
    if (uVar12 < 0xf) goto LAB_100bdcb98;
    if ((ulong)puVar18[7] != 0) {
      uVar36 = *(undefined8 *)((long)piVar1 + (ulong)puVar18[7]);
    }
    if (uVar12 < 0x11) goto LAB_100bdcb98;
    uVar17 = (ulong)puVar18[8];
    if (uVar17 == 0) {
      puStack_a8 = (undefined *)0x0;
    }
    else {
      uVar28 = (ulong)*(uint *)((long)piVar1 + uVar17);
      puVar27 = (uint *)((long)((long)piVar1 + uVar17) + uVar28);
      puVar11 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x000107c3e170(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,*puVar27);
      func_0x000107c61180();
      if (*puVar27 != 0) {
        param_3 = (uint *)((long)param_3 + uVar28 + uVar17 + (ulong)uVar7 + 8);
        do {
          uVar17 = (ulong)param_3[-1];
          puVar31 = PTR_PTR_1126de820;
          func_0x000107c610f4(PTR_PTR_1126de820);
          lVar14 = (long)*(int *)((long)param_3 + (uVar17 - 4));
          lVar19 = uVar17 - lVar14;
          uVar12 = *(ushort *)((long)param_3 + lVar19 + -4);
          if (uVar12 < 5) {
            puVar30 = (undefined *)0x0;
            puVar32 = (undefined *)0x0;
            uVar26 = 0;
          }
          else {
            if ((ulong)*(ushort *)((long)param_3 + lVar19) == 0) {
              uVar26 = 0;
            }
            else {
              uVar26 = *(undefined8 *)
                        ((long)param_3 + uVar17 + *(ushort *)((long)param_3 + lVar19) + -4);
            }
            if (uVar12 < 7) {
              puVar30 = (undefined *)0x0;
              puVar32 = (undefined *)0x0;
            }
            else {
              uVar28 = (ulong)*(ushort *)((long)param_3 + lVar19 + 2);
              if (uVar28 == 0) {
                puVar32 = (undefined *)0x0;
              }
              else {
                lVar14 = uVar17 + uVar28;
                puVar32 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                                    (long)param_3 +
                                    (ulong)*(uint *)((long)param_3 + lVar14 + -4) + lVar14);
                func_0x000107c61180();
                lVar14 = (long)*(int *)((long)param_3 + (uVar17 - 4));
                uVar12 = *(ushort *)((long)param_3 + (uVar17 - lVar14) + -4);
              }
              if ((uVar12 < 9) ||
                 (uVar28 = (ulong)*(ushort *)((long)param_3 + (uVar17 - lVar14) + 4), uVar28 == 0))
              {
                puVar30 = (undefined *)0x0;
              }
              else {
                lVar14 = uVar17 + uVar28;
                puVar30 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                                    (long)param_3 +
                                    (ulong)*(uint *)((long)param_3 + lVar14 + -4) + lVar14);
                func_0x000107c61180();
              }
            }
          }
          func_0x000107c45d34(puVar31,param_2,uVar26,puVar32,puVar30);
          func_0x000107c61170(puVar30);
          func_0x000107c61170(puVar32);
          func_0x000107c3d798(puVar11,param_2,puVar31);
          func_0x000107c61170(puVar31);
          bVar8 = param_3 != puVar27 + (ulong)*puVar27 + 1;
          param_3 = param_3 + 1;
        } while (bVar8);
      }
      puStack_a8 = puVar11;
      func_0x000107c40794();
      func_0x000107c61170(puVar11);
      lVar14 = (long)*piVar1;
      uVar12 = *(ushort *)((long)piVar1 - lVar14);
    }
    iVar13 = (int)lVar14;
    lVar14 = -lVar14;
    if (uVar12 < 0x13) goto LAB_100bdcb9c;
    uVar17 = (ulong)*(ushort *)((long)piVar1 + lVar14 + 0x12);
    if (uVar17 == 0) {
      puVar11 = (undefined *)0x0;
    }
    else {
      puVar27 = (uint *)((long)piVar1 + uVar17);
      puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar27 + (ulong)*puVar27 + 4);
      func_0x000107c61180();
      iVar13 = *piVar1;
      lVar14 = -(long)iVar13;
      uVar12 = *(ushort *)((long)piVar1 - (long)iVar13);
    }
    if (uVar12 < 0x15) goto LAB_100bdcba0;
    uVar17 = (ulong)*(ushort *)((long)piVar1 + lVar14 + 0x14);
    if (uVar17 == 0) {
      puVar31 = (undefined *)0x0;
    }
    else {
      puVar27 = (uint *)((long)piVar1 + uVar17);
      puVar31 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar27 + (ulong)*puVar27 + 4);
      func_0x000107c61180();
      iVar13 = *piVar1;
      lVar14 = -(long)iVar13;
      uVar12 = *(ushort *)((long)piVar1 - (long)iVar13);
    }
    if ((uVar12 < 0x17) || (uVar17 = (ulong)*(ushort *)((long)piVar1 + lVar14 + 0x16), uVar17 == 0))
    goto LAB_100bdcba4;
    puVar27 = (uint *)((long)piVar1 + uVar17);
    uVar7 = *puVar27;
    puVar32 = PTR_PTR_1126de828;
    func_0x000107c610f4();
    piVar2 = (int *)((long)puVar27 + (ulong)uVar7);
    lVar14 = (long)*piVar2;
    uVar12 = *(ushort *)((long)piVar2 - lVar14);
    if (uVar12 < 5) {
      puVar30 = (undefined *)0x0;
LAB_100bdd498:
      puVar25 = (undefined *)0x0;
      uVar33 = 0;
      uVar26 = 0;
    }
    else {
      uVar17 = (ulong)((ushort *)((long)piVar2 - lVar14))[2];
      if (uVar17 == 0) {
        puVar30 = (undefined *)0x0;
      }
      else {
        puVar27 = (uint *)((long)piVar2 + uVar17);
        uVar7 = *puVar27;
        puVar30 = PTR_PTR_1126de830;
        func_0x000107c610f4();
        piVar3 = (int *)((long)puVar27 + (ulong)uVar7);
        lVar14 = (long)*piVar3;
        uVar12 = *(ushort *)((long)piVar3 - lVar14);
        if (uVar12 < 5) {
          puVar25 = (undefined *)0x0;
          uVar26 = 0;
        }
        else {
          uVar17 = (ulong)((ushort *)((long)piVar3 - lVar14))[2];
          if (uVar17 == 0) {
            puVar25 = (undefined *)0x0;
          }
          else {
            puVar27 = (uint *)((long)piVar3 + uVar17);
            uVar7 = *puVar27;
            puVar25 = PTR_PTR_1126de840;
            func_0x000107c610f4(PTR_PTR_1126de840);
            piVar4 = (int *)((long)puVar27 + (ulong)uVar7);
            puVar18 = (ushort *)((long)piVar4 - (long)*piVar4);
            uVar26 = 0;
            uVar33 = 0;
            if (4 < *puVar18) {
              if ((ulong)puVar18[2] != 0) {
                uVar26 = *(undefined8 *)((long)piVar4 + (ulong)puVar18[2]);
              }
              if ((6 < *puVar18) && ((ulong)puVar18[3] != 0)) {
                uVar33 = *(undefined8 *)((long)piVar4 + (ulong)puVar18[3]);
              }
            }
            func_0x000107c470f8(uVar26,uVar33);
            lVar14 = (long)*piVar3;
            uVar12 = *(ushort *)((long)piVar3 - lVar14);
          }
          uVar26 = 0;
          if ((6 < uVar12) &&
             (uVar17 = (ulong)*(ushort *)((long)piVar3 + (6 - lVar14)), uVar17 != 0)) {
            uVar26 = *(undefined8 *)((long)piVar3 + uVar17);
          }
        }
        func_0x000107c45d6c(uVar26,puVar30,param_2,puVar25);
        func_0x000107c61170(puVar25);
        lVar14 = (long)*piVar2;
        uVar12 = *(ushort *)((long)piVar2 - lVar14);
      }
      lVar14 = -lVar14;
      if (uVar12 < 7) goto LAB_100bdd498;
      uVar17 = (ulong)*(ushort *)((long)piVar2 + lVar14 + 6);
      if (uVar17 == 0) {
        puVar25 = (undefined *)0x0;
      }
      else {
        puVar5 = (uint *)((long)piVar2 + uVar17);
        puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5);
        puVar23 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x000107c3e170(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,*puVar5);
        func_0x000107c61180();
        puVar27 = puVar5 + 1;
        if (*puVar5 != 0) {
          do {
            uVar7 = *puVar27;
            puVar25 = PTR_PTR_1126de838;
            func_0x000107c610f4(PTR_PTR_1126de838);
            piVar3 = (int *)((long)puVar27 + (ulong)uVar7);
            puVar18 = (ushort *)((long)piVar3 - (long)*piVar3);
            if (*puVar18 < 5) {
              uVar26 = 0;
              puVar24 = (undefined *)0x0;
            }
            else {
              if ((ulong)puVar18[2] == 0) {
                uVar26 = 0;
              }
              else {
                uVar26 = *(undefined8 *)((long)piVar3 + (ulong)puVar18[2]);
              }
              if ((*puVar18 < 7) || ((ulong)puVar18[3] == 0)) {
                puVar24 = (undefined *)0x0;
              }
              else {
                puVar6 = (uint *)((long)piVar3 + (ulong)puVar18[3]);
                puVar6 = (uint *)((long)puVar6 + (ulong)*puVar6);
                puVar29 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
                func_0x000107c3e170(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,*puVar6);
                func_0x000107c61180();
                puVar22 = puVar6 + 1;
                if (*puVar6 != 0) {
                  do {
                    uVar17 = (ulong)*puVar22;
                    puVar24 = PTR_PTR_1126de840;
                    func_0x000107c610f4(PTR_PTR_1126de840);
                    lVar14 = uVar17 - (long)*(int *)((long)puVar22 + uVar17);
                    uVar33 = 0;
                    uVar34 = 0;
                    if (4 < *(ushort *)((long)puVar22 + lVar14)) {
                      uVar28 = (ulong)*(ushort *)((long)puVar22 + lVar14 + 4);
                      if (uVar28 != 0) {
                        uVar33 = *(undefined8 *)((long)puVar22 + uVar17 + uVar28);
                      }
                      if ((6 < *(ushort *)((long)puVar22 + lVar14)) &&
                         (uVar28 = (ulong)*(ushort *)((long)puVar22 + lVar14 + 6), uVar28 != 0)) {
                        uVar34 = *(undefined8 *)((long)puVar22 + uVar17 + uVar28);
                      }
                    }
                    func_0x000107c470f8(uVar33,uVar34);
                    func_0x000107c3d798(puVar29,param_2,puVar24);
                    func_0x000107c61170(puVar24);
                    puVar22 = puVar22 + 1;
                  } while (puVar22 != puVar6 + 1 + *puVar6);
                }
                puVar24 = puVar29;
                func_0x000107c40794(puVar29);
                func_0x000107c61170(puVar29);
              }
            }
            func_0x000107c46b34(puVar25,param_2,uVar26,puVar24);
            func_0x000107c61170(puVar24);
            func_0x000107c3d798(puVar23,param_2,puVar25);
            func_0x000107c61170(puVar25);
            puVar27 = puVar27 + 1;
          } while (puVar27 != puVar5 + 1 + *puVar5);
        }
        puVar25 = puVar23;
        func_0x000107c40794(puVar23);
        func_0x000107c61170(puVar23);
        lVar14 = -(long)*piVar2;
        uVar12 = *(ushort *)((long)piVar2 - (long)*piVar2);
      }
      if (uVar12 < 9) {
        uVar33 = 0;
        uVar26 = 0;
      }
      else {
        uVar17 = (ulong)*(ushort *)((long)piVar2 + lVar14 + 8);
        if (uVar17 == 0) {
          uVar33 = 0;
        }
        else {
          uVar33 = *(undefined8 *)((long)piVar2 + uVar17);
        }
        uVar26 = 0;
        if ((10 < uVar12) &&
           (uVar17 = (ulong)*(ushort *)((long)piVar2 + lVar14 + 10), uVar26 = 0, uVar17 != 0)) {
          uVar26 = *(undefined8 *)((long)piVar2 + uVar17);
        }
      }
    }
    func_0x000107c48518(uVar26,puVar32,param_2,puVar30,puVar25,uVar33);
    func_0x000107c61170(puVar25);
    func_0x000107c61170(puVar30);
    iVar13 = *piVar1;
  }
  if ((*(ushort *)((long)piVar1 - (long)iVar13) < 0x19) ||
     (uVar17 = (ulong)((ushort *)((long)piVar1 - (long)iVar13))[0xc], uVar17 == 0)) {
    lVar14 = 0;
  }
  else {
    puVar27 = (uint *)((long)piVar1 + uVar17);
    lVar14 = (long)puVar27 + (ulong)*puVar27;
  }
  FUN_100bdda90();
  func_0x000107c61180();
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x1b) ||
     (uVar17 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0xd], uVar17 == 0)) {
    lVar19 = 0;
  }
  else {
    puVar27 = (uint *)((long)piVar1 + uVar17);
    lVar19 = (long)puVar27 + (ulong)*puVar27;
  }
  FUN_100bdda90();
  func_0x000107c61180();
  lVar16 = (long)*piVar1;
  uVar12 = *(ushort *)((long)piVar1 - lVar16);
  if (uVar12 < 0x1d) {
    puVar30 = (undefined *)0x0;
  }
  else {
    uVar17 = (ulong)((ushort *)((long)piVar1 - lVar16))[0xe];
    if (uVar17 == 0) {
      puVar30 = (undefined *)0x0;
    }
    else {
      puVar27 = (uint *)((long)piVar1 + uVar17);
      uVar7 = *puVar27;
      puVar30 = PTR_PTR_1126de808;
      func_0x000107c610f4();
      piVar2 = (int *)((long)puVar27 + (ulong)uVar7);
      lVar16 = (long)*piVar2;
      uVar12 = *(ushort *)((long)piVar2 - lVar16);
      if (uVar12 < 5) {
        puVar25 = (undefined *)0x0;
LAB_100bdcd3c:
        iVar13 = (int)lVar16;
        puVar23 = (undefined *)0x0;
LAB_100bdcd40:
        puVar24 = (undefined *)0x0;
      }
      else {
        uVar17 = (ulong)((ushort *)((long)piVar2 - lVar16))[2];
        if (uVar17 == 0) {
          puVar25 = (undefined *)0x0;
        }
        else {
          puVar27 = (uint *)((long)piVar2 + uVar17);
          puVar25 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                              (long)puVar27 + (ulong)*puVar27 + 4);
          func_0x000107c61180();
          lVar16 = (long)*piVar2;
          uVar12 = *(ushort *)((long)piVar2 - lVar16);
        }
        lVar20 = -lVar16;
        if (uVar12 < 7) goto LAB_100bdcd3c;
        uVar17 = (ulong)*(ushort *)((long)piVar2 + lVar20 + 6);
        if (uVar17 == 0) {
          puVar23 = (undefined *)0x0;
        }
        else {
          puVar27 = (uint *)((long)piVar2 + uVar17);
          puVar23 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                              (long)puVar27 + (ulong)*puVar27 + 4);
          func_0x000107c61180();
          lVar16 = (long)*piVar2;
          lVar20 = -lVar16;
          uVar12 = *(ushort *)((long)piVar2 - lVar16);
        }
        iVar13 = (int)lVar16;
        if ((uVar12 < 9) || (uVar17 = (ulong)*(ushort *)((long)piVar2 + lVar20 + 8), uVar17 == 0))
        goto LAB_100bdcd40;
        puVar27 = (uint *)((long)piVar2 + uVar17);
        uVar7 = *puVar27;
        puVar24 = PTR_PTR_1126de818;
        func_0x000107c610f4();
        piVar3 = (int *)((long)puVar27 + (ulong)uVar7);
        uVar12 = *(ushort *)((long)piVar3 - (long)*piVar3);
        if ((((uVar12 < 5) || (uVar12 < 7)) || (uVar12 < 9)) ||
           ((uVar12 < 0xb ||
            (uVar17 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[5], uVar17 == 0)))) {
          puVar29 = (undefined *)0x0;
        }
        else {
          puVar27 = (uint *)((long)piVar3 + uVar17);
          puVar29 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                              (long)puVar27 + (ulong)*puVar27 + 4);
          func_0x000107c61180();
        }
        func_0x000107c45c60();
        func_0x000107c61170(puVar29);
        iVar13 = *piVar2;
      }
      if (*(ushort *)((long)piVar2 - (long)iVar13) < 0xb) {
        puVar29 = (undefined *)0x0;
      }
      else if (((ushort *)((long)piVar2 - (long)iVar13))[5] == 0) {
        puVar29 = (undefined *)0x0;
      }
      else {
        puVar29 = PTR__OBJC_CLASS___NSData_1126ae778;
        func_0x000107c610f4(PTR__OBJC_CLASS___NSData_1126ae778);
        func_0x000107c45ae4();
      }
      func_0x000107c47828();
      func_0x000107c61170(puVar29);
      func_0x000107c61170(puVar24);
      func_0x000107c61170(puVar23);
      func_0x000107c61170(puVar25);
      lVar16 = (long)*piVar1;
      uVar12 = *(ushort *)((long)piVar1 - lVar16);
    }
    if ((0x1e < uVar12) &&
       (uVar17 = (ulong)*(ushort *)((long)piVar1 + (0x1e - lVar16)), uVar17 != 0)) {
      puVar27 = (uint *)((long)piVar1 + uVar17);
      puVar25 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar27 + (ulong)*puVar27 + 4);
      func_0x000107c61180();
      goto LAB_100bdce70;
    }
  }
  puVar25 = (undefined *)0x0;
LAB_100bdce70:
  func_0x000107c47918(uVar35,uVar36,puVar9,param_2,puVar21,lVar15,lVar10,uStack_b0,puStack_a8,
                      puVar11,puVar31,puVar32,lVar14,lVar19,puVar30,puVar25);
  func_0x000107c61170(puVar25);
  func_0x000107c61170(puVar30);
  func_0x000107c61170(lVar19);
  func_0x000107c61170(lVar14);
  func_0x000107c61170(puVar32);
  func_0x000107c61170(puVar31);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puStack_a8);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar15);
  func_0x000107c61170(puVar21);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 100bdd720; end: 100bdd7fb;  */

void FUN_100bdd720(uint *param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  uint *puVar4;
  
  puVar3 = (undefined *)0x0;
  if (param_1 != (uint *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c3e170(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,*param_1);
    func_0x000107c61180();
    puVar4 = param_1 + 1;
    if (*param_1 != 0) {
      do {
        lVar2 = (long)puVar4 + (ulong)*puVar4;
        FUN_100bdde68(lVar2);
        func_0x000107c61180();
        func_0x000107c3d798(puVar1,param_2,lVar2);
        func_0x000107c61170(lVar2);
        puVar4 = puVar4 + 1;
      } while (puVar4 != param_1 + 1 + *param_1);
    }
    puVar3 = puVar1;
    func_0x000107c40794(puVar1);
    func_0x000107c61170(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 100bdd7fc; end: 100bdd8af; -[SCLensNoFillMetadataDataModel initWithCarouselIndex:serveItemId:encryptedAdData:] */

undefined1 *
FUN_100bdd7fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_112701950;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_5;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 100bdd8b0; end: 100bdd8fb; -[SCLensFetchLocationMetadataGeoCoordinate initWithLatitude:longitude:] */

void FUN_100bdd8b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112701968;
  uStack_30 = param_3;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    *(undefined8 *)((long)puVar1 + 0x10) = param_2;
  }
  return;
}



/* Entry: 100bdd8fc; end: 100bdd983; -[SCLensFetchLocationMetadataGeoCircle initWithCenter:radius:] */

undefined1 *
FUN_100bdd8fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_112701960;
  uStack_40 = param_2;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
  }
  func_0x000107c61170(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 100bdd984; end: 100bdd9a7; -[SCLensFetchLocationMetadataGeoCoordinate copyWithZone:] */

undefined8 FUN_100bdd984(undefined8 param_1)

{
  func_0x000107c61174();
  return param_1;
}



/* Entry: 100bdd9a8; end: 100bdda6b; -[SCLensFetchLocationMetadataDataModel initWithSearchCircle:nearbyFetchLocations:ttlMs:lastUpdateTimestampSec:] */

undefined1 *
FUN_100bdd9a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_48 = PTR_PTR_112701958;
  uStack_50 = param_2;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_5;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    *(undefined8 *)((long)puVar1 + 0x20) = param_1;
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 100bdda6c; end: 100bdda8f; -[SCLensFetchLocationMetadataGeoCircle copyWithZone:] */

undefined8 FUN_100bdda6c(undefined8 param_1)

{
  func_0x000107c61174();
  return param_1;
}



/* Entry: 100bdda90; end: 100bdde67;  */

void FUN_100bdda90(uint *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ushort uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  int *piVar12;
  undefined *puVar13;
  long lVar14;
  undefined *puStack_68;
  
  puVar10 = (undefined *)0x0;
  if (param_1 != (uint *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c3e170(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,*param_1);
    func_0x000107c61180();
    if (*param_1 != 0) {
      lVar14 = 0;
      do {
        uVar9 = (ulong)*(uint *)((long)param_1 + lVar14 + 4);
        puVar4 = PTR_PTR_1126de800;
        func_0x000107c610f4(PTR_PTR_1126de800);
        puVar10 = PTR_PTR_1126de7f8;
        lVar7 = uVar9 - (long)*(int *)((long)param_1 + uVar9 + lVar14 + 4);
        uVar6 = *(ushort *)((long)param_1 + lVar7 + lVar14 + 4);
        if ((uVar6 < 5) ||
           (uVar8 = (ulong)*(ushort *)((long)param_1 + lVar7 + lVar14 + 8), uVar8 == 0)) {
LAB_100bddc28:
          puVar10 = (undefined *)0x0;
        }
        else {
          lVar2 = uVar9 + uVar8 + lVar14;
          if ((uVar6 < 7 || *(char *)((long)param_1 + lVar2 + 4) != '\x01') ||
             (uVar8 = (ulong)*(ushort *)((long)param_1 + lVar7 + lVar14 + 10), uVar8 == 0)) {
            puVar5 = (undefined *)0x0;
          }
          else {
            lVar1 = uVar9 + uVar8;
            puVar5 = (undefined *)
                     ((long)param_1 +
                     (ulong)*(uint *)((long)param_1 + lVar1 + lVar14 + 4) + lVar14 + lVar1 + 4);
          }
          if ((uVar6 < 7 || *(char *)((long)param_1 + lVar2 + 4) != '\x02') ||
             (uVar8 = (ulong)*(ushort *)((long)param_1 + lVar7 + lVar14 + 10), uVar8 == 0)) {
            piVar12 = (int *)0x0;
            if (puVar5 != (undefined *)0x0) goto LAB_100bddc38;
LAB_100bddbb4:
            if (piVar12 == (int *)0x0) goto LAB_100bddc28;
            puVar5 = PTR_PTR_1126de7f0;
            func_0x000107c610f4(PTR_PTR_1126de7f0);
            lVar7 = (long)*piVar12;
            uVar6 = *(ushort *)((long)piVar12 - lVar7);
            if (uVar6 < 5) {
              puStack_68 = (undefined *)0x0;
LAB_100bddcd0:
              puVar11 = (undefined *)0x0;
LAB_100bddcd4:
              puVar13 = (undefined *)0x0;
            }
            else {
              if (((ushort *)((long)piVar12 - lVar7))[2] == 0) {
                puStack_68 = (undefined *)0x0;
              }
              else {
                puStack_68 = PTR__OBJC_CLASS___NSData_1126ae778;
                func_0x000107c610f4();
                func_0x000107c45ae4();
                lVar7 = (long)*piVar12;
                uVar6 = *(ushort *)((long)piVar12 - lVar7);
              }
              lVar7 = -lVar7;
              if (uVar6 < 7) goto LAB_100bddcd0;
              if (*(short *)((long)piVar12 + lVar7 + 6) == 0) {
                puVar11 = (undefined *)0x0;
              }
              else {
                puVar11 = PTR__OBJC_CLASS___NSData_1126ae778;
                func_0x000107c610f4(PTR__OBJC_CLASS___NSData_1126ae778);
                func_0x000107c45ae4();
                lVar7 = -(long)*piVar12;
                uVar6 = *(ushort *)((long)piVar12 - (long)*piVar12);
              }
              if ((uVar6 < 9) || (*(short *)((long)piVar12 + lVar7 + 8) == 0)) goto LAB_100bddcd4;
              puVar13 = PTR__OBJC_CLASS___NSData_1126ae778;
              func_0x000107c610f4(PTR__OBJC_CLASS___NSData_1126ae778);
              func_0x000107c45ae4();
            }
            func_0x000107c46d38(puVar5,param_2,puStack_68,puVar11,puVar13);
            func_0x000107c61170(puVar13);
            func_0x000107c61170(puVar11);
            func_0x000107c61170(puStack_68);
            func_0x000107c3eeb0(puVar10,param_2,puVar5);
            func_0x000107c61180();
          }
          else {
            lVar7 = uVar9 + uVar8;
            piVar12 = (int *)((long)param_1 +
                             (ulong)*(uint *)((long)param_1 + lVar7 + lVar14 + 4) + lVar14 + lVar7 +
                             4);
            if (puVar5 == (undefined *)0x0) goto LAB_100bddbb4;
LAB_100bddc38:
            FUN_100bdde68();
            func_0x000107c61180();
            func_0x000107c41264(puVar10,param_2,puVar5);
            func_0x000107c61180();
          }
          func_0x000107c61170(puVar5);
        }
        func_0x000107c46fb8(puVar4,param_2,puVar10);
        func_0x000107c61170(puVar10);
        func_0x000107c3d798(puVar3,param_2,puVar4);
        func_0x000107c61170(puVar4);
        lVar7 = lVar14 + 8;
        lVar14 = lVar14 + 4;
      } while ((uint *)((long)param_1 + lVar7) != param_1 + (ulong)*param_1 + 1);
    }
    puVar10 = puVar3;
    func_0x000107c40794(puVar3);
    func_0x000107c61170(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 100bdde68; end: 100bdfd83;  */

void FUN_100bdde68(int *param_1,undefined8 param_2)

{
  int *piVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  ushort uVar9;
  long lVar10;
  ushort *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  uint *puVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  char cVar30;
  ulong uVar31;
  uint *puVar32;
  undefined *puVar33;
  undefined *puVar34;
  undefined *puVar35;
  undefined *puVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined *puStack_200;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_178;
  undefined *puStack_168;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_f0;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_a0;
  
  puVar4 = (undefined *)0x0;
  if (param_1 == (int *)0x0) goto LAB_100bdec70;
  puVar4 = PTR_PTR_1126de6f8;
  func_0x000107c610f4();
  lVar10 = (long)*param_1;
  uVar9 = *(ushort *)((long)param_1 - lVar10);
  if (uVar9 < 5) {
    puVar33 = (undefined *)0x0;
LAB_100bddf58:
    puVar34 = (undefined *)0x0;
LAB_100bddf5c:
    puVar35 = (undefined *)0x0;
LAB_100bddf60:
    puVar36 = (undefined *)0x0;
LAB_100bddf64:
    puStack_a0 = (undefined *)0x0;
LAB_100bddf68:
    puStack_168 = (undefined *)0x0;
LAB_100bddf70:
    puVar24 = (undefined *)0x0;
LAB_100bddf74:
    lVar10 = 0;
  }
  else {
    uVar23 = (ulong)((ushort *)((long)param_1 - lVar10))[2];
    if (uVar23 == 0) {
      puVar33 = (undefined *)0x0;
    }
    else {
      puVar32 = (uint *)((long)param_1 + uVar23);
      puVar33 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar32 + (ulong)*puVar32 + 4);
      func_0x000107c61180();
      lVar10 = (long)*param_1;
      uVar9 = *(ushort *)((long)param_1 - lVar10);
    }
    lVar10 = -lVar10;
    if (uVar9 < 7) goto LAB_100bddf58;
    uVar23 = (ulong)*(ushort *)((long)param_1 + lVar10 + 6);
    if (uVar23 == 0) {
      puVar34 = (undefined *)0x0;
    }
    else {
      puVar32 = (uint *)((long)param_1 + uVar23);
      puVar34 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar32 + (ulong)*puVar32 + 4);
      func_0x000107c61180();
      lVar10 = -(long)*param_1;
      uVar9 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar9 < 9) goto LAB_100bddf5c;
    uVar23 = (ulong)*(ushort *)((long)param_1 + lVar10 + 8);
    if (uVar23 == 0) {
      puVar35 = (undefined *)0x0;
    }
    else {
      puVar32 = (uint *)((long)param_1 + uVar23);
      puVar35 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar32 + (ulong)*puVar32 + 4);
      func_0x000107c61180();
      lVar10 = -(long)*param_1;
      uVar9 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar9 < 0xb) goto LAB_100bddf60;
    uVar23 = (ulong)*(ushort *)((long)param_1 + lVar10 + 10);
    if (uVar23 == 0) {
      puVar36 = (undefined *)0x0;
    }
    else {
      puVar32 = (uint *)((long)param_1 + uVar23);
      puVar36 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar32 + (ulong)*puVar32 + 4);
      func_0x000107c61180();
      lVar10 = -(long)*param_1;
      uVar9 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar9 < 0xd) goto LAB_100bddf64;
    uVar23 = (ulong)*(ushort *)((long)param_1 + lVar10 + 0xc);
    if (uVar23 == 0) {
      puStack_a0 = (undefined *)0x0;
    }
    else {
      puVar15 = (uint *)((long)param_1 + uVar23);
      puVar15 = (uint *)((long)puVar15 + (ulong)*puVar15);
      puVar24 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x000107c3e170(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,*puVar15);
      func_0x000107c61180();
      puVar32 = puVar15 + 1;
      if (*puVar15 != 0) {
        do {
          lVar10 = (long)puVar32 + (ulong)*puVar32;
          FUN_100bdfd84(lVar10);
          func_0x000107c61180();
          func_0x000107c3d798(puVar24,param_2,lVar10);
          func_0x000107c61170(lVar10);
          puVar32 = puVar32 + 1;
        } while (puVar32 != puVar15 + 1 + *puVar15);
      }
      puStack_a0 = puVar24;
      func_0x000107c40794();
      func_0x000107c61170(puVar24);
      lVar10 = -(long)*param_1;
      uVar9 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar9 < 0xf) goto LAB_100bddf68;
    uVar23 = (ulong)*(ushort *)((long)param_1 + lVar10 + 0xe);
    if (uVar23 == 0) {
      puStack_168 = (undefined *)0x0;
    }
    else {
      puVar32 = (uint *)((long)param_1 + uVar23);
      puStack_168 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar32 + (ulong)*puVar32 + 4);
      func_0x000107c61180();
      lVar10 = -(long)*param_1;
      uVar9 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar9 < 0x13) goto LAB_100bddf70;
    uVar23 = (ulong)*(ushort *)((long)param_1 + lVar10 + 0x12);
    puVar24 = (undefined *)0x0;
    if (uVar23 != 0) {
      puVar32 = (uint *)((long)param_1 + uVar23);
      puVar24 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar32 + (ulong)*puVar32 + 4);
      func_0x000107c61180();
      lVar10 = -(long)*param_1;
      uVar9 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if ((uVar9 < 0x15) || (uVar23 = (ulong)*(ushort *)((long)param_1 + lVar10 + 0x14), uVar23 == 0))
    goto LAB_100bddf74;
    puVar32 = (uint *)((long)param_1 + uVar23);
    lVar10 = (long)puVar32 + (ulong)*puVar32;
  }
  FUN_100be0034();
  func_0x000107c61180();
  puVar11 = (ushort *)((long)param_1 - (long)*param_1);
  uVar9 = *puVar11;
  if (uVar9 < 0x17) {
    uStack_178 = 0;
LAB_100bddfec:
    uVar3 = 0;
LAB_100bddff0:
    lVar5 = 0;
  }
  else {
    if ((ulong)puVar11[0xb] == 0) {
      uStack_178 = 0;
    }
    else {
      uStack_178 = *(undefined8 *)((long)param_1 + (ulong)puVar11[0xb]);
    }
    if (uVar9 < 0x19) goto LAB_100bddfec;
    if ((ulong)puVar11[0xc] == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined1 *)((long)param_1 + (ulong)puVar11[0xc]);
    }
    if (((uVar9 < 0x1b) || (uVar9 < 0x1d)) || ((ulong)puVar11[0xe] == 0)) goto LAB_100bddff0;
    puVar32 = (uint *)((long)param_1 + (ulong)puVar11[0xe]);
    lVar5 = (long)puVar32 + (ulong)*puVar32;
  }
  FUN_100be0288();
  func_0x000107c61180();
  uVar9 = *(ushort *)((long)param_1 - (long)*param_1);
  if (((uVar9 < 0x1f) || (uVar9 < 0x21)) ||
     ((uVar9 < 0x23 ||
      (uVar23 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[0x11], uVar23 == 0)))) {
    lVar6 = 0;
  }
  else {
    puVar32 = (uint *)((long)param_1 + uVar23);
    lVar6 = (long)puVar32 + (ulong)*puVar32;
  }
  FUN_100be0374();
  func_0x000107c61180();
  lVar14 = (long)*param_1;
  uVar9 = *(ushort *)((long)param_1 - lVar14);
  if (uVar9 < 0x25) {
    puVar28 = (undefined *)0x0;
LAB_100bde27c:
    lVar14 = 0;
  }
  else {
    uVar23 = (ulong)((ushort *)((long)param_1 - lVar14))[0x12];
    if (uVar23 == 0) {
      puVar28 = (undefined *)0x0;
    }
    else {
      uVar31 = (ulong)*(uint *)((long)param_1 + uVar23);
      puVar32 = (uint *)((long)((long)param_1 + uVar23) + uVar31);
      puVar25 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x000107c3e170(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,*puVar32);
      func_0x000107c61180();
      if (*puVar32 != 0) {
        lVar14 = (long)param_1 + uVar31 + uVar23 + 10;
        do {
          uVar23 = (ulong)*(uint *)(lVar14 + -6);
          puVar28 = PTR_PTR_1126de740;
          func_0x000107c610f4(PTR_PTR_1126de740);
          lVar12 = uVar23 - (long)*(int *)(lVar14 + uVar23 + -6);
          lVar16 = lVar14 + lVar12;
          uVar9 = *(ushort *)(lVar16 + -6);
          uVar37 = 0;
          uVar38 = 0;
          if (4 < uVar9) {
            uVar31 = (ulong)*(ushort *)(lVar16 + -2);
            if (uVar31 != 0) {
              uVar37 = *(undefined8 *)(lVar14 + uVar23 + uVar31 + -6);
            }
            if ((6 < uVar9) && (uVar31 = (ulong)*(ushort *)(lVar14 + lVar12), uVar31 != 0)) {
              uVar38 = *(undefined8 *)(lVar14 + uVar23 + uVar31 + -6);
            }
          }
          func_0x000107c48980(uVar37,uVar38);
          func_0x000107c3d798(puVar25,param_2,puVar28);
          func_0x000107c61170(puVar28);
          puVar15 = (uint *)(lVar14 + -2);
          lVar14 = lVar14 + 4;
        } while (puVar15 != puVar32 + (ulong)*puVar32 + 1);
      }
      puVar28 = puVar25;
      func_0x000107c40794();
      func_0x000107c61170(puVar25);
      lVar14 = (long)*param_1;
      uVar9 = *(ushort *)((long)param_1 - lVar14);
    }
    if ((((uVar9 < 0x27) || (uVar9 < 0x29)) || (uVar9 < 0x2b)) ||
       ((uVar9 < 0x2d || (uVar23 = (ulong)*(ushort *)((long)param_1 + (0x2c - lVar14)), uVar23 == 0)
        ))) goto LAB_100bde27c;
    puVar32 = (uint *)((long)param_1 + uVar23);
    lVar14 = (long)puVar32 + (ulong)*puVar32;
  }
  FUN_100be0480();
  func_0x000107c61180();
  lVar16 = (long)*param_1;
  uVar9 = *(ushort *)((long)param_1 - lVar16);
  if (uVar9 < 0x2f) {
    puStack_d0 = (undefined *)0x0;
LAB_100bde39c:
    puStack_d8 = (undefined *)0x0;
LAB_100bde3a0:
    puStack_e0 = (undefined *)0x0;
LAB_100bde3a4:
    lVar16 = 0;
  }
  else {
    uVar23 = (ulong)((ushort *)((long)param_1 - lVar16))[0x17];
    if (uVar23 == 0) {
      puStack_d0 = (undefined *)0x0;
    }
    else {
      puVar15 = (uint *)((long)param_1 + uVar23);
      puVar15 = (uint *)((long)puVar15 + (ulong)*puVar15);
      puVar25 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x000107c3e170(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,*puVar15);
      func_0x000107c61180();
      puVar32 = puVar15 + 1;
      if (*puVar15 != 0) {
        do {
          lVar16 = (long)puVar32 + (ulong)*puVar32;
          FUN_100be0f00(lVar16);
          func_0x000107c61180();
          func_0x000107c3d798(puVar25,param_2,lVar16);
          func_0x000107c61170(lVar16);
          puVar32 = puVar32 + 1;
        } while (puVar32 != puVar15 + 1 + *puVar15);
      }
      puStack_d0 = puVar25;
      func_0x000107c40794();
      func_0x000107c61170(puVar25);
      lVar16 = (long)*param_1;
      uVar9 = *(ushort *)((long)param_1 - lVar16);
    }
    lVar16 = -lVar16;
    if (((uVar9 < 0x31) || (uVar9 < 0x33)) || ((uVar9 < 0x35 || (uVar9 < 0x37))))
    goto LAB_100bde39c;
    uVar23 = (ulong)*(ushort *)((long)param_1 + lVar16 + 0x36);
    if (uVar23 == 0) {
      puStack_d8 = (undefined *)0x0;
    }
    else {
      puVar32 = (uint *)((long)param_1 + uVar23);
      puStack_d8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar32 + (ulong)*puVar32 + 4);
      func_0x000107c61180();
      lVar16 = -(long)*param_1;
      uVar9 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar9 < 0x39) goto LAB_100bde3a0;
    uVar23 = (ulong)*(ushort *)((long)param_1 + lVar16 + 0x38);
    if (uVar23 == 0) {
      puStack_e0 = (undefined *)0x0;
    }
    else {
      puVar32 = (uint *)((long)param_1 + uVar23);
      puStack_e0 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar32 + (ulong)*puVar32 + 4);
      func_0x000107c61180();
      lVar16 = -(long)*param_1;
      uVar9 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if ((uVar9 < 0x3b) || (uVar23 = (ulong)*(ushort *)((long)param_1 + lVar16 + 0x3a), uVar23 == 0))
    goto LAB_100bde3a4;
    puVar32 = (uint *)((long)param_1 + uVar23);
    lVar16 = (long)puVar32 + (ulong)*puVar32;
  }
  FUN_100be0288();
  func_0x000107c61180();
  if ((*(ushort *)((long)param_1 - (long)*param_1) < 0x3d) ||
     (uVar23 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[0x1e], uVar23 == 0)) {
    lVar12 = 0;
  }
  else {
    puVar32 = (uint *)((long)param_1 + uVar23);
    lVar12 = (long)puVar32 + (ulong)*puVar32;
  }
  FUN_100be0288();
  func_0x000107c61180();
  lVar17 = (long)*param_1;
  uVar9 = *(ushort *)((long)param_1 - lVar17);
  if ((uVar9 < 0x3f) || (uVar9 < 0x41)) {
    puStack_f0 = (undefined *)0x0;
LAB_100bde48c:
    lVar17 = 0;
  }
  else {
    uVar23 = (ulong)((ushort *)((long)param_1 - lVar17))[0x20];
    if (uVar23 == 0) {
      puStack_f0 = (undefined *)0x0;
    }
    else {
      puVar32 = (uint *)((long)param_1 + uVar23);
      puStack_f0 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar32 + (ulong)*puVar32 + 4);
      func_0x000107c61180();
      lVar17 = (long)*param_1;
      uVar9 = *(ushort *)((long)param_1 - lVar17);
    }
    if ((((uVar9 < 0x45) || (uVar9 < 0x47)) || (uVar9 < 0x49)) ||
       (uVar23 = (ulong)*(ushort *)((long)param_1 + (0x48 - lVar17)), uVar23 == 0))
    goto LAB_100bde48c;
    puVar32 = (uint *)((long)param_1 + uVar23);
    lVar17 = (long)puVar32 + (ulong)*puVar32;
  }
  FUN_100be0288();
  func_0x000107c61180();
  if ((*(ushort *)((long)param_1 - (long)*param_1) < 0x4b) ||
     (uVar23 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[0x25], uVar23 == 0)) {
    lVar7 = 0;
  }
  else {
    puVar32 = (uint *)((long)param_1 + uVar23);
    lVar7 = (long)puVar32 + (ulong)*puVar32;
  }
  FUN_100be1b1c();
  func_0x000107c61180();
  lVar18 = (long)*param_1;
  uVar9 = *(ushort *)((long)param_1 - lVar18);
  if ((uVar9 < 0x4d) || (uVar9 < 0x4f)) {
    puVar25 = (undefined *)0x0;
LAB_100bde564:
    lVar18 = 0;
  }
  else {
    uVar23 = (ulong)((ushort *)((long)param_1 - lVar18))[0x27];
    if (uVar23 == 0) {
      puVar25 = (undefined *)0x0;
    }
    else {
      puVar32 = (uint *)((long)param_1 + uVar23);
      puVar25 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar32 + (ulong)*puVar32 + 4);
      func_0x000107c61180();
      lVar18 = (long)*param_1;
      uVar9 = *(ushort *)((long)param_1 - lVar18);
    }
    if ((uVar9 < 0x51) ||
       (uVar23 = (ulong)*(ushort *)((long)param_1 + (0x50 - lVar18)), uVar23 == 0))
    goto LAB_100bde564;
    puVar32 = (uint *)((long)param_1 + uVar23);
    lVar18 = (long)puVar32 + (ulong)*puVar32;
  }
  FUN_100be0288();
  func_0x000107c61180();
  lVar19 = (long)*param_1;
  uVar9 = *(ushort *)((long)param_1 - lVar19);
  if ((uVar9 < 0x53) || (uVar9 < 0x55)) {
    puStack_118 = (undefined *)0x0;
LAB_100bde608:
    puStack_120 = (undefined *)0x0;
LAB_100bde610:
    lVar19 = 0;
  }
  else {
    uVar23 = (ulong)((ushort *)((long)param_1 - lVar19))[0x2a];
    if (uVar23 == 0) {
      puStack_118 = (undefined *)0x0;
    }
    else {
      puVar32 = (uint *)((long)param_1 + uVar23);
      puStack_118 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar32 + (ulong)*puVar32 + 4);
      func_0x000107c61180();
      lVar19 = (long)*param_1;
      uVar9 = *(ushort *)((long)param_1 - lVar19);
    }
    lVar19 = -lVar19;
    if (uVar9 < 0x57) goto LAB_100bde608;
    if (*(short *)((long)param_1 + lVar19 + 0x56) == 0) {
      puStack_120 = (undefined *)0x0;
    }
    else {
      puStack_120 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x000107c610f4();
      func_0x000107c45ae4();
      lVar19 = -(long)*param_1;
      uVar9 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (((uVar9 < 0x59) || (uVar9 < 0x5b)) ||
       (uVar23 = (ulong)*(ushort *)((long)param_1 + lVar19 + 0x5a), uVar23 == 0))
    goto LAB_100bde610;
    puVar32 = (uint *)((long)param_1 + uVar23);
    lVar19 = (long)puVar32 + (ulong)*puVar32;
  }
  FUN_100be215c();
  func_0x000107c61180();
  lVar20 = (long)*param_1;
  uVar9 = *(ushort *)((long)param_1 - lVar20);
  if ((uVar9 < 0x5d) || (uVar9 < 0x5f)) {
    puVar26 = (undefined *)0x0;
LAB_100bde6a8:
    lVar20 = 0;
  }
  else {
    uVar23 = (ulong)((ushort *)((long)param_1 - lVar20))[0x2f];
    if (uVar23 == 0) {
      puVar26 = (undefined *)0x0;
    }
    else {
      puVar32 = (uint *)((long)param_1 + uVar23);
      puVar26 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar32 + (ulong)*puVar32 + 4);
      func_0x000107c61180();
      lVar20 = (long)*param_1;
      uVar9 = *(ushort *)((long)param_1 - lVar20);
    }
    if ((uVar9 < 0x61) ||
       (uVar23 = (ulong)*(ushort *)((long)param_1 + (0x60 - lVar20)), uVar23 == 0))
    goto LAB_100bde6a8;
    puVar32 = (uint *)((long)param_1 + uVar23);
    lVar20 = (long)puVar32 + (ulong)*puVar32;
  }
  FUN_100be2498();
  func_0x000107c61180();
  lVar21 = (long)*param_1;
  uVar9 = *(ushort *)((long)param_1 - lVar21);
  if (uVar9 < 99) {
    puStack_140 = (undefined *)0x0;
LAB_100bde7b4:
    puVar29 = (undefined *)0x0;
LAB_100bde7bc:
    puStack_148 = (undefined *)0x0;
LAB_100bde7c0:
    puStack_150 = (undefined *)0x0;
LAB_100bde7c8:
    puStack_158 = (undefined *)0x0;
LAB_100bde7cc:
    puStack_1d0 = (undefined *)0x0;
LAB_100bde7d0:
    puStack_1d8 = (undefined *)0x0;
LAB_100bde7d4:
    puStack_1e0 = (undefined *)0x0;
LAB_100bde7d8:
    puStack_1e8 = (undefined *)0x0;
LAB_100bde7dc:
    puVar27 = (undefined *)0x0;
LAB_100bde7e4:
    lVar21 = 0;
  }
  else {
    uVar23 = (ulong)((ushort *)((long)param_1 - lVar21))[0x31];
    if (uVar23 == 0) {
      puStack_140 = (undefined *)0x0;
    }
    else {
      puVar32 = (uint *)((long)param_1 + uVar23);
      puStack_140 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar32 + (ulong)*puVar32 + 4);
      func_0x000107c61180();
      lVar21 = (long)*param_1;
      uVar9 = *(ushort *)((long)param_1 - lVar21);
    }
    lVar21 = -lVar21;
    if (uVar9 < 0x65) goto LAB_100bde7b4;
    uVar23 = (ulong)*(ushort *)((long)param_1 + lVar21 + 100);
    if (uVar23 == 0) {
      puVar29 = (undefined *)0x0;
    }
    else {
      puVar32 = (uint *)((long)param_1 + uVar23);
      uVar2 = *puVar32;
      puVar29 = PTR_PTR_1126de7a0;
      func_0x000107c610f4();
      piVar1 = (int *)((long)puVar32 + (ulong)uVar2);
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
         (uVar23 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar23 == 0)) {
        puVar27 = (undefined *)0x0;
      }
      else {
        puVar32 = (uint *)((long)piVar1 + uVar23);
        puVar27 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                            (long)puVar32 + (ulong)*puVar32 + 4);
        func_0x000107c61180();
      }
      func_0x000107c456cc(puVar29,param_2,puVar27);
      func_0x000107c61170(puVar27);
      lVar21 = -(long)*param_1;
      uVar9 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar9 < 0x67) goto LAB_100bde7bc;
    uVar23 = (ulong)*(ushort *)((long)param_1 + lVar21 + 0x66);
    if (uVar23 == 0) {
      puStack_148 = (undefined *)0x0;
    }
    else {
      puVar15 = (uint *)((long)param_1 + uVar23);
      puVar15 = (uint *)((long)puVar15 + (ulong)*puVar15);
      puVar27 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x000107c3e170(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,*puVar15);
      func_0x000107c61180();
      puVar32 = puVar15 + 1;
      if (*puVar15 != 0) {
        do {
          lVar21 = (long)puVar32 + (ulong)*puVar32;
          func_0x000107c2ba74(lVar21);
          func_0x000107c61180();
          func_0x000107c3d798(puVar27,param_2,lVar21);
          func_0x000107c61170(lVar21);
          puVar32 = puVar32 + 1;
        } while (puVar32 != puVar15 + 1 + *puVar15);
      }
      puStack_148 = puVar27;
      func_0x000107c40794();
      func_0x000107c61170(puVar27);
      lVar21 = -(long)*param_1;
      uVar9 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar9 < 0x69) goto LAB_100bde7c0;
    if (*(short *)((long)param_1 + lVar21 + 0x68) == 0) {
      puStack_150 = (undefined *)0x0;
    }
    else {
      puStack_150 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x000107c610f4();
      func_0x000107c45ae4();
      lVar21 = -(long)*param_1;
      uVar9 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if ((uVar9 < 0x6d) || (uVar9 < 0x6f)) goto LAB_100bde7c8;
    uVar23 = (ulong)*(ushort *)((long)param_1 + lVar21 + 0x6e);
    if (uVar23 == 0) {
      puStack_158 = (undefined *)0x0;
    }
    else {
      puVar32 = (uint *)((long)param_1 + uVar23);
      uVar2 = *puVar32;
      puStack_158 = PTR_PTR_1126de7b0;
      func_0x000107c610f4();
      piVar1 = (int *)((long)puVar32 + (ulong)uVar2);
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
         (uVar23 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar23 == 0)) {
        lVar21 = 0;
      }
      else {
        puVar32 = (uint *)((long)piVar1 + uVar23);
        lVar21 = (long)puVar32 + (ulong)*puVar32;
      }
      FUN_100be0288(lVar21);
      func_0x000107c61180();
      func_0x000107c482f0(puStack_158,param_2,lVar21);
      func_0x000107c61170(lVar21);
      lVar21 = -(long)*param_1;
      uVar9 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar9 < 0x71) goto LAB_100bde7cc;
    if (*(short *)((long)param_1 + lVar21 + 0x70) == 0) {
      puStack_1d0 = (undefined *)0x0;
    }
    else {
      puStack_1d0 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x000107c610f4();
      func_0x000107c45ae4();
      lVar21 = -(long)*param_1;
      uVar9 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar9 < 0x73) goto LAB_100bde7d0;
    uVar23 = (ulong)*(ushort *)((long)param_1 + lVar21 + 0x72);
    if (uVar23 == 0) {
      puStack_1d8 = (undefined *)0x0;
    }
    else {
      uVar31 = (ulong)*(uint *)((long)param_1 + uVar23);
      puVar32 = (uint *)((long)((long)param_1 + uVar23) + uVar31);
      puVar27 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x000107c3e170(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,*puVar32);
      func_0x000107c61180();
      if (*puVar32 != 0) {
        lVar21 = (long)param_1 + uVar31 + uVar23 + 10;
        do {
          uVar23 = (ulong)*(uint *)(lVar21 + -6);
          puVar8 = PTR_PTR_1126de7c8;
          func_0x000107c610f4(PTR_PTR_1126de7c8);
          lVar13 = uVar23 - (long)*(int *)(lVar21 + uVar23 + -6);
          uVar9 = *(ushort *)(lVar21 + lVar13 + -6);
          uVar37 = 0;
          if (((4 < uVar9) && (6 < uVar9)) &&
             (uVar31 = (ulong)*(ushort *)(lVar21 + lVar13), uVar31 != 0)) {
            uVar37 = *(undefined8 *)(lVar21 + uVar23 + uVar31 + -6);
          }
          func_0x000107c45d40(uVar37);
          func_0x000107c3d798(puVar27,param_2,puVar8);
          func_0x000107c61170(puVar8);
          puVar15 = (uint *)(lVar21 + -2);
          lVar21 = lVar21 + 4;
        } while (puVar15 != puVar32 + (ulong)*puVar32 + 1);
      }
      puStack_1d8 = puVar27;
      func_0x000107c40794();
      func_0x000107c61170(puVar27);
      lVar21 = -(long)*param_1;
      uVar9 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar9 < 0x75) goto LAB_100bde7d4;
    if (*(short *)((long)param_1 + lVar21 + 0x74) == 0) {
      puStack_1e0 = (undefined *)0x0;
    }
    else {
      puStack_1e0 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x000107c610f4();
      func_0x000107c45ae4();
      lVar21 = -(long)*param_1;
      uVar9 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar9 < 0x77) goto LAB_100bde7d8;
    uVar23 = (ulong)*(ushort *)((long)param_1 + lVar21 + 0x76);
    if (uVar23 == 0) {
      puStack_1e8 = (undefined *)0x0;
    }
    else {
      puVar15 = (uint *)((long)param_1 + uVar23);
      puVar15 = (uint *)((long)puVar15 + (ulong)*puVar15);
      puVar27 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x000107c3e170(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,*puVar15);
      func_0x000107c61180();
      puVar32 = puVar15 + 1;
      if (*puVar15 != 0) {
        do {
          puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x000107c4d950(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,(long)(char)*puVar32);
          func_0x000107c61180();
          func_0x000107c3d798(puVar27,param_2,puVar8);
          func_0x000107c61170(puVar8);
          puVar32 = (uint *)((long)puVar32 + 1);
        } while (puVar32 != (uint *)((long)(puVar15 + 1) + (ulong)*puVar15));
      }
      puStack_1e8 = puVar27;
      func_0x000107c40794();
      func_0x000107c61170(puVar27);
      lVar21 = -(long)*param_1;
      uVar9 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar9 < 0x79) goto LAB_100bde7dc;
    uVar23 = (ulong)*(ushort *)((long)param_1 + lVar21 + 0x78);
    if (uVar23 == 0) {
      puVar27 = (undefined *)0x0;
    }
    else {
      puVar32 = (uint *)((long)param_1 + uVar23);
      uVar2 = *puVar32;
      puVar27 = PTR_PTR_1126de7b8;
      func_0x000107c610f4();
      piVar1 = (int *)((long)puVar32 + (ulong)uVar2);
      puVar11 = (ushort *)((long)piVar1 - (long)*piVar1);
      if (*puVar11 < 5) {
        cVar30 = '\0';
LAB_100bdf778:
        lVar21 = 0;
      }
      else {
        if ((ulong)puVar11[2] == 0) {
          cVar30 = '\0';
        }
        else {
          cVar30 = *(char *)((long)piVar1 + (ulong)puVar11[2]);
        }
        if ((*puVar11 < 7) || ((ulong)puVar11[3] == 0)) goto LAB_100bdf778;
        puVar32 = (uint *)((long)piVar1 + (ulong)puVar11[3]);
        lVar21 = (long)puVar32 + (ulong)*puVar32;
      }
      func_0x000107c2ba78(lVar21);
      func_0x000107c61180();
      func_0x000107c48ee4(puVar27,param_2,(int)cVar30,lVar21);
      func_0x000107c61170(lVar21);
      lVar21 = -(long)*param_1;
      uVar9 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (((uVar9 < 0x7b) || (uVar9 < 0x7d)) ||
       (uVar23 = (ulong)*(ushort *)((long)param_1 + lVar21 + 0x7c), uVar23 == 0))
    goto LAB_100bde7e4;
    puVar32 = (uint *)((long)param_1 + uVar23);
    lVar21 = (long)puVar32 + (ulong)*puVar32;
  }
  FUN_100be2618();
  func_0x000107c61180();
  lVar13 = (long)*param_1;
  uVar9 = *(ushort *)((long)param_1 - lVar13);
  if (uVar9 < 0x7f) {
    puStack_200 = (undefined *)0x0;
LAB_100bde888:
    lVar13 = 0;
  }
  else {
    uVar23 = (ulong)((ushort *)((long)param_1 - lVar13))[0x3f];
    if (uVar23 == 0) {
      puStack_200 = (undefined *)0x0;
    }
    else {
      puVar32 = (uint *)((long)param_1 + uVar23);
      puStack_200 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar32 + (ulong)*puVar32 + 4);
      func_0x000107c61180();
      lVar13 = (long)*param_1;
      uVar9 = *(ushort *)((long)param_1 - lVar13);
    }
    if ((uVar9 < 0x81) ||
       (uVar23 = (ulong)*(ushort *)((long)param_1 + (0x80 - lVar13)), uVar23 == 0))
    goto LAB_100bde888;
    puVar32 = (uint *)((long)param_1 + uVar23);
    lVar13 = (long)puVar32 + (ulong)*puVar32;
  }
  FUN_100be2800();
  func_0x000107c61180();
  lVar22 = (long)*param_1;
  uVar9 = *(ushort *)((long)param_1 - lVar22);
  if (uVar9 < 0x83) {
    puStack_210 = (undefined *)0x0;
LAB_100bde960:
    puStack_218 = (undefined *)0x0;
LAB_100bde964:
    lVar22 = 0;
  }
  else {
    uVar23 = (ulong)((ushort *)((long)param_1 - lVar22))[0x41];
    if (uVar23 == 0) {
      puStack_210 = (undefined *)0x0;
    }
    else {
      puVar32 = (uint *)((long)param_1 + uVar23);
      puStack_210 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar32 + (ulong)*puVar32 + 4);
      func_0x000107c61180();
      lVar22 = (long)*param_1;
      uVar9 = *(ushort *)((long)param_1 - lVar22);
    }
    lVar22 = -lVar22;
    if (uVar9 < 0x85) goto LAB_100bde960;
    if (*(short *)((long)param_1 + lVar22 + 0x84) == 0) {
      puStack_218 = (undefined *)0x0;
    }
    else {
      puStack_218 = PTR_PTR_1126de7d8;
      func_0x000107c610f4();
      func_0x000107c4950c();
      lVar22 = -(long)*param_1;
      uVar9 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if ((uVar9 < 0x87) || (uVar23 = (ulong)*(ushort *)((long)param_1 + lVar22 + 0x86), uVar23 == 0))
    goto LAB_100bde964;
    puVar32 = (uint *)((long)param_1 + uVar23);
    lVar22 = (long)puVar32 + (ulong)*puVar32;
  }
  FUN_100be2bd0();
  func_0x000107c61180();
  func_0x000107c472fc(puVar4,param_2,puVar33,puVar34,puVar35,puVar36,puStack_a0,puStack_168,puVar24,
                      lVar10,uStack_178,uVar3);
  func_0x000107c61170(lVar22);
  func_0x000107c61170(puStack_218);
  func_0x000107c61170(puStack_210);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(puStack_200);
  func_0x000107c61170(lVar21);
  func_0x000107c61170(puVar27);
  func_0x000107c61170(puStack_1e8);
  func_0x000107c61170(puStack_1e0);
  func_0x000107c61170(puStack_1d8);
  func_0x000107c61170(puStack_1d0);
  func_0x000107c61170(puStack_158);
  func_0x000107c61170(puStack_150);
  func_0x000107c61170(puStack_148);
  func_0x000107c61170(puVar29);
  func_0x000107c61170(puStack_140);
  func_0x000107c61170(lVar20);
  func_0x000107c61170(puVar26);
  func_0x000107c61170(lVar19);
  func_0x000107c61170(puStack_120);
  func_0x000107c61170(puStack_118);
  func_0x000107c61170(lVar18);
  func_0x000107c61170(puVar25);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar17);
  func_0x000107c61170(puStack_f0);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lVar16);
  func_0x000107c61170(puStack_e0);
  func_0x000107c61170(puStack_d8);
  func_0x000107c61170(puStack_d0);
  func_0x000107c61170(lVar14);
  func_0x000107c61170(puVar28);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(puVar24);
  func_0x000107c61170(puStack_168);
  func_0x000107c61170(puStack_a0);
  func_0x000107c61170(puVar36);
  func_0x000107c61170(puVar35);
  func_0x000107c61170(puVar34);
  func_0x000107c61170(puVar33);
LAB_100bdec70:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 100bdfd84; end: 100bdfebb;  */

void FUN_100bdfd84(int *param_1,undefined8 param_2)

{
  uint *puVar1;
  ushort uVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  if (param_1 == (int *)0x0) {
    puVar6 = (undefined *)0x0;
    goto LAB_100bdfe84;
  }
  puVar6 = PTR_PTR_1126de700;
  func_0x000107c610f4(PTR_PTR_1126de700);
  lVar3 = (long)*param_1;
  uVar2 = *(ushort *)((long)param_1 - lVar3);
  if (uVar2 < 5) {
    puVar5 = (undefined *)0x0;
LAB_100bdfe5c:
    puVar7 = (undefined *)0x0;
  }
  else {
    uVar4 = (ulong)((ushort *)((long)param_1 - lVar3))[2];
    if (uVar4 == 0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar4);
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      func_0x000107c61180();
      lVar3 = (long)*param_1;
      uVar2 = *(ushort *)((long)param_1 - lVar3);
    }
    if ((uVar2 < 7) || (uVar4 = (ulong)*(ushort *)((long)param_1 + (6 - lVar3)), uVar4 == 0))
    goto LAB_100bdfe5c;
    puVar1 = (uint *)((long)param_1 + uVar4);
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        (long)puVar1 + (ulong)*puVar1 + 4);
    func_0x000107c61180();
  }
  func_0x000107c46ce4(puVar6,param_2,puVar5,puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar5);
LAB_100bdfe84:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 100bdfebc; end: 100bdff67; -[SCLensMetadataHintTranslation initWithHintId:hintDescription:] */

undefined1 *
FUN_100bdfebc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_112701860;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100bdff68; end: 100bdff87;  */

void FUN_100bdff68(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (*(long *)(lVar1 + 0x68) != 2) {
    *(long *)(lVar1 + 0x38) = *(long *)(lVar1 + 0x38) + 1;
  }
  return;
}



/* Entry: 100bdff88; end: 100bdff93; -[SCLensDataFetcher kindName] */

undefined ** FUN_100bdff88(void)

{
  return &PTR____CFConstantStringClassReference_110f5def8;
}



/* Entry: 100bdff94; end: 100be0003;  */

/* WARNING: Possible PIC construction at 0x000100bdffd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bdffec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100bdffdc) */
/* WARNING: Removing unreachable block (ram,0x000100bdfff0) */

void FUN_100bdff94(long param_1,undefined8 param_2)

{
  func_0x000107c61174(param_2);
  func_0x000107c61148(param_1 + 0x20);
  func_0x000107c4dfe8(param_2);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100be0004; end: 100be0033; -[SCFeedSnapchattersRepositoryGrapheneLogger _userPrivacyDidChange:] */

void FUN_100be0004(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c40794();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100be0034; end: 100be01c3;  */

void FUN_100be0034(int *param_1,undefined8 param_2)

{
  uint *puVar1;
  bool bVar2;
  ushort uVar3;
  char cVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  if (param_1 == (int *)0x0) {
    puVar8 = (undefined *)0x0;
    goto LAB_100be0150;
  }
  puVar8 = PTR_PTR_1126de708;
  func_0x000107c610f4(PTR_PTR_1126de708);
  lVar5 = (long)*param_1;
  uVar3 = *(ushort *)((long)param_1 - lVar5);
  if (uVar3 < 5) {
    puVar7 = (undefined *)0x0;
LAB_100be011c:
    puVar9 = (undefined *)0x0;
LAB_100be0120:
    cVar4 = '\0';
LAB_100be0124:
    bVar2 = false;
  }
  else {
    uVar6 = (ulong)((ushort *)((long)param_1 - lVar5))[2];
    if (uVar6 == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar6);
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      func_0x000107c61180();
      lVar5 = (long)*param_1;
      uVar3 = *(ushort *)((long)param_1 - lVar5);
    }
    lVar5 = -lVar5;
    if (uVar3 < 7) goto LAB_100be011c;
    uVar6 = (ulong)*(ushort *)((long)param_1 + lVar5 + 6);
    if (uVar6 == 0) {
      puVar9 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar6);
      puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      func_0x000107c61180();
      lVar5 = -(long)*param_1;
      uVar3 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar3 < 0xd) goto LAB_100be0120;
    uVar6 = (ulong)*(ushort *)((long)param_1 + lVar5 + 0xc);
    cVar4 = '\0';
    if (uVar6 != 0) {
      cVar4 = *(char *)((long)param_1 + uVar6);
    }
    if ((uVar3 < 0xf) || (uVar6 = (ulong)*(ushort *)((long)param_1 + lVar5 + 0xe), uVar6 == 0))
    goto LAB_100be0124;
    bVar2 = *(char *)((long)param_1 + uVar6) != '\0';
  }
  func_0x000107c48fec(puVar8,param_2,puVar7,puVar9,(int)cVar4,bVar2);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar7);
LAB_100be0150:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 100be01c4; end: 100be0287; -[SCLensMetadataLensResource initWithURLString:checksum:resourceType:isFallback:] */

undefined1 *
FUN_100be01c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_48 = PTR_PTR_112701868;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_5;
    *(undefined1 *)((long)puVar1 + 9) = param_6;
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100be0288; end: 100be0373;  */

void FUN_100be0288(uint *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint *puVar3;
  
  puVar2 = (undefined *)0x0;
  if (param_1 != (uint *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c3e170(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,*param_1);
    func_0x000107c61180();
    puVar3 = param_1 + 1;
    if (*param_1 != 0) {
      do {
        puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                            (long)puVar3 + (ulong)*puVar3 + 4);
        func_0x000107c61180();
        if (puVar2 != (undefined *)0x0) {
          func_0x000107c3d798(puVar1,param_2,puVar2);
        }
        func_0x000107c61170(puVar2);
        puVar3 = puVar3 + 1;
      } while (puVar3 != param_1 + 1 + *param_1);
    }
    puVar2 = puVar1;
    func_0x000107c40794(puVar1);
    func_0x000107c61170(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100be0374; end: 100be047f;  */

void FUN_100be0374(int *param_1,undefined8 param_2)

{
  uint *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  
  if (param_1 == (int *)0x0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126de738;
    func_0x000107c610f4(PTR_PTR_1126de738);
    if ((*(ushort *)((long)param_1 - (long)*param_1) < 5) ||
       (uVar4 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[2], uVar4 == 0)) {
      lVar2 = 0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar4);
      lVar2 = (long)puVar1 + (ulong)*puVar1;
    }
    func_0x000107c2ba6c(lVar2);
    func_0x000107c61180();
    if ((*(ushort *)((long)param_1 - (long)*param_1) < 7) ||
       (uVar4 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[3], uVar4 == 0)) {
      lVar3 = 0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar4);
      lVar3 = (long)puVar1 + (ulong)*puVar1;
    }
    func_0x000107c2ba70(lVar3);
    func_0x000107c61180();
    func_0x000107c48b18(puVar5,param_2,lVar2,lVar3);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 100be0480; end: 100be0a13;  */

void FUN_100be0480(int *param_1,undefined8 param_2)

{
  uint *puVar1;
  long lVar2;
  ushort uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puStack_70;
  undefined *puStack_68;
  
  if (param_1 == (int *)0x0) {
    puVar10 = (undefined *)0x0;
    goto LAB_100be0624;
  }
  puVar10 = PTR_PTR_1126de748;
  func_0x000107c610f4(PTR_PTR_1126de748);
  lVar2 = (long)*param_1;
  uVar3 = *(ushort *)((long)param_1 - lVar2);
  if (uVar3 < 5) {
    puStack_68 = (undefined *)0x0;
LAB_100be057c:
    puVar6 = (undefined *)0x0;
    uVar11 = 0;
LAB_100be0584:
    puVar7 = (undefined *)0x0;
LAB_100be0588:
    puStack_70 = (undefined *)0x0;
LAB_100be058c:
    puVar9 = (undefined *)0x0;
LAB_100be0590:
    puVar12 = (undefined *)0x0;
LAB_100be0594:
    puVar14 = (undefined *)0x0;
LAB_100be0598:
    puVar8 = (undefined *)0x0;
LAB_100be059c:
    puVar5 = (undefined *)0x0;
    puVar13 = (undefined *)0x0;
  }
  else {
    uVar4 = (ulong)((ushort *)((long)param_1 - lVar2))[2];
    if (uVar4 == 0) {
      puStack_68 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar4);
      puStack_68 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      func_0x000107c61180();
      lVar2 = (long)*param_1;
      uVar3 = *(ushort *)((long)param_1 - lVar2);
    }
    lVar2 = -lVar2;
    if (uVar3 < 7) goto LAB_100be057c;
    uVar4 = (ulong)*(ushort *)((long)param_1 + lVar2 + 6);
    if (uVar4 == 0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar4);
      puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      func_0x000107c61180();
      lVar2 = -(long)*param_1;
      uVar3 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar3 < 9) {
      uVar11 = 0;
      goto LAB_100be0584;
    }
    uVar4 = (ulong)*(ushort *)((long)param_1 + lVar2 + 8);
    if (uVar4 == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = *(undefined8 *)((long)param_1 + uVar4);
    }
    if (uVar3 < 0xb) goto LAB_100be0584;
    uVar4 = (ulong)*(ushort *)((long)param_1 + lVar2 + 10);
    if (uVar4 == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar4);
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      func_0x000107c61180();
      lVar2 = -(long)*param_1;
      uVar3 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar3 < 0xd) goto LAB_100be0588;
    uVar4 = (ulong)*(ushort *)((long)param_1 + lVar2 + 0xc);
    if (uVar4 == 0) {
      puStack_70 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar4);
      puStack_70 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      func_0x000107c61180();
      lVar2 = -(long)*param_1;
      uVar3 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar3 < 0xf) goto LAB_100be058c;
    uVar4 = (ulong)*(ushort *)((long)param_1 + lVar2 + 0xe);
    if (uVar4 == 0) {
      puVar9 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar4);
      puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      func_0x000107c61180();
      lVar2 = -(long)*param_1;
      uVar3 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar3 < 0x11) goto LAB_100be0590;
    uVar4 = (ulong)*(ushort *)((long)param_1 + lVar2 + 0x10);
    if (uVar4 == 0) {
      puVar12 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar4);
      puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      func_0x000107c61180();
      lVar2 = -(long)*param_1;
      uVar3 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar3 < 0x13) goto LAB_100be0594;
    uVar4 = (ulong)*(ushort *)((long)param_1 + lVar2 + 0x12);
    if (uVar4 == 0) {
      puVar14 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar4);
      puVar14 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      func_0x000107c61180();
      lVar2 = -(long)*param_1;
      uVar3 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar3 < 0x1b) goto LAB_100be0598;
    uVar4 = (ulong)*(ushort *)((long)param_1 + lVar2 + 0x1a);
    if (uVar4 == 0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar4);
      puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      func_0x000107c61180();
      lVar2 = -(long)*param_1;
      uVar3 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar3 < 0x1d) goto LAB_100be059c;
    if (*(short *)((long)param_1 + lVar2 + 0x1c) == 0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar5 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x000107c610f4();
      func_0x000107c45ae4();
      lVar2 = -(long)*param_1;
      uVar3 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if ((uVar3 < 0x1f) || (uVar4 = (ulong)*(ushort *)((long)param_1 + lVar2 + 0x1e), uVar4 == 0)) {
      puVar13 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar4);
      puVar13 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      func_0x000107c61180();
    }
  }
  func_0x000107c45600(puVar10,param_2,puStack_68,puVar6,uVar11,puVar7,puStack_70,puVar9,puVar12,
                      puVar14,puVar8,puVar5,puVar13);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar14);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puStack_70);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puStack_68);
LAB_100be0624:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 100be0a14; end: 100be0bf3;  */

/* WARNING: Possible PIC construction at 0x000100be0b0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100be0b3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100be0b94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100be0bc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100be0b98) */
/* WARNING: Removing unreachable block (ram,0x000100be0b40) */
/* WARNING: Removing unreachable block (ram,0x000100be0b60) */
/* WARNING: Removing unreachable block (ram,0x000100be0b70) */
/* WARNING: Removing unreachable block (ram,0x000100be0b10) */
/* WARNING: Removing unreachable block (ram,0x000100be0bc4) */

void FUN_100be0a14(long param_1)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  func_0x000107c4fe44(PTR_PTR_1126b2cb0);
  func_0x000107c61180();
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x000107c61174(uVar1);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  puStack_48 = &UNK_1064ddcb4;
  puStack_40 = &UNK_1064ddcc4;
  uStack_38 = 0;
  func_0x000107c4c77c(uVar1);
  func_0x000107c61174(puStack_58[5]);
  func_0x000107c60bcc(&uStack_60,8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uStack_38);
  return;
}



/* Entry: 100be0bf4; end: 100be0c1f; +[SCGrapheneFriendsFeedMetric remoteScFetch] */

void FUN_100be0bf4(void)

{
  func_0x000107c610f4(PTR_PTR_1126b2cb0);
  func_0x000107c46d68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100be0c20; end: 100be0e47; -[SCLensMetadataUnlockableTrackInfo initWithAdServeRequestId:rawAdData:skipTrack:encryptedSponsoredData:adTrackUrl:rankingId:rankingData:encryptedUserTrackData:skAdNetworkAttribution:adId:adServeItemId:] */

undefined8 *
FUN_100be0c20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  puStack_68 = PTR_PTR_1127018a0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = puVar1[1];
    puVar1[1] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    func_0x000107c61170(uVar3);
    puVar1[3] = param_5;
    uVar2 = param_6;
    func_0x000107c40794();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_7;
    func_0x000107c40794();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_8;
    func_0x000107c40794();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_9;
    func_0x000107c40794();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_10;
    func_0x000107c40794();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_11;
    func_0x000107c40794();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_12;
    func_0x000107c40794();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_13;
    func_0x000107c40794();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 100be0e48; end: 100be0ee3; -[SCUserSnapPrivacy matchUnknown:everyone:friends:] */

/* WARNING: Possible PIC construction at 0x000100be0eb8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100be0ebc) */

void FUN_100be0e48(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  lVar2 = *(long *)(param_1 + 8);
  lVar1 = param_5;
  if ((((lVar2 == 2) || (lVar1 = param_4, lVar2 == 1)) || (lVar1 = param_3, lVar2 == 0)) &&
     (lVar1 != 0)) {
    (**(code **)(lVar1 + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 100be0ee4; end: 100be0eff;  */

void FUN_100be0ee4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined ***)(lVar2 + 0x28) = &PTR____CFConstantStringClassReference_110dcaeb8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100be0f00; end: 100be163f;  */

void FUN_100be0f00(int *param_1,undefined8 param_2)

{
  uint *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ushort uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  char cVar16;
  char cVar17;
  uint *puVar18;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_80;
  
  if (param_1 == (int *)0x0) {
    puVar10 = (undefined *)0x0;
    goto LAB_100be10e0;
  }
  puVar10 = PTR_PTR_1126de750;
  func_0x000107c610f4(PTR_PTR_1126de750);
  lVar4 = (long)*param_1;
  uVar5 = *(ushort *)((long)param_1 - lVar4);
  if (uVar5 < 5) {
    puStack_80 = (undefined *)0x0;
LAB_100be0ff8:
    puVar7 = (undefined *)0x0;
LAB_100be0ffc:
    puVar8 = (undefined *)0x0;
LAB_100be1004:
    puVar9 = (undefined *)0x0;
LAB_100be1008:
    cVar16 = '\0';
LAB_100be1010:
    uVar11 = 0;
    cVar17 = '\0';
LAB_100be1014:
    uVar12 = 0;
LAB_100be1018:
    puVar14 = (undefined *)0x0;
LAB_100be101c:
    puVar15 = (undefined *)0x0;
LAB_100be1020:
    puVar2 = (undefined *)0x0;
LAB_100be1024:
    puStack_a8 = (undefined *)0x0;
LAB_100be1028:
    puStack_b0 = (undefined *)0x0;
LAB_100be102c:
    puStack_b8 = (undefined *)0x0;
    puVar13 = (undefined *)0x0;
  }
  else {
    uVar6 = (ulong)((ushort *)((long)param_1 - lVar4))[2];
    if (uVar6 == 0) {
      puStack_80 = (undefined *)0x0;
    }
    else {
      puVar18 = (uint *)((long)param_1 + uVar6);
      puStack_80 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar18 + (ulong)*puVar18 + 4);
      func_0x000107c61180();
      lVar4 = (long)*param_1;
      uVar5 = *(ushort *)((long)param_1 - lVar4);
    }
    lVar4 = -lVar4;
    if (uVar5 < 7) goto LAB_100be0ff8;
    uVar6 = (ulong)*(ushort *)((long)param_1 + lVar4 + 6);
    if (uVar6 == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar18 = (uint *)((long)param_1 + uVar6);
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar18 + (ulong)*puVar18 + 4);
      func_0x000107c61180();
      lVar4 = -(long)*param_1;
      uVar5 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar5 < 9) goto LAB_100be0ffc;
    uVar6 = (ulong)*(ushort *)((long)param_1 + lVar4 + 8);
    if (uVar6 == 0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar18 = (uint *)((long)param_1 + uVar6);
      puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar18 + (ulong)*puVar18 + 4);
      func_0x000107c61180();
      lVar4 = -(long)*param_1;
      uVar5 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar5 < 0xb) goto LAB_100be1004;
    uVar6 = (ulong)*(ushort *)((long)param_1 + lVar4 + 10);
    if (uVar6 == 0) {
      puVar9 = (undefined *)0x0;
    }
    else {
      puVar18 = (uint *)((long)param_1 + uVar6);
      puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar18 + (ulong)*puVar18 + 4);
      func_0x000107c61180();
      lVar4 = -(long)*param_1;
      uVar5 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar5 < 0xd) goto LAB_100be1008;
    uVar6 = (ulong)*(ushort *)((long)param_1 + lVar4 + 0xc);
    if (uVar6 == 0) {
      cVar16 = '\0';
    }
    else {
      cVar16 = *(char *)((long)param_1 + uVar6);
    }
    if (uVar5 < 0xf) goto LAB_100be1010;
    uVar6 = (ulong)*(ushort *)((long)param_1 + lVar4 + 0xe);
    if (uVar6 == 0) {
      cVar17 = '\0';
    }
    else {
      cVar17 = *(char *)((long)param_1 + uVar6);
    }
    if (uVar5 < 0x11) {
      uVar11 = 0;
      goto LAB_100be1014;
    }
    uVar6 = (ulong)*(ushort *)((long)param_1 + lVar4 + 0x10);
    if (uVar6 == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = *(undefined8 *)((long)param_1 + uVar6);
    }
    if (uVar5 < 0x13) goto LAB_100be1014;
    uVar6 = (ulong)*(ushort *)((long)param_1 + lVar4 + 0x12);
    if (uVar6 == 0) {
      uVar12 = 0;
    }
    else {
      uVar12 = *(undefined8 *)((long)param_1 + uVar6);
    }
    if (uVar5 < 0x15) goto LAB_100be1018;
    uVar6 = (ulong)*(ushort *)((long)param_1 + lVar4 + 0x14);
    if (uVar6 == 0) {
      puVar14 = (undefined *)0x0;
    }
    else {
      puVar18 = (uint *)((long)param_1 + uVar6);
      puVar14 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar18 + (ulong)*puVar18 + 4);
      func_0x000107c61180();
      lVar4 = -(long)*param_1;
      uVar5 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar5 < 0x17) goto LAB_100be101c;
    uVar6 = (ulong)*(ushort *)((long)param_1 + lVar4 + 0x16);
    if (uVar6 == 0) {
      puVar15 = (undefined *)0x0;
    }
    else {
      puVar18 = (uint *)((long)param_1 + uVar6);
      puVar15 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar18 + (ulong)*puVar18 + 4);
      func_0x000107c61180();
      lVar4 = -(long)*param_1;
      uVar5 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar5 < 0x19) goto LAB_100be1020;
    uVar6 = (ulong)*(ushort *)((long)param_1 + lVar4 + 0x18);
    if (uVar6 == 0) {
      puVar2 = (undefined *)0x0;
    }
    else {
      puVar18 = (uint *)((long)param_1 + uVar6);
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar18 + (ulong)*puVar18 + 4);
      func_0x000107c61180();
      lVar4 = -(long)*param_1;
      uVar5 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar5 < 0x1b) goto LAB_100be1024;
    uVar6 = (ulong)*(ushort *)((long)param_1 + lVar4 + 0x1a);
    if (uVar6 == 0) {
      puStack_a8 = (undefined *)0x0;
    }
    else {
      puVar18 = (uint *)((long)param_1 + uVar6);
      puStack_a8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar18 + (ulong)*puVar18 + 4);
      func_0x000107c61180();
      lVar4 = -(long)*param_1;
      uVar5 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar5 < 0x1d) goto LAB_100be1028;
    if (*(short *)((long)param_1 + lVar4 + 0x1c) == 0) {
      puStack_b0 = (undefined *)0x0;
    }
    else {
      puStack_b0 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x000107c610f4();
      func_0x000107c45ae4();
      lVar4 = -(long)*param_1;
      uVar5 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar5 < 0x1f) goto LAB_100be102c;
    if (*(short *)((long)param_1 + lVar4 + 0x1e) == 0) {
      puStack_b8 = (undefined *)0x0;
    }
    else {
      puStack_b8 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x000107c610f4();
      func_0x000107c45ae4();
      lVar4 = -(long)*param_1;
      uVar5 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if ((uVar5 < 0x21) || (uVar6 = (ulong)*(ushort *)((long)param_1 + lVar4 + 0x20), uVar6 == 0)) {
      puVar13 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar6);
      puVar1 = (uint *)((long)puVar1 + (ulong)*puVar1);
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x000107c3e170(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,*puVar1);
      func_0x000107c61180();
      puVar18 = puVar1 + 1;
      if (*puVar1 != 0) {
        do {
          lVar4 = (long)puVar18 + (ulong)*puVar18;
          FUN_100be1640(lVar4);
          func_0x000107c61180();
          func_0x000107c3d798(puVar3,param_2,lVar4);
          func_0x000107c61170(lVar4);
          puVar18 = puVar18 + 1;
        } while (puVar18 != puVar1 + 1 + *puVar1);
      }
      puVar13 = puVar3;
      func_0x000107c40794();
      func_0x000107c61170(puVar3);
    }
  }
  func_0x000107c46d88(puVar10,param_2,puStack_80,puVar7,puVar8,puVar9,(int)cVar16,(int)cVar17,uVar11
                      ,uVar12,puVar14,puVar15,puVar2,puStack_a8,puStack_b0,puStack_b8,puVar13);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(puStack_b8);
  func_0x000107c61170(puStack_b0);
  func_0x000107c61170(puStack_a8);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar15);
  func_0x000107c61170(puVar14);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puStack_80);
LAB_100be10e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 100be1640; end: 100be179b;  */

void FUN_100be1640(int *param_1,undefined8 param_2)

{
  uint *puVar1;
  ushort uVar2;
  ulong uVar3;
  long lVar4;
  ushort *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  char cVar9;
  
  if (param_1 == (int *)0x0) {
    puVar6 = (undefined *)0x0;
    goto LAB_100be171c;
  }
  puVar6 = PTR_PTR_1126de758;
  func_0x000107c610f4(PTR_PTR_1126de758);
  lVar4 = (long)*param_1;
  puVar5 = (ushort *)((long)param_1 - lVar4);
  uVar2 = *puVar5;
  if (uVar2 < 5) {
    cVar9 = '\0';
LAB_100be16ec:
    puVar7 = (undefined *)0x0;
LAB_100be16f0:
    puVar8 = (undefined *)0x0;
  }
  else {
    if ((ulong)puVar5[2] == 0) {
      cVar9 = '\0';
    }
    else {
      cVar9 = *(char *)((long)param_1 + (ulong)puVar5[2]);
    }
    if (uVar2 < 7) goto LAB_100be16ec;
    if ((ulong)puVar5[3] == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + (ulong)puVar5[3]);
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      func_0x000107c61180();
      lVar4 = (long)*param_1;
      uVar2 = *(ushort *)((long)param_1 - lVar4);
    }
    if ((uVar2 < 9) || (uVar3 = (ulong)*(ushort *)((long)param_1 + (8 - lVar4)), uVar3 == 0))
    goto LAB_100be16f0;
    puVar1 = (uint *)((long)param_1 + uVar3);
    puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        (long)puVar1 + (ulong)*puVar1 + 4);
    func_0x000107c61180();
  }
  func_0x000107c47c94(puVar6,param_2,(int)cVar9,puVar7,puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar7);
LAB_100be171c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 100be179c; end: 100be17a7; -[SCGrapheneImpl addHistogram:value:] */

void FUN_100be179c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf962f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_enqueueMetric_type_value__1125c3260,param_3,2,param_4);
  return;
}



/* Entry: 100be17a8; end: 100be185b; -[SCLensMetadataLensAssetStorageOption initWithOptionType:url:checksum:] */

undefined1 *
FUN_100be17a8(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_1127018b0;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_5;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 100be185c; end: 100be1ad7; -[SCLensMetadataLensAsset initWithIdentifier:url:signature:checksum:assetType:requestTiming:scale:preloadLimit:originalFilename:encodedBitmoji:avatarId:userId:encryptionKey:encryptionIv:storageOptions:] */

undefined8 *
FUN_100be185c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined1 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_14);
  func_0x000107c61174(param_15);
  func_0x000107c61174(param_16);
  func_0x000107c61174(param_17);
  puStack_68 = PTR_PTR_1127018a8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_5;
    func_0x000107c40794();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_6;
    func_0x000107c40794();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined1 *)(puVar1 + 1) = param_7;
    *(undefined1 *)((long)puVar1 + 9) = param_8;
    puVar1[6] = param_9;
    puVar1[7] = param_10;
    uVar2 = param_11;
    func_0x000107c40794();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_12;
    func_0x000107c40794();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_13;
    func_0x000107c40794();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_14;
    func_0x000107c40794();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_15;
    func_0x000107c40794();
    uVar3 = puVar1[0xc];
    puVar1[0xc] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_16;
    func_0x000107c40794();
    uVar3 = puVar1[0xd];
    puVar1[0xd] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_17;
    func_0x000107c40794();
    uVar3 = puVar1[0xe];
    puVar1[0xe] = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_17);
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 100be1ad8; end: 100be1b1b;  */

void FUN_100be1ad8(long param_1)

{
  undefined *puStack_18;
  
  puStack_18 = PTR___sBoWV_11034d678 + 0x40;
  func_0x000107c61524(param_1,0x100,1,&puStack_18,param_1 + 0x70);
  return;
}



/* Entry: 100be1b1c; end: 100be1caf;  */

void FUN_100be1b1c(int *param_1,undefined8 param_2)

{
  uint *puVar1;
  ushort uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  if (param_1 == (int *)0x0) {
    puVar6 = (undefined *)0x0;
    goto LAB_100be1c68;
  }
  puVar6 = PTR_PTR_1126de768;
  func_0x000107c610f4(PTR_PTR_1126de768);
  if ((*(ushort *)((long)param_1 - (long)*param_1) < 5) ||
     (uVar4 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[2], uVar4 == 0)) {
    lVar3 = 0;
  }
  else {
    puVar1 = (uint *)((long)param_1 + uVar4);
    lVar3 = (long)puVar1 + (ulong)*puVar1;
  }
  FUN_100be1cb0(lVar3);
  func_0x000107c61180();
  lVar5 = (long)*param_1;
  uVar2 = *(ushort *)((long)param_1 - lVar5);
  if (uVar2 < 7) {
    puVar7 = (undefined *)0x0;
LAB_100be1c34:
    puVar8 = (undefined *)0x0;
  }
  else {
    uVar4 = (ulong)((ushort *)((long)param_1 - lVar5))[3];
    if (uVar4 == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar4);
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      func_0x000107c61180();
      lVar5 = (long)*param_1;
      uVar2 = *(ushort *)((long)param_1 - lVar5);
    }
    if ((uVar2 < 9) || (uVar4 = (ulong)*(ushort *)((long)param_1 + (8 - lVar5)), uVar4 == 0))
    goto LAB_100be1c34;
    puVar1 = (uint *)((long)param_1 + uVar4);
    puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        (long)puVar1 + (ulong)*puVar1 + 4);
    func_0x000107c61180();
  }
  func_0x000107c47230(puVar6,param_2,lVar3,puVar7,puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(lVar3);
LAB_100be1c68:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 100be1cb0; end: 100be1f3b;  */

void FUN_100be1cb0(int *param_1,undefined8 param_2)

{
  uint *puVar1;
  bool bVar2;
  bool bVar3;
  ushort uVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  
  if (param_1 == (int *)0x0) {
    puVar8 = (undefined *)0x0;
    goto LAB_100be1dec;
  }
  puVar8 = PTR_PTR_1126de760;
  func_0x000107c610f4(PTR_PTR_1126de760);
  lVar5 = (long)*param_1;
  uVar4 = *(ushort *)((long)param_1 - lVar5);
  if (uVar4 < 5) {
    puVar7 = (undefined *)0x0;
LAB_100be1d9c:
    puVar9 = (undefined *)0x0;
LAB_100be1da0:
    puVar10 = (undefined *)0x0;
LAB_100be1da4:
    puVar11 = (undefined *)0x0;
LAB_100be1da8:
    bVar2 = false;
LAB_100be1dac:
    bVar3 = false;
  }
  else {
    uVar6 = (ulong)((ushort *)((long)param_1 - lVar5))[2];
    if (uVar6 == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar6);
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      func_0x000107c61180();
      lVar5 = (long)*param_1;
      uVar4 = *(ushort *)((long)param_1 - lVar5);
    }
    lVar5 = -lVar5;
    if (uVar4 < 7) goto LAB_100be1d9c;
    uVar6 = (ulong)*(ushort *)((long)param_1 + lVar5 + 6);
    if (uVar6 == 0) {
      puVar9 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar6);
      puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      func_0x000107c61180();
      lVar5 = -(long)*param_1;
      uVar4 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar4 < 9) goto LAB_100be1da0;
    uVar6 = (ulong)*(ushort *)((long)param_1 + lVar5 + 8);
    if (uVar6 == 0) {
      puVar10 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar6);
      puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      func_0x000107c61180();
      lVar5 = -(long)*param_1;
      uVar4 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar4 < 0xb) goto LAB_100be1da4;
    uVar6 = (ulong)*(ushort *)((long)param_1 + lVar5 + 10);
    if (uVar6 == 0) {
      puVar11 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar6);
      puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      func_0x000107c61180();
      lVar5 = -(long)*param_1;
      uVar4 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar4 < 0xd) goto LAB_100be1da8;
    uVar6 = (ulong)*(ushort *)((long)param_1 + lVar5 + 0xc);
    if (uVar6 == 0) {
      bVar2 = false;
    }
    else {
      bVar2 = *(char *)((long)param_1 + uVar6) != '\0';
    }
    if ((uVar4 < 0xf) || (uVar6 = (ulong)*(ushort *)((long)param_1 + lVar5 + 0xe), uVar6 == 0))
    goto LAB_100be1dac;
    bVar3 = *(char *)((long)param_1 + uVar6) != '\0';
  }
  func_0x000107c4925c(puVar8,param_2,puVar7,puVar9,puVar10,puVar11,bVar2,bVar3);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar7);
LAB_100be1dec:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 100be1f3c; end: 100be205f; -[SCLensMetadataLensCreatorData initWithUserId:userAvatarId:userSelfieId:snapProIdentifier:snapProIsDeactivated:isOfficialCreator:] */

undefined1 *
FUN_100be1f3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined1 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puStack_58 = PTR_PTR_1127018c0;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_5;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_6;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_7;
    *(undefined1 *)((long)puVar1 + 9) = param_8;
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100be2060; end: 100be2137; -[SCLensMetadataCommunityLensData initWithLensCreatorData:attributionName:scannedData:] */

undefined1 *
FUN_100be2060(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_1127018b8;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_5;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100be2138; end: 100be215b; -[SCLensMetadataLensCreatorData copyWithZone:] */

undefined8 FUN_100be2138(undefined8 param_1)

{
  func_0x000107c61174();
  return param_1;
}



/* Entry: 100be215c; end: 100be2497;  */

void FUN_100be215c(int *param_1,undefined8 param_2)

{
  uint *puVar1;
  long lVar2;
  long lVar3;
  ushort uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  
  if (param_1 == (int *)0x0) {
    puVar9 = (undefined *)0x0;
    goto LAB_100be2404;
  }
  puVar9 = PTR_PTR_1126de790;
  func_0x000107c610f4(PTR_PTR_1126de790);
  lVar5 = (long)*param_1;
  uVar4 = *(ushort *)((long)param_1 - lVar5);
  if (uVar4 < 5) {
    puVar8 = (undefined *)0x0;
LAB_100be2224:
    lVar5 = 0;
  }
  else {
    uVar7 = (ulong)((ushort *)((long)param_1 - lVar5))[2];
    if (uVar7 == 0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar7);
      puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      func_0x000107c61180();
      lVar5 = (long)*param_1;
      uVar4 = *(ushort *)((long)param_1 - lVar5);
    }
    if ((uVar4 < 7) || (uVar7 = (ulong)*(ushort *)((long)param_1 + (6 - lVar5)), uVar7 == 0))
    goto LAB_100be2224;
    puVar1 = (uint *)((long)param_1 + uVar7);
    lVar5 = (long)puVar1 + (ulong)*puVar1;
  }
  FUN_100be38c4(lVar5);
  func_0x000107c61180();
  if ((*(ushort *)((long)param_1 - (long)*param_1) < 9) ||
     (uVar7 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[4], uVar7 == 0)) {
    lVar2 = 0;
  }
  else {
    puVar1 = (uint *)((long)param_1 + uVar7);
    lVar2 = (long)puVar1 + (ulong)*puVar1;
  }
  FUN_100be3a20(lVar2);
  func_0x000107c61180();
  lVar6 = (long)*param_1;
  uVar4 = *(ushort *)((long)param_1 - lVar6);
  if (uVar4 < 0xb) {
    puVar11 = (undefined *)0x0;
LAB_100be2304:
    lVar6 = 0;
  }
  else {
    uVar7 = (ulong)((ushort *)((long)param_1 - lVar6))[5];
    if (uVar7 == 0) {
      puVar11 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar7);
      puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      func_0x000107c61180();
      lVar6 = (long)*param_1;
      uVar4 = *(ushort *)((long)param_1 - lVar6);
    }
    if ((uVar4 < 0xd) || (uVar7 = (ulong)*(ushort *)((long)param_1 + (0xc - lVar6)), uVar7 == 0))
    goto LAB_100be2304;
    puVar1 = (uint *)((long)param_1 + uVar7);
    lVar6 = (long)puVar1 + (ulong)*puVar1;
  }
  FUN_100be3ba0(lVar6);
  func_0x000107c61180();
  if ((*(ushort *)((long)param_1 - (long)*param_1) < 0xf) ||
     (uVar7 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[7], uVar7 == 0)) {
    lVar3 = 0;
  }
  else {
    puVar1 = (uint *)((long)param_1 + uVar7);
    lVar3 = (long)puVar1 + (ulong)*puVar1;
  }
  FUN_100be3dc8(lVar3);
  func_0x000107c61180();
  if ((*(ushort *)((long)param_1 - (long)*param_1) < 0x11) ||
     (uVar7 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[8], uVar7 == 0)) {
    puVar10 = (undefined *)0x0;
  }
  else {
    puVar1 = (uint *)((long)param_1 + uVar7);
    puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        (long)puVar1 + (ulong)*puVar1 + 4);
    func_0x000107c61180();
  }
  func_0x000107c45804(puVar9,param_2,puVar8,lVar5,lVar2,puVar11,lVar6,lVar3,puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(puVar8);
LAB_100be2404:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 100be2498; end: 100be258f;  */

void FUN_100be2498(int *param_1,undefined8 param_2)

{
  uint *puVar1;
  ushort uVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  if (param_1 == (int *)0x0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126de798;
    func_0x000107c610f4(PTR_PTR_1126de798);
    lVar3 = (long)*param_1;
    uVar2 = *(ushort *)((long)param_1 - lVar3);
    if (uVar2 < 5) {
      puVar6 = (undefined *)0x0;
      uVar7 = 0;
    }
    else {
      uVar4 = (ulong)((ushort *)((long)param_1 - lVar3))[2];
      if (uVar4 == 0) {
        puVar6 = (undefined *)0x0;
      }
      else {
        puVar1 = (uint *)((long)param_1 + uVar4);
        puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                            (long)puVar1 + (ulong)*puVar1 + 4);
        func_0x000107c61180();
        lVar3 = (long)*param_1;
        uVar2 = *(ushort *)((long)param_1 - lVar3);
      }
      uVar7 = 0;
      if ((6 < uVar2) && (uVar4 = (ulong)*(ushort *)((long)param_1 + (6 - lVar3)), uVar4 != 0)) {
        uVar7 = *(undefined8 *)((long)param_1 + uVar4);
      }
    }
    func_0x000107c46c1c(uVar7,puVar5,param_2,puVar6);
    func_0x000107c61170(puVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 100be2590; end: 100be2617; -[SCLensMetadataUnlockablesCarouselGroup initWithGroupName:carouselScore:] */

undefined1 *
FUN_100be2590(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1127018f0;
  uStack_40 = param_2;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
  }
  func_0x000107c61170(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 100be2618; end: 100be275b;  */

void FUN_100be2618(int *param_1,undefined8 param_2)

{
  uint *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint *puVar7;
  
  if (param_1 == (int *)0x0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = PTR_PTR_1126de710;
    func_0x000107c610f4(PTR_PTR_1126de710);
    if ((*(ushort *)((long)param_1 - (long)*param_1) < 5) ||
       (uVar4 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[2], uVar4 == 0)) {
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar4);
      puVar1 = (uint *)((long)puVar1 + (ulong)*puVar1);
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x000107c3e170(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,*puVar1);
      func_0x000107c61180();
      puVar7 = puVar1 + 1;
      if (*puVar1 != 0) {
        do {
          lVar3 = (long)puVar7 + (ulong)*puVar7;
          FUN_100be0034(lVar3);
          func_0x000107c61180();
          func_0x000107c3d798(puVar2,param_2,lVar3);
          func_0x000107c61170(lVar3);
          puVar7 = puVar7 + 1;
        } while (puVar7 != puVar1 + 1 + *puVar1);
      }
      puVar5 = puVar2;
      func_0x000107c40794(puVar2);
      func_0x000107c61170(puVar2);
    }
    func_0x000107c473e8(puVar6,param_2,puVar5);
    func_0x000107c61170(puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



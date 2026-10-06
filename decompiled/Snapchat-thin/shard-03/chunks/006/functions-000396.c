/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102a55c38; end: 102a55d1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102a55c38(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ee5508);
  *(undefined **)(unaff_x20 + _DAT_112ee5508) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ee5510);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112ee5510))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_11058d670;
  func_0x000107c613fc(&UNK_11058d670,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x102a55d24,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 102a55d20; end: 102a55d2b;  */

void FUN_102a55d20(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 102a55d2c; end: 102a55d8b; -[_TtC28LensAutoCopyScopeGraphBridge43SCLensAutoCopyScopedServicesSaberEntryPoint init] */

void FUN_102a55d2c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensAutoCopyScopeGraphBridge.SCLensAutoCopyScopedServicesSaberEntryPoint",
                      0x48,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102a55d58);
  (*pcVar1)();
}



/* Entry: 102a55d8c; end: 102a55dc3; -[_TtC28LensAutoCopyScopeGraphBridge43SCLensAutoCopyScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a55d8c(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ee5510));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ee5508));
  return;
}



/* Entry: 102a55dc4; end: 102a55dc7;  */

void FUN_102a55dc4(void)

{
  return;
}



/* Entry: 102a55dc8; end: 102a55de7;  */

void FUN_102a55dc8(void)

{
  FUN_102a55c38();
  return;
}



/* Entry: 102a55de8; end: 102a55e07;  */

void FUN_102a55de8(void)

{
  func_0x000107c61168(&PTR_PTR_1128829f8);
  return;
}



/* Entry: 102a55e08; end: 102a55ed7;  */

undefined8 FUN_102a55e08(void)

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
  
  func_0x000107c61428(0x112ee5540,&uStack_40,0x20,0);
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
    FUN_102a55ed8();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 102a55ed8; end: 102a55ef7;  */

void FUN_102a55ed8(void)

{
  func_0x000107c61168(&PTR_PTR_112882ac0);
  return;
}



/* Entry: 102a55ef8; end: 102a55f63;  */

void FUN_102a55ef8(void)

{
  func_0x0001000285a8(0x112ee5548,&UNK_10db10748);
  func_0x0001000823a8(0x102a55f38,0);
  return;
}



/* Entry: 102a55f64; end: 102a55f9f; -[_TtC28LensAutoCopyScopeGraphBridge36LensAutoCopyScopeGraphBridgeServices init] */

void FUN_102a55f64(undefined8 param_1)

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



/* Entry: 102a55fa0; end: 102a55fd3;  */

void FUN_102a55fa0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102a55fd4; end: 102a55fdb;  */

undefined8 FUN_102a55fd4(void)

{
  return 0x1b;
}



/* Entry: 102a55fdc; end: 102a56153;  */

void FUN_102a55fdc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11058d6b8;
  func_0x000107c613fc(&UNK_11058d6b8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_102a56154,puVar1);
  return;
}



/* Entry: 102a56154; end: 102a5615b;  */

void FUN_102a56154(undefined8 *param_1)

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
  func_0x000107c61428(0x112ee5540,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112ee5540,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_11058d750;
  func_0x000107c613fc(&UNK_11058d750,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x102a56208;
  func_0x00010058fa64(0x102a56208,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102a5615c; end: 102a561b7;  */

void FUN_102a5615c(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112ee5540,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112ee5540,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 102a561b8; end: 102a5620f;  */

undefined ** FUN_102a561b8(void)

{
  return &PTR_DAT_112ef6630;
}



/* Entry: 102a56210; end: 102a56257; -[SCLensAutoCopyScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a56210(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ee55a0;
  func_0x000107c61428(param_1 + _DAT_112ee55a0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102a56258; end: 102a562af; -[SCLensAutoCopyScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a56258(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ee55a0;
  func_0x000107c61428(param_1 + _DAT_112ee55a0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102a562b0; end: 102a562f7; -[SCLensAutoCopyScopeGraphBridgeSaberEntryPoint lensAutoCopyScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a562b0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ee55a8;
  func_0x000107c61428(param_1 + _DAT_112ee55a8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102a562f8; end: 102a5635b; -[SCLensAutoCopyScopeGraphBridgeSaberEntryPoint setLensAutoCopyScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a562f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ee55a8;
  func_0x000107c61428(param_1 + _DAT_112ee55a8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102a5635c; end: 102a5648f;  */

/* WARNING: Possible PIC construction at 0x000102a56414: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a56430: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a5644c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a56418) */
/* WARNING: Removing unreachable block (ram,0x000102a56434) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a5635c(void)

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
  func_0x000107c4ae08();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_102a55b90();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_102a55e08();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102a56490);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112ee54d0) = lVar5;
    *(long *)(lVar4 + _DAT_112ee54d8) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 102a56490; end: 102a564b7; -[SCLensAutoCopyScopeGraphBridgeSaberEntryPoint begin] */

void FUN_102a56490(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102a5635c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102a564b8; end: 102a564fb; -[SCLensAutoCopyScopeGraphBridgeSaberEntryPoint end] */

void FUN_102a564b8(undefined8 param_1)

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



/* Entry: 102a564fc; end: 102a56693;  */

void FUN_102a564fc(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd5) || (param_3 != -0x7ffffffef0f1a9c0)) {
      uVar2 = 0xd00000000000002b;
      func_0x000107c605b8(0xd00000000000002b,0x800000010f0e5640,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "LensAutoCopyScopeGraphBridge/SCLensAutoCopyScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x50,2,0x38,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102a56694);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c55bf0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102a56694; end: 102a5673f; -[SCLensAutoCopyScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_102a56694(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102a564fc(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102a56740; end: 102a567ab; -[SCLensAutoCopyScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a56740(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ee55a0,0);
  *(undefined8 *)(param_1 + _DAT_112ee55a8) = 0;
  *(undefined8 *)(param_1 + _DAT_112ee55b0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102a567ac; end: 102a567df;  */

void FUN_102a567ac(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102a567e0; end: 102a56827; -[SCLensAutoCopyScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102a5680c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a56810) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a567e0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ee55a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ee55a8));
  return;
}



/* Entry: 102a56828; end: 102a56847;  */

void FUN_102a56828(void)

{
  func_0x000107c61168(&PTR_PTR_112882b70);
  return;
}



/* Entry: 102a56848; end: 102a5688f; -[SCSCLensAutoCopyScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a56848(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ee55e0;
  func_0x000107c61428(param_1 + _DAT_112ee55e0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102a56890; end: 102a568e7; -[SCSCLensAutoCopyScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a56890(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ee55e0;
  func_0x000107c61428(param_1 + _DAT_112ee55e0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102a568e8; end: 102a569bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a568e8(undefined8 param_1,long param_2)

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
    FUN_102a55de8();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112ee5508) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102a569c0);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112ee5510);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112ee55e8);
    *(long **)(unaff_x20 + _DAT_112ee55e8) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 102a569c0; end: 102a569e7; -[SCSCLensAutoCopyScopedServicesSaberEntryPoint begin] */

void FUN_102a569c0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102a568e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102a569e8; end: 102a56b5f;  */

/* WARNING: Possible PIC construction at 0x000102a56a50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a56ae8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a56a54) */
/* WARNING: Removing unreachable block (ram,0x000102a56aec) */
/* WARNING: Removing unreachable block (ram,0x000102a56b04) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a569e8(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112ee55e8);
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



/* Entry: 102a56b60; end: 102a56b67;  */

void FUN_102a56b60(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 102a56b68; end: 102a56b9b; -[SCSCLensAutoCopyScopedServicesSaberEntryPoint end] */

void FUN_102a56b68(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102a569e8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102a56b9c; end: 102a56cbb;  */

void FUN_102a56b9c(long param_1,long param_2,long param_3)

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
                        "LensAutoCopyScopeGraphBridge/SCSCLensAutoCopyScopedServicesSaberEntryPoint.swift"
                        ,0x50,2,0x34,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102a56cbc);
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



/* Entry: 102a56cbc; end: 102a56d67; -[SCSCLensAutoCopyScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_102a56cbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102a56b9c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102a56d68; end: 102a56dc7; -[SCSCLensAutoCopyScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a56d68(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ee55e0,0);
  *(undefined8 *)(param_1 + _DAT_112ee55e8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102a56dc8; end: 102a56dfb;  */

void FUN_102a56dc8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102a56dfc; end: 102a56e33; -[SCSCLensAutoCopyScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a56dfc(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ee55e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ee55e8));
  return;
}



/* Entry: 102a56e34; end: 102a56e53;  */

void FUN_102a56e34(void)

{
  func_0x000107c61168(&PTR_PTR_112882c38);
  return;
}



/* Entry: 102a56e54; end: 102a56edb;  */

undefined1  [16] FUN_102a56e54(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  long lStack_38;
  
  func_0x0001000d224c(&lStack_38);
  if (lStack_38 != 0) {
    lVar1 = lStack_38;
    func_0x000107c4b3f8();
    func_0x000107c61180();
    func_0x000107c615e8(lStack_38);
    if (lVar1 != 0) {
      lVar2 = lVar1;
      func_0x000107c5faec(lVar1);
      func_0x000107c61170(lVar1);
      goto LAB_102a56ec8;
    }
  }
  lVar2 = 0;
  param_2 = 0;
LAB_102a56ec8:
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = lVar2;
  return auVar3;
}



/* Entry: 102a56edc; end: 102a56eff;  */

void FUN_102a56edc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102a56f00; end: 102a56f03;  */

undefined1  [16] FUN_102a56f00(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  long lStack_38;
  
  func_0x0001000d224c(&lStack_38);
  if (lStack_38 != 0) {
    lVar1 = lStack_38;
    func_0x000107c4b3f8();
    func_0x000107c61180();
    func_0x000107c615e8(lStack_38);
    if (lVar1 != 0) {
      lVar2 = lVar1;
      func_0x000107c5faec(lVar1);
      func_0x000107c61170(lVar1);
      goto LAB_102a56ec8;
    }
  }
  lVar2 = 0;
  param_2 = 0;
LAB_102a56ec8:
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = lVar2;
  return auVar3;
}



/* Entry: 102a56f04; end: 102a56f47;  */

void FUN_102a56f04(void)

{
  long lStack_28;
  
  func_0x0001000d224c(&lStack_28);
  if (lStack_28 != 0) {
    func_0x000107c5be74(lStack_28);
    func_0x000107c615e8(lStack_28);
  }
  return;
}



/* Entry: 102a56f48; end: 102a56f67;  */

void FUN_102a56f48(void)

{
  func_0x000107c61168(&PTR_PTR_112ee5658);
  return;
}



/* Entry: 102a56f68; end: 102a5722f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_102a56f68(long param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 unaff_x20;
  long lVar7;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  func_0x000107c613fc();
  lVar7 = _DAT_112ee60e8;
  func_0x000107c61428(param_3 + _DAT_112ee60e8,auStack_80,1,0);
  func_0x000107c61604(param_3 + lVar7,param_4);
  lVar7 = _DAT_112ee60f0;
  func_0x000107c61428(param_3 + _DAT_112ee60f0,auStack_98,1,0);
  func_0x000107c61604(param_3 + lVar7,param_6);
  lVar7 = _DAT_112ee60f8;
  func_0x000107c61428(param_3 + _DAT_112ee60f8,auStack_b0,1,0);
  func_0x000107c61604(param_3 + lVar7,param_5);
  lVar7 = _DAT_112ee6100;
  func_0x000107c61428(param_3 + _DAT_112ee6100,auStack_c8,1,0);
  func_0x000107c61604(param_3 + lVar7,param_7);
  lVar7 = param_1;
  func_0x000107c4f5c0();
  func_0x000107c61180();
  lVar1 = lVar7;
  func_0x000107c5aaac();
  func_0x000107c61180();
  func_0x000107c615e8(lVar7);
  if (lVar1 != 0) {
    lVar7 = lVar1;
    func_0x000107c42e38();
    func_0x000107c61180();
    lVar2 = lVar7;
    func_0x000107c49d68();
    func_0x000107c61170(lVar7);
    if ((int)lVar2 != 0) {
      lVar7 = lVar1;
      func_0x000107c42e38(lVar1);
      func_0x000107c61180();
      goto LAB_102a570e0;
    }
  }
  lVar7 = 0;
LAB_102a570e0:
  lVar2 = _DAT_112ee6108;
  func_0x000107c61428(param_3 + _DAT_112ee6108,auStack_e0,1,0);
  func_0x000107c61604(param_3 + lVar2,lVar7);
  func_0x000107c615e8(lVar7);
  uVar3 = param_2;
  func_0x000107c4aeb0(param_2);
  func_0x000107c61180();
  uVar4 = uVar3;
  func_0x000107c4aeb4();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  puVar5 = &UNK_11058d8a8;
  func_0x000107c613fc(&UNK_11058d8a8,0x18,7);
  func_0x000107c61614(puVar5 + 0x10,param_3);
  pcStack_f0 = FUN_102a5735c;
  puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_108 = 0x42000000;
  puStack_100 = &UNK_100b83e24;
  puStack_f8 = &UNK_11058d8c0;
  ppuVar6 = &puStack_110;
  puStack_e8 = puVar5;
  func_0x000107c60bc4(ppuVar6);
  func_0x000107c61574(puStack_e8);
  func_0x000107c4db94(uVar4);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(uVar4);
  return unaff_x20;
}



/* Entry: 102a57230; end: 102a5735b;  */

void FUN_102a57230(long param_1,long param_2)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined8 uStack_48;
  
  if (param_1 != 0) {
    ppuVar2 = &puStack_70;
    lVar1 = param_1;
    func_0x000107c615f0();
    func_0x000107c3d14c();
    func_0x000107c61180();
    pcStack_50 = FUN_102a57364;
    uStack_48 = 0;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_100b8462c;
    puStack_58 = &UNK_11058d900;
    func_0x000107c60bc4(&puStack_70);
    lVar3 = lVar1;
    func_0x000107c3feb8(lVar1);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c61170(lVar1);
    func_0x000107c61428(param_2 + 0x10,&puStack_70,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 == 0) {
      func_0x000107c615e8(param_1);
    }
    else {
      lVar1 = param_1;
      func_0x000107c4b2e0(param_1);
      func_0x000107c61180();
      func_0x000100b845a4(lVar3,lVar1);
      func_0x000107c615e8(param_1);
      func_0x000107c61170(param_2);
      func_0x000107c61170(lVar1);
    }
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 102a5735c; end: 102a57363;  */

void FUN_102a5735c(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined8 uStack_48;
  
  if (param_1 != 0) {
    ppuVar2 = &puStack_70;
    lVar1 = param_1;
    func_0x000107c615f0();
    func_0x000107c3d14c();
    func_0x000107c61180();
    pcStack_50 = FUN_102a57364;
    uStack_48 = 0;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_100b8462c;
    puStack_58 = &UNK_11058d900;
    func_0x000107c60bc4(&puStack_70);
    lVar3 = lVar1;
    func_0x000107c3feb8(lVar1);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c61170(lVar1);
    func_0x000107c61428(unaff_x20 + 0x10,&puStack_70,0,0);
    lVar1 = unaff_x20 + 0x10;
    func_0x000107c61618();
    if (lVar1 == 0) {
      func_0x000107c615e8(param_1);
    }
    else {
      lVar4 = param_1;
      func_0x000107c4b2e0(param_1);
      func_0x000107c61180();
      func_0x000100b845a4(lVar3,lVar4);
      func_0x000107c615e8(param_1);
      func_0x000107c61170(lVar1);
      func_0x000107c61170(lVar4);
    }
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 102a57364; end: 102a573ab;  */

void FUN_102a57364(long *param_1,long param_2)

{
  long lVar1;
  
  func_0x000107c4dfe8();
  func_0x000107c61180();
  if (param_2 == 0) {
    param_1[1] = 0;
    param_1[2] = 0;
    lVar1 = 0;
  }
  else {
    lVar1 = 0;
    func_0x000100c70ba8();
  }
  *param_1 = param_2;
  param_1[3] = lVar1;
  return;
}



/* Entry: 102a573ac; end: 102a573e3;  */

void FUN_102a573ac(long param_1,long param_2)

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



/* Entry: 102a573e4; end: 102a57403;  */

void FUN_102a573e4(void)

{
  func_0x000107c61168(&PTR_PTR_112ee5708);
  return;
}



/* Entry: 102a57404; end: 102a5740b;  */

void FUN_102a57404(long param_1,long param_2)

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



/* Entry: 102a5740c; end: 102a576d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_102a5740c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 unaff_x20;
  long lVar7;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  func_0x000107c613fc();
  lVar1 = _DAT_112ee60e8;
  func_0x000107c61428(param_4 + _DAT_112ee60e8,auStack_80,1,0);
  func_0x000107c61604(param_4 + lVar1,param_5);
  lVar1 = _DAT_112ee60f0;
  func_0x000107c61428(param_4 + _DAT_112ee60f0,auStack_98,1,0);
  func_0x000107c61604(param_4 + lVar1,param_7);
  lVar1 = _DAT_112ee60f8;
  func_0x000107c61428(param_4 + _DAT_112ee60f8,auStack_b0,1,0);
  func_0x000107c61604(param_4 + lVar1,param_6);
  lVar1 = _DAT_112ee6100;
  func_0x000107c61428(param_4 + _DAT_112ee6100,auStack_c8,1,0);
  func_0x000107c61604(param_4 + lVar1,param_8);
  lVar1 = *(long *)(param_1 + _DAT_1130353e0);
  func_0x000107c5aaac();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar7 = lVar1;
    func_0x000107c42e38();
    func_0x000107c61180();
    lVar2 = lVar7;
    func_0x000107c49d68();
    func_0x000107c61170(lVar7);
    if ((int)lVar2 != 0) {
      lVar7 = lVar1;
      func_0x000107c42e38(lVar1);
      func_0x000107c61180();
      goto LAB_102a5757c;
    }
  }
  lVar7 = 0;
LAB_102a5757c:
  lVar2 = _DAT_112ee6108;
  func_0x000107c61428(param_4 + _DAT_112ee6108,auStack_e0,1,0);
  func_0x000107c61604(param_4 + lVar2,lVar7);
  func_0x000107c615e8(lVar7);
  uVar3 = param_3;
  func_0x000107c4aeb0(param_3);
  func_0x000107c61180();
  uVar4 = uVar3;
  func_0x000107c4aeb4();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  puVar5 = &UNK_11058d940;
  func_0x000107c613fc(&UNK_11058d940,0x18,7);
  func_0x000107c61614(puVar5 + 0x10,param_4);
  pcStack_f0 = FUN_102a576d4;
  puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_108 = 0x42000000;
  puStack_100 = &UNK_100b83e24;
  puStack_f8 = &UNK_11058d958;
  ppuVar6 = &puStack_110;
  puStack_e8 = puVar5;
  func_0x000107c60bc4(ppuVar6);
  func_0x000107c61574(puStack_e8);
  func_0x000107c4db94(uVar4);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(uVar4);
  return unaff_x20;
}



/* Entry: 102a576d4; end: 102a57703;  */

void FUN_102a576d4(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  if (param_1 != 0) {
    ppuVar2 = &puStack_70;
    lVar1 = param_1;
    func_0x000107c615f0();
    func_0x000107c3d14c();
    func_0x000107c61180();
    puStack_50 = &UNK_100b84720;
    uStack_48 = 0;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_100b8462c;
    puStack_58 = &UNK_11058d998;
    func_0x000107c60bc4(&puStack_70);
    lVar3 = lVar1;
    func_0x000107c3feb8(lVar1);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c61170(lVar1);
    func_0x000107c61428(unaff_x20 + 0x10,&puStack_70,0,0);
    lVar1 = unaff_x20 + 0x10;
    func_0x000107c61618();
    if (lVar1 == 0) {
      func_0x000107c615e8(param_1);
    }
    else {
      lVar4 = param_1;
      func_0x000107c4b2e0(param_1);
      func_0x000107c61180();
      func_0x000100b845a4(lVar3,lVar4);
      func_0x000107c615e8(param_1);
      func_0x000107c61170(lVar1);
      func_0x000107c61170(lVar4);
    }
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 102a57704; end: 102a57737;  */

void FUN_102a57704(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 102a57738; end: 102a5775b;  */

void FUN_102a57738(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102a5775c; end: 102a577bb;  */

void FUN_102a5775c(void)

{
  undefined8 uVar1;
  long *unaff_x20;
  long lVar2;
  
  lVar2 = *unaff_x20;
  func_0x0001005c591c(0);
  func_0x000107c610f8();
  uVar1 = 0;
  func_0x000100753558(0,0,0,0,0);
  func_0x000107c42c20(*(undefined8 *)(lVar2 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102a577bc; end: 102a577c3;  */

undefined8 FUN_102a577bc(void)

{
  return 0;
}



/* Entry: 102a577c4; end: 102a58383;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102a577c4(undefined8 param_1,long param_2,undefined8 param_3,long param_4,long param_5,
                  long *param_6,long param_7,undefined *param_8,long param_9,undefined8 param_10,
                  long param_11,long param_12,long param_13,long param_14,ulong *param_15,
                  long param_16,long param_17,long param_18,long param_19)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong *puVar17;
  ulong *puVar18;
  ulong *puVar19;
  undefined *puVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  long unaff_x20;
  undefined8 uVar23;
  long lVar24;
  undefined8 uVar25;
  code *pcVar26;
  undefined8 uStack_200;
  long lStack_1a8;
  undefined *puStack_120;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [40];
  undefined1 auStack_90 [48];
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(long *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  lVar10 = _DAT_113081858;
  *(undefined8 *)(unaff_x20 + 0x10) = *(undefined8 *)(param_18 + _DAT_113081858);
  func_0x000107c61174();
  lVar1 = param_11;
  func_0x000107c444a4();
  func_0x000107c61180();
  lVar3 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar3 == 0) {
    puStack_120 = (undefined *)0x0;
  }
  else {
    puStack_120 = PTR_PTR_1126abe08;
    func_0x000107c610f8();
    func_0x000107c46bb4();
    func_0x000107c61170(lVar3);
  }
  lVar1 = *(long *)(param_12 + _DAT_1130385c0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    func_0x000107c61170(param_18);
    func_0x000107c61170(param_12);
    func_0x000107c61170(param_16);
    func_0x000107c61170(param_2);
LAB_102a57bd4:
    func_0x000107c61170(param_14);
    func_0x000107c61170(param_19);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_8);
    func_0x000107c61170(param_10);
    func_0x000107c61170(param_11);
    func_0x000107c61170(param_15);
    func_0x000107c61170(param_17);
  }
  else {
    lVar3 = param_4;
    func_0x000107c5af14();
    func_0x000107c61180();
    lVar2 = lVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar2 == 0) {
      func_0x000107c61170(param_18);
      func_0x000107c61170(param_12);
      func_0x000107c61170(param_16);
      func_0x000107c61170(param_2);
      func_0x000107c615e8(lVar1);
      goto LAB_102a57bd4;
    }
    lVar3 = *(long *)(param_16 + _DAT_112fbe920);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar3 != 0) {
      plVar4 = param_6;
      func_0x000107c40430();
      func_0x000107c61180();
      lVar5 = param_17;
      func_0x000107c4ce24();
      func_0x000107c61180();
      if (lVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar26 = (code *)SoftwareBreakpoint(1,0x102a58384);
        (*pcVar26)();
      }
      FUN_102a7def8(0);
      func_0x000107c613fc();
      puVar6 = puStack_120;
      func_0x000107c61174();
      puVar7 = param_8;
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c615f0(lVar3);
      func_0x000107c615f0(lVar2);
      func_0x000102a7d63c(plVar4,lVar2,puStack_120,param_8,lVar5,lVar3);
      uVar8 = *(undefined8 *)(param_2 + _DAT_112ee6110);
      *(long **)(unaff_x20 + 0x20) = plVar4;
      uVar23 = *(undefined8 *)(param_2 + _DAT_112ee6118);
      pcVar26 = *(code **)(*plVar4 + 0x78);
      func_0x000107c61174(uVar8);
      func_0x000107c61174(uVar23);
      func_0x000107c6157c(plVar4);
      (*pcVar26)(uVar8,uVar23);
      func_0x000107c61170(uVar8);
      func_0x000107c61170(uVar23);
      lVar5 = param_5;
      func_0x000107c42294();
      func_0x000107c61180();
      lVar9 = lVar5;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar5);
      if (lVar9 == 0) {
        func_0x000107c61170(param_18);
        func_0x000107c61170(param_12);
        func_0x000107c61170(param_16);
        func_0x000107c61170(param_2);
        func_0x000107c615e8(lVar1);
        func_0x000107c61574(plVar4);
        func_0x000107c61170(param_14);
        func_0x000107c61170(param_19);
        func_0x000107c61170(param_1);
        func_0x000107c61170(param_3);
        func_0x000107c61170(param_4);
        func_0x000107c61170(param_5);
        func_0x000107c61170(param_6);
        func_0x000107c61170(param_10);
        func_0x000107c61170(param_11);
        func_0x000107c61170(param_15);
        func_0x000107c61170(param_17);
        func_0x000107c615e8(lVar3);
        func_0x000107c615e8(lVar2);
        func_0x000107c61170(puVar6);
        func_0x000107c61170(puVar7);
      }
      else {
        FUN_102a852b0(0);
        func_0x000107c610f8();
        lVar5 = lVar9;
        func_0x000107c615f0();
        func_0x000102a8523c();
        func_0x0001000285a8(0x112ee5898,&UNK_10db10a50);
        uVar23 = *(undefined8 *)(param_18 + lVar10);
        func_0x000107c61174();
        uVar8 = uVar23;
        func_0x0001000bda74();
        func_0x000107c61170(uVar23);
        lVar10 = 0;
        FUN_102a56f48();
        func_0x000107c613fc();
        *(undefined8 *)(lVar10 + 0x10) = uVar8;
        *(long *)(unaff_x20 + 0x30) = lVar10;
        lVar24 = *(long *)(param_16 + _DAT_112fbe928);
        func_0x000107c6157c();
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar24 == 0) {
          lStack_1a8 = 0;
        }
        else {
          lStack_1a8 = lVar24;
          func_0x000107c402dc();
          func_0x000107c61180();
          func_0x000107c615e8(lVar24);
        }
        uVar11 = 0;
        FUN_102a985e4();
        func_0x000107c613fc();
        FUN_102a97218();
        lVar24 = lVar1;
        func_0x000107c403cc();
        func_0x000107c61180();
        FUN_102a58384(plVar4 + 2,auStack_90);
        FUN_102a58384(plVar4 + 7,auStack_b8);
        uVar12 = *(undefined8 *)(param_14 + _DAT_112ee8628);
        func_0x000107c5c734();
        func_0x000107c61180();
        uVar8 = uVar12;
        (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *param_15) + 0x58))();
        uVar23 = uVar8;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(uVar8);
        func_0x0001000d224c(&uStack_c8);
        if (param_7 == 0) {
          uStack_200 = 0;
        }
        else {
          uStack_200 = *(undefined8 *)(param_7 + _DAT_113083868);
          func_0x000107c5c734();
          func_0x000107c61180();
        }
        uVar8 = 0;
        if (param_9 != 0) {
          uVar8 = *(undefined8 *)(param_9 + _DAT_113074f68);
          func_0x000107c5c734();
          func_0x000107c61180();
        }
        uVar25 = *(undefined8 *)(param_19 + _DAT_11306bf30);
        FUN_102a6b76c(0);
        func_0x000107c613fc();
        lVar13 = lStack_1a8;
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c6157c(lVar10);
        func_0x000107c6157c(uVar11);
        func_0x000107c615f0(uVar25);
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61174();
        lVar14 = param_2;
        func_0x000102a65814(param_2,lVar24,auStack_90,auStack_b8,lVar5,&PTR_DAT_110590268,param_10,
                            param_8,puStack_120,lStack_1a8,uVar12,uVar23,uStack_c8,uStack_c0,lVar10,
                            &PTR_DAT_11058d878,uStack_200,uVar8,uVar11,uVar25);
        *(long *)(unaff_x20 + 0x18) = lVar14;
        func_0x000107c6157c();
        if (param_7 != 0) {
          func_0x000107c61174(*(undefined8 *)(param_7 + _DAT_113083868));
        }
        if (param_13 != 0) {
          func_0x000107c5d2b0();
          func_0x000107c61180();
        }
        func_0x000107c61174();
        func_0x000107c6157c(lVar14);
        func_0x000107c6157c();
        FUN_102a650a8();
        FUN_102a92334(0);
        func_0x000107c613fc();
        uVar8 = uVar11;
        func_0x000107c6157c();
        func_0x000102a91f10();
        uVar23 = *(undefined8 *)(unaff_x20 + 0x28);
        *(undefined8 *)(unaff_x20 + 0x28) = uVar8;
        func_0x000107c61574(uVar23);
        lVar24 = _DAT_112ee6108;
        puVar21 = auStack_90;
        func_0x000107c61428(param_2 + _DAT_112ee6108,puVar21,0,0);
        lVar24 = param_2 + lVar24;
        func_0x000107c61618();
        if (lVar24 == 0) {
          lVar16 = 0;
        }
        else {
          puVar21 = (undefined1 *)0x1;
          lVar15 = lVar24;
          func_0x000107c61494();
          if (lVar15 == 0) {
            lVar16 = 0;
          }
          else {
            lVar16 = 0;
            func_0x000102a58658();
            puVar21 = (undefined1 *)0x18;
            func_0x000107c613fc();
            *(long *)(lVar16 + 0x10) = lVar14;
            func_0x000107c6157c(lVar14);
            func_0x000107c57398(lVar15);
          }
          func_0x000107c615e8(lVar24);
        }
        uVar8 = *(undefined8 *)(unaff_x20 + 0x38);
        *(long *)(unaff_x20 + 0x38) = lVar16;
        func_0x000107c6157c(lVar16);
        func_0x000107c61574(uVar8);
        puVar20 = PTR__swift_isaMask_11034f488;
        puVar17 = *(ulong **)(lVar14 + 0x10);
        pcVar26 = *(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar17) + 0xb8);
        func_0x000107c61174();
        func_0x000107c61174();
        puVar18 = puVar17;
        (*pcVar26)();
        puVar19 = puVar18;
        puVar22 = puVar21;
        (**(code **)((*(ulong *)puVar20 & *puVar17) + 0xc0))();
        puVar20 = PTR_PTR_1126b1cb0;
        func_0x000107c610f8(PTR_PTR_1126b1cb0);
        func_0x000107c5fadc(puVar18,puVar21);
        func_0x000107c6142c(puVar21);
        func_0x000107c5fadc(puVar19,puVar22);
        func_0x000107c6142c(puVar22);
        func_0x000107c46c6c(puVar20);
        func_0x000107c61170(puVar17);
        func_0x000107c61170(puVar18);
        func_0x000107c61170(puVar19);
        uVar8 = param_1;
        func_0x000107c5d7e4(param_1);
        func_0x000107c61180();
        func_0x000107c61174(puVar20);
        func_0x000107c4fba8(uVar8);
        func_0x000107c61170(uVar8);
        func_0x000107c61170(param_18);
        func_0x000107c61170(param_12);
        func_0x000107c61170(param_16);
        func_0x000107c61170(param_2);
        func_0x000107c615e8(lVar1);
        func_0x000107c61574(plVar4);
        func_0x000107c61170(param_14);
        func_0x000107c61170(param_19);
        func_0x000107c61574(lVar14);
        func_0x000107c61170(param_1);
        func_0x000107c61170(param_3);
        func_0x000107c61170(param_4);
        func_0x000107c61170(param_5);
        func_0x000107c61170(param_6);
        func_0x000107c61170(puVar7);
        func_0x000107c61170(param_10);
        func_0x000107c61170(param_11);
        func_0x000107c61170(param_15);
        func_0x000107c61170(param_17);
        func_0x000107c61170(puVar20);
        func_0x000107c61170(puVar20);
        func_0x000107c61170(puVar17);
        func_0x000107c61574(uVar11);
        func_0x000107c61170(lVar13);
        func_0x000107c61170(lVar5);
        func_0x000107c61574(lVar10);
        func_0x000107c615e8(lVar9);
        func_0x000107c615e8(lVar3);
        func_0x000107c615e8(lVar2);
        func_0x000107c61574(lVar16);
        puVar7 = puVar6;
      }
      func_0x000107c61170(puVar7);
      func_0x000107c61170(param_13);
      func_0x000107c61170(param_9);
      goto LAB_102a58358;
    }
    func_0x000107c61170(param_18);
    func_0x000107c61170(param_12);
    func_0x000107c61170(param_16);
    func_0x000107c61170(param_2);
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(param_14);
    func_0x000107c61170(param_19);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_8);
    func_0x000107c61170(param_10);
    func_0x000107c61170(param_11);
    func_0x000107c61170(param_15);
    func_0x000107c61170(param_17);
    func_0x000107c615e8(lVar2);
  }
  func_0x000107c61170(puStack_120);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_9);
LAB_102a58358:
  func_0x000107c61170(param_7);
  return unaff_x20;
}



/* Entry: 102a58384; end: 102a5845f;  */

long FUN_102a58384(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 102a58460; end: 102a584ab;  */

void FUN_102a58460(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102a584ac; end: 102a584af;  */

void FUN_102a584ac(void)

{
  return;
}



/* Entry: 102a584b0; end: 102a584d3;  */

undefined8 FUN_102a584b0(void)

{
  func_0x000102a583c8();
  return 0;
}



/* Entry: 102a584d4; end: 102a58553;  */

void FUN_102a584d4(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c4b3f8();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
    if (lVar2 != 0) {
      func_0x000107c5faec(lVar2);
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 102a58554; end: 102a58573;  */

void FUN_102a58554(void)

{
  func_0x000107c61168(&PTR_PTR_112ee58e0);
  return;
}



/* Entry: 102a58574; end: 102a585e3; -[_TtC35ShoppingLensProductPickerEntryPoint42ShoppingLensProductPickerEntryPointAdapter willHandleTouch:] */

uint FUN_102a58574(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_3;
  if (param_3 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x000107c6157c();
    func_0x000107c61174(param_3);
    func_0x000107c6157c(uVar2);
    lVar1 = param_3;
    FUN_102a66c18(param_3);
    func_0x000107c61170(param_3);
    func_0x000107c61574(uVar2);
    func_0x000107c61574(param_1);
  }
  return (uint)lVar1 & 1;
}



/* Entry: 102a585e4; end: 102a58633; -[_TtC35ShoppingLensProductPickerEntryPoint42ShoppingLensProductPickerEntryPointAdapter isTwoDTryOnLens] */

uint FUN_102a585e4(long param_1)

{
  uint uVar1;
  undefined8 uVar3;
  undefined8 uVar2;
  
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c6157c();
  uVar2 = uVar3;
  func_0x000107c6157c(uVar3);
  uVar1 = (uint)uVar2;
  func_0x000102a66c74();
  func_0x000107c61574(param_1);
  func_0x000107c61574(uVar3);
  return uVar1 & 1;
}



/* Entry: 102a58634; end: 102a58677;  */

void FUN_102a58634(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102a58678; end: 102a58683; -[SCShoppingLensProductPickerEntryPoint conditionalBeginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a58678(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ee5a30;
  func_0x000107c61428(param_1 + _DAT_112ee5a30,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102a58684; end: 102a5868f; -[SCShoppingLensProductPickerEntryPoint setConditionalBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a58684(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ee5a30;
  func_0x000107c61428(param_1 + _DAT_112ee5a30,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102a58690; end: 102a5869b; -[SCShoppingLensProductPickerEntryPoint dependencyProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a58690(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ee5a38;
  func_0x000107c61428(param_1 + _DAT_112ee5a38,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102a5869c; end: 102a586a7; -[SCShoppingLensProductPickerEntryPoint setDependencyProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a5869c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ee5a38;
  func_0x000107c61428(param_1 + _DAT_112ee5a38,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102a586a8; end: 102a586b3; -[SCShoppingLensProductPickerEntryPoint cameraUIScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a586a8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ee5a40;
  func_0x000107c61428(param_1 + _DAT_112ee5a40,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102a586b4; end: 102a586bf; -[SCShoppingLensProductPickerEntryPoint setCameraUIScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a586b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ee5a40;
  func_0x000107c61428(param_1 + _DAT_112ee5a40,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102a586c0; end: 102a586cb; -[SCShoppingLensProductPickerEntryPoint commerceShowcaseServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a586c0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ee5a48;
  func_0x000107c61428(param_1 + _DAT_112ee5a48,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102a586cc; end: 102a586d7; -[SCShoppingLensProductPickerEntryPoint setCommerceShowcaseServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a586cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ee5a48;
  func_0x000107c61428(param_1 + _DAT_112ee5a48,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102a586d8; end: 102a586e3; -[SCShoppingLensProductPickerEntryPoint resourceDownloaderServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a586d8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ee5a50;
  func_0x000107c61428(param_1 + _DAT_112ee5a50,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102a586e4; end: 102a586ef; -[SCShoppingLensProductPickerEntryPoint setResourceDownloaderServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a586e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ee5a50;
  func_0x000107c61428(param_1 + _DAT_112ee5a50,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102a586f0; end: 102a586fb; -[SCShoppingLensProductPickerEntryPoint contentDeliveryServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a586f0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ee5a58;
  func_0x000107c61428(param_1 + _DAT_112ee5a58,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102a586fc; end: 102a58707; -[SCShoppingLensProductPickerEntryPoint setContentDeliveryServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a586fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ee5a58;
  func_0x000107c61428(param_1 + _DAT_112ee5a58,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102a58708; end: 102a58713; -[SCShoppingLensProductPickerEntryPoint userBlizzardServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a58708(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ee5a60;
  func_0x000107c61428(param_1 + _DAT_112ee5a60,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102a58714; end: 102a5871f; -[SCShoppingLensProductPickerEntryPoint setUserBlizzardServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a58714(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ee5a60;
  func_0x000107c61428(param_1 + _DAT_112ee5a60,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102a58720; end: 102a5872b; -[SCShoppingLensProductPickerEntryPoint circumstanceEngineServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a58720(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ee5a68;
  func_0x000107c61428(param_1 + _DAT_112ee5a68,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102a5872c; end: 102a58737; -[SCShoppingLensProductPickerEntryPoint setCircumstanceEngineServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a5872c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ee5a68;
  func_0x000107c61428(param_1 + _DAT_112ee5a68,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102a58738; end: 102a58743; -[SCShoppingLensProductPickerEntryPoint cameraHardwareServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a58738(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ee5a70;
  func_0x000107c61428(param_1 + _DAT_112ee5a70,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102a58744; end: 102a5874f; -[SCShoppingLensProductPickerEntryPoint setCameraHardwareServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a58744(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ee5a70;
  func_0x000107c61428(param_1 + _DAT_112ee5a70,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102a58750; end: 102a5875b; -[SCShoppingLensProductPickerEntryPoint composerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a58750(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ee5a78;
  func_0x000107c61428(param_1 + _DAT_112ee5a78,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102a5875c; end: 102a58767; -[SCShoppingLensProductPickerEntryPoint setComposerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a5875c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ee5a78;
  func_0x000107c61428(param_1 + _DAT_112ee5a78,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102a58768; end: 102a58773; -[SCShoppingLensProductPickerEntryPoint grapheneServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a58768(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ee5a80;
  func_0x000107c61428(param_1 + _DAT_112ee5a80,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102a58774; end: 102a5877f; -[SCShoppingLensProductPickerEntryPoint setGrapheneServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a58774(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ee5a80;
  func_0x000107c61428(param_1 + _DAT_112ee5a80,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102a58780; end: 102a5878b; -[SCShoppingLensProductPickerEntryPoint cameraUIServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a58780(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ee5a88;
  func_0x000107c61428(param_1 + _DAT_112ee5a88,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102a5878c; end: 102a58797; -[SCShoppingLensProductPickerEntryPoint setCameraUIServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a5878c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ee5a88;
  func_0x000107c61428(param_1 + _DAT_112ee5a88,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102a58798; end: 102a587a3; -[SCShoppingLensProductPickerEntryPoint unlockableTrackingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a58798(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ee5a90;
  func_0x000107c61428(param_1 + _DAT_112ee5a90,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102a587a4; end: 102a587af; -[SCShoppingLensProductPickerEntryPoint setUnlockableTrackingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a587a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ee5a90;
  func_0x000107c61428(param_1 + _DAT_112ee5a90,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102a587b0; end: 102a587bb; -[SCShoppingLensProductPickerEntryPoint shoppingLensStateServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a587b0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ee5a98;
  func_0x000107c61428(param_1 + _DAT_112ee5a98,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102a587bc; end: 102a587c7; -[SCShoppingLensProductPickerEntryPoint setShoppingLensStateServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a587bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ee5a98;
  func_0x000107c61428(param_1 + _DAT_112ee5a98,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102a587c8; end: 102a587d3; -[SCShoppingLensProductPickerEntryPoint moderationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a587c8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ee5aa0;
  func_0x000107c61428(param_1 + _DAT_112ee5aa0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



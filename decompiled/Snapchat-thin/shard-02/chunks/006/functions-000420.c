/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101f8af8c; end: 101f8afeb; -[_TtC30SpectaclesHomeScopeGraphBridge45SCSpectaclesHomeScopedServicesSaberEntryPoint init] */

void FUN_101f8af8c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpectaclesHomeScopeGraphBridge.SCSpectaclesHomeScopedServicesSaberEntryPoint"
                      ,0x4c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f8afb8);
  (*pcVar1)();
}



/* Entry: 101f8afec; end: 101f8b023; -[_TtC30SpectaclesHomeScopeGraphBridge45SCSpectaclesHomeScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f8afec(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e47970));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e47968));
  return;
}



/* Entry: 101f8b024; end: 101f8b027;  */

void FUN_101f8b024(void)

{
  return;
}



/* Entry: 101f8b028; end: 101f8b047;  */

void FUN_101f8b028(void)

{
  FUN_101f8ae98();
  return;
}



/* Entry: 101f8b048; end: 101f8b067;  */

void FUN_101f8b048(void)

{
  func_0x000107c61168(&PTR_PTR_11280f358);
  return;
}



/* Entry: 101f8b068; end: 101f8b137;  */

undefined8 FUN_101f8b068(void)

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
  
  func_0x000107c61428(0x112e479a0,&uStack_40,0x20,0);
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
    FUN_101f8b138();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 101f8b138; end: 101f8b157;  */

void FUN_101f8b138(void)

{
  func_0x000107c61168(&PTR_PTR_11280f420);
  return;
}



/* Entry: 101f8b158; end: 101f8b1c3;  */

void FUN_101f8b158(void)

{
  func_0x0001000285a8(0x112e479a8,&UNK_10da3cf18);
  func_0x0001000823a8(0x101f8b198,0);
  return;
}



/* Entry: 101f8b1c4; end: 101f8b1ff; -[_TtC30SpectaclesHomeScopeGraphBridge38SpectaclesHomeScopeGraphBridgeServices init] */

void FUN_101f8b1c4(undefined8 param_1)

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



/* Entry: 101f8b200; end: 101f8b233;  */

void FUN_101f8b200(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101f8b234; end: 101f8b23b;  */

undefined8 FUN_101f8b234(void)

{
  return 0x1b;
}



/* Entry: 101f8b23c; end: 101f8b3b3;  */

void FUN_101f8b23c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104acdd8;
  func_0x000107c613fc(&UNK_1104acdd8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_101f8b3b4,puVar1);
  return;
}



/* Entry: 101f8b3b4; end: 101f8b3bb;  */

void FUN_101f8b3b4(undefined8 *param_1)

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
  func_0x000107c61428(0x112e479a0,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e479a0,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1104ace70;
  func_0x000107c613fc(&UNK_1104ace70,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x101f8b468;
  func_0x00010058fa64(0x101f8b468,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101f8b3bc; end: 101f8b417;  */

void FUN_101f8b3bc(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e479a0,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112e479a0,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 101f8b418; end: 101f8b46f;  */

undefined ** FUN_101f8b418(void)

{
  return &PTR_DAT_112f31678;
}



/* Entry: 101f8b470; end: 101f8b4b7; -[SCSpectaclesHomeScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f8b470(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e47a00;
  func_0x000107c61428(param_1 + _DAT_112e47a00,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101f8b4b8; end: 101f8b50f; -[SCSpectaclesHomeScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f8b4b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e47a00;
  func_0x000107c61428(param_1 + _DAT_112e47a00,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101f8b510; end: 101f8b557; -[SCSpectaclesHomeScopeGraphBridgeSaberEntryPoint spectaclesHomeScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f8b510(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e47a08;
  func_0x000107c61428(param_1 + _DAT_112e47a08,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101f8b558; end: 101f8b5bb; -[SCSpectaclesHomeScopeGraphBridgeSaberEntryPoint setSpectaclesHomeScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f8b558(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e47a08;
  func_0x000107c61428(param_1 + _DAT_112e47a08,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101f8b5bc; end: 101f8b6ef;  */

/* WARNING: Possible PIC construction at 0x000101f8b674: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f8b690: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f8b6ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f8b678) */
/* WARNING: Removing unreachable block (ram,0x000101f8b694) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f8b5bc(void)

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
  func_0x000107c5b724();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_101f8adf0();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_101f8b068();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101f8b6f0);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112e47930) = lVar5;
    *(long *)(lVar4 + _DAT_112e47938) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 101f8b6f0; end: 101f8b717; -[SCSpectaclesHomeScopeGraphBridgeSaberEntryPoint begin] */

void FUN_101f8b6f0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101f8b5bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101f8b718; end: 101f8b75b; -[SCSpectaclesHomeScopeGraphBridgeSaberEntryPoint end] */

void FUN_101f8b718(undefined8 param_1)

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



/* Entry: 101f8b75c; end: 101f8b8f3;  */

void FUN_101f8b75c(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd3) || (param_3 != -0x7ffffffef0fdb750)) {
      uVar2 = 0xd00000000000002d;
      func_0x000107c605b8(0xd00000000000002d,0x800000010f0248b0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "SpectaclesHomeScopeGraphBridge/SCSpectaclesHomeScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x54,2,0x32,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101f8b8f4);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c595f4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101f8b8f4; end: 101f8b99f; -[SCSpectaclesHomeScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_101f8b8f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101f8b75c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101f8b9a0; end: 101f8ba0b; -[SCSpectaclesHomeScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f8b9a0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e47a00,0);
  *(undefined8 *)(param_1 + _DAT_112e47a08) = 0;
  *(undefined8 *)(param_1 + _DAT_112e47a10) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101f8ba0c; end: 101f8ba3f;  */

void FUN_101f8ba0c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101f8ba40; end: 101f8ba87; -[SCSpectaclesHomeScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101f8ba6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f8ba70) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f8ba40(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e47a00);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e47a08));
  return;
}



/* Entry: 101f8ba88; end: 101f8baa7;  */

void FUN_101f8ba88(void)

{
  func_0x000107c61168(&PTR_PTR_11280f4d0);
  return;
}



/* Entry: 101f8baa8; end: 101f8baef; -[SCSCSpectaclesHomeScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f8baa8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e47a40;
  func_0x000107c61428(param_1 + _DAT_112e47a40,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101f8baf0; end: 101f8bb47; -[SCSCSpectaclesHomeScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f8baf0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e47a40;
  func_0x000107c61428(param_1 + _DAT_112e47a40,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101f8bb48; end: 101f8bc1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f8bb48(undefined8 param_1,long param_2)

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
    FUN_101f8b048();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112e47968) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101f8bc20);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112e47970);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e47a48);
    *(long **)(unaff_x20 + _DAT_112e47a48) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 101f8bc20; end: 101f8bc47; -[SCSCSpectaclesHomeScopedServicesSaberEntryPoint begin] */

void FUN_101f8bc20(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101f8bb48();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101f8bc48; end: 101f8bdbf;  */

/* WARNING: Possible PIC construction at 0x000101f8bcb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f8bd48: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f8bcb4) */
/* WARNING: Removing unreachable block (ram,0x000101f8bd4c) */
/* WARNING: Removing unreachable block (ram,0x000101f8bd64) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f8bc48(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112e47a48);
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



/* Entry: 101f8bdc0; end: 101f8bdc7;  */

void FUN_101f8bdc0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 101f8bdc8; end: 101f8bdfb; -[SCSCSpectaclesHomeScopedServicesSaberEntryPoint end] */

void FUN_101f8bdc8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101f8bc48();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101f8bdfc; end: 101f8bf1b;  */

void FUN_101f8bdfc(long param_1,long param_2,long param_3)

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
                        "SpectaclesHomeScopeGraphBridge/SCSCSpectaclesHomeScopedServicesSaberEntryPoint.swift"
                        ,0x54,2,0x2e,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101f8bf1c);
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



/* Entry: 101f8bf1c; end: 101f8bfc7; -[SCSCSpectaclesHomeScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_101f8bf1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101f8bdfc(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101f8bfc8; end: 101f8c027; -[SCSCSpectaclesHomeScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f8bfc8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e47a40,0);
  *(undefined8 *)(param_1 + _DAT_112e47a48) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101f8c028; end: 101f8c05b;  */

void FUN_101f8c028(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101f8c05c; end: 101f8c093; -[SCSCSpectaclesHomeScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f8c05c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e47a40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e47a48));
  return;
}



/* Entry: 101f8c094; end: 101f8c0b3;  */

void FUN_101f8c094(void)

{
  func_0x000107c61168(&PTR_PTR_11280f598);
  return;
}



/* Entry: 101f8c0b4; end: 101f8c11f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f8c0b4(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_101f8c4a8();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e47a80) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 101f8c120; end: 101f8c18b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f8c120(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e47a80) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101f8c18c; end: 101f8c1eb; -[_TtC43SpectaclesKnobsScopedFactoryServiceProvider31SCSpectaclesKnobsScopedServices init] */

void FUN_101f8c18c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpectaclesKnobsScopedFactoryServiceProvider.SCSpectaclesKnobsScopedServices",
                      0x4b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f8c1b8);
  (*pcVar1)();
}



/* Entry: 101f8c1ec; end: 101f8c1fb; -[_TtC43SpectaclesKnobsScopedFactoryServiceProvider31SCSpectaclesKnobsScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f8c1ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e47a80));
  return;
}



/* Entry: 101f8c1fc; end: 101f8c267;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f8c1fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1104ad088;
  func_0x000107c613fc(&UNK_1104ad088,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_101f8c584,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101f8c268; end: 101f8c303;  */

void FUN_101f8c268(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1104acf98;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1104acf98;
  return;
}



/* Entry: 101f8c304; end: 101f8c33b;  */

void FUN_101f8c304(long *param_1)

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



/* Entry: 101f8c33c; end: 101f8c343;  */

undefined8 FUN_101f8c33c(void)

{
  return 0x1b;
}



/* Entry: 101f8c344; end: 101f8c477;  */

void FUN_101f8c344(undefined8 *param_1)

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
  puVar1 = &UNK_1104ad0b0;
  func_0x000107c613fc(&UNK_1104ad0b0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_101f8c55c;
  func_0x00010058fa64(FUN_101f8c55c,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101f8c478; end: 101f8c4a7;  */

undefined ** FUN_101f8c478(void)

{
  return &PTR_DAT_112fe93e8;
}



/* Entry: 101f8c4a8; end: 101f8c4c7;  */

void FUN_101f8c4a8(void)

{
  func_0x000107c61168(&PTR_PTR_11280f658);
  return;
}



/* Entry: 101f8c4c8; end: 101f8c517;  */

undefined1  [16] FUN_101f8c4c8(void)

{
  return ZEXT816(0x1104acfe8);
}



/* Entry: 101f8c518; end: 101f8c55b;  */

void FUN_101f8c518(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e47ae8 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126a9bc8;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112e47ae8 = puVar1;
  return;
}



/* Entry: 101f8c55c; end: 101f8c583;  */

void FUN_101f8c55c(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 101f8c584; end: 101f8c587;  */

void FUN_101f8c584(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101f8c588; end: 101f8c603;  */

void FUN_101f8c588(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  
  func_0x0001000285a8(0x112e47af8,&UNK_10da3d2f0);
  func_0x000107c613fc();
  pcVar1 = FUN_101f8c918;
  func_0x0001000841fc(FUN_101f8c918,param_2);
  func_0x000100084214(&UNK_10da3d2c0,0x2d,2);
  *param_1 = pcVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 101f8c604; end: 101f8c61b;  */

void FUN_101f8c604(undefined8 *param_1)

{
  code *pcVar1;
  
  func_0x0001000285a8(0x112e47af8,&UNK_10da3d2f0);
  func_0x000107c613fc();
  pcVar1 = FUN_101f8c918;
  func_0x0001000841fc();
  func_0x000100084214(&UNK_10da3d2c0,0x2d,2);
  *param_1 = pcVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 101f8c61c; end: 101f8c917;  */

void FUN_101f8c61c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  code *pcVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uStack_68;
  
  uVar9 = *param_2;
  func_0x0001000285a8(0x112e47b00,&UNK_10da3d2f8);
  puVar1 = &uStack_68;
  uStack_68 = uVar9;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112e47b08,&UNK_10da3d300);
  puVar2 = &UNK_1104ad110;
  func_0x000107c613fc(&UNK_1104ad110,0x20,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  uVar9 = 0x101f8c920;
  func_0x0001000823a8(0x101f8c920,puVar2);
  func_0x000100082720("SCSpectaclesKnobsEntryPointWrapperServiceProvider",0x31,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar3 = FUN_101f8c304;
  func_0x0001000823a8(FUN_101f8c304,0);
  pcVar4 = "SCSpectaclesKnobsScopedServicesCleanupRelayServiceProvider";
  func_0x000100082720("SCSpectaclesKnobsScopedServicesCleanupRelayServiceProvider",0x3a,2);
  FUN_101f8d668();
  func_0x000100082720("SpectaclesKnobsScopeGraphBridgeServicesServiceProvider",0x36,2);
  func_0x0001000285a8(0x112e47b10,&UNK_10da3d310);
  puVar2 = &UNK_1104ad138;
  func_0x000107c613fc(&UNK_1104ad138,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar9;
  *(undefined8 **)(puVar2 + 0x18) = puVar1;
  *(code **)(puVar2 + 0x20) = pcVar3;
  *(char **)(puVar2 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(pcVar3);
  func_0x000107c6157c(pcVar4);
  uVar5 = 0x101f8c928;
  func_0x0001000823a8(0x101f8c928,puVar2);
  func_0x000100082720("SCSpectaclesKnobsScopeInitializationPluginRegistryServiceProvider",0x41,2);
  func_0x0001000285a8(0x112e47a88,&UNK_10da3d0b0);
  func_0x000107c6157c(uVar5);
  uVar6 = 0x101f8c934;
  func_0x0001000823a8(0x101f8c934,uVar5);
  func_0x000100082720("SCSpectaclesKnobsScopeInitializationServiceProvider",0x33,2);
  func_0x0001000285a8(0x112e47a78,&UNK_10da3d0a0);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x101f8c93c;
  func_0x0001000823a8(0x101f8c93c,uVar6);
  func_0x000100082720("SCSpectaclesKnobsScopedServicesServiceProvider",0x2e,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar2 = &UNK_1104ad160;
  func_0x000107c613fc(&UNK_1104ad160,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar7;
  *(code **)(puVar2 + 0x18) = pcVar3;
  func_0x000107c6157c(pcVar3);
  pcVar8 = FUN_101f8c970;
  func_0x0001000823a8(FUN_101f8c970,puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar6);
  func_0x000100082720("SCSpectaclesKnobsScopeEntryPointProvider",0x28,2);
  *param_1 = pcVar8;
  return;
}



/* Entry: 101f8c918; end: 101f8c943;  */

void FUN_101f8c918(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  code *pcVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 unaff_x20;
  undefined8 uVar9;
  undefined8 uStack_68;
  
  uVar9 = *param_2;
  func_0x0001000285a8(0x112e47b00,&UNK_10da3d2f8);
  puVar1 = &uStack_68;
  uStack_68 = uVar9;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112e47b08,&UNK_10da3d300);
  puVar2 = &UNK_1104ad110;
  func_0x000107c613fc(&UNK_1104ad110,0x20,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = unaff_x20;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c();
  uVar9 = 0x101f8c920;
  func_0x0001000823a8(0x101f8c920,puVar2);
  func_0x000100082720("SCSpectaclesKnobsEntryPointWrapperServiceProvider",0x31,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar3 = FUN_101f8c304;
  func_0x0001000823a8(FUN_101f8c304,0);
  pcVar4 = "SCSpectaclesKnobsScopedServicesCleanupRelayServiceProvider";
  func_0x000100082720("SCSpectaclesKnobsScopedServicesCleanupRelayServiceProvider",0x3a,2);
  FUN_101f8d668();
  func_0x000100082720("SpectaclesKnobsScopeGraphBridgeServicesServiceProvider",0x36,2);
  func_0x0001000285a8(0x112e47b10,&UNK_10da3d310);
  puVar2 = &UNK_1104ad138;
  func_0x000107c613fc(&UNK_1104ad138,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar9;
  *(undefined8 **)(puVar2 + 0x18) = puVar1;
  *(code **)(puVar2 + 0x20) = pcVar3;
  *(char **)(puVar2 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(pcVar3);
  func_0x000107c6157c(pcVar4);
  uVar5 = 0x101f8c928;
  func_0x0001000823a8(0x101f8c928,puVar2);
  func_0x000100082720("SCSpectaclesKnobsScopeInitializationPluginRegistryServiceProvider",0x41,2);
  func_0x0001000285a8(0x112e47a88,&UNK_10da3d0b0);
  func_0x000107c6157c(uVar5);
  uVar6 = 0x101f8c934;
  func_0x0001000823a8(0x101f8c934,uVar5);
  func_0x000100082720("SCSpectaclesKnobsScopeInitializationServiceProvider",0x33,2);
  func_0x0001000285a8(0x112e47a78,&UNK_10da3d0a0);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x101f8c93c;
  func_0x0001000823a8(0x101f8c93c,uVar6);
  func_0x000100082720("SCSpectaclesKnobsScopedServicesServiceProvider",0x2e,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar2 = &UNK_1104ad160;
  func_0x000107c613fc(&UNK_1104ad160,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar7;
  *(code **)(puVar2 + 0x18) = pcVar3;
  func_0x000107c6157c(pcVar3);
  pcVar8 = FUN_101f8c970;
  func_0x0001000823a8(FUN_101f8c970,puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar6);
  func_0x000100082720("SCSpectaclesKnobsScopeEntryPointProvider",0x28,2);
  *param_1 = pcVar8;
  return;
}



/* Entry: 101f8c944; end: 101f8c96f;  */

void FUN_101f8c944(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101f8c970; end: 101f8c977;  */

void FUN_101f8c970(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1104acf98;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1104acf98;
  return;
}



/* Entry: 101f8c978; end: 101f8caf3;  */

void FUN_101f8c978(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000100083b20(&uStack_58);
  func_0x000100083b20(&uStack_60);
  FUN_101f8cd74();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_60;
  puVar1 = PTR_PTR_1126a9bd0;
  func_0x000107c610f8();
  uVar2 = uStack_60;
  func_0x000107c61174(uStack_60);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar3 = uStack_58;
  func_0x000107c61174(uStack_58);
  uVar4 = 0x6f635373626f6e6b;
  func_0x000107c5fadc(0x6f635373626f6e6b,0xea00000000006570);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar4);
  uVar5 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f006f60);
  func_0x000107c5a49c(uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c3e740(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  *param_1 = param_2;
  return;
}



/* Entry: 101f8caf4; end: 101f8cc3b;  */

long FUN_101f8caf4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  puVar1 = PTR_PTR_1126a9bd0;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0x6f635373626f6e6b;
  func_0x000107c5fadc(0x6f635373626f6e6b,0xea00000000006570);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_2);
  func_0x000107c61174(puVar1);
  uVar2 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f006f60);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  func_0x000107c3e740(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  return unaff_x20;
}



/* Entry: 101f8cc3c; end: 101f8cc67;  */

void FUN_101f8cc3c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101f8cc68; end: 101f8cc6f;  */

undefined8 FUN_101f8cc68(void)

{
  return 0x1b;
}



/* Entry: 101f8cc70; end: 101f8ccf3;  */

void FUN_101f8cc70(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x101f8cdb4,param_2,FUN_101f8cdb8,param_2,FUN_101f8cde0,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 101f8ccf4; end: 101f8cd43;  */

undefined8 FUN_101f8ccf4(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101f8cd44; end: 101f8cd73;  */

void FUN_101f8cd44(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_1104ad178;
  return;
}



/* Entry: 101f8cd74; end: 101f8cd93;  */

void FUN_101f8cd74(void)

{
  func_0x000107c61168(&PTR_PTR_112e47b80);
  return;
}



/* Entry: 101f8cd94; end: 101f8cdb7;  */

undefined1  [16] FUN_101f8cd94(void)

{
  return ZEXT816(0x1104ad1b8);
}



/* Entry: 101f8cdb8; end: 101f8cddf;  */

void FUN_101f8cdb8(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101f8cde0; end: 101f8cde7;  */

undefined8 FUN_101f8cde0(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101f8cde8; end: 101f8ce23;  */

void FUN_101f8cde8(undefined8 *param_1,undefined8 param_2)

{
  FUN_101f8ce24();
  func_0x0001000a7f38("SCSpectaclesKnobsScopeInitializationPluginRegistryServiceProvider",0x41,2);
  *param_1 = param_2;
  return;
}



/* Entry: 101f8ce24; end: 101f8d00f;  */

void FUN_101f8ce24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_1106cec98;
  ppuVar4 = &PTR_DAT_112fe93e8;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_1);
  uVar2 = 0x112e47be8;
  func_0x0001000285a8(0x112e47be8,&UNK_10da3d448);
  func_0x0001000a6ee8(&UNK_1104ad1b8,
                      "SCSpectaclesKnobsEntryPointWrapperScopeInitializationPluginKey",0x3e,2,
                      FUN_101f8d084,param_1,uVar2,&UNK_1104ad1b8,&PTR_DAT_112e47b18);
  func_0x000107c61574(param_1);
  puVar3 = &UNK_1104ad208;
  func_0x000107c613fc(&UNK_1104ad208,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1104ad028,"SCSpectaclesKnobsScopedServicesScopeInitializationPluginKey",
                      0x3b,2,FUN_101f8d134,puVar3,uVar2,&UNK_1104ad028,&PTR_DAT_112e47a90);
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_1104ad230;
  func_0x000107c613fc(&UNK_1104ad230,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1104ad3e8,"SpectaclesKnobsScopeGraphBridgeScopeInitializationPluginKey",
                      0x3b,2,FUN_101f8d13c,puVar3,uVar2,&UNK_1104ad3e8,&PTR_DAT_112e47c78);
  func_0x000107c61574(puVar3);
  uVar2 = 0x112e47bf0;
  func_0x0001000285a8(0x112e47bf0,&UNK_10da3d450);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  return;
}



/* Entry: 101f8d010; end: 101f8d083;  */

void FUN_101f8d010(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x101f8d1b0;
  func_0x0001000823a8(0x101f8d1b0,param_3);
  func_0x000100082720("SCSpectaclesKnobsEntryPointWrapperScopeInitializationPluginProvider",0x43,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101f8d084; end: 101f8d08b;  */

void FUN_101f8d084(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x101f8d1b0;
  func_0x0001000823a8();
  func_0x000100082720("SCSpectaclesKnobsEntryPointWrapperScopeInitializationPluginProvider",0x43,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101f8d08c; end: 101f8d133;  */

void FUN_101f8d08c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104ad258;
  func_0x000107c613fc(&UNK_1104ad258,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_101f8d1a8;
  func_0x0001000823a8(FUN_101f8d1a8,puVar1);
  func_0x000100082720("SCSpectaclesKnobsScopedServicesScopeInitializationPluginProvider",0x40,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 101f8d134; end: 101f8d13b;  */

void FUN_101f8d134(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1104ad258;
  func_0x000107c613fc(&UNK_1104ad258,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_101f8d1a8;
  func_0x0001000823a8(FUN_101f8d1a8,puVar3);
  func_0x000100082720("SCSpectaclesKnobsScopedServicesScopeInitializationPluginProvider",0x40,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 101f8d13c; end: 101f8d17b;  */

void FUN_101f8d13c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_101f8d74c(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("SpectaclesKnobsScopeGraphBridgeScopeInitializationPluginProvider",0x40,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101f8d17c; end: 101f8d1a7;  */

void FUN_101f8d17c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101f8d1a8; end: 101f8d1b7;  */

void FUN_101f8d1a8(undefined8 *param_1)

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
  puVar1 = &UNK_1104ad0b0;
  func_0x000107c613fc(&UNK_1104ad0b0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_101f8c55c;
  func_0x00010058fa64(FUN_101f8c55c,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101f8d1b8; end: 101f8d23f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101f8d1b8(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_101f8d578();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112e47bf8) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112e47c00) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f8d240);
  (*pcVar1)();
}



/* Entry: 101f8d240; end: 101f8d29f; -[_TtC31SpectaclesKnobsScopeGraphBridge46SpectaclesKnobsScopeGraphBridgeSaberEntryPoint init] */

void FUN_101f8d240(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpectaclesKnobsScopeGraphBridge.SpectaclesKnobsScopeGraphBridgeSaberEntryPoint"
                      ,0x4e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f8d26c);
  (*pcVar1)();
}



/* Entry: 101f8d2a0; end: 101f8d2d7; -[_TtC31SpectaclesKnobsScopeGraphBridge46SpectaclesKnobsScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101f8d2bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f8d2c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f8d2a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e47bf8));
  return;
}



/* Entry: 101f8d2d8; end: 101f8d2ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f8d2d8(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112e47c00),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112e47bf8));
  return;
}



/* Entry: 101f8d300; end: 101f8d31f;  */

void FUN_101f8d300(void)

{
  func_0x000107c61168(&PTR_PTR_11280f718);
  return;
}



/* Entry: 101f8d320; end: 101f8d3a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101f8d320(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e47c30) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112e47c38);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101f8d3a8);
  (*pcVar2)();
}



/* Entry: 101f8d3a8; end: 101f8d48f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101f8d3a8(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e47c30);
  *(undefined **)(unaff_x20 + _DAT_112e47c30) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e47c38);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112e47c38))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1104ad348;
  func_0x000107c613fc(&UNK_1104ad348,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x101f8d494,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 101f8d490; end: 101f8d49b;  */

void FUN_101f8d490(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 101f8d49c; end: 101f8d4fb; -[_TtC31SpectaclesKnobsScopeGraphBridge46SCSpectaclesKnobsScopedServicesSaberEntryPoint init] */

void FUN_101f8d49c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpectaclesKnobsScopeGraphBridge.SCSpectaclesKnobsScopedServicesSaberEntryPoint"
                      ,0x4e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f8d4c8);
  (*pcVar1)();
}



/* Entry: 101f8d4fc; end: 101f8d533; -[_TtC31SpectaclesKnobsScopeGraphBridge46SCSpectaclesKnobsScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f8d4fc(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e47c38));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e47c30));
  return;
}



/* Entry: 101f8d534; end: 101f8d537;  */

void FUN_101f8d534(void)

{
  return;
}



/* Entry: 101f8d538; end: 101f8d557;  */

void FUN_101f8d538(void)

{
  FUN_101f8d3a8();
  return;
}



/* Entry: 101f8d558; end: 101f8d577;  */

void FUN_101f8d558(void)

{
  func_0x000107c61168(&PTR_PTR_11280f7e0);
  return;
}



/* Entry: 101f8d578; end: 101f8d647;  */

undefined8 FUN_101f8d578(void)

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
  
  func_0x000107c61428(0x112e47c68,&uStack_40,0x20,0);
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
    FUN_101f8d648();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 101f8d648; end: 101f8d667;  */

void FUN_101f8d648(void)

{
  func_0x000107c61168(&PTR_PTR_11280f8a8);
  return;
}



/* Entry: 101f8d668; end: 101f8d6d3;  */

void FUN_101f8d668(void)

{
  func_0x0001000285a8(0x112e47c70,&UNK_10da3d508);
  func_0x0001000823a8(0x101f8d6a8,0);
  return;
}



/* Entry: 101f8d6d4; end: 101f8d70f; -[_TtC31SpectaclesKnobsScopeGraphBridge39SpectaclesKnobsScopeGraphBridgeServices init] */

void FUN_101f8d6d4(undefined8 param_1)

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



/* Entry: 101f8d710; end: 101f8d743;  */

void FUN_101f8d710(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



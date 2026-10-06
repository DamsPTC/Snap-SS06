/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102996aac; end: 102996b07;  */

void FUN_102996aac(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112ed2100,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112ed2100,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 102996b08; end: 102996b7f;  */

undefined ** FUN_102996b08(void)

{
  return &PTR_DAT_112ed2260;
}



/* Entry: 102996b80; end: 102996bc7; -[SCFamilyCenterRouterScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102996b80(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ed2168;
  func_0x000107c61428(param_1 + _DAT_112ed2168,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102996bc8; end: 102996c1f; -[SCFamilyCenterRouterScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102996bc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ed2168;
  func_0x000107c61428(param_1 + _DAT_112ed2168,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102996c20; end: 102996c67; -[SCFamilyCenterRouterScopeGraphBridgeSaberEntryPoint familyCenterScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102996c20(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ed2170;
  func_0x000107c61428(param_1 + _DAT_112ed2170,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102996c68; end: 102996c73; -[SCFamilyCenterRouterScopeGraphBridgeSaberEntryPoint setFamilyCenterScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102996c68(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ed2170;
  func_0x000107c61428(param_1 + _DAT_112ed2170,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102996c74; end: 102996cbb; -[SCFamilyCenterRouterScopeGraphBridgeSaberEntryPoint familyCenterRouterScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102996c74(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ed2178;
  func_0x000107c61428(param_1 + _DAT_112ed2178,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102996cbc; end: 102996cc7; -[SCFamilyCenterRouterScopeGraphBridgeSaberEntryPoint setFamilyCenterRouterScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102996cbc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ed2178;
  func_0x000107c61428(param_1 + _DAT_112ed2178,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102996cc8; end: 102996d27;  */

void FUN_102996cc8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *param_4;
  func_0x000107c61428(param_1 + lVar2,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 102996d28; end: 102996ee3;  */

/* WARNING: Possible PIC construction at 0x000102996e40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102996e64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102996e74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102996eb8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102996e78) */
/* WARNING: Removing unreachable block (ram,0x000102996e68) */
/* WARNING: Removing unreachable block (ram,0x000102996e44) */
/* WARNING: Removing unreachable block (ram,0x000102996ebc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102996d28(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  lVar3 = unaff_x20;
  func_0x000107c42dac();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c42da8();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      lVar4 = 0;
      FUN_102996344();
      lVar3 = lVar4;
      func_0x000107c610f8();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      lVar5 = lVar2;
      FUN_1029965bc();
      if (lVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102996ee4);
        (*pcVar1)();
      }
      func_0x000100083b20(&uStack_68);
      func_0x000100087c34(auStack_70);
      func_0x000107c61574(uStack_68);
      *(long *)(lVar3 + _DAT_112ed2090) = lVar5;
      *(long *)(lVar3 + _DAT_112ed2098) = unaff_x20;
      lStack_80 = lVar3;
      lStack_78 = lVar4;
      func_0x000107c61154(&lStack_80,PTR_s_init_1125d9248);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 102996ee4; end: 102996f0b; -[SCFamilyCenterRouterScopeGraphBridgeSaberEntryPoint begin] */

void FUN_102996ee4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102996d28();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102996f0c; end: 102996f4f; -[SCFamilyCenterRouterScopeGraphBridgeSaberEntryPoint end] */

void FUN_102996f0c(undefined8 param_1)

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



/* Entry: 102996f50; end: 102997153;  */

void FUN_102996f50(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe8) || (param_3 != -0x7ffffffef0f2da90)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000018,0x800000010f0d2570,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0xd000000000000031;
        if (((param_2 != -0x2fffffffffffffcf) || (param_3 != -0x7ffffffef0f2da70)) &&
           (func_0x000107c605b8(0xd000000000000031,0x800000010f0d2590,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "FamilyCenterRouterScopeGraphBridge/SCFamilyCenterRouterScopeGraphBridgeSaberEntryPoint.swift"
                              ,0x5c,2,0x33,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102997154);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c54898();
        goto LAB_102996fdc;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5489c();
  }
LAB_102996fdc:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102997154; end: 1029971ff; -[SCFamilyCenterRouterScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_102997154(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102996f50(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102997200; end: 102997277; -[SCFamilyCenterRouterScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102997200(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ed2168,0);
  *(undefined8 *)(param_1 + _DAT_112ed2170) = 0;
  *(undefined8 *)(param_1 + _DAT_112ed2178) = 0;
  *(undefined8 *)(param_1 + _DAT_112ed2180) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102997278; end: 1029972ab;  */

void FUN_102997278(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1029972ac; end: 102997303; -[SCFamilyCenterRouterScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001029972d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029972dc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029972ac(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ed2168);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ed2170));
  return;
}



/* Entry: 102997304; end: 102997323;  */

void FUN_102997304(void)

{
  func_0x000107c61168(&PTR_PTR_112876688);
  return;
}



/* Entry: 102997324; end: 10299736b; -[SCFamilyCenterRouterScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102997324(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ed21b0;
  func_0x000107c61428(param_1 + _DAT_112ed21b0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10299736c; end: 1029973c3; -[SCFamilyCenterRouterScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10299736c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ed21b0;
  func_0x000107c61428(param_1 + _DAT_112ed21b0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1029973c4; end: 10299749b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029973c4(undefined8 param_1,long param_2)

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
    FUN_10299659c();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112ed20c8) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10299749c);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112ed20d0);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112ed21b8);
    *(long **)(unaff_x20 + _DAT_112ed21b8) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 10299749c; end: 1029974c3; -[SCFamilyCenterRouterScopedServicesSaberEntryPoint begin] */

void FUN_10299749c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1029973c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1029974c4; end: 10299763b;  */

/* WARNING: Possible PIC construction at 0x00010299752c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029975c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102997530) */
/* WARNING: Removing unreachable block (ram,0x0001029975c8) */
/* WARNING: Removing unreachable block (ram,0x0001029975e0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029974c4(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112ed21b8);
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



/* Entry: 10299763c; end: 102997643;  */

void FUN_10299763c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 102997644; end: 102997677; -[SCFamilyCenterRouterScopedServicesSaberEntryPoint end] */

void FUN_102997644(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1029974c4();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102997678; end: 102997797;  */

void FUN_102997678(long param_1,long param_2,long param_3)

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
                        "FamilyCenterRouterScopeGraphBridge/SCFamilyCenterRouterScopedServicesSaberEntryPoint.swift"
                        ,0x5a,2,0x2b,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102997798);
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



/* Entry: 102997798; end: 102997843; -[SCFamilyCenterRouterScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_102997798(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102997678(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102997844; end: 1029978a3; -[SCFamilyCenterRouterScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102997844(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ed21b0,0);
  *(undefined8 *)(param_1 + _DAT_112ed21b8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1029978a4; end: 1029978d7;  */

void FUN_1029978a4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1029978d8; end: 10299790f; -[SCFamilyCenterRouterScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029978d8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ed21b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ed21b8));
  return;
}



/* Entry: 102997910; end: 10299792f;  */

void FUN_102997910(void)

{
  func_0x000107c61168(&PTR_PTR_112876758);
  return;
}



/* Entry: 102997930; end: 102997a17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102997930(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ed21e8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ed21f0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ed21f8) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102997a18; end: 102997b87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102997a18(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar5 = *(long *)(unaff_x20 + _DAT_112ed21f0);
  lVar7 = *(long *)(unaff_x20 + _DAT_112ed21e8);
  func_0x000107c3edc4(lVar5,param_2,*(undefined8 *)(lVar7 + _DAT_112ed2228));
  func_0x000107c61180();
  puVar1 = (undefined8 *)(lVar7 + _DAT_112ed2240);
  func_0x000107c61428(puVar1,auStack_68,0,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  puVar1 = (undefined8 *)(lVar5 + _DAT_112ed2958);
  func_0x000107c61428(puVar1,auStack_80,1,0);
  uVar6 = puVar1[1];
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  func_0x000107c61434(uVar3);
  func_0x000107c6142c(uVar6);
  puVar1 = (undefined8 *)(lVar7 + _DAT_112ed2248);
  func_0x000107c61428(puVar1,auStack_98,0,0);
  uVar2 = *puVar1;
  uVar6 = puVar1[1];
  puVar1 = (undefined8 *)(lVar5 + _DAT_112ed2960);
  func_0x000107c61428(puVar1,auStack_b0,1,0);
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  *puVar1 = uVar2;
  puVar1[1] = uVar6;
  func_0x000100de78a0(uVar2,uVar6);
  func_0x0001000b44c0(uVar3,uVar4);
  func_0x000107c42c1c(*(undefined8 *)(unaff_x20 + _DAT_112ed21f8));
  func_0x000107c61170(lVar5);
  return;
}



/* Entry: 102997b88; end: 102997d27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102997b88(char *param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar2 = &puStack_70;
  ppuVar4 = &puStack_70;
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112ed21e8);
  puVar1 = &UNK_110578010;
  func_0x000107c613fc(&UNK_110578010,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar5;
  if (param_1 == (char *)0x0) {
    func_0x000107c61174();
    param_1 = "dismissRouterAfterRemovingFamilyCenterScope(_:)";
    func_0x0001000c10c0("dismissRouterAfterRemovingFamilyCenterScope(_:)");
    func_0x000107c61180();
    puVar3 = &UNK_110578038;
    func_0x000107c613fc(&UNK_110578038,0x18,7);
    *(undefined8 *)(puVar3 + 0x10) = uVar5;
    uStack_50 = 0x102997fb4;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1000f6b44;
    puStack_58 = &UNK_110578050;
    puStack_48 = puVar3;
    func_0x000107c60bc4(&puStack_70);
    puVar3 = puStack_48;
    func_0x000107c61174(uVar5);
    func_0x000107c61574(puVar3);
    func_0x000107c4e524(param_1);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61574(puVar1);
  }
  else {
    uStack_50 = 0x102997fb0;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1000b0c7c;
    puStack_58 = &UNK_110578078;
    puStack_48 = puVar1;
    func_0x000107c60bc4(&puStack_70);
    puVar3 = puStack_48;
    func_0x000107c61174(uVar5);
    func_0x000107c615f0(param_1);
    func_0x000107c6157c(puVar1);
    func_0x000107c61574(puVar3);
    func_0x000107c5e2a4(param_1);
    func_0x000107c61574(puVar1);
    func_0x000107c60bd0(ppuVar2);
  }
  func_0x000107c615e8(param_1);
  return;
}



/* Entry: 102997d28; end: 102997d77; -[_TtC32FamilyCenterRouterImplementation28FamilyCenterRouterEntryPoint dismissFamilyCenterScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102997d28(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ed21f8);
  func_0x000107c61174();
  func_0x000107c4ffe8(uVar1);
  func_0x000107c61180();
  FUN_102997b88();
  func_0x000107c615e8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102997d78; end: 102997e47;  */

void FUN_102997d78(undefined8 param_1)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  pcVar1 = "dismissRouterAfterRemovingFamilyCenterScope(_:)";
  func_0x0001000c10c0("dismissRouterAfterRemovingFamilyCenterScope(_:)");
  func_0x000107c61180();
  puVar2 = &UNK_110577fc0;
  func_0x000107c613fc(&UNK_110577fc0,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  uStack_40 = 0x102997fa8;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_110577fd8;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  puVar2 = puStack_38;
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 102997e48; end: 102997e4f;  */

void FUN_102997e48(void)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  ppuVar3 = &puStack_60;
  pcVar1 = "dismissRouterAfterRemovingFamilyCenterScope(_:)";
  func_0x0001000c10c0("dismissRouterAfterRemovingFamilyCenterScope(_:)");
  func_0x000107c61180();
  puVar2 = &UNK_110577fc0;
  func_0x000107c613fc(&UNK_110577fc0,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar4;
  uStack_40 = 0x102997fa8;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_110577fd8;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  puVar2 = puStack_38;
  func_0x000107c61174(uVar4);
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 102997e50; end: 102997eb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102997e50(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ed2230;
  func_0x000107c61428(param_1 + _DAT_112ed2230,auStack_38,0,0);
  param_1 = param_1 + lVar1;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c42040();
    func_0x000107c615e8(param_1);
  }
  return;
}



/* Entry: 102997eb4; end: 102997ed7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102997eb4(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ed2230;
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar2 + _DAT_112ed2230,auStack_38,0,0);
  lVar2 = lVar2 + lVar1;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c42040();
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 102997ed8; end: 102997f0b;  */

void FUN_102997ed8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102997f0c; end: 102997f73; -[_TtC32FamilyCenterRouterImplementation28FamilyCenterRouterEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102997f28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102997f2c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102997f0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ed21e8));
  return;
}



/* Entry: 102997f74; end: 102997f7b;  */

undefined8 FUN_102997f74(void)

{
  return 0;
}



/* Entry: 102997f7c; end: 102997f9b;  */

void FUN_102997f7c(void)

{
  func_0x000107c61168(&PTR_PTR_112876818);
  return;
}



/* Entry: 102997f9c; end: 102997fbf;  */

void FUN_102997f9c(long param_1,long param_2)

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



/* Entry: 102997fc0; end: 102997fdf; -[_TtC23FamilyCenterRouterScope23FamilyCenterRouterScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102997fc0(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112ed2228));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102997fe0; end: 102998027; -[_TtC23FamilyCenterRouterScope23FamilyCenterRouterScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102997fe0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ed2230;
  func_0x000107c61428(param_1 + _DAT_112ed2230,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102998028; end: 10299807f; -[_TtC23FamilyCenterRouterScope23FamilyCenterRouterScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102998028(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ed2230;
  func_0x000107c61428(param_1 + _DAT_112ed2230,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102998080; end: 10299808f; -[_TtC23FamilyCenterRouterScope23FamilyCenterRouterScope source] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102998080(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112ed2238);
}



/* Entry: 102998090; end: 102998107; -[_TtC23FamilyCenterRouterScope23FamilyCenterRouterScope firstChildId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102998090(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112ed2240);
  func_0x000107c61428(puVar1,auStack_38,0,0);
  lVar2 = puVar1[1];
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
    func_0x000107c61434(lVar2);
    func_0x000107c5fadc(uVar3,lVar2);
    func_0x000107c6142c(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 102998108; end: 10299817f; -[_TtC23FamilyCenterRouterScope23FamilyCenterRouterScope setFirstChildId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102998108(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  plVar1 = (long *)(param_1 + _DAT_112ed2240);
  func_0x000107c61428(plVar1,auStack_48,1,0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  func_0x000107c6142c(lVar2);
  return;
}



/* Entry: 102998180; end: 10299820b; -[_TtC23FamilyCenterRouterScope23FamilyCenterRouterScope firstChildIdBytes] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102998180(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112ed2248);
  func_0x000107c61428(puVar1,auStack_48,0,0);
  uVar2 = 0;
  uVar3 = puVar1[1];
  if (uVar3 >> 0x3c < 0xf) {
    uVar4 = *puVar1;
    func_0x00010006c00c(uVar4,uVar3);
    uVar2 = uVar4;
    func_0x000107c5ee20(uVar4,uVar3);
    func_0x0001000b44c0(uVar4,uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10299820c; end: 1029982a7; -[_TtC23FamilyCenterRouterScope23FamilyCenterRouterScope setFirstChildIdBytes:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10299820c(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    func_0x000107c61174();
    param_2 = -0x1000000000000000;
  }
  else {
    func_0x000107c61174();
    lVar3 = param_3;
    func_0x000107c61174(param_3);
    func_0x000107c5ee30();
    func_0x000107c61170(lVar3);
  }
  plVar1 = (long *)(param_1 + _DAT_112ed2248);
  func_0x000107c61428(plVar1,auStack_48,1,0);
  lVar3 = *plVar1;
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  func_0x0001000b44c0(lVar3,lVar2);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1029982a8; end: 10299839b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1029982a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_68 [8];
  undefined1 auStack_58 [24];
  
  func_0x000107c610f8();
  lVar3 = _DAT_112ed2230;
  func_0x000107c61614(unaff_x20 + _DAT_112ed2230,0);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ed2240);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ed2248);
  puVar1[1] = 0xf000000000000000;
  *puVar1 = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ed2228) = param_1;
  func_0x000107c61428(unaff_x20 + lVar3,auStack_58,1,0);
  func_0x000107c61604(unaff_x20 + lVar3,param_2);
  *(undefined8 *)(unaff_x20 + _DAT_112ed2238) = param_3;
  puVar2 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_1);
  puVar4 = auStack_68;
  func_0x000107c61154(puVar4,puVar2);
  func_0x000107c615e8(param_1);
  func_0x000107c615e8(param_2);
  return puVar4;
}



/* Entry: 10299839c; end: 102998403; -[_TtC23FamilyCenterRouterScope23FamilyCenterRouterScope initWithUiContainer:delegate:source:] */

undefined8
FUN_10299839c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  uVar1 = param_3;
  FUN_1029987c0(param_3,param_4,param_5);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_4);
  return uVar1;
}



/* Entry: 102998404; end: 1029984af; -[_TtC23FamilyCenterRouterScope23FamilyCenterRouterScope .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102998404(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ed2228));
  FUN_102998898(param_1 + _DAT_112ed2230);
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ed2240 + 8));
  uVar2 = *(ulong *)(param_1 + _DAT_112ed2248);
  uVar1 = ((ulong *)(param_1 + _DAT_112ed2248))[1];
  if (0xe < uVar1 >> 0x3c) {
    return;
  }
  uVar3 = (uint)(uVar1 >> 0x3e);
  if (uVar3 == 1) {
    uVar2 = uVar1 & 0x3fffffffffffffff;
  }
  else if (uVar3 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 1029984b0; end: 102998667;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1029984b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long *aplStack_d0 [2];
  undefined8 uStack_c0;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar5 = param_1;
  func_0x00010038bf04();
  lVar6 = lVar5;
  func_0x000107c610f8();
  lVar4 = _DAT_112ed2230;
  func_0x000107c61614(lVar6 + _DAT_112ed2230,0);
  puVar1 = (undefined8 *)(lVar6 + _DAT_112ed2240);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar6 + _DAT_112ed2248);
  puVar1[1] = 0xf000000000000000;
  *puVar1 = 0;
  *(long *)(lVar6 + _DAT_112ed2228) = param_1;
  func_0x000107c61428(lVar6 + lVar4,auStack_78,1,0);
  func_0x000107c61604(lVar6 + lVar4,param_2);
  *(undefined8 *)(lVar6 + _DAT_112ed2238) = param_3;
  puVar3 = PTR_s_init_1125d9248;
  lStack_88 = lVar6;
  lStack_80 = lVar5;
  func_0x000107c615f0(param_1);
  plVar7 = &lStack_88;
  func_0x000107c61154(plVar7,puVar3);
  puVar1 = (undefined8 *)((long)plVar7 + _DAT_112ed2240);
  func_0x000107c61428(puVar1,auStack_a0,1,0);
  uVar8 = puVar1[1];
  *puVar1 = param_4;
  puVar1[1] = param_5;
  func_0x000107c61434(param_5);
  func_0x000107c6142c(uVar8);
  puVar1 = (undefined8 *)((long)plVar7 + _DAT_112ed2248);
  func_0x000107c61428(puVar1,auStack_b8,1,0);
  uVar8 = *puVar1;
  uVar2 = puVar1[1];
  *puVar1 = param_6;
  puVar1[1] = param_7;
  func_0x000100de78a0(param_6,param_7);
  func_0x0001000b44c0(uVar8,uVar2);
  aplStack_d0[0] = plVar7;
  func_0x00010008a7c8(&uStack_c0,aplStack_d0);
  func_0x000100083b20(aplStack_d0);
  func_0x000107c61574(uStack_c0);
  func_0x000107c615e8(aplStack_d0[0]);
  return plVar7;
}



/* Entry: 102998668; end: 102998777; -[_TtC23FamilyCenterRouterScope31FamilyCenterRouterScopeServices buildWithUiContainer:delegate:source:firstChildId:firstChildIdBytes:] */

void FUN_102998668(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_6 == 0) {
    param_6 = 0;
    uVar3 = 0;
  }
  else {
    func_0x000107c5faec(param_6);
    uVar3 = param_2;
  }
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  if (param_7 == 0) {
    func_0x000107c61174(param_1);
    param_2 = 0xf000000000000000;
  }
  else {
    lVar1 = param_7;
    func_0x000107c61174(param_7);
    func_0x000107c61174(param_1);
    func_0x000107c5ee30(param_7);
    func_0x000107c61170(lVar1);
  }
  uVar2 = param_3;
  FUN_1029984b0(param_3,param_4,param_5,param_6,uVar3,param_7,param_2);
  func_0x0001000b44c0(param_7,param_2);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102998778; end: 10299877b;  */

void FUN_102998778(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10299877c; end: 1029987af;  */

void FUN_10299877c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1029987b0; end: 1029987bf; -[_TtC23FamilyCenterRouterScope31FamilyCenterRouterScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029987b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ed2258));
  return;
}



/* Entry: 1029987c0; end: 102998897;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029987c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  func_0x000107c614f0();
  lVar3 = _DAT_112ed2230;
  func_0x000107c61614(unaff_x20 + _DAT_112ed2230,0);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ed2240);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ed2248);
  puVar1[1] = 0xf000000000000000;
  *puVar1 = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ed2228) = param_1;
  func_0x000107c61428(unaff_x20 + lVar3,auStack_58,1,0);
  func_0x000107c61604(unaff_x20 + lVar3,param_2);
  *(undefined8 *)(unaff_x20 + _DAT_112ed2238) = param_3;
  puVar2 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_1);
  func_0x000107c61154(&stack0xffffffffffffff98,puVar2);
  return;
}



/* Entry: 102998898; end: 1029988bb;  */

undefined8 FUN_102998898(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1029988bc; end: 102998923;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029988bc(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010038e7b0();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112ed2258) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 102998924; end: 102998947;  */

undefined1  [16] FUN_102998924(void)

{
  return ZEXT816(0x110578140);
}



/* Entry: 102998948; end: 1029989b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102998948(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_102998d3c();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112ed22d0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1029989b4; end: 102998a1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029989b4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ed22d0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102998a20; end: 102998a7f; -[_TtC40FamilyCenterScopedFactoryServiceProvider26FamilyCenterScopedServices init] */

void FUN_102998a20(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FamilyCenterScopedFactoryServiceProvider.FamilyCenterScopedServices",0x43,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102998a4c);
  (*pcVar1)();
}



/* Entry: 102998a80; end: 102998a8f; -[_TtC40FamilyCenterScopedFactoryServiceProvider26FamilyCenterScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102998a80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ed22d0));
  return;
}



/* Entry: 102998a90; end: 102998afb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102998a90(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110578348;
  func_0x000107c613fc(&UNK_110578348,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_102998dd4,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 102998afc; end: 102998b97;  */

void FUN_102998afc(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_110578258;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110578258;
  return;
}



/* Entry: 102998b98; end: 102998bcf;  */

void FUN_102998b98(long *param_1)

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



/* Entry: 102998bd0; end: 102998bd7;  */

undefined8 FUN_102998bd0(void)

{
  return 0x1b;
}



/* Entry: 102998bd8; end: 102998d0b;  */

void FUN_102998bd8(undefined8 *param_1)

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
  puVar1 = &UNK_110578370;
  func_0x000107c613fc(&UNK_110578370,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_102998dac;
  func_0x00010058fa64(FUN_102998dac,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102998d0c; end: 102998d3b;  */

undefined ** FUN_102998d0c(void)

{
  return &PTR_DAT_112ed2978;
}



/* Entry: 102998d3c; end: 102998d5b;  */

void FUN_102998d3c(void)

{
  func_0x000107c61168(&PTR_PTR_112876a88);
  return;
}



/* Entry: 102998d5c; end: 102998dab;  */

undefined1  [16] FUN_102998d5c(void)

{
  return ZEXT816(0x1105782a8);
}



/* Entry: 102998dac; end: 102998dd3;  */

void FUN_102998dac(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 102998dd4; end: 102998dd7;  */

void FUN_102998dd4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102998dd8; end: 102998fe3;  */

/* WARNING: Possible PIC construction at 0x000102998f1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102998f2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102998f3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102998f4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102998f5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102998f6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102998f7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102998f8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102998f9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102998fac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102998fbc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102998fb0) */
/* WARNING: Removing unreachable block (ram,0x000102998fa0) */
/* WARNING: Removing unreachable block (ram,0x000102998f90) */
/* WARNING: Removing unreachable block (ram,0x000102998f80) */
/* WARNING: Removing unreachable block (ram,0x000102998f70) */
/* WARNING: Removing unreachable block (ram,0x000102998f60) */
/* WARNING: Removing unreachable block (ram,0x000102998f50) */
/* WARNING: Removing unreachable block (ram,0x000102998f40) */
/* WARNING: Removing unreachable block (ram,0x000102998f30) */
/* WARNING: Removing unreachable block (ram,0x000102998f20) */
/* WARNING: Removing unreachable block (ram,0x000102998fc0) */

void FUN_102998dd8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_1105783f8;
  func_0x000107c613fc(&UNK_1105783f8,0xc0,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_9;
  *(undefined8 *)(puVar1 + 0x50) = param_10;
  *(undefined8 *)(puVar1 + 0x58) = param_11;
  *(undefined8 *)(puVar1 + 0x60) = param_12;
  *(undefined8 *)(puVar1 + 0x68) = param_13;
  *(undefined8 *)(puVar1 + 0x70) = param_14;
  *(undefined8 *)(puVar1 + 0x78) = param_15;
  *(undefined8 *)(puVar1 + 0x80) = param_16;
  *(undefined8 *)(puVar1 + 0x88) = param_17;
  *(undefined8 *)(puVar1 + 0x90) = param_18;
  *(undefined8 *)(puVar1 + 0x98) = param_19;
  *(undefined8 *)(puVar1 + 0xa0) = param_20;
  *(undefined8 *)(puVar1 + 0xa8) = param_21;
  *(undefined8 *)(puVar1 + 0xb0) = param_22;
  *(undefined8 *)(puVar1 + 0xb8) = param_23;
  uVar2 = 0x112ed2340;
  func_0x0001000285a8(0x112ed2340,&UNK_10daf9de0);
  func_0x000107c613fc();
  uVar3 = 0x1029996e0;
  func_0x0001000841fc(0x1029996e0,puVar1,uVar2);
  func_0x000100084214(&UNK_10daf9db0,0x28,2);
  *param_1 = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 102998fe4; end: 10299902f;  */

void FUN_102998fe4(void)

{
  long unaff_x20;
  
  FUN_102998dd8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8));
  return;
}



/* Entry: 102999030; end: 10299903f;  */

undefined1  [16] FUN_102999030(void)

{
  return ZEXT816(0x1105783d8);
}



/* Entry: 102999040; end: 102999613;  */

void FUN_102999040(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 *puVar5;
  char *pcVar6;
  char *pcVar7;
  code *pcVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  code *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 auStack_70 [2];
  
  uVar14 = *param_2;
  func_0x0001000285a8(0x112ed2348,&UNK_10daf9de8);
  puVar1 = auStack_70;
  auStack_70[0] = uVar14;
  func_0x0001000838ec();
  puVar2 = puVar1;
  func_0x00010299b3cc();
  pcVar3 = "SCFullMapScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCFullMapScopeExposerSubjectServiceProvider",0x2b,2);
  FUN_10299b418();
  pcVar4 = "SCSafetyReportScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCSafetyReportScopeExposerSubjectServiceProvider",0x30,2);
  FUN_10299b464();
  func_0x000100082720("WebBrowsingScopeExposerSubjectServiceProvider",0x2d,2);
  puVar5 = puVar2;
  FUN_10299b40c();
  func_0x000100082720("SCFullMapScopeExposerObservableServiceProvider",0x2e,2);
  pcVar6 = pcVar3;
  FUN_10299b458();
  func_0x000100082720("SCSafetyReportScopeExposerObservableServiceProvider",0x33,2);
  pcVar7 = pcVar4;
  FUN_10299b4f0();
  func_0x000100082720("WebBrowsingScopeExposerObservableServiceProvider",0x30,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar8 = FUN_102998b98;
  func_0x0001000823a8(FUN_102998b98,0);
  func_0x000100082720("FamilyCenterScopedServicesCleanupRelayServiceProvider",0x35,2);
  puVar9 = puVar2;
  FUN_10299b168(puVar2,pcVar3,pcVar4);
  func_0x000100082720("FamilyCenterScopeGraphBridgeServicesServiceProvider",0x33,2);
  func_0x0001000285a8(0x112ed2350,&UNK_10daf9e00);
  puVar10 = &UNK_110578420;
  func_0x000107c613fc(&UNK_110578420,0xe0,7);
  *(undefined8 **)(puVar10 + 0x10) = puVar1;
  *(undefined8 *)(puVar10 + 0x18) = param_3;
  *(undefined8 *)(puVar10 + 0x20) = param_4;
  *(undefined8 *)(puVar10 + 0x28) = param_5;
  *(undefined8 *)(puVar10 + 0x30) = param_6;
  *(undefined8 *)(puVar10 + 0x38) = param_7;
  *(undefined8 *)(puVar10 + 0x40) = param_8;
  *(undefined8 *)(puVar10 + 0x48) = param_9;
  *(undefined8 *)(puVar10 + 0x50) = param_10;
  *(undefined8 *)(puVar10 + 0x58) = param_11;
  *(undefined8 *)(puVar10 + 0x60) = param_12;
  *(undefined8 *)(puVar10 + 0x68) = param_13;
  *(undefined8 *)(puVar10 + 0x70) = param_14;
  *(undefined8 *)(puVar10 + 0x78) = param_15;
  *(undefined8 *)(puVar10 + 0x80) = param_16;
  *(undefined8 *)(puVar10 + 0x88) = param_17;
  *(undefined8 *)(puVar10 + 0x90) = param_18;
  *(undefined8 *)(puVar10 + 0x98) = param_19;
  *(undefined8 *)(puVar10 + 0xa0) = param_20;
  *(undefined8 *)(puVar10 + 0xa8) = param_21;
  *(undefined8 *)(puVar10 + 0xb0) = param_22;
  *(undefined8 *)(puVar10 + 0xb8) = param_23;
  *(undefined8 *)(puVar10 + 0xc0) = param_24;
  *(char **)(puVar10 + 200) = pcVar7;
  *(char **)(puVar10 + 0xd0) = pcVar6;
  *(undefined8 **)(puVar10 + 0xd8) = puVar5;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(pcVar7);
  func_0x000107c6157c(pcVar6);
  func_0x000107c6157c(puVar5);
  uVar14 = 0x102999740;
  func_0x0001000823a8(0x102999740,puVar10);
  func_0x000100082720("FamilyCenterSwiftEntryPointWrapperServiceProvider",0x31,2);
  func_0x0001000285a8(0x112ed2358,&UNK_10daf9df0);
  puVar10 = &UNK_110578448;
  func_0x000107c613fc(&UNK_110578448,0x30,7);
  *(undefined8 **)(puVar10 + 0x10) = puVar1;
  *(undefined8 **)(puVar10 + 0x18) = puVar9;
  *(code **)(puVar10 + 0x20) = pcVar8;
  *(undefined8 *)(puVar10 + 0x28) = uVar14;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar9);
  func_0x000107c6157c(pcVar8);
  func_0x000107c6157c(uVar14);
  pcVar11 = FUN_102999794;
  func_0x0001000823a8(FUN_102999794,puVar10);
  func_0x000100082720("FamilyCenterScopeInitializationPluginRegistryServiceProvider",0x3c,2);
  func_0x0001000285a8(0x112ed22d8,&UNK_10daf9bb0);
  func_0x000107c6157c(pcVar11);
  uVar12 = 0x1029997a0;
  func_0x0001000823a8(0x1029997a0,pcVar11);
  func_0x000100082720("FamilyCenterScopeInitializationServiceProvider",0x2e,2);
  func_0x0001000285a8(0x112ed22c8,&UNK_10daf9ba0);
  func_0x000107c6157c(uVar12);
  uVar13 = 0x1029997a8;
  func_0x0001000823a8(0x1029997a8,uVar12);
  func_0x000100082720("FamilyCenterScopedServicesServiceProvider",0x29,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar10 = &UNK_110578470;
  func_0x000107c613fc(&UNK_110578470,0x20,7);
  *(undefined8 *)(puVar10 + 0x10) = uVar13;
  *(code **)(puVar10 + 0x18) = pcVar8;
  func_0x000107c6157c(pcVar8);
  uVar13 = 0x1029997b0;
  func_0x0001000823a8(0x1029997b0,puVar10);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(pcVar8);
  func_0x000107c61574(puVar9);
  func_0x000107c61574(uVar14);
  func_0x000107c61574(pcVar11);
  func_0x000107c61574(uVar12);
  func_0x000100082720("FamilyCenterScopeEntryPointProvider",0x23,2);
  *param_1 = uVar13;
  return;
}



/* Entry: 102999614; end: 102999793;  */

void FUN_102999614(void)

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
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102999794; end: 1029997b7;  */

void FUN_102999794(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_10299a850(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000a7f38("FamilyCenterScopeInitializationPluginRegistryServiceProvider",0x3c,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1029997b8; end: 10299a5bb;  */

void FUN_1029997b8(long *param_1,long param_2)

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
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined *puVar23;
  undefined8 uVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined8 uVar27;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  func_0x000100083b20(auStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  func_0x000100083b20(&uStack_a8);
  func_0x000100083b20(&uStack_b0);
  func_0x000100083b20(&uStack_b8);
  func_0x000100083b20(&uStack_c0);
  func_0x000100083b20(&uStack_c8);
  func_0x000100083b20(&uStack_d0);
  func_0x000100083b20(&uStack_d8);
  func_0x000100083b20(&uStack_e0);
  func_0x000100083b20(&uStack_e8);
  func_0x000100083b20(&uStack_f0);
  func_0x000100083b20(&uStack_f8);
  func_0x000100083b20(&uStack_100);
  func_0x000100083b20(&uStack_108);
  func_0x000100083b20(&uStack_110);
  func_0x000100083b20(&uStack_118);
  func_0x000100083b20(&uStack_120);
  func_0x000100083b20(&uStack_128);
  func_0x000100083b20(&uStack_130);
  func_0x000100083b20(&uStack_138);
  FUN_10299a77c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x30) = uStack_78;
  *(undefined8 *)(param_2 + 0x38) = uStack_80;
  *(undefined8 *)(param_2 + 0x40) = uStack_88;
  *(undefined8 *)(param_2 + 0x48) = uStack_90;
  *(undefined8 *)(param_2 + 0x50) = uStack_98;
  *(undefined8 *)(param_2 + 0x58) = uStack_a0;
  *(undefined8 *)(param_2 + 0x60) = uStack_a8;
  *(undefined8 *)(param_2 + 0x68) = uStack_b0;
  *(undefined8 *)(param_2 + 0x70) = uStack_b8;
  *(undefined8 *)(param_2 + 0x78) = uStack_c0;
  *(undefined8 *)(param_2 + 0x80) = uStack_c8;
  *(undefined8 *)(param_2 + 0x88) = uStack_d0;
  *(undefined8 *)(param_2 + 0x90) = uStack_d8;
  *(undefined8 *)(param_2 + 0x98) = uStack_e0;
  *(undefined8 *)(param_2 + 0xa0) = uStack_e8;
  *(undefined8 *)(param_2 + 0xa8) = uStack_f0;
  *(undefined8 *)(param_2 + 0xb0) = uStack_f8;
  *(undefined8 *)(param_2 + 0xb8) = uStack_100;
  *(undefined8 *)(param_2 + 0xc0) = uStack_108;
  *(undefined8 *)(param_2 + 200) = uStack_110;
  *(undefined8 *)(param_2 + 0xd0) = uStack_118;
  *(undefined8 *)(param_2 + 0xd8) = uStack_120;
  func_0x0001000285a8(0x112e4de20,&UNK_10da49000);
  func_0x000107c610f8();
  uVar1 = uStack_78;
  func_0x000107c61174();
  uVar2 = uStack_80;
  func_0x000107c61174();
  uVar3 = uStack_88;
  func_0x000107c61174();
  uVar4 = uStack_90;
  func_0x000107c61174();
  uVar5 = uStack_98;
  func_0x000107c61174();
  uVar6 = uStack_a0;
  func_0x000107c61174();
  uVar7 = uStack_a8;
  func_0x000107c61174();
  uVar8 = uStack_b0;
  func_0x000107c61174();
  uVar9 = uStack_b8;
  func_0x000107c61174();
  uVar10 = uStack_c0;
  func_0x000107c61174();
  uVar11 = uStack_c8;
  func_0x000107c61174();
  uVar12 = uStack_d0;
  func_0x000107c61174();
  uVar13 = uStack_d8;
  func_0x000107c61174();
  uVar14 = uStack_e0;
  func_0x000107c61174();
  uVar15 = uStack_e8;
  func_0x000107c61174();
  uVar16 = uStack_f0;
  func_0x000107c61174();
  uVar17 = uStack_f8;
  func_0x000107c61174();
  uVar18 = uStack_100;
  func_0x000107c61174();
  uVar19 = uStack_108;
  func_0x000107c61174();
  uVar20 = uStack_110;
  func_0x000107c61174();
  uVar21 = uStack_118;
  func_0x000107c61174();
  uVar22 = uStack_120;
  func_0x000107c61174();
  uVar27 = uStack_128;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar25 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar27);
  *(undefined **)(param_2 + 0x18) = puVar25;
  func_0x0001000285a8(0x112e4cd20,&UNK_10da47070);
  func_0x000107c610f8();
  uVar27 = uStack_130;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar26 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar27);
  *(undefined **)(param_2 + 0x20) = puVar26;
  func_0x0001000285a8(0x112e51e20,&UNK_10da520b0);
  func_0x000107c610f8();
  uVar27 = uStack_138;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar23 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar27);
  *(undefined **)(param_2 + 0x28) = puVar23;
  func_0x00010299fe1c();
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar24 = auStack_70[0];
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar27 = uVar24;
  func_0x00010299d6dc(uVar24,uVar1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,
                      uVar12,uVar13,uVar14,uVar15,uVar16,uVar17,uVar18,uVar19,uVar20,uVar21,uVar22,
                      puVar25,puVar26,puVar23);
  *(undefined8 *)(param_2 + 0x10) = uVar27;
  func_0x000107c61174();
  FUN_10299d964();
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar22);
  func_0x000107c61574(uStack_128);
  func_0x000107c61574(uStack_130);
  func_0x000107c61574(uStack_138);
  func_0x000107c61170(uVar27);
  *param_1 = param_2;
  return;
}



/* Entry: 10299a5bc; end: 10299a6bf;  */

void FUN_10299a5bc(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xd8));
  return;
}



/* Entry: 10299a6c0; end: 10299a6c7;  */

undefined8 FUN_10299a6c0(void)

{
  return 0x1b;
}



/* Entry: 10299a6c8; end: 10299a74b;  */

void FUN_10299a6c8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x10299a7bc,param_2,FUN_10299a7c0,param_2,0x10299a7e8,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10299a74c; end: 10299a77b;  */

undefined ** FUN_10299a74c(void)

{
  return &PTR_DAT_112ed2978;
}



/* Entry: 10299a77c; end: 10299a79b;  */

void FUN_10299a77c(void)

{
  func_0x000107c61168(&PTR_PTR_112ed23c8);
  return;
}



/* Entry: 10299a79c; end: 10299a7bf;  */

undefined1  [16] FUN_10299a79c(void)

{
  return ZEXT816(0x1105784c8);
}



/* Entry: 10299a7c0; end: 10299a813;  */

void FUN_10299a7c0(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10299a814; end: 10299a84f;  */

void FUN_10299a814(undefined8 *param_1,undefined8 param_2)

{
  FUN_10299a850();
  func_0x0001000a7f38("FamilyCenterScopeInitializationPluginRegistryServiceProvider",0x3c,2);
  *param_1 = param_2;
  return;
}



/* Entry: 10299a850; end: 10299aa3b;  */

void FUN_10299a850(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_110579108;
  ppuVar4 = &PTR_DAT_112ed2978;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_110578518;
  func_0x000107c613fc(&UNK_110578518,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112ed24f0;
  func_0x0001000285a8(0x112ed24f0,&UNK_10daf9ff8);
  func_0x0001000a6ee8(&UNK_1105787c0,"FamilyCenterScopeGraphBridgeScopeInitializationPluginKey",0x38
                      ,2,FUN_10299aa3c,puVar2,uVar3,&UNK_1105787c0,&PTR_DAT_112ed2598);
  func_0x000107c61574(puVar2);
  puVar2 = &UNK_110578540;
  func_0x000107c613fc(&UNK_110578540,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1105782e8,"FamilyCenterScopedServicesScopeInitializationPluginKey",0x36,2
                      ,FUN_10299ab24,puVar2,uVar3,&UNK_1105782e8,&PTR_DAT_112ed22e0);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1105784c8,
                      "FamilyCenterSwiftEntryPointWrapperScopeInitializationPluginKey",0x3e,2,
                      FUN_10299aba0,param_4,uVar3,&UNK_1105784c8,&PTR_DAT_112ed2360);
  func_0x000107c61574(param_4);
  uVar3 = 0x112ed24f8;
  func_0x0001000285a8(0x112ed24f8,&UNK_10dafa000);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 10299aa3c; end: 10299aa7b;  */

void FUN_10299aa3c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_10299b590(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("FamilyCenterScopeGraphBridgeScopeInitializationPluginProvider",0x3d,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10299aa7c; end: 10299ab23;  */

void FUN_10299aa7c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110578568;
  func_0x000107c613fc(&UNK_110578568,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_10299abdc;
  func_0x0001000823a8(FUN_10299abdc,puVar1);
  func_0x000100082720("FamilyCenterScopedServicesScopeInitializationPluginProvider",0x3b,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 10299ab24; end: 10299ab2b;  */

void FUN_10299ab24(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_110578568;
  func_0x000107c613fc(&UNK_110578568,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_10299abdc;
  func_0x0001000823a8(FUN_10299abdc,puVar3);
  func_0x000100082720("FamilyCenterScopedServicesScopeInitializationPluginProvider",0x3b,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 10299ab2c; end: 10299ab9f;  */

void FUN_10299ab2c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x10299aba8;
  func_0x0001000823a8(0x10299aba8,param_3);
  func_0x000100082720("FamilyCenterSwiftEntryPointWrapperScopeInitializationPluginProvider",0x43,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10299aba0; end: 10299abaf;  */

void FUN_10299aba0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x10299aba8;
  func_0x0001000823a8();
  func_0x000100082720("FamilyCenterSwiftEntryPointWrapperScopeInitializationPluginProvider",0x43,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10299abb0; end: 10299abdb;  */

void FUN_10299abb0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



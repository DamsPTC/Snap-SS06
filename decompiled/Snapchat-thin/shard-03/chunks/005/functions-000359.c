/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1029c84b4; end: 1029c8503;  */

void FUN_1029c84b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_4,param_1);
  return;
}



/* Entry: 1029c8504; end: 1029c8537;  */

void FUN_1029c8504(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 1029c8538; end: 1029c853f;  */

undefined8 FUN_1029c8538(void)

{
  return 0x1b;
}



/* Entry: 1029c8540; end: 1029c86b7;  */

void FUN_1029c8540(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11057d8a8;
  func_0x000107c613fc(&UNK_11057d8a8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1029c86b8,puVar1);
  return;
}



/* Entry: 1029c86b8; end: 1029c86bf;  */

void FUN_1029c86b8(undefined8 *param_1)

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
  func_0x000107c61428(0x112ed4a20,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112ed4a20,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_11057d980;
  func_0x000107c613fc(&UNK_11057d980,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x1029c878c;
  func_0x00010058fa64(0x1029c878c,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1029c86c0; end: 1029c871b;  */

void FUN_1029c86c0(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112ed4a20,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112ed4a20,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 1029c871c; end: 1029c8793;  */

undefined ** FUN_1029c871c(void)

{
  return &PTR_DAT_112f45f80;
}



/* Entry: 1029c8794; end: 1029c87db; -[SCGroupExternalShareScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029c8794(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ed4a88;
  func_0x000107c61428(param_1 + _DAT_112ed4a88,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1029c87dc; end: 1029c8833; -[SCGroupExternalShareScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029c87dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ed4a88;
  func_0x000107c61428(param_1 + _DAT_112ed4a88,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1029c8834; end: 1029c887b; -[SCGroupExternalShareScopeGraphBridgeSaberEntryPoint sCStandardExternalContentShareScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029c8834(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ed4a90;
  func_0x000107c61428(param_1 + _DAT_112ed4a90,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1029c887c; end: 1029c8887; -[SCGroupExternalShareScopeGraphBridgeSaberEntryPoint setSCStandardExternalContentShareScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029c887c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ed4a90;
  func_0x000107c61428(param_1 + _DAT_112ed4a90,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1029c8888; end: 1029c88cf; -[SCGroupExternalShareScopeGraphBridgeSaberEntryPoint groupExternalShareScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029c8888(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ed4a98;
  func_0x000107c61428(param_1 + _DAT_112ed4a98,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1029c88d0; end: 1029c88db; -[SCGroupExternalShareScopeGraphBridgeSaberEntryPoint setGroupExternalShareScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029c88d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ed4a98;
  func_0x000107c61428(param_1 + _DAT_112ed4a98,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1029c88dc; end: 1029c893b;  */

void FUN_1029c88dc(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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



/* Entry: 1029c893c; end: 1029c8af7;  */

/* WARNING: Possible PIC construction at 0x0001029c8a54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029c8a78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029c8a88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029c8acc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029c8a8c) */
/* WARNING: Removing unreachable block (ram,0x0001029c8a7c) */
/* WARNING: Removing unreachable block (ram,0x0001029c8a58) */
/* WARNING: Removing unreachable block (ram,0x0001029c8ad0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029c893c(void)

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
  func_0x000107c5140c();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c444f0();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      lVar4 = 0;
      FUN_1029c7e98();
      lVar3 = lVar4;
      func_0x000107c610f8();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      lVar5 = lVar2;
      FUN_1029c8110();
      if (lVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1029c8af8);
        (*pcVar1)();
      }
      func_0x000100083b20(&uStack_68);
      func_0x000100087c34(auStack_70);
      func_0x000107c61574(uStack_68);
      *(long *)(lVar3 + _DAT_112ed49b0) = lVar5;
      *(long *)(lVar3 + _DAT_112ed49b8) = unaff_x20;
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



/* Entry: 1029c8af8; end: 1029c8b1f; -[SCGroupExternalShareScopeGraphBridgeSaberEntryPoint begin] */

void FUN_1029c8af8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1029c893c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1029c8b20; end: 1029c8b63; -[SCGroupExternalShareScopeGraphBridgeSaberEntryPoint end] */

void FUN_1029c8b20(undefined8 param_1)

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



/* Entry: 1029c8b64; end: 1029c8d67;  */

void FUN_1029c8b64(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd6) || (param_3 != -0x7ffffffef0f88e60)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000002a,0x800000010f0771a0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0xd000000000000031;
        if (((param_2 != -0x2fffffffffffffcf) || (param_3 != -0x7ffffffef0f2ab10)) &&
           (func_0x000107c605b8(0xd000000000000031,0x800000010f0d54f0,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "GroupExternalShareScopeGraphBridge/SCGroupExternalShareScopeGraphBridgeSaberEntryPoint.swift"
                              ,0x5c,2,0x35,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1029c8d68);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c54f5c();
        goto LAB_1029c8bf0;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c589b4();
  }
LAB_1029c8bf0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1029c8d68; end: 1029c8e13; -[SCGroupExternalShareScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_1029c8d68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1029c8b64(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1029c8e14; end: 1029c8e8b; -[SCGroupExternalShareScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029c8e14(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ed4a88,0);
  *(undefined8 *)(param_1 + _DAT_112ed4a90) = 0;
  *(undefined8 *)(param_1 + _DAT_112ed4a98) = 0;
  *(undefined8 *)(param_1 + _DAT_112ed4aa0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1029c8e8c; end: 1029c8ebf;  */

void FUN_1029c8e8c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1029c8ec0; end: 1029c8f17; -[SCGroupExternalShareScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001029c8eec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029c8ef0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029c8ec0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ed4a88);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ed4a90));
  return;
}



/* Entry: 1029c8f18; end: 1029c8f37;  */

void FUN_1029c8f18(void)

{
  func_0x000107c61168(&PTR_PTR_112879f48);
  return;
}



/* Entry: 1029c8f38; end: 1029c8f7f; -[SCSCGroupExternalShareScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029c8f38(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ed4ad0;
  func_0x000107c61428(param_1 + _DAT_112ed4ad0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1029c8f80; end: 1029c8fd7; -[SCSCGroupExternalShareScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029c8f80(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ed4ad0;
  func_0x000107c61428(param_1 + _DAT_112ed4ad0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1029c8fd8; end: 1029c90af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029c8fd8(undefined8 param_1,long param_2)

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
    FUN_1029c80f0();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112ed49e8) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1029c90b0);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112ed49f0);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112ed4ad8);
    *(long **)(unaff_x20 + _DAT_112ed4ad8) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 1029c90b0; end: 1029c90d7; -[SCSCGroupExternalShareScopedServicesSaberEntryPoint begin] */

void FUN_1029c90b0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1029c8fd8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1029c90d8; end: 1029c924f;  */

/* WARNING: Possible PIC construction at 0x0001029c9140: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029c91d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029c9144) */
/* WARNING: Removing unreachable block (ram,0x0001029c91dc) */
/* WARNING: Removing unreachable block (ram,0x0001029c91f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029c90d8(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112ed4ad8);
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



/* Entry: 1029c9250; end: 1029c9257;  */

void FUN_1029c9250(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1029c9258; end: 1029c928b; -[SCSCGroupExternalShareScopedServicesSaberEntryPoint end] */

void FUN_1029c9258(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1029c90d8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1029c928c; end: 1029c93ab;  */

void FUN_1029c928c(long param_1,long param_2,long param_3)

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
                        "GroupExternalShareScopeGraphBridge/SCSCGroupExternalShareScopedServicesSaberEntryPoint.swift"
                        ,0x5c,2,0x2d,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1029c93ac);
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



/* Entry: 1029c93ac; end: 1029c9457; -[SCSCGroupExternalShareScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1029c93ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1029c928c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1029c9458; end: 1029c94b7; -[SCSCGroupExternalShareScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029c9458(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ed4ad0,0);
  *(undefined8 *)(param_1 + _DAT_112ed4ad8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1029c94b8; end: 1029c94eb;  */

void FUN_1029c94b8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1029c94ec; end: 1029c9523; -[SCSCGroupExternalShareScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029c94ec(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ed4ad0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ed4ad8));
  return;
}



/* Entry: 1029c9524; end: 1029c9543;  */

void FUN_1029c9524(void)

{
  func_0x000107c61168(&PTR_PTR_11287a018);
  return;
}



/* Entry: 1029c9544; end: 1029c997b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1029c9544(undefined8 param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  puVar3 = auStack_50;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ed4b08) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ed4b10) = param_3;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_3);
  lVar2 = param_2;
  func_0x000107c44514();
  func_0x000107c61180();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112ed4b18) = lVar2;
    func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029c9614);
  (*pcVar1)();
}



/* Entry: 1029c997c; end: 1029c99c7;  */

void FUN_1029c997c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1029c99c8; end: 1029c99e3;  */

void FUN_1029c99c8(long param_1,long param_2)

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



/* Entry: 1029c99e4; end: 1029c9bd7;  */

void FUN_1029c99e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = param_2;
  func_0x000107c5faec(param_3);
  func_0x000107c615f0(param_2);
  (*pcVar1)();
  func_0x000107c615e8(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 1029c9bd8; end: 1029c9c0b;  */

void FUN_1029c9bd8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1029c9c0c; end: 1029c9c73; -[_TtC18GroupExternalShare28GroupExternalShareEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001029c9c28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029c9c2c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029c9c0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ed4b08));
  return;
}



/* Entry: 1029c9c74; end: 1029c9c7b;  */

undefined8 FUN_1029c9c74(void)

{
  return 0;
}



/* Entry: 1029c9c7c; end: 1029c9c83; -[_TtC18GroupExternalShare28GroupExternalShareEntryPoint handleShareDestination:standardExternalContentShareScope:] */

undefined8 FUN_1029c9c7c(void)

{
  return 0;
}



/* Entry: 1029c9c84; end: 1029c9d4f; -[_TtC18GroupExternalShare28GroupExternalShareEntryPoint shareSheetDismissedWithShareDestination:] */

void FUN_1029c9c84(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x0001029c9cac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1029c9d50; end: 1029c9d6f;  */

void FUN_1029c9d50(void)

{
  func_0x000107c61168(&PTR_PTR_11287a0d8);
  return;
}



/* Entry: 1029c9d70; end: 1029c9ec7;  */

void FUN_1029c9d70(long param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar4 = &puStack_80;
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar5 = param_2;
  func_0x000107c44520();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar7 = 0;
    uVar5 = 0;
  }
  else {
    lVar7 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
  }
  pcVar1 = "handleSuccess(deeplinkURL:groupName:)";
  func_0x0001000c10c0("handleSuccess(deeplinkURL:groupName:)");
  func_0x000107c61180();
  puVar2 = &UNK_11057da88;
  func_0x000107c613fc(&UNK_11057da88,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,uVar6);
  puVar3 = &UNK_11057db68;
  func_0x000107c613fc(&UNK_11057db68,0x38,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_2;
  *(undefined8 *)(puVar3 + 0x20) = param_3;
  *(long *)(puVar3 + 0x28) = lVar7;
  *(undefined8 *)(puVar3 + 0x30) = uVar5;
  pcStack_60 = FUN_1029c9ee8;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_11057db80;
  puStack_58 = puVar3;
  func_0x000107c60bc4(&puStack_80);
  puVar2 = puStack_58;
  func_0x000107c61434(uVar5);
  func_0x000107c61434(param_3);
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c615e8(pcVar1);
  func_0x000107c6142c(uVar5);
  return;
}



/* Entry: 1029c9ec8; end: 1029c9ee7;  */

void FUN_1029c9ec8(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1029c9ee8; end: 1029ca22b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029c9ee8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined8 uVar14;
  long unaff_x20;
  long lVar15;
  ulong uVar16;
  undefined1 auStack_a8 [24];
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar8 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar6 = *(ulong *)(unaff_x20 + 0x28);
  uVar16 = *(ulong *)(unaff_x20 + 0x30);
  puVar12 = auStack_a8;
  func_0x000107c61428(lVar8 + 0x10,puVar12,0,0);
  uVar4 = lVar8 + 0x10;
  func_0x000107c61618();
  if (uVar4 == 0) {
    return;
  }
  if (uVar16 != 0) {
    uVar7 = uVar6 & 0xffffffffffff;
    if ((uVar16 & 0x2000000000000000) != 0) {
      uVar7 = uVar16 >> 0x38 & 0xf;
    }
    if (uVar7 != 0) {
      uVar5 = uVar16;
      func_0x000107c61434();
      func_0x000106562a44();
      func_0x000107c61180();
      if (uVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1029ca22c);
        (*pcVar3)();
      }
      uVar7 = uVar5;
      func_0x000107c5faec();
      func_0x000107c61170(uVar5);
      lVar8 = 0x112d36008;
      func_0x0001000285a8(0x112d36008,&UNK_10d900720);
      func_0x000107c613fc();
      *(undefined8 *)(lVar8 + 0x18) = 4;
      *(undefined8 *)(lVar8 + 0x10) = 2;
      puVar10 = PTR___sSSN_11034da80;
      *(undefined **)(lVar8 + 0x38) = PTR___sSSN_11034da80;
      lVar15 = lVar8;
      func_0x00010075bbf0();
      *(ulong *)(lVar8 + 0x20) = uVar6;
      *(ulong *)(lVar8 + 0x28) = uVar16;
      *(undefined **)(lVar8 + 0x60) = puVar10;
      *(long *)(lVar8 + 0x68) = lVar15;
      *(long *)(lVar8 + 0x40) = lVar15;
      *(undefined8 *)(lVar8 + 0x48) = uVar2;
      *(undefined8 *)(lVar8 + 0x50) = uVar1;
      func_0x000107c61434(uVar1);
      goto LAB_1029ca05c;
    }
  }
  uVar6 = uVar4;
  func_0x000106562a5c();
  func_0x000107c61180();
  if (uVar6 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1029ca228);
    (*pcVar3)();
  }
  uVar7 = uVar6;
  func_0x000107c5faec();
  func_0x000107c61170(uVar6);
  lVar8 = 0x112d36008;
  func_0x0001000285a8(0x112d36008,&UNK_10d900720);
  func_0x000107c613fc();
  *(undefined8 *)(lVar8 + 0x18) = 2;
  *(undefined8 *)(lVar8 + 0x10) = 1;
  *(undefined **)(lVar8 + 0x38) = PTR___sSSN_11034da80;
  lVar15 = lVar8;
  func_0x00010075bbf0();
  *(long *)(lVar8 + 0x40) = lVar15;
  *(undefined8 *)(lVar8 + 0x20) = uVar2;
  *(undefined8 *)(lVar8 + 0x28) = uVar1;
  func_0x000107c61434(uVar1);
LAB_1029ca05c:
  puVar13 = puVar12;
  func_0x000107c5fb00(uVar7,puVar12,lVar8);
  func_0x000107c6142c(puVar12);
  puVar9 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar10 = &UNK_11057dbb8;
  uVar14 = 0x30;
  func_0x000107c613fc(&UNK_11057dbb8,0x30,7);
  *(ulong *)(puVar10 + 0x10) = uVar7;
  *(undefined1 **)(puVar10 + 0x18) = puVar13;
  *(undefined8 *)(puVar10 + 0x20) = uVar2;
  *(undefined8 *)(puVar10 + 0x28) = uVar1;
  pcStack_70 = FUN_1029ca22c;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_101325a80;
  puStack_78 = &UNK_11057dbd0;
  ppuVar11 = &puStack_90;
  puStack_68 = puVar10;
  func_0x000107c60bc4(ppuVar11);
  puVar10 = puStack_68;
  func_0x000107c61434(uVar1);
  func_0x000107c61574(puVar10);
  func_0x000107c3e4fc(puVar9);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar11);
  lVar15 = *(long *)(*(long *)(uVar4 + _DAT_112ed4b08) + _DAT_112f45f50);
  lVar8 = lVar15;
  func_0x000107c615f0();
  func_0x00010011df08();
  func_0x000107c61180();
  if (lVar8 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar14);
  }
  puVar10 = PTR_PTR_1126b24a0;
  func_0x000107c610f8(PTR_PTR_1126b24a0);
  func_0x000107c61174(puVar9);
  func_0x000107c48f98(puVar10);
  func_0x000107c615e8(lVar15);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(lVar8);
  func_0x000107c42c1c(*(undefined8 *)(uVar4 + _DAT_112ed4b10));
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar4);
  return;
}



/* Entry: 1029ca22c; end: 1029ca24f;  */

undefined * FUN_1029ca22c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  long extraout_x8;
  undefined1 *puVar8;
  long unaff_x20;
  undefined1 *puVar9;
  long lVar10;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar5 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = &stack0xffffffffffffffc0 + -extraout_x8;
  puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x000107c610f8();
  func_0x000107c5fadc(uVar4,uVar2);
  func_0x000107c48af4();
  func_0x000107c61170(uVar4);
  if (puVar3 == (undefined *)0x0) {
    lVar5 = 0;
    func_0x000107c5ede0();
  }
  else {
    func_0x000107c5edb4(puVar8,puVar3);
    func_0x000107c61170(puVar3);
    lVar5 = 0;
    func_0x000107c5ede0();
  }
  lVar10 = *(long *)(lVar5 + -8);
  (**(code **)(lVar10 + 0x38))(puVar8,puVar3 == (undefined *)0x0,1,lVar5);
  func_0x000107c5fadc(uVar6,uVar1);
  func_0x000107c5ede0(0);
  puVar7 = puVar8;
  (**(code **)(lVar10 + 0x30))(puVar8,1,lVar5);
  puVar9 = (undefined1 *)0x0;
  if ((int)puVar7 != 1) {
    func_0x000107c5ed90();
    (**(code **)(lVar10 + 8))(puVar8,lVar5);
    puVar9 = puVar7;
  }
  puVar3 = PTR_PTR_1126b0800;
  func_0x000107c610f8(PTR_PTR_1126b0800);
  func_0x000107c48cbc();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(puVar9);
  return puVar3;
}



/* Entry: 1029ca250; end: 1029ca2bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029ca250(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1029ca644();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112ed4b50) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1029ca2bc; end: 1029ca327;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029ca2bc(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ed4b50) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1029ca328; end: 1029ca387; -[_TtC45ShortcutsCarouselScopedFactoryServiceProvider31ShortcutsCarouselScopedServices init] */

void FUN_1029ca328(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ShortcutsCarouselScopedFactoryServiceProvider.ShortcutsCarouselScopedServices"
                      ,0x4d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029ca354);
  (*pcVar1)();
}



/* Entry: 1029ca388; end: 1029ca397; -[_TtC45ShortcutsCarouselScopedFactoryServiceProvider31ShortcutsCarouselScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029ca388(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ed4b50));
  return;
}



/* Entry: 1029ca398; end: 1029ca403;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029ca398(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11057ddc8;
  func_0x000107c613fc(&UNK_11057ddc8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_1029ca6dc,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1029ca404; end: 1029ca49f;  */

void FUN_1029ca404(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_11057dcd8;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_11057dcd8;
  return;
}



/* Entry: 1029ca4a0; end: 1029ca4d7;  */

void FUN_1029ca4a0(long *param_1)

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



/* Entry: 1029ca4d8; end: 1029ca4df;  */

undefined8 FUN_1029ca4d8(void)

{
  return 0x1b;
}



/* Entry: 1029ca4e0; end: 1029ca613;  */

void FUN_1029ca4e0(undefined8 *param_1)

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
  puVar1 = &UNK_11057ddf0;
  func_0x000107c613fc(&UNK_11057ddf0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1029ca6b4;
  func_0x00010058fa64(FUN_1029ca6b4,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1029ca614; end: 1029ca643;  */

undefined ** FUN_1029ca614(void)

{
  return &PTR_DAT_112fb4b10;
}



/* Entry: 1029ca644; end: 1029ca663;  */

void FUN_1029ca644(void)

{
  func_0x000107c61168(&PTR_PTR_11287a1a8);
  return;
}



/* Entry: 1029ca664; end: 1029ca6b3;  */

undefined1  [16] FUN_1029ca664(void)

{
  return ZEXT816(0x11057dd28);
}



/* Entry: 1029ca6b4; end: 1029ca6db;  */

void FUN_1029ca6b4(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 1029ca6dc; end: 1029ca6df;  */

void FUN_1029ca6dc(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1029ca6e0; end: 1029ca7cf;  */

/* WARNING: Possible PIC construction at 0x0001029ca790: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029ca7a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029ca7b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029ca7a4) */
/* WARNING: Removing unreachable block (ram,0x0001029ca794) */
/* WARNING: Removing unreachable block (ram,0x0001029ca7b4) */

void FUN_1029ca6e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = &UNK_11057de78;
  func_0x000107c613fc(&UNK_11057de78,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  uVar2 = 0x112ed4bc0;
  func_0x0001000285a8(0x112ed4bc0,&UNK_10dafe020);
  func_0x000107c613fc();
  pcVar3 = FUN_1029cabf8;
  func_0x0001000841fc(FUN_1029cabf8,puVar1,uVar2);
  func_0x000100084214(&UNK_10dafdff0,0x2d,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1029ca7d0; end: 1029ca7ef;  */

/* WARNING: Possible PIC construction at 0x0001029ca790: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029ca7a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029ca7b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029ca7a4) */
/* WARNING: Removing unreachable block (ram,0x0001029ca794) */
/* WARNING: Removing unreachable block (ram,0x0001029ca7b4) */

void FUN_1029ca7d0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  code *pcVar8;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  puVar6 = &UNK_11057de78;
  func_0x000107c613fc(&UNK_11057de78,0x40,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar1;
  *(undefined8 *)(puVar6 + 0x18) = uVar3;
  *(undefined8 *)(puVar6 + 0x20) = uVar7;
  *(undefined8 *)(puVar6 + 0x28) = uVar4;
  *(undefined8 *)(puVar6 + 0x30) = uVar2;
  *(undefined8 *)(puVar6 + 0x38) = uVar5;
  uVar7 = 0x112ed4bc0;
  func_0x0001000285a8(0x112ed4bc0,&UNK_10dafe020);
  func_0x000107c613fc();
  pcVar8 = FUN_1029cabf8;
  func_0x0001000841fc(FUN_1029cabf8,puVar6,uVar7);
  func_0x000100084214(&UNK_10dafdff0,0x2d,2);
  *param_1 = pcVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1029ca7f0; end: 1029cabab;  */

void FUN_1029ca7f0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_68;
  
  uVar10 = *param_2;
  func_0x0001000285a8(0x112ed4bc8,&UNK_10dafe028);
  puVar1 = &uStack_68;
  uStack_68 = uVar10;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_1029cbcec();
  func_0x000100082720("SCSendToListsEditScopeExposerSubjectServiceProvider",0x33,2);
  puVar3 = puVar2;
  FUN_1029cbd78();
  func_0x000100082720("SCSendToListsEditScopeExposerObservableServiceProvider",0x36,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_1029ca4a0;
  func_0x0001000823a8(FUN_1029ca4a0,0);
  func_0x000100082720("ShortcutsCarouselScopedServicesCleanupRelayServiceProvider",0x3a,2);
  func_0x0001000285a8(0x112ed4bd0,&UNK_10dafe040);
  puVar5 = &UNK_11057dea0;
  func_0x000107c613fc(&UNK_11057dea0,0x50,7);
  *(undefined8 **)(puVar5 + 0x10) = puVar1;
  *(undefined8 *)(puVar5 + 0x18) = param_3;
  *(undefined8 *)(puVar5 + 0x20) = param_4;
  *(undefined8 *)(puVar5 + 0x28) = param_5;
  *(undefined8 *)(puVar5 + 0x30) = param_6;
  *(undefined8 *)(puVar5 + 0x38) = param_7;
  *(undefined8 *)(puVar5 + 0x40) = param_8;
  *(undefined8 **)(puVar5 + 0x48) = puVar3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(puVar3);
  uVar10 = 0x1029cac08;
  func_0x0001000823a8(0x1029cac08,puVar5);
  func_0x000100082720("ShortcutsCarouselEntryPointWrapperServiceProvider",0x31,2);
  puVar6 = puVar2;
  FUN_1029cbba0();
  func_0x000100082720("ShortcutsCarouselScopeGraphBridgeServicesServiceProvider",0x38,2);
  func_0x0001000285a8(0x112ed4bd8,&UNK_10dafe030);
  puVar5 = &UNK_11057dec8;
  func_0x000107c613fc(&UNK_11057dec8,0x30,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar10;
  *(undefined8 **)(puVar5 + 0x18) = puVar1;
  *(undefined8 **)(puVar5 + 0x20) = puVar6;
  *(code **)(puVar5 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(puVar6);
  func_0x000107c6157c(pcVar4);
  uVar7 = 0x1029cac1c;
  func_0x0001000823a8(0x1029cac1c,puVar5);
  func_0x000100082720("ShortcutsCarouselScopeInitializationPluginRegistryServiceProvider",0x41,2);
  func_0x0001000285a8(0x112ed4b58,&UNK_10dafdde0);
  func_0x000107c6157c(uVar7);
  uVar8 = 0x1029cac28;
  func_0x0001000823a8(0x1029cac28,uVar7);
  func_0x000100082720("ShortcutsCarouselScopeInitializationServiceProvider",0x33,2);
  func_0x0001000285a8(0x112ed4b48,&UNK_10dafddd0);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x1029cac30;
  func_0x0001000823a8(0x1029cac30,uVar8);
  func_0x000100082720("ShortcutsCarouselScopedServicesServiceProvider",0x2e,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar5 = &UNK_11057def0;
  func_0x000107c613fc(&UNK_11057def0,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar9;
  *(code **)(puVar5 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar9 = 0x1029cac38;
  func_0x0001000823a8(0x1029cac38,puVar5);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(uVar7);
  func_0x000107c61574(uVar8);
  func_0x000100082720("ShortcutsCarouselScopeEntryPointProvider",0x28,2);
  *param_1 = uVar9;
  return;
}



/* Entry: 1029cabac; end: 1029cabf7;  */

void FUN_1029cabac(void)

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



/* Entry: 1029cabf8; end: 1029cac3f;  */

void FUN_1029cabf8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  code *pcVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x20;
  undefined8 uVar13;
  undefined8 uStack_68;
  
  uVar8 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar13 = *param_2;
  func_0x0001000285a8(0x112ed4bc8,&UNK_10dafe028);
  puVar3 = &uStack_68;
  uStack_68 = uVar13;
  func_0x0001000838ec();
  puVar4 = puVar3;
  FUN_1029cbcec();
  func_0x000100082720("SCSendToListsEditScopeExposerSubjectServiceProvider",0x33,2);
  puVar5 = puVar4;
  FUN_1029cbd78();
  func_0x000100082720("SCSendToListsEditScopeExposerObservableServiceProvider",0x36,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar6 = FUN_1029ca4a0;
  func_0x0001000823a8(FUN_1029ca4a0,0);
  func_0x000100082720("ShortcutsCarouselScopedServicesCleanupRelayServiceProvider",0x3a,2);
  func_0x0001000285a8(0x112ed4bd0,&UNK_10dafe040);
  puVar7 = &UNK_11057dea0;
  func_0x000107c613fc(&UNK_11057dea0,0x50,7);
  *(undefined8 **)(puVar7 + 0x10) = puVar3;
  *(undefined8 *)(puVar7 + 0x18) = uVar8;
  *(undefined8 *)(puVar7 + 0x20) = uVar12;
  *(undefined8 *)(puVar7 + 0x28) = uVar10;
  *(undefined8 *)(puVar7 + 0x30) = uVar1;
  *(undefined8 *)(puVar7 + 0x38) = uVar11;
  *(undefined8 *)(puVar7 + 0x40) = uVar2;
  *(undefined8 **)(puVar7 + 0x48) = puVar5;
  func_0x000107c6157c(puVar3);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(uVar12);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar11);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(puVar5);
  uVar8 = 0x1029cac08;
  func_0x0001000823a8(0x1029cac08,puVar7);
  func_0x000100082720("ShortcutsCarouselEntryPointWrapperServiceProvider",0x31,2);
  puVar9 = puVar4;
  FUN_1029cbba0();
  func_0x000100082720("ShortcutsCarouselScopeGraphBridgeServicesServiceProvider",0x38,2);
  func_0x0001000285a8(0x112ed4bd8,&UNK_10dafe030);
  puVar7 = &UNK_11057dec8;
  func_0x000107c613fc(&UNK_11057dec8,0x30,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar8;
  *(undefined8 **)(puVar7 + 0x18) = puVar3;
  *(undefined8 **)(puVar7 + 0x20) = puVar9;
  *(code **)(puVar7 + 0x28) = pcVar6;
  func_0x000107c6157c(puVar3);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(puVar9);
  func_0x000107c6157c(pcVar6);
  uVar10 = 0x1029cac1c;
  func_0x0001000823a8(0x1029cac1c,puVar7);
  func_0x000100082720("ShortcutsCarouselScopeInitializationPluginRegistryServiceProvider",0x41,2);
  func_0x0001000285a8(0x112ed4b58,&UNK_10dafdde0);
  func_0x000107c6157c(uVar10);
  uVar11 = 0x1029cac28;
  func_0x0001000823a8(0x1029cac28,uVar10);
  func_0x000100082720("ShortcutsCarouselScopeInitializationServiceProvider",0x33,2);
  func_0x0001000285a8(0x112ed4b48,&UNK_10dafddd0);
  func_0x000107c6157c(uVar11);
  uVar12 = 0x1029cac30;
  func_0x0001000823a8(0x1029cac30,uVar11);
  func_0x000100082720("ShortcutsCarouselScopedServicesServiceProvider",0x2e,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar7 = &UNK_11057def0;
  func_0x000107c613fc(&UNK_11057def0,0x20,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar12;
  *(code **)(puVar7 + 0x18) = pcVar6;
  func_0x000107c6157c(pcVar6);
  uVar12 = 0x1029cac38;
  func_0x0001000823a8(0x1029cac38,puVar7);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(puVar9);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(uVar11);
  func_0x000100082720("ShortcutsCarouselScopeEntryPointProvider",0x28,2);
  *param_1 = uVar12;
  return;
}



/* Entry: 1029cac40; end: 1029cb0df;  */

void FUN_1029cac40(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
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
  FUN_1029cb258();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_70;
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  *(undefined8 *)(param_2 + 0x38) = uStack_88;
  *(undefined8 *)(param_2 + 0x40) = uStack_90;
  *(undefined8 *)(param_2 + 0x48) = uStack_98;
  func_0x0001000285a8(0x112e4f0b8,&UNK_10da4bc50);
  func_0x000107c610f8();
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
  func_0x000107c6157c(uStack_a0);
  func_0x00010017da58();
  puVar8 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar7);
  *(undefined **)(param_2 + 0x18) = puVar8;
  FUN_1029d0bb4(0);
  func_0x000107c610f8();
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(puVar8);
  uVar7 = uStack_68;
  func_0x000107c61174();
  uVar9 = uVar7;
  func_0x0001029cd4ac();
  *(undefined8 *)(param_2 + 0x10) = uVar9;
  func_0x000107c61174();
  FUN_1029cd928();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61574(uStack_a0);
  func_0x000107c61170(uVar9);
  *param_1 = param_2;
  return;
}



/* Entry: 1029cb0e0; end: 1029cb153;  */

void FUN_1029cb0e0(void)

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
  return;
}



/* Entry: 1029cb154; end: 1029cb15b;  */

undefined8 FUN_1029cb154(void)

{
  return 0x1b;
}



/* Entry: 1029cb15c; end: 1029cb1df;  */

void FUN_1029cb15c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1029cb298,param_2,FUN_1029cb29c,param_2,FUN_1029cb2c4,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1029cb1e0; end: 1029cb227;  */

undefined8 FUN_1029cb1e0(undefined8 param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  func_0x0001029cd8bc();
  func_0x000107c61574(uStack_28);
  return param_1;
}



/* Entry: 1029cb228; end: 1029cb257;  */

undefined ** FUN_1029cb228(void)

{
  return &PTR_DAT_112fb4b10;
}



/* Entry: 1029cb258; end: 1029cb277;  */

void FUN_1029cb258(void)

{
  func_0x000107c61168(&PTR_PTR_112ed4c48);
  return;
}



/* Entry: 1029cb278; end: 1029cb29b;  */

undefined1  [16] FUN_1029cb278(void)

{
  return ZEXT816(0x11057df48);
}



/* Entry: 1029cb29c; end: 1029cb2c3;  */

void FUN_1029cb29c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1029cb2c4; end: 1029cb2cb;  */

undefined8 FUN_1029cb2c4(void)

{
  undefined8 unaff_x20;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  func_0x0001029cd8bc();
  func_0x000107c61574(uStack_28);
  return unaff_x20;
}



/* Entry: 1029cb2cc; end: 1029cb307;  */

void FUN_1029cb2cc(undefined8 *param_1,undefined8 param_2)

{
  FUN_1029cb308();
  func_0x0001000a7f38("ShortcutsCarouselScopeInitializationPluginRegistryServiceProvider",0x41,2);
  *param_1 = param_2;
  return;
}



/* Entry: 1029cb308; end: 1029cb4f3;  */

void FUN_1029cb308(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_1106aff38;
  ppuVar4 = &PTR_DAT_112fb4b10;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_1);
  uVar2 = 0x112ed4ce0;
  func_0x0001000285a8(0x112ed4ce0,&UNK_10dafe1a8);
  func_0x0001000a6ee8(&UNK_11057df48,
                      "ShortcutsCarouselEntryPointWrapperScopeInitializationPluginKey",0x3e,2,
                      FUN_1029cb568,param_1,uVar2,&UNK_11057df48,&PTR_DAT_112ed4be0);
  func_0x000107c61574(param_1);
  puVar3 = &UNK_11057df98;
  func_0x000107c613fc(&UNK_11057df98,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_11057e198,"ShortcutsCarouselScopeGraphBridgeScopeInitializationPluginKey"
                      ,0x3d,2,FUN_1029cb570,puVar3,uVar2,&UNK_11057e198,&PTR_DAT_112ed4d78);
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_11057dfc0;
  func_0x000107c613fc(&UNK_11057dfc0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_11057dd68,"ShortcutsCarouselScopedServicesScopeInitializationPluginKey",
                      0x3b,2,FUN_1029cb658,puVar3,uVar2,&UNK_11057dd68,&PTR_DAT_112ed4b60);
  func_0x000107c61574(puVar3);
  uVar2 = 0x112ed4ce8;
  func_0x0001000285a8(0x112ed4ce8,&UNK_10dafe1b0);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  return;
}



/* Entry: 1029cb4f4; end: 1029cb567;  */

void FUN_1029cb4f4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x1029cb694;
  func_0x0001000823a8(0x1029cb694,param_3);
  func_0x000100082720("ShortcutsCarouselEntryPointWrapperScopeInitializationPluginProvider",0x43,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1029cb568; end: 1029cb56f;  */

void FUN_1029cb568(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x1029cb694;
  func_0x0001000823a8();
  func_0x000100082720("ShortcutsCarouselEntryPointWrapperScopeInitializationPluginProvider",0x43,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1029cb570; end: 1029cb5af;  */

void FUN_1029cb570(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1029cbe20(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("ShortcutsCarouselScopeGraphBridgeScopeInitializationPluginProvider",0x42,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1029cb5b0; end: 1029cb657;  */

void FUN_1029cb5b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11057dfe8;
  func_0x000107c613fc(&UNK_11057dfe8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_1029cb68c;
  func_0x0001000823a8(FUN_1029cb68c,puVar1);
  func_0x000100082720("ShortcutsCarouselScopedServicesScopeInitializationPluginProvider",0x40,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 1029cb658; end: 1029cb65f;  */

void FUN_1029cb658(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_11057dfe8;
  func_0x000107c613fc(&UNK_11057dfe8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_1029cb68c;
  func_0x0001000823a8(FUN_1029cb68c,puVar3);
  func_0x000100082720("ShortcutsCarouselScopedServicesScopeInitializationPluginProvider",0x40,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 1029cb660; end: 1029cb68b;  */

void FUN_1029cb660(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1029cb68c; end: 1029cb69b;  */

void FUN_1029cb68c(undefined8 *param_1)

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
  puVar1 = &UNK_11057ddf0;
  func_0x000107c613fc(&UNK_11057ddf0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1029ca6b4;
  func_0x00010058fa64(FUN_1029ca6b4,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1029cb69c; end: 1029cb777;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1029cb69c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_70 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar3 = auStack_70;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_1029cbab0();
  if (lVar2 != 0) {
    func_0x000100083b20(&uStack_58);
    uStack_60 = param_2;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uStack_58);
    *(long *)(unaff_x20 + _DAT_112ed4cf0) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112ed4cf8) = param_3;
    func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029cb778);
  (*pcVar1)();
}



/* Entry: 1029cb778; end: 1029cb7d7; -[_TtC33ShortcutsCarouselScopeGraphBridge48ShortcutsCarouselScopeGraphBridgeSaberEntryPoint init] */

void FUN_1029cb778(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ShortcutsCarouselScopeGraphBridge.ShortcutsCarouselScopeGraphBridgeSaberEntryPoint"
                      ,0x52,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029cb7a4);
  (*pcVar1)();
}



/* Entry: 1029cb7d8; end: 1029cb80f; -[_TtC33ShortcutsCarouselScopeGraphBridge48ShortcutsCarouselScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001029cb7f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029cb7f8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029cb7d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ed4cf0));
  return;
}



/* Entry: 1029cb810; end: 1029cb837;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029cb810(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112ed4cf8),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112ed4cf0));
  return;
}



/* Entry: 1029cb838; end: 1029cb857;  */

void FUN_1029cb838(void)

{
  func_0x000107c61168(&PTR_PTR_11287a268);
  return;
}



/* Entry: 1029cb858; end: 1029cb8df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1029cb858(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ed4d28) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112ed4d30);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1029cb8e0);
  (*pcVar2)();
}



/* Entry: 1029cb8e0; end: 1029cb9c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1029cb8e0(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ed4d28);
  *(undefined **)(unaff_x20 + _DAT_112ed4d28) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ed4d30);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112ed4d30))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_11057e0b8;
  func_0x000107c613fc(&UNK_11057e0b8,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x1029cb9cc,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 1029cb9c8; end: 1029cb9d3;  */

void FUN_1029cb9c8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1029cb9d4; end: 1029cba33; -[_TtC33ShortcutsCarouselScopeGraphBridge46ShortcutsCarouselScopedServicesSaberEntryPoint init] */

void FUN_1029cb9d4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ShortcutsCarouselScopeGraphBridge.ShortcutsCarouselScopedServicesSaberEntryPoint"
                      ,0x50,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029cba00);
  (*pcVar1)();
}



/* Entry: 1029cba34; end: 1029cba6b; -[_TtC33ShortcutsCarouselScopeGraphBridge46ShortcutsCarouselScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029cba34(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ed4d30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ed4d28));
  return;
}



/* Entry: 1029cba6c; end: 1029cba6f;  */

void FUN_1029cba6c(void)

{
  return;
}



/* Entry: 1029cba70; end: 1029cba8f;  */

void FUN_1029cba70(void)

{
  FUN_1029cb8e0();
  return;
}



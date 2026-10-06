/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100addc74; end: 100addd43;  */

undefined8 FUN_100addc74(void)

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
  
  func_0x000107c61428(0x112fb50d8,&uStack_40,0x20,0);
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
    FUN_10006e7f4(&uStack_40);
    uStack_68 = 0;
  }
  else {
    FUN_10035c94c();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 100addd44; end: 100adddc3; -[SCLegacyContainerViewControllerServiceSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100addd44(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fb51b8,0);
  func_0x000107c61614(param_1 + _DAT_112fb51c0,0);
  *(undefined8 *)(param_1 + _DAT_112fb51c8) = 0;
  *(undefined8 *)(param_1 + _DAT_112fb51d0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100adddc4; end: 100adde6f; -[SCLegacyContainerViewControllerServiceSaberEntryPoint setValue:forIvarName:] */

void FUN_100adddc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100adde70(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100adde70; end: 100ade073;  */

void FUN_100adde70(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd7) || (param_3 != -0x7ffffffef0e85b50)) {
      uVar2 = 0xd000000000000029;
      func_0x000107c605b8(0xd000000000000029,0x800000010f17a4b0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0xd00000000000002b;
        if (((param_2 != -0x2fffffffffffffd5) || (param_3 != -0x7ffffffef0e85b20)) &&
           (func_0x000107c605b8(0xd00000000000002b,0x800000010f17a4e0,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "ShuUserNavigationScopeGraphBridge/SCLegacyContainerViewControllerServiceSaberEntryPoint.swift"
                              ,0x5d,2,0x36,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100ade074);
          (*pcVar1)();
        }
        FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c55b90();
        goto LAB_100addefc;
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c59298();
  }
LAB_100addefc:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100ade074; end: 100ade07f; -[SCLegacyContainerViewControllerServiceSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ade074(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fb51b8;
  func_0x000107c61428(param_1 + _DAT_112fb51b8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ade080; end: 100ade0d3;  */

void FUN_100ade080(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ade0d4; end: 100ade0df; -[SCLegacyContainerViewControllerServiceSaberEntryPoint setShuUserNavigationScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ade0d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fb51c0;
  func_0x000107c61428(param_1 + _DAT_112fb51c0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ade0e0; end: 100ade143; -[SCLegacyContainerViewControllerServiceSaberEntryPoint setLegacyContainerViewControllerServiceExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ade0e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fb51c8;
  func_0x000107c61428(param_1 + _DAT_112fb51c8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100ade144; end: 100ade16b; -[SCLegacyContainerViewControllerServiceSaberEntryPoint begin] */

void FUN_100ade144(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100ade16c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100ade16c; end: 100ade2ef;  */

/* WARNING: Possible PIC construction at 0x000100ade274: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ade284: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ade2c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ade288) */
/* WARNING: Removing unreachable block (ram,0x000100ade278) */
/* WARNING: Removing unreachable block (ram,0x000100ade2cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ade16c(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  lVar3 = unaff_x20;
  func_0x000107c5af3c();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c4ad20();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      lVar4 = 0;
      FUN_100ade394();
      lVar5 = lVar4;
      func_0x000107c610f8();
      uVar7 = *(undefined8 *)(lVar3 + _DAT_112fb50e8);
      *(undefined8 *)(lVar5 + _DAT_112fb4cb8) = uVar7;
      *(long *)(lVar5 + _DAT_112fb4cc0) = unaff_x20;
      puVar1 = PTR_s_init_1125d9248;
      lStack_70 = lVar5;
      lStack_68 = lVar4;
      func_0x000107c61174(unaff_x20);
      func_0x000107c6157c(uVar7);
      plVar6 = &lStack_70;
      func_0x000107c61154(plVar6,puVar1);
      uVar7 = *(undefined8 *)((long)plVar6 + _DAT_112fb4cc0);
      FUN_100083b20(&uStack_78);
      func_0x000107c42c20(uVar7);
      func_0x000107c615e8(uStack_78);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 100ade2f0; end: 100ade2fb; -[SCLegacyContainerViewControllerServiceSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ade2f0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fb51b8;
  func_0x000107c61428(param_1 + _DAT_112fb51b8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ade2fc; end: 100ade33f;  */

void FUN_100ade2fc(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100ade340; end: 100ade34b; -[SCLegacyContainerViewControllerServiceSaberEntryPoint shuUserNavigationScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ade340(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fb51c0;
  func_0x000107c61428(param_1 + _DAT_112fb51c0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ade34c; end: 100ade393; -[SCLegacyContainerViewControllerServiceSaberEntryPoint legacyContainerViewControllerServiceExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ade34c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fb51c8;
  func_0x000107c61428(param_1 + _DAT_112fb51c8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100ade394; end: 100ade3b3;  */

void FUN_100ade394(void)

{
  func_0x000107c61168(&PTR_PTR_112904988);
  return;
}



/* Entry: 100ade3b4; end: 100ade42b;  */

void FUN_100ade3b4(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_11095c2e0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    FUN_10007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 100ade42c; end: 100ade433;  */

void FUN_100ade42c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 100ade434; end: 100ade46f;  */

void FUN_100ade434(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100ade470; end: 100ade50b;  */

/* WARNING: Possible PIC construction at 0x000100ade4d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ade4d4) */

void FUN_100ade470(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *param_1;
  *param_1 = param_2;
  if (lVar4 == 0) {
    return;
  }
  if (*(long *)(lVar4 + 0x70) != 0) {
    plVar1 = *(long **)(lVar4 + 0x68);
    plVar2 = *(long **)(*(long *)(lVar4 + 0x60) + 8);
    lVar3 = *plVar1;
    *(long **)(lVar3 + 8) = plVar2;
    *plVar2 = lVar3;
    *(undefined8 *)(lVar4 + 0x70) = 0;
    if (plVar1 != (long *)(lVar4 + 0x60)) {
      (**(code **)plVar1[2])();
      goto code_r0x000107c60e14;
    }
  }
  func_0x000107c60ca0(lVar4 + 0x48);
  func_0x000107c60d94(lVar4);
code_r0x000107c60e14:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 100ade50c; end: 100ade52f;  */

undefined8 FUN_100ade50c(undefined8 param_1)

{
  FUN_100ade470(param_1,0);
  return param_1;
}



/* Entry: 100ade530; end: 100ade537;  */

void FUN_100ade530(void)

{
  return;
}



/* Entry: 100ade538; end: 100ade5f7;  */

void FUN_100ade538(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  lVar1 = *param_1;
  if ((lVar1 != 0) && (FUN_10054c3a4(), (int)lVar1 != 0)) {
    lVar2 = *param_1;
    FUN_10054c7ec();
    FUN_1005ecf0c(&lStack_40);
    FUN_10054c8f4(lVar2,1);
    lVar1 = lStack_30;
    lStack_28 = lVar2;
    if ((char)param_1[5] == '\x01') {
      func_0x0001067e0554(param_1 + 1,&lStack_40);
    }
    else {
      param_1[2] = lStack_38;
      param_1[1] = lStack_40;
      lStack_38 = 0;
      lStack_30 = 0;
      lStack_40 = 0;
      param_1[3] = lVar1;
      param_1[4] = lVar2;
      *(undefined1 *)(param_1 + 5) = 1;
    }
    func_0x0001067e0624();
    return;
  }
  plVar3 = param_1 + 1;
  if ((char)param_1[5] == '\x01') {
    func_0x000107c60ca0();
    *(undefined1 *)(plVar3 + 4) = 0;
  }
  return;
}



/* Entry: 100ade5f8; end: 100ade61b;  */

void FUN_100ade5f8(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    func_0x000107c60ca0();
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return;
}



/* Entry: 100ade61c; end: 100ade627;  */

void FUN_100ade61c(void)

{
  if (*(char *)(((ulong)&stack0x00000020 | 8) + 0x20) == '\x01') {
    func_0x000107c60ca0();
  }
  return;
}



/* Entry: 100ade628; end: 100ade647;  */

void FUN_100ade628(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    func_0x000107c60ca0();
  }
  return;
}



/* Entry: 100ade648; end: 100ade6b3;  */

undefined8 * FUN_100ade648(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  param_1[1] = 0;
  if (*(char *)(param_1 + 6) != '\0') {
    FUN_100ade5f8(param_1 + 2);
  }
  FUN_100ade628((ulong)&uStack_50 | 8);
  uVar1 = *param_1;
  *param_1 = 0;
  FUN_10054cac4(uVar1);
  FUN_100ade628(param_1 + 2);
  return param_1;
}



/* Entry: 100ade6b4; end: 100ade6e3;  */

void FUN_100ade6b4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  func_0x000107c60d88(uVar1);
  *(undefined8 *)(param_1 + 0x88) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(uVar1);
  return;
}



/* Entry: 100ade6e4; end: 100ade707;  */

void FUN_100ade6e4(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



/* Entry: 100ade708; end: 100ade773;  */

void FUN_100ade708(long param_1)

{
  func_0x00010055b12c();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100ade774; end: 100ade7f3; -[SCLegacyNavigationControllerServiceSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ade774(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fb5200,0);
  func_0x000107c61614(param_1 + _DAT_112fb5208,0);
  *(undefined8 *)(param_1 + _DAT_112fb5210) = 0;
  *(undefined8 *)(param_1 + _DAT_112fb5218) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100ade7f4; end: 100ade89f; -[SCLegacyNavigationControllerServiceSaberEntryPoint setValue:forIvarName:] */

void FUN_100ade7f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100ade8a0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100ade8a0; end: 100adeaa3;  */

void FUN_100ade8a0(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd7) || (param_3 != -0x7ffffffef0e85b50)) {
      uVar2 = 0xd000000000000029;
      func_0x000107c605b8(0xd000000000000029,0x800000010f17a4b0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        if ((param_2 != -0x2fffffffffffffd8) || (param_3 != -0x7ffffffef0e85a90)) {
          uVar2 = 0;
          func_0x000107c605b8(0xd000000000000028,0x800000010f17a570,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "ShuUserNavigationScopeGraphBridge/SCLegacyNavigationControllerServiceSaberEntryPoint.swift"
                                ,0x5a,2,0x36,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100adeaa4);
            (*pcVar1)();
          }
        }
        FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c55bac();
        goto LAB_100ade92c;
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c59298();
  }
LAB_100ade92c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100adeaa4; end: 100adeaaf; -[SCLegacyNavigationControllerServiceSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100adeaa4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fb5200;
  func_0x000107c61428(param_1 + _DAT_112fb5200,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100adeab0; end: 100adeb03;  */

void FUN_100adeab0(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100adeb04; end: 100adeb0f; -[SCLegacyNavigationControllerServiceSaberEntryPoint setShuUserNavigationScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100adeb04(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fb5208;
  func_0x000107c61428(param_1 + _DAT_112fb5208,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100adeb10; end: 100adeb73; -[SCLegacyNavigationControllerServiceSaberEntryPoint setLegacyNavigationControllerServiceExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100adeb10(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fb5210;
  func_0x000107c61428(param_1 + _DAT_112fb5210,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100adeb74; end: 100adeb9b; -[SCLegacyNavigationControllerServiceSaberEntryPoint begin] */

void FUN_100adeb74(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100adeb9c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100adeb9c; end: 100aded1f;  */

/* WARNING: Possible PIC construction at 0x000100adeca4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100adecb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100adecf8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100adecb8) */
/* WARNING: Removing unreachable block (ram,0x000100adeca8) */
/* WARNING: Removing unreachable block (ram,0x000100adecfc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100adeb9c(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  lVar3 = unaff_x20;
  func_0x000107c5af3c();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c4ad68();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      lVar4 = 0;
      FUN_100adedc4();
      lVar5 = lVar4;
      func_0x000107c610f8();
      uVar7 = *(undefined8 *)(lVar3 + _DAT_112fb50f0);
      *(undefined8 *)(lVar5 + _DAT_112fb4cf0) = uVar7;
      *(long *)(lVar5 + _DAT_112fb4cf8) = unaff_x20;
      puVar1 = PTR_s_init_1125d9248;
      lStack_70 = lVar5;
      lStack_68 = lVar4;
      func_0x000107c61174(unaff_x20);
      func_0x000107c6157c(uVar7);
      plVar6 = &lStack_70;
      func_0x000107c61154(plVar6,puVar1);
      uVar7 = *(undefined8 *)((long)plVar6 + _DAT_112fb4cf8);
      FUN_100083b20(&uStack_78);
      func_0x000107c42c20(uVar7);
      func_0x000107c615e8(uStack_78);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 100aded20; end: 100aded2b; -[SCLegacyNavigationControllerServiceSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100aded20(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fb5200;
  func_0x000107c61428(param_1 + _DAT_112fb5200,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100aded2c; end: 100aded6f;  */

void FUN_100aded2c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100aded70; end: 100aded7b; -[SCLegacyNavigationControllerServiceSaberEntryPoint shuUserNavigationScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100aded70(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fb5208;
  func_0x000107c61428(param_1 + _DAT_112fb5208,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100aded7c; end: 100adedc3; -[SCLegacyNavigationControllerServiceSaberEntryPoint legacyNavigationControllerServiceExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100aded7c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fb5210;
  func_0x000107c61428(param_1 + _DAT_112fb5210,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100adedc4; end: 100adede3;  */

void FUN_100adedc4(void)

{
  func_0x000107c61168(&PTR_PTR_112904a50);
  return;
}



/* Entry: 100adede4; end: 100adee1f;  */

long * FUN_100adede4(void)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long unaff_x20;
  
  plVar1 = (long *)(unaff_x20 + 0x10);
  plVar2 = *(long **)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  if (plVar2 == plVar1) {
    lVar3 = 0x20;
  }
  else {
    if (plVar2 == (long *)0x0) {
      return plVar1;
    }
    lVar3 = 0x28;
  }
  (**(code **)(*plVar2 + lVar3))(plVar2,0);
  return plVar1;
}



/* Entry: 100adee20; end: 100adee9f; -[SCSCMainTabNavigationServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100adee20(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fb5248,0);
  func_0x000107c61614(param_1 + _DAT_112fb5250,0);
  *(undefined8 *)(param_1 + _DAT_112fb5258) = 0;
  *(undefined8 *)(param_1 + _DAT_112fb5260) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100adeea0; end: 100adef4b; -[SCSCMainTabNavigationServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_100adeea0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100adef4c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100adef4c; end: 100adf14f;  */

void FUN_100adef4c(long param_1,long param_2,long param_3)

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
    uVar2 = 0xd000000000000029;
    if (((param_2 == -0x2fffffffffffffd7) && (param_3 == -0x7ffffffef0e85b50)) ||
       (func_0x000107c605b8(0xd000000000000029,0x800000010f17a4b0,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c59298();
    }
    else {
      if ((param_2 != -0x2fffffffffffffde) || (param_3 != -0x7ffffffef0e85a00)) {
        uVar2 = 0;
        func_0x000107c605b8(0xd000000000000022,0x800000010f17a600,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "ShuUserNavigationScopeGraphBridge/SCSCMainTabNavigationServicesSaberEntryPoint.swift"
                              ,0x54,2,0x36,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100adf150);
          (*pcVar1)();
        }
      }
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c5854c();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100adf150; end: 100adf15b; -[SCSCMainTabNavigationServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100adf150(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fb5248;
  func_0x000107c61428(param_1 + _DAT_112fb5248,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100adf15c; end: 100adf1af;  */

void FUN_100adf15c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100adf1b0; end: 100adf1bb; -[SCSCMainTabNavigationServicesSaberEntryPoint setShuUserNavigationScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100adf1b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fb5250;
  func_0x000107c61428(param_1 + _DAT_112fb5250,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100adf1bc; end: 100adf21f; -[SCSCMainTabNavigationServicesSaberEntryPoint setSCMainTabNavigationServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100adf1bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fb5258;
  func_0x000107c61428(param_1 + _DAT_112fb5258,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100adf220; end: 100adf247; -[SCSCMainTabNavigationServicesSaberEntryPoint begin] */

void FUN_100adf220(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100adf248();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100adf248; end: 100adf3cb;  */

/* WARNING: Possible PIC construction at 0x000100adf348: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100adf358: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100adf374: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100adf34c) */
/* WARNING: Removing unreachable block (ram,0x000100adf35c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100adf248(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c5af3c();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c50fa4();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_100adf470();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112fb5108);
        *(undefined8 *)(lVar2 + _DAT_112fb4d28) = uVar6;
        *(long *)(lVar2 + _DAT_112fb4d30) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112fb4d30);
        FUN_100083b20(&lStack_78);
        func_0x000107c42c20(uVar6);
        lVar2 = lStack_78;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 100adf3cc; end: 100adf3d7; -[SCSCMainTabNavigationServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100adf3cc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fb5248;
  func_0x000107c61428(param_1 + _DAT_112fb5248,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100adf3d8; end: 100adf41b;  */

void FUN_100adf3d8(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100adf41c; end: 100adf427; -[SCSCMainTabNavigationServicesSaberEntryPoint shuUserNavigationScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100adf41c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fb5250;
  func_0x000107c61428(param_1 + _DAT_112fb5250,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100adf428; end: 100adf46f; -[SCSCMainTabNavigationServicesSaberEntryPoint sCMainTabNavigationServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100adf428(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fb5258;
  func_0x000107c61428(param_1 + _DAT_112fb5258,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100adf470; end: 100adf48f;  */

void FUN_100adf470(void)

{
  func_0x000107c61168(&PTR_PTR_112904b18);
  return;
}



/* Entry: 100adf490; end: 100adf50f; -[SCSCNavigationServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100adf490(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fb5290,0);
  func_0x000107c61614(param_1 + _DAT_112fb5298,0);
  *(undefined8 *)(param_1 + _DAT_112fb52a0) = 0;
  *(undefined8 *)(param_1 + _DAT_112fb52a8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100adf510; end: 100adf5bb; -[SCSCNavigationServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_100adf510(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100adf5bc(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100adf5bc; end: 100adf7bf;  */

void FUN_100adf5bc(long param_1,long param_2,long param_3)

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
    uVar2 = 0xd000000000000029;
    if (((param_2 == -0x2fffffffffffffd7) && (param_3 == -0x7ffffffef0e85b50)) ||
       (func_0x000107c605b8(0xd000000000000029,0x800000010f17a4b0,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c59298();
    }
    else {
      if ((param_2 != -0x2fffffffffffffe5) || (param_3 != -0x7ffffffef0e85970)) {
        uVar2 = 0xd00000000000001b;
        func_0x000107c605b8(0xd00000000000001b,0x800000010f17a690,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "ShuUserNavigationScopeGraphBridge/SCSCNavigationServicesSaberEntryPoint.swift"
                              ,0x4d,2,0x36,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100adf7c0);
          (*pcVar1)();
        }
      }
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c586ac();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100adf7c0; end: 100adf7cb; -[SCSCNavigationServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100adf7c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fb5290;
  func_0x000107c61428(param_1 + _DAT_112fb5290,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100adf7cc; end: 100adf81f;  */

void FUN_100adf7cc(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100adf820; end: 100adf82b; -[SCSCNavigationServicesSaberEntryPoint setShuUserNavigationScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100adf820(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fb5298;
  func_0x000107c61428(param_1 + _DAT_112fb5298,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100adf82c; end: 100adf88f; -[SCSCNavigationServicesSaberEntryPoint setSCNavigationServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100adf82c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fb52a0;
  func_0x000107c61428(param_1 + _DAT_112fb52a0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100adf890; end: 100adf8b7; -[SCSCNavigationServicesSaberEntryPoint begin] */

void FUN_100adf890(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100adf8b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100adf8b8; end: 100adfa3b;  */

/* WARNING: Possible PIC construction at 0x000100adf9b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100adf9c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100adf9e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100adf9bc) */
/* WARNING: Removing unreachable block (ram,0x000100adf9cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100adf8b8(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c5af3c();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c51104();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_100adfae0();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112fb5118);
        *(undefined8 *)(lVar2 + _DAT_112fb4d60) = uVar6;
        *(long *)(lVar2 + _DAT_112fb4d68) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112fb4d68);
        FUN_100083b20(&lStack_78);
        func_0x000107c42c20(uVar6);
        lVar2 = lStack_78;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 100adfa3c; end: 100adfa47; -[SCSCNavigationServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100adfa3c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fb5290;
  func_0x000107c61428(param_1 + _DAT_112fb5290,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100adfa48; end: 100adfa8b;  */

void FUN_100adfa48(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100adfa8c; end: 100adfa97; -[SCSCNavigationServicesSaberEntryPoint shuUserNavigationScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100adfa8c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fb5298;
  func_0x000107c61428(param_1 + _DAT_112fb5298,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100adfa98; end: 100adfadf; -[SCSCNavigationServicesSaberEntryPoint sCNavigationServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100adfa98(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fb52a0;
  func_0x000107c61428(param_1 + _DAT_112fb52a0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100adfae0; end: 100adfaff;  */

void FUN_100adfae0(void)

{
  func_0x000107c61168(&PTR_PTR_112904be0);
  return;
}



/* Entry: 100adfb00; end: 100adfb07; +[SCContinueUserActivityHandlerConversationPluginEntryPoint context] */

undefined8 FUN_100adfb00(void)

{
  return 7;
}



/* Entry: 100adfb08; end: 100adfb0f; +[SCMainViewControllerRuntimeEntryPoint context] */

undefined8 FUN_100adfb08(void)

{
  return 3;
}



/* Entry: 100adfb10; end: 100adfb73; -[SCMainViewControllerRuntimeEntryPoint begin] */

void FUN_100adfb10(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b2930;
  func_0x000107c40efc();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c4a41c();
  func_0x000107c61170(puVar1);
  if (((ulong)puVar2 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdd35f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__beginImmediately_112552718);
  return;
}



/* Entry: 100adfb74; end: 100adfbdf; -[SCSpecengUserNavigationScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100adfb74(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fb5820,0);
  *(undefined8 *)(param_1 + _DAT_112fb5828) = 0;
  *(undefined8 *)(param_1 + _DAT_112fb5830) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100adfbe0; end: 100adfc8b; -[SCSpecengUserNavigationScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_100adfbe0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100adfc8c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100adfc8c; end: 100adfe23;  */

void FUN_100adfc8c(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffcc) || (param_3 != -0x7ffffffef0e855d0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000034,0x800000010f17aa30,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "SpecengUserNavigationScopeGraphBridge/SCSpecengUserNavigationScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x62,2,0x2c,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100adfe24);
        (*pcVar1)();
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c595b8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100adfe24; end: 100adfe7b; -[SCSpecengUserNavigationScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100adfe24(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fb5820;
  func_0x000107c61428(param_1 + _DAT_112fb5820,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100adfe7c; end: 100adfedf; -[SCSpecengUserNavigationScopeGraphBridgeSaberEntryPoint setSpecengUserNavigationScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100adfe7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fb5828;
  func_0x000107c61428(param_1 + _DAT_112fb5828,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100adfee0; end: 100adff07; -[SCSpecengUserNavigationScopeGraphBridgeSaberEntryPoint begin] */

void FUN_100adfee0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100adff08();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100adff08; end: 100ae003b;  */

/* WARNING: Possible PIC construction at 0x000100adffc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100adffdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100adfff8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100adffc4) */
/* WARNING: Removing unreachable block (ram,0x000100adffe0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100adff08(void)

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
  func_0x000107c5b6d0();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_100ae00cc();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_100ae00ec();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100ae003c);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112fb55d8) = lVar5;
    *(long *)(lVar4 + _DAT_112fb55e0) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 100ae003c; end: 100ae0083; -[SCSpecengUserNavigationScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ae003c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fb5820;
  func_0x000107c61428(param_1 + _DAT_112fb5820,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ae0084; end: 100ae00cb; -[SCSpecengUserNavigationScopeGraphBridgeSaberEntryPoint specengUserNavigationScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ae0084(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fb5828;
  func_0x000107c61428(param_1 + _DAT_112fb5828,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100ae00cc; end: 100ae00eb;  */

void FUN_100ae00cc(void)

{
  func_0x000107c61168(&PTR_PTR_1129052c8);
  return;
}



/* Entry: 100ae00ec; end: 100ae01bb;  */

undefined8 FUN_100ae00ec(void)

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
  
  func_0x000107c61428(0x112fb57b0,&uStack_40,0x20,0);
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
    FUN_10006e7f4(&uStack_40);
    uStack_68 = 0;
  }
  else {
    FUN_10035ca10();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 100ae01bc; end: 100ae0227; -[SCSpotUserNavigationScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ae01bc(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fb6210,0);
  *(undefined8 *)(param_1 + _DAT_112fb6218) = 0;
  *(undefined8 *)(param_1 + _DAT_112fb6220) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100ae0228; end: 100ae02d3; -[SCSpotUserNavigationScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_100ae0228(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100ae02d4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100ae02d4; end: 100ae046b;  */

void FUN_100ae02d4(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffcf) || (param_3 != -0x7ffffffef0e85010)) {
      uVar2 = 0xd000000000000031;
      func_0x000107c605b8(0xd000000000000031,0x800000010f17aff0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "SpotUserNavigationScopeGraphBridge/SCSpotUserNavigationScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x5c,2,0x34,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100ae046c);
        (*pcVar1)();
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c596c0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100ae046c; end: 100ae04c3; -[SCSpotUserNavigationScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ae046c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fb6210;
  func_0x000107c61428(param_1 + _DAT_112fb6210,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ae04c4; end: 100ae0527; -[SCSpotUserNavigationScopeGraphBridgeSaberEntryPoint setSpotUserNavigationScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ae04c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fb6218;
  func_0x000107c61428(param_1 + _DAT_112fb6218,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100ae0528; end: 100ae054f; -[SCSpotUserNavigationScopeGraphBridgeSaberEntryPoint begin] */

void FUN_100ae0528(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100ae0550();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100ae0550; end: 100ae0683;  */

/* WARNING: Possible PIC construction at 0x000100ae0608: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ae0624: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ae0640: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ae060c) */
/* WARNING: Removing unreachable block (ram,0x000100ae0628) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ae0550(void)

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
  func_0x000107c5b89c();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_100ae0714();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_100ae0734();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100ae0684);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112fb59e0) = lVar5;
    *(long *)(lVar4 + _DAT_112fb59e8) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 100ae0684; end: 100ae06cb; -[SCSpotUserNavigationScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ae0684(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fb6210;
  func_0x000107c61428(param_1 + _DAT_112fb6210,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ae06cc; end: 100ae0713; -[SCSpotUserNavigationScopeGraphBridgeSaberEntryPoint spotUserNavigationScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ae06cc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fb6218;
  func_0x000107c61428(param_1 + _DAT_112fb6218,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100ae0714; end: 100ae0733;  */

void FUN_100ae0714(void)

{
  func_0x000107c61168(&PTR_PTR_1129055b0);
  return;
}



/* Entry: 100ae0734; end: 100ae0803;  */

undefined8 FUN_100ae0734(void)

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
  
  func_0x000107c61428(0x112fb6168,&uStack_40,0x20,0);
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
    FUN_10006e7f4(&uStack_40);
    uStack_68 = 0;
  }
  else {
    FUN_10037c934();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 100ae0804; end: 100ae086f; -[SCStrUserNavigationScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ae0804(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fb8238,0);
  *(undefined8 *)(param_1 + _DAT_112fb8240) = 0;
  *(undefined8 *)(param_1 + _DAT_112fb8248) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100ae0870; end: 100ae091b; -[SCStrUserNavigationScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_100ae0870(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100ae091c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100ae091c; end: 100ae0ab3;  */

void FUN_100ae091c(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd0) || (param_3 != -0x7ffffffef0e83fc0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000030,0x800000010f17c040,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "StrUserNavigationScopeGraphBridge/SCStrUserNavigationScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x5a,2,0x46,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100ae0ab4);
        (*pcVar1)();
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c599d0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



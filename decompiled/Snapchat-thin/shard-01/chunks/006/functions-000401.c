/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10123ec10; end: 10123ec5f; -[_TtC28SnapEditorLensExplorerPlugin28SnapEditorLensExplorerPlugin populateDependencies:] */

/* WARNING: Possible PIC construction at 0x00010123ec48: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010123ec4c) */

void FUN_10123ec10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_10123ea68(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10123ec60; end: 10123ed4b;  */

void FUN_10123ec60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  pcVar1 = "createARBarLensExplorerAdapter()";
  func_0x0001000c10c0("createARBarLensExplorerAdapter()");
  func_0x000107c61180();
  puVar2 = &UNK_110397678;
  func_0x000107c613fc(&UNK_110397678,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  uStack_50 = 0x10123f024;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_110397690;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_2);
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 10123ed4c; end: 10123eeb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10123ed4c(long param_1,code *param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  code *pcVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    (*param_2)();
  }
  else {
    lVar1 = *(long *)(param_1 + _DAT_112d6ac10);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 == 0) {
      (*param_2)();
      func_0x000107c61170(param_1);
    }
    else {
      func_0x000107c3d04c();
      plVar6 = *(long **)(param_1 + _DAT_112d6ac18);
      puVar2 = &UNK_1103976c8;
      func_0x000107c613fc(&UNK_1103976c8,0x20,7);
      *(code **)(puVar2 + 0x10) = param_2;
      *(undefined8 *)(puVar2 + 0x18) = param_3;
      pcVar5 = *(code **)(*plVar6 + 0x60);
      func_0x000107c6157c(plVar6);
      func_0x000107c6157c(param_3);
      pcVar3 = FUN_10123f030;
      puVar4 = puVar2;
      (*pcVar5)(FUN_10123f030);
      func_0x000107c61574(plVar6);
      func_0x000107c61574(puVar2);
      func_0x000107c614f0(pcVar3);
      uVar7 = *(undefined8 *)(param_1 + _DAT_112d6ac20);
      pcVar5 = *(code **)(puVar4 + 0x10);
      func_0x000107c6157c(uVar7);
      (*pcVar5)();
      func_0x000107c61170(param_1);
      func_0x000107c615e8(lVar1);
      func_0x000107c615e8(pcVar3);
      func_0x000107c61574(uVar7);
    }
  }
  return;
}



/* Entry: 10123eeb8; end: 10123ef27;  */

/* WARNING: Possible PIC construction at 0x00010123ef10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010123ef14) */

void FUN_10123eeb8(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c60bc4();
  puVar3 = &UNK_110397650;
  func_0x000107c613fc(&UNK_110397650,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)(0x10123f01c,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 10123ef28; end: 10123ef87; -[_TtC28SnapEditorLensExplorerPlugin28SnapEditorLensExplorerPlugin init] */

void FUN_10123ef28(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SnapEditorLensExplorerPlugin.SnapEditorLensExplorerPlugin",0x39,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10123ef54);
  (*pcVar1)();
}



/* Entry: 10123ef88; end: 10123efcf; -[_TtC28SnapEditorLensExplorerPlugin28SnapEditorLensExplorerPlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010123efb4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010123efb8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10123ef88(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d6ac10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d6ac18));
  return;
}



/* Entry: 10123efd0; end: 10123efef;  */

void FUN_10123efd0(void)

{
  func_0x000107c61168(&PTR_PTR_1127be930);
  return;
}



/* Entry: 10123eff0; end: 10123f02f;  */

void FUN_10123eff0(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  pcVar1 = "createARBarLensExplorerAdapter()";
  func_0x0001000c10c0("createARBarLensExplorerAdapter()");
  func_0x000107c61180();
  puVar2 = &UNK_110397678;
  func_0x000107c613fc(&UNK_110397678,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  uStack_50 = 0x10123f024;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_110397690;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c6157c();
  func_0x000107c6157c(param_2);
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 10123f030; end: 10123f06b;  */

void FUN_10123f030(long *param_1)

{
  long unaff_x20;
  
  if (((char)param_1[1] == '\x01') && (*param_1 != 0)) {
    (**(code **)(unaff_x20 + 0x10))(0,0);
  }
  return;
}



/* Entry: 10123f06c; end: 10123f07b;  */

void FUN_10123f06c(long param_1,long param_2)

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



/* Entry: 10123f07c; end: 10123f21b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10123f07c(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  puVar2 = auStack_70;
  func_0x000107c61154(puVar2,PTR_s_init_1125d9248);
  if (*(int *)(param_2 + _DAT_11302bb18) == 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_11302ba70);
    func_0x000107c61174();
    uVar4 = param_3;
    func_0x000107c3e060();
    func_0x000107c61180();
    func_0x0001000d224c(&uStack_80);
    uVar5 = uStack_80;
    func_0x000107c614f0();
    (**(code **)(lStack_78 + 8))();
    func_0x000107c615e8(uStack_80);
    lVar6 = 0;
    FUN_10123efd0();
    lVar7 = lVar6;
    func_0x000107c610f8();
    lVar1 = _DAT_112d6ac20;
    uVar8 = 0;
    func_0x0001000c6560();
    func_0x000107c613fc();
    func_0x0001000c6580();
    *(undefined8 *)(lVar7 + lVar1) = uVar8;
    *(undefined8 *)(lVar7 + _DAT_112d6ac10) = uVar4;
    *(undefined8 *)(lVar7 + _DAT_112d6ac18) = uVar5;
    plVar9 = &lStack_90;
    lStack_90 = lVar7;
    lStack_88 = lVar6;
    func_0x000107c61154(plVar9,PTR_s_init_1125d9248);
    func_0x000107c4fba8(uVar3);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(plVar9);
  }
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar2;
}



/* Entry: 10123f21c; end: 10123f27b; -[_TtC28SnapEditorLensExplorerPlugin38SnapEditorLensExplorerPluginEntryPoint init] */

void FUN_10123f21c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SnapEditorLensExplorerPlugin.SnapEditorLensExplorerPluginEntryPoint",0x43,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10123f248);
  (*pcVar1)();
}



/* Entry: 10123f27c; end: 10123f287;  */

void FUN_10123f27c(void)

{
  return;
}



/* Entry: 10123f288; end: 10123f2a7;  */

void FUN_10123f288(void)

{
  func_0x000107c61168(&PTR_PTR_1127bea00);
  return;
}



/* Entry: 10123f2a8; end: 10123f2b3; -[SCSnapEditorLensExplorerPluginEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10123f2a8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6ac78;
  func_0x000107c61428(param_1 + _DAT_112d6ac78,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10123f2b4; end: 10123f2bf; -[SCSnapEditorLensExplorerPluginEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10123f2b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6ac78;
  func_0x000107c61428(param_1 + _DAT_112d6ac78,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10123f2c0; end: 10123f2cb; -[SCSnapEditorLensExplorerPluginEntryPoint snapEditorScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10123f2c0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6ac80;
  func_0x000107c61428(param_1 + _DAT_112d6ac80,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10123f2cc; end: 10123f2d7; -[SCSnapEditorLensExplorerPluginEntryPoint setSnapEditorScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10123f2cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6ac80;
  func_0x000107c61428(param_1 + _DAT_112d6ac80,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10123f2d8; end: 10123f2e3; -[SCSnapEditorLensExplorerPluginEntryPoint arBarServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10123f2d8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6ac88;
  func_0x000107c61428(param_1 + _DAT_112d6ac88,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10123f2e4; end: 10123f2ef; -[SCSnapEditorLensExplorerPluginEntryPoint setArBarServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10123f2e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6ac88;
  func_0x000107c61428(param_1 + _DAT_112d6ac88,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10123f2f0; end: 10123f2fb; -[SCSnapEditorLensExplorerPluginEntryPoint miniCameraNavigationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10123f2f0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6ac90;
  func_0x000107c61428(param_1 + _DAT_112d6ac90,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10123f2fc; end: 10123f33f;  */

void FUN_10123f2fc(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10123f340; end: 10123f34b; -[SCSnapEditorLensExplorerPluginEntryPoint setMiniCameraNavigationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10123f340(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6ac90;
  func_0x000107c61428(param_1 + _DAT_112d6ac90,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10123f34c; end: 10123f39f;  */

void FUN_10123f34c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10123f3a0; end: 10123f5f7;  */

/* WARNING: Possible PIC construction at 0x00010123f54c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010123f55c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010123f56c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010123f588: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010123f5d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010123f570) */
/* WARNING: Removing unreachable block (ram,0x00010123f560) */
/* WARNING: Removing unreachable block (ram,0x00010123f550) */
/* WARNING: Removing unreachable block (ram,0x00010123f5d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10123f3a0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long unaff_x20;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c5b274();
    func_0x000107c61180();
    lVar6 = lVar1;
    if (lVar2 != 0) {
      lVar3 = unaff_x20;
      func_0x000107c3e0b0();
      func_0x000107c61180();
      lVar6 = lVar2;
      if (lVar3 == 0) {
        func_0x000107c61170(lVar1);
      }
      else {
        func_0x000107c4cf5c();
        func_0x000107c61180();
        if (unaff_x20 == 0) {
          func_0x000107c61170(lVar1);
        }
        else {
          uVar4 = 0;
          FUN_10123f288();
          uVar5 = uVar4;
          func_0x000107c610f8();
          uStack_70 = uVar5;
          uStack_68 = uVar4;
          func_0x000107c61154(&uStack_70,PTR_s_init_1125d9248);
          if (*(int *)(lVar2 + _DAT_11302bb18) == 0) {
            lVar6 = *(long *)(lVar1 + _DAT_11302ba70);
            func_0x000107c61174();
            func_0x000107c3e060();
            func_0x000107c61180();
            func_0x0001000d224c(&uStack_80);
            uVar5 = uStack_80;
            func_0x000107c614f0();
            (**(code **)(lStack_78 + 8))();
            func_0x000107c615e8(uStack_80);
            lVar7 = 0;
            FUN_10123efd0();
            lVar2 = lVar7;
            func_0x000107c610f8();
            lVar1 = _DAT_112d6ac20;
            uVar4 = 0;
            func_0x0001000c6560();
            func_0x000107c613fc();
            func_0x0001000c6580();
            *(undefined8 *)(lVar2 + lVar1) = uVar4;
            *(long *)(lVar2 + _DAT_112d6ac10) = lVar3;
            *(undefined8 *)(lVar2 + _DAT_112d6ac18) = uVar5;
            lStack_90 = lVar2;
            lStack_88 = lVar7;
            func_0x000107c61154(&lStack_90,PTR_s_init_1125d9248);
            func_0x000107c4fba8(lVar6);
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar6);
    return;
  }
  return;
}



/* Entry: 10123f5f8; end: 10123f61f; -[SCSnapEditorLensExplorerPluginEntryPoint begin] */

void FUN_10123f5f8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10123f3a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10123f620; end: 10123f663; -[SCSnapEditorLensExplorerPluginEntryPoint end] */

void FUN_10123f620(undefined8 param_1)

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



/* Entry: 10123f664; end: 10123f8eb;  */

void FUN_10123f664(long param_1,long param_2,long param_3)

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
    uVar2 = 0x7469644570616e73;
    if (((param_2 == 0x7469644570616e73) && (param_3 == -0x109a8f909cac8d91)) ||
       (func_0x000107c605b8(0x7469644570616e73,0xef65706f6353726f,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c593c0();
    }
    else {
      uVar2 = 0x7265537261427261;
      if (((param_2 == 0x7265537261427261) && (param_3 == -0x12ffff8c9a9c968a)) ||
         (func_0x000107c605b8(0x7265537261427261,0xed00007365636976,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c52898();
      }
      else {
        if ((param_2 != -0x2fffffffffffffe4) || (param_3 != -0x7ffffffef10cf6a0)) {
          uVar2 = 0;
          func_0x000107c605b8(0xd00000000000001c,0x800000010ef30960,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "SnapEditorLensExplorerPlugin/SCSnapEditorLensExplorerPluginEntryPoint.swift"
                                ,0x4b,2,0x30,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10123f8ec);
            (*pcVar1)();
          }
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c566dc();
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10123f8ec; end: 10123f997; -[SCSnapEditorLensExplorerPluginEntryPoint setValue:forIvarName:] */

void FUN_10123f8ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10123f664(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10123f998; end: 10123fa33; -[SCSnapEditorLensExplorerPluginEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10123f998(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d6ac78,0);
  func_0x000107c61614(param_1 + _DAT_112d6ac80,0);
  func_0x000107c61614(param_1 + _DAT_112d6ac88,0);
  func_0x000107c61614(param_1 + _DAT_112d6ac90,0);
  *(undefined8 *)(param_1 + _DAT_112d6ac98) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10123fa34; end: 10123fa67;  */

void FUN_10123fa34(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10123fa68; end: 10123facf; -[SCSnapEditorLensExplorerPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10123fa68(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d6ac78);
  func_0x000107c61610(param_1 + _DAT_112d6ac80);
  func_0x000107c61610(param_1 + _DAT_112d6ac88);
  func_0x000107c61610(param_1 + _DAT_112d6ac90);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d6ac98));
  return;
}



/* Entry: 10123fad0; end: 10123faef;  */

void FUN_10123fad0(void)

{
  func_0x000107c61168(&PTR_PTR_1127beab8);
  return;
}



/* Entry: 10123faf0; end: 10123fd37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10123faf0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar8 = &puStack_90;
  func_0x000107c614f0();
  lVar1 = _DAT_112d6acc8;
  puVar2 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112d6acd0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d6acd8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d6ace0) = 0;
  puVar3 = &stack0xffffffffffffffa0;
  func_0x000107c61154(puVar3,PTR_s_init_1125d9248);
  func_0x000107c61180();
  func_0x000107c61174();
  uVar4 = param_1;
  func_0x000107c42d48();
  func_0x000107c61180();
  uVar5 = param_2;
  func_0x000107c5b1b8(param_2);
  func_0x000107c61180();
  uVar6 = uVar5;
  func_0x000107c5b198();
  func_0x000107c61180();
  func_0x000107c615e8(uVar5);
  uVar5 = uVar4;
  func_0x000107c42428();
  func_0x000107c61180();
  func_0x000107c615e8(uVar4);
  func_0x000107c61170(uVar6);
  uVar4 = param_2;
  func_0x000107c5b1b8(param_2);
  func_0x000107c61180();
  uVar6 = uVar4;
  func_0x000107c3f794();
  func_0x000107c61180();
  func_0x000107c615e8(uVar4);
  puVar2 = &UNK_1103977e8;
  func_0x000107c613fc(&UNK_1103977e8,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,puVar3);
  func_0x000107c61170(puVar3);
  puVar7 = &UNK_110397810;
  func_0x000107c613fc(&UNK_110397810,0x20,7);
  *(undefined **)(puVar7 + 0x10) = puVar2;
  *(undefined8 *)(puVar7 + 0x18) = uVar5;
  pcStack_70 = FUN_101240120;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_10123fffc;
  puStack_78 = &UNK_110397828;
  puStack_68 = puVar7;
  func_0x000107c60bc4(&puStack_90);
  puVar2 = puStack_68;
  func_0x000107c615f0(uVar5);
  func_0x000107c61574(puVar2);
  uVar4 = uVar6;
  func_0x000107c5c320(uVar6);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c61170(uVar6);
  func_0x000107c3e924(uVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c615e8(uVar5);
  func_0x000107c61170(uVar4);
  return puVar3;
}



/* Entry: 10123fd38; end: 10123fffb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10123fd38(ulong param_1,long param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    func_0x000107c4e910();
    func_0x000107c61180();
    if (param_1 == 0) {
      func_0x000107c61170(param_2);
    }
    else {
      uVar6 = 0;
      FUN_101240144(0);
      uVar7 = param_1;
      func_0x000107c5fc54(param_1,uVar6);
      func_0x000107c61170(param_1);
      if (uVar7 >> 0x3e == 0) {
        uVar13 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
        lVar2 = _DAT_112d6acd0;
        lVar3 = _DAT_112d6acd8;
        lVar4 = _DAT_112d6ace0;
      }
      else {
        uVar13 = uVar7 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar7) {
          uVar13 = uVar7;
        }
        func_0x000107c60480();
        lVar2 = _DAT_112d6acd0;
        lVar3 = _DAT_112d6acd8;
        lVar4 = _DAT_112d6ace0;
      }
      _DAT_112d6acd0 = lVar2;
      _DAT_112d6acd8 = lVar3;
      _DAT_112d6ace0 = lVar4;
      if (uVar13 != 0) {
        lVar15 = 4;
        do {
          uVar14 = lVar15 - 4;
          if ((uVar7 & 0xc000000000000001) == 0) {
            if (*(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x10123ffa4);
              (*pcVar5)();
            }
            uVar8 = *(ulong *)(uVar7 + lVar15 * 8);
            func_0x000107c61174();
          }
          else {
            uVar8 = uVar14;
            FUN_101240188(uVar14,uVar7);
          }
          uVar1 = lVar15 - 3;
          if (SCARRY8(uVar14,1)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10123ffa0);
            (*pcVar5)();
          }
          uVar14 = uVar8;
          func_0x000107c4e90c(uVar8);
          func_0x000107c61180();
          func_0x000107c4e920();
          func_0x000107c61170(uVar14);
          puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
          func_0x000107c490d0();
          lVar10 = param_3;
          func_0x000107c4e924();
          func_0x000107c61180();
          func_0x000107c61170(puVar9);
          if (lVar10 != 0) {
            func_0x000107c61170(lVar10);
          }
          uVar14 = uVar8;
          func_0x000107c4e90c();
          func_0x000107c61180();
          uVar11 = uVar14;
          func_0x000107c4c930();
          func_0x000107c61180();
          func_0x000107c61170(uVar14);
          if (uVar11 == 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10123fffc);
            (*pcVar5)();
          }
          uVar14 = uVar11;
          func_0x000107c3e240();
          func_0x000107c61170(uVar11);
          if ((int)uVar14 == 5) {
            func_0x000107c61170(uVar8);
          }
          else {
            uVar14 = uVar8;
            func_0x000107c3f7bc();
            func_0x000107c61170(uVar8);
            if (uVar14 == 3) {
              if (lVar10 != 0) {
                lVar10 = *(long *)(param_2 + lVar3) + 1;
                lVar12 = lVar3;
                if (SCARRY8(*(long *)(param_2 + lVar3),1)) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x10123ffb0);
                  (*pcVar5)();
                }
                goto LAB_10123ff80;
              }
            }
            else if (uVar14 == 2) {
              if (lVar10 != 0) {
                lVar10 = *(long *)(param_2 + lVar2) + 1;
                lVar12 = lVar2;
                if (SCARRY8(*(long *)(param_2 + lVar2),1)) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x10123ffac);
                  (*pcVar5)();
                }
                goto LAB_10123ff80;
              }
            }
            else if (uVar14 == 1) {
              lVar10 = *(long *)(param_2 + lVar4) + 1;
              lVar12 = lVar4;
              if (SCARRY8(*(long *)(param_2 + lVar4),1)) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x10123ffa8);
                (*pcVar5)();
              }
LAB_10123ff80:
              *(long *)(param_2 + lVar12) = lVar10;
            }
          }
          lVar15 = lVar15 + 1;
        } while (uVar1 != uVar13);
      }
      func_0x000107c61170(param_2);
      func_0x000107c6142c(uVar7);
    }
  }
  return;
}



/* Entry: 10123fffc; end: 101240047;  */

void FUN_10123fffc(long param_1,undefined8 param_2)

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



/* Entry: 101240048; end: 1012400a7; -[_TtC17PreviewEditLogger17PreviewEditLogger init] */

void FUN_101240048(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PreviewEditLogger.PreviewEditLogger",0x23,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101240074);
  (*pcVar1)();
}



/* Entry: 1012400a8; end: 1012400b7; -[_TtC17PreviewEditLogger17PreviewEditLogger .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012400a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d6acc8));
  return;
}



/* Entry: 1012400b8; end: 1012400bb; -[_TtC17PreviewEditLogger17PreviewEditLogger snapEditor:updateLoggingWithBuilder:] */

void FUN_1012400b8(void)

{
  return;
}



/* Entry: 1012400bc; end: 1012400f7; -[_TtC17PreviewEditLogger17PreviewEditLogger snapEditor:didExportWithType:] */

void FUN_1012400bc(void)

{
  code *pcVar1;
  ulong in_x3;
  ulong uStack_18;
  
  if (in_x3 < 4) {
    return;
  }
  uStack_18 = in_x3;
  func_0x000107c60614(&UNK_11072e3b0,&uStack_18,&UNK_11072e3b0,PTR___sSuN_11034e220);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1012400f8);
  (*pcVar1)();
}



/* Entry: 1012400f8; end: 1012400fb; -[_TtC17PreviewEditLogger17PreviewEditLogger snapEditorWillExit:] */

void FUN_1012400f8(void)

{
  return;
}



/* Entry: 1012400fc; end: 1012400ff; -[_TtC17PreviewEditLogger17PreviewEditLogger snapEditor:didTriggerLifecycle:] */

void FUN_1012400fc(void)

{
  return;
}



/* Entry: 101240100; end: 10124011f;  */

void FUN_101240100(void)

{
  func_0x000107c61168(&PTR_PTR_1127beb90);
  return;
}



/* Entry: 101240120; end: 101240143;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101240120(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long unaff_x20;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  undefined1 auStack_78 [24];
  
  lVar7 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar7 + 0x10,auStack_78,0,0);
  lVar7 = lVar7 + 0x10;
  func_0x000107c61618();
  if (lVar7 != 0) {
    func_0x000107c4e910();
    func_0x000107c61180();
    if (param_1 == 0) {
      func_0x000107c61170(lVar7);
    }
    else {
      uVar8 = 0;
      FUN_101240144(0);
      uVar9 = param_1;
      func_0x000107c5fc54(param_1,uVar8);
      func_0x000107c61170(param_1);
      if (uVar9 >> 0x3e == 0) {
        uVar15 = *(ulong *)((uVar9 & 0xffffffffffffff8) + 0x10);
        lVar3 = _DAT_112d6acd0;
        lVar4 = _DAT_112d6acd8;
        lVar5 = _DAT_112d6ace0;
      }
      else {
        uVar15 = uVar9 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar9) {
          uVar15 = uVar9;
        }
        func_0x000107c60480();
        lVar3 = _DAT_112d6acd0;
        lVar4 = _DAT_112d6acd8;
        lVar5 = _DAT_112d6ace0;
      }
      _DAT_112d6acd0 = lVar3;
      _DAT_112d6acd8 = lVar4;
      _DAT_112d6ace0 = lVar5;
      if (uVar15 != 0) {
        lVar17 = 4;
        do {
          uVar16 = lVar17 - 4;
          if ((uVar9 & 0xc000000000000001) == 0) {
            if (*(ulong *)((uVar9 & 0xffffffffffffff8) + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x10123ffa4);
              (*pcVar6)();
            }
            uVar10 = *(ulong *)(uVar9 + lVar17 * 8);
            func_0x000107c61174();
          }
          else {
            uVar10 = uVar16;
            FUN_101240188(uVar16,uVar9);
          }
          uVar1 = lVar17 - 3;
          if (SCARRY8(uVar16,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10123ffa0);
            (*pcVar6)();
          }
          uVar16 = uVar10;
          func_0x000107c4e90c(uVar10);
          func_0x000107c61180();
          func_0x000107c4e920();
          func_0x000107c61170(uVar16);
          puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
          func_0x000107c490d0();
          lVar12 = lVar2;
          func_0x000107c4e924();
          func_0x000107c61180();
          func_0x000107c61170(puVar11);
          if (lVar12 != 0) {
            func_0x000107c61170(lVar12);
          }
          uVar16 = uVar10;
          func_0x000107c4e90c();
          func_0x000107c61180();
          uVar13 = uVar16;
          func_0x000107c4c930();
          func_0x000107c61180();
          func_0x000107c61170(uVar16);
          if (uVar13 == 0) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10123fffc);
            (*pcVar6)();
          }
          uVar16 = uVar13;
          func_0x000107c3e240();
          func_0x000107c61170(uVar13);
          if ((int)uVar16 == 5) {
            func_0x000107c61170(uVar10);
          }
          else {
            uVar16 = uVar10;
            func_0x000107c3f7bc();
            func_0x000107c61170(uVar10);
            if (uVar16 == 3) {
              if (lVar12 != 0) {
                lVar12 = *(long *)(lVar7 + lVar4) + 1;
                lVar14 = lVar4;
                if (SCARRY8(*(long *)(lVar7 + lVar4),1)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x10123ffb0);
                  (*pcVar6)();
                }
                goto LAB_10123ff80;
              }
            }
            else if (uVar16 == 2) {
              if (lVar12 != 0) {
                lVar12 = *(long *)(lVar7 + lVar3) + 1;
                lVar14 = lVar3;
                if (SCARRY8(*(long *)(lVar7 + lVar3),1)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x10123ffac);
                  (*pcVar6)();
                }
                goto LAB_10123ff80;
              }
            }
            else if (uVar16 == 1) {
              lVar12 = *(long *)(lVar7 + lVar5) + 1;
              lVar14 = lVar5;
              if (SCARRY8(*(long *)(lVar7 + lVar5),1)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x10123ffa8);
                (*pcVar6)();
              }
LAB_10123ff80:
              *(long *)(lVar7 + lVar14) = lVar12;
            }
          }
          lVar17 = lVar17 + 1;
        } while (uVar1 != uVar15);
      }
      func_0x000107c61170(lVar7);
      func_0x000107c6142c(uVar9);
    }
  }
  return;
}



/* Entry: 101240144; end: 101240187;  */

void FUN_101240144(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d6ad10 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126bce68;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112d6ad10 = puVar1;
  return;
}



/* Entry: 101240188; end: 10124033b;  */

ulong FUN_101240188(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10124026c);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101240270);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126bce68;
    func_0x000107c61168(PTR_PTR_1126bce68);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR_PTR_1126bce68;
    func_0x000107c61168(PTR_PTR_1126bce68);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_101240144(0);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10124033c);
  (*pcVar2)();
}



/* Entry: 10124033c; end: 10124046b;  */

undefined8
FUN_10124033c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  uVar1 = param_2;
  func_0x000107c5b634();
  if ((int)uVar1 == 5) {
    puVar2 = &UNK_110397860;
    func_0x000107c613fc(&UNK_110397860,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_3;
    *(undefined8 *)(puVar2 + 0x18) = param_4;
    func_0x0001000285a8(0x112d6ad18,&UNK_10d92e240);
    func_0x000107c613fc();
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_4);
    uVar1 = 0x1012404ec;
    func_0x0001000bdd8c(0x1012404ec,puVar2);
    uVar3 = param_1;
    func_0x000107c4e9e4(param_1);
    func_0x000107c61180();
    uVar4 = uVar3;
    func_0x0001003a5b88();
    func_0x000107c4fba8(uVar3);
    func_0x000107c61574(uVar1);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
  }
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  return unaff_x20;
}



/* Entry: 10124046c; end: 1012404cf;  */

void FUN_10124046c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_101240100(0);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174(param_3);
  FUN_10123faf0(param_2,param_3);
  *param_1 = param_2;
  return;
}



/* Entry: 1012404d0; end: 1012404f3;  */

void FUN_1012404d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1012404f4; end: 101240513;  */

void FUN_1012404f4(void)

{
  func_0x000107c61168(&PTR_PTR_112d6ad60);
  return;
}



/* Entry: 101240514; end: 10124051f; -[SCPreviewEditLoggerEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101240514(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6adb8;
  func_0x000107c61428(param_1 + _DAT_112d6adb8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101240520; end: 10124052b; -[SCPreviewEditLoggerEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101240520(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6adb8;
  func_0x000107c61428(param_1 + _DAT_112d6adb8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10124052c; end: 101240537; -[SCPreviewEditLoggerEntryPoint previewScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10124052c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6adc0;
  func_0x000107c61428(param_1 + _DAT_112d6adc0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101240538; end: 101240543; -[SCPreviewEditLoggerEntryPoint setPreviewScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101240538(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6adc0;
  func_0x000107c61428(param_1 + _DAT_112d6adc0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101240544; end: 10124054f; -[SCPreviewEditLoggerEntryPoint snapDocEditorServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101240544(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6adc8;
  func_0x000107c61428(param_1 + _DAT_112d6adc8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101240550; end: 10124055b; -[SCPreviewEditLoggerEntryPoint setSnapDocEditorServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101240550(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6adc8;
  func_0x000107c61428(param_1 + _DAT_112d6adc8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10124055c; end: 101240567; -[SCPreviewEditLoggerEntryPoint previewScopeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10124055c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6add0;
  func_0x000107c61428(param_1 + _DAT_112d6add0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101240568; end: 1012405ab;  */

void FUN_101240568(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1012405ac; end: 1012405b7; -[SCPreviewEditLoggerEntryPoint setPreviewScopeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012405ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6add0;
  func_0x000107c61428(param_1 + _DAT_112d6add0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1012405b8; end: 10124060b;  */

void FUN_1012405b8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10124060c; end: 10124080b;  */

/* WARNING: Possible PIC construction at 0x000101240748: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101240758: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101240768: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101240778: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012407e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010124077c) */
/* WARNING: Removing unreachable block (ram,0x00010124076c) */
/* WARNING: Removing unreachable block (ram,0x00010124074c) */
/* WARNING: Removing unreachable block (ram,0x0001012407ec) */

void FUN_10124060c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  code *pcVar6;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = unaff_x20;
  func_0x000107c4f180();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c5b1bc();
    func_0x000107c61180();
    if (lVar3 == 0) {
      func_0x000107c61170(lVar1);
      lVar1 = lVar2;
    }
    else {
      func_0x000107c4f198();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar1);
        lVar1 = lVar2;
      }
      else {
        FUN_1012404f4(0);
        func_0x000107c613fc();
        lVar4 = lVar2;
        func_0x000107c5b634();
        if ((int)lVar4 == 5) {
          puVar5 = &UNK_1103978a8;
          func_0x000107c613fc(&UNK_1103978a8,0x20,7);
          *(long *)(puVar5 + 0x10) = lVar3;
          *(long *)(puVar5 + 0x18) = unaff_x20;
          func_0x0001000285a8(0x112d6ad18,&UNK_10d92e240);
          func_0x000107c613fc();
          func_0x000107c61174(lVar3);
          func_0x000107c61174(unaff_x20);
          pcVar6 = FUN_101240cd4;
          func_0x0001000bdd8c(FUN_101240cd4,puVar5);
          func_0x000107c4e9e4(lVar1);
          func_0x000107c61180();
          func_0x0001003a5b88();
          func_0x000107c4fba8(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__swift_release_11034f4c0)(pcVar6);
          return;
        }
        func_0x000107c61170(lVar1);
        lVar1 = lVar2;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10124080c; end: 101240833; -[SCPreviewEditLoggerEntryPoint begin] */

void FUN_10124080c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10124060c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101240834; end: 101240877; -[SCPreviewEditLoggerEntryPoint end] */

void FUN_101240834(undefined8 param_1)

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



/* Entry: 101240878; end: 101240aef;  */

void FUN_101240878(long param_1,long param_2,long param_3)

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
    uVar2 = 0;
    if (((param_2 == 0x5377656976657270) && (param_3 == -0x13ffffff9a8f909d)) ||
       (func_0x000107c605b8(0x5377656976657270,0xec00000065706f63,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c577c8();
    }
    else {
      if ((param_2 != -0x2fffffffffffffeb) || (param_3 != -0x7ffffffef10e2010)) {
        uVar2 = 0xd000000000000015;
        func_0x000107c605b8(0xd000000000000015,0x800000010ef1dff0,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          if ((param_2 != -0x2fffffffffffffec) || (param_3 != -0x7ffffffef10cf600)) {
            uVar2 = 0;
            func_0x000107c605b8(0xd000000000000014,0x800000010ef30a00,param_2,param_3,0);
            if ((uVar2 & 1) == 0) {
              func_0x000107c602fc(0x15);
              func_0x000107c6142c(0xe000000000000000);
              func_0x000107c5fb78(param_2,param_3);
              func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                  "PreviewEditLogger/SCPreviewEditLoggerEntryPoint.swift",0x35,2,
                                  0x30,0);
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x101240af0);
              (*pcVar1)();
            }
          }
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c577dc();
          goto LAB_101240904;
        }
      }
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c5935c();
    }
  }
LAB_101240904:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101240af0; end: 101240b9b; -[SCPreviewEditLoggerEntryPoint setValue:forIvarName:] */

void FUN_101240af0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101240878(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101240b9c; end: 101240c37; -[SCPreviewEditLoggerEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101240b9c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d6adb8,0);
  func_0x000107c61614(param_1 + _DAT_112d6adc0,0);
  func_0x000107c61614(param_1 + _DAT_112d6adc8,0);
  func_0x000107c61614(param_1 + _DAT_112d6add0,0);
  *(undefined8 *)(param_1 + _DAT_112d6add8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101240c38; end: 101240c6b;  */

void FUN_101240c38(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101240c6c; end: 101240cd3; -[SCPreviewEditLoggerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101240c6c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d6adb8);
  func_0x000107c61610(param_1 + _DAT_112d6adc0);
  func_0x000107c61610(param_1 + _DAT_112d6adc8);
  func_0x000107c61610(param_1 + _DAT_112d6add0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d6add8));
  return;
}



/* Entry: 101240cd4; end: 101240cdb;  */

void FUN_101240cd4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  FUN_101240100(0);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174(uVar2);
  FUN_10123faf0(uVar1,uVar2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101240cdc; end: 101240cfb;  */

void FUN_101240cdc(void)

{
  func_0x000107c61168(&PTR_PTR_1127bec68);
  return;
}



/* Entry: 101240cfc; end: 101240d07; -[_TtC40SCGroupProfileBitmojiSectionActionModels28SCGroupProfileLensAvatarInfo avatarId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101240cfc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112d6ae08);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112d6ae08))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 101240d08; end: 101240d13; -[_TtC40SCGroupProfileBitmojiSectionActionModels28SCGroupProfileLensAvatarInfo sceneId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101240d08(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112d6ae10);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112d6ae10))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 101240d14; end: 101240d5b;  */

void FUN_101240d14(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 101240d5c; end: 101240dd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101240d5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d6ae08);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d6ae10);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101240dd8; end: 101240df7;  */

void FUN_101240dd8(void)

{
  func_0x000107c61168(&PTR_PTR_1127bed40);
  return;
}



/* Entry: 101240df8; end: 101240e77; -[_TtC40SCGroupProfileBitmojiSectionActionModels28SCGroupProfileLensAvatarInfo initWithAvatarId:sceneId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101240df8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000107c5faec();
  uVar2 = param_2;
  func_0x000107c5faec();
  puVar1 = (undefined8 *)(param_1 + _DAT_112d6ae08);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(param_1 + _DAT_112d6ae10);
  *puVar1 = param_4;
  puVar1[1] = uVar2;
  FUN_101240dd8();
  lStack_40 = param_1;
  uStack_38 = param_4;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101240e78; end: 101240e83;  */

void FUN_101240e78(void)

{
  FUN_101240dd8();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101240e84; end: 101240ec3; -[_TtC40SCGroupProfileBitmojiSectionActionModels28SCGroupProfileLensAvatarInfo .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101240ea4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101240ea8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101240e84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112d6ae08 + 8))
  ;
  return;
}



/* Entry: 101240ec4; end: 101240ed3; -[_TtC40SCGroupProfileBitmojiSectionActionModels30SCGroupProfileShareActionModel sceneryView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101240ec4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112d6ae18));
  return;
}



/* Entry: 101240ed4; end: 101240ee3; -[_TtC40SCGroupProfileBitmojiSectionActionModels30SCGroupProfileShareActionModel groupMembersWithBitmojis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101240ed4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112d6ae20);
}



/* Entry: 101240ee4; end: 101240f37; -[_TtC40SCGroupProfileBitmojiSectionActionModels30SCGroupProfileShareActionModel avatarIds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101240ee4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_112d6ae28);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c61434(lVar1);
    func_0x000107c5fc48();
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 101240f38; end: 101240f8f; -[_TtC40SCGroupProfileBitmojiSectionActionModels30SCGroupProfileShareActionModel lensAvatarInfos] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101240f38(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_112d6ae30);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_101240dd8();
    lVar2 = lVar1;
    func_0x000107c61434(lVar1);
    func_0x000107c5fc48();
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 101240f90; end: 101240f9f; -[_TtC40SCGroupProfileBitmojiSectionActionModels30SCGroupProfileShareActionModel skipToLensFeed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_101240f90(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112d6ae38);
}



/* Entry: 101240fa0; end: 10124103b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101240fa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112d6ae18) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112d6ae20) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112d6ae28) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112d6ae30) = param_4;
  *(undefined1 *)(unaff_x20 + _DAT_112d6ae38) = param_5;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10124103c; end: 10124105b;  */

void FUN_10124103c(void)

{
  func_0x000107c61168(&PTR_PTR_1127bee08);
  return;
}



/* Entry: 10124105c; end: 10124113b; -[_TtC40SCGroupProfileBitmojiSectionActionModels30SCGroupProfileShareActionModel initWithSceneryView:groupMembersWithBitmojis:avatarIds:lensAvatarInfos:skipToLensFeed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10124105c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,undefined1 param_7)

{
  undefined *puVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  if (param_5 == 0) {
    param_5 = 0;
    lVar2 = param_1;
  }
  else {
    func_0x000107c5fc54(param_5,PTR___sSSN_11034da80);
    lVar2 = param_5;
  }
  if (param_6 == 0) {
    param_6 = 0;
  }
  else {
    FUN_101240dd8();
    func_0x000107c5fc54(param_6,lVar2);
  }
  *(undefined8 *)(param_1 + _DAT_112d6ae18) = param_3;
  *(undefined8 *)(param_1 + _DAT_112d6ae20) = param_4;
  *(long *)(param_1 + _DAT_112d6ae28) = param_5;
  *(long *)(param_1 + _DAT_112d6ae30) = param_6;
  *(undefined1 *)(param_1 + _DAT_112d6ae38) = param_7;
  FUN_10124103c();
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = param_1;
  lStack_48 = param_6;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_50,puVar1);
  return;
}



/* Entry: 10124113c; end: 10124122f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10124113c(undefined8 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lStack_70;
  long lStack_68;
  
  plVar4 = &lStack_70;
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112d6ae18);
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112d6ae20);
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112d6ae28);
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112d6ae30);
  uVar1 = *(undefined1 *)(unaff_x20 + _DAT_112d6ae38);
  FUN_10124103c();
  lVar3 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112d6ae18) = uVar5;
  *(undefined8 *)(lVar3 + _DAT_112d6ae20) = uVar8;
  *(undefined8 *)(lVar3 + _DAT_112d6ae28) = uVar6;
  *(undefined8 *)(lVar3 + _DAT_112d6ae30) = uVar7;
  *(undefined1 *)(lVar3 + _DAT_112d6ae38) = uVar1;
  puVar2 = PTR_s_init_1125d9248;
  lStack_70 = lVar3;
  lStack_68 = param_2;
  func_0x000107c61434(uVar6);
  func_0x000107c61434(uVar7);
  func_0x000107c61174(uVar5);
  func_0x000107c61154(&lStack_70,puVar2);
  param_1[3] = param_2;
  *param_1 = plVar4;
  return;
}



/* Entry: 101241230; end: 10124128f; -[_TtC40SCGroupProfileBitmojiSectionActionModels30SCGroupProfileShareActionModel copyWithZone:] */

undefined1 * FUN_101241230(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  puVar1 = auStack_40;
  func_0x000107c61174();
  FUN_10124113c(auStack_40);
  func_0x000107c61170(param_1);
  func_0x0001006732c8(auStack_40,uStack_28);
  func_0x000107c605b0();
  func_0x000100183ab8(auStack_40);
  return puVar1;
}



/* Entry: 101241290; end: 10124129b;  */

void FUN_101241290(void)

{
  FUN_10124103c();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10124129c; end: 1012412cb;  */

void FUN_10124129c(code *param_1)

{
  (*param_1)();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1012412cc; end: 101241313; -[_TtC40SCGroupProfileBitmojiSectionActionModels30SCGroupProfileShareActionModel .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001012412f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012412fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012412cc(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d6ae18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112d6ae28));
  return;
}



/* Entry: 101241314; end: 101241dc3;  */

/* WARNING: Possible PIC construction at 0x0001012415b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012415c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012415d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012415e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012415f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101241604: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101241614: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101241624: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101241634: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101241644: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101241654: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101241664: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101241674: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101241684: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101241694: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012416a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012416b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012416c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012416d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012416e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012416f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101241704: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101241714: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101241724: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101241734: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101241744: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101241754: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101241748) */
/* WARNING: Removing unreachable block (ram,0x000101241738) */
/* WARNING: Removing unreachable block (ram,0x000101241728) */
/* WARNING: Removing unreachable block (ram,0x000101241718) */
/* WARNING: Removing unreachable block (ram,0x000101241708) */
/* WARNING: Removing unreachable block (ram,0x0001012416f8) */
/* WARNING: Removing unreachable block (ram,0x0001012416e8) */
/* WARNING: Removing unreachable block (ram,0x0001012416d8) */
/* WARNING: Removing unreachable block (ram,0x0001012416c8) */
/* WARNING: Removing unreachable block (ram,0x0001012416b8) */
/* WARNING: Removing unreachable block (ram,0x0001012416a8) */
/* WARNING: Removing unreachable block (ram,0x000101241698) */
/* WARNING: Removing unreachable block (ram,0x000101241688) */
/* WARNING: Removing unreachable block (ram,0x000101241678) */
/* WARNING: Removing unreachable block (ram,0x000101241668) */
/* WARNING: Removing unreachable block (ram,0x000101241658) */
/* WARNING: Removing unreachable block (ram,0x000101241648) */
/* WARNING: Removing unreachable block (ram,0x000101241638) */
/* WARNING: Removing unreachable block (ram,0x000101241628) */
/* WARNING: Removing unreachable block (ram,0x000101241618) */
/* WARNING: Removing unreachable block (ram,0x000101241608) */
/* WARNING: Removing unreachable block (ram,0x0001012415f8) */
/* WARNING: Removing unreachable block (ram,0x0001012415e8) */
/* WARNING: Removing unreachable block (ram,0x0001012415d8) */
/* WARNING: Removing unreachable block (ram,0x0001012415c8) */
/* WARNING: Removing unreachable block (ram,0x0001012415b8) */
/* WARNING: Removing unreachable block (ram,0x000101241758) */

void FUN_101241314(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
                  undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
                  undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
                  undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
                  undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = &UNK_110397a50;
  func_0x000107c613fc(&UNK_110397a50,0x1c8,7);
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
  *(undefined8 *)(puVar1 + 0xc0) = param_24;
  *(undefined8 *)(puVar1 + 200) = param_25;
  *(undefined8 *)(puVar1 + 0xd0) = param_26;
  *(undefined8 *)(puVar1 + 0xd8) = param_27;
  *(undefined8 *)(puVar1 + 0xe0) = param_28;
  *(undefined8 *)(puVar1 + 0xe8) = param_29;
  *(undefined8 *)(puVar1 + 0xf0) = param_30;
  *(undefined8 *)(puVar1 + 0xf8) = param_31;
  *(undefined8 *)(puVar1 + 0x100) = param_32;
  *(undefined8 *)(puVar1 + 0x108) = param_33;
  *(undefined8 *)(puVar1 + 0x110) = param_34;
  *(undefined8 *)(puVar1 + 0x118) = param_35;
  *(undefined8 *)(puVar1 + 0x120) = param_36;
  *(undefined8 *)(puVar1 + 0x128) = param_37;
  *(undefined8 *)(puVar1 + 0x130) = param_38;
  *(undefined8 *)(puVar1 + 0x138) = param_39;
  *(undefined8 *)(puVar1 + 0x140) = param_40;
  *(undefined8 *)(puVar1 + 0x148) = param_41;
  *(undefined8 *)(puVar1 + 0x150) = param_42;
  *(undefined8 *)(puVar1 + 0x158) = param_43;
  *(undefined8 *)(puVar1 + 0x160) = param_44;
  *(undefined8 *)(puVar1 + 0x168) = param_45;
  *(undefined8 *)(puVar1 + 0x170) = param_46;
  *(undefined8 *)(puVar1 + 0x178) = param_47;
  *(undefined8 *)(puVar1 + 0x180) = param_48;
  *(undefined8 *)(puVar1 + 0x188) = param_49;
  *(undefined8 *)(puVar1 + 400) = param_50;
  *(undefined8 *)(puVar1 + 0x198) = param_51;
  *(undefined8 *)(puVar1 + 0x1a0) = param_52;
  *(undefined8 *)(puVar1 + 0x1a8) = param_53;
  *(undefined8 *)(puVar1 + 0x1b0) = param_54;
  *(undefined8 *)(puVar1 + 0x1b8) = param_55;
  *(undefined8 *)(puVar1 + 0x1c0) = param_56;
  uVar2 = 0x112d6ae98;
  func_0x0001000285a8(0x112d6ae98,&UNK_10d92e348);
  func_0x000107c613fc();
  pcVar3 = FUN_101241fa8;
  func_0x0001000841fc(FUN_101241fa8,puVar1,uVar2);
  func_0x000100084214(&UNK_10d92e320,0x26,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 101241dc4; end: 101241dd3;  */

undefined1  [16] FUN_101241dc4(void)

{
  return ZEXT816(0x110397a30);
}



/* Entry: 101241dd4; end: 101241fa7;  */

void FUN_101241dd4(void)

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
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x138));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x140));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x148));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x150));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x158));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x160));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x168));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x170));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x178));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x180));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x188));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 400));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x198));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101241fa8; end: 10124209b;  */

void FUN_101241fa8(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000101241784(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                      *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                      *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                      *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                      *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                      *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                      *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200),
                      *(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8),
                      *(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8),
                      *(undefined8 *)(unaff_x20 + 0xf0),*(undefined8 *)(unaff_x20 + 0xf8),
                      *(undefined8 *)(unaff_x20 + 0x100),*(undefined8 *)(unaff_x20 + 0x108),
                      *(undefined8 *)(unaff_x20 + 0x110),*(undefined8 *)(unaff_x20 + 0x118),
                      *(undefined8 *)(unaff_x20 + 0x120),*(undefined8 *)(unaff_x20 + 0x128),
                      *(undefined8 *)(unaff_x20 + 0x130),*(undefined8 *)(unaff_x20 + 0x138),
                      *(undefined8 *)(unaff_x20 + 0x140),*(undefined8 *)(unaff_x20 + 0x148),
                      *(undefined8 *)(unaff_x20 + 0x150),*(undefined8 *)(unaff_x20 + 0x158),
                      *(undefined8 *)(unaff_x20 + 0x160),*(undefined8 *)(unaff_x20 + 0x168),
                      *(undefined8 *)(unaff_x20 + 0x170),*(undefined8 *)(unaff_x20 + 0x178),
                      *(undefined8 *)(unaff_x20 + 0x180),*(undefined8 *)(unaff_x20 + 0x188),
                      *(undefined8 *)(unaff_x20 + 400),*(undefined8 *)(unaff_x20 + 0x198),
                      *(undefined8 *)(unaff_x20 + 0x1a0),*(undefined8 *)(unaff_x20 + 0x1a8),
                      *(undefined8 *)(unaff_x20 + 0x1b0),*(undefined8 *)(unaff_x20 + 0x1b8),
                      *(undefined8 *)(unaff_x20 + 0x1c0));
  return;
}



/* Entry: 10124209c; end: 101242e5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10124209c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
             undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
             undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
             undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
             undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  undefined8 *puVar29;
  undefined8 *puVar30;
  undefined8 *puVar31;
  undefined8 *puVar32;
  undefined8 *puVar33;
  undefined8 *puVar34;
  undefined8 *puVar35;
  undefined8 *puVar36;
  undefined8 *puVar37;
  undefined8 *puVar38;
  undefined8 *puVar39;
  undefined8 *puVar40;
  undefined8 *puVar41;
  undefined8 *puVar42;
  undefined8 *puVar43;
  undefined8 *puVar44;
  undefined8 *puVar45;
  undefined8 *puVar46;
  undefined8 *puVar47;
  undefined8 *puVar48;
  undefined8 *puVar49;
  undefined8 *puVar50;
  undefined8 *puVar51;
  undefined8 *puVar52;
  undefined8 *puVar53;
  undefined8 *puVar54;
  undefined8 *puVar55;
  undefined8 *puVar56;
  undefined *puVar57;
  code *pcVar58;
  undefined1 *puVar59;
  long unaff_x20;
  undefined1 auStack_b0 [16];
  undefined8 auStack_a0 [5];
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  func_0x000107c610f8();
  func_0x0001000285a8(0x112d6aea8,&UNK_10d92e360);
  puVar2 = auStack_a0;
  auStack_a0[0] = param_2;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112d6aeb0,&UNK_10d92e368);
  puVar3 = auStack_a0;
  auStack_a0[0] = param_3;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112d6aeb8,&UNK_10d92e370);
  puVar4 = auStack_a0;
  auStack_a0[0] = param_4;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112d6aec0,&UNK_10d92e378);
  puVar5 = auStack_a0;
  auStack_a0[0] = param_5;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112d6aec8,&UNK_10d92e380);
  puVar6 = auStack_a0;
  auStack_a0[0] = param_6;
  func_0x0001000838ec();
  puVar7 = auStack_a0;
  auStack_a0[0] = param_7;
  func_0x0001000838ec();
  puVar8 = auStack_a0;
  auStack_a0[0] = param_8;
  func_0x0001000838ec();
  auStack_a0[0] = param_9;
  puVar9 = auStack_a0;
  func_0x0001000838ec();
  auStack_a0[0] = param_10;
  puVar10 = auStack_a0;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112d6aed0,&UNK_10dc135f0);
  auStack_a0[0] = param_11;
  puVar11 = auStack_a0;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112d37eb0,&UNK_10d92e390);
  auStack_a0[0] = param_12;
  puVar12 = auStack_a0;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112d6aed8,&UNK_10d92e398);
  auStack_a0[0] = param_13;
  puVar13 = auStack_a0;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112d6aee0,&UNK_10d92e3a0);
  auStack_a0[0] = param_14;
  puVar14 = auStack_a0;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112d6aee8,&UNK_10d958c50);
  auStack_a0[0] = param_15;
  puVar15 = auStack_a0;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112d6aef0,&UNK_10d92e3b0);
  auStack_a0[0] = param_16;
  puVar16 = auStack_a0;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112d6aef8,&UNK_10d92e3b8);
  auStack_a0[0] = param_17;
  puVar17 = auStack_a0;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112d6af00,&UNK_10d92e3c0);
  auStack_a0[0] = param_18;
  puVar18 = auStack_a0;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112d6a5a8,&UNK_10d92db20);
  auStack_a0[0] = param_19;
  puVar19 = auStack_a0;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112d6af08,&UNK_10d92e3d0);
  auStack_a0[0] = param_20;
  puVar20 = auStack_a0;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112d6a5b0,&UNK_10d97b460);
  auStack_a0[0] = param_21;
  puVar21 = auStack_a0;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112d6a5b8,&UNK_10d92db30);
  auStack_a0[0] = param_22;
  puVar22 = auStack_a0;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112d6af10,&UNK_10d92e3d8);
  auStack_a0[0] = param_23;
  puVar23 = auStack_a0;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112d6af18,&UNK_10d92e3e0);
  auStack_a0[0] = param_24;
  puVar24 = auStack_a0;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112d4bbf0,&UNK_10d9125f0);
  auStack_a0[0] = param_25;
  puVar25 = auStack_a0;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112d6af20,&UNK_10d92e3f0);
  auStack_a0[0] = param_26;
  puVar26 = auStack_a0;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112d6af28,&UNK_10d92e3f8);
  auStack_a0[0] = param_27;
  puVar27 = auStack_a0;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112d37ec0,&UNK_10d92e400);
  auStack_a0[0] = param_28;
  puVar28 = auStack_a0;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112d6af30,&UNK_10daee550);
  auStack_a0[0] = param_29;
  puVar29 = auStack_a0;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112d6af38,&UNK_10d92e410);
  auStack_a0[0] = param_30;
  puVar30 = auStack_a0;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112d6af40,&UNK_10d92e418);
  auStack_a0[0] = param_31;
  puVar31 = auStack_a0;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112d6af48,&UNK_10d92e420);
  auStack_a0[0] = param_32;
  puVar32 = auStack_a0;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112d6af50,&UNK_10d92e428);
  auStack_a0[0] = param_33;
  puVar33 = auStack_a0;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112d6af58,&UNK_10d92e430);
  auStack_a0[0] = param_34;
  puVar34 = auStack_a0;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112d6a5c0,&UNK_10d92db38);
  auStack_a0[0] = param_35;
  puVar35 = auStack_a0;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112d6af60,&UNK_10d92e440);
  auStack_a0[0] = param_36;
  puVar36 = auStack_a0;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112d6af68,&UNK_10d92e448);
  auStack_a0[0] = param_37;
  puVar37 = auStack_a0;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112d6af70,&UNK_10d92e450);
  auStack_a0[0] = param_38;
  puVar38 = auStack_a0;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112d6af78,&UNK_10dcf3f00);
  auStack_a0[0] = param_39;
  puVar39 = auStack_a0;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112d6af80,&UNK_10d92e460);
  auStack_a0[0] = param_40;
  puVar40 = auStack_a0;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112d6af88,&UNK_10d986870);
  auStack_a0[0] = param_41;
  puVar41 = auStack_a0;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112d37ec8,&UNK_10d901d30);
  auStack_a0[0] = param_42;
  puVar42 = auStack_a0;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112d60b18,&UNK_10d926f00);
  auStack_a0[0] = param_43;
  puVar43 = auStack_a0;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112d6af90,&UNK_10d92e470);
  auStack_a0[0] = param_44;
  puVar44 = auStack_a0;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112d60b20,&UNK_10dd04910);
  auStack_a0[0] = param_45;
  puVar45 = auStack_a0;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112d6af98,&UNK_10d92e480);
  auStack_a0[0] = param_46;
  puVar46 = auStack_a0;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112d6afa0,&UNK_10d92e488);
  auStack_a0[0] = param_47;
  puVar47 = auStack_a0;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112d60b28,&UNK_10d926f10);
  auStack_a0[0] = param_48;
  puVar48 = auStack_a0;
  func_0x0001000838ec();
  auStack_a0[0] = param_49;
  puVar49 = auStack_a0;
  func_0x0001000838ec();
  auStack_a0[0] = param_50;
  puVar50 = auStack_a0;
  func_0x0001000838ec();
  auStack_a0[0] = param_51;
  puVar51 = auStack_a0;
  func_0x0001000838ec();
  auStack_a0[0] = param_52;
  puVar52 = auStack_a0;
  func_0x0001000838ec();
  auStack_a0[0] = param_53;
  puVar53 = auStack_a0;
  func_0x0001000838ec();
  auStack_a0[0] = param_54;
  puVar54 = auStack_a0;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112d6afa8,&UNK_10d95a400);
  auStack_a0[0] = param_55;
  puVar55 = auStack_a0;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112d6afb0,&UNK_10d92e490);
  auStack_a0[0] = param_56;
  puVar56 = auStack_a0;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112d6ae90,&UNK_10d92e310);
  puVar57 = &UNK_110397a78;
  func_0x000107c613fc(&UNK_110397a78,0x1c8,7);
  *(undefined8 **)(puVar57 + 0x10) = puVar52;
  *(undefined8 **)(puVar57 + 0x18) = puVar38;
  *(undefined8 **)(puVar57 + 0x20) = puVar53;
  *(undefined8 **)(puVar57 + 0x28) = puVar39;
  *(undefined8 **)(puVar57 + 0x30) = puVar40;
  *(undefined8 **)(puVar57 + 0x38) = puVar44;
  *(undefined8 **)(puVar57 + 0x40) = puVar19;
  *(undefined8 **)(puVar57 + 0x48) = puVar22;
  *(undefined8 **)(puVar57 + 0x50) = puVar25;
  *(undefined8 **)(puVar57 + 0x58) = puVar33;
  *(undefined8 **)(puVar57 + 0x60) = puVar27;
  *(undefined8 **)(puVar57 + 0x68) = puVar49;
  *(undefined8 **)(puVar57 + 0x70) = puVar18;
  *(undefined8 **)(puVar57 + 0x78) = puVar7;
  *(undefined8 **)(puVar57 + 0x80) = puVar26;
  *(undefined8 **)(puVar57 + 0x88) = puVar37;
  *(undefined8 **)(puVar57 + 0x90) = puVar41;
  *(undefined8 **)(puVar57 + 0x98) = puVar55;
  *(undefined8 **)(puVar57 + 0xa0) = puVar4;
  *(undefined8 **)(puVar57 + 0xa8) = puVar32;
  *(undefined8 **)(puVar57 + 0xb0) = puVar48;
  *(undefined8 **)(puVar57 + 0xb8) = puVar54;
  *(undefined8 **)(puVar57 + 0xc0) = puVar45;
  *(undefined8 **)(puVar57 + 200) = puVar43;
  *(undefined8 **)(puVar57 + 0xd0) = puVar12;
  *(undefined8 **)(puVar57 + 0xd8) = puVar21;
  *(undefined8 **)(puVar57 + 0xe0) = puVar2;
  *(undefined8 **)(puVar57 + 0xe8) = puVar31;
  *(undefined8 **)(puVar57 + 0xf0) = puVar11;
  *(undefined8 **)(puVar57 + 0xf8) = puVar3;
  *(undefined8 **)(puVar57 + 0x100) = puVar56;
  *(undefined8 **)(puVar57 + 0x108) = puVar28;
  *(undefined8 **)(puVar57 + 0x110) = puVar14;
  *(undefined8 **)(puVar57 + 0x118) = puVar46;
  *(undefined8 **)(puVar57 + 0x120) = puVar24;
  *(undefined8 **)(puVar57 + 0x128) = puVar10;
  *(undefined8 **)(puVar57 + 0x130) = puVar6;
  *(undefined8 **)(puVar57 + 0x138) = puVar8;
  *(undefined8 **)(puVar57 + 0x140) = puVar9;
  *(undefined8 **)(puVar57 + 0x148) = puVar51;
  *(undefined8 **)(puVar57 + 0x150) = puVar50;
  *(undefined8 **)(puVar57 + 0x158) = puVar47;
  *(undefined8 **)(puVar57 + 0x160) = puVar17;
  *(undefined8 **)(puVar57 + 0x168) = puVar42;
  *(undefined8 **)(puVar57 + 0x170) = puVar36;
  *(undefined8 **)(puVar57 + 0x178) = puVar30;
  *(undefined8 **)(puVar57 + 0x180) = puVar23;
  *(undefined8 **)(puVar57 + 0x188) = puVar29;
  *(undefined8 **)(puVar57 + 400) = puVar13;
  *(undefined8 **)(puVar57 + 0x198) = puVar35;
  *(undefined8 **)(puVar57 + 0x1a0) = puVar20;
  *(undefined8 **)(puVar57 + 0x1a8) = puVar16;
  *(undefined8 **)(puVar57 + 0x1b0) = puVar15;
  *(undefined8 **)(puVar57 + 0x1b8) = puVar34;
  *(undefined8 **)(puVar57 + 0x1c0) = puVar5;
  pcVar58 = FUN_101242e60;
  func_0x0001000823a8(FUN_101242e60,puVar57);
  func_0x000100083b20(auStack_a0);
  func_0x000107c61574(pcVar58);
  uVar1 = auStack_a0[0];
  uStack_78 = param_1;
  func_0x00010008a7c8(auStack_70,&uStack_78);
  func_0x000107c61574(uVar1);
  func_0x000100083b20(auStack_a0);
  func_0x000107c61574(auStack_70[0]);
  FUN_101242e60(auStack_a0,unaff_x20 + _DAT_112d6afb8);
  puVar59 = auStack_b0;
  func_0x000107c61154(puVar59,PTR_s_init_1125d9248);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_17);
  func_0x000107c61170(param_18);
  func_0x000107c61170(param_19);
  func_0x000107c61170(param_20);
  func_0x000107c61170(param_21);
  func_0x000107c61170(param_22);
  func_0x000107c61170(param_23);
  func_0x000107c61170(param_24);
  func_0x000107c61170(param_25);
  func_0x000107c61170(param_26);
  func_0x000107c61170(param_27);
  func_0x000107c61170(param_28);
  func_0x000107c61170(param_29);
  func_0x000107c61170(param_30);
  func_0x000107c61170(param_31);
  func_0x000107c61170(param_32);
  func_0x000107c61170(param_33);
  func_0x000107c61170(param_34);
  func_0x000107c61170(param_35);
  func_0x000107c61170(param_37);
  func_0x000107c61170(param_38);
  func_0x000107c61170(param_39);
  func_0x000107c61170(param_40);
  func_0x000107c61170(param_41);
  func_0x000107c61170(param_42);
  func_0x000107c61170(param_43);
  func_0x000107c61170(param_44);
  func_0x000107c61170(param_45);
  func_0x000107c61170(param_46);
  func_0x000107c61170(param_47);
  func_0x000107c61170(param_48);
  func_0x000107c61170(param_49);
  func_0x000107c61170(param_50);
  func_0x000107c61170(param_51);
  func_0x000107c61170(param_52);
  func_0x000107c61170(param_53);
  func_0x000107c61170(param_54);
  func_0x000107c61170(param_55);
  func_0x000107c61170(param_56);
  func_0x000107c61170(param_36);
  func_0x000107c615e8(param_2);
  return puVar59;
}



/* Entry: 101242e60; end: 101242e7b;  */

void FUN_101242e60(void)

{
  long unaff_x20;
  
  FUN_101241314(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200),
                *(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8),
                *(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8),
                *(undefined8 *)(unaff_x20 + 0xf0),*(undefined8 *)(unaff_x20 + 0xf8),
                *(undefined8 *)(unaff_x20 + 0x100),*(undefined8 *)(unaff_x20 + 0x108),
                *(undefined8 *)(unaff_x20 + 0x110),*(undefined8 *)(unaff_x20 + 0x118),
                *(undefined8 *)(unaff_x20 + 0x120),*(undefined8 *)(unaff_x20 + 0x128),
                *(undefined8 *)(unaff_x20 + 0x130),*(undefined8 *)(unaff_x20 + 0x138),
                *(undefined8 *)(unaff_x20 + 0x140),*(undefined8 *)(unaff_x20 + 0x148),
                *(undefined8 *)(unaff_x20 + 0x150),*(undefined8 *)(unaff_x20 + 0x158),
                *(undefined8 *)(unaff_x20 + 0x160),*(undefined8 *)(unaff_x20 + 0x168),
                *(undefined8 *)(unaff_x20 + 0x170),*(undefined8 *)(unaff_x20 + 0x178),
                *(undefined8 *)(unaff_x20 + 0x180),*(undefined8 *)(unaff_x20 + 0x188),
                *(undefined8 *)(unaff_x20 + 400),*(undefined8 *)(unaff_x20 + 0x198),
                *(undefined8 *)(unaff_x20 + 0x1a0),*(undefined8 *)(unaff_x20 + 0x1a8),
                *(undefined8 *)(unaff_x20 + 0x1b0),*(undefined8 *)(unaff_x20 + 0x1b8),
                *(undefined8 *)(unaff_x20 + 0x1c0));
  return;
}



/* Entry: 101242e7c; end: 10124304f;  */

void FUN_101242e7c(void)

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
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x138));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x140));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x148));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x150));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x158));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x160));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x168));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x170));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x178));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x180));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x188));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 400));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x198));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101243050; end: 1012430eb;  */

void FUN_101243050(void)

{
  long unaff_x20;
  
  FUN_101241314(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200),
                *(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8),
                *(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8),
                *(undefined8 *)(unaff_x20 + 0xf0),*(undefined8 *)(unaff_x20 + 0xf8),
                *(undefined8 *)(unaff_x20 + 0x100),*(undefined8 *)(unaff_x20 + 0x108),
                *(undefined8 *)(unaff_x20 + 0x110),*(undefined8 *)(unaff_x20 + 0x118),
                *(undefined8 *)(unaff_x20 + 0x120),*(undefined8 *)(unaff_x20 + 0x128),
                *(undefined8 *)(unaff_x20 + 0x130),*(undefined8 *)(unaff_x20 + 0x138),
                *(undefined8 *)(unaff_x20 + 0x140),*(undefined8 *)(unaff_x20 + 0x148),
                *(undefined8 *)(unaff_x20 + 0x150),*(undefined8 *)(unaff_x20 + 0x158),
                *(undefined8 *)(unaff_x20 + 0x160),*(undefined8 *)(unaff_x20 + 0x168),
                *(undefined8 *)(unaff_x20 + 0x170),*(undefined8 *)(unaff_x20 + 0x178),
                *(undefined8 *)(unaff_x20 + 0x180),*(undefined8 *)(unaff_x20 + 0x188),
                *(undefined8 *)(unaff_x20 + 400),*(undefined8 *)(unaff_x20 + 0x198),
                *(undefined8 *)(unaff_x20 + 0x1a0),*(undefined8 *)(unaff_x20 + 0x1a8),
                *(undefined8 *)(unaff_x20 + 0x1b0),*(undefined8 *)(unaff_x20 + 0x1b8),
                *(undefined8 *)(unaff_x20 + 0x1c0));
  return;
}



/* Entry: 1012430ec; end: 10124314b; -[_TtC38MyProfile3ScopedFactoryServiceProvider53MyProfile3ScopedFactoryServiceProviderSaberEntryPoint init] */

void FUN_1012430ec(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MyProfile3ScopedFactoryServiceProvider.MyProfile3ScopedFactoryServiceProviderSaberEntryPoint"
                      ,0x5c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101243118);
  (*pcVar1)();
}



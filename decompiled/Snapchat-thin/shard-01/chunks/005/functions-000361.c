/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1011930b4; end: 1011930e3; -[MemoriesSnapsTabQuotaStatusBarSectionController setSelectMode:] */

void FUN_1011930b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_1011924d0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1011930e4; end: 10119317b; -[MemoriesSnapsTabQuotaStatusBarSectionController sectionController:cellForViewModel:atIndex:] */

void FUN_1011930e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  undefined1 auStack_50 [32];
  
  puVar1 = auStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_4);
  func_0x000107c615e8(param_4);
  FUN_101193958(auStack_50,param_5);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000100183ab8(auStack_50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10119317c; end: 10119323b; -[MemoriesSnapsTabQuotaStatusBarSectionController sectionController:sizeForViewModel:atIndex:] */

undefined1  [16]
FUN_10119317c(double param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_5);
  func_0x000107c61174();
  func_0x000107c60234(auStack_50,param_5);
  func_0x000107c615e8(param_5);
  lVar1 = param_2;
  func_0x000107c3fd68();
  func_0x000107c61180();
  if (lVar1 == 0) {
    func_0x000100183ab8(auStack_50);
    func_0x000107c61170(param_2);
    param_1 = 0.0;
  }
  else {
    func_0x000107c403a4();
    func_0x000107c615e8(lVar1);
    func_0x000100183ab8(auStack_50);
    func_0x000107c61170(param_2);
    if (0.0 < param_1) {
      uVar2 = 0x4050000000000000;
      goto LAB_101193228;
    }
  }
  uVar2 = 0;
LAB_101193228:
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10119323c; end: 1011932f3; -[MemoriesSnapsTabQuotaStatusBarSectionController sectionController:viewModelsForObject:] */

void FUN_10119323c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_50 [32];
  
  puVar1 = auStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_4);
  func_0x000107c615e8(param_4);
  FUN_101193ac4(auStack_50);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000100183ab8(auStack_50);
  uVar2 = 0x112d62bf0;
  func_0x0001000285a8(0x112d62bf0,&UNK_10d928a48);
  puVar3 = puVar1;
  func_0x000107c5fc48(puVar1,uVar2);
  func_0x000107c6142c(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1011932f4; end: 10119331f; -[MemoriesSnapsTabQuotaStatusBarSectionController init] */

void FUN_1011932f4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesSnapsTabQuotaStatusBarPlugin.MemoriesSnapsTabQuotaStatusBarSectionController"
                      ,0x54,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101193320);
  (*pcVar1)();
}



/* Entry: 101193320; end: 101193323;  */

void FUN_101193320(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101193324; end: 101193333; -[MemoriesSnapsTabQuotaStatusBarSectionController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101193324(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d63018));
  return;
}



/* Entry: 101193334; end: 10119345f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101193334(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  undefined8 uStack_58;
  undefined1 auStack_50 [32];
  
  func_0x0001000bb420(param_1,auStack_50);
  FUN_10119265c();
  puVar1 = &uStack_58;
  func_0x000107c6147c(puVar1,auStack_50,PTR___sypN_11034f1a8 + 8,param_1,6);
  if ((int)puVar1 != 0) {
    lVar4 = *(long *)(unaff_x20 + _DAT_112d63040);
    if (lVar4 == 0) {
      lVar4 = *(long *)(unaff_x20 + _DAT_112d63048);
      if (lVar4 != 0) {
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar4 != 0) {
          lVar3 = lVar4;
          func_0x000107c509b4();
          func_0x000107c61180();
          if (lVar3 != 0) {
            FUN_101193460(uStack_58,lVar3);
            func_0x000107c61170(uStack_58);
            func_0x000107c615e8(lVar4);
            func_0x000107c615e8(lVar3);
            return;
          }
          func_0x000107c61170(uStack_58);
          func_0x000107c615e8(lVar4);
          return;
        }
      }
    }
    else {
      puVar2 = PTR_PTR_1126a6490;
      func_0x000107c610f8(PTR_PTR_1126a6490);
      func_0x000107c61174(lVar4);
      func_0x000107c453e4(puVar2);
      func_0x000107c5a588(lVar4);
      func_0x000107c61170(lVar4);
      func_0x000107c61170(puVar2);
    }
    func_0x000107c61170(uStack_58);
  }
  return;
}



/* Entry: 101193460; end: 101193767;  */

/* WARNING: Possible PIC construction at 0x0001011934f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101193578: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101193598: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011935e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101193604: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101193650: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101193670: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101193698: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011936c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011936e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101193730: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011936e8) */
/* WARNING: Removing unreachable block (ram,0x0001011936c8) */
/* WARNING: Removing unreachable block (ram,0x00010119369c) */
/* WARNING: Removing unreachable block (ram,0x000101193674) */
/* WARNING: Removing unreachable block (ram,0x000101193654) */
/* WARNING: Removing unreachable block (ram,0x000101193608) */
/* WARNING: Removing unreachable block (ram,0x0001011935e8) */
/* WARNING: Removing unreachable block (ram,0x00010119359c) */
/* WARNING: Removing unreachable block (ram,0x00010119357c) */
/* WARNING: Removing unreachable block (ram,0x0001011934f8) */
/* WARNING: Removing unreachable block (ram,0x000101193734) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101193460(void)

{
  undefined8 unaff_x20;
  
  func_0x000107c610f8(PTR_PTR_1126a6490);
  func_0x000107c453e4();
  func_0x000107c610f8(PTR_PTR_1126a6498);
  func_0x000107c49520();
  func_0x000107c61180();
  func_0x000107c5a050();
  func_0x000107c40510();
  func_0x000107c61180();
  func_0x000107c3d89c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
  return;
}



/* Entry: 101193768; end: 1011937cf; -[MemoriesSnapsTabQuotaStatusBarCell bindViewModel:] */

void FUN_101193768(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_40,param_3);
  func_0x000107c615e8(param_3);
  FUN_101193334(auStack_40);
  func_0x000107c61170(param_1);
  func_0x000100183ab8(auStack_40);
  return;
}



/* Entry: 1011937d0; end: 101193853; -[MemoriesSnapsTabQuotaStatusBarCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011937d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lStack_50;
  long lStack_48;
  
  lVar1 = param_5;
  func_0x000107c614f0();
  *(undefined8 *)(param_5 + _DAT_112d63040) = 0;
  *(undefined8 *)(param_5 + _DAT_112d63048) = 0;
  lStack_50 = param_5;
  lStack_48 = lVar1;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&lStack_50,PTR_s_initWithFrame__1125e2948);
  return;
}



/* Entry: 101193854; end: 1011938eb; -[MemoriesSnapsTabQuotaStatusBarCell initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101193854(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lStack_40;
  long lStack_38;
  
  plVar3 = &lStack_40;
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112d63040) = 0;
  *(undefined8 *)(param_1 + _DAT_112d63048) = 0;
  puVar1 = PTR_s_initWithCoder__1125dd730;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_40,puVar1,param_3);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  if (plVar3 != (long *)0x0) {
    func_0x000107c61170(plVar3);
  }
  return (undefined1 *)plVar3;
}



/* Entry: 1011938ec; end: 10119391f;  */

void FUN_1011938ec(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101193920; end: 101193957; -[MemoriesSnapsTabQuotaStatusBarCell .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010119393c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101193940) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101193920(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d63040));
  return;
}



/* Entry: 101193958; end: 101193ac3;  */

/* WARNING: Possible PIC construction at 0x000101193a98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101193a9c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101193958(void)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined1 auStack_58 [24];
  
  lVar2 = unaff_x20;
  func_0x000107c3fd68();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000101193b8c();
  if (lVar2 == 0) {
    func_0x000107c610f8(lVar3);
  }
  else {
    func_0x000107c614e8(lVar3);
    lVar4 = lVar2;
    func_0x000107c417d4();
    func_0x000107c61180();
    lVar5 = lVar4;
    func_0x000107c61480();
    if (lVar5 != 0) {
      uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112d63018);
      uVar6 = *(undefined8 *)(lVar5 + _DAT_112d63048);
      *(undefined8 *)(lVar5 + _DAT_112d63048) = uVar7;
      func_0x000107c61170(uVar6);
      lVar3 = _DAT_112d63010;
      func_0x000107c61428(unaff_x20 + _DAT_112d63010,auStack_58,0,0);
      uVar1 = *(undefined1 *)(unaff_x20 + lVar3);
      func_0x000107c61174(uVar7);
      func_0x000107c61174(lVar4);
      func_0x000107e8846c(lVar5,uVar1);
      func_0x000107c61170(lVar4);
      func_0x000107c615e8(lVar2);
      return lVar5;
    }
    func_0x000107c61170(lVar4);
    func_0x000107c610f8(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c013df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(0,0,0,0);
  return lVar3;
}



/* Entry: 101193ac4; end: 101193b6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101193ac4(undefined8 param_1)

{
  long *plVar1;
  long lStack_48;
  undefined1 auStack_40 [32];
  
  func_0x0001000bb420(param_1,auStack_40);
  FUN_10119265c();
  plVar1 = &lStack_48;
  func_0x000107c6147c(plVar1,auStack_40,PTR___sypN_11034f1a8 + 8,param_1,6);
  if (((ulong)plVar1 & 1) != 0) {
    if (*(long *)(lStack_48 + _DAT_112d63020) == 0) {
      func_0x000107c61170(lStack_48);
    }
    else {
      FUN_10118dc7c();
      func_0x000107c613fc();
      plVar1[3] = 3;
      plVar1[2] = 1;
      plVar1[4] = lStack_48;
    }
  }
  return;
}



/* Entry: 101193b6c; end: 101193bab;  */

void FUN_101193b6c(void)

{
  func_0x000107c61168(&PTR_PTR_1127b3fe0);
  return;
}



/* Entry: 101193bac; end: 101193beb;  */

void FUN_101193bac(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 101193bec; end: 101193c33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101193bec(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long unaff_x20;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  undefined1 auStack_f0 [24];
  long *plStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined1 auStack_c0 [24];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar6 = *(long *)(unaff_x20 + 0x18);
  lVar7 = *(long *)(unaff_x20 + 0x20);
  uVar9 = *param_1;
  func_0x000107c61428(lVar2 + 0x10,auStack_78,0,0,*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30));
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    puVar3 = &UNK_11038bf38;
    func_0x000107c613fc(&UNK_11038bf38,0x18,7);
    plVar10 = (long *)(puVar3 + 0x10);
    *plVar10 = 0;
    uStack_88 = 0x101193c00;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    pcStack_98 = FUN_101192cc0;
    puStack_90 = &UNK_11038bf50;
    ppuVar4 = &puStack_a8;
    puStack_80 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    puVar1 = puStack_80;
    func_0x000107c6157c(puVar3);
    func_0x000107c61574(puVar1);
    func_0x000107c4c6bc(uVar9);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61428(plVar10,&puStack_a8,0,0);
    lVar11 = *plVar10;
    lVar5 = lVar11;
    func_0x000107c61174(lVar11);
    func_0x000107c61574(puVar3);
    func_0x000107c4b940(lVar6);
    if ((lVar11 == 0) &&
       (func_0x000107c61428(lVar7 + 0x10,auStack_f0,0,0), *(char *)(lVar7 + 0x10) != '\x01')) {
      func_0x000107c5d278(lVar6);
      func_0x000107c61170(lVar2);
    }
    else {
      func_0x000107c61428(lVar7 + 0x10,auStack_c0,1,0);
      *(bool *)(lVar7 + 0x10) = lVar11 != 0;
      func_0x000107c5d278();
      FUN_101192700();
      lVar7 = lVar6;
      FUN_10119265c();
      lVar8 = lVar7;
      func_0x000107c610f8();
      *(long *)(lVar8 + _DAT_112d63020) = lVar11;
      *(long *)(lVar8 + _DAT_112d63028) = lVar6;
      puVar3 = PTR_s_init_1125d9248;
      lStack_d0 = lVar8;
      lStack_c8 = lVar7;
      func_0x000107c61174(lVar5);
      plVar10 = &lStack_d0;
      func_0x000107c61154(plVar10,puVar3);
      plStack_d8 = plVar10;
      func_0x000100087f6c(&plStack_d8);
      func_0x000107c61170(plVar10);
      func_0x000107c61170(lVar5);
      lVar5 = lVar2;
    }
    func_0x000107c61170(lVar5);
    return;
  }
  return;
}



/* Entry: 101193c34; end: 101193cc3;  */

void FUN_101193c34(void)

{
  long lVar1;
  long *plVar2;
  long unaff_x20;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  plVar2 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x101193c80;
  plVar2[2] = lVar3;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar3 = lVar1;
  func_0x000107c5fce8();
  plVar2[3] = lVar3;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101192b6c,lVar1,lVar3);
  return;
}



/* Entry: 101193cc4; end: 101193d33;  */

void FUN_101193cc4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101193e40;
  FUN_100ffbb74(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 101193d34; end: 101193d83;  */

void FUN_101193d34(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101193d84;
  plVar3[2] = lVar2;
  plVar3[3] = lVar1;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[4] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1011929c8,lVar1,lVar2);
  return;
}



/* Entry: 101193d84; end: 101193dbf;  */

void FUN_101193d84(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101193dbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101193dc0; end: 101193e2f;  */

void FUN_101193dc0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101193e44;
  FUN_100f7cc44(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 101193e30; end: 101193e53;  */

void FUN_101193e30(long param_1,long param_2)

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



/* Entry: 101193e54; end: 101193eb7;  */

void FUN_101193e54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  return;
}



/* Entry: 101193eb8; end: 101194183;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101193eb8(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long unaff_x20;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  plVar10 = &lStack_a0;
  uVar11 = *(undefined8 *)(*(long *)(unaff_x20 + 0x28) + _DAT_1130806b8);
  func_0x000107c6157c(uVar11);
  func_0x0001000d224c(&puStack_90);
  func_0x000107c61574(uVar11);
  puVar3 = puStack_90;
  func_0x000107c5ad7c();
  func_0x000107c615e8(puStack_90);
  if ((int)puVar3 != 0) {
    uVar11 = *(undefined8 *)(unaff_x20 + 0x18);
    lVar9 = *(long *)(unaff_x20 + 0x20);
    uVar13 = *(undefined8 *)(unaff_x20 + 0x30);
    uVar12 = *(undefined8 *)(unaff_x20 + 0x10);
    uVar4 = uVar12;
    func_0x000107c3daf8();
    func_0x000107c61180();
    uVar5 = uVar12;
    func_0x000107c4eaa8();
    func_0x000107c61180();
    uVar14 = *(undefined8 *)(unaff_x20 + 0x38);
    puVar6 = PTR_PTR_1126ae720;
    func_0x000107c61168();
    puVar3 = &UNK_11038c0c8;
    func_0x000107c613fc(&UNK_11038c0c8,0x30,7);
    *(undefined8 *)(puVar3 + 0x10) = uVar13;
    *(undefined8 *)(puVar3 + 0x18) = uVar4;
    *(undefined8 *)(puVar3 + 0x20) = uVar5;
    *(undefined8 *)(puVar3 + 0x28) = uVar14;
    pcStack_70 = FUN_101194184;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    uStack_80 = 0x10118e848;
    puStack_78 = &UNK_11038c0e0;
    ppuVar7 = &puStack_90;
    puStack_68 = puVar3;
    func_0x000107c60bc4(ppuVar7);
    puVar3 = puStack_68;
    func_0x000107c61174(uVar13);
    func_0x000107c615f0(uVar4);
    func_0x000107c61174(uVar5);
    func_0x000107c61174(uVar14);
    func_0x000107c61574(puVar3);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar7);
    uVar13 = uVar12;
    func_0x000107c4dd50();
    func_0x000107c61180();
    puVar3 = &UNK_11038c118;
    func_0x000107c613fc(&UNK_11038c118,0x18,7);
    *(undefined8 *)(puVar3 + 0x10) = uVar13;
    uVar14 = *(undefined8 *)(lVar9 + _DAT_11303e8c0);
    uVar13 = *(undefined8 *)(lVar9 + _DAT_11303e8c8);
    func_0x000107c5dbd4();
    func_0x000107c61180();
    lVar8 = 0;
    FUN_101193b6c();
    lVar9 = lVar8;
    func_0x000107c610f8();
    *(undefined8 *)(lVar9 + _DAT_112d62fe8) = uVar14;
    *(undefined8 *)(lVar9 + _DAT_112d62ff0) = uVar13;
    *(undefined8 *)(lVar9 + _DAT_112d62ff8) = uVar11;
    *(undefined **)(lVar9 + _DAT_112d63000) = puVar6;
    puVar1 = (undefined8 *)(lVar9 + _DAT_112d63008);
    *puVar1 = 0x1011941c8;
    puVar1[1] = puVar3;
    puVar2 = PTR_s_init_1125d9248;
    lStack_a0 = lVar9;
    lStack_98 = lVar8;
    func_0x000107c61174(puVar6);
    func_0x000107c6157c(puVar3);
    func_0x000107c61174(uVar14);
    func_0x000107c61174(uVar13);
    func_0x000107c61154(&lStack_a0,puVar2);
    func_0x000107c4e9e4(uVar12);
    func_0x000107c61180();
    func_0x000107c4fba8();
    func_0x000107c615e8(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(puVar6);
    func_0x000107c61574(puVar3);
    func_0x000107c61170(plVar10);
    func_0x000107c61170(uVar12);
  }
  return;
}



/* Entry: 101194184; end: 1011941ab;  */

void FUN_101194184(void)

{
  long unaff_x20;
  
  func_0x0001022a9490(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 1011941ac; end: 1011941d3;  */

void FUN_1011941ac(long param_1,long param_2)

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



/* Entry: 1011941d4; end: 10119421f;  */

void FUN_1011941d4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101194220; end: 10119423f;  */

void FUN_101194220(void)

{
  FUN_101193eb8();
  return;
}



/* Entry: 101194240; end: 101194247;  */

undefined8 FUN_101194240(void)

{
  return 0;
}



/* Entry: 101194248; end: 101194267;  */

void FUN_101194248(void)

{
  func_0x000107c61168(&PTR_PTR_112d631b0);
  return;
}



/* Entry: 101194268; end: 101194273; -[SCMemoriesSnapsTabQuotaStatusBarPluginEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101194268(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d63238;
  func_0x000107c61428(param_1 + _DAT_112d63238,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101194274; end: 10119427f; -[SCMemoriesSnapsTabQuotaStatusBarPluginEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101194274(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d63238;
  func_0x000107c61428(param_1 + _DAT_112d63238,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101194280; end: 10119428b; -[SCMemoriesSnapsTabQuotaStatusBarPluginEntryPoint composerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101194280(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d63240;
  func_0x000107c61428(param_1 + _DAT_112d63240,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10119428c; end: 101194297; -[SCMemoriesSnapsTabQuotaStatusBarPluginEntryPoint setComposerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10119428c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d63240;
  func_0x000107c61428(param_1 + _DAT_112d63240,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101194298; end: 1011942a3; -[SCMemoriesSnapsTabQuotaStatusBarPluginEntryPoint memoriesMonetizationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101194298(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d63248;
  func_0x000107c61428(param_1 + _DAT_112d63248,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011942a4; end: 1011942af; -[SCMemoriesSnapsTabQuotaStatusBarPluginEntryPoint setMemoriesMonetizationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011942a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d63248;
  func_0x000107c61428(param_1 + _DAT_112d63248,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011942b0; end: 1011942bb; -[SCMemoriesSnapsTabQuotaStatusBarPluginEntryPoint memoriesExperimentServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011942b0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d63250;
  func_0x000107c61428(param_1 + _DAT_112d63250,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011942bc; end: 1011942c7; -[SCMemoriesSnapsTabQuotaStatusBarPluginEntryPoint setMemoriesExperimentServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011942bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d63250;
  func_0x000107c61428(param_1 + _DAT_112d63250,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011942c8; end: 1011942d3; -[SCMemoriesSnapsTabQuotaStatusBarPluginEntryPoint lockedSnapsPageLauncherScopeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011942c8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d63258;
  func_0x000107c61428(param_1 + _DAT_112d63258,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011942d4; end: 1011942df; -[SCMemoriesSnapsTabQuotaStatusBarPluginEntryPoint setLockedSnapsPageLauncherScopeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011942d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d63258;
  func_0x000107c61428(param_1 + _DAT_112d63258,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011942e0; end: 1011942eb; -[SCMemoriesSnapsTabQuotaStatusBarPluginEntryPoint composerCoreUIServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011942e0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d63260;
  func_0x000107c61428(param_1 + _DAT_112d63260,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011942ec; end: 10119432f;  */

void FUN_1011942ec(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 101194330; end: 10119433b; -[SCMemoriesSnapsTabQuotaStatusBarPluginEntryPoint setComposerCoreUIServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101194330(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d63260;
  func_0x000107c61428(param_1 + _DAT_112d63260,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10119433c; end: 10119438f;  */

void FUN_10119433c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101194390; end: 1011945bb;  */

/* WARNING: Possible PIC construction at 0x0001011944b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011944c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011944d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101194580: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101194590: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101194560: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101194570: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101194550: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101194574) */
/* WARNING: Removing unreachable block (ram,0x000101194564) */
/* WARNING: Removing unreachable block (ram,0x000101194594) */
/* WARNING: Removing unreachable block (ram,0x000101194584) */
/* WARNING: Removing unreachable block (ram,0x0001011944dc) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x0001011944cc) */
/* WARNING: Removing unreachable block (ram,0x0001011944bc) */
/* WARNING: Removing unreachable block (ram,0x000101194554) */

void FUN_101194390(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c40014();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = unaff_x20;
      func_0x000107c4cbf4();
      func_0x000107c61180();
      if (lVar3 == 0) {
        func_0x000107c61170(lVar1);
        lVar1 = lVar2;
      }
      else {
        lVar4 = unaff_x20;
        func_0x000107c4cb8c();
        func_0x000107c61180();
        if (lVar4 == 0) {
          func_0x000107c61170(lVar1);
          lVar1 = lVar2;
        }
        else {
          lVar5 = unaff_x20;
          func_0x000107c4b97c();
          func_0x000107c61180();
          if (lVar5 != 0) {
            func_0x000107c3ff88();
            func_0x000107c61180();
            if (unaff_x20 != 0) {
              lVar6 = 0;
              FUN_101194248();
              func_0x000107c613fc();
              *(long *)(lVar6 + 0x10) = lVar1;
              *(long *)(lVar6 + 0x18) = lVar2;
              *(long *)(lVar6 + 0x20) = lVar3;
              *(long *)(lVar6 + 0x28) = lVar4;
              *(long *)(lVar6 + 0x30) = lVar5;
              *(long *)(lVar6 + 0x38) = unaff_x20;
              func_0x000107c61174(lVar1);
              func_0x000107c61174(lVar2);
              func_0x000107c61174(lVar3);
              func_0x000107c61174(lVar4);
              func_0x000107c61174(lVar5);
              func_0x000107c61174(unaff_x20);
              FUN_101193eb8();
              lVar1 = unaff_x20;
            }
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 1011945bc; end: 1011945e3; -[SCMemoriesSnapsTabQuotaStatusBarPluginEntryPoint begin] */

void FUN_1011945bc(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101194390();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1011945e4; end: 101194627; -[SCMemoriesSnapsTabQuotaStatusBarPluginEntryPoint end] */

void FUN_1011945e4(undefined8 param_1)

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



/* Entry: 101194628; end: 10119496f;  */

void FUN_101194628(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2ffffffffffffff0) || (param_3 != -0x7ffffffef10ed9b0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000010,0x800000010ef12650,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (((param_2 == -0x2fffffffffffffe4) && (param_3 == -0x7ffffffef10d61d0)) ||
           (func_0x000107c605b8(0xd00000000000001c,0x800000010ef29e30,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c56580();
        }
        else {
          uVar2 = 0;
          if (((param_2 == -0x2fffffffffffffe6) && (param_3 == -0x7ffffffef10e20c0)) ||
             (func_0x000107c605b8(0xd00000000000001a,0x800000010ef1df40,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c56550();
          }
          else {
            uVar2 = 0;
            if (((param_2 == -0x2fffffffffffffdc) && (param_3 == -0x7ffffffef10d61b0)) ||
               (func_0x000107c605b8(0xd000000000000024,0x800000010ef29e50,param_2,param_3,0),
               (uVar2 & 1) != 0)) {
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c56098();
            }
            else {
              uVar2 = 0;
              if (((param_2 != -0x2fffffffffffffea) || (param_3 != -0x7ffffffef10e63d0)) &&
                 (func_0x000107c605b8(0xd000000000000016,0x800000010ef19c30,param_2,param_3,0),
                 (uVar2 & 1) == 0)) {
                func_0x000107c602fc(0x15);
                func_0x000107c6142c(0xe000000000000000);
                func_0x000107c5fb78(param_2,param_3);
                func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                    "MemoriesSnapsTabQuotaStatusBarPlugin/SCMemoriesSnapsTabQuotaStatusBarPluginEntryPoint.swift"
                                    ,0x5b,2,0x3d,0);
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x101194970);
                (*pcVar1)();
              }
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c53680();
            }
          }
        }
        goto LAB_1011946b4;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c536e0();
  }
LAB_1011946b4:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101194970; end: 101194a1b; -[SCMemoriesSnapsTabQuotaStatusBarPluginEntryPoint setValue:forIvarName:] */

void FUN_101194970(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101194628(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101194a1c; end: 101194adf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101194a1c(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d63238,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d63240,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d63248,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d63250,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d63258,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d63260,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d63268) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101194ae0; end: 101194aff; -[SCMemoriesSnapsTabQuotaStatusBarPluginEntryPoint init] */

void FUN_101194ae0(void)

{
  FUN_101194a1c();
  return;
}



/* Entry: 101194b00; end: 101194b33;  */

void FUN_101194b00(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101194b34; end: 101194bbb; -[SCMemoriesSnapsTabQuotaStatusBarPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101194b34(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d63238);
  func_0x000107c61610(param_1 + _DAT_112d63240);
  func_0x000107c61610(param_1 + _DAT_112d63248);
  func_0x000107c61610(param_1 + _DAT_112d63250);
  func_0x000107c61610(param_1 + _DAT_112d63258);
  func_0x000107c61610(param_1 + _DAT_112d63260);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d63268));
  return;
}



/* Entry: 101194bbc; end: 101194bdb;  */

void FUN_101194bbc(void)

{
  func_0x000107c61168(&PTR_PTR_1127b4290);
  return;
}



/* Entry: 101194bdc; end: 101194c73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101194bdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112d63298) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d632a0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112d632a8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112d632b0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112d632b8) = param_4;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101194c74; end: 101194c93;  */

void FUN_101194c74(void)

{
  func_0x000107c61168(&PTR_PTR_1127b4378);
  return;
}



/* Entry: 101194c94; end: 101194eef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101194c94(void)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  
  puVar1 = PTR_PTR_1126ae560;
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112d632a0);
  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112d632b0);
  uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112d632b8);
  lVar2 = 0;
  FUN_101195128();
  lVar5 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar5 + _DAT_112d632e8) = uVar9;
  *(undefined8 *)(lVar5 + _DAT_112d632f0) = uVar10;
  *(undefined8 *)(lVar5 + _DAT_112d632f8) = uVar11;
  puVar4 = PTR_s_init_1125d9248;
  lStack_60 = lVar5;
  lStack_58 = lVar2;
  func_0x000107c61174();
  func_0x000107c615f0(uVar10);
  func_0x000107c61174(uVar11);
  plVar3 = &lStack_60;
  func_0x000107c61154(plVar3,puVar4);
  puVar4 = PTR_PTR_1126b2650;
  func_0x000107c610f8();
  func_0x000107c480e8();
  lVar5 = *(long *)(unaff_x20 + _DAT_112d632a8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar5 == 0) {
    lVar5 = 0;
  }
  else {
    lVar2 = lVar5;
    func_0x000107c4da0c();
    func_0x000107c61180();
    func_0x000107c615e8(lVar5);
    lVar6 = lVar2;
    func_0x000107c5c6c0();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    puVar7 = &UNK_11038c1e0;
    func_0x000107c613fc(&UNK_11038c1e0,0x28,7);
    *(undefined8 *)(puVar7 + 0x10) = uVar9;
    *(undefined **)(puVar7 + 0x18) = puVar1;
    *(undefined **)(puVar7 + 0x20) = puVar4;
    pcStack_70 = FUN_101195034;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    pcStack_80 = FUN_101194ef0;
    puStack_78 = &UNK_11038c1f8;
    ppuVar8 = &puStack_90;
    puStack_68 = puVar7;
    func_0x000107c60bc4(ppuVar8);
    puVar7 = puStack_68;
    func_0x000107c61174(uVar9);
    func_0x000107c61174(puVar1);
    func_0x000107c61174(puVar4);
    func_0x000107c61574(puVar7);
    lVar5 = lVar6;
    func_0x000107c5c320();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c61170(lVar6);
  }
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112d63298);
  *(long *)(unaff_x20 + _DAT_112d63298) = lVar5;
  func_0x000107c61170(uVar9);
  puVar7 = puVar1;
  func_0x000107c43bf4(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(plVar3);
  func_0x000107c61170(puVar4);
  return puVar7;
}



/* Entry: 101194ef0; end: 101194f3b;  */

void FUN_101194ef0(long param_1,undefined8 param_2)

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



/* Entry: 101194f3c; end: 101194f6f; -[_TtC36SCMemoriesSnapsTabBackupBannerPlugin34MemoriesSnapsTabBackupBannerPlugin viewModel] */

void FUN_101194f3c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101194c94();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101194f70; end: 101194fcb; -[_TtC36SCMemoriesSnapsTabBackupBannerPlugin34MemoriesSnapsTabBackupBannerPlugin init] */

void FUN_101194f70(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMemoriesSnapsTabBackupBannerPlugin.MemoriesSnapsTabBackupBannerPlugin",0x47
                      ,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101194f9c);
  (*pcVar1)();
}



/* Entry: 101194fcc; end: 101195033; -[_TtC36SCMemoriesSnapsTabBackupBannerPlugin34MemoriesSnapsTabBackupBannerPlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101194fe8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101195018: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101194fec) */
/* WARNING: Removing unreachable block (ram,0x00010119501c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101194fcc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d632a0));
  return;
}



/* Entry: 101195034; end: 101195097;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101195034(long param_1)

{
  undefined8 uVar1;
  int iVar2;
  ulong uVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  uVar3 = *(ulong *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c43c40();
  iVar2 = (int)uVar3;
  if ((uVar3 & 1) == 0) {
    if (((*(byte *)(param_1 + _DAT_112ff4ce8) & 1) == 0) && (func_0x000107c308f0(), iVar2 == 0)) {
      uVar4 = 0;
    }
  }
  else {
    uVar4 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_completeWithValue__1125ae900,uVar4);
  return;
}



/* Entry: 101195098; end: 1011950b3;  */

void FUN_101195098(long param_1,long param_2)

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



/* Entry: 1011950b4; end: 101195127;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011950b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112d632e8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112d632f0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112d632f8) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101195128; end: 101195147;  */

void FUN_101195128(void)

{
  func_0x000107c61168(&PTR_PTR_1127b4478);
  return;
}



/* Entry: 101195148; end: 10119519b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101195148(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  func_0x000107c54d38(*(undefined8 *)(unaff_x20 + _DAT_112d632e8),param_2,1);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112d632f0);
  func_0x000107c561d0(uVar4,param_2,1);
  func_0x000107c594e8(uVar4,param_2,0);
  puVar2 = PTR_PTR_1126b2660;
  func_0x000107c610f8(PTR_PTR_1126b2660);
  func_0x000107c453e4();
  func_0x000107c52140();
  func_0x000107c52bd4(puVar2,param_2,3);
  lVar3 = *(long *)(unaff_x20 + _DAT_112d632f0);
  func_0x000107c4d8f0();
  if (-1 < lVar3) {
    func_0x000107c56b94(puVar2,param_2,lVar3);
    lVar3 = *(long *)(unaff_x20 + _DAT_112d632f8);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c4bfb0();
      func_0x000107c615e8(lVar3);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011954e8);
  (*pcVar1)();
}



/* Entry: 10119519c; end: 1011951ff; -[_TtC36SCMemoriesSnapsTabBackupBannerPlugin47MemoriesSnapsTabBackupBannerPluginActionHandler didTapCTA] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10119519c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112d632e8);
  func_0x000107c61174();
  func_0x000107c54d38(uVar2,param_2,1);
  lVar1 = _DAT_112d632f0;
  func_0x000107c561d0(*(undefined8 *)(param_1 + _DAT_112d632f0),param_2,1);
  func_0x000107c594e8(*(undefined8 *)(param_1 + lVar1),param_2,0);
  func_0x000101195444(1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101195200; end: 10119534b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101195200(void)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long extraout_x8;
  long lVar4;
  long unaff_x20;
  ulong uVar5;
  long lVar6;
  double dVar7;
  
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  uVar5 = *(ulong *)(unaff_x20 + _DAT_112d632f0);
  uVar3 = uVar5;
  func_0x000107c5b550();
  lVar4 = 0x15180;
  if (uVar3 != 0) {
    if (uVar3 == 1) {
      lVar4 = 0x93a80;
      if (SUB168(SEXT816(0x15180) * SEXT816(7),8) != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10119529c);
        (*pcVar1)();
      }
    }
    else {
      lVar4 = 0x278d00;
      if (SUB168(SEXT816(0x15180) * SEXT816(0x1e),8) != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10119534c);
        (*pcVar1)();
      }
    }
  }
  dVar7 = (double)lVar4;
  func_0x000107c594ec(dVar7,uVar5);
  uVar3 = uVar5;
  func_0x000107c5b550();
  if (uVar3 < 0x7fffffffffffffff) {
    uVar3 = uVar5;
    func_0x000107c5b550();
    if (0xfffffffffffffffe < uVar3) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101195348);
      (*pcVar1)();
    }
    func_0x000107c594e8(uVar5);
  }
  func_0x000107c5eea0(&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5ee8c();
  (**(code **)(lVar6 + 8))
            (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
  func_0x000107c55a94(dVar7,uVar5);
  func_0x000101195444(0);
  return;
}



/* Entry: 10119534c; end: 1011953cb; -[_TtC36SCMemoriesSnapsTabBackupBannerPlugin47MemoriesSnapsTabBackupBannerPluginActionHandler didDismiss] */

void FUN_10119534c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101195200();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1011953cc; end: 1011954e7; -[_TtC36SCMemoriesSnapsTabBackupBannerPlugin47MemoriesSnapsTabBackupBannerPluginActionHandler didShow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011953cc(long param_1,undefined8 param_2)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  lVar1 = _DAT_112d632f0;
  uVar5 = *(ulong *)(param_1 + _DAT_112d632f0);
  lVar3 = param_1;
  func_0x000107c61174();
  func_0x000107c4d8f0();
  if (uVar5 < 0x7fffffffffffffff) {
    uVar4 = *(ulong *)(param_1 + lVar1);
    uVar5 = uVar4;
    func_0x000107c4d8f0();
    if (0xfffffffffffffffe < uVar5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101195444);
      (*pcVar2)();
    }
    func_0x000107c56b90(uVar4,param_2,uVar5 + 1);
  }
  func_0x000101195444(2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 1011954e8; end: 101195543; -[_TtC36SCMemoriesSnapsTabBackupBannerPlugin47MemoriesSnapsTabBackupBannerPluginActionHandler init] */

void FUN_1011954e8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMemoriesSnapsTabBackupBannerPlugin.MemoriesSnapsTabBackupBannerPluginActionHandler"
                      ,0x54,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101195514);
  (*pcVar1)();
}



/* Entry: 101195544; end: 10119558b; -[_TtC36SCMemoriesSnapsTabBackupBannerPlugin47MemoriesSnapsTabBackupBannerPluginActionHandler .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101195560: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101195564) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101195544(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d632e8));
  return;
}



/* Entry: 10119558c; end: 1011955e3;  */

void FUN_10119558c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  return;
}



/* Entry: 1011955e4; end: 10119585f;  */

/* WARNING: Possible PIC construction at 0x00010119566c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101195798: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011957a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010119579c) */
/* WARNING: Removing unreachable block (ram,0x000101195670) */
/* WARNING: Removing unreachable block (ram,0x000101195674) */
/* WARNING: Removing unreachable block (ram,0x000101195698) */
/* WARNING: Removing unreachable block (ram,0x0001011957d8) */
/* WARNING: Removing unreachable block (ram,0x00010119580c) */
/* WARNING: Removing unreachable block (ram,0x000101195844) */
/* WARNING: Removing unreachable block (ram,0x000101195848) */
/* WARNING: Removing unreachable block (ram,0x00010119584c) */
/* WARNING: Removing unreachable block (ram,0x0001011957dc) */
/* WARNING: Removing unreachable block (ram,0x0001011957e4) */
/* WARNING: Removing unreachable block (ram,0x0001011956c8) */
/* WARNING: Removing unreachable block (ram,0x0001011957ac) */
/* WARNING: Removing unreachable block (ram,0x0001011957b0) */
/* WARNING: Removing unreachable block (ram,0x0001011957b4) */

void FUN_1011955e4(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = 0;
  func_0x000107c5eea4();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar2 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c42eac();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101195860);
  (*pcVar1)();
}



/* Entry: 101195860; end: 1011958a3;  */

void FUN_101195860(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1011958a4; end: 1011958c3;  */

void FUN_1011958a4(void)

{
  FUN_1011955e4();
  return;
}



/* Entry: 1011958c4; end: 1011958cb;  */

undefined8 FUN_1011958c4(void)

{
  return 0;
}



/* Entry: 1011958cc; end: 1011958eb;  */

void FUN_1011958cc(void)

{
  func_0x000107c61168(&PTR_PTR_112d63368);
  return;
}



/* Entry: 1011958ec; end: 1011958f7; -[SCMemoriesSnapsTabBackupBannerPluginEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011958ec(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d633e8;
  func_0x000107c61428(param_1 + _DAT_112d633e8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011958f8; end: 101195903; -[SCMemoriesSnapsTabBackupBannerPluginEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011958f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d633e8;
  func_0x000107c61428(param_1 + _DAT_112d633e8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101195904; end: 10119590f; -[SCMemoriesSnapsTabBackupBannerPluginEntryPoint featureSettingsServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101195904(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d633f0;
  func_0x000107c61428(param_1 + _DAT_112d633f0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101195910; end: 10119591b; -[SCMemoriesSnapsTabBackupBannerPluginEntryPoint setFeatureSettingsServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101195910(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d633f0;
  func_0x000107c61428(param_1 + _DAT_112d633f0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10119591c; end: 101195927; -[SCMemoriesSnapsTabBackupBannerPluginEntryPoint memoriesBackupService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10119591c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d633f8;
  func_0x000107c61428(param_1 + _DAT_112d633f8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101195928; end: 101195933; -[SCMemoriesSnapsTabBackupBannerPluginEntryPoint setMemoriesBackupService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101195928(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d633f8;
  func_0x000107c61428(param_1 + _DAT_112d633f8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101195934; end: 10119593f; -[SCMemoriesSnapsTabBackupBannerPluginEntryPoint memoriesUserDefaultsServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101195934(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d63400;
  func_0x000107c61428(param_1 + _DAT_112d63400,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101195940; end: 10119594b; -[SCMemoriesSnapsTabBackupBannerPluginEntryPoint setMemoriesUserDefaultsServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101195940(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d63400;
  func_0x000107c61428(param_1 + _DAT_112d63400,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10119594c; end: 101195957; -[SCMemoriesSnapsTabBackupBannerPluginEntryPoint userBlizzardServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10119594c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d63408;
  func_0x000107c61428(param_1 + _DAT_112d63408,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101195958; end: 10119599b;  */

void FUN_101195958(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10119599c; end: 1011959a7; -[SCMemoriesSnapsTabBackupBannerPluginEntryPoint setUserBlizzardServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10119599c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d63408;
  func_0x000107c61428(param_1 + _DAT_112d63408,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011959a8; end: 1011959fb;  */

void FUN_1011959a8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011959fc; end: 101195bc3;  */

/* WARNING: Possible PIC construction at 0x000101195afc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101195b0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101195b1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101195b9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101195b7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101195b6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101195b80) */
/* WARNING: Removing unreachable block (ram,0x000101195ba0) */
/* WARNING: Removing unreachable block (ram,0x000101195b20) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x000101195b10) */
/* WARNING: Removing unreachable block (ram,0x000101195b00) */
/* WARNING: Removing unreachable block (ram,0x000101195b70) */

void FUN_1011959fc(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = unaff_x20;
  func_0x000107c42eb0();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c4cb2c();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = unaff_x20;
      func_0x000107c4cce4();
      func_0x000107c61180();
      if (lVar4 != 0) {
        func_0x000107c5d900();
        func_0x000107c61180();
        if (unaff_x20 == 0) {
          func_0x000107c61170(lVar1);
          lVar1 = lVar2;
        }
        else {
          lVar5 = 0;
          FUN_1011958cc();
          func_0x000107c613fc();
          *(long *)(lVar5 + 0x10) = lVar1;
          *(long *)(lVar5 + 0x18) = lVar2;
          *(long *)(lVar5 + 0x20) = lVar3;
          *(long *)(lVar5 + 0x28) = lVar4;
          *(long *)(lVar5 + 0x30) = unaff_x20;
          func_0x000107c61174(lVar1);
          func_0x000107c61174(lVar2);
          func_0x000107c61174(lVar3);
          func_0x000107c61174(lVar4);
          func_0x000107c61174(unaff_x20);
          FUN_1011955e4();
          lVar1 = unaff_x20;
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 101195bc4; end: 101195beb; -[SCMemoriesSnapsTabBackupBannerPluginEntryPoint begin] */

void FUN_101195bc4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1011959fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101195bec; end: 101195c2f; -[SCMemoriesSnapsTabBackupBannerPluginEntryPoint end] */

void FUN_101195bec(undefined8 param_1)

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



/* Entry: 101195c30; end: 101195f0b;  */

void FUN_101195c30(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe9) || (param_3 != -0x7ffffffef10ef230)) {
      uVar2 = 0xd000000000000017;
      func_0x000107c605b8(0xd000000000000017,0x800000010ef10dd0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0xd000000000000015;
        if (((param_2 == -0x2fffffffffffffeb) && (param_3 == -0x7ffffffef10d5d70)) ||
           (func_0x000107c605b8(0xd000000000000015,0x800000010ef2a290,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c56514();
        }
        else {
          uVar2 = 0;
          if (((param_2 == -0x2fffffffffffffe4) && (param_3 == -0x7ffffffef10d7190)) ||
             (func_0x000107c605b8(0xd00000000000001c,0x800000010ef28e70,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c565f0();
          }
          else {
            if ((param_2 != -0x2fffffffffffffec) || (param_3 != -0x7ffffffef10ef610)) {
              uVar2 = 0;
              func_0x000107c605b8(0xd000000000000014,0x800000010ef109f0,param_2,param_3,0);
              if ((uVar2 & 1) == 0) {
                func_0x000107c602fc(0x15);
                func_0x000107c6142c(0xe000000000000000);
                func_0x000107c5fb78(param_2,param_3);
                func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                    "SCMemoriesSnapsTabBackupBannerPlugin/SCMemoriesSnapsTabBackupBannerPluginEntryPoint.swift"
                                    ,0x59,2,0x39,0);
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x101195f0c);
                (*pcVar1)();
              }
            }
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c5a2fc();
          }
        }
        goto LAB_101195cbc;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5491c();
  }
LAB_101195cbc:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101195f0c; end: 101195fb7; -[SCMemoriesSnapsTabBackupBannerPluginEntryPoint setValue:forIvarName:] */

void FUN_101195f0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101195c30(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101195fb8; end: 101196067;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101195fb8(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d633e8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d633f0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d633f8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d63400,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d63408,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d63410) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101196068; end: 101196087; -[SCMemoriesSnapsTabBackupBannerPluginEntryPoint init] */

void FUN_101196068(void)

{
  FUN_101195fb8();
  return;
}



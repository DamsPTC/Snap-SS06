/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10067326c; end: 1006732c7;  */

void FUN_10067326c(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c61168(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61490(param_2,puVar1,0,0,0);
  uVar2 = 0;
  FUN_1002ed07c();
  param_1[3] = uVar2;
  *param_1 = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_2);
  return;
}



/* Entry: 1006732c8; end: 1006732eb;  */

long * FUN_1006732c8(long *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(*(long *)(param_2 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) != 0) {
    uVar2 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(*param_1 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  }
  return param_1;
}



/* Entry: 1006732ec; end: 10067333b;  */

/* WARNING: Possible PIC construction at 0x000100673328: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010067332c) */

void FUN_1006732ec(long param_1,undefined8 param_2)

{
  func_0x000107c61174(param_2);
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  if (param_1 != 0) {
    func_0x000107c3c304(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10067333c; end: 1006734a3; -[SCStickerItemBitmojiPresentationModelProvider _renderStyleUpdated:] */

/* WARNING: Possible PIC construction at 0x00010067345c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010067346c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010067347c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100673460) */
/* WARNING: Removing unreachable block (ram,0x000100673470) */

void FUN_10067333c(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  func_0x000107c49820();
  puVar1 = *(undefined **)(param_1 + 8);
  func_0x000107c5dc0c();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c500f4();
  if (puVar2 != param_3) {
    uVar8 = *(undefined8 *)(param_1 + 8);
    puVar2 = PTR_PTR_1126bb278;
    func_0x000107c610f4(PTR_PTR_1126bb278);
    puVar3 = puVar1;
    func_0x000107c3e544(puVar1);
    func_0x000107c61180();
    puVar4 = puVar1;
    func_0x000107c4397c(puVar1);
    func_0x000107c61180();
    puVar5 = puVar1;
    func_0x000107c411cc(puVar1);
    func_0x000107c61180();
    puVar6 = puVar1;
    func_0x000107c45104(puVar1);
    puVar7 = puVar1;
    func_0x000107c42e38(puVar1);
    func_0x000107c4a2cc(puVar1);
    func_0x000107c4ee4c();
    func_0x000107c61180();
    func_0x000107c3e518();
    func_0x000107c458d0(puVar2,param_2,puVar3,puVar4,puVar5,puVar6,puVar7,puVar1);
    func_0x000107c4d664(uVar8,param_2,puVar2);
    puVar1 = puVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1006734a4; end: 1006734a7; -[SCBehaviorSubject value] */

void FUN_1006734a4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d1170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_mostRecentValue_112611e70);
  return;
}



/* Entry: 1006734a8; end: 1006734af; -[CTPBitmojiStickerPresentationModel renderStyleOverride] */

undefined8 FUN_1006734a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1006734b0; end: 100673623; -[SCFlatMapObserver proxyObserverDidComplete:] */

/* WARNING: Possible PIC construction at 0x0001006735a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001006735a4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006734b0(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  
  func_0x000107c61174(param_3);
  lVar10 = (long)_DAT_112796868;
  func_0x000107c60d88(param_1 + lVar10);
  *(long *)(param_1 + _DAT_11279686c) = *(long *)(param_1 + _DAT_11279686c) + -1;
  puVar2 = (undefined8 *)(param_1 + _DAT_112796874);
  plVar5 = puVar2 + 1;
  plVar4 = (long *)*plVar5;
  plVar7 = plVar4;
  plVar8 = plVar5;
  if (plVar4 != (long *)0x0) {
    do {
      lVar9 = 8;
      if (param_3 <= (ulong)plVar7[4]) {
        lVar9 = 0;
        plVar8 = plVar7;
      }
      puVar1 = (undefined8 *)((long)plVar7 + lVar9);
      plVar7 = (long *)*puVar1;
    } while ((long *)*puVar1 != (long *)0x0);
    if ((plVar8 != plVar5) && ((ulong)plVar8[4] <= param_3)) {
      plVar7 = plVar8;
      plVar5 = (long *)plVar8[1];
      if ((long *)plVar8[1] == (long *)0x0) {
        do {
          plVar6 = (long *)plVar7[2];
          bVar3 = plVar7 != (long *)*plVar6;
          plVar7 = plVar6;
        } while (bVar3);
      }
      else {
        do {
          plVar6 = plVar5;
          plVar5 = (long *)*plVar6;
        } while ((long *)*plVar6 != (long *)0x0);
      }
      if ((long *)*puVar2 == plVar8) {
        *puVar2 = plVar6;
      }
      puVar2[2] = puVar2[2] + -1;
      func_0x00010530d618(plVar4,plVar8);
      param_3 = plVar8[5];
      goto code_r0x000107c61170;
    }
  }
  if (*(char *)(param_1 + _DAT_112796878) == '\x01') {
    lVar9 = puVar2[2];
    func_0x000107c60d8c(param_1 + lVar10);
    if (lVar9 == 0) {
      func_0x000107c3fedc(*(undefined8 *)(param_1 + _DAT_112796860));
    }
  }
  else {
    func_0x000107c60d8c(param_1 + lVar10);
  }
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100673624; end: 100673647;  */

void FUN_100673624(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x112d4a820;
  plVar5 = (long *)&UNK_10d910f30;
  iVar1 = 2;
  FUN_100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_1006736c0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    if (lVar3 != 0) {
      puVar4 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
    }
  }
  if (*puVar4 == 0 || (*puVar4 & 1) != 0) {
    puVar2 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar2,*plVar5 >> 0x20,0,0);
    *puVar4 = (ulong)puVar2;
  }
  return;
}



/* Entry: 100673648; end: 1006736bf;  */

void FUN_100673648(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  FUN_100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_1006736c0(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 1006736c0; end: 1006736ff;  */

void FUN_1006736c0(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 100673700; end: 1006739f7;  */

undefined * FUN_100673700(undefined *param_1)

{
  undefined *puVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined *puVar12;
  
  if ((ulong)param_1 >> 0x3e == 0) {
    puVar11 = *(undefined **)((undefined *)((ulong)param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar11 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if (((ulong)param_1 & 0x8000000000000000) != 0) {
      puVar11 = param_1;
    }
    func_0x000107c60480();
  }
  puVar1 = PTR___swiftEmptySetSingleton_11034f1d8;
  if (puVar11 != (undefined *)0x0) {
    FUN_1000285a8(0x112dbe9f8,&UNK_10d97b870);
    func_0x000107c602e8();
    puVar1 = puVar11;
  }
  if ((ulong)param_1 >> 0x3e == 0) {
    puVar11 = *(undefined **)(((ulong)param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar11 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if (((ulong)param_1 & 0x8000000000000000) != 0) {
      puVar11 = param_1;
    }
    func_0x000107c60480();
  }
  if (puVar11 != (undefined *)0x0) {
    if (((ulong)param_1 & 0xc000000000000001) == 0) {
      puVar12 = (undefined *)0x0;
      puVar7 = *(undefined **)(((ulong)param_1 & 0xffffffffffffff8) + 0x10);
      do {
        if (puVar12 == puVar7) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1006739f4);
          (*pcVar2)();
        }
        uVar5 = *(undefined8 *)(param_1 + (long)puVar12 * 8 + 0x20);
        uVar4 = *(ulong *)(puVar1 + 0x28);
        func_0x000107c61174();
        func_0x000107c60114();
        uVar10 = -1L << ((ulong)(byte)puVar1[0x20] & 0x3f);
        uVar4 = uVar4 & (uVar10 ^ 0xffffffffffffffff);
        uVar6 = uVar4 >> 6;
        uVar8 = *(ulong *)(puVar1 + uVar6 * 8 + 0x38);
        uVar9 = 1L << (uVar4 & 0x3f);
        if ((uVar9 & uVar8) != 0) {
          FUN_1006739f8(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
          do {
            uVar8 = *(ulong *)(*(long *)(puVar1 + 0x30) + uVar4 * 8);
            func_0x000107c61174();
            uVar6 = uVar8;
            func_0x000107c60118();
            func_0x000107c61170(uVar8);
            if ((uVar6 & 1) != 0) {
              func_0x000107c61170(uVar5);
              goto LAB_100673900;
            }
            uVar4 = uVar4 + 1 & ~uVar10;
            uVar6 = uVar4 >> 6;
            uVar8 = *(ulong *)(puVar1 + uVar6 * 8 + 0x38);
            uVar9 = 1L << (uVar4 & 0x3f);
          } while ((uVar9 & uVar8) != 0);
        }
        *(ulong *)(puVar1 + uVar6 * 8 + 0x38) = uVar9 | uVar8;
        *(undefined8 *)(*(long *)(puVar1 + 0x30) + uVar4 * 8) = uVar5;
        if (SCARRY8(*(long *)(puVar1 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1006739f8);
          (*pcVar2)();
        }
        *(long *)(puVar1 + 0x10) = *(long *)(puVar1 + 0x10) + 1;
LAB_100673900:
        puVar12 = puVar12 + 1;
      } while (puVar12 != puVar11);
    }
    else {
      puVar12 = (undefined *)0x0;
      do {
        puVar7 = puVar12;
        func_0x0001002ec9a0(puVar12,param_1);
        bVar3 = SCARRY8((long)puVar12,1);
        puVar12 = puVar12 + 1;
        if (bVar3) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1006739ec);
          (*pcVar2)();
        }
        uVar4 = *(ulong *)(puVar1 + 0x28);
        func_0x000107c60114();
        uVar10 = -1L << ((ulong)(byte)puVar1[0x20] & 0x3f);
        uVar4 = uVar4 & (uVar10 ^ 0xffffffffffffffff);
        uVar6 = uVar4 >> 6;
        uVar8 = *(ulong *)(puVar1 + uVar6 * 8 + 0x38);
        uVar9 = 1L << (uVar4 & 0x3f);
        if ((uVar9 & uVar8) != 0) {
          FUN_1006739f8(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
          do {
            uVar8 = *(ulong *)(*(long *)(puVar1 + 0x30) + uVar4 * 8);
            func_0x000107c61174();
            uVar6 = uVar8;
            func_0x000107c60118();
            func_0x000107c61170(uVar8);
            if ((uVar6 & 1) != 0) {
              func_0x000107c615e8(puVar7);
              goto joined_r0x0001006737d8;
            }
            uVar4 = uVar4 + 1 & ~uVar10;
            uVar6 = uVar4 >> 6;
            uVar8 = *(ulong *)(puVar1 + uVar6 * 8 + 0x38);
            uVar9 = 1L << (uVar4 & 0x3f);
          } while ((uVar9 & uVar8) != 0);
        }
        *(ulong *)(puVar1 + uVar6 * 8 + 0x38) = uVar9 | uVar8;
        *(undefined **)(*(long *)(puVar1 + 0x30) + uVar4 * 8) = puVar7;
        if (SCARRY8(*(long *)(puVar1 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1006739f0);
          (*pcVar2)();
        }
        *(long *)(puVar1 + 0x10) = *(long *)(puVar1 + 0x10) + 1;
joined_r0x0001006737d8:
      } while (puVar12 != puVar11);
    }
  }
  return puVar1;
}



/* Entry: 1006739f8; end: 100673a37;  */

void FUN_1006739f8(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 100673a38; end: 100673a4b;  */

void FUN_100673a38(long param_1,long param_2)

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



/* Entry: 100673a4c; end: 100673c63; -[SCFeatureSettingsUserPropertiesService observeItemIds:queue:changeHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100673a4c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x000107c61160();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  func_0x000107c61174(param_3);
  lVar7 = param_3;
  func_0x000107c4080c(param_3,param_2,&uStack_130,auStack_f0,0x10);
  if (lVar7 != 0) {
    lVar8 = *plStack_120;
    do {
      lVar6 = 0;
      do {
        if (*plStack_120 != lVar8) {
          func_0x000107c61128(param_3);
        }
        func_0x000107c5d388(*(undefined8 *)(lStack_128 + lVar6 * 8));
        puVar2 = PTR_PTR_1126b8720;
        func_0x000107c610f4();
        func_0x000107c46fd0();
        func_0x000107c3d798(puVar1,param_2,puVar2);
        func_0x000107c61170(puVar2);
        lVar6 = lVar6 + 1;
      } while (lVar7 != lVar6);
      lVar7 = param_3;
      func_0x000107c4080c(param_3,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar7 != 0);
  }
  func_0x000107c61170(param_3);
  lVar7 = *(long *)(param_1 + _DAT_112722cac);
  puVar2 = puVar1;
  func_0x000107c40794();
  puStack_158 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_150 = 0xc2000000;
  puStack_148 = &UNK_1053e7094;
  puStack_140 = &UNK_110865eb8;
  uStack_138 = param_5;
  func_0x000107c61174(param_5);
  ppuVar5 = &puStack_158;
  puVar3 = puVar2;
  uVar4 = param_4;
  func_0x000107c4da68(lVar7,param_2,puVar2,param_4,ppuVar5);
  func_0x000107c61180();
  func_0x000107c61170(uStack_138);
  func_0x000107c61170(param_5);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar7);
    return lVar7;
  }
  func_0x000107c60e78();
  func_0x000107c61174(puVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(ppuVar5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  puVar1 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x000107c5accc(0x4024000000000000);
  if (((ulong)puVar1 & 1) == 0) {
    func_0x000107c46f08(param_3,param_2,1,5,0,param_8,param_7);
    func_0x000107c61174();
  }
  else {
    puVar1 = PTR_PTR_1126b6ea0;
    func_0x000107c610f4(PTR_PTR_1126b6ea0);
    func_0x000107c459e4();
    func_0x000107c46f08(param_3,param_2,1,5,puVar1,param_8,param_7);
    func_0x000107c61174();
    func_0x000107c61170(puVar1);
  }
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(ppuVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_3);
  return param_3;
}



/* Entry: 100673c64; end: 100673d9b; -[SCBackgroundTaskWrapper initWithBlizzardLogger:batteryLogger:networkMonitor:systemScopedAppGroupUserDefaults:applicationLifecycleEvents:applicationState:] */

undefined8
FUN_100673c64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  puVar1 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x000107c5accc(0x4024000000000000);
  if (((ulong)puVar1 & 1) == 0) {
    func_0x000107c46f08(param_1,param_2,1,5,0,param_8,param_7);
    func_0x000107c61174();
  }
  else {
    puVar1 = PTR_PTR_1126b6ea0;
    func_0x000107c610f4(PTR_PTR_1126b6ea0);
    func_0x000107c459e4();
    func_0x000107c46f08(param_1,param_2,1,5,puVar1,param_8,param_7);
    func_0x000107c61174();
    func_0x000107c61170(puVar1);
  }
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return param_1;
}



/* Entry: 100673d9c; end: 100673fe7; -[SCBackgroundTaskWrapper initWithInvalidIdentifierIfCreateTaskFailed:skipBackgroundTaskThresholdInSecs:backgroundTaskTracker:applicationState:applicationLifecycleEvents:] */

undefined8 *
FUN_100673d9c(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
             undefined8 param_5,long param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined *puStack_48;
  
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_7);
  puStack_48 = PTR_PTR_1126e7520;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  puVar2 = PTR__UIBackgroundTaskInvalid_110345af0;
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)(puVar1 + 1) = param_3;
    puVar1[2] = *(undefined8 *)puVar2;
    puVar1[3] = 0;
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    uVar5 = puVar1[4];
    puVar1[4] = puVar2;
    func_0x000107c61170(uVar5);
    puVar1[5] = param_4;
    puVar1[6] = 0;
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x000107c41570(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    func_0x000107c61180();
    func_0x000107c3d7bc();
    func_0x000107c61170(puVar2);
    func_0x000107c3ccd4(puVar1);
    pcVar3 = "background_task_wrapper_lock";
    func_0x000107c60f50("background_task_wrapper_lock",0);
    uVar5 = puVar1[7];
    puVar1[7] = pcVar3;
    func_0x000107c61170(uVar5);
    func_0x000107c61174(param_5);
    uVar5 = puVar1[8];
    puVar1[8] = param_5;
    func_0x000107c61170(uVar5);
    puVar2 = PTR_PTR_1126b6ea8;
    func_0x000107c610fc();
    uVar5 = puVar1[10];
    puVar1[10] = puVar2;
    func_0x000107c61170(uVar5);
    puVar2 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar5 = puVar1[9];
    puVar1[9] = puVar2;
    func_0x000107c61170(uVar5);
    func_0x000107c61144(auStack_58,puVar1);
    if (param_6 == 2) {
      uVar5 = param_7;
      func_0x000107c5e370(param_7);
      func_0x000107c61180();
      func_0x000107c6111c(auStack_60,auStack_58);
      uVar4 = uVar5;
      func_0x000107c5c320(uVar5);
      func_0x000107c61180();
      func_0x000107c3e924();
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar5);
      func_0x000107c61120(auStack_60);
    }
    else {
      func_0x000107c3c4a8(puVar1);
    }
    func_0x000107c61120(auStack_58);
  }
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_5);
  return puVar1;
}



/* Entry: 100673fe8; end: 100674093; -[SCBackgroundTaskWrapper _updateSuspendTime] */

void FUN_100673fe8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae520;
  func_0x000107c5a9bc();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c3dfc0();
  func_0x000107c61170(puVar1);
  if (puVar2 == (undefined *)0x2) {
    func_0x000107c60f94(0,3000000000);
    FUN_10058c530();
  }
  return;
}



/* Entry: 100674094; end: 100674107; -[SCGrapheneBackgroundExecutionMetric2 init] */

undefined1 * FUN_100674094(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e7528;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 100674108; end: 10067426b; -[SCBackgroundTaskWrapper _scheduleTrackerOnAppIdle] */

void FUN_100674108(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x000107c61144(auStack_48,param_1);
  puVar3 = PTR_PTR_1126b6eb0;
  puVar1 = PTR_PTR_1126aeec0;
  puVar4 = PTR_PTR_1126ae960;
  puVar2 = PTR_PTR_1126b6eb8;
  func_0x000107c3e5ac(PTR_PTR_1126b6eb8);
  func_0x000107c61180();
  func_0x000107c3e700(puVar3);
  func_0x000107c61180();
  func_0x000107c3fbc8(puVar4);
  func_0x000107c61180();
  puVar5 = PTR_PTR_1126ae970;
  func_0x000107c4c0f8(PTR_PTR_1126ae970);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_50,auStack_48);
  func_0x000107c3e2d8(puVar1);
  func_0x000107c611b0();
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61120(auStack_50);
  func_0x000107c61120(auStack_48);
  return;
}



/* Entry: 10067426c; end: 100674273; +[SCAttributedBatterySubtask backgroundExecution] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10067426c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309afd0) = 1;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100674274; end: 1006742cf; +[SCSnapTaskWrapper attachedNonBlockingSyncWithMainActor:priority:asyncSpanNameSuffix:operation:] */

void FUN_100674274(void)

{
  FUN_1003e3550();
  return;
}



/* Entry: 1006742d0; end: 1006742d3;  */

void FUN_1006742d0(void)

{
  long unaff_x20;
  
  func_0x000107c60bd0(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1006742d4; end: 1006745fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_1006742d4(undefined *param_1,long param_2,undefined *param_3,long param_4,undefined8 param_5,
             undefined8 param_6)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined *puStack_98;
  long lStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  ulong uStack_70;
  
  lVar12 = param_2;
  puVar10 = param_3;
  func_0x000107c61174();
  FUN_10007c020();
  if (param_2 == 0) {
    uVar14 = 4;
  }
  else {
    uVar14 = (ulong)*(byte *)(param_2 + _DAT_113096e78);
  }
  lVar13 = param_4;
  if (param_4 == 0) {
    param_3 = param_1;
    lVar13 = lVar12;
    FUN_10007c170(param_1,lVar12,puVar10);
  }
  puVar6 = &UNK_1107ad218;
  func_0x000107c613fc(&UNK_1107ad218,0x38,7);
  *(undefined **)(puVar6 + 0x10) = param_1;
  *(long *)(puVar6 + 0x18) = lVar12;
  uVar1 = SUB81(puVar10,0);
  puVar6[0x20] = uVar1;
  *(undefined8 *)(puVar6 + 0x28) = param_5;
  *(undefined8 *)(puVar6 + 0x30) = param_6;
  puVar7 = &UNK_1107ad240;
  func_0x000107c613fc(&UNK_1107ad240,0x20,7);
  *(undefined **)(puVar7 + 0x10) = &UNK_10dd3d1e8;
  *(undefined **)(puVar7 + 0x18) = puVar6;
  puVar6 = &UNK_1107ad268;
  func_0x000107c613fc(&UNK_1107ad268,0x48,7);
  *(undefined **)(puVar6 + 0x10) = param_1;
  *(long *)(puVar6 + 0x18) = lVar12;
  puVar6[0x20] = uVar1;
  *(undefined **)(puVar6 + 0x28) = param_3;
  *(long *)(puVar6 + 0x30) = lVar13;
  *(undefined **)(puVar6 + 0x38) = &UNK_10dd3d1f0;
  *(undefined **)(puVar6 + 0x40) = puVar7;
  puVar8 = &UNK_1107ad290;
  func_0x000107c613fc(&UNK_1107ad290,0x38,7);
  *(undefined **)(puVar8 + 0x10) = param_1;
  *(long *)(puVar8 + 0x18) = lVar12;
  puVar8[0x20] = uVar1;
  puVar8[0x21] = (char)uVar14;
  *(undefined **)(puVar8 + 0x28) = &UNK_10dd3d1f8;
  *(undefined **)(puVar8 + 0x30) = puVar6;
  FUN_1000ab9d4(param_1,lVar12,puVar10);
  FUN_1000ab9d4(param_1,lVar12,puVar10);
  FUN_1000ab9d4(param_1,lVar12,puVar10);
  lVar2 = lRam0000000113097070;
  func_0x000107c61434(param_4);
  func_0x000107c6157c(param_6);
  func_0x000107c61434(lVar13);
  func_0x000107c6157c(puVar7);
  func_0x000107c6157c(puVar6);
  if (lVar2 != -1) {
    func_0x000107c61568(0x113097070,FUN_1000ab9ec);
  }
  uVar3 = uRam0000000113097078;
  pcStack_88 = (code *)((ulong)puVar10 & 0xff | uVar14 << 8);
  puStack_80 = (undefined *)0xd00000000000004f;
  puStack_78 = (undefined *)0x800000010f2130c0;
  puStack_98 = param_1;
  lStack_90 = lVar12;
  FUN_1000ab9d4(param_1,lVar12,puVar10);
  uVar9 = 0x1130970b8;
  FUN_1000285a8(0x1130970b8,&UNK_10dd3d148);
  func_0x000107c615d4(uVar3,&puStack_98,uVar9);
  FUN_1000aba5c(uVar14,&UNK_10dd3d200,puVar8);
  func_0x000107c615d0();
  func_0x000107c6142c(lVar13);
  func_0x000107c61574(puVar7);
  func_0x000107c61574(puVar8);
  func_0x000107c61574(puVar6);
  FUN_10007d980(param_1,lVar12,puVar10);
  puVar10 = PTR_PTR_1126afd78;
  func_0x000107c610f8();
  puStack_78 = &UNK_1048933f8;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  lStack_90 = 0x42000000;
  pcStack_88 = FUN_1000f6b44;
  puStack_80 = &UNK_1107ad2a8;
  ppuVar11 = &puStack_98;
  uStack_70 = uVar14;
  func_0x000107c60bc4(ppuVar11);
  uVar4 = uStack_70;
  func_0x000107c6157c(uVar14);
  func_0x000107c61574(uVar4);
  func_0x000107c45b74();
  func_0x000107c60bd0(ppuVar11);
  if (puVar10 != (undefined *)0x0) {
    func_0x000107c61574(uVar14);
    return puVar10;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1006745fc);
  (*pcVar5)();
}



/* Entry: 1006745fc; end: 10067461f;  */

void FUN_1006745fc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100674620; end: 10067462f;  */

void FUN_100674620(void)

{
  long unaff_x20;
  
  FUN_10007d980(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined1 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100674630; end: 100674643; -[SCFlatMappedObservable .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100674630(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127966b0,0);
  return;
}



/* Entry: 100674644; end: 1006746ab;  */

void FUN_100674644(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1006746ac; end: 10067472b; -[SCStickerItemPresentationModelProvider setPresentationModelProvider:forEntityType:] */

void FUN_1006746ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c61174(param_3);
  func_0x000107c611ec(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d974(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  func_0x000107c61180();
  func_0x000107c56bd8(uVar2,param_2,param_3,puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x10);
  return;
}



/* Entry: 10067472c; end: 1006747bf; -[CTPGfycatPresentationModelProvider initWithImageSize:] */

undefined1 * FUN_10067472c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112700978;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae820;
    func_0x000107c610fc();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR_PTR_1126dd8a0;
    func_0x000107c610f4(PTR_PTR_1126dd8a0);
    func_0x000107c46e18();
    func_0x000107c3cc2c(puVar1);
    func_0x000107c61170(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1006747c0; end: 100674807; -[CTPItemGfycatPresentationModel initWithImageSize:] */

void FUN_1006747c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112702410;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 100674808; end: 100674843; -[CTPGfycatPresentationModelProvider _updateModel:] */

void FUN_100674808(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c4d664(*(undefined8 *)(param_1 + 8),param_2,param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100674844; end: 1006748d7; -[CTPStickerPresentationModelProvider initWithImageSize:] */

undefined1 * FUN_100674844(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112700988;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae820;
    func_0x000107c610fc();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR_PTR_1126bb2d8;
    func_0x000107c610f4(PTR_PTR_1126bb2d8);
    func_0x000107c46e18();
    func_0x000107c3cc2c(puVar1);
    func_0x000107c61170(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1006748d8; end: 100674967;  */

void FUN_1006748d8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long unaff_x20;
  long unaff_x22;
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar1 = *(long *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  plVar8 = (long *)0x80;
  uVar4 = *(undefined1 *)(unaff_x20 + 0x21);
  uVar5 = *(undefined1 *)(unaff_x20 + 0x20);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)&UNK_1048933e8;
  plVar8[8] = lVar1;
  plVar8[9] = lVar3;
  *(undefined1 *)((long)plVar8 + 0x71) = uVar4;
  *(undefined1 *)(plVar8 + 0xe) = uVar5;
  plVar8[6] = lVar6;
  plVar8[7] = lVar2;
  plVar8[5] = param_1;
  lVar6 = 0x112d453c8;
  FUN_1000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar7 = *(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar8[10] = uVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1000aca9c,0,0);
  return;
}



/* Entry: 100674968; end: 1006749af; -[CTPStickerPresentationModel initWithImageSize:] */

void FUN_100674968(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112702420;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 1006749b0; end: 1006749eb; -[CTPStickerPresentationModelProvider _updateModel:] */

void FUN_1006749b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c4d664(*(undefined8 *)(param_1 + 8),param_2,param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1006749ec; end: 100674a0b; -[SCCreativeToolsABServices creativeToolsABProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006749ec(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_11302ecd0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100674a0c; end: 100674a13; -[SCCustomojiServices customojiViewProvider] */

undefined8 FUN_100674a0c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100674a14; end: 100674a1b; -[SCBitmoji3DStickerServices stickerFetcher] */

undefined8 FUN_100674a14(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100674a1c; end: 100674a23; -[CTPStickerContentManagerServices contentManager] */

undefined8 FUN_100674a1c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100674a24; end: 100674a33; -[_TtC18UrlPreviewServices18UrlPreviewServices urlPreviewProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100674a24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11301af98));
  return;
}



/* Entry: 100674a34; end: 100674a3b; -[SCCaptionDataProviderServices captionDataProvider] */

undefined8 FUN_100674a34(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100674a3c; end: 100674a43; -[SCBitmojiFlatlandBatchContentServices customojiFetcher] */

undefined8 FUN_100674a3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 100674a44; end: 100674a4b; -[SCBitmojiFlatlandBatchContentServices clientRendererGatingProvider] */

undefined8 FUN_100674a44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100674a4c; end: 100674b3b;  */

/* WARNING: Possible PIC construction at 0x000100674a60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100674a70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100674a80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100674a90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100674aa0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100674ab0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100674ac0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100674ad0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100674ae0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100674af0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100674b00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100674b10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100674b20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100674b14) */
/* WARNING: Removing unreachable block (ram,0x000100674b04) */
/* WARNING: Removing unreachable block (ram,0x000100674af4) */
/* WARNING: Removing unreachable block (ram,0x000100674ae4) */
/* WARNING: Removing unreachable block (ram,0x000100674ad4) */
/* WARNING: Removing unreachable block (ram,0x000100674ac4) */
/* WARNING: Removing unreachable block (ram,0x000100674ab4) */
/* WARNING: Removing unreachable block (ram,0x000100674aa4) */
/* WARNING: Removing unreachable block (ram,0x000100674a94) */
/* WARNING: Removing unreachable block (ram,0x000100674a84) */
/* WARNING: Removing unreachable block (ram,0x000100674a74) */
/* WARNING: Removing unreachable block (ram,0x000100674a64) */
/* WARNING: Removing unreachable block (ram,0x000100674b24) */

void FUN_100674a4c(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(param_2 + 0x20));
  return;
}



/* Entry: 100674b3c; end: 100674bdf; -[CTPItemViewServices initWithItemViewService:valdiCompatibleItemViewService:] */

undefined1 *
FUN_100674b3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1127023f8;
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



/* Entry: 100674be0; end: 100674cab;  */

void FUN_100674be0(void)

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



/* Entry: 100674cac; end: 100674caf;  */

void FUN_100674cac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 100674cb0; end: 100674ddf;  */

/* WARNING: Possible PIC construction at 0x000100674dcc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100674dd0) */
/* WARNING: Removing unreachable block (ram,0x000107c6142c) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0014) */

void FUN_100674cb0(undefined8 param_1,byte param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 == 4) {
    func_0x000107c60690(1);
    uVar2 = 0x4c63696d616e7964;
    uVar3 = 0xed0000656c61636f;
  }
  else if (param_2 == 5) {
    func_0x000107c60690(2);
    uVar2 = 0x49726f74696e6f6d;
    uVar3 = 0xeb0000000074696e;
  }
  else {
    func_0x000107c60690(0);
    uVar2 = 0x6e49726567676f6c;
    uVar3 = 0xea00000000007469;
    if (param_2 != 2) {
      uVar2 = 0xd000000000000013;
      uVar3 = 0x800000010f2166b0;
    }
    uVar4 = 0xd000000000000010;
    pcVar1 = "backgroundExecution";
    if (param_2 != 0) {
      uVar4 = 0xd000000000000013;
      pcVar1 = "loggerDebugViewInit";
    }
    if (param_2 < 2) {
      uVar2 = uVar4;
      uVar3 = (ulong)pcVar1 | 0x8000000000000000;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_11034d980)(param_1,uVar2,uVar3);
  return;
}



/* Entry: 100674de0; end: 10067507b; -[SCStickerInjectorServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100674de0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  puVar1 = PTR_PTR_1126bb1d0;
  func_0x000107c610f4();
  lVar2 = param_1 + _DAT_112734800;
  func_0x000107c61148(lVar2);
  lVar3 = lVar2;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c45db0(puVar1,param_2,lVar3);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  lVar2 = param_1 + _DAT_112734804;
  func_0x000107c61148();
  lVar4 = lVar2;
  func_0x000107c4a7c8();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  lVar2 = param_1 + _DAT_112734808;
  func_0x000107c61148();
  lVar3 = param_1 + _DAT_11273480c;
  func_0x000107c61148();
  lVar5 = param_1 + _DAT_112734810;
  func_0x000107c61148();
  lVar6 = param_1 + _DAT_112734814;
  func_0x000107c61148();
  lVar7 = param_1 + _DAT_112734818;
  func_0x000107c61148();
  lVar8 = param_1 + _DAT_11273481c;
  func_0x000107c61148();
  puVar9 = PTR_PTR_1126ae720;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  puStack_b0 = &UNK_105d0a3dc;
  puStack_a8 = &UNK_1108e5818;
  func_0x000107c61174(puVar1);
  puStack_a0 = puVar1;
  func_0x000107c61174(lVar4);
  lStack_98 = lVar4;
  func_0x000107c61174(lVar3);
  lStack_90 = lVar3;
  func_0x000107c61174(lVar6);
  lStack_88 = lVar6;
  func_0x000107c61174(lVar7);
  lStack_80 = lVar7;
  func_0x000107c61174(lVar5);
  lStack_78 = lVar5;
  func_0x000107c61174(lVar2);
  lStack_70 = lVar2;
  func_0x000107c61174(lVar8);
  lStack_68 = lVar8;
  func_0x000107c3e4fc(puVar9,param_2,&puStack_c0);
  func_0x000107c61180();
  puVar10 = PTR_PTR_1126c3fd0;
  func_0x000107c610f4(PTR_PTR_1126c3fd0);
  func_0x000107c489f4();
  if (param_1 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = *(undefined8 *)(param_1 + _DAT_112734824);
  }
  func_0x000107c42c20(uVar11,param_2,puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(lStack_68);
  func_0x000107c61170(lStack_70);
  func_0x000107c61170(lStack_78);
  func_0x000107c61170(lStack_80);
  func_0x000107c61170(lStack_88);
  func_0x000107c61170(lStack_90);
  func_0x000107c61170(lStack_98);
  func_0x000107c61170(puStack_a0);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 10067507c; end: 100675083; -[CTPItemViewServices itemViewService] */

undefined8 FUN_10067507c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100675084; end: 1006750f7; -[SCStickerInjectorServices initWithStickerInjector:] */

undefined1 * FUN_100675084(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1127023a8;
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



/* Entry: 1006750f8; end: 10067515b;  */

void FUN_1006750f8(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10067515c; end: 100675167; -[SCAPISessionTaskBookkeeper setBackgroundTaskWrapper:] */

void FUN_10067515c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 100675168; end: 100675183; -[SCNetworkDeps batteryLogger] */

void FUN_100675168(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x30,1);
  return;
}



/* Entry: 100675184; end: 1006751d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100675184(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  FUN_100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + _DAT_1130809c0);
  func_0x000107c615f0(uVar1);
  func_0x000107c61170(lStack_28);
  return uVar1;
}



/* Entry: 1006751d8; end: 10067538b; -[SCSnapDocConverterServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006751d8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  lVar1 = param_1 + _DAT_1127278d8;
  func_0x000107c61148();
  lVar2 = lVar1;
  func_0x000107c3ce84();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_1127278dc;
  func_0x000107c61148();
  lVar3 = lVar1;
  func_0x000107c5bd94();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_1127278e0;
  func_0x000107c61148();
  lVar4 = lVar1;
  func_0x000107c5b4dc();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  param_1 = param_1 + _DAT_1127278e4;
  func_0x000107c61148();
  lVar1 = param_1;
  func_0x000107c40c94();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  puVar5 = PTR_PTR_1126ae720;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  puStack_70 = &UNK_1056a41a0;
  puStack_68 = &UNK_1108a7428;
  lStack_60 = lVar2;
  lStack_58 = lVar3;
  lStack_50 = lVar4;
  lStack_48 = lVar1;
  func_0x000107c61174(lVar1);
  func_0x000107c61174(lVar4);
  func_0x000107c61174(lVar3);
  func_0x000107c61174(lVar2);
  func_0x000107c3e4fc(puVar5,param_2,&puStack_80);
  func_0x000107c61180();
  puVar6 = PTR_PTR_1126bcde8;
  func_0x000107c610f4(PTR_PTR_1126bcde8);
  func_0x000107c461c4();
  func_0x000107c61170(puVar5);
  func_0x000107c61170(lStack_48);
  func_0x000107c61170(lStack_50);
  func_0x000107c61170(lStack_58);
  func_0x000107c61170(lStack_60);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10067538c; end: 10067538f;  */

void FUN_10067538c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 100675390; end: 100675397; -[SCStickerInjectorServices stickerInjector] */

undefined8 FUN_100675390(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100675398; end: 1006753a3; -[SCAPISessionTaskBookkeeper setBatteryLogger:] */

void FUN_100675398(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x30,param_3);
  return;
}



/* Entry: 1006753a4; end: 1006753af; -[SCBandwidthEstimatorExperiment setNativeNetworkManager:] */

void FUN_1006753a4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x58,param_3);
  return;
}



/* Entry: 1006753b0; end: 1006753cb; -[SCNetworkDeps cof] */

void FUN_1006753b0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,8,1);
  return;
}



/* Entry: 1006753cc; end: 10067541b;  */

undefined8 FUN_1006753cc(void)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_28);
  uVar1 = uStack_28;
  func_0x000107c3fa04(uStack_28);
  func_0x000107c61180();
  func_0x000107c61170(uStack_28);
  return uVar1;
}



/* Entry: 10067541c; end: 100675427; -[SCExtensionSharedFile presentedItemURL] */

undefined8 FUN_10067541c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 100675428; end: 10067552f; -[SCBandwidthEstimatorExperiment setCircumstanceEngine:] */

void FUN_100675428(float param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float fVar3;
  double dVar4;
  
  func_0x000107c61174(param_4);
  uVar1 = param_4;
  func_0x000107c49810(param_4,param_3,&PTR____CFConstantStringClassReference_110f5fb98,0);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c49820();
  *(undefined8 *)(param_2 + 0x60) = uVar2;
  func_0x000107c61170(uVar1);
  uVar1 = param_4;
  func_0x000107c49810(param_4,param_3,&PTR____CFConstantStringClassReference_110f5fbb8,0);
  func_0x000107c61180();
  func_0x000107c436dc();
  dVar4 = (double)param_1 / 1000.0;
  *(double *)(param_2 + 0x68) = dVar4;
  func_0x000107c61170(uVar1);
  fVar3 = SUB84(dVar4,0);
  uVar1 = param_4;
  func_0x000107c49810(param_4,param_3,&PTR____CFConstantStringClassReference_110f5fbd8,0);
  func_0x000107c61180();
  func_0x000107c436dc();
  *(double *)(param_2 + 0x70) = (double)fVar3 / 1000.0;
  func_0x000107c61170(uVar1);
  uVar1 = param_4;
  func_0x000107c3ebd4(param_4,param_3,&PTR____CFConstantStringClassReference_110f5fbf8,0,0);
  func_0x000107c61170(param_4);
  *(char *)(param_2 + 0x88) = (char)uVar1;
  return;
}



/* Entry: 100675530; end: 1006755a3; -[SCSnapDocConverterServices initWithConverter:] */

undefined1 * FUN_100675530(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1127028e0;
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



/* Entry: 1006755a4; end: 1006755e7;  */

void FUN_1006755a4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1006755e8; end: 1006755ef;  */

void FUN_1006755e8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006755f0; end: 100675643;  */

void FUN_1006755f0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100675644; end: 10067564f;  */

void FUN_100675644(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100235688();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  puVar2 = PTR_PTR_1126a8500;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar6 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar7 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar7 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar7 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef228c0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar7 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef202e0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  puVar8 = puVar2;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *(undefined **)(lVar1 + 0x30) = puVar8;
  *param_1 = lVar1;
  return;
}



/* Entry: 100675650; end: 100675907;  */

void FUN_100675650(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100235688();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  puVar1 = PTR_PTR_1126a8500;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar5 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar6 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar2);
  func_0x000107c61174();
  uVar6 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar6 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef228c0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar6 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef202e0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c61174();
  puVar7 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0x30) = puVar7;
  *param_1 = param_2;
  return;
}



/* Entry: 100675908; end: 1006759eb; -[SCSnapDocPlaybackCapabilitiesServiceProvider provide] */

void FUN_100675908(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126bc498;
  func_0x000107c610f4(PTR_PTR_1126bc498);
  func_0x000107c48784();
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1006759ec; end: 100675a5f; -[SCSnapDocPlaybackCapabilitiesServices initWithSnapDocPlaybackCapabilitiesManager:] */

undefined1 * FUN_1006759ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112701ff0;
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



/* Entry: 100675a60; end: 100675a9b;  */

void FUN_100675a60(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100675a9c; end: 100675c2b; -[SCSnapDocEditorServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100675a9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  
  puVar1 = PTR_PTR_1126bce50;
  func_0x000107c610f4(PTR_PTR_1126bce50);
  lVar2 = param_4 + _DAT_11272796c;
  func_0x000107c61148(lVar2);
  lVar3 = param_4 + _DAT_112727970;
  func_0x000107c61148(lVar3);
  lVar4 = param_4 + _DAT_112727974;
  func_0x000107c61148(lVar4);
  lVar5 = param_4 + _DAT_112727978;
  func_0x000107c61148(lVar5);
  lVar6 = param_4 + _DAT_11272797c;
  func_0x000107c61148(lVar6);
  lVar7 = param_4 + _DAT_112727980;
  func_0x000107c61148(lVar7);
  lVar8 = param_4 + _DAT_112727984;
  func_0x000107c61148();
  param_4 = param_4 + _DAT_112727988;
  func_0x000107c61148();
  puVar9 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x000107c4c194(PTR__OBJC_CLASS___UIScreen_1126aea10);
  func_0x000107c61180();
  func_0x000107c3ec60();
  func_0x000107c48778(param_3,puVar1,param_5,lVar2,lVar3,lVar4,lVar5,lVar6,lVar7,lVar8,param_4);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(param_4);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  puVar9 = PTR_PTR_1126bce58;
  func_0x000107c610f4(PTR_PTR_1126bce58);
  func_0x000107c46834();
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 100675c2c; end: 100675de3; -[SCSnapDocEditorFactoryImpl initWithSnapDocManagerServices:nsDataWriterServices:temporaryFileWriterServices:mediaVideoImportServices:snapDocConverterServices:previewABServices:composerServices:capabilitiesServices:deviceWidth:] */

undefined1 *
FUN_100675c2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar1 = &uStack_80;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  puStack_78 = PTR_PTR_1126e99d8;
  uStack_80 = param_2;
  func_0x000107c61154(&uStack_80,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_9;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_10;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_11;
    func_0x000107c61170(uVar2);
    *(undefined8 *)((long)puVar1 + 0x48) = param_1;
  }
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 100675de4; end: 100675e57; -[SCSnapDocEditorServices initWithFactory:] */

undefined1 * FUN_100675de4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_11270a0d8;
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



/* Entry: 100675e58; end: 100675ebb;  */

void FUN_100675e58(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100675ebc; end: 100675ec3;  */

void FUN_100675ebc(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100675ec4; end: 100675f17;  */

void FUN_100675ec4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100675f18; end: 100675f23;  */

void FUN_100675f18(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_58,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28));
  FUN_100083b20(&uStack_60);
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_1002359c8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_60;
  *(undefined8 *)(lVar1 + 0x20) = uStack_68;
  *(undefined8 *)(lVar1 + 0x28) = uStack_70;
  FUN_10067602c(0);
  func_0x000107c613fc();
  uVar2 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar3 = uStack_68;
  func_0x000107c61174(uStack_68);
  func_0x000107c61174(uStack_70);
  FUN_1006769f0(uStack_58,uVar2,uVar3,uStack_70);
  *(undefined8 *)(lVar1 + 0x10) = uStack_58;
  FUN_100676ba0();
  *(undefined8 *)(lVar1 + 0x30) = uStack_58;
  *param_1 = lVar1;
  return;
}



/* Entry: 100675f24; end: 10067602b;  */

void FUN_100675f24(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  FUN_100083b20(&uStack_58);
  FUN_100083b20(&uStack_60);
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_1002359c8();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_60;
  *(undefined8 *)(param_2 + 0x20) = uStack_68;
  *(undefined8 *)(param_2 + 0x28) = uStack_70;
  FUN_10067602c(0);
  func_0x000107c613fc();
  uVar1 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar2 = uStack_68;
  func_0x000107c61174(uStack_68);
  func_0x000107c61174(uStack_70);
  FUN_1006769f0(uStack_58,uVar1,uVar2,uStack_70);
  *(undefined8 *)(param_2 + 0x10) = uStack_58;
  FUN_100676ba0();
  *(undefined8 *)(param_2 + 0x30) = uStack_58;
  *param_1 = param_2;
  return;
}



/* Entry: 10067602c; end: 1006760a7;  */

void FUN_10067602c(undefined8 param_1)

{
  if (lRam0000000112df25c0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e66ba84);
  return;
}



/* Entry: 1006760a8; end: 1006760cf;  */

bool FUN_1006760a8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (param_1[1] - lVar1 == param_2[1] - *param_2) {
    func_0x000107c610b0(lVar1,*param_2,param_1[1] - lVar1);
    return (int)lVar1 == 0;
  }
  return false;
}



/* Entry: 1006760d0; end: 1006760e7;  */

uint FUN_1006760d0(uint param_1)

{
  FUN_1006760a8();
  return param_1 ^ 1;
}



/* Entry: 1006760e8; end: 1006760f7;  */

bool FUN_1006760e8(long param_1,long param_2,undefined8 param_3)

{
  func_0x000107c610b0(param_1,param_3,param_2 - param_1);
  return (int)param_1 == 0;
}



/* Entry: 1006760f8; end: 100676113;  */

bool FUN_1006760f8(int param_1)

{
  func_0x000107c610b0();
  return param_1 == 0;
}



/* Entry: 100676114; end: 100676177;  */

void FUN_100676114(long *param_1,undefined8 *param_2,ulong param_3)

{
  ulong *puVar1;
  long *plVar2;
  long *plVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  long alStack_b8 [2];
  ulong *puStack_a8;
  undefined1 auStack_48 [40];
  
  if ((undefined8 *)(param_1[2] - *param_1 >> 4) < param_2) {
    if ((ulong)param_2 >> 0x3c != 0) {
      func_0x000107c29478();
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      plVar2 = param_1;
      FUN_100676114();
      puVar1 = (ulong *)param_2[1];
      for (puVar4 = (ulong *)*param_2; puVar4 != puVar1; puVar4 = puVar4 + 1) {
        uVar5 = *puVar4;
        puVar6 = (ulong *)param_1[1];
        if (puVar6 < (ulong *)param_1[2]) {
          *puVar6 = param_3 & 0xffffffff;
          puVar6[1] = uVar5;
          puVar6 = puVar6 + 2;
          plVar3 = plVar2;
        }
        else {
          func_0x000107c32b34((long)puVar6 - *param_1 >> 4);
          plVar3 = alStack_b8;
          FUN_100676260(plVar3,plVar2,param_1[1] - *param_1 >> 4,param_1 + 2);
          *puStack_a8 = param_3 & 0xffffffff;
          puStack_a8[1] = uVar5;
          puStack_a8 = puStack_a8 + 2;
          FUN_1006762c4();
          puVar6 = (ulong *)param_1[1];
          func_0x000100676350();
        }
        param_1[1] = (long)puVar6;
        plVar2 = plVar3;
      }
      return;
    }
    FUN_100676260(auStack_48,param_2,param_1[1] - *param_1 >> 4);
    FUN_1006762c4();
    func_0x000100676350();
  }
  return;
}



/* Entry: 100676178; end: 10067625f;  */

void FUN_100676178(long *param_1,long *param_2,ulong param_3)

{
  ulong *puVar1;
  long *plVar2;
  long *plVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  long alStack_68 [2];
  ulong *puStack_58;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  plVar2 = param_1;
  FUN_100676114(param_1,param_2[1] - *param_2 >> 3);
  puVar1 = (ulong *)param_2[1];
  for (puVar4 = (ulong *)*param_2; puVar4 != puVar1; puVar4 = puVar4 + 1) {
    uVar5 = *puVar4;
    puVar6 = (ulong *)param_1[1];
    if (puVar6 < (ulong *)param_1[2]) {
      *puVar6 = param_3 & 0xffffffff;
      puVar6[1] = uVar5;
      puVar6 = puVar6 + 2;
      plVar3 = plVar2;
    }
    else {
      func_0x000107c32b34((long)puVar6 - *param_1 >> 4);
      plVar3 = alStack_68;
      FUN_100676260(plVar3,plVar2,param_1[1] - *param_1 >> 4,param_1 + 2);
      *puStack_58 = param_3 & 0xffffffff;
      puStack_58[1] = uVar5;
      puStack_58 = puStack_58 + 2;
      FUN_1006762c4();
      puVar6 = (ulong *)param_1[1];
      func_0x000100676350();
    }
    param_1[1] = (long)puVar6;
    plVar2 = plVar3;
  }
  return;
}



/* Entry: 100676260; end: 1006762c3;  */

long * FUN_100676260(long *param_1,long *param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined1 *puVar4;
  long *plVar5;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == (long *)0x0) {
    lVar2 = 0;
  }
  else {
    if ((ulong)param_2 >> 0x3c != 0) {
      func_0x000104bd35f4();
      puVar4 = &stack0xffffffffffffffd8;
      plVar3 = param_1;
      FUN_10065d7b0();
      plVar5 = (long *)(*(long *)(puVar4 + 8) - (plVar3[1] - *plVar3));
      plVar3 = plVar5;
      func_0x000107c610b4(plVar5);
      param_1[1] = (long)plVar5;
      lVar2 = *param_2;
      param_2[1] = lVar2;
      *param_2 = param_1[1];
      param_1[1] = lVar2;
      lVar2 = param_2[1];
      param_2[1] = param_1[2];
      param_1[2] = lVar2;
      lVar2 = param_2[2];
      param_2[2] = param_1[3];
      param_1[3] = lVar2;
      *param_1 = param_1[1];
      return plVar3;
    }
    lVar2 = (long)param_2 << 4;
    func_0x000107c60e20();
  }
  lVar1 = lVar2 + param_3 * 0x10;
  *param_1 = lVar2;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = lVar2 + (long)param_2 * 0x10;
  return param_1;
}



/* Entry: 1006762c4; end: 1006762cf;  */

void FUN_1006762c4(void)

{
  long *plVar1;
  undefined1 *puVar2;
  long *unaff_x19;
  long *unaff_x20;
  long lVar3;
  
  puVar2 = &stack0x00000008;
  plVar1 = unaff_x19;
  FUN_10065d7b0();
  lVar3 = *(long *)(puVar2 + 8) - (plVar1[1] - *plVar1);
  func_0x000107c610b4(lVar3);
  unaff_x19[1] = lVar3;
  lVar3 = *unaff_x20;
  unaff_x20[1] = lVar3;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = lVar3;
  lVar3 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = lVar3;
  lVar3 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = lVar3;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 1006762d0; end: 100676343;  */

void FUN_1006762d0(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar2;
  
  FUN_10065d7b0();
  lVar2 = *(long *)(param_2 + 8) - (param_1[1] - *param_1);
  func_0x000107c610b4(lVar2);
  unaff_x19[1] = lVar2;
  uVar1 = *unaff_x20;
  unaff_x20[1] = uVar1;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar1;
  uVar1 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar1;
  uVar1 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar1;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 100676344; end: 100676357;  */

void FUN_100676344(void)

{
  return;
}



/* Entry: 100676358; end: 100676397;  */

long * FUN_100676358(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  while (lVar1 != param_1[1]) {
    lVar1 = lVar1 + -0x10;
    param_1[2] = lVar1;
  }
  if (*param_1 != 0) {
    func_0x000107c60e14();
  }
  return param_1;
}



/* Entry: 100676398; end: 10067646b;  */

void FUN_100676398(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [16];
  undefined8 *puStack_48;
  
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 < (undefined8 *)param_1[2]) {
    uVar3 = *param_2;
    puVar2[1] = param_2[1];
    *puVar2 = uVar3;
    puVar2 = puVar2 + 2;
  }
  else {
    plVar1 = param_1;
    func_0x000107c32b34((long)puVar2 - *param_1 >> 4);
    FUN_100676260(auStack_58,plVar1,param_1[1] - *param_1 >> 4,param_1 + 2);
    uVar3 = *param_2;
    puStack_48[1] = param_2[1];
    *puStack_48 = uVar3;
    puStack_48 = puStack_48 + 2;
    FUN_1006762c4();
    puVar2 = (undefined8 *)param_1[1];
    func_0x000100676350();
  }
  param_1[1] = (long)puVar2;
  return;
}



/* Entry: 10067646c; end: 100676477;  */

bool FUN_10067646c(void)

{
  long lVar1;
  long unaff_x20;
  long *in_stack_00000018;
  
  if (((int)in_stack_00000018[0xd] == 0) &&
     (in_stack_00000018[0x18] - in_stack_00000018[0x17] == 0x18)) {
    lVar1 = *in_stack_00000018;
    if (in_stack_00000018[1] - lVar1 == *(long *)(unaff_x20 + 0xe8) - *(long *)(unaff_x20 + 0xe0)) {
      func_0x000107c610b0(lVar1,*(long *)(unaff_x20 + 0xe0),in_stack_00000018[1] - lVar1);
      return (int)lVar1 == 0;
    }
    return false;
  }
  return false;
}



/* Entry: 100676478; end: 1006764ef;  */

long *** FUN_100676478(long *param_1,ulong param_2)

{
  long ***ppplVar1;
  long lVar2;
  long lVar3;
  long **pplStack_48;
  long lStack_40;
  long lStack_38;
  long **pplStack_30;
  long **pplStack_28;
  
  ppplVar1 = (long ***)(param_1 + 2);
  lVar2 = *param_1;
  if ((ulong)((long)*ppplVar1 - lVar2 >> 3) < param_2) {
    if (param_2 >> 0x3d != 0) {
      func_0x000104bef190();
      func_0x000104befda8();
      FUN_10065ba60();
      func_0x000104befcc0();
      return (long ***)ppplVar1[1];
    }
    lVar3 = param_1[1];
    pplStack_28 = (long **)ppplVar1;
    FUN_10065b9f0();
    lStack_40 = (long)ppplVar1 + (lVar3 - lVar2);
    pplStack_30 = (long **)(ppplVar1 + param_2);
    pplStack_48 = (long **)ppplVar1;
    lStack_38 = lStack_40;
    FUN_10065cfc8();
    FUN_10065ba20();
    ppplVar1 = &pplStack_48;
    FUN_10065ba60(ppplVar1);
  }
  return ppplVar1;
}



/* Entry: 1006764f0; end: 1006764fb;  */

undefined8 FUN_1006764f0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1006764fc; end: 10067653b;  */

undefined8 * FUN_1006764fc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *unaff_x19;
  
  FUN_1006764f0();
  if (param_1 < (undefined8 *)unaff_x19[2]) {
    puVar1 = param_1 + 1;
    *param_1 = *param_2;
  }
  else {
    puVar1 = unaff_x19;
    func_0x000104bef19c();
  }
  unaff_x19[1] = puVar1;
  return puVar1 + -1;
}



/* Entry: 10067653c; end: 10067671b;  */

void FUN_10067653c(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long unaff_x20;
  long unaff_x24;
  long unaff_x25;
  long unaff_x27;
  undefined1 auStack_738 [24];
  undefined1 auStack_720 [24];
  undefined1 auStack_708 [432];
  byte bStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  byte bStack_3a0;
  undefined1 auStack_398 [448];
  
  func_0x000100556da4();
  FUN_10067671c();
  func_0x000100635cf8();
  if ((bool)in_ZR) {
    FUN_10065f08c();
    func_0x0001005ecc7c();
    if (!(bool)in_ZR) {
      func_0x000100458ae4();
      uStack_548 = 0;
      uStack_550 = 0;
      func_0x000107c34210();
      func_0x000107c34374(auStack_720);
      func_0x000107c34370(auStack_738);
      FUN_10054f908();
      func_0x000107c342ac();
      func_0x000107c3456c();
      func_0x000107c345a4();
      func_0x0001005eb600();
      func_0x0001005ed2d8();
      unaff_x24 = param_1;
    }
  }
  func_0x00010067672c();
  if ((bool)in_ZR) {
    func_0x000100676754();
  }
  else {
    func_0x000100676738();
    if (param_4 != 0) {
      func_0x000100676744();
    }
    func_0x000100676754();
    func_0x000100676768();
    while( true ) {
      uVar1 = unaff_x25 == *(long *)(unaff_x20 + 8);
      if ((bool)uVar1) break;
      func_0x000100676788();
      FUN_1005583c4(auStack_398);
      func_0x0001006767a4();
      func_0x0001006767b0();
      puVar2 = auStack_398;
      func_0x0001006767b8(puVar2,&stack0xfffffffffffffe28);
      func_0x00010068e2ac();
      FUN_10068e414();
      while ((((bStack_3a0 & 1) != 0 || ((bStack_558 & 1) != 0)) &&
             (func_0x00010068e420(), !(bool)uVar1))) {
        func_0x00010068e430();
        FUN_10068e48c();
        puVar3 = (undefined1 *)(unaff_x27 + 8);
        FUN_10068e4a4(puVar3,puVar2);
        FUN_1006902e8();
        func_0x00010069068c();
        func_0x000100690694();
        puVar2 = puVar3;
      }
      FUN_10069283c(auStack_708);
      FUN_1006928dc();
      func_0x0001006928e8();
      FUN_100692a54();
      unaff_x25 = unaff_x24;
    }
    FUN_100678270();
  }
  return;
}



/* Entry: 10067671c; end: 1006767cf;  */

void FUN_10067671c(void)

{
  return;
}



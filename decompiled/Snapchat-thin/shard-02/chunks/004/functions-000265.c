/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101c78cc0; end: 101c78e6f;  */

void FUN_101c78cc0(ulong param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined1 *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined1 auStack_a8 [72];
  
  lVar1 = param_2 + 0x40;
  uVar7 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar9 = param_1 + 1 & (uVar7 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar1 + (uVar9 >> 6) * 8) >> (uVar9 & 0x3f) & 1) != 0) {
    uVar7 = ~uVar7;
    uVar10 = param_1;
    func_0x000107c6026c(param_1,lVar1,uVar7);
    uVar10 = uVar10 + 1 & uVar7;
    do {
      puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar9 * 0x10);
      uVar11 = *puVar2;
      uVar4 = puVar2[1];
      func_0x000107c6068c(auStack_a8,*(undefined8 *)(param_2 + 0x28));
      func_0x000107c61434(uVar4);
      puVar6 = auStack_a8;
      func_0x000107c5fb58(puVar6,uVar11,uVar4);
      func_0x000107c606a8();
      func_0x000107c6142c(uVar4);
      uVar8 = (ulong)puVar6 & uVar7;
      if ((long)param_1 < (long)uVar10) {
        if (uVar8 < uVar10) {
LAB_101c78db4:
          if ((long)param_1 < (long)uVar8) goto LAB_101c78d3c;
        }
        puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + param_1 * 0x10);
        puVar3 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar9 * 0x10);
        if (((long)param_1 < (long)uVar9) || (puVar3 + 2 <= puVar2 || param_1 != uVar9)) {
          uVar11 = *puVar3;
          puVar2[1] = puVar3[1];
          *puVar2 = uVar11;
        }
        puVar2 = (undefined8 *)(*(long *)(param_2 + 0x38) + param_1 * 8);
        puVar3 = (undefined8 *)(*(long *)(param_2 + 0x38) + uVar9 * 8);
        if ((((long)param_1 < (long)uVar9) || (puVar3 + 1 <= puVar2)) || (param_1 != uVar9)) {
          *puVar2 = *puVar3;
          param_1 = uVar9;
        }
      }
      else if (uVar10 <= uVar8) goto LAB_101c78db4;
LAB_101c78d3c:
      uVar9 = uVar9 + 1 & uVar7;
    } while ((*(ulong *)(lVar1 + (uVar9 >> 6) * 8) >> (uVar9 & 0x3f) & 1) != 0);
  }
  uVar7 = param_1 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar7) = *(ulong *)(lVar1 + uVar7) & (-1L << (param_1 & 0x3f)) - 1U;
  if (!SBORROW8(*(long *)(param_2 + 0x10),1)) {
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x101c78e70);
  (*pcVar5)();
}



/* Entry: 101c78e70; end: 101c78eaf;  */

undefined8 FUN_101c78e70(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 101c78eb0; end: 101c79017;  */

int FUN_101c78eb0(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_101c78f2c;
        goto LAB_101c78f10;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_101c78f10:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_101c78f2c:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 101c79018; end: 101c79057;  */

void FUN_101c79018(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e0f6f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9eab34;
  func_0x000107c61520(&UNK_10d9eab34,&UNK_110462088);
  puRam0000000112e0f6f0 = puVar1;
  return;
}



/* Entry: 101c79058; end: 101c79397;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c79058(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  lVar1 = _DAT_112e0f6f8;
  puVar2 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_112e0f700;
  puVar2 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_112e0f708;
  puVar2 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_112e0f710;
  puVar2 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_112e0f718;
  puVar2 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_112e0f720;
  puVar2 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_112e0f728;
  puVar2 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_112e0f730;
  puVar2 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_112e0f738;
  puVar2 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  puVar2 = PTR___swiftEmptySetSingleton_11034f1d8;
  *(undefined **)(unaff_x20 + _DAT_112e0f740) = PTR___swiftEmptySetSingleton_11034f1d8;
  *(undefined **)(unaff_x20 + _DAT_112e0f748) = puVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112e0f750) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e0f758) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e0f760) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112e0f768) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112e0f770) = param_4;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101c79398; end: 101c79413; -[AdWebviewEventStreamsRepository initWithAdTrackPerformer:adConfigProvider:webBrowsingConfigProvider:webBrowsingUrlParameterModificationLogger:] */

void FUN_101c79398(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000101c791f8(param_3,param_4,param_5,param_6);
  return;
}



/* Entry: 101c79414; end: 101c79423; -[AdWebviewEventStreamsRepository adLifecycleEventObservableV2] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c79414(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112e0f6f8));
  return;
}



/* Entry: 101c79424; end: 101c7942b; -[AdWebviewEventStreamsRepository adLifecycleEventObservable] */

void FUN_101c79424(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 101c7942c; end: 101c79433; -[AdWebviewEventStreamsRepository streamsType] */

undefined8 FUN_101c7942c(void)

{
  return 2;
}



/* Entry: 101c79434; end: 101c79443; -[AdWebviewEventStreamsRepository adWebviewEventObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c79434(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112e0f738));
  return;
}



/* Entry: 101c79444; end: 101c79453; -[AdWebviewEventStreamsRepository adWebviewUserEventObservableV2] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c79444(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112e0f708));
  return;
}



/* Entry: 101c79454; end: 101c79463; -[AdWebviewEventStreamsRepository adWebviewConfigEventObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c79454(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112e0f700));
  return;
}



/* Entry: 101c79464; end: 101c79473; -[AdWebviewEventStreamsRepository adWebviewAsmEventObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c79464(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112e0f710));
  return;
}



/* Entry: 101c79474; end: 101c79483; -[AdWebviewEventStreamsRepository adWebviewLoadingEventObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c79474(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112e0f718));
  return;
}



/* Entry: 101c79484; end: 101c79493; -[AdWebviewEventStreamsRepository adWebviewNavigationEventObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c79484(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112e0f720));
  return;
}



/* Entry: 101c79494; end: 101c794a3; -[AdWebviewEventStreamsRepository adWebviewGaEventObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c79494(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112e0f728));
  return;
}



/* Entry: 101c794a4; end: 101c794b3; -[AdWebviewEventStreamsRepository adWebviewOperationEventObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c794a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112e0f730));
  return;
}



/* Entry: 101c794b4; end: 101c795b7;  */

/* WARNING: Possible PIC construction at 0x000101c794fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c7951c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c7952c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c79500) */
/* WARNING: Removing unreachable block (ram,0x000101c7957c) */
/* WARNING: Removing unreachable block (ram,0x000101c79580) */
/* WARNING: Removing unreachable block (ram,0x000101c79588) */
/* WARNING: Removing unreachable block (ram,0x000101c7959c) */
/* WARNING: Removing unreachable block (ram,0x000101c79514) */
/* WARNING: Removing unreachable block (ram,0x000101c79520) */
/* WARNING: Removing unreachable block (ram,0x000101c795a0) */

void FUN_101c794b4(void)

{
  undefined8 uVar1;
  long in_x3;
  long lStack_48;
  
  if (in_x3 != 0) {
    func_0x000107c61174();
    func_0x000107c30ae0();
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)();
    return;
  }
  lStack_48 = in_x3;
  func_0x000107c61174(0);
  uVar1 = 0x112e0f778;
  func_0x0001000285a8(0x112e0f778,&UNK_10d9eaba0);
  func_0x000107c5fb18(&lStack_48,uVar1);
  func_0x000107c6142c(uVar1);
  return;
}



/* Entry: 101c795b8; end: 101c7a5ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c795b8(long param_1,undefined8 *param_2,undefined8 param_3,long param_4)

{
  undefined8 **ppuVar1;
  undefined8 **ppuVar2;
  undefined8 **ppuVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long extraout_x8;
  long extraout_x12;
  undefined8 *puVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined8 **ppuVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 **ppuVar15;
  undefined8 auStack_170 [8];
  undefined8 **appuStack_130 [4];
  undefined8 *puStack_110;
  undefined *puStack_100;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined8 **ppuStack_d8;
  undefined *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  long lStack_b0;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  puVar8 = (undefined8 *)0x112d36580;
  puStack_110 = (undefined8 *)param_3;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(puVar8[-1] + 0x40));
  lVar7 = (long)appuStack_130 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar13 = (undefined8 *)(lVar7 - extraout_x12);
  if (param_2 == (undefined8 *)0x0) {
    puStack_88 = (undefined8 *)0x0;
    puStack_90 = (undefined8 *)0x0;
    lStack_78 = 0;
    uStack_80 = 0;
    FUN_101c7bad0(&puStack_90,0x112d387f8,&UNK_10d902650);
    puVar8 = (undefined8 *)0x0;
    puStack_88 = (undefined8 *)0x0;
    puStack_90 = (undefined8 *)0x0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    func_0x00010462ff40();
    puStack_c8 = (undefined8 *)*puVar8;
    puVar8 = (undefined8 *)puVar8[1];
    puStack_c0 = puVar8;
    func_0x000107c61438(puVar8,2);
    puVar5 = PTR___sSSN_11034da80;
    func_0x000107c602d4(&puStack_b8,&puStack_c8,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    if (param_2[2] == 0) {
LAB_101c796f4:
      puStack_88 = (undefined8 *)0x0;
      puStack_90 = (undefined8 *)0x0;
      lStack_78 = 0;
      uStack_80 = 0;
    }
    else {
      func_0x000107c61434(param_2);
      ppuVar15 = &puStack_b8;
      func_0x000100df95d0(ppuVar15);
      if (((ulong)puVar5 & 1) == 0) {
        func_0x000107c6142c(param_2);
        goto LAB_101c796f4;
      }
      func_0x0001000bb420(param_2[7] + (long)ppuVar15 * 0x20,&puStack_90);
      func_0x000107c6142c(puVar8);
      puVar8 = param_2;
    }
    func_0x000107c6142c(puVar8);
    func_0x0001007bbff0(&puStack_b8);
    if (lStack_78 == 0) {
      ppuVar15 = &puStack_90;
      FUN_101c7bad0(ppuVar15,0x112d387f8,&UNK_10d902650);
      puVar8 = (undefined8 *)0x0;
    }
    else {
      uVar9 = 0x112da99a0;
      func_0x0001000285a8(0x112da99a0,&UNK_10d97c130);
      ppuVar15 = &puStack_b8;
      func_0x000107c6147c(ppuVar15,&puStack_90,PTR___sypN_11034f1a8 + 8,uVar9,6);
      puVar8 = puStack_b8;
      if ((int)ppuVar15 == 0) {
        puVar8 = (undefined8 *)0x0;
      }
    }
    func_0x00010462ff70();
    puStack_c8 = *ppuVar15;
    puVar12 = ppuVar15[1];
    puStack_c0 = puVar12;
    func_0x000107c61438(puVar12,2);
    puVar5 = PTR___sSSN_11034da80;
    func_0x000107c602d4(&puStack_b8,&puStack_c8,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    if (param_2[2] == 0) {
LAB_101c797f0:
      puStack_88 = (undefined8 *)0x0;
      puStack_90 = (undefined8 *)0x0;
      lStack_78 = 0;
      uStack_80 = 0;
    }
    else {
      func_0x000107c61434(param_2);
      ppuVar15 = &puStack_b8;
      func_0x000100df95d0(ppuVar15);
      if (((ulong)puVar5 & 1) == 0) {
        func_0x000107c6142c(param_2);
        goto LAB_101c797f0;
      }
      func_0x0001000bb420(param_2[7] + (long)ppuVar15 * 0x20,&puStack_90);
      func_0x000107c6142c(puVar12);
      puVar12 = param_2;
    }
    func_0x000107c6142c(puVar12);
    func_0x0001007bbff0(&puStack_b8);
  }
  ppuVar15 = &puStack_90;
  func_0x000101c7b8cc();
  FUN_101c7bad0(&puStack_90,0x112d387f8,&UNK_10d902650);
  if (puVar8 == (undefined8 *)0x0) {
    puStack_88 = (undefined8 *)0x0;
    puStack_90 = (undefined8 *)0x0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    puVar12 = puVar8;
    func_0x000107c61434();
    func_0x000104645258();
    puStack_90 = (undefined8 *)*puVar12;
    puVar12 = (undefined8 *)puVar12[1];
    puStack_88 = puVar12;
    func_0x000107c61438(puVar12,2);
    puVar5 = PTR___sSSN_11034da80;
    func_0x000107c602d4(&puStack_b8,&puStack_90,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    if (puVar8[2] == 0) {
LAB_101c798c0:
      puStack_88 = (undefined8 *)0x0;
      puStack_90 = (undefined8 *)0x0;
      lStack_78 = 0;
      uStack_80 = 0;
    }
    else {
      func_0x000107c61434(puVar8);
      ppuVar10 = &puStack_b8;
      func_0x000100df95d0(ppuVar10);
      if (((ulong)puVar5 & 1) == 0) {
        func_0x000107c6142c(puVar8);
        goto LAB_101c798c0;
      }
      func_0x0001000bb420(puVar8[7] + (long)ppuVar10 * 0x20,&puStack_90);
      func_0x000107c6142c(puVar12);
      puVar12 = puVar8;
    }
    func_0x000107c6142c(puVar12);
    func_0x000107c6142c(puVar8);
    func_0x0001007bbff0(&puStack_b8);
  }
  ppuVar10 = &puStack_90;
  func_0x000101c7b8cc();
  FUN_101c7bad0(&puStack_90,0x112d387f8,&UNK_10d902650);
  if (puVar8 == (undefined8 *)0x0) {
    puStack_88 = (undefined8 *)0x0;
    puStack_90 = (undefined8 *)0x0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    puVar12 = puVar8;
    func_0x000107c61434();
    func_0x0001046452d8();
    puStack_90 = (undefined8 *)*puVar12;
    puVar12 = (undefined8 *)puVar12[1];
    puStack_88 = puVar12;
    func_0x000107c61438(puVar12,2);
    puVar5 = PTR___sSSN_11034da80;
    func_0x000107c602d4(&puStack_b8,&puStack_90,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    if (puVar8[2] == 0) {
LAB_101c79998:
      puStack_88 = (undefined8 *)0x0;
      puStack_90 = (undefined8 *)0x0;
      lStack_78 = 0;
      uStack_80 = 0;
    }
    else {
      func_0x000107c61434(puVar8);
      ppuVar1 = &puStack_b8;
      func_0x000100df95d0(ppuVar1);
      if (((ulong)puVar5 & 1) == 0) {
        func_0x000107c6142c(puVar8);
        goto LAB_101c79998;
      }
      func_0x0001000bb420(puVar8[7] + (long)ppuVar1 * 0x20,&puStack_90);
      func_0x000107c6142c(puVar12);
      puVar12 = puVar8;
    }
    func_0x000107c6142c(puVar12);
    func_0x000107c6142c(puVar8);
    func_0x0001007bbff0(&puStack_b8);
  }
  ppuVar1 = &puStack_90;
  func_0x000101c7b8cc();
  FUN_101c7bad0(&puStack_90,0x112d387f8,&UNK_10d902650);
  puStack_100 = (undefined *)0x0;
  if ((0 < (long)ppuVar10) && ((long)ppuVar10 <= (long)ppuVar1)) {
    puStack_100 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c47580();
  }
  if (puVar8 == (undefined8 *)0x0) {
    puStack_88 = (undefined8 *)0x0;
    puStack_90 = (undefined8 *)0x0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    puVar12 = puVar8;
    func_0x000107c61434();
    func_0x000104645350();
    puStack_90 = (undefined8 *)*puVar12;
    puVar12 = (undefined8 *)puVar12[1];
    puStack_88 = puVar12;
    func_0x000107c61438(puVar12,2);
    puVar5 = PTR___sSSN_11034da80;
    func_0x000107c602d4(&puStack_b8,&puStack_90,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    if (puVar8[2] == 0) {
LAB_101c79a9c:
      puStack_88 = (undefined8 *)0x0;
      puStack_90 = (undefined8 *)0x0;
      lStack_78 = 0;
      uStack_80 = 0;
    }
    else {
      func_0x000107c61434(puVar8);
      ppuVar1 = &puStack_b8;
      func_0x000100df95d0(ppuVar1);
      if (((ulong)puVar5 & 1) == 0) {
        func_0x000107c6142c(puVar8);
        goto LAB_101c79a9c;
      }
      func_0x0001000bb420(puVar8[7] + (long)ppuVar1 * 0x20,&puStack_90);
      func_0x000107c6142c(puVar12);
      puVar12 = puVar8;
    }
    func_0x000107c6142c(puVar12);
    func_0x000107c6142c(puVar8);
    func_0x0001007bbff0(&puStack_b8);
  }
  ppuVar1 = &puStack_90;
  func_0x000101c7b8cc();
  FUN_101c7bad0(&puStack_90,0x112d387f8,&UNK_10d902650);
  puStack_e8 = (undefined *)0x0;
  if ((0 < (long)ppuVar10) && ((long)ppuVar10 <= (long)ppuVar1)) {
    puStack_e8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c47580();
  }
  if (puVar8 == (undefined8 *)0x0) {
    puStack_88 = (undefined8 *)0x0;
    puStack_90 = (undefined8 *)0x0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    puVar12 = puVar8;
    func_0x000107c61434();
    func_0x000104645314();
    puStack_90 = (undefined8 *)*puVar12;
    puVar12 = (undefined8 *)puVar12[1];
    puStack_88 = puVar12;
    func_0x000107c61438(puVar12,2);
    puVar5 = PTR___sSSN_11034da80;
    func_0x000107c602d4(&puStack_b8,&puStack_90,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    if (puVar8[2] == 0) {
LAB_101c79b9c:
      puStack_88 = (undefined8 *)0x0;
      puStack_90 = (undefined8 *)0x0;
      lStack_78 = 0;
      uStack_80 = 0;
    }
    else {
      func_0x000107c61434(puVar8);
      ppuVar1 = &puStack_b8;
      func_0x000100df95d0(ppuVar1);
      if (((ulong)puVar5 & 1) == 0) {
        func_0x000107c6142c(puVar8);
        goto LAB_101c79b9c;
      }
      func_0x0001000bb420(puVar8[7] + (long)ppuVar1 * 0x20,&puStack_90);
      func_0x000107c6142c(puVar12);
      puVar12 = puVar8;
    }
    func_0x000107c6142c(puVar12);
    func_0x000107c6142c(puVar8);
    func_0x0001007bbff0(&puStack_b8);
  }
  ppuVar1 = &puStack_90;
  func_0x000101c7b8cc();
  FUN_101c7bad0(&puStack_90,0x112d387f8,&UNK_10d902650);
  puStack_e0 = (undefined *)0x0;
  if ((0 < (long)ppuVar10) && ((long)ppuVar10 <= (long)ppuVar1)) {
    puStack_e0 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c47580();
  }
  if (puVar8 == (undefined8 *)0x0) {
    puStack_88 = (undefined8 *)0x0;
    puStack_90 = (undefined8 *)0x0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    puVar12 = puVar8;
    func_0x000107c61434();
    func_0x000104645388();
    puStack_90 = (undefined8 *)*puVar12;
    puVar12 = (undefined8 *)puVar12[1];
    puStack_88 = puVar12;
    func_0x000107c61438(puVar12,2);
    puVar5 = PTR___sSSN_11034da80;
    func_0x000107c602d4(&puStack_b8,&puStack_90,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    if (puVar8[2] == 0) {
LAB_101c79c9c:
      puStack_88 = (undefined8 *)0x0;
      puStack_90 = (undefined8 *)0x0;
      lStack_78 = 0;
      uStack_80 = 0;
    }
    else {
      func_0x000107c61434(puVar8);
      ppuVar1 = &puStack_b8;
      func_0x000100df95d0(ppuVar1);
      if (((ulong)puVar5 & 1) == 0) {
        func_0x000107c6142c(puVar8);
        goto LAB_101c79c9c;
      }
      func_0x0001000bb420(puVar8[7] + (long)ppuVar1 * 0x20,&puStack_90);
      func_0x000107c6142c(puVar12);
      puVar12 = puVar8;
    }
    func_0x000107c6142c(puVar12);
    func_0x000107c6142c(puVar8);
    func_0x0001007bbff0(&puStack_b8);
  }
  ppuVar1 = &puStack_90;
  func_0x000101c7b8cc();
  FUN_101c7bad0(&puStack_90,0x112d387f8,&UNK_10d902650);
  puStack_f0 = (undefined *)0x0;
  if ((0 < (long)ppuVar10) && ((long)ppuVar10 <= (long)ppuVar1)) {
    puStack_f0 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c47580();
  }
  if (puVar8 == (undefined8 *)0x0) {
    puStack_88 = (undefined8 *)0x0;
    puStack_90 = (undefined8 *)0x0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    puVar12 = puVar8;
    func_0x000107c61434();
    func_0x000104645350();
    puStack_90 = (undefined8 *)*puVar12;
    puVar12 = (undefined8 *)puVar12[1];
    puStack_88 = puVar12;
    func_0x000107c61438(puVar12,2);
    puVar5 = PTR___sSSN_11034da80;
    func_0x000107c602d4(&puStack_b8,&puStack_90,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    if (puVar8[2] == 0) {
LAB_101c79d9c:
      puStack_88 = (undefined8 *)0x0;
      puStack_90 = (undefined8 *)0x0;
      lStack_78 = 0;
      uStack_80 = 0;
    }
    else {
      func_0x000107c61434(puVar8);
      ppuVar1 = &puStack_b8;
      func_0x000100df95d0(ppuVar1);
      if (((ulong)puVar5 & 1) == 0) {
        func_0x000107c6142c(puVar8);
        goto LAB_101c79d9c;
      }
      func_0x0001000bb420(puVar8[7] + (long)ppuVar1 * 0x20,&puStack_90);
      func_0x000107c6142c(puVar12);
      puVar12 = puVar8;
    }
    func_0x000107c6142c(puVar12);
    func_0x000107c6142c(puVar8);
    func_0x0001007bbff0(&puStack_b8);
  }
  ppuVar1 = &puStack_90;
  func_0x000101c7b8cc();
  FUN_101c7bad0(&puStack_90,0x112d387f8,&UNK_10d902650);
  puStack_d0 = (undefined *)0x0;
  if ((0 < (long)ppuVar10) && ((long)ppuVar10 <= (long)ppuVar1)) {
    puStack_d0 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c47580();
  }
  if (puVar8 == (undefined8 *)0x0) {
    puStack_88 = (undefined8 *)0x0;
    puStack_90 = (undefined8 *)0x0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    puVar12 = puVar8;
    func_0x000107c61434();
    func_0x0001046453c8();
    puStack_90 = (undefined8 *)*puVar12;
    puVar12 = (undefined8 *)puVar12[1];
    puStack_88 = puVar12;
    func_0x000107c61438(puVar12,2);
    puVar5 = PTR___sSSN_11034da80;
    func_0x000107c602d4(&puStack_b8,&puStack_90,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    if (puVar8[2] == 0) {
LAB_101c79e9c:
      puStack_88 = (undefined8 *)0x0;
      puStack_90 = (undefined8 *)0x0;
      lStack_78 = 0;
      uStack_80 = 0;
    }
    else {
      func_0x000107c61434(puVar8);
      ppuVar1 = &puStack_b8;
      func_0x000100df95d0(ppuVar1);
      if (((ulong)puVar5 & 1) == 0) {
        func_0x000107c6142c(puVar8);
        goto LAB_101c79e9c;
      }
      func_0x0001000bb420(puVar8[7] + (long)ppuVar1 * 0x20,&puStack_90);
      func_0x000107c6142c(puVar12);
      puVar12 = puVar8;
    }
    func_0x000107c6142c(puVar12);
    func_0x000107c6142c(puVar8);
    func_0x0001007bbff0(&puStack_b8);
  }
  ppuVar2 = &puStack_90;
  func_0x000101c7b8cc();
  ppuVar1 = &puStack_90;
  FUN_101c7bad0(ppuVar1,0x112d387f8,&UNK_10d902650);
  ppuStack_d8 = (undefined8 **)0x0;
  if ((0 < (long)ppuVar10) && ((long)ppuVar10 <= (long)ppuVar2)) {
    ppuVar1 = (undefined8 **)PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c47580();
    ppuStack_d8 = ppuVar1;
  }
  if (puVar8 == (undefined8 *)0x0) {
    puStack_88 = (undefined8 *)0x0;
    puStack_90 = (undefined8 *)0x0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    func_0x000104645298();
    puStack_90 = *ppuVar1;
    puVar12 = ppuVar1[1];
    puStack_88 = puVar12;
    func_0x000107c61438(puVar12,2);
    puVar5 = PTR___sSSN_11034da80;
    func_0x000107c602d4(&puStack_b8,&puStack_90,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    if (puVar8[2] == 0) {
LAB_101c79f94:
      puStack_88 = (undefined8 *)0x0;
      puStack_90 = (undefined8 *)0x0;
      lStack_78 = 0;
      uStack_80 = 0;
    }
    else {
      func_0x000107c61434(puVar8);
      ppuVar1 = &puStack_b8;
      func_0x000100df95d0(ppuVar1);
      if (((ulong)puVar5 & 1) == 0) {
        func_0x000107c6142c(puVar8);
        goto LAB_101c79f94;
      }
      func_0x0001000bb420(puVar8[7] + (long)ppuVar1 * 0x20,&puStack_90);
      func_0x000107c6142c(puVar12);
      puVar12 = puVar8;
    }
    func_0x000107c6142c(puVar12);
    func_0x000107c6142c(puVar8);
    func_0x0001007bbff0(&puStack_b8);
  }
  ppuVar3 = &puStack_90;
  func_0x000101c7b8cc();
  ppuVar1 = &puStack_90;
  FUN_101c7bad0(ppuVar1,0x112d387f8,&UNK_10d902650);
  ppuVar2 = (undefined8 **)0x0;
  if ((0 < (long)ppuVar10) && ((long)ppuVar10 <= (long)ppuVar3)) {
    ppuVar1 = (undefined8 **)PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c47580();
    ppuVar2 = ppuVar1;
  }
  if ((long)ppuVar15 < 1) {
    ppuVar15 = (undefined8 **)0x0;
    if (param_2 == (undefined8 *)0x0) goto LAB_101c7a09c;
LAB_101c7a020:
    func_0x00010462ffe8();
    puStack_90 = *ppuVar1;
    puVar8 = ppuVar1[1];
    puStack_88 = puVar8;
    func_0x000107c61438(puVar8,2);
    puVar5 = PTR___sSSN_11034da80;
    func_0x000107c602d4(&puStack_b8,&puStack_90,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    if (param_2[2] == 0) {
LAB_101c7a0b0:
      puStack_88 = (undefined8 *)0x0;
      puStack_90 = (undefined8 *)0x0;
      lStack_78 = 0;
      uStack_80 = 0;
    }
    else {
      func_0x000107c61434(param_2);
      ppuVar10 = &puStack_b8;
      func_0x000100df95d0(ppuVar10);
      if (((ulong)puVar5 & 1) == 0) {
        func_0x000107c6142c(param_2);
        goto LAB_101c7a0b0;
      }
      func_0x0001000bb420(param_2[7] + (long)ppuVar10 * 0x20,&puStack_90);
      func_0x000107c6142c(puVar8);
      puVar8 = param_2;
    }
    func_0x000107c6142c(puVar8);
    func_0x0001007bbff0(&puStack_b8);
    if (lStack_78 == 0) goto LAB_101c7a110;
    ppuVar10 = &puStack_b8;
    func_0x000107c6147c(ppuVar10,&puStack_90,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    lVar11 = lStack_b0;
    appuStack_130[2] = (undefined8 **)puStack_b8;
    if ((int)ppuVar10 == 0) {
      appuStack_130[2] = (undefined8 **)0x0;
      lVar11 = 0;
    }
  }
  else {
    ppuVar1 = (undefined8 **)PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c47580();
    ppuVar15 = ppuVar1;
    if (param_2 != (undefined8 *)0x0) goto LAB_101c7a020;
LAB_101c7a09c:
    puStack_88 = (undefined8 *)0x0;
    puStack_90 = (undefined8 *)0x0;
    lStack_78 = 0;
    uStack_80 = 0;
LAB_101c7a110:
    FUN_101c7bad0(&puStack_90,0x112d387f8,&UNK_10d902650);
    appuStack_130[2] = (undefined8 **)0x0;
    lVar11 = 0;
  }
  func_0x000107c41824();
  func_0x000107c61180();
  if (param_1 != 0) {
    func_0x000107c5edb4(lVar7);
    func_0x000107c61170(param_1);
  }
  lVar4 = 0;
  func_0x000107c5ede0();
  lVar14 = *(long *)(lVar4 + -8);
  (**(code **)(lVar14 + 0x38))(lVar7,param_1 == 0,1,lVar4);
  func_0x0001001021cc(lVar7,puVar13);
  lVar7 = 1;
  puVar8 = puVar13;
  (**(code **)(lVar14 + 0x30))(puVar13,1,lVar4);
  puVar12 = puVar13;
  if ((int)puVar8 == 1) {
    FUN_101c7bad0(puVar13,0x112d36580,&UNK_10d9016d0);
    appuStack_130[1] = (undefined8 **)0x0;
    lVar7 = 0;
    if (param_2 != (undefined8 *)0x0) goto LAB_101c7a1e4;
LAB_101c7a284:
    puStack_88 = (undefined8 *)0x0;
    puStack_90 = (undefined8 *)0x0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    func_0x000107c5ed70();
    appuStack_130[1] = (undefined8 **)puVar8;
    (**(code **)(lVar14 + 8))(puVar13,lVar4);
    if (param_2 == (undefined8 *)0x0) goto LAB_101c7a284;
LAB_101c7a1e4:
    func_0x00010462fee8();
    puStack_90 = (undefined8 *)*puVar12;
    puVar8 = (undefined8 *)puVar12[1];
    puStack_88 = puVar8;
    func_0x000107c61438(puVar8,2);
    puVar5 = PTR___sSSN_11034da80;
    func_0x000107c602d4(&puStack_b8,&puStack_90,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    if (param_2[2] == 0) {
LAB_101c7a298:
      puStack_88 = (undefined8 *)0x0;
      puStack_90 = (undefined8 *)0x0;
      lStack_78 = 0;
      uStack_80 = 0;
    }
    else {
      func_0x000107c61434(param_2);
      ppuVar10 = &puStack_b8;
      func_0x000100df95d0(ppuVar10);
      if (((ulong)puVar5 & 1) == 0) {
        func_0x000107c6142c(param_2);
        goto LAB_101c7a298;
      }
      func_0x0001000bb420(param_2[7] + (long)ppuVar10 * 0x20,&puStack_90);
      func_0x000107c6142c(puVar8);
      puVar8 = param_2;
    }
    func_0x000107c6142c(puVar8);
    func_0x0001007bbff0(&puStack_b8);
    if (lStack_78 != 0) {
      ppuVar1 = &puStack_b8;
      ppuVar10 = &puStack_90;
      func_0x000107c6147c(ppuVar1,ppuVar10,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
      puVar8 = puStack_b8;
      lVar4 = lStack_b0;
      if ((int)ppuVar1 == 0) {
        puVar8 = (undefined8 *)0x0;
        lVar4 = 0;
      }
      goto LAB_101c7a310;
    }
  }
  ppuVar10 = (undefined8 **)0x112d387f8;
  FUN_101c7bad0(&puStack_90,0x112d387f8,&UNK_10d902650);
  puVar8 = (undefined8 *)0x0;
  lVar4 = 0;
LAB_101c7a310:
  lVar14 = param_4;
  func_0x000107c30ad8();
  func_0x000107c61180();
  if (lVar14 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(ppuVar10);
  }
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c47580();
  if (lVar11 == 0) {
    func_0x000107c61174(ppuVar2);
    func_0x000107c61174(puStack_f0);
    func_0x000107c61174(puStack_d0);
    func_0x000107c61174(ppuStack_d8);
    func_0x000107c61174(puStack_100);
    func_0x000107c61174(puStack_e8);
    func_0x000107c61174(ppuVar15);
    func_0x000107c61174(puStack_e0);
    ppuVar10 = (undefined8 **)0x0;
    ppuVar1 = appuStack_130[1];
  }
  else {
    func_0x000107c61174(ppuVar2);
    func_0x000107c61174(puStack_f0);
    func_0x000107c61174(puStack_d0);
    func_0x000107c61174(ppuStack_d8);
    func_0x000107c61174(puStack_100);
    func_0x000107c61174(puStack_e8);
    func_0x000107c61174(ppuVar15);
    func_0x000107c61174(puStack_e0);
    ppuVar10 = appuStack_130[2];
    func_0x000107c5fadc(appuStack_130[2],lVar11);
    func_0x000107c6142c(lVar11);
    ppuVar1 = appuStack_130[1];
  }
  appuStack_130[1] = ppuVar1;
  if (lVar7 == 0) {
    puVar12 = (undefined8 *)0x0;
  }
  else {
    func_0x000107c5fadc(ppuVar1,lVar7);
    func_0x000107c6142c(lVar7);
    puVar12 = ppuVar1;
  }
  if (lVar4 == 0) {
    puVar8 = (undefined8 *)0x0;
  }
  else {
    func_0x000107c5fadc(puVar8,lVar4);
    func_0x000107c6142c(lVar4);
  }
  puVar6 = PTR_PTR_1126b9050;
  appuStack_130[2] = (undefined8 **)puVar8;
  func_0x000107c610f8();
  puVar13[-3] = puVar12;
  puVar13[-2] = puVar8;
  puVar13[-4] = ppuVar10;
  puVar13[-6] = ppuVar15;
  puVar13[-5] = puStack_e0;
  puVar13[-8] = puStack_100;
  puVar13[-7] = puStack_e8;
  appuStack_130[3] = ppuVar2;
  puStack_110 = puVar12;
  func_0x000107c30bf8();
  func_0x000107c61170(puVar5);
  func_0x000107c61170(ppuVar2);
  func_0x000107c61170(puStack_f0);
  func_0x000107c61170(puStack_d0);
  func_0x000107c61170(ppuStack_d8);
  func_0x000107c61170(puStack_100);
  func_0x000107c61170(puStack_e8);
  func_0x000107c61170(ppuVar15);
  func_0x000107c61170(puStack_e0);
  func_0x000107c61170(lVar14);
  func_0x000107c61170(ppuVar10);
  func_0x000107c61170(puStack_110);
  func_0x000107c61170(appuStack_130[2]);
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112e0f718);
  func_0x0001046a97cc(0);
  func_0x000107c610f8();
  func_0x000107c61174(puVar6);
  func_0x000107c61174(param_4);
  func_0x0001046a97f0();
  func_0x000107c4d664(uVar9);
  func_0x000107c61170(puStack_100);
  func_0x000107c61170(puStack_e8);
  func_0x000107c61170(puStack_e0);
  func_0x000107c61170(puStack_f0);
  func_0x000107c61170(puStack_d0);
  func_0x000107c61170(ppuStack_d8);
  func_0x000107c61170(appuStack_130[3]);
  func_0x000107c61170(ppuVar15);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(param_4);
  return;
}



/* Entry: 101c7a600; end: 101c7a6bf; -[AdWebviewEventStreamsRepository webBrowserInterimJavaScriptMetricsUpdate:eventType:performanceMetrics:common:] */

void FUN_101c7a600(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  if (param_5 == 0) {
    param_5 = 0;
  }
  else {
    func_0x000107c5f9e8(param_5,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                        PTR___ss11AnyHashableVSHsWP_11034e450);
  }
  func_0x000107c615f0(param_3);
  uVar1 = param_6;
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_1);
  FUN_101c794b4(param_3,param_4,param_5,param_6);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_5);
  return;
}



/* Entry: 101c7a6c0; end: 101c7a9cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c7a6c0(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long unaff_x20;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong auStack_a0 [3];
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  
  if (param_3 != 0) {
    uVar3 = param_3;
    uVar5 = param_2;
    func_0x000107c61174();
    uVar10 = uVar3;
    func_0x000107c30ae0();
    func_0x000107c61180();
    if (uVar10 != 0) {
      func_0x000107c61170();
      uVar10 = uVar3;
      func_0x000107c30af8();
      func_0x000107c61180();
      if (uVar10 == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = uVar10;
        func_0x000107c49820();
        func_0x000107c61170(uVar10);
      }
      uVar10 = uVar3;
      func_0x000107c30adc();
      func_0x000107c61180();
      uVar4 = uVar10;
      func_0x000107c5faec();
      func_0x000107c61170(uVar10);
      uStack_78 = uVar4;
      uStack_70 = uVar5;
      func_0x000107c5fb78(0x5f,0xe100000000000000);
      uVar10 = uVar3;
      func_0x000107c30afc();
      puVar7 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
      puVar1 = PTR___sSiN_11034deb0;
      puVar6 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
      auStack_a0[0] = uVar10;
      func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar6);
      func_0x000107c5fb78(0x5f,0xe100000000000000);
      puVar6 = puVar7;
      auStack_a0[0] = uVar9;
      func_0x000107c6057c(puVar1,puVar7);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar6);
      func_0x000107c5fb78(0x5f,0xe100000000000000);
      uVar10 = uVar3;
      func_0x000107c30af0();
      auStack_a0[0] = uVar10;
      func_0x000107c6057c(puVar1,puVar7);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar7);
      uVar5 = uStack_70;
      uVar10 = uStack_78;
      uVar9 = param_1;
      func_0x000107c4a80c();
      func_0x000107c61180();
      if (uVar9 == 0) {
        uVar9 = param_1;
        func_0x000107c614f0();
        func_0x000107c614e8();
        func_0x000107c49f60();
        if ((uVar9 & 1) != 0) goto LAB_101c7a8f0;
      }
      else {
        func_0x000107c61170();
      }
      lVar2 = _DAT_112e0f740;
      func_0x000107c61428(unaff_x20 + _DAT_112e0f740,&uStack_78,0,0);
      uVar8 = *(undefined8 *)(unaff_x20 + lVar2);
      func_0x000107c61434(uVar8);
      uVar9 = uVar10;
      func_0x0001000f66f0(uVar10,uVar5,uVar8);
      func_0x000107c6142c(uVar8);
      if ((uVar9 & 1) != 0) {
LAB_101c7a8f0:
        func_0x000107c6142c(uVar5);
        func_0x000107c61170(uVar3);
        return;
      }
      func_0x000107c61428(unaff_x20 + lVar2,auStack_a0,0x21,0);
      func_0x000100403b00(auStack_88,uVar10,uVar5);
      func_0x000107c614a8(auStack_a0);
      func_0x000107c6142c(uStack_80);
      uVar9 = param_1;
      func_0x000107c4a80c();
      func_0x000107c61180();
      if (uVar9 == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = uVar9;
        func_0x000107c5f9e8();
        func_0x000107c61170(uVar9);
      }
      FUN_101c795b8(param_1,uVar10,param_2,uVar3);
      func_0x000107c61170(uVar3);
      goto LAB_101c7a9ac;
    }
    func_0x000107c61170(uVar3);
  }
  uStack_78 = param_3;
  func_0x000107c61174(param_3);
  uVar10 = 0x112e0f778;
  func_0x0001000285a8(0x112e0f778,&UNK_10d9eaba0);
  func_0x000107c5fb18(&uStack_78,uVar10);
LAB_101c7a9ac:
  func_0x000107c6142c(uVar10);
  return;
}



/* Entry: 101c7a9d0; end: 101c7aa4f; -[AdWebviewEventStreamsRepository webBrowserDidFinalizeJavaScriptMetrics:eventType:common:] */

/* WARNING: Possible PIC construction at 0x000101c7aa34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c7aa38) */

void FUN_101c7a9d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  uVar1 = param_5;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  FUN_101c7a6c0(param_3,param_4,param_5);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 101c7aa50; end: 101c7b173;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c7aa50(double param_1,long param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  ulong uVar12;
  long extraout_x8;
  long unaff_x20;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  double dVar17;
  ulong auStack_160 [10];
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  long lStack_90;
  ulong auStack_80 [2];
  
  lVar3 = 0;
  uVar12 = param_3;
  func_0x00010467a0d4();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar10 = (long)&uStack_110 + lVar1;
  if (param_4 == 0) {
LAB_101c7ab24:
    auStack_80[0] = param_4;
    func_0x000107c61174(param_4);
    uVar8 = 0x112e0f778;
    func_0x0001000285a8(0x112e0f778,&UNK_10d9eaba0);
    func_0x000107c5fb18(auStack_80,uVar8);
    func_0x000107c6142c(uVar8);
    return;
  }
  uVar4 = param_4;
  func_0x000107c61174();
  uVar5 = uVar4;
  func_0x000107c30ae0();
  func_0x000107c61180();
  if (uVar5 == 0) {
    func_0x000107c61170(uVar4);
    goto LAB_101c7ab24;
  }
  func_0x000107c61170();
  func_0x000107c49648(param_2);
  lVar15 = param_2;
  dVar17 = param_1;
  func_0x000107c41034();
  func_0x000107c61180();
  if (lVar15 == 0) {
    lStack_90 = 0;
    uVar14 = 0;
    uVar5 = uVar12;
  }
  else {
    lStack_90 = lVar15;
    func_0x000107c5faec();
    uVar5 = uVar12;
    func_0x000107c61170(lVar15);
    uVar14 = uVar12;
  }
  lVar6 = param_2;
  func_0x000107c43540();
  func_0x000107c61180();
  lVar15 = lVar6;
  if (lVar6 == 0) {
    uVar12 = 0;
    uVar16 = uVar5;
  }
  else {
    func_0x000107c5faec();
    uVar16 = uVar5;
    func_0x000107c61170(lVar6);
    uVar12 = uVar5;
  }
  if (param_3 < 0xb) {
    if ((1L << (param_3 & 0x3f) & 0x798U) != 0) goto LAB_101c7afd0;
    if (param_3 == 5) {
      lVar3 = *(long *)(unaff_x20 + _DAT_112e0f760);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar3 == 0) goto LAB_101c7afd0;
      uVar16 = 0x800000010f007630;
      uVar8 = 0xd000000000000038;
      func_0x000107c5fadc(0xd000000000000038,0x800000010f007630);
      lVar6 = lVar3;
      func_0x000107c3ebdc();
      uStack_a0 = CONCAT44(uStack_a0._4_4_,(int)lVar6);
      func_0x000107c61170(uVar8);
      func_0x000107c615e8(lVar3);
      if ((int)uStack_a0 == 0) goto LAB_101c7afd0;
      func_0x000107c30b10(uVar4);
      puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8();
      func_0x000107c466c0(dVar17);
      uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e0f750);
      *(undefined **)(unaff_x20 + _DAT_112e0f750) = puVar7;
      func_0x000107c61170(uVar8);
      uVar16 = 8;
    }
    else {
      if (param_3 != 6) goto LAB_101c7ad48;
      lVar3 = *(long *)(unaff_x20 + _DAT_112e0f760);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar3 == 0) goto LAB_101c7afd0;
      uVar8 = 0xd00000000000003e;
      uVar16 = 0x800000010f007670;
      func_0x000107c5fadc(0xd00000000000003e,0x800000010f007670);
      lVar6 = lVar3;
      func_0x000107c3ebdc();
      uStack_a0 = CONCAT44(uStack_a0._4_4_,(int)lVar6);
      func_0x000107c61170(uVar8);
      func_0x000107c615e8(lVar3);
      if ((int)uStack_a0 == 0) goto LAB_101c7afd0;
      func_0x000107c30b10(uVar4);
      puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8();
      func_0x000107c466c0(dVar17);
      uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e0f750);
      *(undefined **)(unaff_x20 + _DAT_112e0f750) = puVar7;
      func_0x000107c61170(uVar8);
      uVar16 = 9;
    }
    FUN_101c7a6c0(param_2,uVar16,param_4);
  }
  else {
LAB_101c7ad48:
    if (1 < param_3) {
      if (param_3 != 2) {
        auStack_80[0] = param_3;
        func_0x000107c60614(&UNK_110798ce0,auStack_80,&UNK_110798ce0,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101c7b174);
        (*pcVar2)();
      }
      uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e0f750);
      *(undefined8 *)(unaff_x20 + _DAT_112e0f750) = 0;
      func_0x000107c61170(uVar8);
      uVar5 = uVar4;
      func_0x000107c30adc(uVar4);
      func_0x000107c61180();
      uVar9 = uVar5;
      func_0x000107c5faec();
      uStack_a0 = uVar16;
      func_0x000107c61170(uVar5);
      uVar5 = uVar4;
      func_0x000107c30afc();
      uVar13 = uVar4;
      uStack_a8 = uVar5;
      func_0x000107c30af8();
      func_0x000107c61180();
      uStack_b0 = uVar13;
      func_0x000107c30b10(uVar4);
      uVar5 = uVar4;
      func_0x000107c30ae0();
      func_0x000107c61180();
      if (uVar5 == 0) {
        uStack_c0 = 0;
        uStack_b8 = 0;
      }
      else {
        uVar13 = uVar5;
        func_0x000107c5faec();
        uStack_c0 = uVar16;
        uStack_b8 = uVar13;
        func_0x000107c61170(uVar5);
      }
      uVar5 = uVar4;
      func_0x000107c30ae4();
      func_0x000107c61180();
      if (uVar5 == 0) {
        uStack_d0 = 0;
        uStack_c8 = 0;
      }
      else {
        uVar13 = uVar5;
        func_0x000107c5faec();
        uStack_d0 = uVar16;
        uStack_c8 = uVar13;
        func_0x000107c61170(uVar5);
      }
      uVar5 = uVar4;
      func_0x000107c30aec();
      uVar13 = uVar4;
      uStack_d8 = uVar5;
      func_0x000107c30af0();
      uVar5 = uVar4;
      uStack_e0 = uVar13;
      func_0x000107c30b00();
      uVar13 = uVar4;
      uStack_e8 = uVar5;
      func_0x000107c30b0c();
      uVar5 = uVar4;
      uStack_f0 = uVar13;
      func_0x000107c30ae8();
      func_0x000107c61180();
      if (uVar5 == 0) {
        uStack_100 = 0;
        uStack_f8 = 0;
      }
      else {
        uVar13 = uVar5;
        func_0x000107c5faec();
        uStack_100 = uVar16;
        uStack_f8 = uVar13;
        func_0x000107c61170(uVar5);
      }
      uVar5 = uVar4;
      func_0x000107c30b04();
      uVar13 = uVar4;
      uStack_108 = uVar5;
      func_0x000107c30b08();
      uVar5 = uVar4;
      uStack_110 = uVar13;
      func_0x000107c30b14();
      func_0x000107c61180();
      if (uVar5 == 0) {
        uVar13 = 0;
        uVar16 = 0;
      }
      else {
        uVar13 = uVar5;
        func_0x000107c5faec();
        func_0x000107c61170(uVar5);
      }
      uVar8 = 0;
      func_0x00010469d938(0);
      func_0x000107c610f8();
      *(ulong *)((long)auStack_160 + lVar1 + 0x40) = uVar13;
      *(ulong *)((long)auStack_160 + lVar1 + 0x48) = uVar16;
      *(ulong *)((long)auStack_160 + lVar1 + 0x38) = uStack_110;
      *(ulong *)((long)auStack_160 + lVar1 + 0x30) = uStack_108;
      *(ulong *)((long)auStack_160 + lVar1 + 0x28) = uStack_100;
      *(ulong *)((long)auStack_160 + lVar1 + 0x20) = uStack_f8;
      *(ulong *)((long)auStack_160 + lVar1 + 0x18) = uStack_f0;
      *(ulong *)((long)auStack_160 + lVar1 + 0x10) = uStack_e8;
      *(ulong *)((long)auStack_160 + lVar1 + 8) = uStack_e0;
      *(ulong *)((long)auStack_160 + lVar1) = uStack_d8;
      func_0x00010469cf8c(uVar8,dVar17,uVar9,uStack_a0,uStack_a8,uStack_b0,uStack_b8,uStack_c0,
                          uStack_c8,uStack_d0);
      func_0x0001046a8bb4(0);
      func_0x000107c6159c(uVar10,lVar3,9);
      func_0x0001046a44b8(uVar10);
      uVar8 = 0;
      func_0x0001046a4498(0);
      func_0x000107c610f8();
      func_0x0001046a40dc(uVar9,uVar10,uVar8);
      func_0x000107c4d664(*(undefined8 *)(unaff_x20 + _DAT_112e0f738));
      func_0x000107c61170(uVar9);
      uVar16 = uVar10;
    }
  }
LAB_101c7afd0:
  uVar10 = uVar4;
  func_0x000107c30ad8();
  func_0x000107c61180();
  if (uVar10 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar16);
  }
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c466c0(param_1 * 100.0);
  if (uVar14 == 0) {
    lStack_90 = 0;
  }
  else {
    func_0x000107c5fadc(lStack_90,uVar14);
    func_0x000107c6142c(uVar14);
  }
  if (uVar12 == 0) {
    lVar15 = 0;
  }
  else {
    func_0x000107c5fadc(lVar15,uVar12);
    func_0x000107c6142c(uVar12);
  }
  puVar11 = PTR_PTR_1126b9060;
  func_0x000107c610f8(PTR_PTR_1126b9060);
  *(undefined8 *)((long)auStack_160 + lVar1 + 0x40) = 0;
  *(undefined8 *)((long)auStack_160 + lVar1 + 0x48) = 0;
  func_0x000107c30c2c();
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(lStack_90);
  func_0x000107c61170(lVar15);
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e0f720);
  func_0x0001046a9c0c(0);
  func_0x000107c610f8();
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar11);
  uVar12 = uVar4;
  func_0x0001046a9c30(uVar4,puVar11);
  func_0x000107c4d664(uVar8);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar12);
  return;
}



/* Entry: 101c7b174; end: 101c7b1fb; -[AdWebviewEventStreamsRepository webBrowser:didNavigate:common:exitMethod:] */

/* WARNING: Possible PIC construction at 0x000101c7b1e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c7b1e4) */

void FUN_101c7b174(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  uVar1 = param_5;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  FUN_101c7aa50(param_3,param_4,param_5,param_6);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 101c7b1fc; end: 101c7b43f;  */

/* WARNING: Possible PIC construction at 0x000101c7b258: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c7b39c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c7b3ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c7b40c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c7b280: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c7b3b0) */
/* WARNING: Removing unreachable block (ram,0x000101c7b3a0) */
/* WARNING: Removing unreachable block (ram,0x000101c7b25c) */
/* WARNING: Removing unreachable block (ram,0x000101c7b260) */
/* WARNING: Removing unreachable block (ram,0x000101c7b264) */
/* WARNING: Removing unreachable block (ram,0x000101c7b26c) */
/* WARNING: Removing unreachable block (ram,0x000101c7b270) */
/* WARNING: Removing unreachable block (ram,0x000101c7b2dc) */
/* WARNING: Removing unreachable block (ram,0x000101c7b2f4) */
/* WARNING: Removing unreachable block (ram,0x000101c7b30c) */
/* WARNING: Removing unreachable block (ram,0x000101c7b368) */
/* WARNING: Removing unreachable block (ram,0x000101c7b354) */
/* WARNING: Removing unreachable block (ram,0x000101c7b36c) */
/* WARNING: Removing unreachable block (ram,0x000101c7b274) */
/* WARNING: Removing unreachable block (ram,0x000101c7b410) */
/* WARNING: Removing unreachable block (ram,0x000101c7b41c) */

void FUN_101c7b1fc(void)

{
  undefined8 uVar1;
  long in_x4;
  long lStack_78;
  
  if (in_x4 != 0) {
    func_0x000107c61174();
    func_0x000107c30ae0();
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)();
    return;
  }
  lStack_78 = in_x4;
  func_0x000107c61174(0);
  uVar1 = 0x112e0f778;
  func_0x0001000285a8(0x112e0f778,&UNK_10d9eaba0);
  func_0x000107c5fb18(&lStack_78,uVar1);
  func_0x000107c6142c(uVar1);
  return;
}



/* Entry: 101c7b440; end: 101c7b4f7; -[AdWebviewEventStreamsRepository webBrowserDidReceiveGAHit:isPageView:isLandingPage:didFullyAppearTimestampMs:common:] */

void FUN_101c7b440(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  if (param_4 == 0) {
    param_4 = 0;
    param_3 = 0;
  }
  else {
    func_0x000107c5faec(param_4);
  }
  uVar1 = param_7;
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_2);
  FUN_101c7b1fc(param_1,param_4,param_3,param_5,param_6,param_7);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 101c7b4f8; end: 101c7b55f; -[AdWebviewEventStreamsRepository webBrowser:onWebviewUserEvent:] */

/* WARNING: Possible PIC construction at 0x000101c7b548: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c7b54c) */

void FUN_101c7b4f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  uVar1 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_101c7b9e8(param_4);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 101c7b560; end: 101c7b57b; -[AdWebviewEventStreamsRepository webBrowser:onWebvewConfigEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c7b560(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112e0f780;
  if (param_4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_112e0f700),PTR_s_next__112614028,param_4);
    return;
  }
  uStack_18 = 0;
  func_0x0001000285a8(0x112e0f780,&UNK_10d9eaba8);
  func_0x000107c5fb18(&uStack_18,uVar1);
  func_0x000107c6142c(uVar1);
  return;
}



/* Entry: 101c7b57c; end: 101c7b643;  */

/* WARNING: Possible PIC construction at 0x000101c7b5c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c7b5f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c7b5c8) */
/* WARNING: Removing unreachable block (ram,0x000101c7b5fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c7b57c(long param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  if (param_1 != 0) {
    func_0x000107c61174();
    func_0x000107c30ae0();
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)();
    return;
  }
  lStack_38 = param_1;
  func_0x000107c61174();
  uVar1 = 0x112e0f788;
  func_0x0001000285a8(0x112e0f788,&UNK_10d9eabb0);
  func_0x000107c5fb18(&lStack_38,uVar1);
  func_0x000107c6142c(uVar1);
  return;
}



/* Entry: 101c7b644; end: 101c7b697; -[AdWebviewEventStreamsRepository onWebviewAsmEvent:] */

/* WARNING: Possible PIC construction at 0x000101c7b680: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c7b684) */

void FUN_101c7b644(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_101c7b57c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 101c7b698; end: 101c7b6b3; -[AdWebviewEventStreamsRepository webBrowser:onWebviewOperationEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c7b698(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112e0f790;
  if (param_4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_112e0f730),PTR_s_next__112614028,param_4);
    return;
  }
  uStack_18 = 0;
  func_0x0001000285a8(0x112e0f790,&UNK_10d9eabb8);
  func_0x000107c5fb18(&uStack_18,uVar1);
  func_0x000107c6142c(uVar1);
  return;
}



/* Entry: 101c7b6b4; end: 101c7b703;  */

void FUN_101c7b6b4(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long *param_5,
                  undefined8 param_6,undefined8 param_7)

{
  undefined8 uStack_18;
  
  if (param_4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + *param_5),PTR_s_next__112614028,param_4);
    return;
  }
  uStack_18 = 0;
  func_0x0001000285a8(param_6,param_7);
  func_0x000107c5fb18(&uStack_18,param_6);
  func_0x000107c6142c(param_6);
  return;
}



/* Entry: 101c7b704; end: 101c7b77f; -[AdWebviewEventStreamsRepository webBrowser:onWebviewUrlParameterModificationEvent:] */

/* WARNING: Possible PIC construction at 0x000101c7b768: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c7b76c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c7b704(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112e0f770);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c4bf70();
    func_0x000107c615e8(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 101c7b780; end: 101c7b7b3;  */

void FUN_101c7b780(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101c7b7b4; end: 101c7b9e7; -[AdWebviewEventStreamsRepository .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101c7b7d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c7b7f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c7b810: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c7b830: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c7b850: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c7b870: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c7b890: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c7b874) */
/* WARNING: Removing unreachable block (ram,0x000101c7b854) */
/* WARNING: Removing unreachable block (ram,0x000101c7b834) */
/* WARNING: Removing unreachable block (ram,0x000101c7b814) */
/* WARNING: Removing unreachable block (ram,0x000101c7b7f4) */
/* WARNING: Removing unreachable block (ram,0x000101c7b7d4) */
/* WARNING: Removing unreachable block (ram,0x000101c7b894) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c7b7b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e0f758));
  return;
}



/* Entry: 101c7b9e8; end: 101c7baaf;  */

/* WARNING: Possible PIC construction at 0x000101c7ba30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c7ba64: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c7ba34) */
/* WARNING: Removing unreachable block (ram,0x000101c7ba68) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c7b9e8(long param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  if (param_1 != 0) {
    func_0x000107c61174();
    func_0x000107c30ae0();
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)();
    return;
  }
  lStack_38 = param_1;
  func_0x000107c61174();
  uVar1 = 0x112e0f7c0;
  func_0x0001000285a8(0x112e0f7c0,&UNK_10d9eac10);
  func_0x000107c5fb18(&lStack_38,uVar1);
  func_0x000107c6142c(uVar1);
  return;
}



/* Entry: 101c7bab0; end: 101c7bacf;  */

void FUN_101c7bab0(void)

{
  func_0x000107c61168(&PTR_PTR_1127fe960);
  return;
}



/* Entry: 101c7bad0; end: 101c7bb0f;  */

undefined8 FUN_101c7bad0(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 101c7bb10; end: 101c7bb13; -[AdWebviewEventStreamsRepository adInteractionEventObservable] */

void FUN_101c7bb10(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 101c7bb14; end: 101c7be4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c7bb14(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined1 auStack_b8 [24];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  lVar3 = _DAT_112e0f7d8;
  func_0x000107c61428(unaff_x20 + _DAT_112e0f7d8,auStack_78,0,0);
  lVar10 = *(long *)(unaff_x20 + lVar3);
  puVar9 = *(undefined8 **)(lVar10 + 0x10);
  puVar5 = (undefined8 *)PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar9 != (undefined8 *)0x0) {
    func_0x000107c61434(lVar10);
    puVar5 = puVar9;
    func_0x00010109b448(puVar9,0);
    puVar6 = &uStack_a0;
    func_0x00010109b930(puVar6,puVar5 + 4,puVar9,lVar10);
    func_0x00010109bac0(uStack_a0,uStack_98,uStack_90,uStack_88,uStack_80);
    if (puVar6 != puVar9) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x101c7bbac);
      (*pcVar4)();
    }
  }
  lVar10 = puVar5[2];
  if (lVar10 != 0) {
    uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112e0f7c8);
    puVar9 = puVar5 + 5;
    do {
      uVar1 = puVar9[-1];
      uVar2 = *puVar9;
      uStack_a0 = 0;
      uStack_98 = 0xe000000000000000;
      func_0x000107c61434(uVar2);
      func_0x000107c602fc(0x1f);
      func_0x000107c6142c(uStack_98);
      uStack_a0 = 0xd00000000000001d;
      uStack_98 = 0x800000010f0076e0;
      func_0x000107c5fb78(uVar1,uVar2);
      uVar8 = uStack_98;
      uVar7 = uStack_a0;
      func_0x000107c5fadc(uStack_a0,uStack_98);
      func_0x000107c6142c(uVar8);
      func_0x000107c56bcc(uVar11);
      func_0x000107c61170(uVar7);
      func_0x000107c61428(unaff_x20 + lVar3,&uStack_a0,0x21,0);
      uVar8 = uVar2;
      func_0x0001010af1e4(uVar1,uVar2);
      func_0x000107c614a8(&uStack_a0);
      func_0x000107c6142c(uVar2);
      func_0x000107c6142c(uVar8);
      puVar9 = puVar9 + 2;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  func_0x000107c61574(puVar5);
  lVar3 = _DAT_112e0f7e0;
  func_0x000107c61428(unaff_x20 + _DAT_112e0f7e0,auStack_b8,0,0);
  lVar10 = *(long *)(unaff_x20 + lVar3);
  puVar9 = *(undefined8 **)(lVar10 + 0x10);
  puVar5 = (undefined8 *)PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar9 != (undefined8 *)0x0) {
    func_0x000107c61434(lVar10);
    puVar5 = puVar9;
    func_0x00010109b448(puVar9,0);
    puVar6 = &uStack_a0;
    func_0x00010109b930(puVar6,puVar5 + 4,puVar9,lVar10);
    func_0x00010109bac0(uStack_a0,uStack_98,uStack_90,uStack_88,uStack_80);
    if (puVar6 != puVar9) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x101c7bd28);
      (*pcVar4)();
    }
  }
  lVar10 = puVar5[2];
  if (lVar10 != 0) {
    uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112e0f7c8);
    puVar9 = puVar5 + 5;
    do {
      uVar1 = puVar9[-1];
      uVar2 = *puVar9;
      uStack_a0 = 0;
      uStack_98 = 0xe000000000000000;
      func_0x000107c61434(uVar2);
      func_0x000107c602fc(0x2a);
      func_0x000107c6142c(uStack_98);
      uStack_a0 = 0xd000000000000028;
      uStack_98 = 0x800000010f0076b0;
      func_0x000107c5fb78(uVar1,uVar2);
      uVar8 = uStack_98;
      uVar7 = uStack_a0;
      func_0x000107c5fadc(uStack_a0,uStack_98);
      func_0x000107c6142c(uVar8);
      func_0x000107c56bcc(uVar11);
      func_0x000107c61170(uVar7);
      func_0x000107c61428(unaff_x20 + lVar3,&uStack_a0,0x21,0);
      uVar8 = uVar2;
      func_0x0001010af1e4(uVar1,uVar2);
      func_0x000107c614a8(&uStack_a0);
      func_0x000107c6142c(uVar2);
      func_0x000107c6142c(uVar8);
      puVar9 = puVar9 + 2;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  func_0x000107c61574(puVar5);
  return;
}



/* Entry: 101c7be4c; end: 101c7c04b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c7be4c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112e0f7c8);
  uStack_58 = 0;
  uStack_50 = 0xe000000000000000;
  func_0x000107c602fc(0x1f);
  func_0x000107c6142c(uStack_50);
  uStack_58 = 0xd00000000000001d;
  uStack_50 = 0x800000010f0076e0;
  func_0x000107c5fb78(param_1,param_2);
  uVar1 = uStack_50;
  uVar2 = uStack_58;
  func_0x000107c5fadc(uStack_58,uStack_50);
  func_0x000107c6142c(uVar1);
  func_0x000107c56bcc(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61428(unaff_x20 + _DAT_112e0f7d8,&uStack_58,0x21,0);
  func_0x0001010af1e4(param_1,param_2);
  func_0x000107c614a8(&uStack_58);
  func_0x000107c6142c(param_2);
  return;
}



/* Entry: 101c7c04c; end: 101c7c0ab; -[_TtC29AdMetadataCacheImplementation15AdMetadataCache init] */

void FUN_101c7c04c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdMetadataCacheImplementation.AdMetadataCache",0x2d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101c7c078);
  (*pcVar1)();
}



/* Entry: 101c7c0ac; end: 101c7c103; -[_TtC29AdMetadataCacheImplementation15AdMetadataCache .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101c7c0e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c7c0ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c7c0ac(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e0f7c8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e0f7d0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112e0f7d8));
  return;
}



/* Entry: 101c7c104; end: 101c7c267;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101c7c104(ulong param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  
  lVar5 = *(long *)(unaff_x20 + _DAT_112e0f7c8);
  func_0x000107c602fc(0x1f);
  func_0x000107c6142c(0xe000000000000000);
  func_0x000107c5fb78(param_1,param_2);
  uVar4 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f0076e0);
  func_0x000107c6142c(0x800000010f0076e0);
  func_0x000107c4d9c0();
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    uVar4 = 0x112e0f818;
    func_0x0001000285a8(0x112e0f818,&UNK_10d9eac60);
    lVar2 = lVar5;
    func_0x000107c61480(lVar5,uVar4);
    if (lVar2 != 0) {
      uVar3 = *(ulong *)(lVar2 + _DAT_112e0f828);
      uVar1 = ((ulong *)(lVar2 + _DAT_112e0f828))[1];
      if ((uVar3 == param_1 && uVar1 == param_2) ||
         (func_0x000107c605b8(uVar3,uVar1,param_1,param_2,0), (uVar3 & 1) != 0)) {
        uVar4 = *(undefined8 *)(lVar2 + _DAT_112e0f820);
        func_0x000107c61174(uVar4);
        func_0x000107c615e8(lVar5);
        return uVar4;
      }
    }
    func_0x000107c615e8(lVar5);
  }
  return 0;
}



/* Entry: 101c7c268; end: 101c7c273; -[_TtC29AdMetadataCacheImplementation15AdMetadataCache storeProductViewControllerForAppId:] */

void FUN_101c7c268(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_101c7c104(param_3,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 101c7c274; end: 101c7c48b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c7c274(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  func_0x000107c61174();
  func_0x0001000d224c(&uStack_98);
  func_0x000107c3d35c(uStack_98);
  func_0x000107c615e8(uStack_98);
  lVar4 = 0x112e0f818;
  func_0x0001000285a8(0x112e0f818,&UNK_10d9eac60);
  lVar5 = lVar4;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar5 + _DAT_112e0f830);
  *puVar1 = 0x4c434441;
  puVar1[1] = 0xe400000000000000;
  puVar1 = (undefined8 *)(lVar5 + _DAT_112e0f838);
  *puVar1 = 0;
  puVar1[1] = 0xe000000000000000;
  *(undefined1 *)(lVar5 + _DAT_112e0f848) = 0;
  *(undefined8 *)(lVar5 + _DAT_112e0f820) = param_2;
  *(undefined8 *)(lVar5 + _DAT_112e0f840) = param_1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_112e0f828);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar2 = PTR_s_init_1125d9248;
  lStack_70 = lVar5;
  lStack_68 = lVar4;
  func_0x000107c61434(param_4);
  plVar6 = &lStack_70;
  func_0x000107c61154(plVar6,puVar2);
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e0f7c8);
  uStack_98 = 0;
  uStack_90 = 0xe000000000000000;
  func_0x000107c61174();
  func_0x000107c602fc(0x1f);
  func_0x000107c6142c(uStack_90);
  uStack_98 = 0xd00000000000001d;
  uStack_90 = 0x800000010f0076e0;
  func_0x000107c5fb78(param_3,param_4);
  uVar3 = uStack_90;
  uVar7 = uStack_98;
  func_0x000107c5fadc(uStack_98,uStack_90);
  func_0x000107c6142c(uVar3);
  func_0x000107c56bcc(uVar8);
  func_0x000107c61170(plVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61428(unaff_x20 + _DAT_112e0f7d8,&uStack_98,0x21,0);
  func_0x000107c61434(param_4);
  func_0x000100403b00(auStack_80,param_3,param_4);
  func_0x000107c614a8(&uStack_98);
  func_0x000107c61170(plVar6);
  func_0x000107c6142c(uStack_78);
  return;
}



/* Entry: 101c7c48c; end: 101c7c4ff; -[_TtC29AdMetadataCacheImplementation15AdMetadataCache setStoreProductViewController:forAppId:] */

void FUN_101c7c48c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_101c7c274(param_3,param_4,param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101c7c500; end: 101c7c50b; -[_TtC29AdMetadataCacheImplementation15AdMetadataCache removeStoreProductViewControllerForAppId:] */

void FUN_101c7c500(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_101c7be4c(param_3,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101c7c50c; end: 101c7c68f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101c7c50c(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *(long *)(unaff_x20 + _DAT_112e0f7c8);
  func_0x000107c602fc(0x2a);
  func_0x000107c6142c(0xe000000000000000);
  func_0x000107c5fb78(param_1,param_2);
  uVar4 = 0xd000000000000028;
  func_0x000107c5fadc(0xd000000000000028,0x800000010f0076b0);
  func_0x000107c6142c(0x800000010f0076b0);
  func_0x000107c4d9c0();
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    uVar4 = 0x112e0f810;
    func_0x0001000285a8(0x112e0f810,&UNK_10d9eac58);
    lVar3 = lVar5;
    func_0x000107c61480(lVar5,uVar4);
    if (lVar3 != 0) {
      uVar2 = *(ulong *)(lVar3 + _DAT_112e0f828);
      uVar1 = ((ulong *)(lVar3 + _DAT_112e0f828))[1];
      if ((uVar2 == param_1 && uVar1 == param_2) ||
         (func_0x000107c605b8(uVar2,uVar1,param_1,param_2,0), (uVar2 & 1) != 0)) {
        lVar3 = *(long *)(lVar3 + _DAT_112e0f820);
        func_0x000107c61174();
        func_0x000107c615e8(lVar5);
        uVar4 = *(undefined8 *)(lVar3 + _DAT_112e0f9b0);
        func_0x000107c615f0(uVar4);
        func_0x000107c61170(lVar3);
        return uVar4;
      }
    }
    func_0x000107c615e8(lVar5);
  }
  return 0;
}



/* Entry: 101c7c690; end: 101c7c69b; -[_TtC29AdMetadataCacheImplementation15AdMetadataCache playableWebViewInteractorForURL:] */

void FUN_101c7c690(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_101c7c50c(param_3,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 101c7c69c; end: 101c7c703;  */

void FUN_101c7c69c(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  (*param_4)(param_3,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 101c7c704; end: 101c7c957;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c7c704(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar4 = 0;
  FUN_101c7d740();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(undefined8 *)(lVar5 + _DAT_112e0f9b0) = param_2;
  puVar2 = PTR_s_init_1125d9248;
  lStack_70 = lVar5;
  lStack_68 = lVar4;
  func_0x000107c615f0(param_2);
  plVar6 = &lStack_70;
  func_0x000107c61154(plVar6,puVar2);
  func_0x0001000d224c(&uStack_a8);
  func_0x000107c3d35c(uStack_a8);
  func_0x000107c615e8(uStack_a8);
  lVar5 = 0x112e0f810;
  func_0x0001000285a8(0x112e0f810,&UNK_10d9eac58);
  lVar4 = lVar5;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar4 + _DAT_112e0f830);
  *puVar1 = 0x4c434441;
  puVar1[1] = 0xe400000000000000;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112e0f838);
  *puVar1 = 0;
  puVar1[1] = 0xe000000000000000;
  *(undefined1 *)(lVar4 + _DAT_112e0f848) = 0;
  *(long **)(lVar4 + _DAT_112e0f820) = plVar6;
  *(undefined8 *)(lVar4 + _DAT_112e0f840) = param_1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112e0f828);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar2 = PTR_s_init_1125d9248;
  lStack_80 = lVar4;
  lStack_78 = lVar5;
  func_0x000107c61434(param_4);
  plVar6 = &lStack_80;
  func_0x000107c61154(plVar6,puVar2);
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e0f7c8);
  uStack_a8 = 0;
  uStack_a0 = 0xe000000000000000;
  func_0x000107c61174();
  func_0x000107c602fc(0x2a);
  func_0x000107c6142c(uStack_a0);
  uStack_a8 = 0xd000000000000028;
  uStack_a0 = 0x800000010f0076b0;
  func_0x000107c5fb78(param_3,param_4);
  uVar3 = uStack_a0;
  uVar7 = uStack_a8;
  func_0x000107c5fadc(uStack_a8,uStack_a0);
  func_0x000107c6142c(uVar3);
  func_0x000107c56bcc(uVar8);
  func_0x000107c61170(plVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61428(unaff_x20 + _DAT_112e0f7e0,&uStack_a8,0x21,0);
  func_0x000107c61434(param_4);
  func_0x000100403b00(auStack_90,param_3,param_4);
  func_0x000107c614a8(&uStack_a8);
  func_0x000107c61170(plVar6);
  func_0x000107c6142c(uStack_88);
  return;
}



/* Entry: 101c7c958; end: 101c7c9c7; -[_TtC29AdMetadataCacheImplementation15AdMetadataCache setPlayableWebViewInteractor:forURL:] */

void FUN_101c7c958(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c5faec(param_4);
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_101c7c704(param_3,param_4,param_2);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101c7c9c8; end: 101c7c9d3; -[_TtC29AdMetadataCacheImplementation15AdMetadataCache removePlayableWebViewInteractorForURL:] */

void FUN_101c7c9c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  (*(code *)0x101c7bf4c)(param_3,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101c7c9d4; end: 101c7ca2f;  */

void FUN_101c7c9d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  (*param_4)(param_3,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101c7ca30; end: 101c7ca4f;  */

void FUN_101c7ca30(void)

{
  func_0x000107c61168(&PTR_PTR_1127fea98);
  return;
}



/* Entry: 101c7ca50; end: 101c7ca53;  */

void FUN_101c7ca50(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_11034f220)();
  return;
}



/* Entry: 101c7ca54; end: 101c7cab7;  */

void FUN_101c7ca54(long param_1)

{
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  puStack_40 = &UNK_10d9eac88;
  puStack_38 = &UNK_10d9eaca0;
  puStack_30 = &UNK_10d9eaca0;
  puStack_28 = &UNK_10d9eaca0;
  puStack_20 = PTR___sBi64_WV_11034d670 + 0x40;
  puStack_18 = &UNK_10d9eacb8;
  func_0x000107c61524(param_1,0,6,&puStack_40,param_1 + 0x58);
  return;
}



/* Entry: 101c7cab8; end: 101c7cacf;  */

void FUN_101c7cab8(undefined8 param_1,undefined8 param_2)

{
  (*(code *)0x101c7ce28)();
  func_0x000107c61434(param_2);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 101c7cad0; end: 101c7cb3b;  */

void FUN_101c7cad0(undefined8 param_1,undefined8 param_2,code *param_3)

{
  (*param_3)();
  func_0x000107c61434(param_2);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 101c7cb3c; end: 101c7cb53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101c7cb3c(void)

{
  long unaff_x20;
  
  return *(undefined8 *)(unaff_x20 + _DAT_112e0f840);
}



/* Entry: 101c7cb54; end: 101c7cbab;  */

void FUN_101c7cb54(void)

{
  func_0x000101c7ce50();
  func_0x000107c615f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101c7cbac; end: 101c7cbdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c7cbac(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112e0f820);
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101c7cbdc);
    (*pcVar1)();
  }
  func_0x000107c610a4();
  if (-1 < lVar2) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101c7cbd8);
  (*pcVar1)();
}



/* Entry: 101c7cbdc; end: 101c7cce7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_101c7cbdc(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  uint uVar4;
  long unaff_x20;
  long lStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lVar2 = unaff_x20;
  func_0x000107c614f0();
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
  }
  else {
    plVar3 = &lStack_58;
    func_0x000107c6147c(plVar3,auStack_50,PTR___sypN_11034f1a8 + 8,lVar2,6);
    if (((ulong)plVar3 & 1) != 0) {
      iVar1 = (int)*(undefined8 *)(unaff_x20 + _DAT_112e0f820);
      func_0x000107c49cec();
      if ((iVar1 != 0) &&
         (*(double *)(unaff_x20 + _DAT_112e0f840) == *(double *)(lStack_58 + _DAT_112e0f840))) {
        lVar2 = *(long *)(unaff_x20 + _DAT_112e0f828);
        if (lVar2 == *(long *)(lStack_58 + _DAT_112e0f828) &&
            ((long *)(unaff_x20 + _DAT_112e0f828))[1] == ((long *)(lStack_58 + _DAT_112e0f828))[1])
        {
          func_0x000107c61170(lStack_58);
          uVar4 = 1;
        }
        else {
          func_0x000107c605b8();
          uVar4 = (uint)lVar2;
          func_0x000107c61170(lStack_58);
        }
        goto LAB_101c7ccc0;
      }
      func_0x000107c61170(lStack_58);
    }
  }
  uVar4 = 0;
LAB_101c7ccc0:
  return uVar4 & 1;
}



/* Entry: 101c7cce8; end: 101c7cd67;  */

uint FUN_101c7cce8(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_40);
    func_0x000107c615e8(param_3);
  }
  FUN_101c7cbdc(&uStack_40);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 101c7cd68; end: 101c7cd83;  */

void FUN_101c7cd68(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdMetadataCacheImplementation.AdMetadataCacheItem",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101c7ce8c);
  (*pcVar1)();
}



/* Entry: 101c7cd84; end: 101c7cdb7;  */

void FUN_101c7cd84(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101c7cdb8; end: 101c7ce1b;  */

/* WARNING: Possible PIC construction at 0x000101c7cde8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c7cdec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c7cdb8(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e0f820));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112e0f828 + 8))
  ;
  return;
}



/* Entry: 101c7ce1c; end: 101c7ce5f;  */

void FUN_101c7ce1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&DAT_10e67ec78);
  return;
}



/* Entry: 101c7ce60; end: 101c7ce8b;  */

void FUN_101c7ce60(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdMetadataCacheImplementation.AdMetadataCacheItem",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101c7ce8c);
  (*pcVar1)();
}



/* Entry: 101c7ce8c; end: 101c7cecf;  */

void FUN_101c7ce8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  return;
}



/* Entry: 101c7ced0; end: 101c7cfc3;  */

code * FUN_101c7ced0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 == 0) {
    pcVar4 = (code *)0x0;
  }
  else {
    func_0x000107c5fcec(0);
    pcVar4 = FUN_101c7d520;
    FUN_101c7d0d0(FUN_101c7d520,param_1,
                  "AdMetadataCacheImplementation/AdMetadataCacheServiceProvider.swift",0x42,2,0x1e);
    puVar3 = &UNK_110462340;
    func_0x000107c613fc(&UNK_110462340,0x18,7);
    func_0x000107c61614(puVar3 + 0x10,pcVar4);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    *(code **)(param_1 + 0x20) = FUN_101c7d538;
    *(undefined **)(param_1 + 0x28) = puVar3;
    func_0x000107c6157c(puVar3);
    func_0x00010058d43c(uVar1,uVar2);
    func_0x000107c61574(puVar3);
    func_0x000107c61574(param_1);
  }
  return pcVar4;
}



/* Entry: 101c7cfc4; end: 101c7cfcb;  */

code * FUN_101c7cfc4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  code *pcVar5;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar3 == 0) {
    pcVar5 = (code *)0x0;
  }
  else {
    func_0x000107c5fcec(0);
    pcVar5 = FUN_101c7d520;
    FUN_101c7d0d0(FUN_101c7d520,lVar3,
                  "AdMetadataCacheImplementation/AdMetadataCacheServiceProvider.swift",0x42,2,0x1e);
    puVar4 = &UNK_110462340;
    func_0x000107c613fc(&UNK_110462340,0x18,7);
    func_0x000107c61614(puVar4 + 0x10,pcVar5);
    uVar1 = *(undefined8 *)(lVar3 + 0x20);
    uVar2 = *(undefined8 *)(lVar3 + 0x28);
    *(code **)(lVar3 + 0x20) = FUN_101c7d538;
    *(undefined **)(lVar3 + 0x28) = puVar4;
    func_0x000107c6157c(puVar4);
    func_0x00010058d43c(uVar1,uVar2);
    func_0x000107c61574(puVar4);
    func_0x000107c61574(lVar3);
  }
  return pcVar5;
}



/* Entry: 101c7cfcc; end: 101c7d0cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c7cfcc(undefined8 *param_1)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long lStack_50;
  long lStack_48;
  long lStack_38;
  
  plVar6 = &lStack_50;
  func_0x000100083b20(&lStack_38);
  lVar5 = lStack_38;
  lVar3 = lStack_38;
  func_0x000107c4ce24();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  if (lVar3 != 0) {
    func_0x000100083b20(&lStack_38);
    uVar7 = *(undefined8 *)(lStack_38 + _DAT_113043d30);
    func_0x000107c6157c(uVar7);
    func_0x000107c61170(lStack_38);
    lVar4 = 0;
    FUN_101c7ca30();
    lVar5 = lVar4;
    func_0x000107c610f8();
    puVar1 = PTR___swiftEmptySetSingleton_11034f1d8;
    *(undefined **)(lVar5 + _DAT_112e0f7d8) = PTR___swiftEmptySetSingleton_11034f1d8;
    *(undefined **)(lVar5 + _DAT_112e0f7e0) = puVar1;
    *(long *)(lVar5 + _DAT_112e0f7c8) = lVar3;
    *(undefined8 *)(lVar5 + _DAT_112e0f7d0) = uVar7;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    *param_1 = plVar6;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101c7d0d0);
  (*pcVar2)();
}



/* Entry: 101c7d0d0; end: 101c7d287;  */

undefined8
FUN_101c7d0d0(code *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x21;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  pcVar1 = param_1;
  func_0x000107c5fce8();
  func_0x000107c61574();
  func_0x000107c615c4();
  func_0x000107c615cc();
  if (((ulong)pcVar1 & 1) == 0) {
    uStack_70 = 0;
    uStack_68 = 0xe000000000000000;
    func_0x000107c602fc(0x42);
    func_0x000107c5fb78(0xd00000000000003f,0x800000010ef1ceb0);
    uVar4 = 0;
    func_0x000107c60714();
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar4);
    func_0x000107c5fb78(0x2e,0xe100000000000000);
    func_0x000107c60450("Fatal error",0xb,2,uStack_70,uStack_68,param_3,param_4,param_5,param_6,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101c7d288);
    (*pcVar1)();
  }
  puVar2 = &UNK_110462368;
  func_0x000107c613fc(&UNK_110462368,0x20,7);
  *(code **)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  (*param_1)(&uStack_70);
  if (unaff_x21 == 0) {
    puVar3 = puVar2;
    func_0x000107c61544(puVar2,"",0,0,0,0);
    func_0x000107c61574(puVar2);
    param_2 = uStack_70;
    if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101c7d1ec);
      (*pcVar1)();
    }
  }
  else {
    puVar3 = puVar2;
    func_0x000107c61544(puVar2,"",0,0,0,0);
    func_0x000107c61574(puVar2);
    if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101c7d18c);
      (*pcVar1)();
    }
  }
  return param_2;
}



/* Entry: 101c7d288; end: 101c7d2e7;  */

void FUN_101c7d288(undefined8 param_1)

{
  func_0x000107c5fcec(0);
  func_0x000100f7a598(FUN_101c7d540,param_1,
                      "AdMetadataCacheImplementation/AdMetadataCacheServiceProvider.swift",0x42,2,
                      0x25);
  return;
}



/* Entry: 101c7d2e8; end: 101c7d37b;  */

void FUN_101c7d2e8(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_101c7bb14();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 101c7d37c; end: 101c7d383;  */

void FUN_101c7d37c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 101c7d384; end: 101c7d3c3;  */

undefined8 FUN_101c7d384(void)

{
  code *pcVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(unaff_x20 + 0x20);
  if (pcVar1 != (code *)0x0) {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
    func_0x000107c6157c(uVar2);
    (*pcVar1)();
    func_0x00010058d43c(pcVar1,uVar2);
  }
  return 0;
}



/* Entry: 101c7d3c4; end: 101c7d3e7;  */

/* WARNING: Possible PIC construction at 0x000101c7d3d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c7d3d4) */
/* WARNING: Removing unreachable block (ram,0x00010058d43c) */
/* WARNING: Removing unreachable block (ram,0x00010058d448) */
/* WARNING: Removing unreachable block (ram,0x00010058d440) */

void FUN_101c7d3c4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101c7d3e8; end: 101c7d437;  */

void FUN_101c7d3e8(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x00010058d43c(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101c7d438; end: 101c7d51f;  */

void FUN_101c7d438(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar2 = &UNK_1104622c8;
  func_0x000107c613fc(&UNK_1104622c8,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  uStack_40 = 0x101c7d560;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  uStack_50 = 0x101c7d344;
  puStack_48 = &UNK_110462308;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  func_0x0001002b5c58(0);
  func_0x000107c610f8();
  func_0x0001004403d8();
  *param_1 = puVar1;
  return;
}



/* Entry: 101c7d520; end: 101c7d537;  */

void FUN_101c7d520(void)

{
  FUN_101c7cfcc();
  return;
}



/* Entry: 101c7d538; end: 101c7d53f;  */

void FUN_101c7d538(void)

{
  func_0x000107c5fcec(0);
  func_0x000100f7a598(FUN_101c7d540);
  return;
}



/* Entry: 101c7d540; end: 101c7d557;  */

void FUN_101c7d540(void)

{
  FUN_101c7d2e8();
  return;
}



/* Entry: 101c7d558; end: 101c7d563;  */

void FUN_101c7d558(long param_1,long param_2)

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



/* Entry: 101c7d564; end: 101c7d59b; -[_TtC29AdMetadataCacheImplementation38AdPlayableWebViewInteractorMetadataBox initWithCoder:] */

undefined8 FUN_101c7d564(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61464(param_1,uVar1,0x10,7);
  return 0;
}



/* Entry: 101c7d59c; end: 101c7d59f; -[_TtC29AdMetadataCacheImplementation38AdPlayableWebViewInteractorMetadataBox encodeWithCoder:] */

void FUN_101c7d59c(void)

{
  return;
}



/* Entry: 101c7d5a0; end: 101c7d63f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_101c7d5a0(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  long lStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lVar2 = unaff_x20;
  func_0x000107c614f0();
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
  }
  else {
    plVar1 = &lStack_58;
    func_0x000107c6147c(plVar1,auStack_50,PTR___sypN_11034f1a8 + 8,lVar2,6);
    if (((ulong)plVar1 & 1) != 0) {
      lVar2 = *(long *)(unaff_x20 + _DAT_112e0f9b0);
      lVar3 = *(long *)(lStack_58 + _DAT_112e0f9b0);
      func_0x000107c61170();
      return lVar2 == lVar3;
    }
  }
  return false;
}



/* Entry: 101c7d640; end: 101c7d6bf; -[_TtC29AdMetadataCacheImplementation38AdPlayableWebViewInteractorMetadataBox isEqual:] */

uint FUN_101c7d640(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_40);
    func_0x000107c615e8(param_3);
  }
  FUN_101c7d5a0(&uStack_40);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 101c7d6c0; end: 101c7d6cf; -[_TtC29AdMetadataCacheImplementation38AdPlayableWebViewInteractorMetadataBox hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c7d6c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb76c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSO9hashValueSivg_11034d8b0)(*(undefined8 *)(param_1 + _DAT_112e0f9b0));
  return;
}



/* Entry: 101c7d6d0; end: 101c7d72f; -[_TtC29AdMetadataCacheImplementation38AdPlayableWebViewInteractorMetadataBox init] */

void FUN_101c7d6d0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdMetadataCacheImplementation.AdPlayableWebViewInteractorMetadataBox",0x44,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101c7d6fc);
  (*pcVar1)();
}



/* Entry: 101c7d730; end: 101c7d73f; -[_TtC29AdMetadataCacheImplementation38AdPlayableWebViewInteractorMetadataBox .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c7d730(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112e0f9b0));
  return;
}



/* Entry: 101c7d740; end: 101c7d75f;  */

void FUN_101c7d740(void)

{
  func_0x000107c61168(&PTR_PTR_1127feb70);
  return;
}



/* Entry: 101c7d760; end: 101c7d80f;  */

void FUN_101c7d760(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  *(undefined8 *)(unaff_x20 + 0x58) = param_10;
  *(undefined8 *)(unaff_x20 + 0x50) = param_9;
  *(undefined8 *)(unaff_x20 + 0x68) = param_12;
  *(undefined8 *)(unaff_x20 + 0x60) = param_11;
  *(undefined8 *)(unaff_x20 + 0x78) = param_14;
  *(undefined8 *)(unaff_x20 + 0x70) = param_13;
  *(undefined8 *)(unaff_x20 + 0x80) = param_15;
  return;
}



/* Entry: 101c7d810; end: 101c7d8f7;  */

void FUN_101c7d810(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long unaff_x20;
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
  undefined1 auStack_f0 [16];
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_48;
  
  uVar15 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar18 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x88);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x80);
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar2 = *param_2;
  uVar1 = 0;
  uStack_e0 = uVar11;
  uStack_d8 = uVar15;
  uStack_d0 = uVar3;
  uStack_c8 = uVar7;
  uStack_c0 = uVar12;
  uStack_b8 = uVar16;
  uStack_b0 = uVar4;
  uStack_a8 = uVar8;
  uStack_a0 = uVar13;
  uStack_98 = uVar17;
  uStack_90 = uVar5;
  uStack_88 = uVar9;
  uStack_80 = uVar14;
  uStack_78 = uVar18;
  uStack_70 = uVar6;
  uStack_68 = uVar10;
  FUN_101c7dc00(0);
  func_0x000107c61174(uVar2);
  func_0x0001048d866c(&uStack_48,0xd000000000000015,0x800000010f0078c0,FUN_101c7db34,auStack_f0,
                      uVar1);
  func_0x000107c61170(uVar2);
  *param_1 = uStack_48;
  return;
}



/* Entry: 101c7d8f8; end: 101c7d90f;  */

void FUN_101c7d8f8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c7d910,0,0);
  return;
}



/* Entry: 101c7d910; end: 101c7d94b;  */

void FUN_101c7d910(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x18);
  func_0x000107c40aa4();
  func_0x000107c61180();
  *puVar1 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x000101c7d948. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101c7d94c; end: 101c7d9a3;  */

void FUN_101c7d94c(long param_1)

{
  long *plVar1;
  long unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  plVar1 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101c7d9a4;
  plVar1[2] = param_1;
  plVar1[3] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c7d910,0,0);
  return;
}



/* Entry: 101c7d9a4; end: 101c7db0f;  */

void FUN_101c7d9a4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101c7d9dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



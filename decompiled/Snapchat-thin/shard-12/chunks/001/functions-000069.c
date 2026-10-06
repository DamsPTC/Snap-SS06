/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108ce66fc; end: 108ce683b; -[SCImageProcessBatchCapturePlaybackSession beginEditingMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ce66fc(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar3 = PTR_PTR_1126d4d68;
  lVar7 = (long)_DAT_11277aca4;
  uVar6 = *(ulong *)(param_1 + lVar7);
  _objc_retain(uVar6);
  _objc_opt_class(puVar3);
  uVar4 = uVar6;
  _objc_opt_isKindOfClass(uVar6,puVar3);
  uVar2 = uVar6;
  if ((uVar4 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar6);
  uVar4 = uVar2;
  func_0x00010c2907a0();
  if (((int)uVar4 == 0) || (uVar4 = uVar2, func_0x00010c0712a0(), (uVar4 & 1) != 0))
  goto LAB_108ce681c;
  puVar1 = (undefined8 *)(param_1 + _DAT_11277ac84);
  lVar8 = (long)_DAT_11277ac9c;
  if (*(long *)(param_1 + lVar8) == 0) {
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    if (uVar2 == 0) goto LAB_108ce67c0;
LAB_108ce67a0:
    func_0x00010bfb71e0(&uStack_58,uVar6);
  }
  else {
    func_0x00010bf60480(&uStack_70);
    if (uVar2 != 0) goto LAB_108ce67a0;
LAB_108ce67c0:
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
  }
  puVar1[1] = uStack_50;
  *puVar1 = uStack_58;
  puVar1[2] = uStack_48;
  func_0x00010c0f6000(param_1);
  func_0x00010c1b0a00(uVar2);
  uVar5 = *(undefined8 *)(param_1 + lVar7);
  *(undefined8 *)(param_1 + lVar7) = 0;
  _objc_release(uVar5);
  func_0x00010c21da80(*(undefined8 *)(param_1 + lVar8));
  func_0x00010c130d80(*(undefined8 *)(param_1 + lVar8));
  func_0x00010c13d7c0(param_1);
LAB_108ce681c:
  _objc_release(uVar2);
  return;
}



/* Entry: 108ce683c; end: 108ce697b; -[SCImageProcessBatchCapturePlaybackSession endEditingMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ce683c(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar3 = PTR_PTR_1126d4d68;
  lVar7 = (long)_DAT_11277aca4;
  uVar6 = *(ulong *)(param_1 + lVar7);
  _objc_retain(uVar6);
  _objc_opt_class(puVar3);
  uVar4 = uVar6;
  _objc_opt_isKindOfClass(uVar6,puVar3);
  uVar2 = uVar6;
  if ((uVar4 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar6);
  uVar4 = uVar2;
  func_0x00010c2907a0();
  if (((int)uVar4 == 0) || (uVar4 = uVar2, func_0x00010c0712a0(), (int)uVar4 == 0))
  goto LAB_108ce695c;
  puVar1 = (undefined8 *)(param_1 + _DAT_11277ac84);
  lVar8 = (long)_DAT_11277ac9c;
  if (*(long *)(param_1 + lVar8) == 0) {
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    if (uVar2 == 0) goto LAB_108ce6900;
LAB_108ce68e0:
    func_0x00010c1004e0(&uStack_58,uVar6);
  }
  else {
    func_0x00010bf60480(&uStack_70);
    if (uVar2 != 0) goto LAB_108ce68e0;
LAB_108ce6900:
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
  }
  puVar1[1] = uStack_50;
  *puVar1 = uStack_58;
  puVar1[2] = uStack_48;
  func_0x00010c0f6000(param_1);
  func_0x00010c1b0a00(uVar2);
  uVar5 = *(undefined8 *)(param_1 + lVar7);
  *(undefined8 *)(param_1 + lVar7) = 0;
  _objc_release(uVar5);
  func_0x00010c21da80(*(undefined8 *)(param_1 + lVar8));
  func_0x00010c130d80(*(undefined8 *)(param_1 + lVar8));
  func_0x00010c13d7c0(param_1);
LAB_108ce695c:
  _objc_release(uVar2);
  return;
}



/* Entry: 108ce697c; end: 108ce6a77; -[SCImageProcessBatchCapturePlaybackSession playbackTimeForFrameTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ce697c(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  lVar2 = param_2;
  func_0x00010c075740();
  puVar3 = PTR_PTR_1126d4d68;
  if ((int)lVar2 == 0) {
    uVar5 = *(ulong *)(param_2 + _DAT_11277aca4);
    _objc_retain(uVar5);
    _objc_opt_class(puVar3);
    uVar4 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar3);
    uVar1 = uVar5;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar5);
    uVar4 = uVar1;
    func_0x00010c2907a0();
    if (((uVar4 & 1) == 0) || (uVar4 = uVar1, func_0x00010c0712a0(), (int)uVar4 != 0)) {
      uVar6 = *param_4;
      param_1[1] = param_4[1];
      *param_1 = uVar6;
      param_1[2] = param_4[2];
    }
    else if (uVar1 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    else {
      func_0x00010c1004e0(param_1,uVar5);
    }
    _objc_release(uVar1);
  }
  else {
    uVar6 = *param_4;
    param_1[1] = param_4[1];
    *param_1 = uVar6;
    param_1[2] = param_4[2];
  }
  return;
}



/* Entry: 108ce6a78; end: 108ce6b23; -[SCImageProcessBatchCapturePlaybackSession _prepareDisplayLinkIfNeeded] */

void FUN_108ce6a78(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___CADisplayLink_1126b94a8;
  func_0x00010bf85b60(PTR__OBJC_CLASS___CADisplayLink_1126b94a8,param_2,param_1,
                      PTR_s__displayLinkCallback__11252f528);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(undefined **)(param_1 + 0x30) = puVar1;
  _objc_release(uVar2);
  func_0x00010c1dffc0(0x42700000,0x42f00000,0x42700000,*(undefined8 *)(param_1 + 0x30));
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  puVar1 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
  func_0x00010bf5fe80(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc2c0(uVar2,param_2,puVar1,*(undefined8 *)PTR__NSRunLoopCommonModes_11034aaa8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108ce6b24; end: 108ce6cc7; -[SCImageProcessBatchCapturePlaybackSession _setupFrameSource:playbackBufferMonitoringEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ce6b24(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 unaff_x23;
  ulong uVar12;
  ulong unaff_x24;
  ulong unaff_x25;
  long unaff_x26;
  long lVar13;
  undefined **unaff_x27;
  long lVar14;
  long unaff_x28;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  undefined **ppuStack_188;
  long lStack_180;
  ulong uStack_178;
  ulong uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  long lStack_158;
  undefined8 uStack_150;
  ulong uStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  iVar8 = (int)&uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar9 = (long)_DAT_11277aca0;
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + lVar9);
  *(ulong *)(param_1 + lVar9) = param_3;
  _objc_release(uVar2);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  lVar10 = *(long *)(param_1 + lVar9);
  _objc_retain(lVar10);
  lVar9 = lVar10;
  func_0x00010bf52a60();
  if (lVar9 != 0) {
    unaff_x26 = *plStack_120;
    unaff_x27 = &PTR_PTR_1126d4000;
    do {
      unaff_x28 = 0;
      do {
        if (*plStack_120 != unaff_x26) {
          _objc_enumerationMutation(lVar10);
        }
        puVar3 = PTR_PTR_1126d4d68;
        unaff_x24 = *(ulong *)(lStack_128 + unaff_x28 * 8);
        _objc_retain(unaff_x24);
        _objc_opt_class(puVar3);
        unaff_x25 = unaff_x24;
        _objc_opt_isKindOfClass(unaff_x24,puVar3);
        _objc_release(unaff_x24);
        if (((unaff_x25 & 1) == 0) || (unaff_x24 == 0)) {
          func_0x00010c18b5e0(unaff_x24);
        }
        else {
          _objc_retain(unaff_x24);
          func_0x00010c18b5e0(unaff_x24);
          func_0x00010c1dd4a0(unaff_x24);
          _objc_release(unaff_x24);
        }
        unaff_x28 = unaff_x28 + 1;
      } while (lVar9 != unaff_x28);
      lVar9 = lVar10;
      iVar8 = (int)&uStack_130;
      func_0x00010bf52a60();
      unaff_x23 = 0;
    } while (lVar9 != 0);
  }
  _objc_release(lVar10);
  uVar4 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_108ce6cc8;
  lVar13 = (long)_DAT_11277ac80;
  uVar5 = *(ulong *)(uVar4 + lVar13);
  lStack_190 = unaff_x28;
  ppuStack_188 = unaff_x27;
  lStack_180 = unaff_x26;
  uStack_178 = unaff_x25;
  uStack_170 = unaff_x24;
  uStack_168 = unaff_x23;
  lStack_160 = lVar10;
  lStack_158 = param_1;
  uStack_150 = param_4;
  uStack_148 = param_3;
  puStack_140 = &stack0xfffffffffffffff0;
  func_0x00010bf5ec80();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = (long)_DAT_11277aca4;
  if (((uVar5 != 0) && (*(long *)(uVar4 + lVar9) == 0)) && (*(long *)(uVar4 + 0x30) == 0)) {
    func_0x00010c10a180(uVar4);
  }
  puVar3 = PTR_PTR_1126d4d68;
  uVar12 = *(ulong *)(uVar4 + lVar9);
  if (uVar5 != uVar12) {
    _objc_retain(uVar12);
    _objc_opt_class(puVar3);
    uVar11 = uVar12;
    _objc_opt_isKindOfClass(uVar12,puVar3);
    uVar6 = uVar12;
    if ((uVar11 & 1) == 0) {
      uVar6 = 0;
    }
    _objc_retain(uVar6);
    _objc_release(uVar12);
    if (uVar6 != 0) {
      lVar14 = (long)_DAT_11277ac9c;
      func_0x00010c0f5fe0(*(undefined8 *)(uVar4 + lVar14));
      lVar10 = *(long *)(uVar4 + (long)_DAT_11277aca0);
      func_0x00010bfecde0();
      if (lVar10 != 0x7fffffffffffffff) {
        func_0x00010c0d24a0();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar12;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        if (uVar11 == 0) {
          uStack_1a8 = 0;
          uStack_1b0 = 0;
          uStack_198 = 0;
          uStack_1a0 = 0;
          uStack_1b8 = 0;
          uStack_1c0 = 0;
        }
        else {
          func_0x00010bdc1120(&uStack_1c0,uVar11);
        }
        uStack_1d8 = uStack_1b8;
        uStack_1e0 = uStack_1c0;
        uStack_1d0 = uStack_1b0;
        _objc_release(uVar11);
        _objc_release(uVar12);
        func_0x00010c157260(*(undefined8 *)(uVar4 + lVar14));
      }
    }
    func_0x00010beabe00(uVar4);
    _objc_release(uVar6);
  }
  uVar2 = *(undefined8 *)(uVar4 + lVar13);
  func_0x00010bf600e0();
  lVar10 = (long)_DAT_11277aca8;
  *(undefined8 *)(uVar4 + lVar10) = uVar2;
  uVar12 = uVar4;
  func_0x00010be42be0();
  puVar3 = PTR_PTR_1126d4d68;
  if ((int)uVar12 == 0) {
    uStack_1b8 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    uStack_1c0 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    uStack_1b0 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    func_0x00010c2504e0(*(undefined8 *)(uVar4 + (long)_DAT_11277ac88));
  }
  else if (iVar8 == 0) {
    puVar1 = (undefined8 *)(uVar4 + (long)_DAT_11277ac84);
    uStack_1b8 = puVar1[1];
    uStack_1c0 = *puVar1;
    uStack_1b0 = puVar1[2];
    uVar16 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    uVar15 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    uVar2 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    puVar7 = &uStack_1c0;
    uStack_1e0 = uVar15;
    uStack_1d8 = uVar16;
    uStack_1d0 = uVar2;
    _CMTimeCompare(puVar7,&uStack_1e0);
    if ((int)puVar7 == 0) {
      uStack_1c0 = uVar15;
      uStack_1b8 = uVar16;
      uStack_1b0 = uVar2;
      func_0x00010c250500(*(undefined8 *)(uVar4 + (long)_DAT_11277ac9c));
    }
    else {
      uStack_1b8 = puVar1[1];
      uStack_1c0 = *puVar1;
      uStack_1b0 = puVar1[2];
      func_0x00010c250500(*(undefined8 *)(uVar4 + (long)_DAT_11277ac9c));
      puVar1[1] = uVar16;
      *puVar1 = uVar15;
      puVar1[2] = uVar2;
    }
  }
  else {
    uVar11 = *(ulong *)(uVar4 + lVar9);
    _objc_retain(uVar11);
    _objc_opt_class(puVar3);
    uVar6 = uVar11;
    _objc_opt_isKindOfClass(uVar11,puVar3);
    uVar12 = uVar11;
    if ((uVar6 & 1) == 0) {
      uVar12 = 0;
    }
    _objc_retain(uVar12);
    _objc_release(uVar11);
    uVar6 = uVar4;
    func_0x00010c075740();
    if ((((uVar6 & 1) != 0) || (uVar6 = uVar12, func_0x00010c2907a0(), (int)uVar6 == 0)) ||
       (*(long *)(uVar4 + lVar10) == 0)) {
      if (uVar12 == 0) {
        uStack_1c0 = 0;
        uStack_1b8 = 0;
        uStack_1b0 = 0;
      }
      else {
        func_0x00010c100340(&uStack_1c0,uVar11);
      }
      uStack_1d8 = uStack_1b8;
      uStack_1e0 = uStack_1c0;
      uStack_1d0 = uStack_1b0;
      func_0x00010c250500(*(undefined8 *)(uVar4 + (long)_DAT_11277ac9c));
    }
    _objc_release(uVar12);
  }
  _objc_release(uVar5);
  return;
}



/* Entry: 108ce6cc8; end: 108ce6ff7; -[SCImageProcessBatchCapturePlaybackSession _keepUpWithMovieSequencer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ce6cc8(ulong param_1,undefined8 param_2,int param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar11 = (long)_DAT_11277ac80;
  uVar2 = *(ulong *)(param_1 + lVar11);
  func_0x00010bf5ec80();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = (long)_DAT_11277aca4;
  if (((uVar2 != 0) && (*(long *)(param_1 + lVar10) == 0)) && (*(long *)(param_1 + 0x30) == 0)) {
    func_0x00010c10a180(param_1);
  }
  puVar3 = PTR_PTR_1126d4d68;
  uVar9 = *(ulong *)(param_1 + lVar10);
  if (uVar2 != uVar9) {
    _objc_retain(uVar9);
    _objc_opt_class(puVar3);
    uVar8 = uVar9;
    _objc_opt_isKindOfClass(uVar9,puVar3);
    uVar6 = uVar9;
    if ((uVar8 & 1) == 0) {
      uVar6 = 0;
    }
    _objc_retain(uVar6);
    _objc_release(uVar9);
    if (uVar6 != 0) {
      lVar12 = (long)_DAT_11277ac9c;
      func_0x00010c0f5fe0(*(undefined8 *)(param_1 + lVar12));
      lVar4 = *(long *)(param_1 + (long)_DAT_11277aca0);
      func_0x00010bfecde0();
      if (lVar4 != 0x7fffffffffffffff) {
        func_0x00010c0d24a0();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar9;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        if (uVar8 == 0) {
          uStack_78 = 0;
          uStack_80 = 0;
          uStack_68 = 0;
          uStack_70 = 0;
          uStack_88 = 0;
          uStack_90 = 0;
        }
        else {
          func_0x00010bdc1120(&uStack_90,uVar8);
        }
        uStack_a8 = uStack_88;
        uStack_b0 = uStack_90;
        uStack_a0 = uStack_80;
        _objc_release(uVar8);
        _objc_release(uVar9);
        func_0x00010c157260(*(undefined8 *)(param_1 + lVar12));
      }
    }
    func_0x00010beabe00(param_1);
    _objc_release(uVar6);
  }
  uVar5 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010bf600e0();
  lVar11 = (long)_DAT_11277aca8;
  *(undefined8 *)(param_1 + lVar11) = uVar5;
  uVar9 = param_1;
  func_0x00010be42be0();
  puVar3 = PTR_PTR_1126d4d68;
  if ((int)uVar9 == 0) {
    uStack_88 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    uStack_90 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    uStack_80 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    func_0x00010c2504e0(*(undefined8 *)(param_1 + (long)_DAT_11277ac88));
  }
  else if (param_3 == 0) {
    puVar1 = (undefined8 *)(param_1 + (long)_DAT_11277ac84);
    uStack_88 = puVar1[1];
    uStack_90 = *puVar1;
    uStack_80 = puVar1[2];
    uVar14 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    uVar13 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    uVar5 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    puVar7 = &uStack_90;
    uStack_b0 = uVar13;
    uStack_a8 = uVar14;
    uStack_a0 = uVar5;
    _CMTimeCompare(puVar7,&uStack_b0);
    if ((int)puVar7 == 0) {
      uStack_90 = uVar13;
      uStack_88 = uVar14;
      uStack_80 = uVar5;
      func_0x00010c250500(*(undefined8 *)(param_1 + (long)_DAT_11277ac9c));
    }
    else {
      uStack_88 = puVar1[1];
      uStack_90 = *puVar1;
      uStack_80 = puVar1[2];
      func_0x00010c250500(*(undefined8 *)(param_1 + (long)_DAT_11277ac9c));
      puVar1[1] = uVar14;
      *puVar1 = uVar13;
      puVar1[2] = uVar5;
    }
  }
  else {
    uVar8 = *(ulong *)(param_1 + lVar10);
    _objc_retain(uVar8);
    _objc_opt_class(puVar3);
    uVar6 = uVar8;
    _objc_opt_isKindOfClass(uVar8,puVar3);
    uVar9 = uVar8;
    if ((uVar6 & 1) == 0) {
      uVar9 = 0;
    }
    _objc_retain(uVar9);
    _objc_release(uVar8);
    uVar6 = param_1;
    func_0x00010c075740();
    if ((((uVar6 & 1) != 0) || (uVar6 = uVar9, func_0x00010c2907a0(), (int)uVar6 == 0)) ||
       (*(long *)(param_1 + lVar11) == 0)) {
      if (uVar9 == 0) {
        uStack_90 = 0;
        uStack_88 = 0;
        uStack_80 = 0;
      }
      else {
        func_0x00010c100340(&uStack_90,uVar8);
      }
      uStack_a8 = uStack_88;
      uStack_b0 = uStack_90;
      uStack_a0 = uStack_80;
      func_0x00010c250500(*(undefined8 *)(param_1 + (long)_DAT_11277ac9c));
    }
    _objc_release(uVar9);
  }
  _objc_release(uVar2);
  return;
}



/* Entry: 108ce6ff8; end: 108ce702f; -[SCImageProcessBatchCapturePlaybackSession _cleanUpDisplayLink] */

void FUN_108ce6ff8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c069d00(*(undefined8 *)(param_1 + 0x30));
  func_0x00010c1d9980(*(undefined8 *)(param_1 + 0x30),param_2,1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108ce7030; end: 108ce7073; -[SCImageProcessBatchCapturePlaybackSession _applicationWillResignActive:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ce7030(long param_1,undefined8 param_2)

{
  func_0x00010c1d9980(*(undefined8 *)(param_1 + 0x30),param_2,1);
  *(undefined8 *)(param_1 + _DAT_11277acb0) = 0;
  *(undefined1 *)(param_1 + 0x7d) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010c0f6010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_pauseRunningAndContinueRendering_11261b220,1)
  ;
  return;
}



/* Entry: 108ce7074; end: 108ce7183; -[SCImageProcessBatchCapturePlaybackSession _applicationDidBecomeActive:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ce7074(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  *(undefined8 *)(param_1 + _DAT_11277acb0) = 0;
  func_0x00010c1d9980(*(undefined8 *)(param_1 + 0x30),param_2,0);
  *(undefined1 *)(param_1 + 0x7d) = 0;
  lVar2 = param_1;
  func_0x00010be42be0();
  if ((int)lVar2 == 0) {
    lVar2 = param_1;
    func_0x00010be42b80();
    if ((int)lVar2 != 0) {
      uStack_48 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
      uStack_50 = *(undefined8 *)PTR__kCMTimeZero_110348670;
      uStack_40 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
      func_0x00010c2504e0(*(undefined8 *)(param_1 + _DAT_11277ac88),param_2,&uStack_50);
    }
  }
  else {
    lVar4 = (long)_DAT_11277ac9c;
    lVar3 = *(long *)(param_1 + lVar4);
    func_0x00010c100720();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010c252d60();
    if (lVar2 != 1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar3);
      return;
    }
    iVar1 = (int)*(undefined8 *)(param_1 + lVar4);
    func_0x00010c07a400();
    _objc_release(lVar3);
    if (iVar1 != 0) {
      uStack_48 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
      uStack_50 = *(undefined8 *)PTR__kCMTimeZero_110348670;
      uStack_40 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
      func_0x00010c250500(*(undefined8 *)(param_1 + lVar4),param_2,&uStack_50,0);
    }
  }
  return;
}



/* Entry: 108ce7184; end: 108ce7193; -[SCImageProcessBatchCapturePlaybackSession setShouldAnimateBackgroundCommand:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ce7184(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11277ac78) = param_3;
  return;
}



/* Entry: 108ce7194; end: 108ce765b; -[SCImageProcessBatchCapturePlaybackSession _displayLinkCallback:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ce7194(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  double dVar15;
  double dStack_150;
  ulong uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  double dStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [8];
  double dStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  double dStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_4);
  func_0x00010c26a180(param_4);
  lVar11 = (long)_DAT_11277acb0;
  dVar15 = *(double *)(param_2 + lVar11);
  if ((0.0 < dVar15) && (dVar15 = param_1 - dVar15, 0.05 < dVar15)) {
    func_0x00010c0b3080(dVar15,param_1,*(undefined8 *)(param_2 + _DAT_11277ac98));
  }
  *(double *)(param_2 + lVar11) = param_1;
  iVar2 = (int)*(undefined8 *)(param_2 + _DAT_11277aca4);
  func_0x00010c07ef20();
  if (iVar2 != 0) {
    if (*(long *)(param_2 + 0x68) < 1) {
      lVar11 = (long)_DAT_11277ac9c;
      func_0x00010c100e40(*(undefined8 *)(param_2 + lVar11));
      dVar15 = ABS(dVar15);
      if (dVar15 <= 1.0) {
        lVar8 = *(long *)(param_2 + 0x70) + -1;
      }
      else {
        lVar8 = 0;
      }
      *(long *)(param_2 + 0x68) = lVar8;
      func_0x00010c26a180(param_4);
      lVar8 = *(long *)(param_2 + 0x38);
      _dispatch_semaphore_wait(lVar8,0);
      if (lVar8 == 0) {
        uStack_88 = *(ulong *)(PTR__kCMTimeInvalid_110348648 + 8);
        dStack_90 = *(double *)PTR__kCMTimeInvalid_110348648;
        uStack_80 = *(undefined8 *)(PTR__kCMTimeInvalid_110348648 + 0x10);
        func_0x00010c12fe00();
        lVar8 = param_2;
        func_0x00010be42be0();
        lVar3 = param_2;
        if ((int)lVar8 == 0) {
          func_0x00010bdc4180(dVar15);
        }
        else {
          func_0x00010bdc41a0(dVar15);
        }
        uVar13 = *(undefined8 *)(param_2 + 0x38);
        if (lVar3 == 0) {
          _dispatch_semaphore_signal(uVar13);
        }
        else {
          _objc_retain(uVar13);
          if ((uStack_88 & 0x100000000) == 0) {
            uStack_88 = *(ulong *)(PTR__kCMTimeZero_110348670 + 8);
            dStack_90 = *(double *)PTR__kCMTimeZero_110348670;
            uStack_80 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
            puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
            dVar15 = 1.60807493534087e-314;
            uStack_100 = 0xc2000000;
            pcStack_f8 = FUN_108ce7734;
            puStack_f0 = &UNK_110966ff0;
            _objc_retain(uVar13);
            ppuVar5 = &puStack_108;
            uStack_e8 = uVar13;
            _objc_retainBlock();
            _objc_release(uStack_e8);
          }
          else {
            uVar4 = *(ulong *)(param_2 + lVar11);
            func_0x00010c156f60();
            if ((uVar4 & 1) == 0) {
              uStack_148 = uStack_88;
              dStack_150 = dStack_90;
              uStack_140 = uStack_80;
              func_0x00010c29ab60(*(undefined8 *)(param_2 + 0x80));
            }
            _objc_initWeak(&dStack_150,param_2);
            puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_d8 = 0xc2000000;
            pcStack_d0 = FUN_108ce765c;
            puStack_c8 = &UNK_110ac1cd0;
            _objc_copyWeak(auStack_b8,&dStack_150);
            uStack_98 = (undefined1)uVar4;
            uStack_a8 = uStack_88;
            dStack_b0 = dStack_90;
            uStack_a0 = uStack_80;
            dVar15 = dStack_90;
            _objc_retain(uVar13);
            ppuVar5 = &puStack_e0;
            uStack_c0 = uVar13;
            _objc_retainBlock();
            _objc_release(uStack_c0);
            _objc_destroyWeak(auStack_b8);
            _objc_destroyWeak(&dStack_150);
          }
          puVar6 = PTR_DAT_1126a5b18;
          uVar12 = *(undefined8 *)(param_2 + 0x20);
          _objc_retain(uVar12);
          uVar9 = uVar12;
          func_0x000107c318f8(uVar12,puVar6);
          uVar1 = uVar12;
          if ((int)uVar9 == 0) {
            uVar1 = 0;
          }
          _objc_retain(uVar1);
          _objc_release(uVar12);
          uVar9 = uVar1;
          func_0x00010c230440();
          if ((int)uVar9 != 0) {
            func_0x00010c1fff80(param_2);
            func_0x00010bf9f940(uVar1);
            if (1.0 <= dVar15) {
              func_0x00010c1fff80(param_2);
            }
            else {
              func_0x00010bf9f940(uVar1);
              func_0x00010c199d80(dVar15 + 0.10000000149011612,uVar1);
            }
          }
          lVar8 = *(long *)(param_2 + 0xb8);
          uStack_148 = uStack_88;
          dStack_150 = dStack_90;
          uStack_140 = uStack_80;
          func_0x00010bfc3d80();
          _objc_retainAutoreleasedReturnValue();
          lVar11 = lVar8;
          _objc_autoreleasePoolPush();
          uVar9 = *(undefined8 *)(param_2 + 200);
          if (lVar8 == 0) {
            _objc_retain(0);
            uVar14 = 0;
            uVar12 = 0;
          }
          else {
            uVar14 = *(undefined8 *)(lVar8 + 8);
            _objc_retain(uVar14);
            uVar12 = *(undefined8 *)(lVar8 + 0x10);
          }
          _objc_retain(uVar12);
          puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
          func_0x00010bf41620(0,0,0,0x3ff0000000000000);
          _objc_retainAutoreleasedReturnValue();
          lVar7 = param_2;
          _objc_opt_class();
          _NSStringFromClass();
          _objc_retainAutoreleasedReturnValue();
          uStack_110 = uStack_80;
          uStack_148 = *(ulong *)(param_2 + 0x90);
          dStack_150 = *(double *)(param_2 + 0x88);
          uStack_138 = *(undefined8 *)(param_2 + 0xa0);
          uStack_140 = *(undefined8 *)(param_2 + 0x98);
          uStack_128 = *(undefined8 *)(param_2 + 0xb0);
          uStack_130 = *(undefined8 *)(param_2 + 0xa8);
          uStack_118 = uStack_88;
          dStack_120 = dStack_90;
          func_0x00010c29ab00();
          _objc_retainAutoreleasedReturnValue();
          uVar10 = *(undefined8 *)(param_2 + 0x10);
          *(undefined8 *)(param_2 + 0x10) = uVar9;
          _objc_release(uVar10);
          _objc_release(lVar7);
          _objc_release(puVar6);
          _objc_release(uVar12);
          _objc_release(uVar14);
          func_0x00010befafa0(*(undefined8 *)(param_2 + 8));
          _objc_autoreleasePoolPop(lVar11);
          _CVPixelBufferRelease(lVar3);
          _objc_release(lVar8);
          _objc_release(uVar1);
          _objc_release(uVar13);
          _objc_release(ppuVar5);
        }
      }
    }
    else {
      *(long *)(param_2 + 0x68) = *(long *)(param_2 + 0x68) + -1;
    }
  }
  _objc_release(param_4);
  return;
}



/* Entry: 108ce765c; end: 108ce76f7;  */

void FUN_108ce765c(long param_1)

{
  long lVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (((*(byte *)(param_1 + 0x48) & 1) == 0) && (lVar1 != 0)) {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_108ce76f8;
    puStack_48 = &UNK_11084e430;
    uStack_30 = *(undefined8 *)(param_1 + 0x38);
    uStack_38 = *(undefined8 *)(param_1 + 0x30);
    uStack_28 = *(undefined8 *)(param_1 + 0x40);
    lStack_40 = lVar1;
    func_0x000107c312d0("APPSTORE",&puStack_60);
  }
  _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x20));
  _objc_release(lVar1);
  return;
}



/* Entry: 108ce76f8; end: 108ce7733;  */

void FUN_108ce76f8(long param_1,undefined8 param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_28 = *(undefined8 *)(param_1 + 0x30);
  uStack_30 = *(undefined8 *)(param_1 + 0x28);
  uStack_20 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c29ab40(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x80),param_2,
                      *(long *)(param_1 + 0x20),&uStack_30);
  return;
}



/* Entry: 108ce7734; end: 108ce773b;  */

void FUN_108ce7734(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_semaphore_signal_11034c130)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 108ce773c; end: 108ce7b83; -[SCImageProcessBatchCapturePlaybackSession _acquirePixelBufferFromVideoSourceForHostTime:itemTimeForDisplay:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_108ce773c(double param_1,ulong param_2,undefined8 param_3,double *param_4)

{
  ulong uVar1;
  int iVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  double dVar8;
  double dStack_d0;
  double dStack_c8;
  double dStack_c0;
  double dStack_b0;
  double dStack_a8;
  double dStack_a0;
  double dStack_90;
  double dStack_88;
  double dStack_80;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  
  puVar3 = PTR_PTR_1126d4d68;
  lVar7 = (long)_DAT_11277aca4;
  uVar6 = *(ulong *)(param_2 + lVar7);
  dVar8 = param_1;
  _objc_retain(uVar6);
  _objc_opt_class(puVar3);
  uVar4 = uVar6;
  _objc_opt_isKindOfClass(uVar6,puVar3);
  uVar1 = uVar6;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar6);
  if (*(long *)(param_2 + lVar7) == 0) {
    dStack_78 = 0.0;
    dStack_70 = 0.0;
    dStack_68 = 0.0;
  }
  else {
    dVar8 = param_1;
    func_0x00010c084bc0(&dStack_78);
  }
  func_0x00010bfb1f40(uVar1);
  if (dVar8 == 0.0) {
    func_0x00010c19d820(param_1,uVar1);
  }
  uVar4 = *(ulong *)(param_2 + lVar7);
  dStack_88 = dStack_70;
  dStack_90 = dStack_78;
  dStack_80 = dStack_68;
  dVar8 = dStack_78;
  func_0x00010bfd96e0();
  if ((uVar4 & 1) == 0) {
    uVar6 = uVar1;
    func_0x00010bfd6f00();
    if ((uVar6 & 1) == 0) {
      func_0x00010bfb1f40(uVar1);
      if (*(double *)(param_2 + 0x40) < param_1 - dVar8) {
        *(double *)(param_2 + 0x40) = *(double *)(param_2 + 0x40) + 0.1;
        func_0x00010c129320(uVar1);
        func_0x00010c19d820(0,uVar1);
        func_0x00010c1a5ee0(uVar1);
      }
    }
    iVar2 = (int)*(undefined8 *)(param_2 + (long)_DAT_11277ac9c);
    func_0x00010c07a400();
    if (iVar2 != 0) {
      func_0x00010c0da8a0(uVar1);
      func_0x00010c1cd840(uVar1);
      uVar6 = uVar1;
      func_0x00010c129340();
      if ((long)uVar6 < 3) {
        uVar6 = uVar1;
        func_0x00010c0da8a0();
        if (0x1e < (long)uVar6) {
          *(double *)(param_2 + 0x40) = *(double *)(param_2 + 0x40) + 0.1;
          func_0x00010c129320(uVar1);
          func_0x00010c1cd840(uVar1);
        }
      }
      else {
        *(double *)(param_2 + 0x40) = *(double *)(param_2 + 0x40) + 0.1;
        func_0x00010c1cd840(uVar1);
        func_0x00010c1e9ca0(uVar1);
        func_0x00010c138740(param_2);
      }
    }
  }
  else {
    func_0x00010c1cd840(uVar1);
    func_0x00010c1e9ca0(uVar1);
  }
  uVar6 = param_2;
  func_0x00010c075740();
  lVar7 = *(long *)(param_2 + lVar7);
  if ((int)uVar6 == 0) {
    dStack_88 = dStack_70;
    dStack_90 = dStack_78;
    dStack_80 = dStack_68;
    func_0x00010beedc60();
  }
  else {
    dStack_88 = dStack_70;
    dStack_90 = dStack_78;
    dStack_80 = dStack_68;
    func_0x00010beedc40();
  }
  if ((uVar4 & 1) == 0) {
    uVar4 = *(ulong *)(param_2 + (long)_DAT_11277ac9c);
    func_0x00010c07a400();
    if ((uVar4 & 1) == 0) {
      dStack_a8 = dStack_70;
      dStack_b0 = dStack_78;
      dStack_a0 = dStack_68;
      dStack_c8 = param_4[1];
      dStack_d0 = *param_4;
      dStack_c0 = param_4[2];
      _CMTimeSubtract(&dStack_90,&dStack_b0,&dStack_d0);
      dStack_a8 = dStack_88;
      dStack_b0 = dStack_90;
      dStack_a0 = dStack_80;
      dVar8 = dStack_90;
      _CMTimeGetSeconds(&dStack_b0);
      if (0.10000000149011612 <= ABS(dVar8)) {
        func_0x00010c129320(uVar1);
        goto LAB_108ce7af0;
      }
    }
  }
  uVar4 = param_2;
  func_0x00010c075740();
  if ((((int)uVar4 == 0) || (uVar4 = param_2, func_0x00010c07cb40(), (uVar4 & 1) != 0)) ||
     (uVar4 = param_2, func_0x00010c072a00(), (uVar4 & 1) != 0)) {
    uVar4 = 1;
  }
  else {
    iVar2 = (int)*(undefined8 *)(param_2 + (long)_DAT_11277ac9c);
    func_0x00010c07a400();
    uVar4 = uVar1;
    if (iVar2 == 0) {
      dStack_88 = param_4[1];
      dStack_90 = *param_4;
      dStack_80 = param_4[2];
      func_0x00010c081020();
    }
    else {
      dStack_88 = param_4[1];
      dStack_90 = *param_4;
      dStack_80 = param_4[2];
      func_0x00010c081000();
    }
  }
  if ((lVar7 != 0) && (uVar6 = param_2, func_0x00010c075740(), (uVar6 & 1) == 0)) {
    dStack_88 = param_4[1];
    dStack_90 = *param_4;
    dStack_80 = param_4[2];
    func_0x00010c0d2240(uVar1);
    func_0x00010c0a42c0(*(undefined8 *)(param_2 + (long)_DAT_11277ac98));
  }
  if ((uVar4 & 1) == 0) {
    _CVPixelBufferRelease(lVar7);
    lVar7 = *(long *)(param_2 + 0x48);
    _CVPixelBufferRetain();
  }
  if (lVar7 == 0) {
    uVar4 = *(ulong *)(param_2 + (long)_DAT_11277ac9c);
    func_0x00010c07a400();
    if ((uVar4 & 1) != 0) {
      lVar7 = 0;
      goto LAB_108ce7af0;
    }
    lVar7 = *(long *)(param_2 + 0x48);
    _CVPixelBufferRetain();
    if (lVar7 == 0) goto LAB_108ce7af0;
  }
  else {
    _CVPixelBufferRelease(*(undefined8 *)(param_2 + 0x48));
    lVar5 = lVar7;
    _CVPixelBufferRetain();
    *(long *)(param_2 + 0x48) = lVar5;
  }
  uVar4 = uVar1;
  func_0x00010bfd6f00();
  if ((uVar4 & 1) == 0) {
    func_0x00010c1a5ee0(uVar1);
    *(undefined8 *)(param_2 + 0x40) = 0x3fc999999999999a;
  }
LAB_108ce7af0:
  _objc_release(uVar1);
  return lVar7;
}



/* Entry: 108ce7b84; end: 108ce7bf7; -[SCImageProcessBatchCapturePlaybackSession _acquirePixelBufferFromImageSourceForHostTime:itemTimeForDisplay:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ce7b84(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar2 = (long)_DAT_11277aca4;
  if (*(long *)(param_1 + lVar2) == 0) {
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    uVar1 = 0;
  }
  else {
    func_0x00010c084bc0(&uStack_48);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
  }
  uStack_58 = uStack_40;
  uStack_60 = uStack_48;
  uStack_50 = uStack_38;
  func_0x00010beedc60(uVar1,param_2,&uStack_60,param_3);
  return;
}



/* Entry: 108ce7bf8; end: 108ce7c07; -[SCImageProcessBatchCapturePlaybackSession _updatePlayerRateWithReversePlayback] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ce7bf8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c288930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277ac9c),
             PTR_s_updatePlayerRateWithReversePlayb_11267fc70);
  return;
}



/* Entry: 108ce7c08; end: 108ce7c77; -[SCImageProcessBatchCapturePlaybackSession _startRunningShouldSeekToStart:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ce7c08(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277ac80;
  if ((param_3 & 1) == 0) {
    lVar1 = *(long *)(param_1 + lVar2);
    func_0x00010bf5ec80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be466d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__keepUpWithMovieSequencer__11256f350,0);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010befe3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar2),PTR_s_advanceToSourceIndex_sourceMulti_11259d298,0,0);
  return;
}



/* Entry: 108ce7c78; end: 108ce7cd7; -[SCImageProcessBatchCapturePlaybackSession _isPlayingVideoFrameSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_108ce7c78(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126d4d68;
  lVar3 = *(long *)(param_1 + _DAT_11277aca4);
  _objc_retain(lVar3);
  _objc_opt_class(puVar1);
  lVar2 = lVar3;
  _objc_opt_isKindOfClass(lVar3,puVar1);
  _objc_release(lVar3);
  return (uint)lVar2 & (uint)(lVar3 != 0);
}



/* Entry: 108ce7cd8; end: 108ce7d37; -[SCImageProcessBatchCapturePlaybackSession _isPlayingImageFrameSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_108ce7cd8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126d4d70;
  lVar3 = *(long *)(param_1 + _DAT_11277aca4);
  _objc_retain(lVar3);
  _objc_opt_class(puVar1);
  lVar2 = lVar3;
  _objc_opt_isKindOfClass(lVar3,puVar1);
  _objc_release(lVar3);
  return (uint)lVar2 & (uint)(lVar3 != 0);
}



/* Entry: 108ce7d38; end: 108ce7d3f; -[SCImageProcessBatchCapturePlaybackSession _warmupCommandsIfNeededForOutputSize:] */

void FUN_108ce7d38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2a1db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xb8),PTR_s_warmupCommandsIfNeededForOutputS_112686190);
  return;
}



/* Entry: 108ce7d40; end: 108ce7e77; -[SCImageProcessBatchCapturePlaybackSession _updatePlayerStartTimeWhenLoopVideoSourceAtIndex:snapIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ce7d40(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar2 = *(ulong *)(param_1 + _DAT_11277aca0);
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126d4d68;
  _objc_opt_class(PTR_PTR_1126d4d68);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  if (uVar1 != 0) {
    uVar4 = uVar2;
    func_0x00010c0d24a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf529e0();
    _objc_release(uVar4);
    if (param_4 < uVar5) {
      func_0x00010c0d24a0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      if (uVar4 == 0) {
        uStack_58 = 0;
        uStack_60 = 0;
        uStack_48 = 0;
        uStack_50 = 0;
        uStack_68 = 0;
        uStack_70 = 0;
      }
      else {
        func_0x00010bdc1120(&uStack_70,uVar4);
      }
      _objc_release(uVar4);
      _objc_release(uVar2);
      func_0x00010c209aa0(*(undefined8 *)(param_1 + _DAT_11277ac9c));
    }
  }
  _objc_release(uVar1);
  return;
}



/* Entry: 108ce7e78; end: 108ce7e7b; -[SCImageProcessBatchCapturePlaybackSession audioSessionDidBeginInterruption:] */

void FUN_108ce7e78(void)

{
  return;
}



/* Entry: 108ce7e7c; end: 108ce7e7f; -[SCImageProcessBatchCapturePlaybackSession audioSession:didEndInterruption:] */

void FUN_108ce7e7c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bedd550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updatePlayerRateWithReversePlay_112594ef8);
  return;
}



/* Entry: 108ce7e80; end: 108ce7e83; -[SCImageProcessBatchCapturePlaybackSession audioSessionRouteDidChangeReasonNewDeviceAvailable:] */

void FUN_108ce7e80(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bedd550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updatePlayerRateWithReversePlay_112594ef8);
  return;
}



/* Entry: 108ce7e84; end: 108ce7f5f; -[SCImageProcessBatchCapturePlaybackSession audioSessionRouteDidChangeReasonOldDeviceUnavailable:] */

void FUN_108ce7e84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x108ce7f2c;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x000107c312d4(0x3e4ccccd,"APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 108ce7f60; end: 108ce7f63; -[SCImageProcessBatchCapturePlaybackSession _onReceiveStopNotification:] */

void FUN_108ce7f60(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2568b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_stopRunning_112673450);
  return;
}



/* Entry: 108ce7f64; end: 108ce7fe7; -[SCImageProcessBatchCapturePlaybackSession videoFrameSource:sourceLoaded:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ce7f64(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    _objc_retain(param_3);
    func_0x00010c19d820(0,param_3);
    func_0x00010c1a5ee0(param_3);
    lVar1 = param_1 + _DAT_11277acb4;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bdc23c0();
    _objc_release(param_3);
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be78230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__prepareDisplayLinkIfNeeded_11257ba28);
    return;
  }
  return;
}



/* Entry: 108ce7fe8; end: 108ce80bf; -[SCImageProcessBatchCapturePlaybackSession videoFrameSourceDidPlayToEnd:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ce7fe8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + _DAT_11277ac9c);
  func_0x00010bf601a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == lVar1) {
    lVar1 = *(long *)(param_1 + _DAT_11277aca4);
    _objc_release();
    if (param_3 == lVar1) {
      *(undefined1 *)(param_1 + 0x7e) = 1;
      lVar1 = param_1;
      func_0x00010c07cb40();
      if ((int)lVar1 == 0) {
        lVar1 = param_1;
        func_0x00010c072a00();
        if ((int)lVar1 == 0) {
          lVar2 = (long)_DAT_11277ac80;
          lVar1 = *(long *)(param_1 + lVar2);
          func_0x00010bf5ec80();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (lVar1 != 0) {
            func_0x00010befe2e0(*(undefined8 *)(param_1 + lVar2));
          }
        }
        else {
          func_0x00010bfaf8a0(param_1);
        }
      }
      else {
        func_0x00010bfafb20(param_1);
      }
    }
  }
  else {
    _objc_release();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108ce80c0; end: 108ce80cb; -[SCImageProcessBatchCapturePlaybackSession videoFrameSourcePlaybackBufferEmpty:] */

void FUN_108ce80c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c29ac10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x80),PTR_s_videoPlaybackSessionPlayerItemBu_112684528,
             param_1);
  return;
}



/* Entry: 108ce80cc; end: 108ce80d7; -[SCImageProcessBatchCapturePlaybackSession videoFrameSourcePlaybackLikelyToKeepUp:] */

void FUN_108ce80cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c29ac50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x80),PTR_s_videoPlaybackSessionPlayerItemLi_112684538,
             param_1);
  return;
}



/* Entry: 108ce80d8; end: 108ce80e7; -[SCImageProcessBatchCapturePlaybackSession imageFrameSourceDidPlayToEnd:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ce80d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befe2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277ac80),PTR_s_advance_11259d260);
  return;
}



/* Entry: 108ce80e8; end: 108ce830f; -[SCImageProcessBatchCapturePlaybackSession frameSourceSequencer:didChangeFromSource:snapIndex:toSource:snapIndex:] */

void FUN_108ce80e8(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,ulong param_5,
                  ulong param_6)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [24];
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
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  if (param_4 == param_6) {
    puVar2 = PTR_PTR_1126d4d68;
    _objc_opt_class(PTR_PTR_1126d4d68);
    uVar3 = param_6;
    _objc_opt_isKindOfClass(param_6,puVar2);
    uVar1 = param_6;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    if ((uVar1 != 0) && (uVar3 = param_6, func_0x00010c0d2640(), param_5 < uVar3)) {
      uVar3 = param_6;
      func_0x00010c0d24a0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      if (uVar4 == 0) {
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_68 = 0;
        uStack_70 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
      }
      else {
        func_0x00010bdc1120(&uStack_90,uVar4);
      }
      _objc_release(uVar4);
      _objc_release(uVar3);
      uVar3 = param_6;
      func_0x00010c0d24a0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      if (uVar4 == 0) {
        uStack_a8 = 0;
        uStack_b0 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0;
      }
      else {
        func_0x00010bdc1120(&uStack_c0,uVar4);
      }
      _objc_release(uVar4);
      _objc_release(uVar3);
      uStack_108 = uStack_88;
      uStack_110 = uStack_90;
      uStack_f8 = uStack_78;
      uStack_100 = uStack_80;
      uStack_e8 = uStack_68;
      uStack_f0 = uStack_70;
      _CMTimeRangeGetEnd(auStack_d8,&uStack_110);
      uStack_108 = uStack_b8;
      uStack_110 = uStack_c0;
      uStack_100 = uStack_b0;
      puVar5 = auStack_d8;
      _CMTimeCompare(puVar5,&uStack_110);
      if ((int)puVar5 == 0) {
        func_0x00010c100700(param_3);
      }
    }
    _objc_release(uVar1);
  }
  func_0x00010be466c0(param_1);
  lVar6 = param_1;
  func_0x00010bfb7040(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc23a0();
  _objc_release(lVar6);
  *(undefined1 *)(param_1 + 0x7e) = 0;
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108ce8310; end: 108ce8363; -[SCImageProcessBatchCapturePlaybackSession frameSourceSequencerWillLoopCurrentSegment:] */

void FUN_108ce8310(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c07cb40();
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bfafb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finishRewindingToBeginning_1125c9870);
    return;
  }
  uVar1 = param_1;
  func_0x00010c072a00();
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bfaf8b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finishFastForwardingToEnd_1125c97d0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c157170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_seekToCurrentSegmentBeginning_112633678);
  return;
}



/* Entry: 108ce8364; end: 108ce843b; -[SCImageProcessBatchCapturePlaybackSession videoFramePlayerAudioFrameTimeAtVideoFrameTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ce8364(undefined8 *param_1,ulong param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar1 = param_2;
  func_0x00010bf4fc80();
  puVar2 = PTR_PTR_1126d4d68;
  if ((uVar1 & 1) == 0) {
    uVar5 = *param_4;
    param_1[1] = param_4[1];
    *param_1 = uVar5;
    param_1[2] = param_4[2];
  }
  else {
    uVar4 = *(ulong *)(param_2 + (long)_DAT_11277aca4);
    _objc_retain(uVar4);
    _objc_opt_class(puVar2);
    uVar3 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar2);
    uVar1 = uVar4;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar4);
    if (uVar1 == 0) {
      uVar5 = *param_4;
      param_1[1] = param_4[1];
      *param_1 = uVar5;
      param_1[2] = param_4[2];
    }
    else {
      func_0x00010bf100e0(param_1,uVar4);
    }
    _objc_release(uVar1);
  }
  return;
}



/* Entry: 108ce843c; end: 108ce84eb; -[SCImageProcessBatchCapturePlaybackSession videoFramePlayerEnablesContinuousAudio] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_108ce843c(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  byte bVar5;
  ulong uVar6;
  
  lVar2 = param_1;
  func_0x00010bf4fc80();
  puVar3 = PTR_PTR_1126d4d68;
  if (((int)lVar2 != 0) && ((*(byte *)(param_1 + _DAT_11277acac) & 1) == 0)) {
    uVar6 = *(ulong *)(param_1 + _DAT_11277aca4);
    _objc_retain(uVar6);
    _objc_opt_class(puVar3);
    uVar4 = uVar6;
    _objc_opt_isKindOfClass(uVar6,puVar3);
    uVar1 = uVar6;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar6);
    uVar4 = uVar1;
    func_0x00010c0712a0();
    _objc_release(uVar1);
    if ((uVar4 & 1) == 0) {
      bVar5 = *(byte *)(param_1 + 0x7e) ^ 1;
      goto LAB_108ce84cc;
    }
  }
  bVar5 = 0;
LAB_108ce84cc:
  return bVar5 & 1;
}



/* Entry: 108ce84ec; end: 108ce84fb; -[SCImageProcessBatchCapturePlaybackSession isIndividualLooping] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108ce84ec(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277acac);
}



/* Entry: 108ce84fc; end: 108ce851b; -[SCImageProcessBatchCapturePlaybackSession frameSourcePlayDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ce84fc(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277acb4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ce851c; end: 108ce852f; -[SCImageProcessBatchCapturePlaybackSession setFrameSourcePlayDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ce851c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277acb4,param_3);
  return;
}



/* Entry: 108ce8530; end: 108ce853f; -[SCImageProcessBatchCapturePlaybackSession frameSourcesBatch] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108ce8530(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277ac7c);
}



/* Entry: 108ce8540; end: 108ce854f; -[SCImageProcessBatchCapturePlaybackSession layer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108ce8540(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277ac94);
}



/* Entry: 108ce8550; end: 108ce858f; -[SCImageProcessBatchCapturePlaybackSession setLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ce8550(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277ac94;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108ce8590; end: 108ce864b; -[SCImageProcessBatchCapturePlaybackSession .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ce8590(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277ac7c,0);
  _objc_destroyWeak(param_1 + _DAT_11277acb4);
  _objc_storeStrong(param_1 + _DAT_11277ac8c,0);
  _objc_storeStrong(param_1 + _DAT_11277ac98,0);
  _objc_storeStrong(param_1 + _DAT_11277ac94,0);
  _objc_storeStrong(param_1 + _DAT_11277ac9c,0);
  _objc_storeStrong(param_1 + _DAT_11277ac88,0);
  _objc_storeStrong(param_1 + _DAT_11277aca4,0);
  _objc_storeStrong(param_1 + _DAT_11277ac80,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277aca0,0);
  return;
}



/* Entry: 108ce864c; end: 108ce875b; -[SCBatchCaptureCollectionView initWithFrame:] */

undefined1 *
FUN_108ce864c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar2 = &uStack_60;
  puVar1 = PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18;
  _objc_opt_new(PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18);
  func_0x00010c1f7ac0();
  puStack_58 = PTR_PTR_1126fe438;
  uStack_60 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&uStack_60,
                      PTR_s_initWithFrame_collectionViewLayo_1125e29e0,puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar2);
    _objc_release(puVar3);
    func_0x00010c167a00(puVar2);
    func_0x00010c167680(puVar2);
    func_0x00010c2026e0(puVar2);
    func_0x00010c2025c0(puVar2);
    func_0x00010c1fbe00(puVar2);
  }
  _objc_release(puVar1);
  return (undefined1 *)puVar2;
}



/* Entry: 108ce875c; end: 108ce87f3; -[SCBatchCaptureCollectionView setContentSize:] */

void FUN_108ce875c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lStack_40;
  undefined *puStack_38;
  
  lVar1 = param_3;
  uVar2 = param_1;
  uVar3 = param_2;
  func_0x00010bf4de80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_3;
    func_0x00010bf4de80(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1069a0();
    _objc_release(lVar1);
    param_2 = uVar3;
    param_1 = uVar2;
  }
  puStack_38 = PTR_PTR_1126fe438;
  lStack_40 = param_3;
  _objc_msgSendSuper2(param_1,param_2,&lStack_40,PTR_s_setContentSize__11263e410);
  return;
}



/* Entry: 108ce87f4; end: 108ce886f; -[SCBatchCaptureCollectionView changeLayout:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ce87f4(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x4041800000000000;
  uVar1 = 0x404f000000000000;
  if (param_3 == 0) {
    uVar3 = 0x404f000000000000;
    uVar1 = 0x4041800000000000;
  }
  lVar2 = param_1;
  func_0x00010bf408e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b6260(uVar1,uVar3);
  _objc_release(lVar2);
  *(char *)(param_1 + _DAT_11277acb8) = (char)param_3;
  return;
}



/* Entry: 108ce8870; end: 108ce8897; -[SCBatchCaptureCollectionView preferredHeight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108ce8870(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x404b800000000000;
  if (*(char *)(param_1 + _DAT_11277acb8) == '\0') {
    uVar1 = 0x4054800000000000;
  }
  return uVar1;
}



/* Entry: 108ce8898; end: 108ce8a67; -[SCBatchCaptureCollectionView pointInside:withEvent:] */

bool FUN_108ce8898(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  bool bVar1;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_5);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x2020000000;
  uStack_68 = 0;
  puStack_98 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x2020000000;
  uStack_88 = 0;
  puStack_b8 = &uStack_c0;
  uStack_c0 = 0;
  uStack_b0 = 0x2020000000;
  uStack_a8 = 0;
  puStack_d8 = &uStack_e0;
  uStack_e0 = 0;
  uStack_d0 = 0x2020000000;
  uStack_c8 = 0;
  func_0x00010c29fc60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf97e80();
  _objc_release(param_3);
  if (((param_1 <= (double)puStack_78[3] + -20.0) || ((double)puStack_98[3] + 20.0 <= param_1)) ||
     (param_2 <= (double)puStack_b8[3] + -20.0)) {
    bVar1 = false;
  }
  else {
    bVar1 = param_2 < (double)puStack_d8[3];
  }
  __Block_object_dispose(&uStack_e0,8);
  __Block_object_dispose(&uStack_c0,8);
  __Block_object_dispose(&uStack_a0,8);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(param_5);
  return bVar1;
}



/* Entry: 108ce8a68; end: 108ce8b7f;  */

void FUN_108ce8a68(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  double dVar1;
  double dVar2;
  
  dVar1 = *(double *)(*(long *)(*(long *)(param_5 + 0x20) + 8) + 0x18);
  _objc_retain(param_6);
  func_0x00010bfb68e0(param_6);
  _CGRectGetMinX();
  if (param_1 <= dVar1) {
    dVar1 = param_1;
  }
  *(double *)(*(long *)(*(long *)(param_5 + 0x20) + 8) + 0x18) = dVar1;
  dVar2 = *(double *)(*(long *)(*(long *)(param_5 + 0x28) + 8) + 0x18);
  func_0x00010bfb68e0(param_6);
  _CGRectGetMaxX();
  if (dVar1 <= dVar2) {
    dVar1 = dVar2;
  }
  *(double *)(*(long *)(*(long *)(param_5 + 0x28) + 8) + 0x18) = dVar1;
  dVar2 = *(double *)(*(long *)(*(long *)(param_5 + 0x30) + 8) + 0x18);
  func_0x00010bfb68e0(param_6);
  _CGRectGetMinY();
  if (dVar1 <= dVar2) {
    dVar2 = dVar1;
  }
  *(double *)(*(long *)(*(long *)(param_5 + 0x30) + 8) + 0x18) = dVar2;
  dVar1 = *(double *)(*(long *)(*(long *)(param_5 + 0x38) + 8) + 0x18);
  func_0x00010bfb68e0(param_6);
  _objc_release(param_6);
  _CGRectGetMaxY(dVar2,param_2,param_3,param_4);
  if (dVar2 <= dVar1) {
    dVar2 = dVar1;
  }
  *(double *)(*(long *)(*(long *)(param_5 + 0x38) + 8) + 0x18) = dVar2;
  return;
}



/* Entry: 108ce8b80; end: 108ce8b9f; -[SCBatchCaptureCollectionView contentWidthDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ce8b80(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277acbc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ce8ba0; end: 108ce8bb3; -[SCBatchCaptureCollectionView setContentWidthDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ce8ba0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277acbc,param_3);
  return;
}



/* Entry: 108ce8bb4; end: 108ce8bc3; -[SCBatchCaptureCollectionView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ce8bb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11277acbc);
  return;
}



/* Entry: 108ce8bc4; end: 108ce8cd3; -[SCBatchCaptureCollectionViewController initWithConfiguration:playerHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_108ce8bc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar2 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126fe440;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    lVar5 = (long)_DAT_11277acc0;
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_3;
    _objc_release(uVar3);
    puVar1 = (undefined8 *)((long)puVar2 + (long)_DAT_11277acc4);
    uVar3 = *(undefined8 *)PTR__kCMTimeInvalid_110348648;
    puVar1[1] = *(undefined8 *)(PTR__kCMTimeInvalid_110348648 + 8);
    *puVar1 = uVar3;
    puVar1[2] = *(undefined8 *)(PTR__kCMTimeInvalid_110348648 + 0x10);
    _objc_storeWeak((undefined1 *)((long)puVar2 + (long)_DAT_11277acc8),param_4);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_11277accc);
    *(undefined **)((long)puVar2 + (long)_DAT_11277accc) = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_11277acd0);
    *(undefined **)((long)puVar2 + (long)_DAT_11277acd0) = puVar4;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar2;
}



/* Entry: 108ce8cd4; end: 108ce8d23; -[SCBatchCaptureCollectionViewController loadView] */

void FUN_108ce8cd4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c4b80;
  _objc_alloc(PTR_PTR_1126c4b80);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c222380(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108ce8d24; end: 108ce8e9f; -[SCBatchCaptureCollectionViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ce8d24(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126fe440;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR_PTR_1126dbb30;
  _objc_alloc();
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c013de0();
  lVar4 = (long)_DAT_11277acd4;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  _objc_release(lVar2);
  func_0x00010c189840(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c182c20(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c181f80(0x4034000000000000,0x4031800000000000,0,0x4031800000000000,
                      *(undefined8 *)(param_1 + lVar4));
  func_0x00010c16d4a0(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c167680(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c17d4c0(*(undefined8 *)(param_1 + lVar4));
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  _objc_opt_class(PTR_PTR_1126b0d88);
  puVar1 = PTR_PTR_1126b0d88;
  _objc_opt_class(PTR_PTR_1126b0d88);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c126000(uVar3);
  _objc_release(puVar1);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar4));
  return;
}



/* Entry: 108ce8ea0; end: 108ce8eaf; -[SCBatchCaptureCollectionViewController preferredHeight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ce8ea0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c106b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277acd4),PTR_s_preferredHeight_11261f4f8);
  return;
}



/* Entry: 108ce8eb0; end: 108ce8eb3; -[SCBatchCaptureCollectionViewController componentView] */

void FUN_108ce8eb0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c29bf10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_view_1126849e8);
  return;
}



/* Entry: 108ce8eb4; end: 108ce8ee7; -[SCBatchCaptureCollectionViewController deselectSelectedSegmentIfAny] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_108ce8eb4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_11277acd8);
  if (lVar1 != 0) {
    func_0x00010bdfb120();
  }
  return lVar1 != 0;
}



/* Entry: 108ce8ee8; end: 108ce8eeb; -[SCBatchCaptureCollectionViewController exitSegmentThumbnailsReordering] */

void FUN_108ce8ee8(void)

{
  return;
}



/* Entry: 108ce8eec; end: 108ce8eef; -[SCBatchCaptureCollectionViewController restoreThumbnailsToInitialStateInReorder] */

void FUN_108ce8eec(void)

{
  return;
}



/* Entry: 108ce8ef0; end: 108ce9223; -[SCBatchCaptureCollectionViewController fetchAndSetThumbnailsForSegmentAtSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ce8ef0(undefined8 param_1,long param_2,undefined8 param_3,undefined *param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  double dStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  double dStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_2;
  puVar3 = param_4;
  func_0x00010be457e0();
  if ((int)lVar1 != 0) {
    lVar2 = *(long *)(param_2 + _DAT_11277acc0);
    func_0x00010c1585e0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = lVar1;
    func_0x00010c26db80();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar2;
    func_0x00010bf529e0();
    _objc_release(lVar2);
    if (lVar11 == 0) {
      puVar3 = (undefined *)(param_2 + _DAT_11277acc8);
      _objc_loadWeakRetained();
      puVar4 = puVar3;
      func_0x00010bf5fa60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      puVar3 = PTR__OBJC_CLASS___AVAsset_1126aff38;
      if (puVar4 == (undefined *)0x0) {
        lVar2 = lVar1;
        func_0x00010bf0b7e0(lVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf0b9e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar2);
        puVar4 = puVar3;
      }
      puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14e120();
      _objc_release(puVar3);
      if (lVar1 == 0) {
        dStack_a8 = 0.0;
        uStack_b0 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0;
      }
      else {
        func_0x00010bf4d840(&uStack_c0,lVar1);
      }
      uStack_88 = uStack_a0;
      dStack_90 = dStack_a8;
      uStack_80 = uStack_98;
      _CMTimeGetSeconds(&dStack_90);
      puVar3 = PTR_PTR_1126d4260;
      func_0x00010b690ad8(0x4041800000000000,0x404f000000000000,param_1);
      func_0x00010bf59840();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c214080(lVar1);
      lVar2 = (long)_DAT_11277acd4;
      uVar13 = *(ulong *)(param_2 + lVar2);
      puVar5 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
      func_0x00010bfed060(PTR__OBJC_CLASS___NSIndexPath_1126b0990);
      _objc_retainAutoreleasedReturnValue();
      param_4 = puVar5;
      func_0x00010bf33b60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      puVar5 = PTR_PTR_1126b0d88;
      _objc_opt_class(PTR_PTR_1126b0d88);
      uVar7 = uVar13;
      _objc_opt_isKindOfClass(uVar13,puVar5);
      uVar8 = uVar13;
      if ((uVar7 & 1) == 0) {
        uVar8 = 0;
      }
      _objc_retain(uVar8);
      _objc_release(uVar13);
      uVar7 = uVar8;
      func_0x00010bf3fb40();
      _objc_release(uVar8);
      if ((uVar7 & 1) == 0) {
        uVar12 = *(undefined8 *)(param_2 + lVar2);
        puVar5 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
        func_0x00010bfed060();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_70 = puVar5;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        param_4 = puVar6;
        func_0x00010c128de0(uVar12);
        _objc_release(puVar6);
        _objc_release(puVar5);
      }
      _objc_release(puVar3);
      _objc_release(puVar4);
    }
    _objc_release();
    puVar3 = param_4;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = *(long *)(lVar1 + _DAT_11277acc0);
  _objc_retain(puVar3);
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar11;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar11);
  func_0x00010c193aa0(lVar2);
  _objc_release(puVar3);
  lVar11 = (long)_DAT_11277acd4;
  uVar13 = *(ulong *)(lVar1 + lVar11);
  puVar3 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  func_0x00010bfed060();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf33b60();
  iVar9 = (int)puVar4;
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126b0d88;
  _objc_opt_class(PTR_PTR_1126b0d88);
  uVar7 = uVar13;
  _objc_opt_isKindOfClass(uVar13,puVar3);
  uVar8 = uVar13;
  if ((uVar7 & 1) == 0) {
    uVar8 = 0;
  }
  _objc_retain(uVar8);
  _objc_release(uVar13);
  uVar7 = uVar8;
  func_0x00010bf3fb40();
  _objc_release(uVar8);
  if ((int)uVar7 != 0) {
    uVar12 = *(undefined8 *)(lVar1 + lVar11);
    puVar3 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
    func_0x00010bfed060();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c128de0(uVar12);
    iVar9 = (int)puVar5;
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  uVar7 = *(ulong *)(lVar2 + _DAT_11277acc0);
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf529e0();
  _objc_release(uVar7);
  if (1 < uVar8) {
    if (iVar9 != 0) {
      lVar1 = lVar2;
      func_0x00010c29bf00(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c21e900();
      _objc_release(lVar1);
      lVar1 = lVar2;
      func_0x00010c29bf00(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1677c0(0);
      _objc_release(lVar1);
    }
    if (*(long *)(lVar2 + _DAT_11277acd8) == 0) {
      lVar1 = lVar2;
      func_0x00010bdf6f40(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c158b60(*(undefined8 *)(lVar2 + _DAT_11277acd4));
      func_0x00010be9db20(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar1);
      return;
    }
  }
  return;
}



/* Entry: 108ce9224; end: 108ce93df; -[SCBatchCaptureCollectionViewController updateEditedThumbnails:forSegmentAtIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ce9224(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = *(long *)(param_1 + _DAT_11277acc0);
  _objc_retain(param_3);
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar9;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  func_0x00010c193aa0(lVar1);
  _objc_release(param_3);
  lVar9 = (long)_DAT_11277acd4;
  uVar11 = *(ulong *)(param_1 + lVar9);
  puVar2 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  func_0x00010bfed060();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf33b60();
  iVar6 = (int)puVar3;
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b0d88;
  _objc_opt_class(PTR_PTR_1126b0d88);
  uVar4 = uVar11;
  _objc_opt_isKindOfClass(uVar11,puVar2);
  uVar5 = uVar11;
  if ((uVar4 & 1) == 0) {
    uVar5 = 0;
  }
  _objc_retain(uVar5);
  _objc_release(uVar11);
  uVar4 = uVar5;
  func_0x00010bf3fb40();
  _objc_release(uVar5);
  if ((int)uVar4 != 0) {
    uVar10 = *(undefined8 *)(param_1 + lVar9);
    puVar2 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
    func_0x00010bfed060();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar3;
    func_0x00010c128de0(uVar10);
    iVar6 = (int)puVar7;
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  uVar4 = *(ulong *)(lVar1 + _DAT_11277acc0);
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf529e0();
  _objc_release(uVar4);
  if (1 < uVar5) {
    if (iVar6 != 0) {
      lVar9 = lVar1;
      func_0x00010c29bf00(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c21e900();
      _objc_release(lVar9);
      lVar9 = lVar1;
      func_0x00010c29bf00(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1677c0(0);
      _objc_release(lVar9);
    }
    if (*(long *)(lVar1 + _DAT_11277acd8) == 0) {
      lVar9 = lVar1;
      func_0x00010bdf6f40(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c158b60(*(undefined8 *)(lVar1 + _DAT_11277acd4));
      func_0x00010be9db20(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar9);
      return;
    }
  }
  return;
}



/* Entry: 108ce93e0; end: 108ce94e7; -[SCBatchCaptureCollectionViewController startEnterEditingModeWithThumbnailsHidden:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ce93e0(long param_1,undefined8 param_2,int param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_1 + _DAT_11277acc0);
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  _objc_release(uVar1);
  if (1 < uVar2) {
    if (param_3 != 0) {
      lVar3 = param_1;
      func_0x00010c29bf00(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c21e900();
      _objc_release(lVar3);
      lVar3 = param_1;
      func_0x00010c29bf00(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1677c0(0);
      _objc_release(lVar3);
    }
    if (*(long *)(param_1 + _DAT_11277acd8) == 0) {
      lVar3 = param_1;
      func_0x00010bdf6f40(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c158b60(*(undefined8 *)(param_1 + _DAT_11277acd4),param_2,lVar3,0,0);
      func_0x00010be9db20(param_1,param_2,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar3);
      return;
    }
  }
  return;
}



/* Entry: 108ce94e8; end: 108ce9543; -[SCBatchCaptureCollectionViewController revealThumbnails] */

void FUN_108ce94e8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e900();
  _objc_release(uVar1);
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0x3ff0000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108ce9544; end: 108ce95f3; -[SCBatchCaptureCollectionViewController autoEnterEditingModeIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ce9544(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = param_1;
  func_0x00010be34340();
  if ((int)lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
    func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_2,0,0);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1 + _DAT_11277acc8;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf16ca0();
    _objc_release(lVar1);
    param_1 = param_1 + _DAT_11277acdc;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf167c0();
    _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 108ce95f4; end: 108ce9603; -[SCBatchCaptureCollectionViewController segmentDidUpdateAtIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ce95f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c128b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277acd4),PTR_s_reloadData_112627cf8);
  return;
}



/* Entry: 108ce9604; end: 108ce961b; -[SCBatchCaptureCollectionViewController removeTooltipIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ce9604(long param_1)

{
  if (*(long *)(param_1 + _DAT_11277ace0) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c12c970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + _DAT_11277ace0),PTR_s_removeFromSuperview_112628c78);
    return;
  }
  return;
}



/* Entry: 108ce961c; end: 108ce995b; -[SCBatchCaptureCollectionViewController showTooltipOnThumbnail:text:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_108ce961c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 auStack_138 [24];
  undefined8 uStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  
  puVar9 = PTR_PTR_1126b6950;
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_a8 = param_4;
  _objc_retain(param_4);
  _objc_alloc();
  uVar15 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar16 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar17 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,uVar15,uVar16,uVar17);
  lVar13 = (long)_DAT_11277ace0;
  uVar8 = *(undefined8 *)(param_1 + lVar13);
  *(undefined **)(param_1 + lVar13) = puVar9;
  _objc_release(uVar8);
  uVar14 = 0x4030000000000000;
  func_0x00010c21a1e0(0x4030000000000000,*(undefined8 *)(param_1 + lVar13));
  lVar10 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar10);
  puVar9 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  func_0x00010bfed020();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = (long)_DAT_11277acd4;
  uVar8 = *(undefined8 *)(param_1 + lVar10);
  puStack_b0 = puVar9;
  func_0x00010c08c980();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar10);
  uStack_b8 = uVar8;
  func_0x00010bfb68e0();
  uVar8 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010c262ca0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf51460(uVar14,uVar15,uVar16,uVar17,uVar11);
  _objc_release(uVar8);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar13));
  puStack_d0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar15 = *(undefined8 *)(param_1 + lVar13);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar10);
  uStack_c0 = uVar15;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uStack_c8 = uVar8;
  func_0x00010bf493c0(uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + lVar13);
  uStack_a0 = uVar15;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010c274200(uVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar14;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(param_1 + lVar13);
  uStack_98 = uVar11;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar17;
  func_0x00010bf493c0(0xc030000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_90 = uVar8;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_d0);
  _objc_release(puVar9);
  _objc_release(uVar8);
  _objc_release(uVar2);
  _objc_release(uVar17);
  _objc_release(uVar11);
  _objc_release(uVar16);
  _objc_release(uVar14);
  _objc_release(uVar15);
  _objc_release(uStack_c8);
  _objc_release(uStack_c0);
  func_0x00010c2135c0(*(undefined8 *)(param_1 + lVar13));
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar13));
  uVar8 = uStack_a8;
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar13));
  _objc_release(uVar8);
  _objc_release(uStack_b8);
  puVar3 = puStack_b0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return puVar3;
  }
  ___stack_chk_fail();
  uStack_e8 = uVar8;
  pcStack_d8 = FUN_108ce995c;
  lVar12 = (long)_DAT_11277acc0;
  lVar4 = *(long *)(puVar3 + lVar12);
  uStack_120 = uVar14;
  lStack_118 = lVar13;
  uStack_110 = uVar15;
  puStack_108 = puVar9;
  uStack_100 = uVar2;
  uStack_f8 = uVar11;
  lStack_f0 = param_1;
  puStack_e0 = &stack0xfffffffffffffff0;
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar4;
  func_0x00010bf529e0();
  _objc_release(lVar4);
  if (lVar10 != 0) {
    puVar9 = (undefined *)0x0;
    do {
      lVar13 = *(long *)(puVar3 + lVar12);
      func_0x00010c1585e0();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar13;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      if (lVar10 == 0) {
        uStack_158 = 0;
        uStack_160 = 0;
        uStack_148 = 0;
        uStack_150 = 0;
        uStack_168 = 0;
        uStack_170 = 0;
      }
      else {
        func_0x00010bf4d840(&uStack_170,lVar10);
      }
      _CMTimeRangeGetEnd(auStack_138,&uStack_170);
      puVar1 = (undefined8 *)(puVar3 + _DAT_11277acc4);
      uStack_168 = puVar1[1];
      uStack_170 = *puVar1;
      uStack_160 = puVar1[2];
      puVar5 = auStack_138;
      _CMTimeCompare(puVar5,&uStack_170);
      _objc_release(lVar10);
      _objc_release(lVar13);
      if (-1 < (int)puVar5) {
        return puVar9;
      }
      puVar9 = puVar9 + 1;
      puVar6 = *(undefined **)(puVar3 + lVar12);
      func_0x00010c1585e0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010bf529e0();
      _objc_release(puVar6);
    } while (puVar9 < puVar7);
  }
  lVar13 = *(long *)(puVar3 + lVar12);
  func_0x00010c1585e0(lVar13);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar13;
  func_0x00010bf529e0();
  _objc_release(lVar13);
  return (undefined *)(lVar10 + -1);
}



/* Entry: 108ce995c; end: 108ce9ab7; -[SCBatchCaptureCollectionViewController _currentPlayingSection] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_108ce995c(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_68 [24];
  
  lVar8 = (long)_DAT_11277acc0;
  lVar2 = *(long *)(param_1 + lVar8);
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    uVar7 = 0;
    do {
      lVar2 = *(long *)(param_1 + lVar8);
      func_0x00010c1585e0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 == 0) {
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
      }
      else {
        func_0x00010bf4d840(&uStack_a0,lVar3);
      }
      _CMTimeRangeGetEnd(auStack_68,&uStack_a0);
      puVar1 = (undefined8 *)(param_1 + _DAT_11277acc4);
      uStack_98 = puVar1[1];
      uStack_a0 = *puVar1;
      uStack_90 = puVar1[2];
      puVar4 = auStack_68;
      _CMTimeCompare(puVar4,&uStack_a0);
      _objc_release(lVar3);
      _objc_release(lVar2);
      if (-1 < (int)puVar4) {
        return uVar7;
      }
      uVar7 = uVar7 + 1;
      uVar5 = *(ulong *)(param_1 + lVar8);
      func_0x00010c1585e0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bf529e0();
      _objc_release(uVar5);
    } while (uVar7 < uVar6);
  }
  lVar2 = *(long *)(param_1 + lVar8);
  func_0x00010c1585e0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  _objc_release(lVar2);
  return lVar3 - 1;
}



/* Entry: 108ce9ab8; end: 108ce9ae7; -[SCBatchCaptureCollectionViewController _currentPlayingIndexPath] */

void FUN_108ce9ab8(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  func_0x00010bdf6f60();
                    /* WARNING: Could not recover jumptable at 0x00010bfed070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (puVar1,PTR_s_indexPathForRow_inSection__1125d8de0,0,param_1);
  return;
}



/* Entry: 108ce9ae8; end: 108ce9baf; -[SCBatchCaptureCollectionViewController _cellsCollapsed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_108ce9ae8(double param_1,double param_2,double param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  double dVar4;
  
  uVar1 = *(ulong *)(param_4 + _DAT_11277acc0);
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  if (uVar2 < 2) {
    lVar3 = *(long *)(param_4 + _DAT_11277acd8);
    _objc_release(uVar1);
    if (lVar3 == 0) {
      return false;
    }
  }
  else {
    _objc_release(uVar1);
  }
  func_0x00010c1069a0(param_4);
  lVar3 = (long)_DAT_11277acd4;
  dVar4 = param_1;
  func_0x00010bf4c7c0(*(undefined8 *)(param_4 + lVar3));
  func_0x00010bfb68e0(*(undefined8 *)(param_4 + lVar3));
  func_0x00010bf4cdc0(*(undefined8 *)(param_4 + lVar3));
  return (param_1 + param_2) - (param_3 + dVar4) < 35.0;
}



/* Entry: 108ce9bb0; end: 108ce9c07; -[SCBatchCaptureCollectionViewController _autoScrollAnimated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ce9bb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bdf6f40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1525a0(*(undefined8 *)(param_1 + _DAT_11277acd4),param_2,lVar1,0x10,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108ce9c08; end: 108ce9c77; -[SCBatchCaptureCollectionViewController _shouldAutoScrollOnSelection] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_108ce9c08(double param_1,double param_2,double param_3,long param_4)

{
  long lVar1;
  double dVar2;
  
  lVar1 = (long)_DAT_11277acd4;
  func_0x00010bf4d5e0(*(undefined8 *)(param_4 + lVar1));
  dVar2 = param_1;
  func_0x00010bf4c7c0(*(undefined8 *)(param_4 + lVar1));
  func_0x00010bfb68e0(*(undefined8 *)(param_4 + lVar1));
  func_0x00010bf4cdc0(*(undefined8 *)(param_4 + lVar1));
  return (param_1 + param_2) - (param_3 + dVar2) < 17.5;
}



/* Entry: 108ce9c78; end: 108ce9dbf; -[SCBatchCaptureCollectionViewController _autoScrollIfNeededAnimated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ce9c78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  
  lVar1 = *(long *)(param_5 + _DAT_11277acc0);
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar2 = param_5;
    func_0x00010bdf6f40(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = (long)_DAT_11277acd4;
    uVar3 = *(undefined8 *)(param_5 + lVar5);
    func_0x00010bf33b60(uVar3,param_6,lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _objc_release(uVar3);
    lVar1 = param_5;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf513e0(param_1,param_2,param_3,param_4);
    _objc_release(lVar1);
    uVar4 = *(ulong *)(param_5 + lVar5);
    func_0x00010bfb68e0();
    _CGRectContainsRect();
    if ((uVar4 & 1) == 0) {
      func_0x00010c1525a0(*(undefined8 *)(param_5 + lVar5),param_6,lVar2,0x10,1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 108ce9dc0; end: 108ce9e2f; -[SCBatchCaptureCollectionViewController _isVideoSegmentAtSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108ce9dc0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277acc0);
  func_0x00010c1585e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c083320();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 108ce9e30; end: 108ce9e87; -[SCBatchCaptureCollectionViewController _cellIsOffscreenToRightAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_108ce9e30(double param_1,undefined8 param_2,double param_3,long param_4)

{
  long lVar1;
  double dVar2;
  
  func_0x00010be19060();
  _CGRectGetMaxX();
  lVar1 = (long)_DAT_11277acd4;
  dVar2 = param_1;
  func_0x00010bf4cdc0(*(undefined8 *)(param_4 + lVar1));
  func_0x00010bfb68e0(*(undefined8 *)(param_4 + lVar1));
  return dVar2 + param_3 < param_1;
}



/* Entry: 108ce9e88; end: 108ce9f5f; -[SCBatchCaptureCollectionViewController _deselectSelectedSegment] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ce9e88(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11277acd8;
  lVar2 = *(long *)(param_1 + lVar4);
  if (lVar2 != 0) {
    lVar3 = (long)_DAT_11277ace4;
    _objc_retain(lVar2);
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    *(long *)(param_1 + lVar3) = lVar2;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    *(undefined8 *)(param_1 + lVar4) = 0;
    _objc_release(uVar1);
    lVar2 = param_1 + _DAT_11277acc8;
    _objc_loadWeakRetained(lVar2);
    func_0x00010bf16ca0();
    _objc_release(lVar2);
    if ((*(byte *)(param_1 + _DAT_11277ace8) & 1) == 0) {
      func_0x00010bed5640(param_1);
    }
    param_1 = param_1 + _DAT_11277acdc;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf167c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 108ce9f60; end: 108cea0eb; -[SCBatchCaptureCollectionViewController _selectSegmentAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ce9f60(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_11277acd8;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  lVar5 = (long)_DAT_11277ace4;
  _objc_retain(uVar3);
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  *(undefined8 *)(param_1 + lVar5) = uVar3;
  _objc_release(uVar1);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  *(undefined8 *)(param_1 + lVar4) = param_3;
  _objc_release(uVar1);
  lVar4 = param_1 + _DAT_11277acc8;
  _objc_loadWeakRetained(lVar4);
  func_0x00010bf16ca0();
  _objc_release(lVar4);
  func_0x00010c1554e0(param_3);
  lVar4 = param_1;
  func_0x00010be457e0();
  if ((int)lVar4 != 0) {
    lVar4 = *(long *)(param_1 + _DAT_11277acc0);
    func_0x00010c1585e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1554e0(param_3);
    lVar5 = lVar4;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    lVar2 = lVar5;
    func_0x000107c318f8(lVar5,PTR_DAT_1126a5b20);
    lVar4 = lVar5;
    if ((int)lVar2 == 0) {
      lVar4 = 0;
    }
    _objc_retain(lVar4);
    _objc_release(lVar5);
    lVar5 = lVar4;
    func_0x00010c26db80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar5);
    if (lVar5 == 0) {
      func_0x00010c1554e0(param_3);
      func_0x00010bfa4dc0(param_1);
    }
  }
  func_0x00010bed5640(param_1);
  param_1 = param_1 + _DAT_11277acdc;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf167c0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108cea0ec; end: 108cea317; -[SCBatchCaptureCollectionViewController _setCollectionViewCellSelected:atIndexPath:] */

/* WARNING: Possible PIC construction at 0x000108cea274: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108cea278) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cea0ec(undefined *param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  func_0x00010c1554e0(param_4);
  puVar2 = param_1;
  func_0x00010bdd2d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(ulong *)(param_1 + _DAT_11277acd4);
  func_0x00010bf33b60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar4 = PTR_PTR_1126b0d88;
  _objc_opt_class(PTR_PTR_1126b0d88);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar1 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  puVar7 = puVar2;
  if ((param_3 == 0) || (puVar6 = puVar2, func_0x00010c083320(), (int)puVar6 == 0)) {
    func_0x00010c17e480(uVar1);
    func_0x00010be34360();
    puVar6 = PTR_PTR_1126ae558;
    if ((int)param_1 == 0) {
      func_0x00010bf8c620(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      goto code_r0x00010bfe9ca0;
    }
    func_0x00010bf8c620(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar7;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c214080(uVar1);
    _objc_release(puVar6);
  }
  else {
    func_0x00010c17e480(uVar1);
    func_0x00010c26db80(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c214080(uVar1);
  }
  _objc_release(puVar7);
  _objc_release(uVar1);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  puVar6 = PTR_PTR_1126ae558;
  puVar2 = puVar4;
code_r0x00010bfe9ca0:
                    /* WARNING: Could not recover jumptable at 0x00010bfe9cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar6,PTR_s_immediateFutureWithValue__1125d80f0,puVar2);
  return;
}



/* Entry: 108cea318; end: 108cea327;  */

void FUN_108cea318(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe9cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126ae558,PTR_s_immediateFutureWithValue__1125d80f0,param_2);
  return;
}



/* Entry: 108cea328; end: 108cea3c7; -[SCBatchCaptureCollectionViewController _batchCaptureSegmentAtIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cea328(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11277acc0;
  uVar1 = *(ulong *)(param_1 + lVar5);
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  _objc_release(uVar1);
  if (param_3 < uVar2) {
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c1585e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
  }
  else {
    uVar4 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 108cea3c8; end: 108cea43f; -[SCBatchCaptureCollectionViewController _updateCollectionViewCellsLayout] */

void FUN_108cea3c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_108cea440;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x00010bf03460(0x3fe0000000000000,0,0x3fe6666666666666,0,PTR__OBJC_CLASS___UIView_1126aec20,
                      param_2,0,&puStack_38,0);
  return;
}



/* Entry: 108cea440; end: 108cea4e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cea440(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x20);
  lVar2 = (long)_DAT_11277acd8;
  if (*(long *)(lVar1 + lVar2) != 0) {
    func_0x00010bea2b60(lVar1,param_2,1);
    lVar1 = *(long *)(param_1 + 0x20);
  }
  if (*(long *)(lVar1 + _DAT_11277ace4) != 0) {
    func_0x00010bea2b60();
    lVar1 = *(long *)(param_1 + 0x20);
  }
  lVar3 = (long)_DAT_11277acd4;
  func_0x00010c0f8420(*(undefined8 *)(lVar1 + lVar3));
  lVar1 = *(long *)(param_1 + 0x20);
  lVar2 = *(long *)(lVar1 + lVar2);
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1525b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(lVar1 + lVar3),PTR_s_scrollToItemAtIndexPath_atScroll_112632388,lVar2
               ,0x10,1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdd1890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s__autoScrollAnimated__112551fc0,1);
  return;
}



/* Entry: 108cea4e8; end: 108cea4eb;  */

void FUN_108cea4e8(void)

{
  return;
}



/* Entry: 108cea4ec; end: 108cea563; -[SCBatchCaptureCollectionViewController _hasOnlyOneSegment] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_108cea4ec(long param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + _DAT_11277acc0);
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  if (lVar3 == 1) {
    func_0x00010bf404e0(param_1,param_2,*(undefined8 *)(param_1 + _DAT_11277acd4),0);
    bVar1 = param_1 == 1;
  }
  else {
    bVar1 = false;
  }
  _objc_release(lVar2);
  return bVar1;
}



/* Entry: 108cea564; end: 108cea607; -[SCBatchCaptureCollectionViewController _hasOnlyOneVideoSegment] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108cea564(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11277acc0;
  lVar1 = *(long *)(param_1 + lVar5);
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  if (lVar2 == 1) {
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c1585e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    uVar3 = uVar4;
    func_0x00010c083320(uVar4);
    _objc_release(uVar4);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



/* Entry: 108cea608; end: 108cea703; -[SCBatchCaptureCollectionViewController _onDeleteSegmentAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cea608(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  param_1 = param_1 + _DAT_11277acdc;
  _objc_loadWeakRetained(param_1);
  uStack_40 = 0;
  _objc_copyWeak(auStack_48,auStack_38);
  _objc_retain(param_3);
  func_0x00010bf16780(param_1);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 108cea704; end: 108cea84b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cea704(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar5 = (long)_DAT_11277ace8;
    *(undefined1 *)(lVar1 + lVar5) = 1;
    func_0x00010bdfb120(lVar1);
    uVar2 = *(undefined8 *)(lVar1 + _DAT_11277ace4);
    *(undefined8 *)(lVar1 + _DAT_11277ace4) = 0;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_11277acc0;
    func_0x00010bf6c8a0(*(undefined8 *)(lVar1 + lVar6),param_2,*(undefined8 *)(param_1 + 0x20));
    lVar3 = lVar1 + _DAT_11277acc8;
    _objc_loadWeakRetained(lVar3);
    func_0x00010bf16900();
    _objc_release(lVar3);
    *(undefined1 *)(lVar1 + lVar5) = 0;
    lVar5 = *(long *)(lVar1 + lVar6);
    func_0x00010c1585e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar5;
    func_0x00010bf529e0();
    _objc_release(lVar5);
    if (lVar3 != 0) {
      puVar4 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
      func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_2,0,0);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = (long)_DAT_11277acd4;
      func_0x00010c128b60(*(undefined8 *)(lVar1 + lVar5));
      lVar3 = lVar1;
      func_0x00010be34340();
      if ((int)lVar3 != 0) {
        lVar3 = lVar1 + _DAT_11277acdc;
        _objc_loadWeakRetained(lVar3);
        func_0x00010bf167c0();
        _objc_release(lVar3);
      }
      func_0x00010c1525a0(*(undefined8 *)(lVar1 + lVar5),param_2,puVar4,8,1);
      _objc_release(puVar4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108cea84c; end: 108cea893; -[SCBatchCaptureCollectionViewController numberOfSectionsInCollectionView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108cea84c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277acc0);
  func_0x00010c1585e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 108cea894; end: 108cea89b; -[SCBatchCaptureCollectionViewController collectionView:numberOfItemsInSection:] */

undefined8 FUN_108cea894(void)

{
  return 1;
}



/* Entry: 108cea89c; end: 108ceaba7; -[SCBatchCaptureCollectionViewController collectionView:cellForItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cea89c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
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
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  lVar5 = *(long *)(param_1 + _DAT_11277acc0);
  _objc_retain(param_3);
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1554e0(param_4);
  lVar1 = lVar5;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  puVar2 = PTR_PTR_1126b0d88;
  _objc_opt_class(PTR_PTR_1126b0d88);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf6e0c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar2);
  if (lVar1 == 0) {
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    func_0x00010c182980(uVar3);
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
  }
  else {
    func_0x00010bf4d840(&uStack_80,lVar1);
    uStack_a8 = uStack_78;
    uStack_b0 = uStack_80;
    uStack_98 = uStack_68;
    uStack_a0 = uStack_70;
    uStack_88 = uStack_58;
    uStack_90 = uStack_60;
    func_0x00010c182980(uVar3);
    func_0x00010c27c900(&uStack_e0,lVar1);
  }
  uStack_a8 = uStack_d8;
  uStack_b0 = uStack_e0;
  uStack_98 = uStack_c8;
  uStack_a0 = uStack_d0;
  uStack_88 = uStack_b8;
  uStack_90 = uStack_c0;
  func_0x00010c21a5e0(uVar3);
  func_0x00010c280560(lVar1);
  func_0x00010c211780(uVar3);
  func_0x00010c18b5e0(uVar3);
  lVar5 = *(long *)(param_1 + _DAT_11277acd8);
  if (((lVar5 == 0) || (func_0x00010c071ae0(), (int)lVar5 == 0)) ||
     (lVar5 = lVar1, func_0x00010c083320(), (int)lVar5 == 0)) {
    func_0x00010be34360();
    if ((int)param_1 != 0) {
      func_0x00010c17e480(uVar3);
      lVar5 = lVar1;
      func_0x00010bf8c620(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar5;
      func_0x00010c0b8600();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c214080(uVar3);
      _objc_release(lVar4);
      _objc_release(lVar5);
      goto LAB_108ceab60;
    }
    lVar5 = lVar1;
    func_0x00010c26db40();
    _objc_retainAutoreleasedReturnValue();
    if (lVar5 == 0) {
      func_0x00010c214080(uVar3);
    }
    else {
      lVar4 = lVar1;
      func_0x00010c26db40();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
      lStack_50 = lVar4;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c214080(uVar3);
      _objc_release(puVar2);
      _objc_release(lVar4);
    }
    _objc_release(lVar5);
  }
  else {
    lVar5 = lVar1;
    func_0x00010c26db80(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c214080(uVar3);
    _objc_release(lVar5);
  }
  func_0x00010c17e480(uVar3);
LAB_108ceab60:
  _objc_release(lVar1);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bfe9cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126ae558,PTR_s_immediateFutureWithValue__1125d80f0,param_2);
  return;
}



/* Entry: 108ceaba8; end: 108ceabb7;  */

void FUN_108ceaba8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe9cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126ae558,PTR_s_immediateFutureWithValue__1125d80f0,param_2);
  return;
}



/* Entry: 108ceabb8; end: 108ceac5f; -[SCBatchCaptureCollectionViewController collectionView:willDisplayCell:forItemAtIndexPath:] */

void FUN_108ceabb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c1554e0();
  func_0x00010c0840e0();
  _objc_release(param_5);
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110ef2218);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0(param_4,param_2,puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108ceac60; end: 108ceac7f; -[SCBatchCaptureCollectionViewController collectionView:didSelectItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ceac60(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 != *(long *)(param_1 + _DAT_11277acd8)) {
                    /* WARNING: Could not recover jumptable at 0x00010be9db30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__selectSegmentAtIndexPath__112585070,param_4);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdfb130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__deselectSelectedSegment_11255c5e8);
  return;
}



/* Entry: 108ceac80; end: 108ceac83; -[SCBatchCaptureCollectionViewController collectionView:didDeselectItemAtIndexPath:] */

void FUN_108ceac80(void)

{
  return;
}



/* Entry: 108ceac84; end: 108ceacbb; -[SCBatchCaptureCollectionViewController collectionView:shouldSelectItemAtIndexPath:] */

uint FUN_108ceac84(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010beb2940();
  if ((uint)uVar1 != 0) {
    func_0x00010bdd18c0(param_1,param_2,1);
  }
  return (uint)uVar1 ^ 1;
}



/* Entry: 108ceacbc; end: 108ceacc3; -[SCBatchCaptureCollectionViewController collectionView:shouldDeselectItemAtIndexPath:] */

undefined8 FUN_108ceacbc(void)

{
  return 1;
}



/* Entry: 108ceacc4; end: 108ceaf93; -[SCBatchCaptureCollectionViewController videoPlaybackSession:didRenderFrameAtTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_108ceacc4(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 *param_6,undefined8 param_7)

{
  double *pdVar1;
  long lVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  double *pdVar12;
  double *pdVar13;
  double *pdVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  double dVar20;
  undefined8 uVar21;
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  double dStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  double dStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar5;
  func_0x00010c074c20();
  _objc_release();
  if (((ulong)puVar4 & 1) == 0) {
    puVar5 = *(undefined8 **)((long)param_3 + (long)_DAT_11277acc0);
    func_0x00010c1585e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar5;
    func_0x00010bf529e0();
    _objc_release();
    if (puVar4 != (undefined8 *)0x0) {
      puVar4 = (undefined8 *)((long)param_3 + (long)_DAT_11277acc4);
      uStack_108 = puVar4[1];
      uStack_110 = *puVar4;
      uStack_100 = puVar4[2];
      uStack_128 = param_6[1];
      param_1 = *param_6;
      uStack_120 = param_6[2];
      puVar5 = &uStack_110;
      uStack_130 = param_1;
      _CMTimeCompare(puVar5,&uStack_130);
      if ((int)puVar5 != 0) {
        uVar21 = param_6[1];
        uVar17 = *param_6;
        puVar4[2] = param_6[2];
        puVar4[1] = uVar21;
        *puVar4 = uVar17;
        lVar16 = (long)_DAT_11277acd8;
        puVar5 = *(undefined8 **)((long)param_3 + lVar16);
        if (puVar5 == (undefined8 *)0x0) {
          puVar5 = param_3;
          func_0x00010bdf6f40();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          _objc_retain(puVar5);
        }
        param_1 = 0;
        lVar19 = (long)_DAT_11277acd4;
        lVar6 = *(long *)((long)param_3 + lVar19);
        func_0x00010bfed1a0();
        _objc_retainAutoreleasedReturnValue();
        param_7 = 0x10;
        lVar15 = lVar6;
        func_0x00010bf52a60();
        lVar2 = lRam0000000000000000;
        while (lVar15 != 0) {
          lVar18 = 0;
          do {
            if (lRam0000000000000000 != lVar2) {
              _objc_enumerationMutation(lVar6);
            }
            uVar7 = *(ulong *)((long)param_3 + lVar19);
            func_0x00010bf33b60();
            _objc_retainAutoreleasedReturnValue();
            puVar8 = PTR_PTR_1126b0d88;
            _objc_opt_class(PTR_PTR_1126b0d88);
            uVar9 = uVar7;
            _objc_opt_isKindOfClass(uVar7,puVar8);
            uVar10 = uVar7;
            if ((uVar9 & 1) == 0) {
              uVar10 = 0;
            }
            _objc_retain(uVar10);
            _objc_release(uVar7);
            puVar4 = puVar5;
            func_0x00010c071ae0();
            if ((int)puVar4 == 0) {
              func_0x00010bfe25e0(uVar10);
            }
            else {
              uStack_108 = param_6[1];
              param_1 = *param_6;
              uStack_100 = param_6[2];
              uStack_110 = param_1;
              func_0x00010c288960(uVar10);
            }
            _objc_release(uVar10);
            lVar18 = lVar18 + 1;
          } while (lVar15 != lVar18);
          param_7 = 0x10;
          lVar15 = lVar6;
          func_0x00010bf52a60();
        }
        _objc_release(lVar6);
        if (*(long *)((long)param_3 + lVar16) == 0) {
          uVar10 = *(ulong *)((long)param_3 + lVar19);
          func_0x00010c070ea0();
          if ((uVar10 & 1) == 0) {
            puVar4 = param_3;
            func_0x00010bdf6f40();
            _objc_retainAutoreleasedReturnValue();
            puVar11 = param_3;
            func_0x00010bddc300();
            _objc_release(puVar4);
            if ((int)puVar11 != 0) {
              func_0x00010bdd1880(param_3);
            }
          }
        }
        _objc_release();
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    auVar23._8_8_ = param_2;
    auVar23._0_8_ = param_1;
    return auVar23;
  }
  ___stack_chk_fail();
  _objc_retain(param_7);
  lVar16 = (long)_DAT_11277acd8;
  uVar17 = param_7;
  func_0x00010c071ae0();
  if ((int)uVar17 == 0) {
    puVar4 = puVar5;
    func_0x00010be34340();
    if ((int)puVar4 == 0) {
      bVar3 = *(long *)((long)puVar5 + lVar16) != 0;
      uVar17 = 0x404f000000000000;
      if (bVar3) {
        uVar17 = 0x4049000000000000;
      }
      dVar22 = 35.0;
      if (bVar3) {
        dVar22 = 29.0;
      }
      pdVar12 = (double *)0x1;
    }
    else {
      func_0x00010c1554e0(param_7);
      puVar4 = puVar5;
      func_0x00010be457e0();
      dVar22 = 29.0;
      if ((int)puVar4 == 0) {
        pdVar12 = (double *)0x1;
      }
      else {
        lVar15 = *(long *)((long)puVar5 + (long)_DAT_11277acc0);
        func_0x00010c1585e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1554e0(param_7);
        lVar16 = lVar15;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar15);
        if (lVar16 == 0) {
          dStack_208 = 0.0;
          uStack_210 = 0;
          uStack_1f8 = 0;
          uStack_200 = 0;
          uStack_218 = 0;
          uStack_220 = 0;
        }
        else {
          func_0x00010c09e0e0(&uStack_220,lVar16);
        }
        uStack_1e8 = uStack_200;
        dStack_1f0 = dStack_208;
        uStack_1e0 = uStack_1f8;
        pdVar12 = &dStack_1f0;
        FUN_108cde484(pdVar12);
        _objc_release(lVar16);
      }
      uVar17 = 0x4049000000000000;
    }
  }
  else {
    func_0x00010c1554e0(param_7);
    puVar4 = puVar5;
    func_0x00010be457e0();
    dVar22 = 35.0;
    if ((int)puVar4 == 0) {
      pdVar12 = (double *)0x1;
    }
    else {
      pdVar12 = *(double **)((long)puVar5 + (long)_DAT_11277acc0);
      func_0x00010c1585e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1554e0(param_7);
      pdVar13 = pdVar12;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(pdVar12);
      pdVar14 = pdVar13;
      func_0x00010c26db80();
      _objc_retainAutoreleasedReturnValue();
      pdVar12 = pdVar14;
      func_0x00010bf529e0();
      if (pdVar12 == (double *)0x0) {
        if (pdVar13 == (double *)0x0) {
          dStack_208 = 0.0;
          uStack_210 = 0;
          uStack_1f8 = 0;
          uStack_200 = 0;
          uStack_218 = 0;
          uStack_220 = 0;
        }
        else {
          func_0x00010bf4d840(&uStack_220,pdVar13);
        }
        uStack_1e8 = uStack_200;
        dStack_1f0 = dStack_208;
        uStack_1e0 = uStack_1f8;
        dVar20 = dStack_208;
        _CMTimeGetSeconds(&dStack_1f0);
        pdVar12 = (double *)0x3;
        if (3.0 <= dVar20) {
          pdVar12 = (double *)0x4;
        }
        pdVar1 = (double *)0x5;
        if (dVar20 < 4.0) {
          pdVar1 = pdVar12;
        }
        pdVar12 = (double *)0x6;
        if (dVar20 < 5.0) {
          pdVar12 = pdVar1;
        }
      }
      _objc_release(pdVar14);
      _objc_release(pdVar13);
    }
    uVar17 = 0x404f000000000000;
  }
  dVar22 = (double)(long)pdVar12 * dVar22 + 0.0;
  puVar8 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2971c0(dVar22,uVar17,PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)((long)puVar5 + (long)_DAT_11277accc));
  _objc_release(puVar8);
  func_0x00010c12d3e0(*(undefined8 *)((long)puVar5 + (long)_DAT_11277acd0));
  _objc_release(param_7);
  auVar24._8_8_ = uVar17;
  auVar24._0_8_ = dVar22;
  return auVar24;
}



/* Entry: 108ceaf94; end: 108ceb267; -[SCBatchCaptureCollectionViewController collectionView:layout:sizeForItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_108ceaf94(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  double *pdVar1;
  bool bVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  double dStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  double dStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  _objc_retain(param_5);
  lVar9 = (long)_DAT_11277acd8;
  uVar8 = param_5;
  func_0x00010c071ae0(param_5,param_2,*(undefined8 *)(param_1 + lVar9));
  if ((int)uVar8 == 0) {
    lVar6 = param_1;
    func_0x00010be34340();
    if ((int)lVar6 == 0) {
      bVar2 = *(long *)(param_1 + lVar9) != 0;
      uVar8 = 0x404f000000000000;
      if (bVar2) {
        uVar8 = 0x4049000000000000;
      }
      dVar11 = 35.0;
      if (bVar2) {
        dVar11 = 29.0;
      }
      pdVar3 = (double *)0x1;
    }
    else {
      uVar8 = param_5;
      func_0x00010c1554e0(param_5);
      lVar9 = param_1;
      func_0x00010be457e0(param_1,param_2,uVar8);
      dVar11 = 29.0;
      if ((int)lVar9 == 0) {
        pdVar3 = (double *)0x1;
      }
      else {
        lVar6 = *(long *)(param_1 + _DAT_11277acc0);
        func_0x00010c1585e0();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = param_5;
        func_0x00010c1554e0(param_5);
        lVar9 = lVar6;
        func_0x00010c0dfd40(lVar6,param_2,uVar8);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar6);
        if (lVar9 == 0) {
          dStack_88 = 0.0;
          uStack_90 = 0;
          uStack_78 = 0;
          uStack_80 = 0;
          uStack_98 = 0;
          uStack_a0 = 0;
        }
        else {
          func_0x00010c09e0e0(&uStack_a0,lVar9);
        }
        uStack_68 = uStack_80;
        dStack_70 = dStack_88;
        uStack_60 = uStack_78;
        pdVar3 = &dStack_70;
        FUN_108cde484(pdVar3);
        _objc_release(lVar9);
      }
      uVar8 = 0x4049000000000000;
    }
  }
  else {
    uVar8 = param_5;
    func_0x00010c1554e0(param_5);
    lVar9 = param_1;
    func_0x00010be457e0(param_1,param_2,uVar8);
    dVar11 = 35.0;
    if ((int)lVar9 == 0) {
      pdVar3 = (double *)0x1;
    }
    else {
      pdVar3 = *(double **)(param_1 + _DAT_11277acc0);
      func_0x00010c1585e0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = param_5;
      func_0x00010c1554e0(param_5);
      pdVar4 = pdVar3;
      func_0x00010c0dfd40(pdVar3,param_2,uVar8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(pdVar3);
      pdVar5 = pdVar4;
      func_0x00010c26db80();
      _objc_retainAutoreleasedReturnValue();
      pdVar3 = pdVar5;
      func_0x00010bf529e0();
      if (pdVar3 == (double *)0x0) {
        if (pdVar4 == (double *)0x0) {
          dStack_88 = 0.0;
          uStack_90 = 0;
          uStack_78 = 0;
          uStack_80 = 0;
          uStack_98 = 0;
          uStack_a0 = 0;
        }
        else {
          func_0x00010bf4d840(&uStack_a0,pdVar4);
        }
        uStack_68 = uStack_80;
        dStack_70 = dStack_88;
        uStack_60 = uStack_78;
        dVar10 = dStack_88;
        _CMTimeGetSeconds(&dStack_70);
        pdVar3 = (double *)0x3;
        if (3.0 <= dVar10) {
          pdVar3 = (double *)0x4;
        }
        pdVar1 = (double *)0x5;
        if (dVar10 < 4.0) {
          pdVar1 = pdVar3;
        }
        pdVar3 = (double *)0x6;
        if (dVar10 < 5.0) {
          pdVar3 = pdVar1;
        }
      }
      _objc_release(pdVar5);
      _objc_release(pdVar4);
    }
    uVar8 = 0x404f000000000000;
  }
  dVar11 = (double)(long)pdVar3 * dVar11 + 0.0;
  puVar7 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2971c0(dVar11,uVar8,PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_1 + _DAT_11277accc),param_2,puVar7,param_5);
  _objc_release(puVar7);
  func_0x00010c12d3e0(*(undefined8 *)(param_1 + _DAT_11277acd0),param_2,param_5);
  _objc_release(param_5);
  auVar12._8_8_ = uVar8;
  auVar12._0_8_ = dVar11;
  return auVar12;
}



/* Entry: 108ceb268; end: 108ceb31b; -[SCBatchCaptureCollectionViewController collectionView:layout:insetForSectionAtIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_108ceb268(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + _DAT_11277acd8);
  if ((lVar1 != 0) && (func_0x00010c1554e0(), lVar1 == param_5)) {
    func_0x00010c1554e0();
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return 0;
}



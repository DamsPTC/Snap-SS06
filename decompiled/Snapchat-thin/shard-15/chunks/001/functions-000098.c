/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b865c2c; end: 10b865c7b; -[SIGPullToRefreshGhostView willMoveToWindow:] */

void FUN_10b865c2c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_11270b5f8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_willMoveToWindow__112687408);
  if (param_3 == 0) {
    func_0x00010bec3920(param_1);
  }
  return;
}



/* Entry: 10b865c7c; end: 10b865cfb; -[SIGPullToRefreshGhostView _stopShakeIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b865c7c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112794f8c;
  if (*(char *)(param_1 + lVar3) == '\x01') {
    lVar1 = param_1;
    func_0x00010c08c0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12b200();
    _objc_release(lVar1);
    *(undefined1 *)(param_1 + lVar3) = 0;
  }
  lVar3 = (long)_DAT_112794f90;
  func_0x00010c2559c0(*(undefined8 *)(param_1 + lVar3),param_2,1);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10b865cfc; end: 10b865d0b; -[SIGPullToRefreshGhostView offset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b865cfc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112794f80);
}



/* Entry: 10b865d0c; end: 10b865d1b; -[SIGPullToRefreshGhostView rainbow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b865d0c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112794f7c);
}



/* Entry: 10b865d1c; end: 10b865d2b; -[SIGPullToRefreshGhostView winkThreshold] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b865d1c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112794f78);
}



/* Entry: 10b865d2c; end: 10b865d3b; -[SIGPullToRefreshGhostView setWinkThreshold:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b865d2c(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_112794f78) = param_1;
  return;
}



/* Entry: 10b865d3c; end: 10b865d4b; -[SIGPullToRefreshGhostView reliableShakeAnimation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b865d3c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112794f88);
}



/* Entry: 10b865d4c; end: 10b865d5b; -[SIGPullToRefreshGhostView setReliableShakeAnimation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b865d4c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112794f88) = param_3;
  return;
}



/* Entry: 10b865d5c; end: 10b865deb; -[SIGPullToRefreshGhostView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b865d5c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112794f90,0);
  _objc_storeStrong(param_1 + _DAT_112794f74,0);
  _objc_storeStrong(param_1 + _DAT_112794f70,0);
  _objc_storeStrong(param_1 + _DAT_112794f6c,0);
  _objc_storeStrong(param_1 + _DAT_112794f68,0);
  _objc_storeStrong(param_1 + _DAT_112794f64,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112794f60,0);
  return;
}



/* Entry: 10b865dec; end: 10b865df7; +[SIGPullToRefreshBackgroundView layerClass] */

void FUN_10b865dec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR__OBJC_CLASS___CAGradientLayer_1126b2788);
  return;
}



/* Entry: 10b865df8; end: 10b865f67; -[SIGPullToRefreshBackgroundView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *****
FUN_10b865df8(undefined8 param_1,undefined8 param_2,undefined8 param_3,double param_4,
             undefined8 ****param_5)

{
  undefined8 *****pppppuVar1;
  undefined *puVar2;
  undefined8 *****pppppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *****pppppuVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *****unaff_x20;
  long lVar12;
  undefined *unaff_x21;
  undefined *unaff_x22;
  long lVar13;
  undefined8 ****ppppuStack_1c0;
  undefined *puStack_1b8;
  undefined8 ****ppppuStack_1b0;
  undefined8 ****ppppuStack_1a8;
  undefined1 ***pppuStack_1a0;
  code *pcStack_198;
  undefined *puStack_188;
  undefined8 ****ppppuStack_180;
  undefined8 uStack_178;
  undefined8 ****ppppuStack_170;
  undefined8 ****ppppuStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined1 **ppuStack_e0;
  code *pcStack_d8;
  undefined8 ****ppppuStack_c8;
  undefined *puStack_c0;
  undefined8 ****ppppuStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 ****ppppuStack_90;
  undefined8 ****ppppuStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined8 ***pppuStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_60 = PTR_PTR_11270b600;
  pppppuVar9 = (undefined8 *****)&pppuStack_68;
  pppuStack_68 = param_5;
  _objc_msgSendSuper2(pppppuVar9,PTR_s_initWithFrame__1125e2948);
  pppppuVar1 = pppppuVar9;
  if (pppppuVar9 != (undefined8 *****)0x0) {
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
    _objc_opt_class(PTR__OBJC_CLASS___CAGradientLayer_1126b2788);
    pppppuVar3 = pppppuVar1;
    _objc_opt_isKindOfClass(pppppuVar1,puVar2);
    unaff_x20 = pppppuVar1;
    if (((ulong)pppppuVar3 & 1) == 0) {
      unaff_x20 = (undefined8 *****)0x0;
    }
    _objc_retain(unaff_x20);
    _objc_release(pppppuVar1);
    unaff_x21 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = unaff_x21;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    unaff_x22 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_58 = puVar2;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = unaff_x22;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_50 = puVar2;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17eb60(unaff_x20);
    _objc_release(puVar4);
    _objc_release(unaff_x22);
    _objc_release(unaff_x21);
    func_0x00010c1bff00(unaff_x20);
    pppppuVar1 = unaff_x20;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pppppuVar9;
  }
  ___stack_chk_fail();
  pcStack_78 = FUN_10b865f68;
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_c0 = PTR_PTR_11270b600;
  ppppuStack_c8 = pppppuVar1;
  puStack_a0 = unaff_x22;
  puStack_98 = unaff_x21;
  ppppuStack_90 = unaff_x20;
  ppppuStack_88 = pppppuVar9;
  puStack_80 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&ppppuStack_c8,PTR_s_traitCollectionDidChange__11267bf88);
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
  _objc_opt_class(PTR__OBJC_CLASS___CAGradientLayer_1126b2788);
  pppppuVar3 = pppppuVar1;
  _objc_opt_isKindOfClass(pppppuVar1,puVar2);
  pppppuVar9 = pppppuVar1;
  if (((ulong)pppppuVar3 & 1) == 0) {
    pppppuVar9 = (undefined8 *****)0x0;
  }
  _objc_retain(pppppuVar9);
  _objc_release(pppppuVar1);
  pppppuVar1 = (undefined8 *****)PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  pppppuVar3 = pppppuVar1;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  ppppuStack_b8 = pppppuVar3;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_b0 = puVar4;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17eb60(pppppuVar9);
  _objc_release(pppppuVar9);
  _objc_release(puVar5);
  _objc_release(puVar2);
  pppppuVar9 = pppppuVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return pppppuVar9;
  }
  ___stack_chk_fail();
  pcStack_d8 = FUN_10b8660b8;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_160 = PTR_PTR_11270b608;
  pppppuVar3 = &ppppuStack_168;
  ppppuStack_168 = pppppuVar9;
  ppuStack_e0 = &puStack_80;
  _objc_msgSendSuper2(pppppuVar3,PTR_s_initWithFrame__1125e2948);
  pppppuVar9 = pppppuVar3;
  if (pppppuVar3 != (undefined8 *****)0x0) {
    func_0x00010b87f3b0();
    _objc_retainAutoreleasedReturnValue();
    pppppuVar1 = pppppuVar9;
    func_0x00010c11b9e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pppppuVar9);
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c01bf60();
    lVar12 = (long)_DAT_112794f94;
    uVar10 = *(undefined8 *)((long)pppppuVar3 + lVar12);
    *(undefined **)((long)pppppuVar3 + lVar12) = puVar2;
    _objc_release(uVar10);
    func_0x00010c182220(*(undefined8 *)((long)pppppuVar3 + lVar12));
    func_0x00010c219b60(*(undefined8 *)((long)pppppuVar3 + lVar12));
    func_0x00010befbb60(pppppuVar3);
    ppppuStack_170 = pppppuVar1;
    if (pppppuVar1 == (undefined8 *****)0x0) {
      param_2 = 0;
    }
    else {
      func_0x00010c23d0a0(pppppuVar1);
    }
    lVar13 = (long)_DAT_112794f98;
    *(undefined8 *)((long)pppppuVar3 + lVar13) = param_2;
    uVar6 = *(undefined8 *)((long)pppppuVar3 + lVar12);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar6;
    func_0x00010bf49420(*(undefined8 *)((long)pppppuVar3 + lVar13));
    _objc_retainAutoreleasedReturnValue();
    lVar13 = (long)_DAT_112794f9c;
    uVar11 = *(undefined8 *)((long)pppppuVar3 + lVar13);
    *(undefined8 *)((long)pppppuVar3 + lVar13) = uVar10;
    _objc_release(uVar11);
    _objc_release(uVar6);
    puStack_188 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar11 = *(undefined8 *)((long)pppppuVar3 + lVar12);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    pppppuVar9 = pppppuVar3;
    uStack_178 = uVar11;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    ppppuStack_180 = pppppuVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_158 = uVar11;
    uVar7 = *(undefined8 *)((long)pppppuVar3 + lVar12);
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    pppppuVar9 = pppppuVar3;
    func_0x00010c08e400(pppppuVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar7;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_150 = uVar10;
    uVar8 = *(undefined8 *)((long)pppppuVar3 + lVar12);
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    pppppuVar1 = pppppuVar3;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_148 = uVar6;
    uStack_140 = *(undefined8 *)((long)pppppuVar3 + lVar13);
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_188);
    _objc_release(puVar2);
    _objc_release(uVar6);
    _objc_release(pppppuVar1);
    _objc_release(uVar8);
    _objc_release(uVar10);
    _objc_release(pppppuVar9);
    _objc_release(uVar7);
    _objc_release(uVar11);
    _objc_release(ppppuStack_180);
    _objc_release(uStack_178);
    pppppuVar9 = (undefined8 *****)ppppuStack_170;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
    return pppppuVar3;
  }
  ___stack_chk_fail();
  pcStack_198 = FUN_10b866394;
  puStack_1b8 = PTR_PTR_11270b608;
  ppppuStack_1c0 = pppppuVar9;
  ppppuStack_1b0 = pppppuVar1;
  ppppuStack_1a8 = pppppuVar3;
  pppuStack_1a0 = &ppuStack_e0;
  _objc_msgSendSuper2(&ppppuStack_1c0,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(pppppuVar9);
  if (param_4 <= *(double *)((long)pppppuVar9 + (long)_DAT_112794f98)) {
    param_4 = *(double *)((long)pppppuVar9 + (long)_DAT_112794f98);
  }
  pppppuVar9 = *(undefined8 ******)((long)pppppuVar9 + (long)_DAT_112794f9c);
  func_0x00010c181140(param_4,pppppuVar9);
  return pppppuVar9;
}



/* Entry: 10b865f68; end: 10b8660b7; -[SIGPullToRefreshBackgroundView traitCollectionDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *****
FUN_10b865f68(undefined8 param_1,undefined8 param_2,undefined8 param_3,double param_4,ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 *****pppppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *****pppppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *****pppppuVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined8 ****ppppuStack_150;
  undefined *puStack_148;
  undefined8 ****ppppuStack_140;
  undefined8 ****ppppuStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined *puStack_118;
  undefined8 ****ppppuStack_110;
  undefined8 uStack_108;
  undefined8 ****ppppuStack_100;
  undefined8 ****ppppuStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined1 *puStack_70;
  code *pcStack_68;
  ulong uStack_58;
  undefined *puStack_50;
  undefined8 ****ppppuStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_50 = PTR_PTR_11270b600;
  uStack_58 = param_5;
  _objc_msgSendSuper2(&uStack_58,PTR_s_traitCollectionDidChange__11267bf88);
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
  _objc_opt_class(PTR__OBJC_CLASS___CAGradientLayer_1126b2788);
  uVar3 = param_5;
  _objc_opt_isKindOfClass(param_5,puVar2);
  uVar1 = param_5;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_5);
  pppppuVar11 = (undefined8 *****)PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  pppppuVar4 = pppppuVar11;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  ppppuStack_48 = pppppuVar4;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar5;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17eb60(uVar1);
  _objc_release(uVar1);
  _objc_release(puVar6);
  _objc_release(puVar2);
  pppppuVar4 = pppppuVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return pppppuVar4;
  }
  ___stack_chk_fail();
  pcStack_68 = FUN_10b8660b8;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_f0 = PTR_PTR_11270b608;
  pppppuVar7 = &ppppuStack_f8;
  ppppuStack_f8 = pppppuVar4;
  puStack_70 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(pppppuVar7,PTR_s_initWithFrame__1125e2948);
  pppppuVar4 = pppppuVar7;
  if (pppppuVar7 != (undefined8 *****)0x0) {
    pppppuVar11 = pppppuVar7;
    func_0x00010b87f3b0();
    _objc_retainAutoreleasedReturnValue();
    pppppuVar4 = pppppuVar11;
    func_0x00010c11b9e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pppppuVar11);
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c01bf60();
    lVar14 = (long)_DAT_112794f94;
    uVar12 = *(undefined8 *)((long)pppppuVar7 + lVar14);
    *(undefined **)((long)pppppuVar7 + lVar14) = puVar2;
    _objc_release(uVar12);
    func_0x00010c182220(*(undefined8 *)((long)pppppuVar7 + lVar14));
    func_0x00010c219b60(*(undefined8 *)((long)pppppuVar7 + lVar14));
    func_0x00010befbb60(pppppuVar7);
    ppppuStack_100 = pppppuVar4;
    if (pppppuVar4 == (undefined8 *****)0x0) {
      param_2 = 0;
    }
    else {
      func_0x00010c23d0a0(pppppuVar4);
    }
    lVar15 = (long)_DAT_112794f98;
    *(undefined8 *)((long)pppppuVar7 + lVar15) = param_2;
    uVar8 = *(undefined8 *)((long)pppppuVar7 + lVar14);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar8;
    func_0x00010bf49420(*(undefined8 *)((long)pppppuVar7 + lVar15));
    _objc_retainAutoreleasedReturnValue();
    lVar15 = (long)_DAT_112794f9c;
    uVar13 = *(undefined8 *)((long)pppppuVar7 + lVar15);
    *(undefined8 *)((long)pppppuVar7 + lVar15) = uVar12;
    _objc_release(uVar13);
    _objc_release(uVar8);
    puStack_118 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar13 = *(undefined8 *)((long)pppppuVar7 + lVar14);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    pppppuVar11 = pppppuVar7;
    uStack_108 = uVar13;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    ppppuStack_110 = pppppuVar11;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_e8 = uVar13;
    uVar9 = *(undefined8 *)((long)pppppuVar7 + lVar14);
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    pppppuVar4 = pppppuVar7;
    func_0x00010c08e400(pppppuVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_e0 = uVar12;
    uVar10 = *(undefined8 *)((long)pppppuVar7 + lVar14);
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    pppppuVar11 = pppppuVar7;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar10;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_d8 = uVar8;
    uStack_d0 = *(undefined8 *)((long)pppppuVar7 + lVar15);
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_118);
    _objc_release(puVar2);
    _objc_release(uVar8);
    _objc_release(pppppuVar11);
    _objc_release(uVar10);
    _objc_release(uVar12);
    _objc_release(pppppuVar4);
    _objc_release(uVar9);
    _objc_release(uVar13);
    _objc_release(ppppuStack_110);
    _objc_release(uStack_108);
    pppppuVar4 = (undefined8 *****)ppppuStack_100;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return pppppuVar7;
  }
  ___stack_chk_fail();
  pcStack_128 = FUN_10b866394;
  puStack_148 = PTR_PTR_11270b608;
  ppppuStack_150 = pppppuVar4;
  ppppuStack_140 = pppppuVar11;
  ppppuStack_138 = pppppuVar7;
  ppuStack_130 = &puStack_70;
  _objc_msgSendSuper2(&ppppuStack_150,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(pppppuVar4);
  if (param_4 <= *(double *)((long)pppppuVar4 + (long)_DAT_112794f98)) {
    param_4 = *(double *)((long)pppppuVar4 + (long)_DAT_112794f98);
  }
  pppppuVar11 = *(undefined8 ******)((long)pppppuVar4 + (long)_DAT_112794f9c);
  func_0x00010c181140(param_4,pppppuVar11);
  return pppppuVar11;
}



/* Entry: 10b8660b8; end: 10b866393; -[SIGPullToRefreshThemeBackgroundView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10b8660b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,double param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *unaff_x20;
  long lVar10;
  long lVar11;
  undefined8 *puStack_f0;
  undefined *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = PTR_PTR_11270b608;
  puVar7 = &uStack_98;
  uStack_98 = param_5;
  _objc_msgSendSuper2(puVar7,PTR_s_initWithFrame__1125e2948);
  puVar1 = puVar7;
  if (puVar7 != (undefined8 *)0x0) {
    func_0x00010b87f3b0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c11b9e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c01bf60();
    lVar10 = (long)_DAT_112794f94;
    uVar8 = *(undefined8 *)((long)puVar7 + lVar10);
    *(undefined **)((long)puVar7 + lVar10) = puVar3;
    _objc_release(uVar8);
    func_0x00010c182220(*(undefined8 *)((long)puVar7 + lVar10));
    func_0x00010c219b60(*(undefined8 *)((long)puVar7 + lVar10));
    func_0x00010befbb60(puVar7);
    puStack_a0 = puVar2;
    if (puVar2 == (undefined8 *)0x0) {
      param_2 = 0;
    }
    else {
      func_0x00010c23d0a0(puVar2);
    }
    lVar11 = (long)_DAT_112794f98;
    *(undefined8 *)((long)puVar7 + lVar11) = param_2;
    uVar4 = *(undefined8 *)((long)puVar7 + lVar10);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar4;
    func_0x00010bf49420(*(undefined8 *)((long)puVar7 + lVar11));
    _objc_retainAutoreleasedReturnValue();
    lVar11 = (long)_DAT_112794f9c;
    uVar9 = *(undefined8 *)((long)puVar7 + lVar11);
    *(undefined8 *)((long)puVar7 + lVar11) = uVar8;
    _objc_release(uVar9);
    _objc_release(uVar4);
    puStack_b8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar9 = *(undefined8 *)((long)puVar7 + lVar10);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar7;
    uStack_a8 = uVar9;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puStack_b0 = puVar1;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_88 = uVar9;
    uVar5 = *(undefined8 *)((long)puVar7 + lVar10);
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar7;
    func_0x00010c08e400(puVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_80 = uVar8;
    uVar6 = *(undefined8 *)((long)puVar7 + lVar10);
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x20 = puVar7;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_78 = uVar4;
    uStack_70 = *(undefined8 *)((long)puVar7 + lVar11);
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_b8);
    _objc_release(puVar3);
    _objc_release(uVar4);
    _objc_release(unaff_x20);
    _objc_release(uVar6);
    _objc_release(uVar8);
    _objc_release(puVar1);
    _objc_release(uVar5);
    _objc_release(uVar9);
    _objc_release(puStack_b0);
    _objc_release(uStack_a8);
    puVar1 = puStack_a0;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar7;
  }
  ___stack_chk_fail();
  pcStack_c8 = FUN_10b866394;
  puStack_e8 = PTR_PTR_11270b608;
  puStack_f0 = puVar1;
  puStack_e0 = unaff_x20;
  puStack_d8 = puVar7;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&puStack_f0,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(puVar1);
  if (param_4 <= *(double *)((long)puVar1 + (long)_DAT_112794f98)) {
    param_4 = *(double *)((long)puVar1 + (long)_DAT_112794f98);
  }
  puVar7 = *(undefined8 **)((long)puVar1 + (long)_DAT_112794f9c);
  func_0x00010c181140(param_4,puVar7);
  return puVar7;
}



/* Entry: 10b866394; end: 10b8663fb; -[SIGPullToRefreshThemeBackgroundView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b866394(long param_1)

{
  double in_d3;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_11270b608;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_1);
  if (in_d3 <= *(double *)(param_1 + _DAT_112794f98)) {
    in_d3 = *(double *)(param_1 + _DAT_112794f98);
  }
  func_0x00010c181140(in_d3,*(undefined8 *)(param_1 + _DAT_112794f9c));
  return;
}



/* Entry: 10b8663fc; end: 10b86643b; -[SIGPullToRefreshThemeBackgroundView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8663fc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112794f9c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112794f94,0);
  return;
}



/* Entry: 10b86643c; end: 10b866447; +[SIGPullToRefreshTopFade layerClass] */

void FUN_10b86643c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR__OBJC_CLASS___CAGradientLayer_1126b2788);
  return;
}



/* Entry: 10b866448; end: 10b8665f3; -[SIGPullToRefreshTopFade initWithFrame:] */

undefined8 * FUN_10b866448(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *unaff_x20;
  undefined *unaff_x21;
  undefined *unaff_x22;
  undefined *unaff_x23;
  undefined *unaff_x24;
  undefined8 *puStack_e8;
  undefined *puStack_e0;
  undefined8 *puStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_70 = PTR_PTR_11270b610;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  puVar2 = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
    _objc_opt_class(PTR__OBJC_CLASS___CAGradientLayer_1126b2788);
    puVar4 = puVar2;
    _objc_opt_isKindOfClass(puVar2,puVar3);
    unaff_x20 = puVar2;
    if (((ulong)puVar4 & 1) == 0) {
      unaff_x20 = (undefined8 *)0x0;
    }
    _objc_retain(unaff_x20);
    _objc_release(puVar2);
    unaff_x21 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf1c920();
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = unaff_x21;
    func_0x00010bf414e0(0x3fa999999999999a);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = unaff_x22;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    unaff_x23 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_68 = puVar3;
    func_0x00010bf1c920();
    _objc_retainAutoreleasedReturnValue();
    unaff_x24 = unaff_x23;
    func_0x00010bf414e0(0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = unaff_x24;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_60 = puVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17eb60(unaff_x20);
    _objc_release(puVar5);
    _objc_release(unaff_x24);
    _objc_release(unaff_x23);
    _objc_release(unaff_x22);
    _objc_release(unaff_x21);
    func_0x00010c1bff00(unaff_x20);
    puVar2 = unaff_x20;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar1;
  }
  ___stack_chk_fail();
  pcStack_88 = FUN_10b8665f4;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_e0 = PTR_PTR_11270b610;
  puStack_e8 = puVar2;
  puStack_c0 = unaff_x24;
  puStack_b8 = unaff_x23;
  puStack_b0 = unaff_x22;
  puStack_a8 = unaff_x21;
  puStack_a0 = unaff_x20;
  puStack_98 = puVar1;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&puStack_e8,PTR_s_traitCollectionDidChange__11267bf88);
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
  _objc_opt_class(PTR__OBJC_CLASS___CAGradientLayer_1126b2788);
  puVar4 = puVar2;
  _objc_opt_isKindOfClass(puVar2,puVar3);
  puVar1 = puVar2;
  if (((ulong)puVar4 & 1) == 0) {
    puVar1 = (undefined8 *)0x0;
  }
  _objc_retain(puVar1);
  _objc_release(puVar2);
  puVar2 = (undefined8 *)PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bf414e0(0x3fa999999999999a);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_d8 = puVar6;
  func_0x00010bf1c920();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010bf414e0(0);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_d0 = puVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17eb60(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar8);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar1 = (undefined8 *)PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR__OBJC_CLASS___CAGradientLayer_1126b2788);
  return puVar1;
}



/* Entry: 10b8665f4; end: 10b86677f; -[SIGPullToRefreshTopFade traitCollectionDidChange:] */

void FUN_10b8665f4(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_60 = PTR_PTR_11270b610;
  uStack_68 = param_1;
  _objc_msgSendSuper2(&uStack_68,PTR_s_traitCollectionDidChange__11267bf88);
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
  _objc_opt_class(PTR__OBJC_CLASS___CAGradientLayer_1126b2788);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bf414e0(0x3fa999999999999a);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_58 = puVar5;
  func_0x00010bf1c920();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar6;
  func_0x00010bf414e0(0);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17eb60(uVar1);
  _objc_release(uVar1);
  _objc_release(puVar8);
  _objc_release(puVar5);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR__OBJC_CLASS___CAGradientLayer_1126b2788);
  return;
}



/* Entry: 10b866780; end: 10b86678b; +[SIGPullToRefreshBottomFade layerClass] */

void FUN_10b866780(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR__OBJC_CLASS___CAGradientLayer_1126b2788);
  return;
}



/* Entry: 10b86678c; end: 10b866937; -[SIGPullToRefreshBottomFade initWithFrame:] */

undefined8 * FUN_10b86678c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *unaff_x20;
  undefined *unaff_x21;
  undefined *unaff_x22;
  undefined *unaff_x23;
  undefined *unaff_x24;
  undefined8 *puStack_e8;
  undefined *puStack_e0;
  undefined8 *puStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_70 = PTR_PTR_11270b618;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  puVar2 = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
    _objc_opt_class(PTR__OBJC_CLASS___CAGradientLayer_1126b2788);
    puVar4 = puVar2;
    _objc_opt_isKindOfClass(puVar2,puVar3);
    unaff_x20 = puVar2;
    if (((ulong)puVar4 & 1) == 0) {
      unaff_x20 = (undefined8 *)0x0;
    }
    _objc_retain(unaff_x20);
    _objc_release(puVar2);
    unaff_x21 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf1c920();
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = unaff_x21;
    func_0x00010bf414e0(0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = unaff_x22;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    unaff_x23 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_68 = puVar3;
    func_0x00010bf1c920();
    _objc_retainAutoreleasedReturnValue();
    unaff_x24 = unaff_x23;
    func_0x00010bf414e0(0x3fa999999999999a);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = unaff_x24;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_60 = puVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17eb60(unaff_x20);
    _objc_release(puVar5);
    _objc_release(unaff_x24);
    _objc_release(unaff_x23);
    _objc_release(unaff_x22);
    _objc_release(unaff_x21);
    func_0x00010c1bff00(unaff_x20);
    puVar2 = unaff_x20;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar1;
  }
  ___stack_chk_fail();
  pcStack_88 = FUN_10b866938;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_e0 = PTR_PTR_11270b618;
  puStack_e8 = puVar2;
  puStack_c0 = unaff_x24;
  puStack_b8 = unaff_x23;
  puStack_b0 = unaff_x22;
  puStack_a8 = unaff_x21;
  puStack_a0 = unaff_x20;
  puStack_98 = puVar1;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&puStack_e8,PTR_s_traitCollectionDidChange__11267bf88);
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
  _objc_opt_class(PTR__OBJC_CLASS___CAGradientLayer_1126b2788);
  puVar4 = puVar2;
  _objc_opt_isKindOfClass(puVar2,puVar3);
  puVar1 = puVar2;
  if (((ulong)puVar4 & 1) == 0) {
    puVar1 = (undefined8 *)0x0;
  }
  _objc_retain(puVar1);
  _objc_release(puVar2);
  puVar2 = (undefined8 *)PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bf414e0(0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_d8 = puVar6;
  func_0x00010bf1c920();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010bf414e0(0x3fa999999999999a);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_d0 = puVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17eb60(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar8);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return puVar2;
  }
  ___stack_chk_fail();
  return puVar2;
}



/* Entry: 10b866938; end: 10b866ac3; -[SIGPullToRefreshBottomFade traitCollectionDidChange:] */

void FUN_10b866938(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_60 = PTR_PTR_11270b618;
  uStack_68 = param_1;
  _objc_msgSendSuper2(&uStack_68,PTR_s_traitCollectionDidChange__11267bf88);
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
  _objc_opt_class(PTR__OBJC_CLASS___CAGradientLayer_1126b2788);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bf414e0(0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_58 = puVar5;
  func_0x00010bf1c920();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar6;
  func_0x00010bf414e0(0x3fa999999999999a);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17eb60(uVar1);
  _objc_release(uVar1);
  _objc_release(puVar8);
  _objc_release(puVar5);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 10b866ac4; end: 10b866ac7; -[SCEmptyNavigationBarButtonImageView setEnableDarkModeAlways:] */

void FUN_10b866ac4(void)

{
  return;
}



/* Entry: 10b866ac8; end: 10b866acb; -[SCEmptyNavigationBarButtonImageView setBadgeIsVisible:badgeCountIsVisible:badgeIsImage:] */

void FUN_10b866ac8(void)

{
  return;
}



/* Entry: 10b866acc; end: 10b866acf; -[SCEmptyNavigationBarButtonImageView setThemeColor:] */

void FUN_10b866acc(void)

{
  return;
}



/* Entry: 10b866ad0; end: 10b866ad3; -[SCEmptyNavigationBarButtonImageView setHighlightThemeColor:] */

void FUN_10b866ad0(void)

{
  return;
}



/* Entry: 10b866ad4; end: 10b866ad7; -[SCEmptyNavigationBarButtonImageView setSelected:overrideTintColor:] */

void FUN_10b866ad4(void)

{
  return;
}



/* Entry: 10b866ad8; end: 10b866adb; -[SCEmptyNavigationBarButtonImageView setIgnoreOverrideTintColor:] */

void FUN_10b866ad8(void)

{
  return;
}



/* Entry: 10b866adc; end: 10b866adf; -[SCEmptyNavigationBarButtonImageView setHighlightImage:] */

void FUN_10b866adc(void)

{
  return;
}



/* Entry: 10b866ae0; end: 10b866ae7; -[SCEmptyNavigationBarButtonImageView defaultImage] */

undefined8 FUN_10b866ae0(void)

{
  return 0;
}



/* Entry: 10b866ae8; end: 10b866aef; -[SCEmptyNavigationBarButtonImageView highlightImage] */

undefined8 FUN_10b866ae8(void)

{
  return 0;
}



/* Entry: 10b866af0; end: 10b866af7; -[SCEmptyNavigationBarButtonImageView defaultLabelColor] */

undefined8 FUN_10b866af0(void)

{
  return 0xd4;
}



/* Entry: 10b866af8; end: 10b866aff; -[SCEmptyNavigationBarButtonImageView highlightLabelColor] */

undefined8 FUN_10b866af8(void)

{
  return 0xd4;
}



/* Entry: 10b866b00; end: 10b866b03; -[SCEmptyNavigationBarButtonImageView setHighlightTintColor:] */

void FUN_10b866b00(void)

{
  return;
}



/* Entry: 10b866b04; end: 10b866b0b; -[SCEmptyNavigationBarButtonImageView highlightTintColor] */

undefined8 FUN_10b866b04(void)

{
  return 0xd4;
}



/* Entry: 10b866b0c; end: 10b866b13; -[SCEmptyNavigationBarButtonImageView badgeCountXOffset] */

undefined8 FUN_10b866b0c(void)

{
  return 0;
}



/* Entry: 10b866b14; end: 10b866b1b; -[SCEmptyNavigationBarButtonImageView badgeCountYOffset] */

undefined8 FUN_10b866b14(void)

{
  return 0;
}



/* Entry: 10b866b1c; end: 10b866b23; -[SCEmptyNavigationBarButtonImageView badgeViewOffset] */

undefined8 FUN_10b866b1c(void)

{
  return 0;
}



/* Entry: 10b866b24; end: 10b866beb; -[SIGNavigationBarButtonBadgeView setTintColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b866b24(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_112794fb8;
  uVar1 = *(ulong *)(param_1 + lVar3);
  if (uVar1 == 0) {
    func_0x00010c216160(*(undefined8 *)(param_1 + _DAT_112794fbc));
  }
  else {
    func_0x00010bfad500();
    uVar2 = param_3;
    _objc_retainAutorelease(param_3);
    func_0x00010bdc0fe0();
    _CGColorEqualToColor(uVar1,uVar2);
    if ((uVar1 & 1) != 0) goto LAB_10b866bd8;
    _objc_retainAutorelease(param_3);
    func_0x00010bdc0fe0();
    func_0x00010c19bc00(*(undefined8 *)(param_1 + lVar3));
  }
  func_0x00010c17e800(*(undefined8 *)(param_1 + _DAT_112794fc0));
  lVar3 = (long)_DAT_112794fac;
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = param_3;
  _objc_release(uVar2);
LAB_10b866bd8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b866bec; end: 10b866c8b; -[SIGNavigationBarButtonBadgeView setImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b866bec(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_112794fa8;
  if (param_3 != *(long *)(param_1 + lVar2)) {
    func_0x00010c12c960(*(undefined8 *)(param_1 + _DAT_112794fbc));
    uVar1 = *(undefined8 *)(param_1 + _DAT_112794fb8);
    *(undefined8 *)(param_1 + _DAT_112794fb8) = 0;
    _objc_release(uVar1);
    lVar3 = (long)_DAT_112794fc0;
    func_0x00010c12c960(*(undefined8 *)(param_1 + lVar3));
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = 0;
    _objc_release(uVar1);
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(long *)(param_1 + lVar2) = param_3;
    _objc_release(uVar1);
    func_0x00010beaad40(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b866c8c; end: 10b866cf3; -[SIGNavigationBarButtonBadgeView setBadgeTextColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b866c8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112794fb0);
  *(undefined8 *)(param_1 + _DAT_112794fb0) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010c213180(*(undefined8 *)(param_1 + _DAT_112794fc0),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b866cf4; end: 10b866d0f; -[SIGNavigationBarButtonBadgeView _badgeStyleForCount:] */

undefined8 FUN_10b866cf4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 6;
  if (9 < param_3) {
    uVar1 = 7;
  }
  uVar2 = 8;
  if (param_3 < 100) {
    uVar2 = uVar1;
  }
  return uVar2;
}



/* Entry: 10b866d10; end: 10b866d6f; -[SIGNavigationBarButtonBadgeView _badgeTextWithCount:] */

void FUN_10b866d10(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  if (param_3 < 100) {
    ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar1;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar1);
  }
  else {
    ppuVar2 = &PTR____CFConstantStringClassReference_110f8ab38;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 10b866d70; end: 10b86701f; -[SIGNavigationBarButtonBadgeView _setupImageBadge] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10b866d70(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + _DAT_112794fa8);
  func_0x00010bfe9720(lVar1,param_2,2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  lStack_90 = lVar1;
  _objc_alloc();
  func_0x00010c01bf60();
  lVar11 = (long)_DAT_112794fbc;
  uVar10 = *(undefined8 *)(param_1 + lVar11);
  *(undefined **)(param_1 + lVar11) = puVar2;
  _objc_release(uVar10);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar11),param_2,0);
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar11),param_2,0);
  func_0x00010c216160(*(undefined8 *)(param_1 + lVar11),param_2,
                      *(undefined8 *)(param_1 + _DAT_112794fac));
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar11));
  puStack_b0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar10 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  uStack_98 = uVar10;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lStack_a0 = lVar1;
  func_0x00010bf493a0(uVar10,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar11);
  uStack_a8 = uVar10;
  uStack_88 = uVar10;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar3;
  func_0x00010bf493a0(uVar3,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar11);
  uStack_80 = uVar10;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar4;
  func_0x00010bf493a0(uVar4,param_2,lVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar11);
  uStack_78 = uVar8;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf493a0(uVar6,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_b0,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar7);
  _objc_release(param_1);
  _objc_release(uVar6);
  _objc_release(uVar8);
  _objc_release(lVar5);
  _objc_release(uVar4);
  _objc_release(uVar10);
  _objc_release(lVar1);
  _objc_release(uVar3);
  _objc_release(uStack_a8);
  _objc_release(lStack_a0);
  _objc_release(uStack_98);
  lVar11 = lStack_90;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return lVar11;
  }
  ___stack_chk_fail();
  pcStack_b8 = FUN_10b867020;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = (long)_DAT_112794fa0;
  uStack_100 = uVar8;
  lStack_f8 = lVar1;
  uStack_f0 = uVar3;
  puStack_e8 = puVar2;
  lStack_e0 = param_1;
  uStack_d8 = uVar7;
  uStack_d0 = uVar6;
  lStack_c8 = lVar5;
  puStack_c0 = &stack0xfffffffffffffff0;
  func_0x00010bdd2780();
  puVar2 = PTR_PTR_1126c51b8;
  _objc_alloc();
  func_0x00010c04ed00(*(undefined8 *)(lVar11 + _DAT_112794fb4));
  lVar13 = (long)_DAT_112794fc0;
  uVar10 = *(undefined8 *)(lVar11 + lVar13);
  *(undefined **)(lVar11 + lVar13) = puVar2;
  _objc_release(uVar10);
  func_0x00010c219b60(*(undefined8 *)(lVar11 + lVar13),param_2,0);
  lVar1 = lVar11;
  func_0x00010bdd27e0(lVar11,param_2,*(undefined8 *)(lVar11 + lVar12));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(lVar11 + lVar13),param_2,lVar1);
  _objc_release(lVar1);
  func_0x00010c213180(*(undefined8 *)(lVar11 + lVar13),param_2,
                      *(undefined8 *)(lVar11 + _DAT_112794fb0));
  func_0x00010befbb60(lVar11,param_2,*(undefined8 *)(lVar11 + lVar13));
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar12 = *(long *)(lVar11 + lVar13);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar11;
  func_0x00010bf348e0(lVar11);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar12;
  func_0x00010bf493a0(lVar12,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(lVar11 + lVar13);
  lStack_118 = lVar5;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08de00(lVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar8;
  func_0x00010bf493a0(uVar8,param_2,lVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_110 = uVar10;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_118,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2,param_2,puVar9);
  _objc_release(puVar9);
  _objc_release(uVar10);
  _objc_release(lVar11);
  _objc_release(uVar8);
  _objc_release(lVar5);
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return lVar12;
  }
  ___stack_chk_fail();
  return *(long *)(lVar12 + _DAT_112794fa0);
}



/* Entry: 10b867020; end: 10b867223; -[SIGNavigationBarButtonBadgeView _setupCountBadgeWithTintColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10b867020(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = (long)_DAT_112794fa0;
  func_0x00010bdd2780(param_1,param_2,*(undefined8 *)(param_1 + lVar7));
  puVar1 = PTR_PTR_1126c51b8;
  _objc_alloc();
  func_0x00010c04ed00(*(undefined8 *)(param_1 + _DAT_112794fb4));
  lVar8 = (long)_DAT_112794fc0;
  uVar6 = *(undefined8 *)(param_1 + lVar8);
  *(undefined **)(param_1 + lVar8) = puVar1;
  _objc_release(uVar6);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar8),param_2,0);
  lVar2 = param_1;
  func_0x00010bdd27e0(param_1,param_2,*(undefined8 *)(param_1 + lVar7));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar8),param_2,lVar2);
  _objc_release(lVar2);
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar8),param_2,
                      *(undefined8 *)(param_1 + _DAT_112794fb0));
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar8));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar3 = *(long *)(param_1 + lVar8);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf348e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar3;
  func_0x00010bf493a0(lVar3,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar8);
  lStack_68 = lVar7;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08de00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010bf493a0(uVar4,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_60 = uVar6;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_68,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(uVar6);
  _objc_release(param_1);
  _objc_release(uVar4);
  _objc_release(lVar7);
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return lVar3;
  }
  ___stack_chk_fail();
  return *(long *)(lVar3 + _DAT_112794fa0);
}



/* Entry: 10b867224; end: 10b867233; -[SIGNavigationBarButtonBadgeView badgeCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b867224(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112794fa0);
}



/* Entry: 10b867234; end: 10b867243; -[SIGNavigationBarButtonBadgeView badgeTextColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b867234(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112794fb0);
}



/* Entry: 10b867244; end: 10b8672bb; -[SIGNavigationBarButton dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b867244(long param_1,undefined8 param_2)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c12d560(*(undefined8 *)(param_1 + _DAT_112794fc4),param_2,param_1);
  lVar1 = *(long *)(param_1 + _DAT_112794ff0);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  }
  puStack_28 = PTR_PTR_11270b628;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10b8672bc; end: 10b8672db; -[SIGNavigationBarButton setIconSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8672bc(double param_1,long param_2)

{
  if (*(double *)(param_2 + _DAT_112794fcc) != param_1) {
    *(double *)(param_2 + _DAT_112794fcc) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc48d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__activateAllConstraints_11254ebd0);
    return;
  }
  return;
}



/* Entry: 10b8672dc; end: 10b8673cf; -[SIGNavigationBarButton _handleHideLabelUpdate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8672dc(long param_1)

{
  undefined *puVar1;
  undefined1 uVar2;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  func_0x00010bdc48c0();
  uVar2 = (undefined1)*(undefined8 *)(param_1 + _DAT_112794fc4);
  func_0x00010bfe2180();
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = uVar2;
  func_0x00010bf03460(0x3fd999999999999a,0,0x3fe999999999999a,0,puVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10b8673d0; end: 10b867423;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8673d0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c08cdc0(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c1677c0((double)(*(byte *)(param_1 + 0x30) ^ 1),
                        *(undefined8 *)(lVar1 + _DAT_112794fe8));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b867424; end: 10b867523; -[SIGNavigationBarButton _didPressButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b867424(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_112794fc4;
  lVar1 = *(long *)(param_1 + lVar5);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + lVar5);
    func_0x00010c15ac20();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      puVar4 = PTR_PTR_1126e1650;
      _objc_alloc_init(PTR_PTR_1126e1650);
      uVar3 = *(undefined8 *)(param_1 + lVar5);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c15ac20(*(undefined8 *)(param_1 + lVar5));
      func_0x00010befbd40(puVar4);
      _objc_release(uVar3);
      func_0x00010c15b4e0(puVar4);
      goto LAB_10b867500;
    }
  }
  lVar1 = *(long *)(param_1 + lVar5);
  func_0x00010beedca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    return;
  }
  puVar4 = *(undefined **)(param_1 + lVar5);
  func_0x00010beedca0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(puVar4 + 0x10))();
LAB_10b867500:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 10b867524; end: 10b8675af; -[SIGNavigationBarButton _didLongPressButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b867524(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  func_0x00010c252440();
  if (param_3 == 1) {
    lVar2 = (long)_DAT_112794fc4;
    lVar1 = *(long *)(param_1 + lVar2);
    func_0x00010c0b4ce0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      lVar1 = *(long *)(param_1 + lVar2);
      func_0x00010c0b4ce0();
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar1);
      return;
    }
  }
  return;
}



/* Entry: 10b8675b0; end: 10b86762b; -[SIGNavigationBarButton _didBeginPreActivation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8675b0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112794fc4;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c105ba0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = *(long *)(param_1 + lVar2);
    func_0x00010c105ba0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 10b86762c; end: 10b8676a7; -[SIGNavigationBarButton _didCancelPreActivation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b86762c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112794fc4;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c105bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = *(long *)(param_1 + lVar2);
    func_0x00010c105bc0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 10b8676a8; end: 10b8676bf; -[SIGNavigationBarButton _badgeShowCountFullViewSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_10b8676a8(long param_1)

{
  return *(double *)(param_1 + _DAT_112794fdc) * 18.0;
}



/* Entry: 10b8676c0; end: 10b8676c3; -[SIGNavigationBarButton presentTooltips] */

void FUN_10b8676c0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be7efd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentTooltip_11257d590);
  return;
}



/* Entry: 10b8676c4; end: 10b867727;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8676c4(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_2 + 0x20) + (long)_DAT_112795008;
  _objc_loadWeakRetained(lVar3);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010bf8b160(*(undefined8 *)(param_2 + 0x30));
  func_0x00010c10e840(*(undefined8 *)(param_2 + 0x38),*(undefined8 *)(param_2 + 0x40),param_1,lVar3,
                      param_3,uVar2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 10b867728; end: 10b8677e7; -[SIGNavigationBarButton _tooltipPosition] */

bool FUN_10b867728(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  
  uVar1 = param_3;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf345e0(param_3);
  uVar2 = param_3;
  func_0x00010c2a71e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf512a0(param_1,param_2,uVar1,param_4,uVar2);
  dVar3 = param_1;
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c2a71e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  _objc_release(param_3);
  return dVar3 * 0.5 < param_1;
}



/* Entry: 10b8677e8; end: 10b867887; -[SIGNavigationBarButton _tooltipPoint] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10b8677e8(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  
  func_0x00010bf20c00();
  _CGRectGetWidth();
  dVar4 = param_1 * 0.5;
  lVar2 = (long)_DAT_112794fe4;
  lVar1 = *(long *)(param_2 + lVar2);
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == param_2) {
    func_0x00010bf20c00(*(undefined8 *)(param_2 + lVar2));
    _CGRectGetWidth();
    dVar3 = param_1;
    _objc_release(lVar1);
    if (0.0 < param_1) {
      func_0x00010bf345e0(*(undefined8 *)(param_2 + lVar2));
      dVar4 = dVar3;
    }
  }
  else {
    _objc_release(lVar1);
  }
  auVar5._8_8_ = 0;
  auVar5._0_8_ = dVar4;
  return auVar5;
}



/* Entry: 10b867888; end: 10b86788b; -[SIGNavigationBarButton tooltipDidDismiss:] */

void FUN_10b867888(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be03850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissTooltip_11255e7b0);
  return;
}



/* Entry: 10b86788c; end: 10b8679cf; -[SIGNavigationBarButton pointInside:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10b86788c(undefined8 param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4,
             undefined8 param_5)

{
  ulong uVar1;
  undefined1 **ppuVar2;
  long lVar3;
  undefined1 *puStack_80;
  undefined *puStack_78;
  
  ppuVar2 = &puStack_80;
  _objc_retain(param_5);
  lVar3 = (long)_DAT_112794ff4;
  uVar1 = *(ulong *)(param_3 + lVar3);
  if ((uVar1 == 0) ||
     (_objc_opt_respondsToSelector(uVar1,PTR_s_tapAreaInsets_112677d70), (uVar1 & 1) == 0)) {
    if (*(double *)(param_3 + _DAT_112794fec) <= 0.0) {
      puStack_78 = PTR_PTR_11270b628;
      puStack_80 = param_3;
      _objc_msgSendSuper2(param_1,param_2,&puStack_80,PTR_s_pointInside_withEvent__11261e4e8,param_5
                         );
      goto LAB_10b86799c;
    }
    func_0x00010be0c400(param_3);
    ppuVar2 = (undefined1 **)param_3;
  }
  else {
    func_0x00010c268d20(*(undefined8 *)(param_3 + lVar3));
    func_0x00010bf20c00(param_3);
    func_0x00010bf20c00(param_3);
    func_0x00010bf20c00(param_3);
    func_0x00010bf20c00(param_3);
    ppuVar2 = (undefined1 **)param_3;
  }
  _CGRectContainsPoint();
LAB_10b86799c:
  _objc_release(param_5);
  return (undefined1 *)ppuVar2;
}



/* Entry: 10b8679d0; end: 10b867a37; -[SIGNavigationBarButton _expandedTapAreaWithTopInset:] */

undefined8 FUN_10b8679d0(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bf20c00();
  func_0x00010bf20c00(param_2);
  func_0x00010bf20c00(param_2);
  func_0x00010bf20c00(param_2);
  return param_1;
}



/* Entry: 10b867a38; end: 10b867a87; -[SIGNavigationBarButton navigationBarButtonItem:didChangeShowBackgroundPillWhenSelected:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b867a38(long param_1)

{
  long lVar1;
  ulong uVar2;
  double dVar3;
  
  func_0x00010bdc48c0();
  lVar1 = param_1;
  func_0x00010c07d660();
  dVar3 = 0.0;
  if ((int)lVar1 != 0) {
    uVar2 = *(ulong *)(param_1 + _DAT_112794fc4);
    func_0x00010c236040(0,uVar2);
    dVar3 = (double)(uVar2 & 0xffffffff);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (dVar3,*(undefined8 *)(param_1 + _DAT_112794fe0),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 10b867a88; end: 10b867a8b; -[SIGNavigationBarButton navigationBarButtonItem:didChangeHideLabel:] */

void FUN_10b867a88(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be2a7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handleHideLabelUpdate_112568390);
  return;
}



/* Entry: 10b867a8c; end: 10b867ac7; -[SIGNavigationBarButton navigationBarButtonItem:didChangeTooltipOption:oldTooltipOption:] */

void FUN_10b867a8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  func_0x00010c071ae0(param_4,param_2,param_5);
  if ((param_4 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be7efd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentTooltip_11257d590);
  return;
}



/* Entry: 10b867ac8; end: 10b867b37; -[SIGNavigationBarButton navigationBarButtonItem:didChangeHideBadgeView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b867ac8(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  iVar1 = (int)*(undefined8 *)(param_1 + _DAT_112794ff8);
  func_0x00010c074c20();
  lVar3 = (long)_DAT_112794fc4;
  iVar2 = (int)*(undefined8 *)(param_1 + lVar3);
  func_0x00010bfe19a0();
  if (iVar1 != iVar2) {
    lVar3 = *(long *)(param_1 + lVar3);
    func_0x00010bf151a0();
    if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bed3dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_1,PTR_s__updateBadgeViewVisibilityIfNeed_112592918);
      return;
    }
  }
  return;
}



/* Entry: 10b867b38; end: 10b867b57; -[SIGNavigationBarButton delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b867b38(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112795010);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b867b58; end: 10b867b6b; -[SIGNavigationBarButton setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b867b58(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112795010,param_3);
  return;
}



/* Entry: 10b867b6c; end: 10b867c43; -[SIGNavigationBarButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b867b6c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112795000,0);
  _objc_destroyWeak(param_1 + _DAT_112795010);
  _objc_storeStrong(param_1 + _DAT_112794fc4,0);
  _objc_storeStrong(param_1 + _DAT_11279500c,0);
  _objc_storeStrong(param_1 + _DAT_112794fe0,0);
  _objc_destroyWeak(param_1 + _DAT_112795008);
  _objc_storeStrong(param_1 + _DAT_112795004,0);
  _objc_storeStrong(param_1 + _DAT_112794ff0,0);
  _objc_storeStrong(param_1 + _DAT_112794ff8,0);
  _objc_storeStrong(param_1 + _DAT_112794ff4,0);
  _objc_storeStrong(param_1 + _DAT_112794fe4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112794fe8,0);
  return;
}



/* Entry: 10b867c44; end: 10b867c67; -[SIGNavigationBarButtonImageView initWithImage:highlightImage:highlightTintColor:highlightLabelColor:] */

void FUN_10b867c44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
                    /* WARNING: Could not recover jumptable at 0x00010c01c0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x4000000000000000,0x4010000000000000,0x3fe0000000000000,0x3ff0000000000000,param_1,
             PTR_s_initWithImage_highlightImage_def_1125e4a18,param_3,param_4,0,param_5,param_6,4);
  return;
}



/* Entry: 10b867c68; end: 10b867c8b; -[SIGNavigationBarButtonImageView setIgnoreOverrideTintColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b867c68(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112795058) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c1fae10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setSelected_overrideTintColor__11265c5a8,
             *(undefined1 *)(param_1 + _DAT_112795038),*(undefined8 *)(param_1 + _DAT_112795040));
  return;
}



/* Entry: 10b867c8c; end: 10b867cfb; -[SIGNavigationBarButtonImageView setHighlightImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b867c8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112795018);
  *(undefined8 *)(param_1 + _DAT_112795018) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010c1fae00(param_1,param_2,*(undefined1 *)(param_1 + _DAT_112795038),
                      *(undefined8 *)(param_1 + _DAT_112795040));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b867cfc; end: 10b867d2b; -[SIGNavigationBarButtonImageView defaultImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b867cfc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112795014);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b867d2c; end: 10b867d3b; -[SIGNavigationBarButtonImageView setHighlightTintColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b867d2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112795020) = param_3;
  return;
}



/* Entry: 10b867d3c; end: 10b867e0f; -[SIGNavigationBarButtonImageView _generateBadgeCutOutMask] */

void FUN_10b867d3c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
  func_0x00010c08c0e0(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00(param_1);
  func_0x00010c19f0e0(puVar1);
  func_0x00010bdd8460(param_1);
  puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf199a0(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf20c00(param_1);
  func_0x00010bf199c0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06f40();
  func_0x00010c19bc80(puVar1,param_2,*(undefined8 *)PTR__kCAFillRuleEvenOdd_110346ce8);
  puVar4 = puVar3;
  _objc_retainAutorelease(puVar3);
  func_0x00010bdc1040();
  func_0x00010c1d9820(puVar1,param_2,puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b867e10; end: 10b867ef3; -[SIGNavigationBarButtonImageView _calculateBadgeCutOutRect] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_10b867e10(double param_1,undefined8 param_2,double param_3,long param_4)

{
  long lVar1;
  double dVar2;
  
  if (((*(byte *)(param_4 + _DAT_112795048) & 1) == 0) &&
     (*(char *)(param_4 + _DAT_11279504c) != '\x01')) {
    func_0x00010bdd2620(param_4);
  }
  else {
    func_0x00010bdd2740(param_4);
  }
  dVar2 = *(double *)(param_4 + _DAT_112795028);
  lVar1 = param_4;
  func_0x00010bf8d060();
  if (lVar1 == 1) {
    dVar2 = (double)(long)-dVar2;
  }
  else {
    func_0x00010bf20c00(param_4);
    dVar2 = (param_3 - (double)(long)-dVar2) - (double)(long)param_1;
  }
  func_0x00010bf20c00(param_4);
  return dVar2;
}



/* Entry: 10b867ef4; end: 10b867f0b; -[SIGNavigationBarButtonImageView _badgeShowCountFullViewSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_10b867ef4(long param_1)

{
  return *(double *)(param_1 + _DAT_112795034) * 20.0;
}



/* Entry: 10b867f0c; end: 10b867f23; -[SIGNavigationBarButtonImageView _badgeBlankFullViewSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_10b867f0c(long param_1)

{
  return *(double *)(param_1 + _DAT_112795034) * 20.0;
}



/* Entry: 10b867f24; end: 10b867fa3; -[SIGNavigationBarButtonImageView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b867f24(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112795040,0);
  _objc_storeStrong(param_1 + _DAT_112795054,0);
  _objc_storeStrong(param_1 + _DAT_112795050,0);
  _objc_storeStrong(param_1 + _DAT_11279501c,0);
  _objc_storeStrong(param_1 + _DAT_112795018,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112795014,0);
  return;
}



/* Entry: 10b867fa4; end: 10b867fa7; +[SIGNavigationBarButtonItem navigationBarTemplate] */

void FUN_10b867fa4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d65b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_navigationBarTemplateWithEmptyIm_112613380);
  return;
}



/* Entry: 10b867fa8; end: 10b868057; +[SIGNavigationBarButtonItem navigationBarButtonItemWithView:title:accessibilityLabel:target:selector:] */

void FUN_10b867fa8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c56d0;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c061500();
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b868058; end: 10b8680ab; -[SIGNavigationBarButtonItem setShowBackgroundPillWhenSelected:] */

void FUN_10b868058(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined1 *)(param_1 + 0x13) = param_3;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10b8680ac;
  puStack_20 = &UNK_110d62ca0;
  lStack_18 = param_1;
  func_0x00010bfb47e0(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 10b8680ac; end: 10b8680fb;  */

void FUN_10b8680ac(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  _objc_opt_respondsToSelector(param_2,PTR_s_navigationBarButtonItem_didChang_112613330);
  if ((uVar1 & 1) != 0) {
    func_0x00010c0d6460(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b8680fc; end: 10b86814f; -[SIGNavigationBarButtonItem setHideBadgeView:] */

void FUN_10b8680fc(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined1 *)(param_1 + 0x11) = param_3;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10b868150;
  puStack_20 = &UNK_110d62ca0;
  lStack_18 = param_1;
  func_0x00010bfb47e0(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 10b868150; end: 10b86819f;  */

void FUN_10b868150(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  _objc_opt_respondsToSelector(param_2,PTR_s_navigationBarButtonItem_didChang_112613308);
  if ((uVar1 & 1) != 0) {
    func_0x00010c0d63c0(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b8681a0; end: 10b8681f3; -[SIGNavigationBarButtonItem setHideLabel:] */

void FUN_10b8681a0(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined1 *)(param_1 + 0x12) = param_3;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10b8681f4;
  puStack_20 = &UNK_110d62ca0;
  lStack_18 = param_1;
  func_0x00010bfb47e0(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 10b8681f4; end: 10b868243;  */

void FUN_10b8681f4(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  _objc_opt_respondsToSelector(param_2,PTR_s_navigationBarButtonItem_didChang_112613310);
  if ((uVar1 & 1) != 0) {
    func_0x00010c0d63e0(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b868244; end: 10b8682fb; -[SIGNavigationBarButtonItem setTooltipOption:] */

void FUN_10b868244(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10b8682fc;
  puStack_48 = &UNK_110d62cd0;
  lStack_40 = param_1;
  uStack_38 = uVar1;
  _objc_retain(uVar1);
  func_0x00010bfb47e0(param_1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 10b8682fc; end: 10b86834b;  */

void FUN_10b8682fc(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  _objc_opt_respondsToSelector(param_2,PTR_s_navigationBarButtonItem_didChang_112613348);
  if ((uVar1 & 1) != 0) {
    func_0x00010c0d64c0(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b86834c; end: 10b868353; -[SIGNavigationBarButtonItem presentTooltipWithText:] */

void FUN_10b86834c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10e930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x4000000000000000,param_1,PTR_s_presentTooltipWithText_duration__112621468);
  return;
}



/* Entry: 10b868354; end: 10b86835b; -[SIGNavigationBarButtonItem presentTooltipWithText:duration:] */

void FUN_10b868354(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10e950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_presentTooltipWithText_duration__112621470,param_3,0);
  return;
}



/* Entry: 10b86835c; end: 10b868367; -[SIGNavigationBarButtonItem presentTooltipWithText:duration:style:] */

void FUN_10b86835c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10e970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_presentTooltipWithText_duration__112621478,param_3,param_4,0,0);
  return;
}



/* Entry: 10b868368; end: 10b86836b; -[SIGNavigationBarButtonItem presentTooltipWithText:duration:style:trailingAccessoryView:delegate:] */

void FUN_10b868368(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be7f030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentTooltipWithText_duration_11257d5a8);
  return;
}



/* Entry: 10b86836c; end: 10b86841f; -[SIGNavigationBarButtonItem _presentTooltipWithText:duration:style:trailingAccessoryView:delegate:] */

void FUN_10b86836c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e17a0;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  func_0x00010c051680(param_1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  func_0x00010c217180(param_2,param_3,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b868420; end: 10b868433; -[SIGNavigationBarButtonItem dismissTooltipIfPresented] */

void FUN_10b868420(long param_1)

{
  if (*(long *)(param_1 + 0xa8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c217190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setTooltipOption__112663688,0);
    return;
  }
  return;
}



/* Entry: 10b868434; end: 10b8684b3; -[SIGNavigationBarButtonItem removeObserver:] */

void FUN_10b868434(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 8);
  if ((lVar1 != 0) && (func_0x00010bf529e0(), lVar1 != 0)) {
    uVar3 = 0;
    do {
      lVar1 = *(long *)(param_1 + 8);
      func_0x00010c102e00(lVar1,param_2,uVar3);
      if (lVar1 == param_3) {
        func_0x00010c12dc20(*(undefined8 *)(param_1 + 8),param_2,uVar3);
        break;
      }
      uVar3 = uVar3 + 1;
      uVar2 = *(ulong *)(param_1 + 8);
      func_0x00010bf529e0();
    } while (uVar3 < uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b8684b4; end: 10b8684cb; -[SIGNavigationBarButtonItem target] */

void FUN_10b8684b4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b8684cc; end: 10b8684d3; -[SIGNavigationBarButtonItem selector] */

undefined8 FUN_10b8684cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 10b8684d4; end: 10b8684db; -[SIGNavigationBarButtonItem action] */

undefined8 FUN_10b8684d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 10b8684dc; end: 10b8685bb; -[SIGNavigationBarButtonItem .cxx_destruct] */

void FUN_10b8684dc(long param_1)

{
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_destroyWeak(param_1 + 0x78);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108fb6ba8; end: 108fb6bc7; -[SCSnapchatterVerticalAvatarThumbnailView actionHandlingDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb6ba8(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277ef08);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108fb6bc8; end: 108fb6bdb; -[SCSnapchatterVerticalAvatarThumbnailView setActionHandlingDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb6bc8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277ef08,param_3);
  return;
}



/* Entry: 108fb6bdc; end: 108fb6c57; -[SCSnapchatterVerticalAvatarThumbnailView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb6bdc(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11277ef08);
  _objc_storeStrong(param_1 + _DAT_11277ef04,0);
  _objc_storeStrong(param_1 + _DAT_11277ef0c,0);
  _objc_storeStrong(param_1 + _DAT_11277ef00,0);
  _objc_storeStrong(param_1 + _DAT_11277ef10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277eefc,0);
  return;
}



/* Entry: 108fb6c58; end: 108fb6d97; -[SCSnapchatterVerticalBasicInfoView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108fb6c58(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126ffa40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_opt_new();
    lVar4 = (long)_DAT_11277ef14;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010c17d4c0(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010c213040(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_opt_new();
    lVar4 = (long)_DAT_11277ef18;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010c17d4c0(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010c213040(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010c165e20(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_opt_new();
    lVar4 = (long)_DAT_11277ef1c;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010c17d4c0(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010c213040(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010c165e20(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010befbb60(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108fb6d98; end: 108fb6f5b; -[SCSnapchatterVerticalBasicInfoView setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb6d98(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  
  _objc_retain(param_4);
  lVar5 = (long)_DAT_11277ef20;
  uVar4 = *(ulong *)(param_2 + lVar5);
  _objc_retain(uVar4);
  _objc_retain(param_4);
  if (uVar4 == param_4) {
    _objc_release(param_4);
    _objc_release(uVar4);
  }
  else {
    if (param_4 == 0) {
      _objc_release(uVar4);
    }
    else {
      uVar1 = uVar4;
      func_0x00010c071ae0();
      _objc_release(param_4);
      _objc_release(uVar4);
      if ((uVar1 & 1) != 0) goto LAB_108fb6f40;
    }
    puVar2 = PTR_PTR_1126d77a8;
    _objc_retain(param_4);
    _objc_opt_class(puVar2);
    uVar1 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar2);
    uVar4 = param_4;
    if ((uVar1 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(param_4);
    uVar1 = uVar4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)(param_2 + lVar5);
    *(ulong *)(param_2 + lVar5) = uVar1;
    _objc_release(uVar3);
    uVar1 = uVar4;
    func_0x00010c112ee0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b720(*(undefined8 *)(param_2 + _DAT_11277ef14));
    _objc_release(uVar1);
    uVar1 = uVar4;
    func_0x00010c154fc0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b720(*(undefined8 *)(param_2 + _DAT_11277ef18));
    _objc_release(uVar1);
    uVar1 = uVar4;
    func_0x00010c26b580(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b720(*(undefined8 *)(param_2 + _DAT_11277ef1c));
    _objc_release(uVar1);
    func_0x00010c112fc0(uVar4);
    *(undefined8 *)(param_2 + _DAT_11277ef24) = param_1;
    func_0x00010c155100(uVar4);
    _objc_release(uVar4);
    *(undefined8 *)(param_2 + _DAT_11277ef28) = param_1;
    func_0x00010c1cbe20(param_2);
  }
LAB_108fb6f40:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108fb6f5c; end: 108fb71a7; -[SCSnapchatterVerticalBasicInfoView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb6f5c(double param_1,double param_2,undefined8 param_3,double param_4,long param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  long lStack_90;
  undefined *puStack_88;
  
  puStack_88 = PTR_PTR_1126ffa40;
  lStack_90 = param_5;
  _objc_msgSendSuper2(&lStack_90,PTR_s_layoutSubviews_112600e60);
  puVar2 = PTR_PTR_1126d77a8;
  uVar4 = *(ulong *)(param_5 + _DAT_11277ef20);
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
  func_0x00010bf20c00(param_5);
  _CGRectGetWidth();
  dVar8 = param_1;
  func_0x00010bf4c7e0(uVar1);
  func_0x00010bf4c7e0(uVar1);
  param_4 = (param_1 - param_2) - param_4;
  func_0x00010bf20c00(param_5);
  _CGRectGetHeight();
  lVar5 = (long)_DAT_11277ef14;
  dVar11 = dVar8;
  func_0x00010c23d5a0(param_4,*(undefined8 *)(param_5 + lVar5));
  lVar6 = (long)_DAT_11277ef18;
  dVar12 = dVar8 - dVar11;
  func_0x00010c23d5a0(param_4,*(undefined8 *)(param_5 + lVar6));
  lVar7 = (long)_DAT_11277ef1c;
  dVar13 = (dVar8 - dVar11) - dVar12;
  func_0x00010c23d5a0(param_4,*(undefined8 *)(param_5 + lVar7));
  dVar9 = dVar13;
  func_0x00010bf4c7e0(uVar1);
  uVar14 = 0;
  dVar17 = param_4;
  func_0x00010b8162e0(dVar9,0,param_4,dVar11);
  dVar8 = dVar9;
  _CGRectGetMinX();
  dVar15 = dVar9;
  _CGRectGetMaxY(dVar9,uVar14,dVar17,dVar11);
  dVar15 = dVar15 + *(double *)(param_5 + _DAT_11277ef24);
  dVar18 = param_4;
  func_0x00010b8162e0(dVar8,dVar15,param_4,dVar12);
  dVar10 = dVar8;
  _CGRectGetMinX();
  dVar16 = dVar8;
  _CGRectGetMaxY(dVar8,dVar15,dVar18,dVar12);
  dVar16 = dVar16 + *(double *)(param_5 + _DAT_11277ef28);
  func_0x00010b8162e0(dVar10,dVar16);
  func_0x00010c19f0e0(dVar9,uVar14,dVar17,dVar11,*(undefined8 *)(param_5 + lVar5));
  func_0x00010c19f0e0(dVar8,dVar15,dVar18,dVar12,*(undefined8 *)(param_5 + lVar6));
  func_0x00010c19f0e0(dVar10,dVar16,param_4,dVar13,*(undefined8 *)(param_5 + lVar7));
  _objc_release(uVar1);
  return;
}



/* Entry: 108fb71a8; end: 108fb71b7; -[SCSnapchatterVerticalBasicInfoView viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108fb71a8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277ef20);
}



/* Entry: 108fb71b8; end: 108fb7217; -[SCSnapchatterVerticalBasicInfoView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb71b8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277ef20,0);
  _objc_storeStrong(param_1 + _DAT_11277ef1c,0);
  _objc_storeStrong(param_1 + _DAT_11277ef18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277ef14,0);
  return;
}



/* Entry: 108fb7218; end: 108fb72f7; -[SCSnapchatterVerticalButtonAccessoaryView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108fb7218(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126ffa48;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b56f8;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    lVar5 = (long)_DAT_11277ef2c;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    func_0x00010c050900();
    lVar4 = (long)_DAT_11277ef30;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010bef9040(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010befbb60(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108fb72f8; end: 108fb7423; -[SCSnapchatterVerticalButtonAccessoaryView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb72f8(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,
                  long param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  long lStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126ffa48;
  lStack_60 = param_5;
  _objc_msgSendSuper2(&lStack_60,PTR_s_layoutSubviews_112600e60);
  puVar2 = PTR_PTR_1126d5b90;
  uVar4 = *(ulong *)(param_5 + _DAT_11277ef34);
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
  lVar6 = (long)_DAT_11277ef2c;
  uVar5 = *(undefined8 *)(param_5 + lVar6);
  func_0x00010bf20c00(param_5);
  func_0x00010c23d5a0(param_3,param_4,uVar5);
  dVar7 = param_3;
  func_0x00010bf20c00(param_5);
  _CGRectGetWidth();
  dVar7 = dVar7 + -10.0;
  dVar8 = dVar7;
  if (param_3 <= dVar7) {
    dVar8 = param_3;
  }
  func_0x00010bf20c00(param_5);
  _CGRectGetWidth();
  dVar7 = dVar7 - dVar8;
  dVar9 = dVar7 * 0.5;
  func_0x00010bf4c7e0(uVar1);
  func_0x00010b816528(dVar9,dVar7,dVar8,param_4);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar6));
  _objc_release(uVar1);
  return;
}



/* Entry: 108fb7424; end: 108fb74fb; -[SCSnapchatterVerticalButtonAccessoaryView sizeThatFits:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_108fb7424(double param_1,double param_2,double param_3,long param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  
  puVar2 = PTR_PTR_1126d5b90;
  uVar4 = *(ulong *)(param_4 + _DAT_11277ef34);
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
  dVar5 = param_1;
  func_0x00010c23d5a0(param_1,param_2,*(undefined8 *)(param_4 + _DAT_11277ef2c));
  func_0x00010bf4c7e0(uVar1);
  dVar6 = dVar5;
  func_0x00010bf4c7e0(uVar1);
  func_0x00010beee140(uVar1);
  _objc_release(uVar1);
  auVar7._8_8_ = param_2 + dVar6 + dVar5 + param_3;
  auVar7._0_8_ = param_1;
  return auVar7;
}



/* Entry: 108fb74fc; end: 108fb7637; -[SCSnapchatterVerticalButtonAccessoaryView setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb74fc(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_11277ef34;
  uVar4 = *(ulong *)(param_1 + lVar5);
  _objc_retain(uVar4);
  _objc_retain(param_3);
  if (uVar4 == param_3) {
    _objc_release(param_3);
    _objc_release(uVar4);
  }
  else {
    if (param_3 == 0) {
      _objc_release(uVar4);
    }
    else {
      uVar1 = uVar4;
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(uVar4);
      if ((uVar1 & 1) != 0) goto LAB_108fb7620;
    }
    puVar2 = PTR_PTR_1126d5b90;
    _objc_retain(param_3);
    _objc_opt_class(puVar2);
    uVar1 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    uVar4 = param_3;
    if ((uVar1 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(param_3);
    uVar1 = uVar4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(ulong *)(param_1 + lVar5) = uVar1;
    _objc_release(uVar3);
    uVar1 = uVar4;
    func_0x00010beee1c0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    func_0x00010c2226c0(*(undefined8 *)(param_1 + _DAT_11277ef2c));
    _objc_release(uVar1);
    func_0x00010c1cbe20(param_1);
  }
LAB_108fb7620:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108fb7638; end: 108fb76a7; -[SCSnapchatterVerticalButtonAccessoaryView _handleButtonTap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb7638(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1 + _DAT_11277ef38;
  _objc_loadWeakRetained(lVar1);
  lVar3 = (long)_DAT_11277ef2c;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010beeecc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd00e0(lVar1,param_2,uVar2,*(undefined8 *)(param_1 + lVar3));
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108fb76a8; end: 108fb76fb; -[SCSnapchatterVerticalButtonAccessoaryView gestureRecognizer:shouldReceiveTouch:] */

uint FUN_108fb76a8(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 in_x3;
  
  func_0x00010c29bf00(in_x3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b56f8;
  _objc_opt_class(PTR_PTR_1126b56f8);
  uVar2 = in_x3;
  _objc_opt_isKindOfClass(in_x3,puVar1);
  _objc_release(in_x3);
  return (uint)uVar2 & 1;
}



/* Entry: 108fb76fc; end: 108fb770b; -[SCSnapchatterVerticalButtonAccessoaryView viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108fb76fc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277ef34);
}



/* Entry: 108fb770c; end: 108fb772b; -[SCSnapchatterVerticalButtonAccessoaryView actionHandlingDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb770c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277ef38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108fb772c; end: 108fb773f; -[SCSnapchatterVerticalButtonAccessoaryView setActionHandlingDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb772c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277ef38,param_3);
  return;
}



/* Entry: 108fb7740; end: 108fb779b; -[SCSnapchatterVerticalButtonAccessoaryView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb7740(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11277ef38);
  _objc_storeStrong(param_1 + _DAT_11277ef34,0);
  _objc_storeStrong(param_1 + _DAT_11277ef30,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277ef2c,0);
  return;
}



/* Entry: 108fb779c; end: 108fb787b; -[SCSnapchatterVerticalView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108fb779c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126ffa50;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277ef3c);
    *(undefined **)((long)puVar1 + (long)_DAT_11277ef3c) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277ef40);
    *(undefined **)((long)puVar1 + (long)_DAT_11277ef40) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277ef44);
    *(undefined **)((long)puVar1 + (long)_DAT_11277ef44) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108fb787c; end: 108fb790b;  */

void FUN_108fb787c(void)

{
  _objc_alloc(PTR_PTR_1126dccf0);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108fb790c; end: 108fb7b5b; -[SCSnapchatterVerticalView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb790c(double param_1,undefined8 param_2,undefined8 param_3,double param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  double dVar14;
  long lStack_80;
  undefined *puStack_78;
  
  puStack_78 = PTR_PTR_1126ffa50;
  lStack_80 = param_5;
  _objc_msgSendSuper2(&lStack_80,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_5);
  lVar1 = (long)_DAT_11277ef48;
  uVar3 = param_3;
  dVar10 = param_4;
  func_0x00010c23d5a0(*(undefined8 *)(param_5 + lVar1));
  dVar4 = param_1;
  _CGRectGetMinX(param_1,param_2,param_3,param_4);
  dVar5 = param_1;
  _CGRectGetMinY(param_1,param_2,param_3,param_4);
  uVar13 = uVar3;
  func_0x00010b816528(dVar4,dVar5,uVar3);
  lVar2 = (long)_DAT_11277ef4c;
  uVar6 = param_3;
  dVar11 = param_4;
  func_0x00010c23d5a0(*(undefined8 *)(param_5 + lVar2));
  dVar7 = param_1;
  _CGRectGetMinX(param_1,param_2,param_3,param_4);
  dVar12 = param_1;
  _CGRectGetMaxY(param_1,param_2,param_3,param_4);
  dVar12 = dVar12 - dVar11;
  func_0x00010b816528();
  dVar14 = dVar7;
  _CGRectGetMinY();
  if (dVar14 == 0.0) {
    dVar14 = param_1;
    _CGRectGetMaxY(param_1,param_2,param_3,param_4);
  }
  _CGRectGetMinX(param_1,param_2,param_3,param_4);
  dVar8 = dVar4;
  _CGRectGetMaxY(dVar4,dVar5,uVar13,dVar10);
  dVar9 = dVar4;
  _CGRectGetMaxY(dVar4,dVar5,uVar13,dVar10);
  dVar14 = dVar14 - dVar9;
  func_0x00010b816528(param_1,dVar8,uVar3,dVar14);
  func_0x00010b8166f8(dVar4,dVar5,uVar13,dVar10,param_5);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar1));
  func_0x00010b8166f8(dVar7,dVar12,uVar6,dVar11,param_5);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar2));
  func_0x00010b8166f8(param_1,dVar8,uVar3,dVar14,param_5);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + _DAT_11277ef50));
  return;
}



/* Entry: 108fb7b5c; end: 108fb7d73; -[SCSnapchatterVerticalView setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb7b5c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_11277ef54;
  uVar4 = *(ulong *)(param_1 + lVar5);
  _objc_retain(uVar4);
  _objc_retain(param_3);
  if (uVar4 == param_3) {
    _objc_release(param_3);
  }
  else {
    if (param_3 == 0) {
      _objc_release(uVar4);
    }
    else {
      uVar1 = uVar4;
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(uVar4);
      if ((uVar1 & 1) != 0) goto LAB_108fb7d2c;
    }
    puVar2 = PTR_PTR_1126cb050;
    _objc_retain(param_3);
    _objc_opt_class(puVar2);
    uVar1 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    uVar4 = param_3;
    if ((uVar1 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(param_3);
    uVar1 = uVar4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(ulong *)(param_1 + lVar5) = uVar1;
    _objc_release(uVar3);
    uVar1 = uVar4;
    func_0x00010bfee120(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bed9ac0(param_1);
    _objc_release(uVar1);
    uVar1 = uVar4;
    func_0x00010c26e5c0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bee1fe0(param_1);
    _objc_release(uVar1);
    _objc_initWeak(auStack_48,param_1);
    uVar1 = uVar4;
    func_0x00010beed3c0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010c0bccc0(uVar1);
    _objc_release(uVar1);
    func_0x00010c1cbe20(param_1);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(uVar4);
LAB_108fb7d2c:
  _objc_release(param_3);
  return;
}



/* Entry: 108fb7d74; end: 108fb7dbb;  */

void FUN_108fb7d74(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed4520();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108fb7dbc; end: 108fb7ee7; -[SCSnapchatterVerticalView setActionHandlingDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb7dbc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + _DAT_11277ef58,param_3);
  puVar1 = PTR_DAT_1126a5b70;
  lVar4 = (long)_DAT_11277ef48;
  lVar3 = *(long *)(param_1 + lVar4);
  _objc_retain(lVar3);
  lVar2 = lVar3;
  func_0x000107c318f8(lVar3,puVar1);
  _objc_release(lVar3);
  if ((int)lVar2 != 0 && lVar3 != 0) {
    func_0x00010c1619c0(*(undefined8 *)(param_1 + lVar4));
  }
  puVar1 = PTR_DAT_1126a5b70;
  lVar4 = (long)_DAT_11277ef50;
  lVar3 = *(long *)(param_1 + lVar4);
  _objc_retain(lVar3);
  lVar2 = lVar3;
  func_0x000107c318f8(lVar3,puVar1);
  _objc_release(lVar3);
  if ((int)lVar2 != 0 && lVar3 != 0) {
    func_0x00010c1619c0(*(undefined8 *)(param_1 + lVar4));
  }
  puVar1 = PTR_DAT_1126a5b70;
  lVar4 = (long)_DAT_11277ef4c;
  lVar3 = *(long *)(param_1 + lVar4);
  _objc_retain(lVar3);
  lVar2 = lVar3;
  func_0x000107c318f8(lVar3,puVar1);
  _objc_release(lVar3);
  if ((int)lVar2 != 0 && lVar3 != 0) {
    func_0x00010c1619c0(*(undefined8 *)(param_1 + lVar4));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108fb7ee8; end: 108fb7f5f; -[SCSnapchatterVerticalView setImageDownloader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb7ee8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_11277ef5c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = param_3;
  _objc_release(uVar1);
  lVar3 = (long)_DAT_11277ef48;
  uVar2 = *(ulong *)(param_1 + lVar3);
  _objc_opt_respondsToSelector(uVar2,PTR_s_setImageDownloader__1126482a8);
  if ((uVar2 & 1) != 0) {
    func_0x00010c1aa200(*(undefined8 *)(param_1 + lVar3));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108fb7f60; end: 108fb8023; -[SCSnapchatterVerticalView _updateInfoViewWithInfoViewModel:] */

void FUN_108fb7f60(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    _objc_initWeak(auStack_28,param_1);
    _objc_copyWeak(auStack_30,auStack_28);
    func_0x00010c0bca80(param_3);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 108fb8024; end: 108fb806b;  */

void FUN_108fb8024(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed9aa0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108fb806c; end: 108fb806f;  */

void FUN_108fb806c(void)

{
  return;
}



/* Entry: 108fb8070; end: 108fb8193; -[SCSnapchatterVerticalView _updateInfoViewWithBasicInfoViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb8070(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = (long)_DAT_11277ef3c;
  lVar3 = *(long *)(param_1 + lVar4);
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 == 0) {
    func_0x00010bf57500(*(undefined8 *)(param_1 + lVar4));
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(param_1,param_2,uVar1);
    _objc_release(uVar1);
  }
  lVar5 = (long)_DAT_11277ef50;
  lVar6 = *(long *)(param_1 + lVar5);
  lVar3 = *(long *)(param_1 + lVar4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar6 != lVar3) {
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar5),param_2,1);
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    *(undefined8 *)(param_1 + lVar5) = uVar1;
    _objc_release(uVar2);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar5),param_2,0);
  }
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108fb8194; end: 108fb831f; -[SCSnapchatterVerticalView _updateThumbanilViewWithThumbanilViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb8194(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  if (param_3 != 0) {
    lVar6 = (long)_DAT_11277ef40;
    lVar5 = *(long *)(param_1 + lVar6);
    _objc_retain(param_3);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar5 == 0) {
      func_0x00010bf57500(*(undefined8 *)(param_1 + lVar6));
      _objc_unsafeClaimAutoreleasedReturnValue();
      lVar5 = param_1 + _DAT_11277ef58;
      _objc_loadWeakRetained(lVar5);
      uVar1 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1619c0();
      _objc_release(uVar1);
      _objc_release(lVar5);
      uVar2 = *(ulong *)(param_1 + lVar6);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      _objc_opt_respondsToSelector();
      _objc_release(uVar2);
      if ((uVar3 & 1) != 0) {
        uVar1 = *(undefined8 *)(param_1 + lVar6);
        func_0x00010c269d40(uVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1aa200();
        _objc_release(uVar1);
      }
      uVar1 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60(param_1);
      _objc_release(uVar1);
    }
    uVar1 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + _DAT_11277ef48);
    *(undefined8 *)(param_1 + _DAT_11277ef48) = uVar1;
    _objc_release(uVar4);
    uVar1 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2226c0();
    _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 108fb8320; end: 108fb844f; -[SCSnapchatterVerticalView _updateButtonAccessoryViewWithButtonAccessoryViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb8320(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  if (param_3 != 0) {
    lVar4 = (long)_DAT_11277ef44;
    lVar3 = *(long *)(param_1 + lVar4);
    _objc_retain(param_3);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 == 0) {
      func_0x00010bf57500(*(undefined8 *)(param_1 + lVar4));
      _objc_unsafeClaimAutoreleasedReturnValue();
      lVar3 = param_1 + _DAT_11277ef58;
      _objc_loadWeakRetained(lVar3);
      uVar1 = *(undefined8 *)(param_1 + lVar4);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1619c0();
      _objc_release(uVar1);
      _objc_release(lVar3);
      uVar1 = *(undefined8 *)(param_1 + lVar4);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60(param_1,param_2,uVar1);
      _objc_release(uVar1);
    }
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + _DAT_11277ef4c);
    *(undefined8 *)(param_1 + _DAT_11277ef4c) = uVar1;
    _objc_release(uVar2);
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2226c0();
    _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 108fb8450; end: 108fb845f; -[SCSnapchatterVerticalView viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108fb8450(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277ef54);
}



/* Entry: 108fb8460; end: 108fb847f; -[SCSnapchatterVerticalView actionHandlingDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb8460(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277ef58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108fb8480; end: 108fb852b; -[SCSnapchatterVerticalView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fb8480(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11277ef58);
  _objc_storeStrong(param_1 + _DAT_11277ef54,0);
  _objc_storeStrong(param_1 + _DAT_11277ef5c,0);
  _objc_storeStrong(param_1 + _DAT_11277ef48,0);
  _objc_storeStrong(param_1 + _DAT_11277ef4c,0);
  _objc_storeStrong(param_1 + _DAT_11277ef50,0);
  _objc_storeStrong(param_1 + _DAT_11277ef44,0);
  _objc_storeStrong(param_1 + _DAT_11277ef40,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277ef3c,0);
  return;
}



/* Entry: 108fb852c; end: 108fb86cb; -[SCSnapchatterCollectionViewCellViewModel initWithSnapchatterViewModel:longPressActionModel:singleTapActionModel:backgroundShadowViewModel:preferredSize:backgroundColor:cornerRadius:borderColor:borderWidth:externalEdges:] */

undefined1 *
FUN_108fb852c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar1 = &uStack_80;
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puStack_78 = PTR_PTR_1126ffa58;
  uStack_80 = param_5;
  _objc_msgSendSuper2(&uStack_80,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x50) = param_1;
    *(undefined8 *)((long)puVar1 + 0x58) = param_2;
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x30) = param_3;
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x40) = param_4;
    *(undefined8 *)((long)puVar1 + 0x48) = param_13;
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 108fb86cc; end: 108fb86ef; -[SCSnapchatterCollectionViewCellViewModel copyWithZone:] */

undefined8 FUN_108fb86cc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108fb86f0; end: 108fb881b; -[SCSnapchatterCollectionViewCellViewModel hash] */

undefined8 * FUN_108fb86f0(long param_1,undefined8 param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined1 *puVar9;
  double dVar10;
  double dVar11;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar5 = &uStack_80;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uStack_80 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_78 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uStack_70 = uVar2;
  func_0x00010bfde980();
  uVar8 = ~*(ulong *)(param_1 + 0x50) + *(ulong *)(param_1 + 0x50) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_60 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_60 = uStack_60 ^ uStack_60 >> 0x16;
  uVar8 = ~*(ulong *)(param_1 + 0x58) + *(ulong *)(param_1 + 0x58) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_58 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_58 = uStack_58 ^ uStack_58 >> 0x16;
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uStack_68 = uVar3;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uVar8 = ~*(ulong *)(param_1 + 0x30) + *(ulong *)(param_1 + 0x30) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_48 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_48 = uStack_48 ^ uStack_48 >> 0x16;
  uStack_50 = uVar4;
  func_0x00010bfde980();
  uStack_30 = *(undefined8 *)(param_1 + 0x48);
  uVar8 = ~*(ulong *)(param_1 + 0x40) + *(ulong *)(param_1 + 0x40) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_38 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uStack_40 = uVar2;
  func_0x000107c3191c(&uStack_80,0xb);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar5 == (undefined8 *)param_3) {
LAB_108fb8998:
    puVar9 = (undefined1 *)0x1;
  }
  else {
    puVar9 = (undefined1 *)0x0;
    if ((puVar5 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_108fb89a4;
    puVar9 = (undefined1 *)puVar5;
    _objc_opt_class(puVar5);
    puVar6 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar9);
    if ((((ulong)puVar6 & 1) != 0) && (*(long *)((long)puVar5 + 0x48) == *(long *)(param_3 + 0x48)))
    {
      puVar9 = (undefined1 *)0x0;
      if ((*(double *)((long)puVar5 + 0x50) != *(double *)(param_3 + 0x50)) ||
         (*(double *)((long)puVar5 + 0x58) != *(double *)(param_3 + 0x58))) goto LAB_108fb89a4;
      dVar11 = ABS(*(double *)((long)puVar5 + 0x30) - *(double *)(param_3 + 0x30));
      dVar10 = ABS(*(double *)((long)puVar5 + 0x30) + *(double *)(param_3 + 0x30)) *
               2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar11) && (bVar1 = false, !NAN(dVar11) && !NAN(dVar10))) {
        bVar1 = dVar11 < dVar10;
      }
      if (bVar1) {
        dVar11 = ABS(*(double *)((long)puVar5 + 0x40) - *(double *)(param_3 + 0x40));
        dVar10 = ABS(*(double *)((long)puVar5 + 0x40) + *(double *)(param_3 + 0x40)) *
                 2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar11) && (bVar1 = false, !NAN(dVar11) && !NAN(dVar10))) {
          bVar1 = dVar11 < dVar10;
        }
        if ((((bVar1) &&
             ((lVar7 = *(long *)((long)puVar5 + 8), lVar7 == *(long *)(param_3 + 8) ||
              (func_0x00010c071ae0(), (int)lVar7 != 0)))) &&
            ((lVar7 = *(long *)((long)puVar5 + 0x10), lVar7 == *(long *)(param_3 + 0x10) ||
             (func_0x00010c071ae0(), (int)lVar7 != 0)))) &&
           ((((lVar7 = *(long *)((long)puVar5 + 0x18), lVar7 == *(long *)(param_3 + 0x18) ||
              (func_0x00010c071ae0(), (int)lVar7 != 0)) &&
             ((lVar7 = *(long *)((long)puVar5 + 0x20), lVar7 == *(long *)(param_3 + 0x20) ||
              (func_0x00010c071ae0(), (int)lVar7 != 0)))) &&
            ((lVar7 = *(long *)((long)puVar5 + 0x28), lVar7 == *(long *)(param_3 + 0x28) ||
             (func_0x00010c071c60(), (int)lVar7 != 0)))))) {
          puVar9 = *(undefined1 **)((long)puVar5 + 0x38);
          if (puVar9 != *(undefined1 **)(param_3 + 0x38)) {
            func_0x00010c071c60();
            goto LAB_108fb89a4;
          }
          goto LAB_108fb8998;
        }
      }
    }
    puVar9 = (undefined1 *)0x0;
  }
LAB_108fb89a4:
  _objc_release(param_3);
  return (undefined8 *)puVar9;
}



/* Entry: 108fb881c; end: 108fb89bf; -[SCSnapchatterCollectionViewCellViewModel isEqual:] */

long FUN_108fb881c(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108fb8998:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108fb89a4;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) && (*(long *)(param_1 + 0x48) == *(long *)(param_3 + 0x48))) {
      lVar4 = 0;
      if ((*(double *)(param_1 + 0x50) != *(double *)(param_3 + 0x50)) ||
         (*(double *)(param_1 + 0x58) != *(double *)(param_3 + 0x58))) goto LAB_108fb89a4;
      dVar6 = ABS(*(double *)(param_1 + 0x30) - *(double *)(param_3 + 0x30));
      dVar5 = ABS(*(double *)(param_1 + 0x30) + *(double *)(param_3 + 0x30)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (bVar1) {
        dVar6 = ABS(*(double *)(param_1 + 0x40) - *(double *)(param_3 + 0x40));
        dVar5 = ABS(*(double *)(param_1 + 0x40) + *(double *)(param_3 + 0x40)) *
                2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
          bVar1 = dVar6 < dVar5;
        }
        if ((((bVar1) &&
             ((lVar4 = *(long *)(param_1 + 8), lVar4 == *(long *)(param_3 + 8) ||
              (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
            ((lVar4 = *(long *)(param_1 + 0x10), lVar4 == *(long *)(param_3 + 0x10) ||
             (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
           ((((lVar4 = *(long *)(param_1 + 0x18), lVar4 == *(long *)(param_3 + 0x18) ||
              (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
             ((lVar4 = *(long *)(param_1 + 0x20), lVar4 == *(long *)(param_3 + 0x20) ||
              (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
            ((lVar4 = *(long *)(param_1 + 0x28), lVar4 == *(long *)(param_3 + 0x28) ||
             (func_0x00010c071c60(), (int)lVar4 != 0)))))) {
          lVar4 = *(long *)(param_1 + 0x38);
          if (lVar4 != *(long *)(param_3 + 0x38)) {
            func_0x00010c071c60();
            goto LAB_108fb89a4;
          }
          goto LAB_108fb8998;
        }
      }
    }
    lVar4 = 0;
  }
LAB_108fb89a4:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 108fb89c0; end: 108fb89c7; -[SCSnapchatterCollectionViewCellViewModel snapchatterViewModel] */

undefined8 FUN_108fb89c0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108fb89c8; end: 108fb89cf; -[SCSnapchatterCollectionViewCellViewModel longPressActionModel] */

undefined8 FUN_108fb89c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108fb89d0; end: 108fb89d7; -[SCSnapchatterCollectionViewCellViewModel singleTapActionModel] */

undefined8 FUN_108fb89d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108fb89d8; end: 108fb89df; -[SCSnapchatterCollectionViewCellViewModel backgroundShadowViewModel] */

undefined8 FUN_108fb89d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108fb89e0; end: 108fb89e7; -[SCSnapchatterCollectionViewCellViewModel preferredSize] */

undefined1  [16] FUN_108fb89e0(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x50);
}



/* Entry: 108fb89e8; end: 108fb89ef; -[SCSnapchatterCollectionViewCellViewModel backgroundColor] */

undefined8 FUN_108fb89e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108fb89f0; end: 108fb89f7; -[SCSnapchatterCollectionViewCellViewModel cornerRadius] */

undefined8 FUN_108fb89f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108fb89f8; end: 108fb89ff; -[SCSnapchatterCollectionViewCellViewModel borderColor] */

undefined8 FUN_108fb89f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 108fb8a00; end: 108fb8a07; -[SCSnapchatterCollectionViewCellViewModel borderWidth] */

undefined8 FUN_108fb8a00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 108fb8a08; end: 108fb8a0f; -[SCSnapchatterCollectionViewCellViewModel externalEdges] */

undefined8 FUN_108fb8a08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 108fb8a10; end: 108fb8a6f; -[SCSnapchatterCollectionViewCellViewModel .cxx_destruct] */

void FUN_108fb8a10(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108fb8a70; end: 108fb8a8b; +[SCSnapchatterCollectionViewCellViewModelBuilder snapchatterCollectionViewCellViewModel] */

void FUN_108fb8a70(void)

{
  _objc_alloc_init(PTR_PTR_1126dcd08);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108fb8a8c; end: 108fb8d0f; +[SCSnapchatterCollectionViewCellViewModelBuilder snapchatterCollectionViewCellViewModelFromExistingSnapchatterCollectionViewCellViewModel:] */

void FUN_108fb8a8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined *puVar18;
  
  puVar1 = PTR_PTR_1126dcd08;
  _objc_retain(param_3);
  func_0x00010c2443a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c244760();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2b9980(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c0b4d20();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2b32e0(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c23cf00();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010c2b9080(puVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010bf14440();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010c2a90c0(puVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c106e40(param_3);
  puVar10 = puVar9;
  func_0x00010c2b5a80(puVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_3;
  func_0x00010bf13d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar10;
  func_0x00010c2a9060(puVar10,param_2,uVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf525a0(param_3);
  puVar13 = puVar12;
  func_0x00010c2ab220(puVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_3;
  func_0x00010bf1fb20(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar13;
  func_0x00010c2a97a0(puVar13,param_2,uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1fc80(param_3);
  puVar16 = puVar15;
  func_0x00010c2a97c0(puVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = param_3;
  func_0x00010bf9e0a0(param_3);
  _objc_release(param_3);
  puVar18 = puVar16;
  func_0x00010c2ad940(puVar16,param_2,uVar17);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(uVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(uVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar18);
  return;
}



/* Entry: 108fb8d10; end: 108fb8d67; -[SCSnapchatterCollectionViewCellViewModelBuilder build] */

void FUN_108fb8d10(long param_1)

{
  _objc_alloc(PTR_PTR_1126b1910);
  func_0x00010c0495a0(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108fb8d68; end: 108fb8d9f; -[SCSnapchatterCollectionViewCellViewModelBuilder withSnapchatterViewModel:] */

long FUN_108fb8d68(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108fb8da0; end: 108fb8dd7; -[SCSnapchatterCollectionViewCellViewModelBuilder withLongPressActionModel:] */

long FUN_108fb8da0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108fb8dd8; end: 108fb8e0f; -[SCSnapchatterCollectionViewCellViewModelBuilder withSingleTapActionModel:] */

long FUN_108fb8dd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108fb8e10; end: 108fb8e47; -[SCSnapchatterCollectionViewCellViewModelBuilder withBackgroundShadowViewModel:] */

long FUN_108fb8e10(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108fb8e48; end: 108fb8e4f; -[SCSnapchatterCollectionViewCellViewModelBuilder withPreferredSize:] */

void FUN_108fb8e48(undefined8 param_1,undefined8 param_2,long param_3)

{
  *(undefined8 *)(param_3 + 0x28) = param_1;
  *(undefined8 *)(param_3 + 0x30) = param_2;
  return;
}



/* Entry: 108fb8e50; end: 108fb8e87; -[SCSnapchatterCollectionViewCellViewModelBuilder withBackgroundColor:] */

long FUN_108fb8e50(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108fb8e88; end: 108fb8e8f; -[SCSnapchatterCollectionViewCellViewModelBuilder withCornerRadius:] */

void FUN_108fb8e88(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x40) = param_1;
  return;
}



/* Entry: 108fb8e90; end: 108fb8ec7; -[SCSnapchatterCollectionViewCellViewModelBuilder withBorderColor:] */

long FUN_108fb8e90(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108fb8ec8; end: 108fb8ecf; -[SCSnapchatterCollectionViewCellViewModelBuilder withBorderWidth:] */

void FUN_108fb8ec8(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x50) = param_1;
  return;
}



/* Entry: 108fb8ed0; end: 108fb8ed7; -[SCSnapchatterCollectionViewCellViewModelBuilder withExternalEdges:] */

void FUN_108fb8ed0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x58) = param_3;
  return;
}



/* Entry: 108fb8ed8; end: 108fb8f37; -[SCSnapchatterCollectionViewCellViewModelBuilder .cxx_destruct] */

void FUN_108fb8ed8(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108fb8f38; end: 108fb901f; -[SCSnapchatterCollectionInfoCellViewModel initWithTitle:subTitle:infoImage:isNewUIEnabled:] */

undefined1 *
FUN_108fb8f38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126ffa60;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_6;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108fb9020; end: 108fb9043; -[SCSnapchatterCollectionInfoCellViewModel copyWithZone:] */

undefined8 FUN_108fb9020(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108fb9044; end: 108fb90c7; -[SCSnapchatterCollectionInfoCellViewModel hash] */

undefined8 * FUN_108fb9044(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  puVar3 = &uStack_48;
  uStack_38 = uVar1;
  func_0x000107c3191c(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_108fb9170:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_108fb917c;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(char *)(puVar3 + 1) == *(char *)(param_3 + 1))) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[3];
        if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = (undefined8 *)puVar3[4];
          if (puVar6 != (undefined8 *)param_3[4]) {
            func_0x00010c071ae0();
            goto LAB_108fb917c;
          }
          goto LAB_108fb9170;
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_108fb917c:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 108fb90c8; end: 108fb9197; -[SCSnapchatterCollectionInfoCellViewModel isEqual:] */

long FUN_108fb90c8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108fb9170:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108fb917c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_108fb917c;
          }
          goto LAB_108fb9170;
        }
      }
    }
    lVar3 = 0;
  }
LAB_108fb917c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108fb9198; end: 108fb919f; -[SCSnapchatterCollectionInfoCellViewModel title] */

undefined8 FUN_108fb9198(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108fb91a0; end: 108fb91a7; -[SCSnapchatterCollectionInfoCellViewModel subTitle] */

undefined8 FUN_108fb91a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108fb91a8; end: 108fb91af; -[SCSnapchatterCollectionInfoCellViewModel infoImage] */

undefined8 FUN_108fb91a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108fb91b0; end: 108fb91b7; -[SCSnapchatterCollectionInfoCellViewModel isNewUIEnabled] */

undefined1 FUN_108fb91b0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108fb91b8; end: 108fb91f3; -[SCSnapchatterCollectionInfoCellViewModel .cxx_destruct] */

void FUN_108fb91b8(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108fb91f4; end: 108fb9257; +[SCSnapchatterAccessoryViewModel buttonWithButtonAccessoryViewModel:] */

void FUN_108fb91f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b4740;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108fb9258; end: 108fb92c3; +[SCSnapchatterAccessoryViewModel checkboxWithCheckboxViewModel:] */

void FUN_108fb9258(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b4740;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108fb92c4; end: 108fb932f; +[SCSnapchatterAccessoryViewModel doubleButtonWithDoubleButtonViewModel:] */

void FUN_108fb92c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b4740;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108fb9330; end: 108fb939b; +[SCSnapchatterAccessoryViewModel friendmojiWithFriendmojiAccessoryViewModel:] */

void FUN_108fb9330(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b4740;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108fb939c; end: 108fb9407; +[SCSnapchatterAccessoryViewModel groupProfileWithGroupProfileAddButtonViewModel:] */

void FUN_108fb939c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b4740;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 4;
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108fb9408; end: 108fb942b; -[SCSnapchatterAccessoryViewModel copyWithZone:] */

undefined8 FUN_108fb9408(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108fb942c; end: 108fb94c7; -[SCSnapchatterAccessoryViewModel hash] */

void FUN_108fb942c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_58 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_58;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_88 = PTR_PTR_1126ffa68;
  puStack_90 = puVar3;
  _objc_msgSendSuper2(&puStack_90,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108fb94c8; end: 108fb950b; -[SCSnapchatterAccessoryViewModel internalInit] */

void FUN_108fb94c8(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126ffa68;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108fb950c; end: 108fb960b; -[SCSnapchatterAccessoryViewModel isEqual:] */

long FUN_108fb950c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108fb95e4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108fb95f0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if (lVar3 != *(long *)(param_3 + 0x30)) {
                func_0x00010c071ae0();
                goto LAB_108fb95f0;
              }
              goto LAB_108fb95e4;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_108fb95f0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108fb960c; end: 108fb971f; -[SCSnapchatterAccessoryViewModel matchButton:friendmoji:checkbox:doubleButton:groupProfile:] */

void FUN_108fb960c(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 < 2) {
    if (lVar1 == 0) {
      if (param_3 == 0) goto LAB_108fb96e8;
      lVar2 = 0x10;
      lVar1 = param_3;
    }
    else {
      if ((lVar1 != 1) || (param_4 == 0)) goto LAB_108fb96e8;
      lVar2 = 0x18;
      lVar1 = param_4;
    }
  }
  else if (lVar1 == 2) {
    if (param_5 == 0) goto LAB_108fb96e8;
    lVar2 = 0x20;
    lVar1 = param_5;
  }
  else if (lVar1 == 3) {
    if (param_6 == 0) goto LAB_108fb96e8;
    lVar2 = 0x28;
    lVar1 = param_6;
  }
  else {
    if ((lVar1 != 4) || (param_7 == 0)) goto LAB_108fb96e8;
    lVar2 = 0x30;
    lVar1 = param_7;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + lVar2));
LAB_108fb96e8:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108fb9720; end: 108fb9773; -[SCSnapchatterAccessoryViewModel .cxx_destruct] */

void FUN_108fb9720(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108fb9774; end: 108fb9897; -[SCSnapchatterAvatarContainerViewModel initWithAvatarViewModel:thumbnailSize:contentInsets:backgroundColor:avatarTapActionModel:opacity:] */

undefined1 *
FUN_108fb9774(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar1 = &uStack_80;
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puStack_78 = PTR_PTR_1126ffa70;
  uStack_80 = param_8;
  _objc_msgSendSuper2(&uStack_80,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x28) = param_1;
    *(undefined8 *)((long)puVar1 + 0x30) = param_2;
    *(undefined8 *)((long)puVar1 + 0x38) = param_3;
    *(undefined8 *)((long)puVar1 + 0x40) = param_4;
    *(undefined8 *)((long)puVar1 + 0x48) = param_5;
    *(undefined8 *)((long)puVar1 + 0x50) = param_6;
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  return (undefined1 *)puVar1;
}



/* Entry: 108fb9898; end: 108fb98bb; -[SCSnapchatterAvatarContainerViewModel copyWithZone:] */

undefined8 FUN_108fb9898(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108fb98bc; end: 108fb9a1f; -[SCSnapchatterAvatarContainerViewModel hash] */

undefined8 * FUN_108fb98bc(long param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  double dVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ushort uVar11;
  double dVar12;
  undefined8 uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar9 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar9 = (uVar9 ^ uVar9 >> 0x1f) * 0x15;
  uStack_70 = (uVar9 ^ uVar9 >> 0xb) * 0x41;
  uStack_70 = uStack_70 ^ uStack_70 >> 0x16;
  uVar9 = ~*(ulong *)(param_1 + 0x30) + *(ulong *)(param_1 + 0x30) * 0x40000;
  uVar9 = (uVar9 ^ uVar9 >> 0x1f) * 0x15;
  uStack_68 = (uVar9 ^ uVar9 >> 0xb) * 0x41;
  uStack_68 = uStack_68 ^ uStack_68 >> 0x16;
  uVar9 = ~*(ulong *)(param_1 + 0x38) + *(ulong *)(param_1 + 0x38) * 0x40000;
  uVar9 = (uVar9 ^ uVar9 >> 0x1f) * 0x15;
  uStack_60 = (uVar9 ^ uVar9 >> 0xb) * 0x41;
  uStack_60 = uStack_60 ^ uStack_60 >> 0x16;
  uVar9 = ~*(ulong *)(param_1 + 0x40) + *(ulong *)(param_1 + 0x40) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x48) + *(ulong *)(param_1 + 0x48) * 0x40000;
  uVar9 = (uVar9 ^ uVar9 >> 0x1f) * 0x15;
  uStack_58 = (uVar9 ^ uVar9 >> 0xb) * 0x41;
  uStack_58 = uStack_58 ^ uStack_58 >> 0x16;
  uVar9 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_50 = (uVar9 ^ uVar9 >> 0xb) * 0x41;
  uStack_50 = uStack_50 ^ uStack_50 >> 0x16;
  uVar9 = ~*(ulong *)(param_1 + 0x50) + *(ulong *)(param_1 + 0x50) * 0x40000;
  uVar9 = (uVar9 ^ uVar9 >> 0x1f) * 0x15;
  uStack_48 = (uVar9 ^ uVar9 >> 0xb) * 0x41;
  uStack_48 = uStack_48 ^ uStack_48 >> 0x16;
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  uStack_78 = uVar4;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar5;
  func_0x00010bfde980();
  uVar9 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar9 = (uVar9 ^ uVar9 >> 0x1f) * 0x15;
  uStack_30 = (uVar9 ^ uVar9 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  puVar6 = &uStack_78;
  uStack_38 = uVar4;
  func_0x000107c3191c(puVar6,10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar6;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar6 == param_3) {
LAB_108fb9b2c:
    puVar10 = (undefined8 *)0x1;
  }
  else {
    puVar10 = (undefined8 *)0x0;
    if ((puVar6 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_108fb9b38;
    puVar10 = puVar6;
    _objc_opt_class(puVar6);
    puVar7 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar10);
    if (((ulong)puVar7 & 1) != 0) {
      bVar3 = false;
      if (((double)puVar6[5] == (double)param_3[5]) &&
         (bVar3 = false, !NAN((double)puVar6[6]) && !NAN((double)param_3[6]))) {
        bVar3 = (double)puVar6[6] == (double)param_3[6];
      }
      if ((bVar3) &&
         (uVar11 = NEON_uminv(CONCAT26(-(ushort)((double)puVar6[10] == (double)param_3[10]),
                                       CONCAT24(-(ushort)((double)puVar6[9] == (double)param_3[9]),
                                                CONCAT22(-(ushort)((double)puVar6[8] ==
                                                                  (double)param_3[8]),
                                                         -(ushort)((double)puVar6[7] ==
                                                                  (double)param_3[7])))),2),
         (uVar11 & 1) != 0)) {
        dVar12 = ABS((double)puVar6[4] - (double)param_3[4]);
        dVar2 = ABS((double)puVar6[4] + (double)param_3[4]) * 2.220446049250313e-16;
        bVar3 = true;
        if ((2.2250738585072014e-308 <= dVar12) && (bVar3 = false, !NAN(dVar12) && !NAN(dVar2))) {
          bVar3 = dVar12 < dVar2;
        }
        if (((bVar3) &&
            ((lVar8 = puVar6[1], lVar8 == param_3[1] || (func_0x00010c071ae0(), (int)lVar8 != 0))))
           && ((lVar8 = puVar6[2], lVar8 == param_3[2] || (func_0x00010c071c60(), (int)lVar8 != 0)))
           ) {
          puVar10 = (undefined8 *)puVar6[3];
          if (puVar10 != (undefined8 *)param_3[3]) {
            func_0x00010c071ae0();
            goto LAB_108fb9b38;
          }
          goto LAB_108fb9b2c;
        }
      }
    }
    puVar10 = (undefined8 *)0x0;
  }
LAB_108fb9b38:
  _objc_release(param_3);
  return puVar10;
}



/* Entry: 108fb9a20; end: 108fb9b53; -[SCSnapchatterAvatarContainerViewModel isEqual:] */

long FUN_108fb9a20(ulong param_1,undefined8 param_2,ulong param_3)

{
  double dVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ushort uVar6;
  double dVar7;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108fb9b2c:
    lVar5 = 1;
  }
  else {
    lVar5 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108fb9b38;
    uVar3 = param_1;
    _objc_opt_class(param_1);
    uVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar3);
    if ((uVar4 & 1) != 0) {
      bVar2 = false;
      if ((*(double *)(param_1 + 0x28) == *(double *)(param_3 + 0x28)) &&
         (bVar2 = false, !NAN(*(double *)(param_1 + 0x30)) && !NAN(*(double *)(param_3 + 0x30)))) {
        bVar2 = *(double *)(param_1 + 0x30) == *(double *)(param_3 + 0x30);
      }
      if ((bVar2) &&
         (uVar6 = NEON_uminv(CONCAT26(-(ushort)(*(double *)(param_1 + 0x50) ==
                                               *(double *)(param_3 + 0x50)),
                                      CONCAT24(-(ushort)(*(double *)(param_1 + 0x48) ==
                                                        *(double *)(param_3 + 0x48)),
                                               CONCAT22(-(ushort)(*(double *)(param_1 + 0x40) ==
                                                                 *(double *)(param_3 + 0x40)),
                                                        -(ushort)(*(double *)(param_1 + 0x38) ==
                                                                 *(double *)(param_3 + 0x38))))),2),
         (uVar6 & 1) != 0)) {
        dVar7 = ABS(*(double *)(param_1 + 0x20) - *(double *)(param_3 + 0x20));
        dVar1 = ABS(*(double *)(param_1 + 0x20) + *(double *)(param_3 + 0x20)) *
                2.220446049250313e-16;
        bVar2 = true;
        if ((2.2250738585072014e-308 <= dVar7) && (bVar2 = false, !NAN(dVar7) && !NAN(dVar1))) {
          bVar2 = dVar7 < dVar1;
        }
        if (((bVar2) &&
            ((lVar5 = *(long *)(param_1 + 8), lVar5 == *(long *)(param_3 + 8) ||
             (func_0x00010c071ae0(), (int)lVar5 != 0)))) &&
           ((lVar5 = *(long *)(param_1 + 0x10), lVar5 == *(long *)(param_3 + 0x10) ||
            (func_0x00010c071c60(), (int)lVar5 != 0)))) {
          lVar5 = *(long *)(param_1 + 0x18);
          if (lVar5 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_108fb9b38;
          }
          goto LAB_108fb9b2c;
        }
      }
    }
    lVar5 = 0;
  }
LAB_108fb9b38:
  _objc_release(param_3);
  return lVar5;
}



/* Entry: 108fb9b54; end: 108fb9b5b; -[SCSnapchatterAvatarContainerViewModel avatarViewModel] */

undefined8 FUN_108fb9b54(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108fb9b5c; end: 108fb9b63; -[SCSnapchatterAvatarContainerViewModel thumbnailSize] */

undefined1  [16] FUN_108fb9b5c(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x28);
}



/* Entry: 108fb9b64; end: 108fb9b6f; -[SCSnapchatterAvatarContainerViewModel contentInsets] */

undefined8 FUN_108fb9b64(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 108fb9b70; end: 108fb9b77; -[SCSnapchatterAvatarContainerViewModel backgroundColor] */

undefined8 FUN_108fb9b70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108fb9b78; end: 108fb9b7f; -[SCSnapchatterAvatarContainerViewModel avatarTapActionModel] */

undefined8 FUN_108fb9b78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108fb9b80; end: 108fb9b87; -[SCSnapchatterAvatarContainerViewModel opacity] */

undefined8 FUN_108fb9b80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108fb9b88; end: 108fb9bc3; -[SCSnapchatterAvatarContainerViewModel .cxx_destruct] */

void FUN_108fb9b88(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108fb9bc4; end: 108fb9c23; -[SCSnapchatterBackgroundShadowViewModel initWithOffset:radius:opacity:] */

void FUN_108fb9bc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126ffa78;
  uStack_40 = param_5;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
    *(undefined8 *)((long)puVar1 + 0x20) = param_2;
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  return;
}



/* Entry: 108fb9c24; end: 108fb9c47; -[SCSnapchatterBackgroundShadowViewModel copyWithZone:] */

undefined8 FUN_108fb9c24(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108fb9c48; end: 108fb9d1b; -[SCSnapchatterBackgroundShadowViewModel hash] */

ulong * FUN_108fb9c48(long param_1,undefined8 param_2,ulong *param_3)

{
  ulong uVar1;
  bool bVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  double dVar7;
  double dVar8;
  ulong uStack_38;
  ulong uStack_30;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_38 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uVar5 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_30 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 8) + *(ulong *)(param_1 + 8) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_28 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_28 = uStack_28 ^ uStack_28 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_20 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_20 = uStack_20 ^ uStack_20 >> 0x16;
  puVar3 = &uStack_38;
  func_0x000107c3191c(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
    puVar6 = (ulong *)0x1;
  }
  else {
    puVar6 = (ulong *)0x0;
    if ((puVar3 != (ulong *)0x0) && (param_3 != (ulong *)0x0)) {
      puVar6 = puVar3;
      _objc_opt_class(puVar3);
      puVar4 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar6);
      if (((ulong)puVar4 & 1) != 0) {
        bVar2 = false;
        if (((double)puVar3[3] == (double)param_3[3]) &&
           (bVar2 = false, !NAN((double)puVar3[4]) && !NAN((double)param_3[4]))) {
          bVar2 = (double)puVar3[4] == (double)param_3[4];
        }
        if (bVar2) {
          dVar8 = ABS((double)puVar3[1] - (double)param_3[1]);
          dVar7 = ABS((double)puVar3[1] + (double)param_3[1]) * 2.220446049250313e-16;
          bVar2 = true;
          if ((2.2250738585072014e-308 <= dVar8) && (bVar2 = false, !NAN(dVar8) && !NAN(dVar7))) {
            bVar2 = dVar8 < dVar7;
          }
          if (bVar2) {
            dVar7 = ABS((double)puVar3[2] + (double)param_3[2]) * 2.220446049250313e-16;
            if (dVar7 <= 2.2250738585072014e-308) {
              dVar7 = 2.2250738585072014e-308;
            }
            puVar6 = (ulong *)(ulong)(ABS((double)puVar3[2] - (double)param_3[2]) < dVar7);
            goto LAB_108fb9df4;
          }
        }
      }
      puVar6 = (ulong *)0x0;
    }
  }
LAB_108fb9df4:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 108fb9d1c; end: 108fb9e0f; -[SCSnapchatterBackgroundShadowViewModel isEqual:] */

bool FUN_108fb9d1c(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  double dVar4;
  double dVar5;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if ((uVar3 & 1) != 0) {
        bVar1 = false;
        if ((*(double *)(param_1 + 0x18) == *(double *)(param_3 + 0x18)) &&
           (bVar1 = false, !NAN(*(double *)(param_1 + 0x20)) && !NAN(*(double *)(param_3 + 0x20))))
        {
          bVar1 = *(double *)(param_1 + 0x20) == *(double *)(param_3 + 0x20);
        }
        if (bVar1) {
          dVar5 = ABS(*(double *)(param_1 + 8) - *(double *)(param_3 + 8));
          dVar4 = ABS(*(double *)(param_1 + 8) + *(double *)(param_3 + 8)) * 2.220446049250313e-16;
          bVar1 = true;
          if ((2.2250738585072014e-308 <= dVar5) && (bVar1 = false, !NAN(dVar5) && !NAN(dVar4))) {
            bVar1 = dVar5 < dVar4;
          }
          if (bVar1) {
            dVar4 = ABS(*(double *)(param_1 + 0x10) + *(double *)(param_3 + 0x10)) *
                    2.220446049250313e-16;
            if (dVar4 <= 2.2250738585072014e-308) {
              dVar4 = 2.2250738585072014e-308;
            }
            bVar1 = ABS(*(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10)) < dVar4;
            goto LAB_108fb9df4;
          }
        }
      }
      bVar1 = false;
    }
  }
LAB_108fb9df4:
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 108fb9e10; end: 108fb9e17; -[SCSnapchatterBackgroundShadowViewModel offset] */

undefined1  [16] FUN_108fb9e10(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x18);
}



/* Entry: 108fb9e18; end: 108fb9e1f; -[SCSnapchatterBackgroundShadowViewModel radius] */

undefined8 FUN_108fb9e18(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



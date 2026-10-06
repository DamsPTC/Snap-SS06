/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106bad660; end: 106bad793;  */

void FUN_106bad660(double param_1,undefined8 param_2,double param_3,undefined8 param_4,
                  double param_5,double param_6,double param_7,ulong param_8)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  _objc_retain();
  param_1 = param_1 * param_6;
  uVar2 = param_8;
  func_0x00010bf529e0();
  dVar6 = param_3 * 0.5 + param_1 * 0.5;
  if ((uVar2 & 1) != 0) {
    dVar6 = param_3 * 0.5;
  }
  uVar2 = param_8;
  func_0x00010bf529e0();
  if (uVar2 != 0) {
    uVar2 = 0;
    do {
      uVar1 = uVar2 + 1;
      dVar5 = param_1 * (double)(uVar1 >> 1);
      dVar4 = -(param_1 * (double)(uVar1 >> 1));
      dVar7 = dVar5;
      if ((uVar2 & 1) != 0) {
        dVar7 = dVar4;
      }
      uVar2 = param_8;
      func_0x00010c0dfd40(param_8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c23d0a0();
      dVar8 = param_7 * dVar4;
      dVar9 = param_7 * dVar5;
      func_0x00010c23d0a0(uVar2);
      func_0x00010bf89920(((dVar6 + dVar7) - dVar8 * 0.5) + (dVar8 - dVar4 / (dVar4 / dVar8)) * 0.5,
                          (param_5 - dVar9 * 0.5) + (dVar9 - dVar5 / (dVar4 / dVar8)) * 0.5,uVar2);
      _objc_release(uVar2);
      uVar3 = param_8;
      func_0x00010bf529e0();
      uVar2 = uVar1;
    } while (uVar1 < uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_8);
  return;
}



/* Entry: 106bad794; end: 106bada5b; -[SCStoryMembersBitmojiView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_106bad794(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_b0 = PTR_PTR_1126f5710;
  puVar1 = &uStack_b8;
  uStack_b8 = param_5;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  puVar3 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b0648;
    _objc_alloc();
    func_0x00010c013de0(param_1,param_2,param_3,param_4);
    lVar16 = (long)_DAT_112759ac0;
    uVar15 = *(undefined8 *)((long)puVar1 + lVar16);
    *(undefined **)((long)puVar1 + lVar16) = puVar2;
    _objc_release(uVar15);
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + lVar16));
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar16));
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar3 = *(undefined8 **)((long)puVar1 + lVar16);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_a8 = puVar5;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar16);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar1;
    func_0x00010bf1ff80(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_a0 = uVar15;
    uVar8 = *(undefined8 *)((long)puVar1 + lVar16);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar1;
    func_0x00010c08de00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_98 = uVar10;
    uVar11 = *(undefined8 *)((long)puVar1 + lVar16);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar1;
    func_0x00010c2793a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar11;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_90 = uVar13;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar14);
    _objc_release(uVar13);
    _objc_release(puVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(puVar9);
    _objc_release(uVar8);
    _objc_release(uVar15);
    _objc_release(puVar7);
    _objc_release(uVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x00010c1aa620(*(undefined8 *)((long)puVar3 + (long)_DAT_112759ac0));
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar3,PTR_s_setNeedsLayout_1126509b0);
  return puVar3;
}



/* Entry: 106bada5c; end: 106bada8b; -[SCStoryMembersBitmojiView setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bada5c(long param_1)

{
  func_0x00010c1aa620(*(undefined8 *)(param_1 + _DAT_112759ac0));
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 106bada8c; end: 106bada9b; -[SCStoryMembersBitmojiView viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106bada8c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112759ac4);
}



/* Entry: 106bada9c; end: 106badadb; -[SCStoryMembersBitmojiView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bada9c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112759ac4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112759ac0,0);
  return;
}



/* Entry: 106badadc; end: 106badb87; -[SCStoryMemberBitmojiHeadshot initWithImage:avatarId:] */

undefined1 *
FUN_106badadc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f5718;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106badb88; end: 106badbab; -[SCStoryMemberBitmojiHeadshot copyWithZone:] */

undefined8 FUN_106badb88(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106badbac; end: 106badc1f; -[SCStoryMemberBitmojiHeadshot hash] */

undefined8 * FUN_106badbac(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_106badca0:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_106badcac;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_106badcac;
        }
        goto LAB_106badca0;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_106badcac:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 106badc20; end: 106badcc7; -[SCStoryMemberBitmojiHeadshot isEqual:] */

long FUN_106badc20(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106badca0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106badcac;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_106badcac;
        }
        goto LAB_106badca0;
      }
    }
    lVar3 = 0;
  }
LAB_106badcac:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106badcc8; end: 106badccf; -[SCStoryMemberBitmojiHeadshot image] */

undefined8 FUN_106badcc8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106badcd0; end: 106badcd7; -[SCStoryMemberBitmojiHeadshot avatarId] */

undefined8 FUN_106badcd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106badcd8; end: 106badd07; -[SCStoryMemberBitmojiHeadshot .cxx_destruct] */

void FUN_106badcd8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106badd08; end: 106badd73; +[SCStoryMemberBitmojiFetchedState erroredWithAvatarId:] */

void FUN_106badd08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d0e88;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106badd74; end: 106badddf; +[SCStoryMemberBitmojiFetchedState loadedHeadshotWithHeadshot:] */

void FUN_106badd74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d0e88;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106badde0; end: 106bade47; +[SCStoryMemberBitmojiFetchedState loadingWithAvatarId:] */

void FUN_106badde0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d0e88;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 1;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106bade48; end: 106bade8f; +[SCStoryMemberBitmojiFetchedState unloaded] */

void FUN_106bade48(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d0e88;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106bade90; end: 106badeb3; -[SCStoryMemberBitmojiFetchedState copyWithZone:] */

undefined8 FUN_106bade90(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106badeb4; end: 106badf37; -[SCStoryMemberBitmojiFetchedState hash] */

void FUN_106badeb4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_78 = PTR_PTR_1126f5720;
  puStack_80 = puVar3;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106badf38; end: 106badf7b; -[SCStoryMemberBitmojiFetchedState internalInit] */

void FUN_106badf38(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f5720;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106badf7c; end: 106bae04b; -[SCStoryMemberBitmojiFetchedState isEqual:] */

long FUN_106badf7c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106bae024:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106bae030;
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
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_106bae030;
          }
          goto LAB_106bae024;
        }
      }
    }
    lVar3 = 0;
  }
LAB_106bae030:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106bae04c; end: 106bae13b; -[SCStoryMemberBitmojiFetchedState matchUnloaded:loading:errored:loadedHeadshot:] */

void FUN_106bae04c(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 < 2) {
    if (lVar2 == 0) {
      if (param_3 != 0) {
        (**(code **)(param_3 + 0x10))(param_3);
      }
      goto LAB_106bae10c;
    }
    if ((lVar2 != 1) || (param_4 == 0)) goto LAB_106bae10c;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    pcVar3 = *(code **)(param_4 + 0x10);
    lVar2 = param_4;
  }
  else if (lVar2 == 2) {
    if (param_5 == 0) goto LAB_106bae10c;
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    pcVar3 = *(code **)(param_5 + 0x10);
    lVar2 = param_5;
  }
  else {
    if ((lVar2 != 3) || (param_6 == 0)) goto LAB_106bae10c;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    pcVar3 = *(code **)(param_6 + 0x10);
    lVar2 = param_6;
  }
  (*pcVar3)(lVar2,uVar1);
LAB_106bae10c:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106bae13c; end: 106bae177; -[SCStoryMemberBitmojiFetchedState .cxx_destruct] */

void FUN_106bae13c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106bae178; end: 106bae59b; -[SCSharedStoryProfileStorySectionActionHandler initWithPublicationId:creatorId:userSession:myStoriesPlaybackDataProvider:playbackManagementDataProvider:remoteStoriesDataProvider:myStoriesDataCoordinator:storiesMediaCoordinator:readReceiptCoordinator:snapchatterServices:customStoriesDataFetcher:customStoriesDataSyncer:customStoriesDataMutator:circumstanceEngine:profileStoryPlaybackCoordinator:addToStoryCoordinator:saveStoryScopeExposer:blizzardLogger:notificationPool:notificationOSSettingsRetriever:] */

undefined8 *
FUN_106bae178(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  puStack_70 = PTR_PTR_1126f5728;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0720c0();
    *(char *)(puVar1 + 7) = (char)uVar3;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[3];
    puVar1[3] = puVar4;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[4];
    puVar1[4] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[5];
    puVar1[5] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[6];
    puVar1[6] = param_20;
    _objc_release(uVar2);
    uVar2 = param_17;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_12;
    func_0x00010c244d60();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_12;
    func_0x00010c244ac0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_12;
    func_0x00010c244620();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_12;
    func_0x00010bf1d740();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar2;
    func_0x00010bf579c0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = puVar1[2];
    puVar1[2] = uVar8;
    _objc_release(uVar9);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar2 = puVar1[3];
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar2);
    _objc_release(puVar4);
  }
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106bae59c; end: 106bae5e3; -[SCSharedStoryProfileStorySectionActionHandler setIsExpanded:] */

void FUN_106bae59c(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  *(undefined1 *)(param_1 + 0x39) = param_3;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106bae5e4; end: 106bae633; -[SCSharedStoryProfileStorySectionActionHandler isExpandedObservable] */

void FUN_106bae5e4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e0ea0(uVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106bae634; end: 106bae677; -[SCSharedStoryProfileStorySectionActionHandler setPresentingViewController:] */

void FUN_106bae634(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + 0x40,param_3);
  func_0x00010c1e1580(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106bae678; end: 106bae807; -[SCSharedStoryProfileStorySectionActionHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined8
FUN_106bae678(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfd0140(uVar1,param_2,param_3,param_4,param_5);
  if ((int)uVar1 == 0) {
    uVar1 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0720c0();
    _objc_release(uVar1);
    if ((int)uVar2 != 0) goto LAB_106bae6ec;
    uVar1 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0720c0();
    _objc_release(uVar1);
    if ((int)uVar2 == 0) {
      uVar1 = param_4;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c0720c0();
      _objc_release(uVar1);
      if ((int)uVar2 == 0) {
        uVar1 = param_4;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010c0720c0();
        _objc_release(uVar1);
        if ((int)uVar2 == 0) {
          uVar1 = 0;
          goto LAB_106bae704;
        }
        func_0x00010be257a0(param_1);
        uVar1 = *(undefined8 *)(param_1 + 0x30);
        uVar2 = *(undefined8 *)(param_1 + 8);
        uVar3 = *(undefined1 *)(param_1 + 0x38);
        uVar4 = 8;
      }
      else {
        func_0x00010be2f840(param_1);
        uVar1 = *(undefined8 *)(param_1 + 0x30);
        uVar2 = *(undefined8 *)(param_1 + 8);
        uVar3 = *(undefined1 *)(param_1 + 0x38);
        uVar4 = 9;
      }
      goto LAB_106bae6fc;
    }
    func_0x00010be291a0(param_1);
  }
  else {
LAB_106bae6ec:
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    uVar2 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined1 *)(param_1 + 0x38);
    uVar4 = 10;
LAB_106bae6fc:
    func_0x00010c0af760(uVar1,param_2,uVar2,uVar3,uVar4);
  }
  uVar1 = 1;
LAB_106bae704:
  _objc_release(param_4);
  return uVar1;
}



/* Entry: 106bae808; end: 106bae817; -[SCSharedStoryProfileStorySectionActionHandler _handleExpandSectionAction] */

void FUN_106bae808(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1b0bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setIsExpanded__112649d20,(*(byte *)(param_1 + 0x39) ^ 0xff) & 1);
  return;
}



/* Entry: 106bae818; end: 106bae8b7; -[SCSharedStoryProfileStorySectionActionHandler _handleSaveMySnapsInStory] */

void FUN_106bae818(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  lVar2 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c038f40(puVar1,param_2,lVar2,1);
  _objc_release(lVar2);
  puVar3 = PTR_PTR_1126b10b0;
  _objc_alloc(PTR_PTR_1126b10b0);
  func_0x00010bfff0a0();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x20),param_2,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106bae8b8; end: 106bae91f; -[SCSharedStoryProfileStorySectionActionHandler _handleAddToSnap] */

void FUN_106bae8b8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 8);
  lVar2 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar2);
  func_0x00010befc2e0(uVar1,param_2,uVar3,lVar2,param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106bae920; end: 106bae967; -[SCSharedStoryProfileStorySectionActionHandler didCompleteSaveStoryScope:] */

void FUN_106bae920(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x20));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 106bae968; end: 106bae96b; -[SCSharedStoryProfileStorySectionActionHandler didDismissAddToStoryWithDidSendSnap:] */

void FUN_106bae968(void)

{
  return;
}



/* Entry: 106bae96c; end: 106bae983; -[SCSharedStoryProfileStorySectionActionHandler presentingViewController] */

void FUN_106bae96c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106bae984; end: 106bae98b; -[SCSharedStoryProfileStorySectionActionHandler isExpanded] */

undefined1 FUN_106bae984(long param_1)

{
  return *(undefined1 *)(param_1 + 0x39);
}



/* Entry: 106bae98c; end: 106bae9f3; -[SCSharedStoryProfileStorySectionActionHandler .cxx_destruct] */

void FUN_106bae98c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x40);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106bae9f4; end: 106baee23; -[SCSharedStoryProfileStorySectionCreator initWithStoryId:customStoryMetadata:userSession:customStoriesDataFetcher:customStoriesDataSyncer:customStoriesDataMutator:myStoriesDataCoordinator:myStoriesPlaybackDataProvider:playbackManagementDataProvider:remoteStoriesDataProvider:storiesMediaCoordinator:storiesThumbnailCoordinating:storyPlaybackCoordinating:snapViewerDataCoordinator:readReceiptCoordinator:addToStoryCoordinator:saveStoryScopeExposer:snapchatterServices:circumstanceEngine:blizzardLogger:notificationPool:notificationOSSettingsRetriever:] */

undefined8 *
FUN_106bae9f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  puStack_70 = PTR_PTR_1126f5730;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[2];
    puVar1[2] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[3];
    puVar1[3] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[5];
    puVar1[5] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[6];
    puVar1[6] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[8];
    puVar1[8] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[9];
    puVar1[9] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[10];
    puVar1[10] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[7];
    puVar1[7] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_21;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126d0ea0;
    _objc_alloc();
    uVar2 = param_4;
    func_0x00010bf5a820(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf5bbc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03be00();
    uVar5 = puVar1[1];
    puVar1[1] = puVar3;
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106baee24; end: 106baee2b; -[SCSharedStoryProfileStorySectionCreator sharedStoryProfileSectionOrder] */

undefined8 FUN_106baee24(void)

{
  return 2;
}



/* Entry: 106baee2c; end: 106baef1b; -[SCSharedStoryProfileStorySectionCreator sharedStoryProfileOrderedConfig] */

void FUN_106baee2c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b1700;
  _objc_alloc(PTR_PTR_1126b1700);
  puVar2 = PTR_PTR_1126b16f8;
  _objc_alloc(PTR_PTR_1126b16f8);
  func_0x00010c028e00();
  puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297340(0,0,0x4030000000000000,0,PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c043020(0,puVar1,param_2,0,puVar2,puVar3,1,1,0);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b12f8;
  _objc_alloc(PTR_PTR_1126b12f8);
  func_0x00010c22c300(param_1);
  func_0x00010c0322a0(puVar2,param_2,param_1,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106baef1c; end: 106baf02b; -[SCSharedStoryProfileStorySectionCreator section] */

void FUN_106baef1c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126d0e30;
  _objc_alloc(PTR_PTR_1126d0e30);
  puVar2 = puVar1;
  func_0x000108f58e1c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0436e0(puVar1,param_2,puVar2,0,0,0,&PTR____CFConstantStringClassReference_110dcadf8);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126d0e38;
  _objc_alloc(PTR_PTR_1126d0e38);
  func_0x00010c01a200();
  puVar3 = PTR_PTR_1126b1108;
  _objc_alloc(PTR_PTR_1126b1108);
  func_0x00010c04f820();
  puVar4 = PTR_PTR_1126d0ea8;
  _objc_alloc(PTR_PTR_1126d0ea8);
  func_0x00010c04c100();
  func_0x00010c1f9240(puVar3,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106baf02c; end: 106baf053; -[SCSharedStoryProfileStorySectionCreator actionHandler] */

void FUN_106baf02c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106baf054; end: 106baf107; -[SCSharedStoryProfileStorySectionCreator .cxx_destruct] */

void FUN_106baf054(long param_1)

{
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106baf108; end: 106baf3f7; -[SCSharedStoryProfileStorySectionDataProvider initWithStateProvider:storyId:customStoryMetadata:userSession:customStoriesDataFetcher:myStoriesDataCoordinator:storiesThumbnailCoordinator:storyPlaybackCoordinator:snapViewerDataCoordinator:readReceiptCoordinator:circumstanceEngine:] */

undefined8 *
FUN_106baf108(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  puStack_68 = PTR_PTR_1126f5738;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[7];
    puVar1[7] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[3];
    puVar1[3] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[8];
    puVar1[8] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[9];
    puVar1[9] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[10];
    puVar1[10] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_13;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[5];
    puVar1[5] = puVar3;
    _objc_release(uVar2);
    uVar2 = puVar1[6];
    puVar1[6] = PTR____NSArray0__struct_11034ab48;
    _objc_release(uVar2);
  }
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106baf3f8; end: 106baf813; -[SCSharedStoryProfileStorySectionDataProvider setUp] */

void FUN_106baf3f8(long param_1)

{
  undefined *puVar1;
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
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  puVar1 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar15 = *(undefined8 *)(param_1 + 0x28);
  *(undefined **)(param_1 + 0x28) = puVar1;
  _objc_release(uVar15);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar2;
  func_0x00010c0d4c40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c258b20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e0ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010c241380();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0e0ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar6;
  func_0x00010bf3d040();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c0e0ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar6);
  uVar7 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar7;
  func_0x00010bf3d000();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010c0e0ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11de00(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar7;
  func_0x00010bf62580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_initWeak(auStack_68,param_1);
  uVar7 = uVar15;
  func_0x00010bf41860(uVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf41860();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf41860();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010bf41860();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010bf41860();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + 8);
  func_0x00010c072380(uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar11;
  func_0x00010bf41860(uVar11);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  uVar14 = uVar13;
  func_0x00010c25ff60(uVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar2);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar15);
  return;
}



/* Entry: 106baf814; end: 106baf8ff;  */

void FUN_106baf814(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  
  puVar1 = PTR_PTR_1126d0eb0;
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = param_2;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  puVar6 = puVar2;
  func_0x00010c036fc0();
  _objc_release(param_3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
    ___stack_chk_fail();
    puVar1 = PTR_PTR_1126d0eb0;
    _objc_retain(puVar6);
    _objc_retain(uVar5);
    _objc_alloc(puVar1);
    uVar3 = uVar5;
    func_0x00010c100120(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010c2413c0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25aa80();
    _objc_release(uVar5);
    func_0x00010c036fc0(puVar1);
    _objc_release(puVar6);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106baf900; end: 106baf9db;  */

void FUN_106baf900(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126d0eb0;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010c100120(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c2413c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25aa80();
  _objc_release(param_2);
  func_0x00010c036fc0(puVar1);
  _objc_release(param_3);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106baf9dc; end: 106bafbf7;  */

void FUN_106baf9dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126d0eb0;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010c100120(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c2413c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010c241360(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25aa80();
  _objc_release(param_2);
  func_0x00010c036fc0(puVar1);
  _objc_release(param_3);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106bafbf8; end: 106bafe93;  */

void FUN_106bafbf8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126d0eb0;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010c100120(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c2413c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010c241360(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  func_0x00010bf624a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_2;
  func_0x00010bf3d020(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25aa80();
  _objc_release(param_2);
  func_0x00010c036fc0(puVar1);
  _objc_release(param_3);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106bafe94; end: 106bafedb;  */

void FUN_106bafe94(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6bb60();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106bafedc; end: 106bb0a13; -[SCSharedStoryProfileStorySectionDataProvider _onStoryUpdate:] */

void FUN_106bafedc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  long lVar18;
  long lVar19;
  undefined *puVar20;
  long lVar21;
  undefined *puVar22;
  undefined *puVar23;
  long lVar24;
  long lVar25;
  undefined *puVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined *puStack_3b8;
  undefined *puStack_380;
  undefined8 uStack_378;
  code *pcStack_370;
  undefined *puStack_368;
  undefined *puStack_360;
  undefined1 auStack_358 [8];
  undefined *puStack_350;
  undefined8 uStack_348;
  code *pcStack_340;
  undefined *puStack_338;
  long lStack_330;
  undefined *puStack_328;
  undefined *puStack_320;
  undefined *puStack_318;
  undefined *puStack_310;
  undefined8 *puStack_308;
  undefined8 *puStack_300;
  undefined8 *puStack_2f8;
  undefined8 *puStack_2f0;
  undefined8 *puStack_2e8;
  undefined *puStack_2e0;
  undefined8 uStack_2d8;
  undefined8 *puStack_2d0;
  undefined8 uStack_2c8;
  undefined1 uStack_2c0;
  undefined *puStack_2b8;
  undefined8 uStack_2b0;
  code *pcStack_2a8;
  undefined *puStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 *puStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 *puStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 *puStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 *puStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  long *plStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_188;
  undefined1 auStack_100 [128];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  puVar1 = param_5;
  func_0x00010c100120();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    puStack_3b8 = PTR_PTR_1126b1338;
    _objc_alloc();
    func_0x00010c04dbe0();
  }
  else {
    _objc_retain(puVar2);
    puStack_3b8 = puVar2;
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  puStack_228 = &uStack_230;
  uStack_230 = 0;
  uStack_220 = 0x2020000000;
  uStack_218 = 0;
  puStack_248 = &uStack_250;
  uStack_250 = 0;
  uStack_240 = 0x2020000000;
  uStack_238 = 0;
  puStack_268 = &uStack_270;
  uStack_270 = 0;
  uStack_260 = 0x2020000000;
  uStack_258 = 0;
  puStack_288 = &uStack_290;
  uStack_290 = 0;
  uStack_280 = 0x2020000000;
  uStack_278 = 0;
  uVar3 = *(undefined8 *)(param_3 + 0x18);
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_5;
  func_0x00010c241360();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_5;
  func_0x00010bf3cfe0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_5;
  func_0x00010bf3d020();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = param_5;
  func_0x00010c2413c0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puStack_3b8;
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  puStack_2b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_2b0 = 0xc2000000;
  pcStack_2a8 = FUN_106bb0a14;
  puStack_2a0 = &UNK_110965190;
  puVar7 = puVar6;
  uStack_298 = uVar3;
  func_0x000100504554();
  _objc_release(puVar6);
  puVar6 = puVar7;
  func_0x00010bf529e0();
  if (puVar6 == (undefined *)0x0) {
    func_0x00010be6bb80(param_3);
  }
  else {
    puStack_2e0 = puVar6 + -1;
    puStack_308 = &uStack_2d8;
    uStack_2d8 = 0;
    uStack_2c8 = 0x2020000000;
    uStack_2c0 = 0;
    puStack_350 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_348 = 0xc2000000;
    pcStack_340 = FUN_106bb0a90;
    puStack_338 = &UNK_1109651c0;
    puStack_300 = &uStack_270;
    puStack_2f8 = &uStack_290;
    puStack_2f0 = &uStack_230;
    puStack_2e8 = &uStack_250;
    puVar6 = puVar7;
    lStack_330 = param_3;
    puStack_328 = puVar5;
    puStack_320 = puVar1;
    puStack_318 = puVar2;
    puStack_310 = puVar4;
    puStack_2d0 = puStack_308;
    func_0x00010bd86420(puVar7,&puStack_350);
    puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = &PTR____CFConstantStringClassReference_110e76fb8;
    FUN_106bb1434(&PTR____CFConstantStringClassReference_110e76fb8,puVar8,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    puVar8 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
    _objc_alloc();
    puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x000106bb1d50();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e840();
    _objc_release(puVar11);
    _objc_release(puVar10);
    puVar10 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSTextAttachment_1126b2a20;
    _objc_opt_new();
    func_0x00010c23d0a0(puVar10);
    uVar27 = 0;
    uVar28 = 0xc000000000000000;
    func_0x00010c1739e0(0,0xc000000000000000,param_1,param_2,puVar11);
    func_0x00010c1a9f00(puVar11);
    puVar12 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    func_0x00010bf0e420(PTR__OBJC_CLASS___NSAttributedString_1126af068);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf069e0(puVar8);
    _objc_release(puVar12);
    if (puStack_288[3] != 0) {
      puVar12 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
      _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
      puVar13 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar13;
      func_0x000106bb1d50();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04e840(puVar12);
      _objc_release(puVar14);
      _objc_release(puVar13);
      puVar13 = PTR__OBJC_CLASS___NSTextAttachment_1126b2a20;
      _objc_opt_new(PTR__OBJC_CLASS___NSTextAttachment_1126b2a20);
      puVar14 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c23d0a0();
      func_0x00010c1739e0(0,0xc000000000000000,uVar27,uVar28,puVar13);
      func_0x00010c1a9f00(puVar13);
      func_0x00010bf069e0(puVar8);
      puVar15 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
      func_0x00010bf0e420(PTR__OBJC_CLASS___NSAttributedString_1126af068);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf069e0(puVar8);
      _objc_release(puVar15);
      _objc_release(puVar14);
      _objc_release(puVar13);
      _objc_release(puVar12);
    }
    puVar13 = puVar8;
    func_0x00010bf51e00();
    puVar14 = puVar6;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar14;
    func_0x00010bf4ddc0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR_PTR_1126d0eb8;
    _objc_opt_class(PTR_PTR_1126d0eb8);
    puVar16 = puVar15;
    _objc_opt_isKindOfClass(puVar15,puVar12);
    puVar12 = puVar15;
    if (((ulong)puVar16 & 1) == 0) {
      puVar12 = (undefined *)0x0;
    }
    _objc_retain(puVar12);
    _objc_release(puVar15);
    puVar15 = puVar12;
    func_0x00010c268c60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar12);
    puVar12 = param_5;
    func_0x00010c2413c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar7);
    _objc_retain(puVar12);
    lStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    plStack_1c0 = (long *)0x0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    puVar16 = puVar7;
    func_0x00010c140180();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar16;
    func_0x00010bf52a60();
    if (puVar17 != (undefined *)0x0) {
      lVar24 = *plStack_1c0;
      do {
        puVar26 = (undefined *)0x0;
        do {
          if (*plStack_1c0 != lVar24) {
            _objc_enumerationMutation(puVar16);
          }
          lVar25 = *(long *)(lStack_1c8 + (long)puVar26 * 8);
          lVar18 = lVar25;
          func_0x00010c15f2e0();
          _objc_retainAutoreleasedReturnValue();
          if (lVar18 == 0) {
LAB_106bb05a0:
            _objc_retain(lVar25);
            _objc_release(puVar16);
            if (lVar25 == 0) goto LAB_106bb05b4;
            goto LAB_106bb0608;
          }
          lVar19 = lVar25;
          func_0x00010c15f2e0(lVar25);
          _objc_retainAutoreleasedReturnValue();
          puVar20 = puVar12;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          if (puVar20 == (undefined *)0x0) {
            _objc_release(lVar19);
            _objc_release(lVar18);
            goto LAB_106bb05a0;
          }
          lVar21 = lVar25;
          func_0x00010c15f2e0(lVar25);
          _objc_retainAutoreleasedReturnValue();
          puVar22 = puVar12;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar23 = puVar22;
          func_0x00010c29ea60();
          _objc_release(puVar22);
          _objc_release(lVar21);
          _objc_release(puVar20);
          _objc_release(lVar19);
          _objc_release(lVar18);
          if ((int)puVar23 == 0) goto LAB_106bb05a0;
          puVar26 = puVar26 + 1;
        } while (puVar17 != puVar26);
        puVar17 = puVar16;
        func_0x00010bf52a60();
      } while (puVar17 != (undefined *)0x0);
    }
    _objc_release(puVar16);
LAB_106bb05b4:
    uStack_1e8 = 0;
    uStack_1f0 = 0;
    uStack_1d8 = 0;
    uStack_1e0 = 0;
    plStack_208 = (long *)0x0;
    uStack_210 = 0;
    uStack_1f8 = 0;
    uStack_200 = 0;
    puVar16 = puVar7;
    func_0x00010c140180();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar16;
    func_0x00010bf52a60();
    if (puVar17 == (undefined *)0x0) {
      lVar25 = 0;
    }
    else {
      lVar25 = *plStack_208;
      _objc_retain(lVar25);
    }
    _objc_release(puVar16);
LAB_106bb0608:
    _objc_release(puVar12);
    _objc_release(puVar7);
    _objc_release(puVar12);
    lVar24 = lVar25;
    FUN_106bb1388();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR_PTR_1126d0ec8;
    _objc_alloc(PTR_PTR_1126d0ec8);
    puVar16 = PTR_PTR_1126b02a8;
    _objc_alloc(PTR_PTR_1126b02a8);
    func_0x00010c01b460();
    puVar17 = PTR_PTR_1126b02a8;
    _objc_alloc();
    func_0x00010c01b460();
    puVar26 = param_5;
    func_0x00010c0723c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c053840(puVar12);
    _objc_release(puVar26);
    _objc_release(puVar17);
    _objc_release(puVar16);
    puVar16 = PTR_PTR_1126aea98;
    _objc_alloc();
    puVar17 = PTR_PTR_1126d0ed0;
    _objc_opt_class(PTR_PTR_1126d0ed0);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bffd260();
    _objc_release(puVar17);
    puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_188 = puVar16;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0723c0();
    _objc_retainAutoreleasedReturnValue();
    puVar26 = param_5;
    func_0x00010bf1f3c0();
    _objc_release(param_5);
    puVar20 = puVar17;
    if ((int)puVar26 != 0) {
      func_0x00010bf09f80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar17);
    }
    _objc_initWeak(auStack_100,param_3);
    puStack_380 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_378 = 0xc2000000;
    pcStack_370 = FUN_106bb157c;
    puStack_368 = &UNK_110841fb0;
    _objc_copyWeak(auStack_358,auStack_100);
    _objc_retain(puVar20);
    puStack_360 = puVar20;
    func_0x0001000d76cc("APPSTORE",&puStack_380);
    _objc_release(puStack_360);
    _objc_destroyWeak(auStack_358);
    _objc_destroyWeak(auStack_100);
    _objc_release(puVar20);
    _objc_release(puVar16);
    _objc_release(puVar12);
    _objc_release(lVar24);
    _objc_release(lVar25);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar8);
    _objc_release(ppuVar9);
    _objc_release(puVar6);
    __Block_object_dispose(&uStack_2d8,8);
  }
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(uVar3);
  __Block_object_dispose(&uStack_290,8);
  __Block_object_dispose(&uStack_270,8);
  __Block_object_dispose(&uStack_250,8);
  __Block_object_dispose(&uStack_230,8);
  _objc_release(puStack_3b8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_2d8,8);
  __Block_object_dispose(&uStack_290,8);
  __Block_object_dispose(&uStack_270,8);
  __Block_object_dispose(&uStack_250,8);
  uVar28 = 8;
  __Block_object_dispose(&uStack_230);
  __Unwind_Resume();
  _objc_retain(uVar28);
  uVar3 = uVar28;
  func_0x00010bf5bbc0();
  _objc_retainAutoreleasedReturnValue();
  uVar27 = uVar3;
  func_0x00010c0720c0();
  _objc_release(uVar3);
  if ((int)uVar27 == 0) {
    uVar3 = 0;
  }
  else {
    _objc_retain(uVar28);
    uVar3 = uVar28;
  }
  _objc_release(uVar28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106bb0a14; end: 106bb0a8f;  */

void FUN_106bb0a14(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar2 = param_2;
  func_0x00010bf5bbc0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  if ((int)uVar1 == 0) {
    uVar2 = 0;
  }
  else {
    _objc_retain(param_2);
    uVar2 = param_2;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106bb0a90; end: 106bb1387;  */

void FUN_106bb0a90(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  undefined *puVar26;
  undefined8 uVar27;
  long lStack_88;
  
  _objc_retain(param_4);
  lVar3 = param_4;
  FUN_106bb1388();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(*(long *)(param_3 + 0x20) + 0x58);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(*(long *)(param_3 + 0x20) + 0x18);
  func_0x00010c2923e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(*(long *)(param_3 + 0x20) + 0x10);
  func_0x00010bf5a820(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar27 = uVar6;
  func_0x00010bf5bbc0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar4;
  func_0x00010c268c80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar27);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  lVar8 = param_4;
  func_0x00010c12fc80();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010bf30620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  uVar22 = *(ulong *)(param_3 + 0x28);
  _objc_retain(param_4);
  _objc_retain(uVar22);
  lVar8 = param_4;
  func_0x00010c15f2e0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar8;
  func_0x00010c08fa60();
  if (lVar10 == 0) {
    _objc_release(lVar8);
    _objc_release(uVar22);
    _objc_release(param_4);
LAB_106bb0c50:
    *(undefined1 *)(*(long *)(*(long *)(param_3 + 0x48) + 8) + 0x18) = 1;
  }
  else {
    lVar10 = param_4;
    func_0x00010c15f2e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar25 = uVar22;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar25;
    func_0x00010c29ea60();
    _objc_release(uVar25);
    _objc_release(lVar10);
    _objc_release(lVar8);
    _objc_release(uVar22);
    _objc_release(param_4);
    if ((uVar11 & 1) == 0) goto LAB_106bb0c50;
  }
  lVar8 = lVar9;
  func_0x00010c08fa60();
  if (lVar8 == 0) {
    lStack_88 = 0;
  }
  else {
    _objc_retain(lVar9);
    lVar8 = lVar9;
    func_0x00010c08fa60();
    if (lVar8 == 0) {
      lStack_88 = 0;
    }
    else {
      puVar12 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      lStack_88 = lVar9;
      FUN_106bb1434(lVar9,puVar12,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar12);
    }
    _objc_release(lVar9);
  }
  lVar23 = *(long *)(param_3 + 0x30);
  lVar8 = param_4;
  func_0x00010c15f2e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_retain(lVar23);
  lVar8 = lVar23;
  func_0x00010bfb91e0();
  lVar10 = lVar23;
  func_0x00010c0edf40();
  _objc_release(lVar23);
  lVar21 = *(long *)(*(long *)(param_3 + 0x50) + 8);
  uVar22 = *(ulong *)(lVar21 + 0x18);
  if (uVar22 <= (ulong)(lVar10 + lVar8)) {
    uVar22 = lVar10 + lVar8;
  }
  *(ulong *)(lVar21 + 0x18) = uVar22;
  _objc_retain(lVar23);
  lVar8 = lVar23;
  func_0x00010bfb8ac0();
  lVar10 = lVar23;
  func_0x00010c0edf20();
  _objc_release(lVar23);
  lVar21 = *(long *)(*(long *)(param_3 + 0x58) + 8);
  *(long *)(lVar21 + 0x18) = *(long *)(lVar21 + 0x18) + lVar10 + lVar8;
  lVar24 = *(long *)(param_3 + 0x38);
  _objc_retain(lVar24);
  lVar21 = param_4;
  func_0x00010bf3cf60(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar21;
  func_0x000108ea5f00();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar24;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar24);
  _objc_release(lVar13);
  _objc_release(lVar21);
  if (lVar14 != 0) {
    func_0x00010bf885a0(lVar14);
  }
  _objc_release(lVar14);
  lVar24 = *(long *)(param_3 + 0x40);
  _objc_retain(lVar24);
  lVar21 = param_4;
  func_0x00010bf3cf60(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar21;
  func_0x000108ea5f00();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar24;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar24);
  _objc_release(lVar13);
  _objc_release(lVar21);
  if (lVar14 != 0) {
    lVar21 = lVar14;
    func_0x00010c067fc0();
    if ((lVar21 + 6U < 7) && ((1L << (lVar21 + 6U & 0x3f) & 0x45U) != 0)) {
      _objc_release(lVar14);
      lVar21 = *(long *)(*(long *)(param_3 + 0x60) + 8);
      *(long *)(lVar21 + 0x18) = *(long *)(lVar21 + 0x18) + 1;
      bVar1 = true;
      goto LAB_106bb0ed4;
    }
  }
  _objc_release(lVar14);
  bVar1 = false;
LAB_106bb0ed4:
  uVar25 = *(ulong *)(param_3 + 0x40);
  _objc_retain(uVar25);
  lVar21 = param_4;
  func_0x00010bf3cf60(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar21;
  func_0x000108ea5f00();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar25;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar25);
  _objc_release(lVar13);
  _objc_release(lVar21);
  if (uVar22 == 0) {
    _objc_release(0);
    bVar2 = false;
  }
  else {
    uVar25 = uVar22;
    func_0x00010c067fc0();
    bVar2 = ((uVar25 ^ 0xffffffffffffffff) & 0xfffffffffffffffb) == 0 ||
            uVar25 == 0xfffffffffffffff9;
    _objc_release(uVar22);
    if ((uVar25 + 7 < 7) && ((1L << (uVar25 + 7 & 0x3f) & 0x45U) != 0)) {
      lVar21 = *(long *)(*(long *)(param_3 + 0x68) + 8);
      *(long *)(lVar21 + 0x18) = *(long *)(lVar21 + 0x18) + 1;
    }
  }
  puVar12 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
  _objc_alloc();
  puVar15 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar15;
  func_0x000106bb1d50();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e840();
  _objc_release(puVar16);
  _objc_release(puVar15);
  puVar15 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR__OBJC_CLASS___NSTextAttachment_1126b2a20;
  _objc_opt_new(PTR__OBJC_CLASS___NSTextAttachment_1126b2a20);
  func_0x00010c23d0a0(puVar15);
  uVar27 = 0;
  uVar4 = 0xc000000000000000;
  func_0x00010c1739e0(0,0xc000000000000000,param_1,param_2,puVar16);
  func_0x00010c1a9f00(puVar16);
  puVar17 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  func_0x00010bf0e420(PTR__OBJC_CLASS___NSAttributedString_1126af068);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf069e0(puVar12);
  _objc_release(puVar17);
  if (lVar10 + lVar8 != 0) {
    puVar17 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
    puVar26 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar26;
    func_0x000106bb1d50();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e840(puVar17);
    _objc_release(puVar18);
    _objc_release(puVar26);
    puVar26 = PTR__OBJC_CLASS___NSTextAttachment_1126b2a20;
    _objc_opt_new(PTR__OBJC_CLASS___NSTextAttachment_1126b2a20);
    puVar18 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0();
    func_0x00010c1739e0(0,0xc000000000000000,uVar27,uVar4,puVar26);
    func_0x00010c1a9f00(puVar26);
    func_0x00010bf069e0(puVar12);
    puVar19 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    func_0x00010bf0e420(PTR__OBJC_CLASS___NSAttributedString_1126af068);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf069e0(puVar12);
    _objc_release(puVar19);
    _objc_release(puVar18);
    _objc_release(puVar26);
    _objc_release(puVar17);
  }
  puVar17 = puVar12;
  func_0x00010bf51e00(puVar12);
  lVar8 = param_4;
  func_0x00010c26f2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar8;
  func_0x00010c2709c0();
  func_0x000109021670();
  _objc_retainAutoreleasedReturnValue();
  puVar26 = (undefined *)0x0;
  if ((!bVar1 && !bVar2) && (lVar10 != 0)) {
    puVar18 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010bfb5a00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    puVar26 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
    puVar19 = puVar26;
    func_0x000106bb1d50();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e840(puVar26);
    _objc_release(puVar19);
    _objc_release(puVar18);
  }
  _objc_release(lVar10);
  _objc_release(lVar8);
  puVar18 = PTR_PTR_1126d0eb8;
  _objc_alloc(PTR_PTR_1126d0eb8);
  func_0x00010c053820();
  puVar19 = PTR_PTR_1126aea98;
  _objc_alloc(PTR_PTR_1126aea98);
  puVar20 = PTR_PTR_1126d0ec0;
  _objc_opt_class(PTR_PTR_1126d0ec0);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffd260(puVar19);
  _objc_release(puVar20);
  _objc_release(puVar18);
  _objc_release(puVar26);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar12);
  _objc_release(lVar23);
  _objc_release(lStack_88);
  _objc_release(lVar9);
  _objc_release(uVar7);
  _objc_release(lVar3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar19);
  return;
}



/* Entry: 106bb1388; end: 106bb1433;  */

void FUN_106bb1388(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010c26d760();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar3 = param_1;
    func_0x000107d22fdc(param_1,0,0,1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar2 = param_1;
    func_0x00010c26d760(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    lVar3 = lVar2;
    func_0x000107d227d0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    param_1 = lVar2;
  }
  _objc_release(param_1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 106bb1434; end: 106bb157b;  */

void FUN_106bb1434(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  lVar1 = param_1;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    func_0x00010052bbec();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfb3e40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    puVar5 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
    func_0x00010c04e840();
    _objc_release(puVar3);
  }
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6bb80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106bb157c; end: 106bb15af;  */

void FUN_106bb157c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6bb80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106bb15b0; end: 106bb1603; -[SCSharedStoryProfileStorySectionDataProvider _onStoryUpdateMainQueue:] */

void FUN_106bb15b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  _objc_release(uVar1);
  func_0x00010bf64120(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c155aa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106bb1604; end: 106bb1607; -[SCSharedStoryProfileStorySectionDataProvider _updateExpansionState] */

void FUN_106bb1604(void)

{
  return;
}



/* Entry: 106bb1608; end: 106bb1643; -[SCSharedStoryProfileStorySectionDataProvider numberOfItemsInSection:] */

long FUN_106bb1608(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    lVar1 = 1;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x30);
    func_0x00010bf529e0(lVar1);
    lVar1 = lVar1 + 1;
  }
  return lVar1;
}



/* Entry: 106bb1644; end: 106bb175b; -[SCSharedStoryProfileStorySectionDataProvider contentCellClassesByReuseIdentifier] */

void FUN_106bb1644(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined **ppuStack_90;
  undefined *puStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126d0ed0;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d0ed0;
  puStack_68 = puVar1;
  _objc_opt_class();
  puVar3 = PTR_PTR_1126d0ec0;
  puStack_50 = puVar2;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d0ec0;
  puStack_60 = puVar3;
  _objc_opt_class();
  puVar4 = PTR_PTR_1126d0ed8;
  puStack_48 = puVar2;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d0ed8;
  puStack_58 = puVar4;
  _objc_opt_class();
  ppuVar6 = &puStack_50;
  ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_40 = puVar2;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    pcStack_78 = FUN_106bb175c;
    uVar7 = *(undefined8 *)(puVar2 + 0x30);
    puStack_a0 = puVar4;
    puStack_98 = puVar3;
    ppuStack_90 = ppuVar5;
    puStack_88 = puVar1;
    puStack_80 = &stack0xfffffffffffffff0;
    _objc_retain(ppuVar6);
    func_0x00010bf51e00();
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0xc2000000;
    pcStack_c0 = FUN_106bb1804;
    puStack_b8 = &UNK_11086b8d0;
    puStack_b0 = puVar2;
    uStack_a8 = uVar7;
    _objc_retain();
    ppuVar5 = ppuVar6;
    func_0x000100504554(ppuVar6,&puStack_d0);
    _objc_release(ppuVar6);
    _objc_release(uStack_a8);
    _objc_release(uVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar5);
  return;
}



/* Entry: 106bb175c; end: 106bb1803; -[SCSharedStoryProfileStorySectionDataProvider containerCellViewModelsForIndexPaths:] */

void FUN_106bb175c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(param_3);
  func_0x00010bf51e00();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106bb1804;
  puStack_48 = &UNK_11086b8d0;
  lStack_40 = param_1;
  uStack_38 = uVar2;
  _objc_retain();
  uVar1 = param_3;
  func_0x000100504554(param_3,&puStack_60);
  _objc_release(param_3);
  _objc_release(uStack_38);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106bb1804; end: 106bb1947;  */

void FUN_106bb1804(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c0840e0();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x30);
  func_0x00010bf529e0();
  if (lVar1 < lVar2) {
    puVar7 = *(undefined **)(param_1 + 0x28);
    func_0x00010c0840e0(param_2);
    func_0x00010c0dfd40(puVar7);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar7 = PTR_PTR_1126aea98;
    _objc_alloc(PTR_PTR_1126aea98);
    puVar3 = PTR_PTR_1126d0ed8;
    _objc_opt_class(PTR_PTR_1126d0ed8);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126d0ee0;
    _objc_alloc(PTR_PTR_1126d0ee0);
    puVar5 = puVar4;
    func_0x000108f58d74();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b02a8;
    _objc_alloc(PTR_PTR_1126b02a8);
    func_0x00010c01b460();
    func_0x00010c053900(puVar4);
    func_0x00010bffd260(puVar7);
    _objc_release(puVar4);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar3);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 106bb1948; end: 106bb1b33; -[SCSharedStoryProfileStorySectionDataProvider configurationBlocksByReuseIdentifier] */

void FUN_106bb1948(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_initWeak(auStack_a0,param_1);
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_106bb1b34;
  puStack_b0 = &UNK_110845ae0;
  puVar10 = auStack_a0;
  _objc_copyWeak(auStack_a8,puVar10);
  ppuVar1 = &puStack_c8;
  _objc_retainBlock();
  puVar2 = PTR_PTR_1126d0ed0;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  puStack_98 = puVar2;
  _objc_retainBlock();
  puVar4 = PTR_PTR_1126d0ec0;
  ppuStack_80 = ppuVar3;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar1;
  puStack_90 = puVar4;
  _objc_retainBlock();
  puVar6 = PTR_PTR_1126d0ed8;
  ppuStack_78 = ppuVar5;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = ppuVar1;
  puStack_88 = puVar6;
  _objc_retainBlock();
  puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  ppuStack_70 = ppuVar7;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar7);
  _objc_release(puVar6);
  _objc_release(ppuVar5);
  _objc_release(puVar4);
  _objc_release(ppuVar3);
  _objc_release(puVar2);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_a8);
  puVar9 = auStack_a0;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_a0);
  __Unwind_Resume(puVar9);
  _objc_retain(puVar10);
  puVar9 = puVar9 + 0x20;
  _objc_loadWeakRetained(puVar9);
  func_0x00010bde5380();
  _objc_release(puVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar9);
  return;
}



/* Entry: 106bb1b34; end: 106bb1b7b;  */

void FUN_106bb1b34(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde5380();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106bb1b7c; end: 106bb1be7; -[SCSharedStoryProfileStorySectionDataProvider _configureMemberCell:] */

void FUN_106bb1b7c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010010fab4(param_3,PTR_DAT_1126a5758);
  lVar1 = param_3;
  if ((int)lVar2 == 0) {
    lVar1 = 0;
  }
  _objc_retain(lVar1);
  if (lVar1 != 0) {
    func_0x00010c20c920(param_3);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106bb1be8; end: 106bb1bfb; +[SCSharedStoryProfileStorySectionDataProvider announcerIdentifier] */

void FUN_106bb1be8(void)

{
  _objc_opt_class();
                    /* WARNING: Could not recover jumptable at 0x00010bdbc488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__NSStringFromClass_1103455e8)();
  return;
}



/* Entry: 106bb1bfc; end: 106bb1bff; -[SCSharedStoryProfileStorySectionDataProvider addListener:] */

void FUN_106bb1bfc(void)

{
  return;
}



/* Entry: 106bb1c00; end: 106bb1c03; -[SCSharedStoryProfileStorySectionDataProvider removeListener:] */

void FUN_106bb1c00(void)

{
  return;
}



/* Entry: 106bb1c04; end: 106bb1c1b; -[SCSharedStoryProfileStorySectionDataProvider dataProviderDelegate] */

void FUN_106bb1c04(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106bb1c1c; end: 106bb1c27; -[SCSharedStoryProfileStorySectionDataProvider setDataProviderDelegate:] */

void FUN_106bb1c1c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x78,param_3);
  return;
}



/* Entry: 106bb1c28; end: 106bb1c2f; -[SCSharedStoryProfileStorySectionDataProvider sectionDataModel] */

undefined8 FUN_106bb1c28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 106bb1c30; end: 106bb1c37; -[SCSharedStoryProfileStorySectionDataProvider setSectionDataModel:] */

void FUN_106bb1c30(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106bb1c38; end: 106bb1c3f; -[SCSharedStoryProfileStorySectionDataProvider updateQueuePerformer] */

undefined8 FUN_106bb1c38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 106bb1c40; end: 106bb1c6f; -[SCSharedStoryProfileStorySectionDataProvider setUpdateQueuePerformer:] */

void FUN_106bb1c40(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106bb1c70; end: 106bb1e93; -[SCSharedStoryProfileStorySectionDataProvider .cxx_destruct] */

void FUN_106bb1c70(long param_1)

{
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_destroyWeak(param_1 + 0x78);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106bb1e94; end: 106bb203b; -[SCSharedStoryProfileStoryUpdate initWithPlaybackSequences:snapIdToViewState:snapIdToSnapViewers:customStoryMetadata:clientIdToPostingState:clientIdToPostingProgress:storyPrivacy:isExpandedValue:] */

undefined1 *
FUN_106bb1e94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126f5740;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106bb203c; end: 106bb205f; -[SCSharedStoryProfileStoryUpdate copyWithZone:] */

undefined8 FUN_106bb203c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106bb2060; end: 106bb211b; -[SCSharedStoryProfileStoryUpdate hash] */

undefined8 * FUN_106bb2060(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_68 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x38);
  uStack_30 = *(undefined8 *)(param_1 + 0x40);
  lStack_38 = -lVar5;
  if (-1 < lVar5) {
    lStack_38 = lVar5;
  }
  uStack_40 = uVar2;
  func_0x00010bfde980();
  puVar3 = &uStack_68;
  func_0x000100505190(puVar3,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_106bb2224:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_106bb2230;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (puVar3[7] == param_3[7])) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[3];
          if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = puVar3[4];
            if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = puVar3[5];
              if ((lVar5 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                lVar5 = puVar3[6];
                if ((lVar5 == param_3[6]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                  puVar6 = (undefined8 *)puVar3[8];
                  if (puVar6 != (undefined8 *)param_3[8]) {
                    func_0x00010c071ae0();
                    goto LAB_106bb2230;
                  }
                  goto LAB_106bb2224;
                }
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_106bb2230:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 106bb211c; end: 106bb224b; -[SCSharedStoryProfileStoryUpdate isEqual:] */

long FUN_106bb211c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106bb2224:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106bb2230;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x38) == *(long *)(param_3 + 0x38))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x28);
              if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x30);
                if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x40);
                  if (lVar3 != *(long *)(param_3 + 0x40)) {
                    func_0x00010c071ae0();
                    goto LAB_106bb2230;
                  }
                  goto LAB_106bb2224;
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_106bb2230:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106bb224c; end: 106bb2253; -[SCSharedStoryProfileStoryUpdate playbackSequences] */

undefined8 FUN_106bb224c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106bb2254; end: 106bb225b; -[SCSharedStoryProfileStoryUpdate snapIdToViewState] */

undefined8 FUN_106bb2254(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106bb225c; end: 106bb2263; -[SCSharedStoryProfileStoryUpdate snapIdToSnapViewers] */

undefined8 FUN_106bb225c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106bb2264; end: 106bb226b; -[SCSharedStoryProfileStoryUpdate customStoryMetadata] */

undefined8 FUN_106bb2264(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106bb226c; end: 106bb2273; -[SCSharedStoryProfileStoryUpdate clientIdToPostingState] */

undefined8 FUN_106bb226c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106bb2274; end: 106bb227b; -[SCSharedStoryProfileStoryUpdate clientIdToPostingProgress] */

undefined8 FUN_106bb2274(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106bb227c; end: 106bb2283; -[SCSharedStoryProfileStoryUpdate storyPrivacy] */

undefined8 FUN_106bb227c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106bb2284; end: 106bb228b; -[SCSharedStoryProfileStoryUpdate isExpandedValue] */

undefined8 FUN_106bb2284(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 106bb228c; end: 106bb22f7; -[SCSharedStoryProfileStoryUpdate .cxx_destruct] */

void FUN_106bb228c(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106bb22f8; end: 106bb289b; -[SCShoppingLensLauncherEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bb22f8(undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined1 *puVar14;
  long lVar15;
  undefined8 uVar16;
  undefined1 auStack_158 [8];
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar11 = param_1;
  _objc_initWeak(auStack_110,param_1);
  lVar15 = (long)_DAT_112759b9c;
  puVar1 = param_1 + lVar15;
  _objc_loadWeakRetained();
  puVar2 = puVar1;
  func_0x00010c098240();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf529e0();
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (puVar3 != (undefined1 *)0x0) {
    puVar4 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar12 = *(undefined8 *)(param_1 + _DAT_112759ba0);
    *(undefined **)(param_1 + _DAT_112759ba0) = puVar4;
    _objc_release(uVar12);
    lVar13 = (long)_DAT_112759ba4;
    puVar1 = param_1 + lVar13;
    _objc_loadWeakRetained();
    puVar2 = puVar1;
    func_0x00010c094ce0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar2 = param_1;
    func_0x00010be5c2c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bc060(puVar3);
    puVar1 = param_1 + _DAT_112759ba8;
    _objc_loadWeakRetained();
    puVar5 = puVar1;
    func_0x00010c116160();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar1);
    puVar1 = param_1 + lVar13;
    _objc_loadWeakRetained();
    puVar5 = puVar1;
    func_0x00010c23b100();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar1);
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    lStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    plStack_140 = (long *)0x0;
    puVar1 = param_1 + lVar15;
    _objc_loadWeakRetained();
    puVar5 = puVar1;
    func_0x00010c098240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = puVar5;
    func_0x00010bf52a60();
    if (puVar1 != (undefined1 *)0x0) {
      lVar13 = *plStack_140;
      do {
        puVar14 = (undefined1 *)0x0;
        do {
          if (*plStack_140 != lVar13) {
            _objc_enumerationMutation(puVar5);
          }
          puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          uVar16 = *(undefined8 *)(lStack_148 + (long)puVar14 * 8);
          puVar8 = param_1 + lVar15;
          _objc_loadWeakRetained(puVar8);
          func_0x00010c159e20();
          func_0x00010c0df880();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
          puStack_108 = puVar4;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          uVar12 = uVar16;
          func_0x00010c094540(uVar16);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c10a880(puVar6);
          _objc_release(uVar12);
          _objc_release(puVar9);
          _objc_release(puVar4);
          _objc_release(puVar8);
          puVar8 = param_1 + lVar15;
          _objc_loadWeakRetained();
          puVar10 = puVar8;
          func_0x00010c108ce0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(puVar8);
          if (puVar10 != (undefined1 *)0x0) {
            puVar11 = param_1 + lVar15;
            _objc_loadWeakRetained(puVar11);
            puVar8 = puVar11;
            func_0x00010c108ce0();
            _objc_retainAutoreleasedReturnValue();
            uVar12 = uVar16;
            func_0x00010c094540(uVar16);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1e0820(puVar7);
            _objc_release(uVar12);
            _objc_release(puVar8);
            _objc_release(puVar11);
            func_0x00010c094540(uVar16);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar6;
            func_0x00010c159e40(puVar6);
            _objc_retainAutoreleasedReturnValue();
            puVar11 = auStack_110;
            _objc_copyWeak(auStack_158,puVar11);
            puVar10 = puVar8;
            func_0x00010c25ff60(puVar8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf1a3e0();
            _objc_release(puVar10);
            _objc_release(puVar8);
            _objc_release(uVar16);
            _objc_destroyWeak(auStack_158);
          }
          puVar14 = puVar14 + 1;
        } while (puVar1 != puVar14);
        puVar1 = puVar5;
        func_0x00010bf52a60();
      } while (puVar1 != (undefined1 *)0x0);
    }
    _objc_release(puVar5);
    puVar1 = param_1 + lVar15;
    _objc_loadWeakRetained();
    puVar5 = puVar1;
    func_0x00010c23dfe0();
    _objc_release(puVar1);
    if (((ulong)puVar5 & 1) == 0) {
      puVar4 = PTR_PTR_1126b5f28;
      _objc_alloc();
      uVar12 = *(undefined8 *)(param_1 + _DAT_112759bb8);
      _objc_retain(uVar12);
      puVar1 = param_1 + _DAT_112759bbc;
      _objc_loadWeakRetained(puVar1);
      func_0x00010c025fa0();
      uVar16 = *(undefined8 *)(param_1 + _DAT_112759bac);
      *(undefined **)(param_1 + _DAT_112759bac) = puVar4;
      _objc_release(uVar16);
      _objc_release(puVar1);
      _objc_release();
      func_0x000100078e94();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f7fc0();
      _objc_release(uVar12);
    }
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar2);
    _objc_release(puVar3);
  }
  puVar1 = auStack_110;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_110);
  __Unwind_Resume(puVar1);
  _objc_retain(puVar11);
  puVar1 = puVar1 + 0x20;
  _objc_loadWeakRetained(puVar1);
  func_0x00010be6aea0();
  _objc_release(puVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106bb289c; end: 106bb28e3;  */

void FUN_106bb289c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6aea0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106bb28e4; end: 106bb2943;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bb28e4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x20);
  lVar1 = lVar3 + _DAT_112759b9c;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c098240();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be7e860(lVar3,param_2,lVar2);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106bb2944; end: 106bb2b17; -[SCShoppingLensLauncherEntryPoint _makeShoppingLensLaunchInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bb2944(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  
  lVar15 = (long)_DAT_112759b9c;
  lVar1 = param_1 + lVar15;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c098240();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126d0ee8;
  _objc_alloc();
  lVar1 = param_1 + lVar15;
  _objc_loadWeakRetained();
  lVar5 = lVar1;
  func_0x00010c22cf60();
  lVar2 = param_1 + lVar15;
  _objc_loadWeakRetained();
  lVar6 = lVar2;
  func_0x00010c159e20();
  lVar7 = param_1 + lVar15;
  _objc_loadWeakRetained();
  lVar8 = lVar7;
  func_0x00010bf89460();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + lVar15;
  _objc_loadWeakRetained(lVar9);
  lVar10 = lVar9;
  func_0x00010c08bdc0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + lVar15;
  _objc_loadWeakRetained(lVar11);
  lVar12 = lVar11;
  func_0x00010c08bde0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1 + lVar15;
  _objc_loadWeakRetained();
  lVar14 = lVar13;
  func_0x00010c08be00();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar15;
  _objc_loadWeakRetained();
  lVar15 = param_1;
  func_0x00010c23dfe0();
  func_0x00010c024cc0(puVar4,param_2,lVar5,lVar3,lVar6,lVar8,lVar10,lVar12,lVar14,(char)lVar15);
  _objc_release(param_1);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106bb2b18; end: 106bb2b1f;  */

void FUN_106bb2b18(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c094550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_lensId_112602b60);
  return;
}



/* Entry: 106bb2b20; end: 106bb2d73; -[SCShoppingLensLauncherEntryPoint _presentShoppingLens:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bb2b20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae6b0;
  _objc_alloc(PTR_PTR_1126ae6b0);
  uVar5 = param_3;
  func_0x00010bfb1920(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c025e20(puVar1);
  _objc_release(uVar5);
  puVar6 = PTR__OBJC_CLASS___UIViewController_1126af898;
  _objc_alloc();
  func_0x00010c02f980();
  uVar5 = *(undefined8 *)(param_1 + _DAT_112759bb0);
  *(undefined **)(param_1 + _DAT_112759bb0) = puVar6;
  _objc_release(uVar5);
  lVar7 = (long)_DAT_112759b9c;
  lVar2 = param_1 + lVar7;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar7 = param_1 + lVar7;
  _objc_loadWeakRetained();
  lVar2 = lVar7;
  func_0x00010c108ce0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = PTR_PTR_1126d0ef0;
    _objc_alloc(PTR_PTR_1126d0ef0);
    func_0x00010bff8d60();
  }
  _objc_release(lVar2);
  _objc_release(lVar7);
  _objc_initWeak(auStack_58,param_1);
  uVar5 = *(undefined8 *)(param_1 + _DAT_112759bac);
  puVar4 = PTR_PTR_1126ae6b8;
  func_0x00010c0860a0(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be4ba60(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010c10b640(uVar5);
  _objc_release(param_1);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar6);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 106bb2d74; end: 106bb2e17;  */

void FUN_106bb2d74(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  FUN_106bb2e18();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  FUN_106bb2e18();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c22cec0(lVar3,param_2,lVar4);
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106bb2e18; end: 106bb2e3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bb2e18(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112759b9c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106bb2e3c; end: 106bb2f1b; -[SCShoppingLensLauncherEntryPoint _lensReplyParams] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bb2e3c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126ae6d0;
  _objc_alloc(PTR_PTR_1126ae6d0);
  param_1 = param_1 + _DAT_112759b9c;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c1320e0();
  func_0x00010c03e5a0(puVar1,param_2,0,lVar2,0xffffffffffffffff,0,0);
  _objc_release(param_1);
  puVar3 = PTR_PTR_1126ae6d8;
  _objc_alloc(PTR_PTR_1126ae6d8);
  func_0x00010c0460c0();
  puVar4 = PTR_PTR_1126b0100;
  _objc_alloc(PTR_PTR_1126b0100);
  func_0x00010bff7380();
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106bb2f1c; end: 106bb2f9b; -[SCShoppingLensLauncherEntryPoint _onProductSelected:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bb2f1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112759b9c;
  _objc_retain(param_3);
  param_1 = param_1 + lVar2;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c282800(param_3);
  _objc_release(param_3);
  func_0x00010c22cee0(lVar2,param_2,uVar1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106bb2f9c; end: 106bb30e7; -[SCShoppingLensLauncherEntryPoint _dismissUIContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bb2f9c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar3 = (long)_DAT_112759b9c;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_38,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_initWeak(auStack_40,param_1);
  param_1 = param_1 + lVar3;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_40);
  _objc_copyWeak(auStack_48,auStack_38);
  func_0x00010bf6f440(lVar1);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106bb30e8; end: 106bb313f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bb30e8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bfaf680(*(undefined8 *)(lVar1 + _DAT_112759bb4));
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010c22cea0();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106bb3140; end: 106bb328b; -[SCShoppingLensLauncherEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bb3140(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar4 = (long)_DAT_112759bb4;
  lVar1 = *(long *)(param_1 + lVar4);
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126afc98;
    func_0x00010bf0c040();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar2;
    _objc_release(uVar3);
    _objc_initWeak(auStack_38,param_1);
    lVar5 = (long)_DAT_112759bb0;
    lVar1 = *(long *)(param_1 + lVar5);
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      func_0x00010be03960(param_1);
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + lVar5);
      _objc_copyWeak(auStack_40,auStack_38);
      func_0x00010bf84b00(uVar3);
      _objc_destroyWeak(auStack_40);
    }
    lVar1 = *(long *)(param_1 + lVar4);
    func_0x00010c117720(lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_destroyWeak(auStack_38);
  }
  else {
    func_0x00010c117720();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106bb328c; end: 106bb32b7;  */

void FUN_106bb328c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be03960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



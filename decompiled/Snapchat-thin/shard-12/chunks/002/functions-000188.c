/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108f46b18; end: 108f46b3b; -[SCSelectionStoryCellViewModel copyWithZone:] */

undefined8 FUN_108f46b18(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108f46b3c; end: 108f46bb3; -[SCSelectionStoryCellViewModel hash] */

void FUN_108f46b3c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_68 = PTR_PTR_1126ff4d0;
  puStack_70 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_70,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108f46bb4; end: 108f46bf7; -[SCSelectionStoryCellViewModel internalInit] */

void FUN_108f46bb4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126ff4d0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108f46bf8; end: 108f46caf; -[SCSelectionStoryCellViewModel isEqual:] */

long FUN_108f46bf8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108f46c88:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108f46c94;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_108f46c94;
        }
        goto LAB_108f46c88;
      }
    }
    lVar3 = 0;
  }
LAB_108f46c94:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108f46cb0; end: 108f46d33; -[SCSelectionStoryCellViewModel matchListCell:carouselCell:] */

void FUN_108f46cb0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 == 0) goto LAB_108f46d18;
    lVar2 = 0x18;
    lVar1 = param_4;
  }
  else {
    if (*(long *)(param_1 + 8) != 0 || param_3 == 0) goto LAB_108f46d18;
    lVar2 = 0x10;
    lVar1 = param_3;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + lVar2));
LAB_108f46d18:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f46d34; end: 108f46d63; -[SCSelectionStoryCellViewModel .cxx_destruct] */

void FUN_108f46d34(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108f46d64; end: 108f46dc7; +[SCSelectionOurStoryCellViewModel listCellWithViewModel:] */

void FUN_108f46d64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126dc9e8;
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



/* Entry: 108f46dc8; end: 108f46deb; -[SCSelectionOurStoryCellViewModel copyWithZone:] */

undefined8 FUN_108f46dc8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108f46dec; end: 108f46e4b; -[SCSelectionOurStoryCellViewModel hash] */

void FUN_108f46dec(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  puVar2 = &uStack_28;
  uStack_20 = uVar1;
  func_0x000107c3191c(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_58 = PTR_PTR_1126ff4d8;
  puStack_60 = puVar2;
  _objc_msgSendSuper2(&puStack_60,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108f46e4c; end: 108f46e8f; -[SCSelectionOurStoryCellViewModel internalInit] */

void FUN_108f46e4c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126ff4d8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108f46e90; end: 108f46f2f; -[SCSelectionOurStoryCellViewModel isEqual:] */

long FUN_108f46e90(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108f46f14;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_108f46f14;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_108f46f14;
    }
  }
  lVar3 = 1;
LAB_108f46f14:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108f46f30; end: 108f46f4f; -[SCSelectionOurStoryCellViewModel matchListCell:] */

void FUN_108f46f30(long param_1,undefined8 param_2,long param_3)

{
  if ((param_3 != 0) && (*(long *)(param_1 + 8) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x000108f46f48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(param_1 + 0x10));
    return;
  }
  return;
}



/* Entry: 108f46f50; end: 108f46f5b; -[SCSelectionOurStoryCellViewModel .cxx_destruct] */

void FUN_108f46f50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108f46f5c; end: 108f46fd3; -[SCSelectionStoryViewMoreCellViewModel initWithTitleText:] */

undefined1 * FUN_108f46f5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ff4e0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108f46fd4; end: 108f46ff7; -[SCSelectionStoryViewMoreCellViewModel copyWithZone:] */

undefined8 FUN_108f46fd4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108f46ff8; end: 108f46fff; -[SCSelectionStoryViewMoreCellViewModel hash] */

void FUN_108f46ff8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 108f47000; end: 108f4708f; -[SCSelectionStoryViewMoreCellViewModel isEqual:] */

long FUN_108f47000(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108f47074;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_108f47074;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_108f47074;
    }
  }
  lVar3 = 1;
LAB_108f47074:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108f47090; end: 108f47097; -[SCSelectionStoryViewMoreCellViewModel titleText] */

undefined8 FUN_108f47090(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108f47098; end: 108f470a3; -[SCSelectionStoryViewMoreCellViewModel .cxx_destruct] */

void FUN_108f47098(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108f470a4; end: 108f4715b;  */

void FUN_108f470a4(undefined *param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  
  if (param_1 + -1 < (undefined *)0x2) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110f0a4d8;
LAB_108f4711c:
    ppuVar1 = ppuVar2;
    func_0x00010c08fa60();
    if (ppuVar1 == (undefined **)0x0) {
      puVar3 = (undefined *)0x0;
      goto LAB_108f4714c;
    }
  }
  else {
    if (param_1 != (undefined *)0x5) {
      if (param_1 == (undefined *)0x4) {
        func_0x00010b87f3b0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = param_1;
        func_0x00010c101f40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(param_1);
        goto LAB_108f4714c;
      }
      ppuVar2 = (undefined **)0x0;
      goto LAB_108f4711c;
    }
    ppuVar2 = &PTR____CFConstantStringClassReference_110e56fd8;
  }
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,ppuVar2);
  _objc_retainAutoreleasedReturnValue();
LAB_108f4714c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108f4715c; end: 108f4717f;  */

undefined * FUN_108f4715c(long param_1)

{
  if (param_1 - 1U < 5) {
    return (&PTR_PTR_110acda78)[param_1 - 1U];
  }
  return (undefined *)0x0;
}



/* Entry: 108f47180; end: 108f471cb;  */

void FUN_108f47180(long param_1,int param_2)

{
  if ((param_2 == 0) || (1 < param_1 - 1U)) {
    FUN_108f470a4();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                        &PTR____CFConstantStringClassReference_110f0a4b8);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108f471cc; end: 108f471d3;  */

undefined4 FUN_108f471cc(undefined4 param_1)

{
  return param_1;
}



/* Entry: 108f471d4; end: 108f47213;  */

ulong FUN_108f471d4(ulong param_1)

{
  ulong uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c078f80(param_1);
  func_0x00010c0691a0(param_1);
  _objc_release(param_1);
  return uVar1 & 0xffffffff;
}



/* Entry: 108f47214; end: 108f47237;  */

undefined8 FUN_108f47214(long param_1)

{
  if (param_1 - 1U < 5) {
    return *(undefined8 *)(&UNK_10dfb0b50 + (param_1 - 1U) * 8);
  }
  return 0;
}



/* Entry: 108f47238; end: 108f472d7;  */

undefined8 FUN_108f47238(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain();
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x000108f47298();
    if (lVar1 == 0) {
      lVar1 = param_1;
      func_0x00010c102000();
      uVar2 = 0;
      if ((int)lVar1 != 0) {
        uVar2 = 4;
      }
    }
    else {
      uVar2 = 1;
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 108f472d8; end: 108f472f7;  */

undefined4 FUN_108f472d8(ulong param_1)

{
  if (param_1 < 6) {
    return *(undefined4 *)(&UNK_10dfb0b38 + param_1 * 4);
  }
  return 1;
}



/* Entry: 108f472f8; end: 108f473c7;  */

void FUN_108f472f8(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain();
  puVar2 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  puVar1 = PTR_PTR_1126dc9f0;
  _objc_alloc(PTR_PTR_1126dc9f0);
  func_0x00010bff6880();
  func_0x00010bf0e420(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (param_1 == (undefined *)0x0) {
    _objc_retain(puVar2);
    puVar1 = puVar2;
  }
  else {
    puVar1 = param_1;
    func_0x00010c0d3c80(param_1);
    puVar3 = puVar1;
    FUN_108f473ec();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf069e0(puVar1);
    _objc_release(puVar3);
    func_0x00010bf069e0(puVar1);
  }
  _objc_release(puVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108f473c8; end: 108f473eb;  */

void FUN_108f473c8(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain();
  puVar2 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  puVar1 = PTR_PTR_1126dc9f0;
  _objc_alloc(PTR_PTR_1126dc9f0);
  func_0x00010bff6880();
  func_0x00010bf0e420(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (param_1 == (undefined *)0x0) {
    _objc_retain(puVar2);
    puVar1 = puVar2;
  }
  else {
    puVar1 = param_1;
    func_0x00010c0d3c80(param_1);
    puVar3 = puVar1;
    FUN_108f473ec();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf069e0(puVar1);
    _objc_release(puVar3);
    func_0x00010bf069e0(puVar1);
  }
  _objc_release(puVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108f473ec; end: 108f474a7;  */

void FUN_108f473ec(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e840();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    _objc_retain();
    puVar3 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    puVar1 = PTR_PTR_1126dc9f0;
    _objc_alloc(PTR_PTR_1126dc9f0);
    func_0x00010bff6880();
    func_0x00010bf0e420(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = puVar3;
    if (puVar2 == (undefined *)0x0) {
      _objc_retain(puVar3);
    }
    else {
      func_0x00010c0d3c80();
      puVar4 = puVar1;
      FUN_108f473ec();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf069e0(puVar1);
      _objc_release(puVar4);
      func_0x00010bf069e0(puVar1);
    }
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108f474a8; end: 108f47573;  */

void FUN_108f474a8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain();
  puVar2 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  puVar1 = PTR_PTR_1126dc9f0;
  _objc_alloc(PTR_PTR_1126dc9f0);
  func_0x00010bff6880();
  func_0x00010bf0e420(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar2;
  if (param_1 == 0) {
    _objc_retain(puVar2);
  }
  else {
    func_0x00010c0d3c80();
    puVar3 = puVar1;
    FUN_108f473ec();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf069e0(puVar1);
    _objc_release(puVar3);
    func_0x00010bf069e0(puVar1);
  }
  _objc_release(puVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108f47574; end: 108f475f7; -[SCOfficialBadgeDisplayNameLabel initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108f47574(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ff4e8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_opt_new();
    lVar4 = (long)_DAT_11277e068;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010c17d4c0(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010befbb60(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108f475f8; end: 108f4761b; -[SCOfficialBadgeDisplayNameLabel copyWithZone:] */

undefined8 FUN_108f475f8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108f4761c; end: 108f477a7; -[SCOfficialBadgeDisplayNameLabel layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f4761c(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  undefined8 uVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  long lStack_80;
  undefined *puStack_78;
  
  puStack_78 = PTR_PTR_1126ff4e8;
  lStack_80 = param_5;
  _objc_msgSendSuper2(&lStack_80,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_5);
  lVar2 = (long)_DAT_11277e06c;
  if (*(long *)(param_5 + lVar2) == 0) {
    dVar3 = *(double *)PTR__CGRectZero_110347608;
    dVar6 = *(double *)(PTR__CGRectZero_110347608 + 8);
    dVar4 = *(double *)(PTR__CGRectZero_110347608 + 0x10);
    dVar5 = *(double *)(PTR__CGRectZero_110347608 + 0x18);
  }
  else {
    uVar1 = *(undefined8 *)(param_5 + _DAT_11277e068);
    func_0x00010bf20c00(param_5);
    dVar4 = 1.79769313486232e+308;
    func_0x00010c23d5a0(uVar1);
    dVar5 = dVar4;
    func_0x00010be76dc0(param_5);
    dVar3 = dVar4;
    func_0x00010bf20c00(param_5);
    _CGRectGetMaxX();
    dVar3 = (dVar3 + -5.0) - dVar4;
    if (dVar3 <= param_3) {
      param_3 = dVar3;
    }
    func_0x00010bf20c00(param_5);
    param_1 = 0;
    dVar3 = 0.0;
    _CGRectGetMaxX(0,0,param_3);
    dVar3 = dVar3 + 5.0;
    func_0x00010bf20c00(param_5);
    dVar6 = param_4 * 0.5 + dVar5 * -0.5 + -0.5;
  }
  func_0x00010b8166f8(param_1,param_5);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + _DAT_11277e068));
  func_0x00010b8166f8(dVar3,dVar6,dVar4,dVar5,param_5);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar2));
  return;
}



/* Entry: 108f477a8; end: 108f47833; -[SCOfficialBadgeDisplayNameLabel sizeThatFits:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_108f477a8(double param_1,double param_2,long param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  
  dVar1 = param_1;
  dVar3 = param_2;
  func_0x00010c23d5a0(*(undefined8 *)(param_3 + _DAT_11277e068));
  dVar2 = dVar3;
  if (*(long *)(param_3 + _DAT_11277e06c) != 0) {
    func_0x00010be76dc0(param_3);
    dVar2 = dVar1 + 5.0 + dVar2;
    dVar1 = param_1;
    if (dVar2 <= param_1) {
      dVar1 = dVar2;
    }
    dVar2 = param_2;
    if (dVar3 <= param_2) {
      dVar2 = dVar3;
    }
  }
  auVar4._8_8_ = dVar2;
  auVar4._0_8_ = dVar1;
  return auVar4;
}



/* Entry: 108f47834; end: 108f47843; -[SCOfficialBadgeDisplayNameLabel intrinsicContentSize] */

void FUN_108f47834(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23d5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x7fefffffffffffff,0x7fefffffffffffff,param_1,PTR_s_sizeThatFits__11266cf90);
  return;
}



/* Entry: 108f47844; end: 108f478cf; -[SCOfficialBadgeDisplayNameLabel setBackgroundColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f47844(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_s_setBackgroundColor__112639330;
  puStack_38 = PTR_PTR_1126ff4e8;
  lStack_40 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_40,puVar1,param_3);
  func_0x00010c16e440(*(undefined8 *)(param_1 + _DAT_11277e068));
  func_0x00010c16e440(*(undefined8 *)(param_1 + _DAT_11277e06c));
  _objc_release(param_3);
  return;
}



/* Entry: 108f478d0; end: 108f47a0b; -[SCOfficialBadgeDisplayNameLabel setBadgeType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f478d0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = (long)_DAT_11277e070;
  if (param_3 == *(long *)(param_1 + lVar3)) {
    return;
  }
  *(long *)(param_1 + lVar3) = param_3;
  lVar4 = (long)_DAT_11277e06c;
  func_0x00010c12c960(*(undefined8 *)(param_1 + lVar4));
  if (param_3 < 3) {
    if (param_3 - 1U < 2) {
LAB_108f4795c:
      puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      _objc_opt_new();
      uVar1 = *(undefined8 *)(param_1 + lVar3);
      FUN_108f470a4(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a9f00(puVar2);
      _objc_release(uVar1);
      goto LAB_108f47994;
    }
    if (param_3 != 0) goto LAB_108f479c0;
    puVar2 = *(undefined **)(param_1 + lVar4);
    *(undefined8 *)(param_1 + lVar4) = 0;
  }
  else {
    if (param_3 != 3) {
      if ((param_3 != 4) && (param_3 != 5)) goto LAB_108f479c0;
      goto LAB_108f4795c;
    }
    puVar2 = PTR_PTR_1126aea58;
    _objc_alloc_init();
    func_0x00010c21ad00();
    func_0x00010c212f20(puVar2);
LAB_108f47994:
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar2;
    _objc_retain(puVar2);
    _objc_release(uVar1);
    func_0x00010befbb60(param_1);
  }
  _objc_release(puVar2);
LAB_108f479c0:
  func_0x00010c1cbe20(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c069fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_invalidateIntrinsicContentSize_1125f81f8);
  return;
}



/* Entry: 108f47a0c; end: 108f47a1b; -[SCOfficialBadgeDisplayNameLabel text] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f47a0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c26b710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277e068),PTR_s_text_1126787e8);
  return;
}



/* Entry: 108f47a1c; end: 108f47aab; -[SCOfficialBadgeDisplayNameLabel setText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f47a1c(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_11277e068;
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c26b700(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0(param_3,param_2,uVar1);
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    func_0x00010c212f20(*(undefined8 *)(param_1 + lVar3),param_2,param_3);
    func_0x00010c1cbe20(param_1);
    func_0x00010c069fa0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f47aac; end: 108f47abb; -[SCOfficialBadgeDisplayNameLabel attributedText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f47aac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0e550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277e068),PTR_s_attributedText_1125a12f8);
  return;
}



/* Entry: 108f47abc; end: 108f47b4b; -[SCOfficialBadgeDisplayNameLabel setAttributedText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f47abc(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_11277e068;
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010bf0e540(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c071b80(param_3,param_2,uVar1);
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    func_0x00010c16b720(*(undefined8 *)(param_1 + lVar3),param_2,param_3);
    func_0x00010c1cbe20(param_1);
    func_0x00010c069fa0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f47b4c; end: 108f47b5b; -[SCOfficialBadgeDisplayNameLabel font] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f47b4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb3a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277e068),PTR_s_font_1125ca848);
  return;
}



/* Entry: 108f47b5c; end: 108f47beb; -[SCOfficialBadgeDisplayNameLabel setFont:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f47b5c(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_11277e068;
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010bfb3a80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c071ae0(param_3,param_2,uVar1);
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    func_0x00010c19e480(*(undefined8 *)(param_1 + lVar3),param_2,param_3);
    func_0x00010c1cbe20(param_1);
    func_0x00010c069fa0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f47bec; end: 108f47bfb; -[SCOfficialBadgeDisplayNameLabel textColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f47bec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c26b930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277e068),PTR_s_textColor_112678870);
  return;
}



/* Entry: 108f47bfc; end: 108f47c0b; -[SCOfficialBadgeDisplayNameLabel setTextColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f47bfc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c213190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277e068),PTR_s_setTextColor__112662688);
  return;
}



/* Entry: 108f47c0c; end: 108f47c1b; -[SCOfficialBadgeDisplayNameLabel adjustsFontSizeToFitWidth] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f47c0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befdb50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277e068),PTR_s_adjustsFontSizeToFitWidth_11259d078);
  return;
}



/* Entry: 108f47c1c; end: 108f47c83; -[SCOfficialBadgeDisplayNameLabel setAdjustsFontSizeToFitWidth:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f47c1c(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277e068;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar2);
  func_0x00010befdb40();
  if (param_3 != iVar1) {
    func_0x00010c165e20(*(undefined8 *)(param_1 + lVar2));
    func_0x00010c1cbe20(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c069fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_invalidateIntrinsicContentSize_1125f81f8);
    return;
  }
  return;
}



/* Entry: 108f47c84; end: 108f47c93; -[SCOfficialBadgeDisplayNameLabel clipsToBounds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f47c84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf3d8f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277e068),PTR_s_clipsToBounds_1125acfe0);
  return;
}



/* Entry: 108f47c94; end: 108f47cfb; -[SCOfficialBadgeDisplayNameLabel setClipsToBounds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f47c94(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277e068;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar2);
  func_0x00010bf3d8e0();
  if (param_3 != iVar1) {
    func_0x00010c17d4c0(*(undefined8 *)(param_1 + lVar2));
    func_0x00010c1cbe20(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c069fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_invalidateIntrinsicContentSize_1125f81f8);
    return;
  }
  return;
}



/* Entry: 108f47cfc; end: 108f47d0b; -[SCOfficialBadgeDisplayNameLabel lineBreakMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f47cfc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c099190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277e068),PTR_s_lineBreakMode_112603e70);
  return;
}



/* Entry: 108f47d0c; end: 108f47d73; -[SCOfficialBadgeDisplayNameLabel setLineBreakMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f47d0c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277e068;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c099180();
  if (param_3 == lVar1) {
    return;
  }
  func_0x00010c1bdb00(*(undefined8 *)(param_1 + lVar2));
  func_0x00010c1cbe20(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c069fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_invalidateIntrinsicContentSize_1125f81f8);
  return;
}



/* Entry: 108f47d74; end: 108f47dff; -[SCOfficialBadgeDisplayNameLabel _preferredBadgeViewSizeForLineHeight:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f47d74(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + _DAT_11277e070);
  if (uVar1 < 6) {
    if ((1L << (uVar1 & 0x3f) & 0x36U) == 0) {
      if (uVar1 != 0) {
        func_0x00010c0699c0(*(undefined8 *)(param_1 + _DAT_11277e06c));
      }
    }
    else {
      func_0x00010b816218();
    }
  }
  return;
}



/* Entry: 108f47e00; end: 108f47e0f; -[SCOfficialBadgeDisplayNameLabel badgeType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f47e00(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277e070);
}



/* Entry: 108f47e10; end: 108f47e1f; -[SCOfficialBadgeDisplayNameLabel label] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f47e10(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277e068);
}



/* Entry: 108f47e20; end: 108f47e5f; -[SCOfficialBadgeDisplayNameLabel .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f47e20(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277e068,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277e06c,0);
  return;
}



/* Entry: 108f47e60; end: 108f47edb; -[SCOfficialBadgeTextAttachment initWithBadgeSafeType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108f47e60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ff4f0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithData_ofType__11253e6f0,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_108f470a4();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277e074);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277e074) = param_3;
    _objc_release(uVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108f47edc; end: 108f47f0b; -[SCOfficialBadgeTextAttachment imageForBounds:textContainer:characterIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f47edc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277e074);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108f47f0c; end: 108f47f3b; -[SCOfficialBadgeTextAttachment attachmentBoundsForTextContainer:proposedLineFragment:glyphPosition:characterIndex:] */

undefined8 FUN_108f47f0c(void)

{
  return 0;
}



/* Entry: 108f47f3c; end: 108f47f4f; -[SCOfficialBadgeTextAttachment .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f47f3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277e074,0);
  return;
}



/* Entry: 108f47f50; end: 108f47fc7; -[SCLongPressActionModel initWithSelectionItem:] */

undefined1 * FUN_108f47f50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ff4f8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108f47fc8; end: 108f47feb; -[SCLongPressActionModel copyWithZone:] */

undefined8 FUN_108f47fc8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108f47fec; end: 108f47ff3; -[SCLongPressActionModel hash] */

void FUN_108f47fec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 108f47ff4; end: 108f48083; -[SCLongPressActionModel isEqual:] */

long FUN_108f47ff4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108f48068;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_108f48068;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_108f48068;
    }
  }
  lVar3 = 1;
LAB_108f48068:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108f48084; end: 108f4808b; -[SCLongPressActionModel selectionItem] */

undefined8 FUN_108f48084(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108f4808c; end: 108f48097; -[SCLongPressActionModel .cxx_destruct] */

void FUN_108f4808c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108f48098; end: 108f480df;  */

undefined8 FUN_108f48098(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bf1f440(param_1,param_2,&PTR____CFConstantStringClassReference_110f0a518,0,0);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 108f480e0; end: 108f4810f;  */

void FUN_108f480e0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_stringValueForConfigKeySync_defa_112675008,
             &PTR____CFConstantStringClassReference_110f0a538,
             &PTR____CFConstantStringClassReference_110daafd8,0);
  return;
}



/* Entry: 108f48110; end: 108f48157;  */

undefined8 FUN_108f48110(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bf1f440(param_1,param_2,&PTR____CFConstantStringClassReference_110f0a578,0,0);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 108f48158; end: 108f4816b;  */

void FUN_108f48158(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110f0a598,0,0);
  return;
}



/* Entry: 108f4816c; end: 108f4823b;  */

long FUN_108f4816c(undefined8 param_1,long param_2)

{
  long lVar1;
  
  func_0x00010c067f00(param_1,param_2,&PTR____CFConstantStringClassReference_110f0a5b8,0,0);
  lVar1 = (long)(int)param_1;
  if (9 < (int)param_1 - 2U) {
    lVar1 = param_2;
  }
  return lVar1;
}



/* Entry: 108f4823c; end: 108f4824f;  */

void FUN_108f4823c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110f0a618,0,0);
  return;
}



/* Entry: 108f48250; end: 108f48327;  */

undefined8 FUN_108f48250(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bf1f440(param_1,param_2,&PTR____CFConstantStringClassReference_110f0a638,0,0);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 108f48328; end: 108f4841b;  */

void FUN_108f48328(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110f0a678,0,0);
  return;
}



/* Entry: 108f4841c; end: 108f48497;  */

undefined8 FUN_108f4841c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c0b84a0(param_1,param_2,&PTR____CFConstantStringClassReference_110f0a7f8,0);
  _objc_retainAutoreleasedReturnValue();
  if ((int)param_2 != 0) {
    func_0x00010bf9d480(param_1);
  }
  uVar1 = param_1;
  func_0x00010c296d80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 108f48498; end: 108f485db;  */

void FUN_108f48498(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110f0a818,0,0);
  return;
}



/* Entry: 108f485dc; end: 108f48663;  */

ulong FUN_108f485dc(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bf1f440(param_1,param_2,&PTR____CFConstantStringClassReference_110f0a8f8,0,0);
  if (((uVar1 & 1) == 0) &&
     (uVar1 = param_1,
     func_0x00010bf1f440(param_1,param_2,&PTR____CFConstantStringClassReference_110f0aad8,0,0),
     (uVar1 & 1) == 0)) {
    uVar1 = param_1;
    func_0x00010bf1f440(param_1,param_2,&PTR____CFConstantStringClassReference_110f0aa18,0,0);
  }
  else {
    uVar1 = 1;
  }
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 108f48664; end: 108f4869f;  */

void FUN_108f48664(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110f0aad8,0,0);
  return;
}



/* Entry: 108f486a0; end: 108f4870b;  */

ulong FUN_108f486a0(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bf1f440(param_1,param_2,&PTR____CFConstantStringClassReference_110f0aad8,0,0);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010bf1f440(param_1,param_2,&PTR____CFConstantStringClassReference_110f0aa78,0,0);
  }
  else {
    uVar1 = 1;
  }
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 108f4870c; end: 108f4871f;  */

void FUN_108f4870c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110f0aa98,0,0);
  return;
}



/* Entry: 108f48720; end: 108f487db;  */

ulong FUN_108f48720(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain();
  uVar3 = param_1;
  func_0x00010c067f00(param_1,param_2,&PTR____CFConstantStringClassReference_110f0aab8,0,0);
  if ((int)uVar3 == 0) {
    uVar3 = uVar3 & 0xffffffff;
  }
  else if ((int)uVar3 == 1) {
    uVar3 = 1;
  }
  else {
    uVar1 = param_1;
    func_0x00010c0b84a0(param_1,param_2,&PTR____CFConstantStringClassReference_110f0aa98,0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c296d80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bf1f3c0();
    _objc_release(uVar3);
    uVar3 = 1;
    if ((int)uVar2 != 0) {
      uVar3 = 2;
    }
    _objc_release(uVar1);
  }
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 108f487dc; end: 108f48817;  */

void FUN_108f487dc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110f0aaf8,0,0);
  return;
}



/* Entry: 108f48818; end: 108f4883f;  */

long FUN_108f48818(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c067f00(param_1,param_2,&PTR____CFConstantStringClassReference_110f0ab58,0,0);
  return (long)(int)param_1;
}



/* Entry: 108f48840; end: 108f48853;  */

void FUN_108f48840(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b5030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_longValueForConfigKeySync_defaul_11260ae20,
             &PTR____CFConstantStringClassReference_110f0ab78,5000,0);
  return;
}



/* Entry: 108f48854; end: 108f4887b;  */

long FUN_108f48854(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c067f00(param_1,param_2,&PTR____CFConstantStringClassReference_110f0ab98,0,0);
  return (long)(int)param_1;
}



/* Entry: 108f4887c; end: 108f488b7;  */

void FUN_108f4887c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110f0abb8,0,0);
  return;
}



/* Entry: 108f488b8; end: 108f48933;  */

undefined8 FUN_108f488b8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c0b84a0(param_1,param_2,&PTR____CFConstantStringClassReference_110f0ac18,0);
  _objc_retainAutoreleasedReturnValue();
  if ((int)param_2 != 0) {
    func_0x00010bf9d480(param_1);
  }
  uVar1 = param_1;
  func_0x00010c296d80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 108f48934; end: 108f48dd7;  */

void FUN_108f48934(undefined *param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_68;
  
  puVar2 = param_1;
  _objc_retain();
  func_0x000108f499c0();
  if (puVar2 == (undefined *)0x0) {
    puVar2 = param_1;
    func_0x00010c1195e0(param_1,param_2,&PTR____CFConstantStringClassReference_110f0ac38,0,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = (undefined **)PTR_PTR_1126dc9f8;
    _objc_alloc();
    puVar4 = puVar2;
    func_0x00010c296d80(puVar2);
    _objc_retainAutoreleasedReturnValue();
    uStack_68 = 0;
    func_0x00010c008360(ppuVar3,param_2,puVar4,&uStack_68);
    _objc_release(puVar4);
    _objc_release(puVar2);
    ppuVar5 = ppuVar3;
    func_0x00010c271660();
    iVar1 = (int)ppuVar5;
    if (iVar1 < 3) {
      if (iVar1 == 1) {
        func_0x000108f59734();
        _objc_retainAutoreleasedReturnValue();
        ppuVar7 = ppuVar5;
      }
      else {
        ppuVar7 = &PTR____CFConstantStringClassReference_110daafd8;
        if (iVar1 == 2) {
          func_0x000108f59704();
          _objc_retainAutoreleasedReturnValue();
          ppuVar7 = ppuVar5;
        }
      }
    }
    else if (iVar1 == 3) {
      func_0x000108f5971c();
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = ppuVar5;
    }
    else {
      ppuVar7 = &PTR____CFConstantStringClassReference_110daafd8;
      if (iVar1 == 4) {
        func_0x000108f5974c();
        _objc_retainAutoreleasedReturnValue();
        ppuVar7 = ppuVar5;
      }
    }
    ppuVar5 = ppuVar3;
    func_0x00010c271220();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar5;
    func_0x00010c08fa60();
    _objc_release(ppuVar5);
    ppuVar5 = ppuVar7;
    if (ppuVar6 != (undefined **)0x0) {
      ppuVar5 = ppuVar3;
      func_0x00010c271220();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar7);
    }
    ppuVar7 = ppuVar3;
    func_0x00010c260d60();
    if ((int)ppuVar7 == 1) {
      func_0x000108f5836c();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      ppuVar7 = &PTR____CFConstantStringClassReference_110daafd8;
    }
    ppuVar6 = ppuVar3;
    func_0x00010c260cc0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar6;
    func_0x00010c08fa60();
    _objc_release(ppuVar6);
    ppuVar6 = ppuVar7;
    if (ppuVar8 != (undefined **)0x0) {
      ppuVar6 = ppuVar3;
      func_0x00010c260cc0(ppuVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar7);
    }
    ppuVar7 = ppuVar3;
    func_0x00010bfe5b00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar7;
    func_0x00010c08fa60();
    if (ppuVar8 == (undefined **)0x0) {
      ppuStack_80 = &PTR____CFConstantStringClassReference_110daafd8;
    }
    else {
      ppuStack_80 = ppuVar3;
      func_0x00010bfe5b00();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(ppuVar7);
    ppuVar7 = ppuVar3;
    func_0x00010bfe5a80();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar7;
    func_0x00010c08fa60();
    puStack_88 = PTR__OBJC_CLASS___UIColor_1126aea70;
    if (ppuVar8 == (undefined **)0x0) {
      puStack_88 = (undefined *)0x0;
    }
    else {
      ppuVar8 = ppuVar3;
      func_0x00010bfe5a80(ppuVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf414c0(puStack_88,param_2,ppuVar8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar8);
    }
    _objc_release(ppuVar7);
    ppuVar7 = ppuVar3;
    func_0x00010bfe5460();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar7;
    func_0x00010c08fa60();
    puStack_90 = PTR__OBJC_CLASS___UIColor_1126aea70;
    if (ppuVar8 == (undefined **)0x0) {
      puStack_90 = (undefined *)0x0;
    }
    else {
      ppuVar8 = ppuVar3;
      func_0x00010bfe5460(ppuVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf414c0(puStack_90,param_2,ppuVar8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar8);
    }
    _objc_release(ppuVar7);
    func_0x00010bfe5a20();
    func_0x00010bfe5a00();
    func_0x00010bfe5820();
    func_0x00010bfe5840();
    func_0x00010bf34120();
    func_0x00010c271680();
    func_0x00010c260d20();
    ppuVar7 = ppuVar3;
    func_0x00010bf11380();
    if ((int)ppuVar7 == 1) {
      func_0x000108f584bc();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      ppuVar7 = &PTR____CFConstantStringClassReference_110daafd8;
    }
    ppuVar8 = ppuVar3;
    func_0x00010bf11360();
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = ppuVar8;
    func_0x00010c08fa60();
    _objc_release(ppuVar8);
    ppuVar8 = ppuVar7;
    if (ppuVar9 != (undefined **)0x0) {
      ppuVar8 = ppuVar3;
      func_0x00010bf11360();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar7);
    }
    puVar2 = PTR_PTR_1126b52b8;
    _objc_alloc(PTR_PTR_1126b52b8);
    func_0x00010c000ca0();
    _objc_release(ppuVar8);
    _objc_release(puStack_90);
    _objc_release(puStack_88);
    _objc_release(ppuStack_80);
    _objc_release(ppuVar6);
    _objc_release(ppuVar5);
    _objc_release(ppuVar3);
  }
  else {
    FUN_108f499cc();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108f48dd8; end: 108f48f93;  */

void FUN_108f48dd8(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  _objc_retain();
  puVar1 = param_1;
  func_0x00010bfe5b00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c08fa60();
  puVar3 = PTR_PTR_1126c2cb0;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar2 = param_1;
    func_0x00010bfe5b00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe5b20(puVar3,param_2,puVar2);
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
  puVar1 = param_1;
  func_0x00010bfe5c80();
  if (puVar1 == (undefined *)0x0) {
    dVar4 = 76.0;
  }
  else {
    puVar1 = param_1;
    func_0x00010bfe5c80(param_1);
    dVar4 = (double)puVar1;
  }
  puVar1 = param_1;
  func_0x00010bfe5660();
  if (puVar1 == (undefined *)0x0) {
    dVar5 = 76.0;
  }
  else {
    puVar1 = param_1;
    func_0x00010bfe5660(param_1);
    dVar5 = (double)puVar1;
  }
  puVar1 = param_1;
  func_0x00010bfe5a80();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x90);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = param_1;
    func_0x00010bfe5a80(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
  puVar1 = param_1;
  func_0x00010c067560();
  dVar7 = 17.0;
  dVar6 = 17.0;
  if (puVar1 != (undefined *)0x0) {
    puVar1 = param_1;
    func_0x00010c067560(param_1);
    dVar6 = (double)puVar1;
  }
  puVar1 = param_1;
  func_0x00010c067600();
  if (puVar1 != (undefined *)0x0) {
    puVar1 = param_1;
    func_0x00010c067600(param_1);
    dVar7 = (double)puVar1;
  }
  if ((long)puVar3 < 1) {
    puVar3 = (undefined *)0x217;
  }
  puVar1 = PTR_PTR_1126b0c40;
  func_0x00010bfe7ac0(dVar4,dVar5,dVar7,dVar6,dVar7,dVar6,PTR_PTR_1126b0c40,param_2,puVar3,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108f48f94; end: 108f490e7;  */

void FUN_108f48f94(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  double dVar4;
  double dVar5;
  
  _objc_retain();
  _objc_retain(param_2);
  uVar1 = param_1;
  func_0x00010bfe5c80();
  if (uVar1 == 0) {
    dVar4 = 36.0;
  }
  else {
    uVar1 = param_1;
    func_0x00010bfe5c80();
    dVar4 = (double)uVar1;
  }
  uVar1 = param_1;
  func_0x00010bfe5660();
  if (uVar1 == 0) {
    dVar5 = 36.0;
  }
  else {
    uVar1 = param_1;
    func_0x00010bfe5660();
    dVar5 = (double)uVar1;
  }
  puVar2 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
  _objc_alloc(PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08);
  func_0x00010c0469e0(dVar4,dVar5);
  _objc_retain(param_1);
  _objc_retain(param_2);
  puVar3 = puVar2;
  func_0x00010bfe91c0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1610a0();
  _objc_release(param_1);
  _objc_release(param_2);
  _objc_release(param_1);
  _objc_release(param_2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108f490e8; end: 108f493ab;  */

void FUN_108f490e8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  double dVar10;
  undefined8 uVar11;
  double dVar12;
  double dStack_90;
  double dStack_88;
  double dStack_80;
  double dStack_78;
  
  _objc_retain(param_2);
  dVar7 = 0.0;
  dVar8 = 0.0;
  puVar6 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf199e0(0,0,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                      *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x40),
                      PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7740();
  _objc_release(puVar6);
  puVar6 = *(undefined **)(param_1 + 0x20);
  _objc_retain(puVar6);
  if (puVar6 == (undefined *)0x0) {
    puVar6 = *(undefined **)(param_1 + 0x28);
    func_0x00010bfe5a80();
    _objc_retainAutoreleasedReturnValue();
    if (puVar6 == (undefined *)0x0) {
      puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(puVar6);
      puVar1 = puVar6;
    }
    _objc_release(puVar6);
    puVar6 = *(undefined **)(param_1 + 0x28);
    func_0x00010bfe5460();
    _objc_retainAutoreleasedReturnValue();
    if (puVar6 == (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010bf414e0(0x3fc999999999999a);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
    }
    else {
      _objc_retain(puVar6);
      puVar3 = puVar6;
    }
    _objc_release(puVar6);
    uVar9 = *(undefined8 *)(param_1 + 0x30);
    uVar11 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c19bbe0(puVar3);
    func_0x00010bdc1000(param_2);
    _CGContextFillRect(0,0,uVar9,uVar11);
    lVar4 = *(long *)(param_1 + 0x28);
    func_0x00010c067560();
    dVar12 = 9.0;
    dVar10 = 9.0;
    if (lVar4 != 0) {
      uVar5 = *(ulong *)(param_1 + 0x28);
      func_0x00010c067560(uVar5);
      dVar10 = (double)uVar5;
    }
    lVar4 = *(long *)(param_1 + 0x28);
    func_0x00010c067600();
    if (lVar4 != 0) {
      uVar5 = *(ulong *)(param_1 + 0x28);
      func_0x00010c067600(uVar5);
      dVar12 = (double)uVar5;
    }
    uVar9 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bfe5b00(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe5b20();
    _objc_release(uVar9);
    dVar7 = *(double *)(param_1 + 0x30);
    dVar8 = *(double *)(param_1 + 0x38);
    puVar6 = PTR_PTR_1126b0c40;
    func_0x00010bfe7ac0(dVar7,dVar8,dVar12,dVar10,dVar12,dVar10,PTR_PTR_1126b0c40);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar1);
  }
  dVar12 = *(double *)(param_1 + 0x38);
  func_0x00010c23d0a0(puVar6);
  dVar10 = *(double *)(param_1 + 0x30);
  dVar12 = dVar12 / dVar8;
  func_0x00010c23d0a0(puVar6);
  dVar10 = dVar10 / dVar7;
  dVar7 = dVar10;
  if (dVar10 <= dVar12) {
    dVar7 = dVar12;
  }
  func_0x00010c23d0a0(puVar6);
  _CGAffineTransformMakeScale(&dStack_90,dVar7,dVar7);
  func_0x00010bf89920((*(double *)(param_1 + 0x30) - (dVar8 * dStack_80 + dVar10 * dStack_90)) * 0.5
                      ,(*(double *)(param_1 + 0x38) - (dVar8 * dStack_78 + dVar10 * dStack_88)) *
                       0.5,puVar6);
  _objc_release(puVar6);
  _objc_release(param_2);
  return;
}



/* Entry: 108f493ac; end: 108f494af;  */

void FUN_108f493ac(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110f0ac98,0,0);
  return;
}



/* Entry: 108f494b0; end: 108f494d7;  */

long FUN_108f494b0(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c067f00(param_1,param_2,&PTR____CFConstantStringClassReference_110f0ae38,0,0);
  return (long)(int)param_1;
}



/* Entry: 108f494d8; end: 108f4959f;  */

void FUN_108f494d8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110f0ae58,0,0);
  return;
}



/* Entry: 108f495a0; end: 108f49617;  */

long FUN_108f495a0(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c067f00(param_1,param_2,&PTR____CFConstantStringClassReference_110f0af78,1,0);
  return (long)(int)param_1;
}



/* Entry: 108f49618; end: 108f496df;  */

undefined8 FUN_108f49618(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain();
  _objc_retain(param_2);
  if (param_2 != 0) {
    puVar1 = PTR_PTR_1126b1278;
    func_0x00010c11a620(PTR_PTR_1126b1278);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2;
    func_0x00010bfb2400();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf926c0();
    _objc_release(lVar2);
    _objc_release(puVar1);
    if ((int)lVar3 == 0) {
      uVar4 = 1;
      goto LAB_108f496b8;
    }
  }
  uVar4 = param_1;
  func_0x00010bf1f440(param_1);
LAB_108f496b8:
  _objc_release(param_2);
  _objc_release(param_1);
  return uVar4;
}



/* Entry: 108f496e0; end: 108f496f3;  */

void FUN_108f496e0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110f0aff8,0,0);
  return;
}



/* Entry: 108f496f4; end: 108f49883;  */

undefined8 FUN_108f496f4(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain();
  _objc_retain(param_2);
  if (param_2 != 0) {
    puVar1 = PTR_PTR_1126b1278;
    func_0x00010c15b3a0(PTR_PTR_1126b1278);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2;
    func_0x00010bfb2400();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf926c0();
    _objc_release(lVar2);
    _objc_release(puVar1);
    if ((int)lVar3 == 0) {
      uVar4 = 1;
      goto LAB_108f49794;
    }
  }
  uVar4 = param_1;
  func_0x00010bf1f440(param_1);
LAB_108f49794:
  _objc_release(param_2);
  _objc_release(param_1);
  return uVar4;
}



/* Entry: 108f49884; end: 108f498a3;  */

void FUN_108f49884(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110f0b058,0,0);
  return;
}



/* Entry: 108f498a4; end: 108f4992f;  */

undefined ** FUN_108f498a4(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  func_0x00010c08fa60();
  ppuVar2 = (undefined **)0x0;
  if (ppuVar1 != (undefined **)0x0) {
    ppuStack_38 = &PTR____CFConstantStringClassReference_110f0b078;
    ppuStack_30 = &PTR____CFConstantStringClassReference_110daafd8;
    ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_30,&ppuStack_38,1
                       );
    _objc_retainAutoreleasedReturnValue();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return ppuVar2;
  }
  ___stack_chk_fail();
  return &PTR____CFConstantStringClassReference_110daafd8;
}



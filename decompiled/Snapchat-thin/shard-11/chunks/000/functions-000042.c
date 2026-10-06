/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1080a93b0; end: 1080a9483; -[SCValdiGlassView _applyEffectWithAnimator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080a93b0(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar2 = param_1;
  func_0x0001080a99d8();
  iVar1 = (int)lVar2;
  func_0x0001080a9370();
  if ((iVar1 != 0) && (func_0x0001080a99b0(), iVar1 != 0)) {
    puVar3 = PTR__OBJC_CLASS___UIGlassEffect_1126d92d8;
    func_0x00010bf8cf60(PTR__OBJC_CLASS___UIGlassEffect_1126d92d8,param_2,
                        *(undefined1 *)(param_1 + _DAT_1127743e0));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ae320();
    func_0x00010c216160(puVar3,param_2,*(undefined8 *)(param_1 + _DAT_1127743e8));
    if (puVar3 != (undefined *)0x0) goto LAB_1080a9440;
  }
  puVar3 = PTR__OBJC_CLASS___UIBlurEffect_1126b00d8;
  func_0x00010bf8cf60(PTR__OBJC_CLASS___UIBlurEffect_1126b00d8,param_2,8);
  _objc_retainAutoreleasedReturnValue();
LAB_1080a9440:
  func_0x00010c193d20(param_1,param_2,puVar3);
  if (param_3 != 0) {
    func_0x00010c08c0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befc640(param_3,param_2,param_1);
    func_0x0001080a9a1c();
  }
  func_0x0001080a99c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1080a9484; end: 1080a962b; -[SCValdiGlassView _applyCornerConfiguration:] */

void FUN_1080a9484(undefined8 param_1,undefined8 param_2,double *param_3)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *unaff_x20;
  double dVar6;
  
  puVar5 = PTR__OBJC_CLASS___UICornerConfiguration_1126d92e0;
  dVar6 = *param_3;
  if ((((dVar6 == param_3[2]) && (dVar6 == param_3[6])) && (dVar6 == param_3[4])) &&
     (((cVar1 = *(char *)(param_3 + 1), cVar1 == *(char *)(param_3 + 3) &&
       (cVar1 == *(char *)(param_3 + 7))) && (cVar1 == *(char *)(param_3 + 5))))) {
    if (cVar1 != '\0') {
      func_0x00010bf2fb80(PTR__OBJC_CLASS___UICornerConfiguration_1126d92e0);
      _objc_retainAutoreleasedReturnValue();
      func_0x0001080a99e8();
      goto LAB_1080a95cc;
    }
    unaff_x20 = PTR__OBJC_CLASS___UICornerRadius_1126d92e8;
    func_0x00010bfb22c0(PTR__OBJC_CLASS___UICornerRadius_1126d92e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf469e0(puVar5,param_2,unaff_x20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c184240(param_1,param_2,puVar5);
    puVar2 = puVar5;
  }
  else {
    unaff_x20 = PTR__OBJC_CLASS___UICornerRadius_1126d92e8;
    func_0x00010bfb22c0(PTR__OBJC_CLASS___UICornerRadius_1126d92e8);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UICornerRadius_1126d92e8;
    func_0x00010bfb22c0(param_3[2],PTR__OBJC_CLASS___UICornerRadius_1126d92e8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UICornerRadius_1126d92e8;
    func_0x00010bfb22c0(param_3[6],PTR__OBJC_CLASS___UICornerRadius_1126d92e8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UICornerRadius_1126d92e8;
    func_0x00010bfb22c0(param_3[4],PTR__OBJC_CLASS___UICornerRadius_1126d92e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf46a40(puVar5,param_2,unaff_x20,puVar2,puVar3,puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c184240(param_1,param_2,puVar5);
    _objc_release(puVar5);
    func_0x0001080a99c4();
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
LAB_1080a95cc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
  return;
}



/* Entry: 1080a962c; end: 1080a96f7; +[SCValdiGlassView bindAttributes:] */

void FUN_1080a962c(int param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x0001080a99d8();
  func_0x0001080a99f8();
  func_0x00010bf1a140();
  func_0x0001080a99f8();
  func_0x00010bf1a0c0();
  func_0x0001080a99f8();
  func_0x00010bf1a080();
  func_0x0001080a99f8();
  func_0x00010bf1a140();
  func_0x0001080a9370();
  if (param_1 != 0) {
    func_0x0001080a99f8();
    func_0x00010bf1a0a0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1080a96f8; end: 1080a9757;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1080a96f8(undefined8 param_1,long param_2,undefined1 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_2);
  func_0x00010c0720c0();
  *(undefined1 *)(param_2 + _DAT_1127743e0) = param_3;
  func_0x0001080a9a04();
  func_0x0001080a99e0();
  func_0x0001080a99c4();
  return 1;
}



/* Entry: 1080a9758; end: 1080a976b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080a9758(undefined8 param_1,long param_2)

{
  *(undefined1 *)(param_2 + _DAT_1127743e0) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdce0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__applyEffectWithAnimator__1125511d8);
  return;
}



/* Entry: 1080a976c; end: 1080a981f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1080a976c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x0001080a99d8();
  uVar1 = *(undefined8 *)(param_2 + _DAT_1127743e8);
  *(undefined8 *)(param_2 + _DAT_1127743e8) = param_3;
  _objc_retain(param_4);
  _objc_retain(param_2);
  _objc_release(uVar1);
  func_0x0001080a9a04();
  func_0x0001080a99e0();
  func_0x0001080a99c4();
  return 1;
}



/* Entry: 1080a9820; end: 1080a984b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1080a9820(undefined8 param_1,long param_2,undefined1 param_3,undefined8 param_4)

{
  *(undefined1 *)(param_2 + _DAT_1127743e4) = param_3;
  func_0x00010bdce0e0(param_2,param_2,param_4);
  return 1;
}



/* Entry: 1080a984c; end: 1080a985f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080a984c(undefined8 param_1,long param_2)

{
  *(undefined1 *)(param_2 + _DAT_1127743e4) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdce0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__applyEffectWithAnimator__1125511d8);
  return;
}



/* Entry: 1080a9860; end: 1080a98cf;  */

undefined8 FUN_1080a9860(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  func_0x0001080a99d8();
  _objc_retain(param_2);
  uVar1 = param_3;
  func_0x00010c0720c0();
  if ((uVar1 & 1) == 0) {
    func_0x00010c0720c0(param_3);
  }
  func_0x00010c1d79e0(param_2);
  func_0x0001080a9a1c();
  func_0x0001080a99e0();
  return 1;
}



/* Entry: 1080a98d0; end: 1080a98db;  */

void FUN_1080a98d0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d79f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_setOverrideUserInterfaceStyle__1126538a0,0);
  return;
}



/* Entry: 1080a98dc; end: 1080a992f;  */

undefined8 FUN_1080a98dc(int param_1)

{
  func_0x0001080a9a10();
  func_0x0001080a99b0();
  if (param_1 != 0) {
    func_0x00010bdcdec0();
  }
  func_0x0001080a99e0();
  return 1;
}



/* Entry: 1080a9930; end: 1080a999b;  */

void FUN_1080a9930(int param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x0001080a9a10();
  func_0x0001080a99b0();
  puVar1 = PTR__OBJC_CLASS___UICornerConfiguration_1126d92e0;
  if (param_1 != 0) {
    puVar2 = PTR__OBJC_CLASS___UICornerRadius_1126d92e8;
    func_0x00010bfb22c0(0,PTR__OBJC_CLASS___UICornerRadius_1126d92e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf469e0(puVar1,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080a99e8();
    func_0x0001080a9a1c();
    func_0x0001080a99c4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080a999c; end: 1080a9a2f; -[SCValdiGlassView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080a999c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127743e8,0);
  return;
}



/* Entry: 1080a9a30; end: 1080a9a8f; -[SCValdiIndexPicker initWithFrame:] */

undefined1 * FUN_1080a9a30(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fc600;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c18b5e0(puVar1);
    func_0x00010c189840(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1080a9a90; end: 1080a9a93; -[SCValdiIndexPicker convertPoint:fromView:] */

void FUN_1080a9a90(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2956f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_valdi_convertPoint_fromView__112682fe0);
  return;
}



/* Entry: 1080a9a94; end: 1080a9a97; -[SCValdiIndexPicker convertPoint:toView:] */

void FUN_1080a9a94(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c295710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_valdi_convertPoint_toView__112682fe8);
  return;
}



/* Entry: 1080a9a98; end: 1080a9b73; -[SCValdiIndexPicker hitTest:withEvent:] */

void FUN_1080a9a98(undefined8 param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  undefined1 **ppuVar2;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  ppuVar2 = &puStack_50;
  func_0x0001080aa25c();
  puVar1 = param_3;
  func_0x00010c2953a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar1 == (undefined1 *)0x0) {
    puStack_48 = PTR_PTR_1126fc600;
    puStack_50 = param_3;
    _objc_msgSendSuper2(param_1,param_2,&puStack_50,PTR_s_hitTest_withEvent__1125d6850,param_5);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c2953a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c295740(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080aa278();
    ppuVar2 = (undefined1 **)param_3;
  }
  func_0x0001080aa280();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 1080a9b74; end: 1080a9b7b; -[SCValdiIndexPicker willEnqueueIntoValdiPool] */

undefined8 FUN_1080a9b74(void)

{
  return 1;
}



/* Entry: 1080a9b7c; end: 1080a9b83; -[SCValdiIndexPicker numberOfComponentsInPickerView:] */

undefined8 FUN_1080a9b7c(void)

{
  return 1;
}



/* Entry: 1080a9b84; end: 1080a9b93; -[SCValdiIndexPicker pickerView:numberOfRowsInComponent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080a9b84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127743ec),PTR_s_count_1125b2420);
  return;
}



/* Entry: 1080a9b94; end: 1080a9c0b; -[SCValdiIndexPicker pickerView:titleForRow:forComponent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080a9b94(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined **ppuVar2;
  long lVar3;
  
  func_0x0001080aa25c();
  if (-1 < (long)param_4) {
    lVar3 = (long)_DAT_1127743ec;
    uVar1 = *(ulong *)(param_1 + lVar3);
    func_0x00010bf529e0();
    if (param_4 < uVar1) {
      ppuVar2 = *(undefined ***)(param_1 + lVar3);
      func_0x00010c0dfd20(ppuVar2,param_2,param_4);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1080a9bf4;
    }
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110dafe18;
LAB_1080a9bf4:
  func_0x0001080aa280();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 1080a9c0c; end: 1080a9c13; -[SCValdiIndexPicker pickerView:didSelectRow:inComponent:] */

void FUN_1080a9c0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2957d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_valdi_notifySelectRow__112683018,param_4);
  return;
}



/* Entry: 1080a9c14; end: 1080a9d3b; -[SCValdiIndexPicker valdi_notifySelectRow:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080a9c14(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  plVar2 = (long *)PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  if (lRam0000000113729168 != -1) {
    func_0x000107c27d9c(0x113729168,&PTR___NSConcreteGlobalBlock_110a1b930);
  }
  lVar3 = param_1;
  func_0x00010c2954e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf737c0(lVar1);
  _objc_release(lVar3);
  _objc_release();
  func_0x0001080aa278();
  func_0x00010b97f424();
  func_0x00010b97f870((double)param_3);
  func_0x00010c0f9540(*(undefined8 *)(param_1 + _DAT_1127743f0));
                    /* WARNING: Could not recover jumptable at 0x0001080a9cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 8))(plVar2);
  return;
}



/* Entry: 1080a9d3c; end: 1080a9ecb; -[SCValdiIndexPicker valdi_setContent:labels:animator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1080a9d3c(ulong param_1,undefined8 param_2,ulong param_3,ulong param_4,long param_5)

{
  long lVar1;
  undefined1 uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  
  uVar7 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x0001080aa25c();
  func_0x0001080aa288();
  lVar9 = (long)_DAT_1127743ec;
  uVar3 = *(ulong *)(param_1 + lVar9);
  uVar6 = param_4;
  func_0x00010c071ae0();
  if ((uVar3 & 1) == 0) {
    func_0x0001080aa288();
    func_0x0001080aa264();
    lVar1 = lRam0000000000000000;
    while (uVar3 != 0) {
      uVar10 = 0;
      do {
        uVar2 = lRam0000000000000000 == lVar1;
        if (!(bool)uVar2) {
          _objc_enumerationMutation(param_4);
        }
        uVar8 = *(ulong *)(uVar10 * 8);
        puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
        _objc_opt_isKindOfClass(uVar8,puVar4);
        if ((uVar8 & 1) == 0) {
          func_0x0001080aa254();
          uVar5 = 0;
          goto LAB_1080a9e90;
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar3);
      func_0x0001080aa264();
      uVar3 = uVar8;
    }
    func_0x0001080aa254();
    func_0x0001080aa288();
    uVar5 = *(undefined8 *)(param_1 + lVar9);
    *(ulong *)(param_1 + lVar9) = param_4;
    _objc_release(uVar5);
    func_0x00010c128940(param_1);
  }
  func_0x00010bf529e0();
  func_0x00010c067fc0();
  uVar3 = param_4 - 1;
  if ((long)param_3 <= (long)(param_4 - 1)) {
    uVar3 = param_3;
  }
  uVar3 = uVar3 & ((long)uVar3 >> 0x3f ^ 0xffffffffffffffffU);
  uVar6 = 0;
  uVar8 = param_1;
  func_0x00010c159ec0();
  uVar2 = uVar3 == uVar8;
  if (!(bool)uVar2) {
    uVar2 = param_5 == 0;
    func_0x00010c158fc0();
    uVar8 = param_1;
    uVar6 = uVar3;
  }
  uVar5 = 1;
LAB_1080a9e90:
  func_0x0001080aa254();
  func_0x0001080aa280();
  func_0x0001080aa29c(uVar7);
  if ((bool)uVar2) {
    return uVar5;
  }
  ___stack_chk_fail();
  func_0x0001080aa25c();
  uVar7 = *(undefined8 *)(uVar8 + (long)_DAT_1127743f0);
  *(ulong *)(uVar8 + (long)_DAT_1127743f0) = uVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar7);
  return uVar7;
}



/* Entry: 1080a9ecc; end: 1080a9eff; -[SCValdiIndexPicker valdi_setOnChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080a9ecc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001080aa25c();
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127743f0);
  *(undefined8 *)(param_1 + _DAT_1127743f0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1080a9f00; end: 1080a9fc7; +[SCValdiIndexPicker _valdiContentComponents] */

void FUN_1080a9f00(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined1 *puVar5;
  code *pcVar6;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puVar5 = &stack0xfffffffffffffff0;
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b4b08;
  _objc_alloc();
  func_0x00010bff4e00();
  puVar2 = PTR_PTR_1126b4b08;
  puStack_48 = puVar1;
  _objc_alloc();
  func_0x00010bff4e00();
  ppuVar4 = &puStack_48;
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,ppuVar4,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080aa278();
  func_0x0001080aa254();
  func_0x0001080aa29c(uStack_38);
  if ((bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR_PTR_1126d92f0;
  pcVar6 = FUN_1080a9fc8;
  func_0x0001080aa25c();
  func_0x00010bee7500(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a200(ppuVar4,param_2,&PTR____CFConstantStringClassReference_110dbdd78,puVar2,
                      &PTR___NSConcreteGlobalBlock_110a1b830,&PTR___NSConcreteGlobalBlock_110a1b870,
                      in_x6,in_x7,puVar1,puVar3,puVar5,pcVar6);
  func_0x0001080aa254();
  func_0x00010bf1a1e0(ppuVar4,param_2,&PTR____CFConstantStringClassReference_110ed3ff8,
                      &PTR___NSConcreteGlobalBlock_110a1b8b0,&PTR___NSConcreteGlobalBlock_110a1b8f0)
  ;
  func_0x00010c1dcc00(ppuVar4,param_2,&PTR___NSConcreteGlobalBlock_110a1b910);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar4);
  return;
}



/* Entry: 1080a9fc8; end: 1080aa05f; +[SCValdiIndexPicker bindAttributes:] */

void FUN_1080a9fc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d92f0;
  func_0x0001080aa25c();
  func_0x00010bee7500(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a200(param_3,param_2,&PTR____CFConstantStringClassReference_110dbdd78,puVar1,
                      &PTR___NSConcreteGlobalBlock_110a1b830,&PTR___NSConcreteGlobalBlock_110a1b870)
  ;
  func_0x0001080aa254();
  func_0x00010bf1a1e0(param_3,param_2,&PTR____CFConstantStringClassReference_110ed3ff8,
                      &PTR___NSConcreteGlobalBlock_110a1b8b0,&PTR___NSConcreteGlobalBlock_110a1b8f0)
  ;
  func_0x00010c1dcc00(param_3,param_2,&PTR___NSConcreteGlobalBlock_110a1b910);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1080aa060; end: 1080aa1ab;  */

undefined8 FUN_1080aa060(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_2);
  func_0x0001080aa288();
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  if ((uVar2 & 1) == 0) {
    param_3 = 0;
  }
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010bf529e0();
  if (uVar2 == 2) {
    uVar3 = param_3;
    func_0x00010c0dfd40(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class();
    func_0x0001080aa290();
    uVar2 = uVar3;
    if (((ulong)puVar1 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar3);
    uVar4 = param_3;
    func_0x00010c0dfd40(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    _objc_opt_class();
    func_0x0001080aa290();
    uVar3 = uVar4;
    if (((ulong)puVar1 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(uVar4);
    func_0x00010c295c40(param_2);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  else {
    param_2 = 0;
  }
  _objc_release(param_3);
  func_0x0001080aa278();
  func_0x0001080aa254();
  func_0x0001080aa280();
  return param_2;
}



/* Entry: 1080aa1ac; end: 1080aa1d3;  */

void FUN_1080aa1ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c295c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_valdi_setContent_labels_animator_112683138,0,0,param_3);
  return;
}



/* Entry: 1080aa1d4; end: 1080aa1ef;  */

void FUN_1080aa1d4(void)

{
  _objc_opt_new(PTR_PTR_1126d92f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1080aa1f0; end: 1080aa22f; -[SCValdiIndexPicker .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080aa1f0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127743f0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127743ec,0);
  return;
}



/* Entry: 1080aa230; end: 1080aa253;  */

void FUN_1080aa230(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_10f2c4679;
  func_0x00010b9742d4();
  puRam0000000113729160 = puVar1;
  return;
}



/* Entry: 1080aa254; end: 1080aa2af;  */

void FUN_1080aa254(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080aa2b0; end: 1080aa2b7; +[SCValdiLabel valdi_managesChildFrames] */

undefined8 FUN_1080aa2b0(void)

{
  return 1;
}



/* Entry: 1080aa2b8; end: 1080aa32b; -[SCValdiLabel initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1080aa2b8(void)

{
  undefined1 *puVar1;
  undefined1 auStack_30 [16];
  
  puVar1 = auStack_30;
  func_0x0001080ac848();
  _objc_msgSendSuper2(auStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined1 *)0x0) {
    func_0x00010c1fe7a0(0,0,puVar1);
    func_0x00010c21e900(puVar1);
    func_0x00010c165e00(puVar1);
    *(undefined8 *)(puVar1 + _DAT_1127743f4) = 0;
  }
  return puVar1;
}



/* Entry: 1080aa32c; end: 1080aa373; -[SCValdiLabel dealloc] */

void FUN_1080aa32c(long param_1)

{
  long extraout_x8;
  
  func_0x0001080ac9e4();
  func_0x00010c2559e0(*(undefined8 *)(param_1 + *(int *)(extraout_x8 + 0x3f8)));
  func_0x0001080ac878();
  _objc_msgSendSuper2(&stack0xffffffffffffffd0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1080aa374; end: 1080aa377; -[SCValdiLabel valdi_applySlowClipping:animator:] */

void FUN_1080aa374(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c17d4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setClipsToBounds__11263cf50);
  return;
}



/* Entry: 1080aa378; end: 1080aa42b; -[SCValdiLabel layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080aa378(long param_1)

{
  long lVar1;
  long lVar2;
  long alStack_40 [2];
  
  func_0x00010bee1d80();
  func_0x00010bed3500(param_1);
  func_0x00010bed9b80(param_1);
  func_0x0001080ac878();
  alStack_40[0] = param_1;
  _objc_msgSendSuper2(alStack_40,PTR_s_layoutSubviews_112600e60);
  func_0x0001080ac884();
  lVar1 = (long)_DAT_1127743f8;
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + lVar1));
  func_0x0001080ac884();
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_1127743fc));
  func_0x00010c08cdc0(*(undefined8 *)(param_1 + lVar1));
  func_0x00010bed9bc0(param_1);
  func_0x00010bed9ba0(param_1);
  lVar2 = (long)_DAT_112774400;
  if (*(char *)(param_1 + lVar2) == '\x01') {
    func_0x00010c0f8b80(*(undefined8 *)(param_1 + lVar1));
    *(undefined1 *)(param_1 + lVar2) = 0;
  }
  return;
}



/* Entry: 1080aa42c; end: 1080aa42f; -[SCValdiLabel convertPoint:fromView:] */

void FUN_1080aa42c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2956f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_valdi_convertPoint_fromView__112682fe0);
  return;
}



/* Entry: 1080aa430; end: 1080aa433; -[SCValdiLabel convertPoint:toView:] */

void FUN_1080aa430(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c295710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_valdi_convertPoint_toView__112682fe8);
  return;
}



/* Entry: 1080aa434; end: 1080aa487; -[SCValdiLabel sizeThatFits:] */

void FUN_1080aa434(undefined8 param_1)

{
  undefined8 auStack_40 [2];
  
  func_0x00010bed3500();
  func_0x0001080ac878();
  auStack_40[0] = param_1;
  func_0x0001080ac9ac(auStack_40,PTR_s_sizeThatFits__11266cf90);
  _objc_msgSendSuper2();
  return;
}



/* Entry: 1080aa488; end: 1080aa553; -[SCValdiLabel hitTest:withEvent:] */

void FUN_1080aa488(undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined1 **ppuVar2;
  undefined1 *apuStack_50 [2];
  
  ppuVar2 = apuStack_50;
  func_0x0001080ac7bc();
  puVar1 = param_1;
  func_0x00010c2953a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar1 == (undefined1 *)0x0) {
    func_0x0001080ac878();
    apuStack_50[0] = param_1;
    func_0x0001080ac9ac(apuStack_50,PTR_s_hitTest_withEvent__1125d6850);
    _objc_msgSendSuper2();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c2953a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080ac9ac(param_1);
    func_0x00010c295740();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080ac798();
    ppuVar2 = (undefined1 **)param_1;
  }
  func_0x0001080ac790();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 1080aa554; end: 1080aa57f; -[SCValdiLabel pointInside:withEvent:] */

void FUN_1080aa554(void)

{
  undefined1 auStack_20 [16];
  
  func_0x0001080ac848();
  _objc_msgSendSuper2(auStack_20,PTR_s_pointInside_withEvent__11261e4e8);
  return;
}



/* Entry: 1080aa580; end: 1080aa58b; +[SCValdiLabel measureSizeWithMaxSize:fontAttributes:fontManager:text:traitCollection:] */

void FUN_1080aa580(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0c3f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126d92f8,PTR_s_measureSizeWithMaxSize_fontAttri_11260e9d8);
  return;
}



/* Entry: 1080aa58c; end: 1080aa5db; -[SCValdiLabel _needAttributedString] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1080aa58c(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long extraout_x8;
  
  lVar1 = param_1;
  func_0x0001080ac9f0();
  uVar2 = *(ulong *)(lVar1 + extraout_x8);
  func_0x00010c0d7080();
  if ((uVar2 & 1) == 0) {
    if (*(long *)(param_1 + _DAT_112774408) != 0) {
      func_0x0001080ac83c();
      func_0x0001080ac77c();
      if ((uVar2 & 1) == 0) goto LAB_1080aa5d0;
    }
    uVar3 = 0;
  }
  else {
LAB_1080aa5d0:
    uVar3 = 1;
  }
  return uVar3;
}



/* Entry: 1080aa5dc; end: 1080aa5eb; -[SCValdiLabel _isSelectable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1080aa5dc(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277440c);
}



/* Entry: 1080aa5ec; end: 1080aa637; -[SCValdiLabel _updateInlineTextAttachmentsIfNeeded] */

void FUN_1080aa5ec(long param_1)

{
  int iVar1;
  undefined1 in_ZR;
  int iVar2;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x19;
  
  func_0x0001080ac858();
  if ((bool)in_ZR) {
    func_0x0001080ac9e4();
    iVar1 = *(int *)(extraout_x8 + 0x3f8);
    if (*(long *)(param_1 + iVar1) != 0) {
      func_0x0001080ac9c4();
      iVar2 = (int)*(undefined8 *)(unaff_x19 + extraout_x8_00);
      func_0x00010bfd7f80();
      if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c286930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)
                  (*(undefined8 *)(unaff_x19 + iVar1),
                   PTR_s_updateInlineAttachmentsAndUpdate_11267f470);
        return;
      }
    }
  }
  return;
}



/* Entry: 1080aa638; end: 1080aa76f; -[SCValdiLabel _updateInlineTextChildFrames] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080aa638(double param_1,double param_2,undefined8 param_3,double param_4,long param_5)

{
  undefined1 in_ZR;
  long lVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  func_0x0001080ac858();
  if (((bool)in_ZR) && (lVar4 = *(long *)(param_5 + _DAT_1127743f8), lVar4 != 0)) {
    lVar3 = *(long *)(param_5 + _DAT_1127743fc);
    if (lVar3 != 0) {
      func_0x0001080ac7b4();
      func_0x00010c26c300(lVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c290f60();
      dVar6 = param_1;
      dVar7 = param_2;
      func_0x00010bf20c00(param_5);
      func_0x00010bf20c00(param_5);
      dVar8 = dVar7;
      func_0x00010c23d0a0(lVar4);
      func_0x0001080ac9c4();
      uVar5 = *(undefined8 *)(param_5 + extraout_x8);
      lVar1 = lVar4;
      func_0x00010c08ce80(lVar4);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar4;
      func_0x00010c26ba00(lVar4);
      _objc_retainAutoreleasedReturnValue();
      FUN_1080a2ca4(dVar6 - param_1,(dVar7 + (dVar8 - param_4) * 0.5) - param_2,uVar5,lVar1,lVar2,
                    lVar3);
      func_0x0001080ac790();
      func_0x0001080ac7d8();
      func_0x0001080ac7d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar4);
      return;
    }
  }
  return;
}



/* Entry: 1080aa770; end: 1080aa82f; -[SCValdiLabel _updateInlineTextChildAnimations] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080aa770(long param_1)

{
  undefined1 in_ZR;
  long extraout_x8;
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  func_0x0001080ac858();
  if ((((bool)in_ZR) && (lVar1 = *(long *)(param_1 + _DAT_1127743f8), lVar1 != 0)) &&
     (lVar2 = *(long *)(param_1 + _DAT_1127743fc), lVar2 != 0)) {
    func_0x0001080ac7b4();
    func_0x0001080ac9c4();
    uVar3 = *(undefined8 *)(param_1 + extraout_x8);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_1080aa830;
    puStack_40 = &UNK_110a1b950;
    lStack_38 = lVar1;
    func_0x0001080ac7b4();
    func_0x0001080ac7e0();
    FUN_1080a2ec4(uVar3,lVar2,&puStack_58);
    _objc_release(lStack_38);
    func_0x0001080ac790();
    func_0x0001080ac788();
  }
  return;
}



/* Entry: 1080aa830; end: 1080aa83f;  */

void FUN_1080aa830(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf038b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_animatedTextPresentationForRange_11259e7d0,
             param_2,param_3);
  return;
}



/* Entry: 1080aa840; end: 1080aa913; -[SCValdiLabel contentViewForInsertingValdiChildren] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080aa840(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = (long)_DAT_1127743fc;
  if (*(long *)(param_1 + lVar3) == 0) {
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x0001080ac884();
    func_0x00010c013de0();
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined **)(param_1 + lVar3) = puVar1;
    func_0x0001080ac7fc(uVar2);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_1 + lVar3),param_2,puVar1);
    func_0x0001080ac788();
    func_0x00010c1af000(*(undefined8 *)(param_1 + lVar3),param_2,0);
    lVar4 = (long)_DAT_1127743f8;
    func_0x00010c262ca0(*(undefined8 *)(param_1 + lVar4));
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080ac898();
    if (puVar1 == param_1) {
      func_0x00010c066f80(param_1,param_2,*(undefined8 *)(param_1 + lVar3),
                          *(undefined8 *)(param_1 + lVar4));
    }
    else {
      func_0x00010befbb60(param_1);
    }
  }
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x0001080ac7b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1080aa914; end: 1080aa967; -[SCValdiLabel valdi_setSelectable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080aa914(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + _DAT_11277440c) == param_3) {
    return;
  }
  *(char *)(param_1 + _DAT_11277440c) = (char)param_3;
  func_0x00010c1fada0(*(undefined8 *)(param_1 + _DAT_1127743f8));
  func_0x0001080ac86c((long)_DAT_112774414);
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 1080aa968; end: 1080aab23; -[SCValdiLabel valdi_setSelection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1080aa968(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  int *unaff_x19;
  long unaff_x20;
  long lVar7;
  
  FUN_1080ac760();
  piVar2 = unaff_x19;
  func_0x00010bf529e0();
  if (piVar2 == (int *)0x2) {
    func_0x0001080ac8e0();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class();
    func_0x0001080ac998();
    iVar1 = (int)puVar3;
    if (((ulong)puVar3 & 1) == 0) {
      func_0x0001080ac798();
    }
    else {
      piVar2 = unaff_x19;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_opt_class();
      func_0x0001080ac980();
      iVar1 = (int)puVar3;
      func_0x0001080ac7d0();
      func_0x0001080ac798();
      if (((ulong)puVar3 & 1) != 0) {
        func_0x00010bf51e00();
        func_0x0001080ac9b8();
        lVar7 = (long)piVar2[8];
        uVar6 = *(undefined8 *)(unaff_x20 + lVar7);
        *(int **)(unaff_x20 + lVar7) = unaff_x19;
        func_0x0001080ac7fc(uVar6);
        lVar4 = *(long *)(unaff_x20 + *piVar2);
        if (lVar4 == 0) {
          lVar4 = 1;
          if (*(char *)(unaff_x20 + _DAT_11277440c) == '\x01') {
            *(undefined1 *)(unaff_x20 + _DAT_112774414) = 1;
            func_0x00010c1cbe20();
          }
          goto LAB_1080aab14;
        }
        ppuVar5 = *(undefined ***)(unaff_x20 + lVar7);
        goto LAB_1080aaad4;
      }
    }
    func_0x00010b96bf1c();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080ac8d8();
    if (iVar1 != 0) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110ed5598;
LAB_1080aaa80:
      func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,ppuVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x0001080ac88c();
      func_0x0001080ac940();
      func_0x0001080ac798();
    }
  }
  else {
    func_0x00010bf529e0();
    if (unaff_x19 == (int *)0x0) {
      uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112774418);
      *(undefined8 *)(unaff_x20 + _DAT_112774418) = 0;
      _objc_release(uVar6);
      lVar4 = *(long *)(unaff_x20 + _DAT_1127743f8);
      if (lVar4 == 0) {
        lVar4 = 1;
        goto LAB_1080aab14;
      }
      ppuVar5 = &PTR__OBJC_CLASS___NSConstantArray_111182e10;
LAB_1080aaad4:
      func_0x00010c1fb7a0(lVar4,param_2,ppuVar5);
      goto LAB_1080aab14;
    }
    func_0x00010b96bf1c();
    iVar1 = (int)unaff_x19;
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080ac8d8();
    if (iVar1 != 0) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110ed5578;
      goto LAB_1080aaa80;
    }
  }
  func_0x0001080ac788();
  lVar4 = 0;
LAB_1080aab14:
  func_0x0001080ac790();
  return lVar4;
}



/* Entry: 1080aab24; end: 1080aab67; -[SCValdiLabel valdi_setOnSelectionChange:] */

void FUN_1080aab24(void)

{
  undefined8 unaff_x19;
  long unaff_x20;
  long unaff_x22;
  
  FUN_1080ac760();
  func_0x0001080ac9b8();
  *(undefined8 *)(unaff_x20 + *(int *)(unaff_x22 + 0x24)) = unaff_x19;
  func_0x0001080ac7b4();
  func_0x0001080ac798();
  func_0x0001080ac8fc();
  func_0x00010c1d3480();
  func_0x0001080ac790();
                    /* WARNING: Could not recover jumptable at 0x00010bea5c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1080aab68; end: 1080aabab; -[SCValdiLabel valdi_setOnTextSelectionMenu:] */

void FUN_1080aab68(void)

{
  undefined8 unaff_x19;
  long unaff_x20;
  long unaff_x22;
  
  FUN_1080ac760();
  func_0x0001080ac9b8();
  *(undefined8 *)(unaff_x20 + *(int *)(unaff_x22 + 0x28)) = unaff_x19;
  func_0x0001080ac7b4();
  func_0x0001080ac798();
  func_0x0001080ac8fc();
  func_0x00010c1d3f60();
  func_0x0001080ac790();
                    /* WARNING: Could not recover jumptable at 0x00010bea5c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1080aabac; end: 1080aabef; -[SCValdiLabel valdi_setOnTextSelectionMenuAction:] */

void FUN_1080aabac(void)

{
  undefined8 unaff_x19;
  long unaff_x20;
  long unaff_x22;
  
  FUN_1080ac760();
  func_0x0001080ac9b8();
  *(undefined8 *)(unaff_x20 + *(int *)(unaff_x22 + 0x2c)) = unaff_x19;
  func_0x0001080ac7b4();
  func_0x0001080ac798();
  func_0x0001080ac8fc();
  func_0x00010c1d3f80();
  func_0x0001080ac790();
                    /* WARNING: Could not recover jumptable at 0x00010bea5c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1080aabf0; end: 1080aad1b; -[SCValdiLabel _getAttributedTextOnTapGestureRecognizer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080aabf0(undefined *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 extraout_x8;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  undefined8 uStack_58;
  
  func_0x0001080ac8ec();
  uVar2 = param_1[_DAT_112774428] == '\x01';
  uStack_58 = extraout_x8;
  if ((bool)uVar2) {
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    func_0x00010bfc1c00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_1;
    func_0x00010bf52a60();
    if (puVar3 != (undefined *)0x0) {
      lVar6 = *plStack_110;
      do {
        puVar7 = (undefined *)0x0;
        do {
          if (*plStack_110 != lVar6) {
            _objc_enumerationMutation(param_1);
          }
          puVar4 = PTR_PTR_1126d9300;
          lVar5 = *(long *)(lStack_118 + (long)puVar7 * 8);
          func_0x0001080ac804();
          _objc_opt_class();
          func_0x0001080ac998();
          uVar2 = ((ulong)puVar4 & 1) == 0;
          lVar1 = lVar5;
          if ((bool)uVar2) {
            lVar1 = 0;
          }
          func_0x0001080ac930();
          func_0x0001080ac798();
          if (lVar1 != 0) goto LAB_1080aace0;
          puVar7 = puVar7 + 1;
          uVar2 = puVar7 == puVar3;
        } while (puVar7 < puVar3);
        puVar3 = param_1;
        func_0x00010bf52a60(param_1,param_2,&uStack_120,auStack_d8,0x10);
      } while (puVar3 != (undefined *)0x0);
    }
    puVar4 = (undefined *)0x0;
    lVar5 = 0;
LAB_1080aace0:
    func_0x0001080ac790();
    param_1 = puVar4;
  }
  else {
    lVar5 = 0;
  }
  func_0x0001080ac7e8(uStack_58);
  if ((bool)uVar2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
    return;
  }
  ___stack_chk_fail();
  puVar3 = param_1;
  func_0x00010be1d060();
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 != (undefined *)0x0) {
    param_1[_DAT_112774428] = 0;
    func_0x00010c12c9c0(param_1,param_2,puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1080aad1c; end: 1080aad63; -[SCValdiLabel _removeAttributedTextOnTapGestureRecognizer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080aad1c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010be1d060();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    *(undefined1 *)(param_1 + _DAT_112774428) = 0;
    func_0x00010c12c9c0(param_1,param_2,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1080aad64; end: 1080aadcf; -[SCValdiLabel _addAttributedTextOnTapGestureRecognizer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080aad64(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = param_1;
  func_0x00010be1d060();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126d9300;
    _objc_alloc_init(PTR_PTR_1126d9300);
    func_0x0001080ac86c((long)_DAT_112774428);
    func_0x00010bef9040(param_1,param_2,puVar1);
  }
  func_0x00010c1a1800(puVar1,param_2,*(undefined8 *)(param_1 + _DAT_1127743f8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1080aadd0; end: 1080ab40b; -[SCValdiLabel _updateAttributedTextIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080aadd0(ulong param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  long extraout_x8;
  long lVar14;
  undefined8 uVar15;
  int iVar16;
  long lVar17;
  undefined8 uVar18;
  int iVar19;
  undefined *puVar20;
  undefined8 uVar21;
  
  if (*(char *)(param_1 + (long)_DAT_112774414) != '\x01') {
    return;
  }
  *(undefined1 *)(param_1 + (long)_DAT_112774414) = 0;
  uVar2 = param_1;
  func_0x00010c2954e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07cb60();
  func_0x0001080ac788();
  uVar3 = param_1;
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080ac788();
  uVar4 = param_1;
  func_0x00010bfb3b00();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080ac9f0();
  if ((*(long *)(param_1 + extraout_x8) == 0) && (*(long *)(param_1 + (long)_DAT_112774408) != 0)) {
    puVar20 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class();
    func_0x0001080ac98c();
    if ((((ulong)puVar20 & 1) == 0) && ((*(byte *)(param_1 + (long)_DAT_11277442c) & 1) == 0)) {
      func_0x0001080ac86c();
      func_0x00010b96bf1c();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar20;
      func_0x0001080ac8d8();
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if ((int)puVar6 != 0) {
        _objc_opt_class();
        func_0x00010bfb68e0();
        _NSStringFromCGRect();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25d9e0(puVar7,param_2,&PTR____CFConstantStringClassReference_110ed55b8);
        _objc_retainAutoreleasedReturnValue();
        func_0x0001080ac940(puVar20,param_2,puVar7);
        func_0x0001080ac788();
        func_0x0001080ac8c8();
      }
      func_0x0001080ac7d8();
    }
  }
  uVar8 = param_1;
  func_0x00010be625e0();
  if (((uVar8 & 1) == 0) && (uVar8 = param_1, func_0x00010be439a0(), (int)uVar8 == 0)) {
    uVar21 = *(undefined8 *)(param_1 + (long)_DAT_112774410);
    *(undefined8 *)(param_1 + (long)_DAT_112774410) = 0;
    _objc_release(uVar21);
    func_0x0001080ac8e0();
    func_0x00010c286d60();
    iVar16 = _DAT_1127743f8;
    func_0x00010c2559e0(*(undefined8 *)(param_1 + (long)_DAT_1127743f8));
    func_0x00010be8b6e0(param_1);
    uVar8 = uVar4;
    func_0x00010bfb3a80();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010c13a900();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080ac788();
    func_0x00010bfb3a80(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080ac898();
    if (uVar8 != uVar9) {
      func_0x00010c19e480(param_1,param_2,uVar9);
    }
    uVar8 = param_1;
    func_0x00010c26b920();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar4;
    func_0x00010bf40c40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    func_0x0001080ac788();
    if (uVar8 != uVar9) {
      uVar8 = uVar4;
      func_0x00010bf40c40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c213180(param_1,param_2,uVar8);
      func_0x0001080ac788();
    }
    uVar8 = uVar4;
    func_0x00010c13ae40(uVar4,param_2,uVar2);
    uVar2 = param_1;
    func_0x00010c26b7a0();
    if (uVar2 != uVar8) {
      func_0x00010c213040(param_1,param_2,uVar8);
    }
    func_0x00010c212f20(param_1,param_2,*(undefined8 *)(param_1 + (long)_DAT_112774408));
    func_0x0001080ac7d8();
    lVar14 = (long)_DAT_112774430;
  }
  else {
    lVar14 = (long)_DAT_112774430;
    lVar5 = *(long *)(param_1 + lVar14);
    func_0x00010bfcd8a0();
    _objc_retainAutoreleasedReturnValue();
    if ((lVar5 == 0) && (*(long *)(param_1 + (long)_DAT_112774434) == 0)) {
      puVar20 = (undefined *)0x0;
      iVar19 = _DAT_112774434;
    }
    else {
      puVar20 = PTR_PTR_1126d9308;
      _objc_opt_new(PTR_PTR_1126d9308);
      func_0x00010c19ea80();
      iVar19 = _DAT_112774434;
      if (*(long *)(param_1 + (long)_DAT_112774434) != 0) {
        func_0x00010c188f40(puVar20);
        func_0x00010c188f00(puVar20,param_2,1);
      }
    }
    puVar7 = PTR_PTR_1126d9280;
    uVar21 = *(undefined8 *)(param_1 + (long)_DAT_112774408);
    uVar8 = uVar4;
    func_0x00010c13a5a0(uVar4,param_2,uVar2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c115820(puVar7,param_2,uVar21,uVar8,uVar2,
                        *(undefined8 *)(param_1 + (long)_DAT_112774438),uVar3,puVar20);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = (long)_DAT_112774410;
    uVar21 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar7;
    func_0x0001080ac7fc(uVar21);
    _objc_release(uVar8);
    uVar21 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010bf0e280();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(ulong *)(param_1 + lVar5);
    func_0x00010bfd9a20();
    uVar9 = *(ulong *)(param_1 + lVar5);
    func_0x00010bfd9a00();
    uVar10 = *(ulong *)(param_1 + lVar5);
    func_0x00010bfd41a0();
    uVar11 = *(ulong *)(param_1 + lVar5);
    func_0x00010bfd7f80();
    uVar12 = *(ulong *)(param_1 + lVar5);
    func_0x00010bfd6160();
    uVar1 = (uint)*(undefined8 *)(param_1 + lVar5);
    func_0x00010bfd9d80();
    uVar2 = param_1;
    func_0x00010be439a0();
    if (((((uVar2 & 1) == 0) && ((uVar8 & 1) == 0)) && ((uVar9 & 1) == 0)) &&
       ((((uVar12 & 1) == 0 && ((uVar10 & 1) == 0)) && (((uVar11 & 1) == 0 && (uVar1 == 0)))))) {
      func_0x00010c286d60(param_1,param_2,1);
      iVar16 = _DAT_1127743f8;
      func_0x00010c2559e0(*(undefined8 *)(param_1 + (long)_DAT_1127743f8));
      func_0x00010c16b720(param_1,param_2,uVar21);
    }
    else {
      func_0x00010c286d80(param_1,param_2,2,((uint)uVar10 | uVar1 | (uint)uVar12) & 1);
      iVar16 = _DAT_1127743f8;
      lVar17 = (long)_DAT_1127743f8;
      uVar15 = *(undefined8 *)(param_1 + lVar17);
      uVar18 = *(undefined8 *)(param_1 + (long)iVar19);
      uVar13 = *(undefined8 *)(param_1 + lVar5);
      func_0x00010bf62a80(uVar13);
      _objc_retainAutoreleasedReturnValue();
      uVar21 = *(undefined8 *)(param_1 + lVar5);
      func_0x00010bf629e0(uVar21);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c188f60(uVar15,param_2,uVar18,uVar13,uVar21);
      func_0x0001080ac7d8();
      _objc_release(uVar13);
      func_0x0001080ac8c0();
      func_0x00010c1c34a0(*(undefined8 *)(param_1 + lVar17),param_2,uVar13);
      func_0x00010c1e38a0(*(undefined8 *)(param_1 + lVar17),param_2,*(undefined8 *)(param_1 + lVar5)
                         );
      func_0x00010bdce940(param_1);
      if ((uint)uVar10 == 0) {
        func_0x00010c2559e0(*(undefined8 *)(param_1 + lVar17));
      }
      else {
        func_0x00010c069d60();
      }
    }
    if ((int)uVar9 != 0) {
      func_0x0001080ac86c((long)_DAT_112774400);
    }
    if ((int)uVar8 == 0) {
      func_0x00010be8b6e0(param_1);
    }
    else {
      func_0x00010bdc5ee0(param_1);
    }
    func_0x0001080ac7d8();
    func_0x0001080ac8d0();
    func_0x0001080ac7d0();
  }
  lVar5 = *(long *)(param_1 + lVar14);
  func_0x00010bfcd8a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 != 0) {
    func_0x00010c26b920(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080ac898();
    if (lVar14 != lVar5) {
      func_0x00010c213180(param_1,param_2,lVar5);
    }
  }
  uVar2 = param_1;
  func_0x00010c0def20();
  uVar8 = uVar2;
  func_0x0001080ac8c0();
  uVar9 = uVar8;
  if (uVar2 != uVar8) {
    func_0x0001080ac8c0();
    uVar9 = param_1;
    func_0x00010c1cfce0(param_1,param_2,uVar8);
  }
  if (*(long *)(param_1 + (long)iVar16) != 0) {
    func_0x0001080ac8c0();
    func_0x00010c1c34a0(*(undefined8 *)(param_1 + (long)iVar16),param_2,uVar9);
    uVar2 = param_1;
    func_0x00010c26b920(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18b2a0(*(undefined8 *)(param_1 + (long)iVar16),param_2,uVar2);
    func_0x0001080ac788();
  }
  uVar2 = uVar4;
  func_0x00010c099180();
  if (uVar2 != 2) {
    uVar2 = 4;
  }
  func_0x00010c1bdb00(param_1,param_2,uVar2);
  func_0x0001080ac7d0();
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1080ab40c; end: 1080ab413; -[SCValdiLabel requiresLayoutWhenAnimatingBounds] */

undefined8 FUN_1080ab40c(void)

{
  return 0;
}



/* Entry: 1080ab414; end: 1080ab45b; -[SCValdiLabel fontAttributes] */

void FUN_1080ab414(long param_1)

{
  long extraout_x8;
  undefined *puVar1;
  
  func_0x0001080ac9f0();
  puVar1 = *(undefined **)(param_1 + extraout_x8);
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    func_0x00010bf69680(PTR__OBJC_CLASS___NSAttributedString_1126af068);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x0001080ac7b4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1080ab45c; end: 1080ab483; -[SCValdiLabel valdi_setFontManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080ab45c(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_1080ac760();
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112774438);
  *(undefined8 *)(unaff_x20 + _DAT_112774438) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1080ab484; end: 1080ab4cb; -[SCValdiLabel valdi_setFontAttributes:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080ab484(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long extraout_x8;
  
  func_0x0001080ac7bc();
  func_0x0001080ac9f0();
  uVar1 = *(undefined8 *)(param_1 + extraout_x8);
  *(long *)(param_1 + extraout_x8) = param_3;
  _objc_release(uVar1);
  if (param_3 != 0) {
    *(undefined1 *)(param_1 + _DAT_11277442c) = 0;
  }
  func_0x0001080ac7a0();
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 1080ab4cc; end: 1080ab507; -[SCValdiLabel valdi_setText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080ab4cc(void)

{
  long unaff_x20;
  
  FUN_1080ac760();
  func_0x0001080ac948((long)_DAT_112774408);
  *(undefined1 *)(unaff_x20 + _DAT_112774414) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1080ab508; end: 1080ab543; -[SCValdiLabel valdi_setCustomUnderlineStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080ab508(void)

{
  long unaff_x20;
  
  FUN_1080ac760();
  func_0x0001080ac948((long)_DAT_112774434);
  *(undefined1 *)(unaff_x20 + _DAT_112774414) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1080ab544; end: 1080ab593; -[SCValdiLabel _createTextGradientHelperIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080ab544(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112774430;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126d9310;
    _objc_opt_new();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    func_0x0001080ac7fc(uVar2);
    lVar3 = *(long *)(param_1 + lVar4);
  }
  func_0x0001080ac7e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1080ab594; end: 1080ab697; -[SCValdiLabel valdi_setTextGradient:animator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1080ab594(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  func_0x0001080ac7bc();
  func_0x0001080ac7e0();
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  if (param_3 < 2) {
    if (*(long *)(param_1 + _DAT_112774430) != 0) {
      func_0x00010c1a4040(*(long *)(param_1 + _DAT_112774430),param_2,0);
    }
    func_0x00010c2954e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18d6c0();
    func_0x0001080ac7d8();
    func_0x0001080ac80c();
  }
  else {
    func_0x00010bdf49c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a4040();
    func_0x0001080ac7d8();
    func_0x0001080ac80c();
    func_0x00010bee1da0(param_1,param_2,param_4);
    func_0x00010c2954e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18d6c0();
    func_0x0001080ac7d0();
  }
  func_0x0001080ac798();
  func_0x0001080ac788();
  func_0x0001080ac790();
  return 1;
}



/* Entry: 1080ab698; end: 1080ab69f;  */

void FUN_1080ab698(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee1db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__updateTextGradientLayerWithAnim_112596110);
  return;
}



/* Entry: 1080ab6a0; end: 1080ab6b7; -[SCValdiLabel valdi_layoutTextGradientLayerWithAnimator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080ab6a0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c08ce10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112774430),PTR_s_layoutInView_animator__112600d90,
             param_1,param_3);
  return;
}



/* Entry: 1080ab6b8; end: 1080ab6db; -[SCValdiLabel _updateTextGradientColorIfNeeded] */

void FUN_1080ab6b8(int param_1)

{
  func_0x0001080ac9d0();
  func_0x00010c2846a0();
  if (param_1 != 0) {
    func_0x0001080ac7a0();
  }
  return;
}



/* Entry: 1080ab6dc; end: 1080ab713; -[SCValdiLabel _updateTextGradientLayerWithAnimator:] */

void FUN_1080ab6dc(int param_1)

{
  func_0x0001080ac9d0();
  func_0x00010c08cde0();
  if (param_1 != 0) {
    func_0x0001080ac7a0();
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)();
    return;
  }
  return;
}



/* Entry: 1080ab714; end: 1080ab807; +[SCValdiLabel valdi_onMeasureWithAttributes:maxSize:fontManager:traitCollection:] */

undefined1  [16]
FUN_1080ab714(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auVar3 [16];
  
  _objc_retain(param_7);
  func_0x0001080ac7b4();
  func_0x0001080ac804();
  uVar1 = param_5;
  func_0x00010c296e60(param_5,param_4,&PTR____CFConstantStringClassReference_110ed3ed8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d91d0;
  _objc_opt_class();
  func_0x0001080ac980();
  if (((ulong)puVar2 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x0001080ac7d0();
  func_0x00010c296e60(param_5,param_4,&PTR____CFConstantStringClassReference_110ddd998);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080ac798();
  func_0x0001080ac9ac(PTR_PTR_1126d92f8);
  func_0x00010c0c3f00();
  func_0x0001080ac7d8();
  func_0x0001080ac788();
  func_0x0001080ac790();
  func_0x0001080ac7d0();
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 1080ab808; end: 1080abb2b; +[SCValdiLabel bindAttributes:] */

void FUN_1080ab808(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  func_0x0001080ac7bc();
  uVar2 = param_3;
  func_0x00010bfb3f00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  func_0x00010c295360(PTR__OBJC_CLASS___NSAttributedString_1126af068);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1080abb2c;
  puStack_70 = &UNK_110a1b9c0;
  func_0x0001080ac7b4();
  uStack_68 = uVar2;
  func_0x00010bf1a200(param_3,param_2,&PTR____CFConstantStringClassReference_110ed3ed8,puVar3,
                      &puStack_88,&PTR___NSConcreteGlobalBlock_110a1b9f0);
  func_0x0001080ac7d8();
  puStack_b0 = puVar1;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_1080abbb0;
  puStack_98 = &UNK_110a1b9c0;
  func_0x0001080ac7b4();
  uStack_90 = uVar2;
  func_0x00010bf1a160(param_3,param_2,&PTR____CFConstantStringClassReference_110ddd998,1,&puStack_b0
                      ,&PTR___NSConcreteGlobalBlock_110a1ba10);
  func_0x00010bf1a080(param_3,param_2,&PTR____CFConstantStringClassReference_110ed55d8,0,
                      &PTR___NSConcreteGlobalBlock_110a1ba50,&PTR___NSConcreteGlobalBlock_110a1ba70)
  ;
  func_0x0001080ac91c();
  func_0x0001080ac914();
  func_0x0001080ac914();
  func_0x0001080ac914();
  func_0x00010bf1a180(param_3,param_2,&PTR____CFConstantStringClassReference_110ed5658,0,
                      &PTR___NSConcreteGlobalBlock_110a1bc10,&PTR___NSConcreteGlobalBlock_110a1bc30)
  ;
  func_0x0001080ac9a4(param_3,param_2,&PTR____CFConstantStringClassReference_110ed5658);
  puStack_d8 = puVar1;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_1080abdec;
  puStack_c0 = &UNK_1109057d0;
  func_0x0001080ac7b4();
  uStack_b8 = uVar2;
  func_0x0001080ac9a4(param_3,param_2,&PTR____CFConstantStringClassReference_110dbff38);
  func_0x0001080ac9a4(param_3,param_2,&PTR____CFConstantStringClassReference_110ed3ed8);
  func_0x00010bf1a080(param_3,param_2,&PTR____CFConstantStringClassReference_110ed56b8,1,
                      &PTR___NSConcreteGlobalBlock_110a1bcb0,&PTR___NSConcreteGlobalBlock_110a1bcf0)
  ;
  func_0x00010bf1a0e0(param_3,param_2,&PTR____CFConstantStringClassReference_110ed56d8,1,
                      &PTR___NSConcreteGlobalBlock_110a1bd30,&PTR___NSConcreteGlobalBlock_110a1bd50)
  ;
  func_0x0001080ac91c();
  func_0x00010bee76c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a200(param_3,param_2,&PTR____CFConstantStringClassReference_110ed5718,param_1,
                      &PTR___NSConcreteGlobalBlock_110a1bdb0,&PTR___NSConcreteGlobalBlock_110a1bdd0)
  ;
  func_0x0001080ac798();
  puStack_100 = puVar1;
  uStack_f8 = 0xc2000000;
  uStack_f0 = 0x1080ac084;
  puStack_e8 = &UNK_110a1bdf0;
  uStack_e0 = uVar2;
  func_0x0001080ac7b4();
  func_0x00010c1c3fa0(param_3,param_2,&puStack_100);
  func_0x0001080ac788();
  _objc_release(uStack_e0);
  _objc_release(uStack_b8);
  _objc_release(uStack_90);
  _objc_release(uStack_68);
  func_0x0001080ac790();
  return;
}



/* Entry: 1080abb2c; end: 1080abba3;  */

undefined8 FUN_1080abb2c(void)

{
  func_0x0001080ac7bc();
  func_0x0001080ac7e0();
  func_0x0001080ac88c();
  func_0x00010c295e00();
  func_0x0001080ac7b4();
  _objc_opt_class();
  func_0x0001080ac77c();
  func_0x0001080ac804();
  func_0x0001080ac790();
  func_0x0001080ac88c();
  func_0x00010c295de0();
  func_0x0001080ac798();
  func_0x0001080ac788();
  func_0x0001080ac790();
  return 1;
}



/* Entry: 1080abba4; end: 1080abbaf;  */

void FUN_1080abba4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c295df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_valdi_setFontAttributes__1126831a0,0);
  return;
}



/* Entry: 1080abbb0; end: 1080abbfb;  */

undefined8 FUN_1080abbb0(undefined8 param_1,undefined8 param_2)

{
  func_0x0001080ac7bc();
  func_0x0001080ac7e0();
  func_0x0001080ac88c();
  func_0x00010c295e00();
  func_0x00010c296340(param_2);
  func_0x0001080ac790();
  func_0x0001080ac788();
  return 1;
}



/* Entry: 1080abbfc; end: 1080abc07;  */

void FUN_1080abbfc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c296350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_valdi_setText__1126832f8,0);
  return;
}



/* Entry: 1080abc08; end: 1080abc23;  */

undefined8 FUN_1080abc08(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c296220(param_2);
  return 1;
}



/* Entry: 1080abc24; end: 1080abc83;  */

void FUN_1080abc24(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c296230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_valdi_setSelectable__1126832b0,0);
  return;
}



/* Entry: 1080abc84; end: 1080abce3;  */

undefined8 FUN_1080abc84(void)

{
  func_0x0001080ac7bc();
  func_0x0001080ac7e0();
  _objc_opt_class();
  func_0x0001080ac77c();
  func_0x0001080ac804();
  func_0x0001080ac88c();
  func_0x00010c295c80();
  func_0x0001080ac798();
  func_0x0001080ac788();
  func_0x0001080ac790();
  return 1;
}



/* Entry: 1080abce4; end: 1080abcef;  */

void FUN_1080abce4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c295c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_valdi_setCustomUnderlineStyle__112683148,0);
  return;
}



/* Entry: 1080abcf0; end: 1080abdeb;  */

void FUN_1080abcf0(ulong param_1,long param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  func_0x0001080ac928();
  func_0x0001080ac83c();
  func_0x0001080ac77c();
  if ((param_1 & 1) == 0) {
    param_2 = 0;
  }
  func_0x0001080ac7e0();
  if (param_2 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ed5678;
    func_0x00010b987f80(&PTR____CFConstantStringClassReference_110ed5678);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar1 = (undefined **)PTR_PTR_1126d9318;
    func_0x00010c25e2c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = (undefined **)0x0;
    func_0x0001080ac804();
    if (ppuVar1 == (undefined **)0x0) {
      func_0x00010c09e4e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar1 = &PTR____CFConstantStringClassReference_110ed5698;
      if (ppuVar2 != (undefined **)0x0) {
        ppuVar1 = ppuVar2;
      }
      func_0x00010b987f80(ppuVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x0001080ac8d0();
    }
    else {
      func_0x00010b988044(ppuVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x0001080ac7d0();
    func_0x0001080ac798();
  }
  func_0x0001080ac788();
  func_0x0001080ac790();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 1080abdec; end: 1080abe53;  */

void FUN_1080abdec(void)

{
  undefined *puVar1;
  
  func_0x0001080ac928();
  puVar1 = PTR_PTR_1126d9238;
  func_0x0001080ac83c();
  func_0x0001080ac77c();
  func_0x0001080ac930();
  func_0x00010bfb3ec0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080ac7d0();
  func_0x0001080ac790();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1080abe54; end: 1080abe63;  */

void FUN_1080abe54(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb3b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSAttributedString_1126af068,
             PTR_s_fontAttributesWithCompositeValue_1125ca878,param_2);
  return;
}



/* Entry: 1080abe64; end: 1080abe7f;  */

undefined8 FUN_1080abe64(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c165e20(param_2);
  return 1;
}



/* Entry: 1080abe80; end: 1080abe8b;  */

void FUN_1080abe80(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c165e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_setAdjustsFontSizeToFitWidth__1126371a8,0);
  return;
}



/* Entry: 1080abe8c; end: 1080abea7;  */

undefined8 FUN_1080abe8c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c1c83a0(param_2);
  return 1;
}



/* Entry: 1080abea8; end: 1080abecb;  */

void FUN_1080abea8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1c83b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(0,param_2,PTR_s_setMinimumScaleFactor__11264fb10);
  return;
}



/* Entry: 1080abecc; end: 1080ac07b;  */

undefined8 FUN_1080abecc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  
  func_0x0001080ac928();
  func_0x0001080ac7e0();
  func_0x0001080ac804();
  func_0x0001080ac938();
  func_0x0001080ac98c();
  if ((param_1 & 1) == 0) {
    param_3 = 0;
  }
  func_0x0001080ac930();
  uVar1 = param_3;
  func_0x00010bf529e0();
  if (uVar1 == 2) {
    uVar1 = param_3;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x0001080ac938();
    uVar3 = uVar1;
    _objc_opt_isKindOfClass(uVar1,uVar2);
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    func_0x0001080ac8d0();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x0001080ac938();
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if ((uVar3 & 1) == 0) {
      param_3 = 0;
    }
    uVar2 = param_3;
    _objc_retain();
    func_0x0001080ac8c8();
    if ((uVar1 == 0) || (param_3 == 0)) {
      if (param_3 == 0) {
        func_0x00010c08c0e0(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1fe820();
        func_0x0001080ac8c8();
        FUN_10809fce0(param_2,uVar1);
      }
      else {
        func_0x00010c295bc0();
      }
    }
    else {
      func_0x00010b96bf1c();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar2;
      func_0x0001080ac8d8();
      if ((int)uVar1 != 0) {
        puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
        _objc_retainAutoreleasedReturnValue();
        func_0x0001080ac940(uVar2);
        _objc_release(puVar4);
      }
      func_0x0001080ac8c8();
      param_2 = 0;
    }
    func_0x0001080ac8d0();
    func_0x0001080ac7d8();
  }
  else {
    param_2 = 0;
  }
  func_0x0001080ac7d0();
  func_0x0001080ac798();
  func_0x0001080ac788();
  func_0x0001080ac790();
  return param_2;
}



/* Entry: 1080ac07c; end: 1080ac09f;  */

void FUN_1080ac07c(undefined8 param_1,undefined8 param_2)

{
  _objc_retain();
  func_0x00010c08c0e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe820();
  func_0x00010809ffc4();
  func_0x00010c08c0e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe740();
  func_0x00010809ffc4();
  func_0x00010c08c0e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe840(0);
  func_0x00010809ffc4();
  func_0x00010c08c0e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe800(0);
  func_0x00010809ffc4();
  func_0x00010c08c0e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010809ffbc();
  func_0x00010c1fe7a0(0,0,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1080ac0a0; end: 1080ac143; +[SCValdiLabel _valdiShadowComponents] */

void FUN_1080ac0a0(void)

{
  undefined1 in_ZR;
  undefined *puVar1;
  undefined8 extraout_x8;
  
  func_0x0001080ac8ec();
  _objc_alloc();
  func_0x0001080ac8a0();
  _objc_alloc();
  func_0x0001080ac8a0();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080ac798();
  func_0x0001080ac788();
  func_0x0001080ac7e8(extraout_x8);
  if ((bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c286d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1080ac144; end: 1080ac14b; -[SCValdiLabel updateLabelMode:] */

void FUN_1080ac144(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c286d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_updateLabelMode_usesEffectsLayou_11267f588,param_3,0);
  return;
}



/* Entry: 1080ac14c; end: 1080ac28f; -[SCValdiLabel updateLabelMode:usesEffectsLayoutManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080ac14c(long param_1,undefined8 param_2,long param_3,uint param_4)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = (long)_DAT_1127743f8;
  uVar1 = (uint)*(undefined8 *)(param_1 + lVar5);
  func_0x00010c294a00();
  lVar6 = (long)_DAT_1127743f4;
  lVar4 = *(long *)(param_1 + lVar6);
  if (lVar4 != param_3 || ((uint)(param_3 == 2) & (param_4 ^ uVar1)) != 0) {
    if (lVar4 == 2) {
      if (param_3 != 2) {
        func_0x00010c2559e0(*(undefined8 *)(param_1 + lVar5));
        func_0x00010c12c960(*(undefined8 *)(param_1 + lVar5));
        uVar2 = *(ulong *)(param_1 + lVar5);
        func_0x00010c159180();
        if ((uVar2 & 1) == 0) {
          uVar3 = *(undefined8 *)(param_1 + lVar5);
          *(undefined8 *)(param_1 + lVar5) = 0;
          _objc_release(uVar3);
        }
        *(long *)(param_1 + lVar6) = param_3;
        return;
      }
      *(undefined8 *)(param_1 + lVar6) = 2;
    }
    else {
      if (lVar4 == 1) {
        func_0x00010bddfe20(param_1);
      }
      else if (lVar4 == 0) {
        func_0x0001080ac8e0();
        func_0x00010c212f20();
      }
      *(long *)(param_1 + lVar6) = param_3;
      if (param_3 != 2) {
        return;
      }
    }
    func_0x00010be0a740(param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x0001080ac884();
    func_0x00010c19f0e0(*(undefined8 *)(param_1 + lVar5));
    func_0x00010c08cdc0(*(undefined8 *)(param_1 + lVar5));
    func_0x00010c262ca0(*(undefined8 *)(param_1 + lVar5));
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080ac898();
    if (param_3 != param_1) {
                    /* WARNING: Could not recover jumptable at 0x00010c066fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_1,PTR_s_insertSubview_atIndex__1125f75f8,*(undefined8 *)(param_1 + lVar5),0);
      return;
    }
  }
  return;
}



/* Entry: 1080ac290; end: 1080ac363; -[SCValdiLabel _ensureTextLayoutViewWithUsesEffectsLayoutManager:] */

void FUN_1080ac290(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long extraout_x8;
  long unaff_x19;
  undefined8 uVar3;
  long lVar4;
  
  func_0x0001080ac9e4();
  lVar4 = (long)*(int *)(extraout_x8 + 0x3f8);
  lVar1 = *(long *)(param_1 + lVar4);
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126d9320;
    _objc_alloc();
    func_0x0001080ac884();
    func_0x00010c015140(puVar2,param_2,param_3);
    uVar3 = *(undefined8 *)(unaff_x19 + lVar4);
    *(undefined **)(unaff_x19 + lVar4) = puVar2;
    func_0x0001080ac7fc(uVar3);
    func_0x00010c18b5e0(*(undefined8 *)(unaff_x19 + lVar4));
    lVar1 = unaff_x19;
    func_0x00010c26b920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18b2a0(*(undefined8 *)(unaff_x19 + lVar4),param_2,lVar1);
    func_0x0001080ac788();
  }
  else {
    func_0x00010c294a00();
    if ((int)param_3 != (int)lVar1) {
      func_0x00010bf47cc0(*(undefined8 *)(unaff_x19 + lVar4),param_2,param_3);
    }
  }
  func_0x00010c2954e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080ac88c();
  func_0x00010c2130e0();
  func_0x0001080ac798();
  uVar3 = *(undefined8 *)(unaff_x19 + lVar4);
  func_0x0001080ac7b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1080ac364; end: 1080ac3f7; -[SCValdiLabel _applySelectionStateToTextLayoutView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080ac364(long param_1)

{
  long extraout_x8;
  long unaff_x19;
  long lVar1;
  
  func_0x0001080ac9e4();
  lVar1 = (long)*(int *)(extraout_x8 + 0x3f8);
  if (*(long *)(param_1 + lVar1) != 0) {
    func_0x00010c1fada0();
    func_0x00010c1d3480(*(undefined8 *)(unaff_x19 + lVar1));
    func_0x00010c1d3f60(*(undefined8 *)(unaff_x19 + lVar1));
    func_0x00010c1d3f80(*(undefined8 *)(unaff_x19 + lVar1));
    if (*(long *)(unaff_x19 + _DAT_112774418) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1fb7b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(unaff_x19 + lVar1),PTR_s_setSelection__11265c810);
      return;
    }
  }
  return;
}



/* Entry: 1080ac3f8; end: 1080ac433; -[SCValdiLabel _setNeedsAttributedTextUpdateForPendingSelectableTextLayoutViewIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080ac3f8(long param_1)

{
  if ((*(char *)(param_1 + _DAT_11277440c) == '\x01') && (*(long *)(param_1 + _DAT_1127743f8) == 0))
  {
    *(undefined1 *)(param_1 + _DAT_112774414) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
    return;
  }
  return;
}



/* Entry: 1080ac434; end: 1080ac467; -[SCValdiLabel textLayoutViewIsRightToLeft:] */

undefined8 FUN_1080ac434(undefined8 param_1)

{
  func_0x00010c2954e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07cb60();
  func_0x0001080ac790();
  return param_1;
}



/* Entry: 1080ac468; end: 1080ac46b; -[SCValdiLabel valdiContextForTextLayoutView:] */

void FUN_1080ac468(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c295210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_valdiContext_112682ea8);
  return;
}



/* Entry: 1080ac46c; end: 1080ac46f; -[SCValdiLabel valdiViewNodeForTextLayoutView:] */

void FUN_1080ac46c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2954f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_valdiViewNode_112682f60);
  return;
}



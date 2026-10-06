/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1069d5c44; end: 1069d5c4f; +[SCChatMediaDrawerCollectionViewCell cellSeletedBackgroundColor] */

void FUN_1069d5c44(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2a4b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_whiteColor_112686cf0);
  return;
}



/* Entry: 1069d5c50; end: 1069d5c83; -[SCChatMediaDrawerCollectionViewCell animatedImagesTimeIntervalWithDuration:frameCount:] */

double FUN_1069d5c50(double param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  double dVar1;
  
  param_1 = param_1 / (double)param_4;
  dVar1 = 0.4;
  if ((param_1 <= 0.4) && (dVar1 = param_1, param_1 < 0.2)) {
    dVar1 = 0.2;
  }
  return dVar1;
}



/* Entry: 1069d5c84; end: 1069d5eb3; -[SCChatMediaDrawerCollectionViewCell _setupVideoThumbnailLabelIfNeeded:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069d5c84(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lVar4 = (long)_DAT_1127554a0;
  if (*(long *)(param_2 + lVar4) == 0) {
    puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar3 = *(undefined8 *)(param_2 + lVar4);
    *(undefined **)(param_2 + lVar4) = puVar1;
    _objc_release(uVar3);
    puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x402a000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)(param_2 + lVar4),param_3,puVar1);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)(param_2 + lVar4),param_3,puVar1);
    _objc_release(puVar1);
    uVar3 = *(undefined8 *)(param_2 + lVar4);
    func_0x00010c08c0e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe7a0(0,0x3ff0000000000000);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_2 + lVar4);
    func_0x00010c08c0e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe840(0x4000000000000000);
    _objc_release(uVar3);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uVar3 = *(undefined8 *)(param_2 + lVar4);
    func_0x00010c08c0e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe740();
    _objc_release(uVar3);
    _objc_release(puVar1);
    uVar3 = *(undefined8 *)(param_2 + lVar4);
    func_0x00010c08c0e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe800(0x3f19999a);
    _objc_release(uVar3);
    lVar2 = param_2;
    func_0x00010bf4dce0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar2);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_1069d5eb4;
    puStack_60 = &UNK_1108471b0;
    lStack_58 = param_2;
    func_0x00010c0bbfc0(*(undefined8 *)(param_2 + lVar4),param_3,&puStack_78);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar1 = PTR_PTR_1126b6600;
  func_0x00010bfb6060(param_1,PTR_PTR_1126b6600);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_2 + lVar4),param_3,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1069d5eb4; end: 1069d606b;  */

void FUN_1069d5eb4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4dce0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(0xc008000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4dce0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(0x4014000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1069d606c; end: 1069d607b; -[SCChatMediaDrawerCollectionViewCell media] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1069d606c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275549c);
}



/* Entry: 1069d607c; end: 1069d60bb; -[SCChatMediaDrawerCollectionViewCell setMedia:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069d607c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11275549c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1069d60bc; end: 1069d60db; -[SCChatMediaDrawerCollectionViewCell delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069d60bc(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127554a8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1069d60dc; end: 1069d60ef; -[SCChatMediaDrawerCollectionViewCell setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069d60dc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127554a8,param_3);
  return;
}



/* Entry: 1069d60f0; end: 1069d616b; -[SCChatMediaDrawerCollectionViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069d60f0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127554a8);
  _objc_storeStrong(param_1 + _DAT_11275549c,0);
  _objc_storeStrong(param_1 + _DAT_1127554a0,0);
  _objc_storeStrong(param_1 + _DAT_112755498,0);
  _objc_storeStrong(param_1 + _DAT_1127554a4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112755494,0);
  return;
}



/* Entry: 1069d616c; end: 1069d620b; -[SCChatMediaDrawerCollectionViewCellV2 initWithFrame:] */

undefined1 * FUN_1069d616c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f4258;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010bfef7a0(puVar1);
    puVar2 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126cf9e8;
    func_0x00010bf33a00(PTR_PTR_1126cf9e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar2);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1069d620c; end: 1069d638f; -[SCChatMediaDrawerCollectionViewCellV2 initThumbnailView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069d620c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar4 = (long)_DAT_1127554ac;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  func_0x00010c182220(*(undefined8 *)(param_1 + lVar4),param_2,2);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c08c0e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(uVar3);
  lVar2 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x1069d6308;
  puStack_40 = &UNK_1108471b0;
  lStack_38 = param_1;
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar4),param_2,&puStack_58);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 1069d6390; end: 1069d660b; -[SCChatMediaDrawerCollectionViewCellV2 initEditButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069d6390(undefined8 param_1,undefined8 param_2,double param_3,undefined1 *param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined **unaff_x20;
  long lVar9;
  long lVar10;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined **ppuStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = (long)_DAT_1127554b0;
  puVar7 = param_4;
  if (*(long *)(param_4 + lVar10) == 0) {
    puVar1 = PTR_PTR_1126cf9f0;
    _objc_alloc();
    func_0x00010bfb68e0(param_4);
    func_0x00010c03cba0(param_3 / 10.0);
    uVar8 = *(undefined8 *)(param_4 + lVar10);
    *(undefined **)(param_4 + lVar10) = puVar1;
    _objc_release(uVar8);
    func_0x00010c219b60(*(undefined8 *)(param_4 + lVar10));
    lVar9 = (long)_DAT_1127554ac;
    func_0x00010befbb60(*(undefined8 *)(param_4 + lVar9));
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    unaff_x20 = *(undefined ***)(param_4 + lVar10);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_4 + lVar9);
    func_0x00010c274200(uVar2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = unaff_x20;
    func_0x00010bf493c0(0x4014000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_4 + lVar10);
    ppuStack_78 = ppuVar3;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_4 + lVar9);
    func_0x00010c08de00(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar4;
    func_0x00010bf493c0(0x4014000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = uVar8;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar6);
    _objc_release(uVar8);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(ppuVar3);
    _objc_release(uVar2);
    _objc_release(unaff_x20);
    puVar7 = *(undefined1 **)(param_4 + lVar10);
    func_0x00010c21e900();
    if (*(long *)(param_4 + _DAT_1127554b4) != 0) {
      _objc_initWeak(auStack_80,param_4);
      uVar8 = *(undefined8 *)(param_4 + lVar10);
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0xc2000000;
      pcStack_98 = FUN_1069d660c;
      puStack_90 = &UNK_1108434b0;
      unaff_x20 = &puStack_a8;
      _objc_copyWeak(auStack_88,auStack_80);
      func_0x00010c193520(uVar8);
      _objc_destroyWeak(auStack_88);
      puVar7 = auStack_80;
      _objc_destroyWeak();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x20 + 4);
  _objc_destroyWeak(auStack_80);
  __Unwind_Resume();
  puVar7 = puVar7 + 0x20;
  _objc_loadWeakRetained();
  if (puVar7 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(puVar7 + _DAT_1127554b4) + 0x10))
              (*(long *)(puVar7 + _DAT_1127554b4),*(undefined8 *)(puVar7 + _DAT_1127554b8));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 1069d660c; end: 1069d6653;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069d660c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    (**(code **)(*(long *)(param_1 + _DAT_1127554b4) + 0x10))
              (*(long *)(param_1 + _DAT_1127554b4),*(undefined8 *)(param_1 + _DAT_1127554b8));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069d6654; end: 1069d681f; -[SCChatMediaDrawerCollectionViewCellV2 initSelectionBadgingView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069d6654(undefined8 param_1,undefined8 param_2,double param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 unaff_x19;
  long unaff_x20;
  long lVar7;
  long lVar8;
  long lStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = (long)_DAT_1127554bc;
  if (*(long *)(param_4 + lVar7) == 0) {
    puVar1 = PTR_PTR_1126cf9f8;
    _objc_alloc();
    func_0x00010bfb68e0(param_4);
    func_0x00010c03cba0(param_3 / 10.0);
    uVar6 = *(undefined8 *)(param_4 + lVar7);
    *(undefined **)(param_4 + lVar7) = puVar1;
    _objc_release(uVar6);
    func_0x00010c219b60(*(undefined8 *)(param_4 + lVar7));
    lVar8 = (long)_DAT_1127554ac;
    func_0x00010befbb60(*(undefined8 *)(param_4 + lVar8));
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    unaff_x20 = *(long *)(param_4 + lVar7);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_4 + lVar8);
    func_0x00010c2793a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = unaff_x20;
    func_0x00010bf493c0(0xc014000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_4 + lVar7);
    lStack_68 = lVar3;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    unaff_x19 = *(undefined8 *)(param_4 + lVar8);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010bf493c0(0xc014000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_60 = uVar6;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar5);
    _objc_release(uVar6);
    _objc_release(unaff_x19);
    _objc_release(uVar4);
    _objc_release(lVar3);
    _objc_release(uVar2);
    param_4 = unaff_x20;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_78 = FUN_1069d6820;
  puStack_98 = PTR_PTR_1126f4258;
  lStack_a0 = param_4;
  lStack_90 = unaff_x20;
  uStack_88 = unaff_x19;
  puStack_80 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&lStack_a0,PTR_s_prepareForReuse_112620008);
  func_0x00010bdce000(param_4);
  func_0x00010c138580(param_4);
  return;
}



/* Entry: 1069d6820; end: 1069d686f; -[SCChatMediaDrawerCollectionViewCellV2 prepareForReuse] */

void FUN_1069d6820(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f4258;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_prepareForReuse_112620008);
  func_0x00010bdce000(param_1);
  func_0x00010c138580(param_1);
  return;
}



/* Entry: 1069d6870; end: 1069d68b7; -[SCChatMediaDrawerCollectionViewCellV2 resetContent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069d6870(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127554b8);
  *(undefined8 *)(param_1 + _DAT_1127554b8) = 0;
  _objc_release(uVar1);
  func_0x00010bf39f60(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c212f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127554c0),PTR_s_setText__1126625f0,0);
  return;
}



/* Entry: 1069d68b8; end: 1069d68cb; -[SCChatMediaDrawerCollectionViewCellV2 cleanThumbnailView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069d68b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a9f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127554ac),PTR_s_setImage__1126481e8,0);
  return;
}



/* Entry: 1069d68cc; end: 1069d691b; -[SCChatMediaDrawerCollectionViewCellV2 layoutSubviews] */

void FUN_1069d68cc(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f4258;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_layoutSubviews_112600e60);
  func_0x00010bfef4e0(param_1);
  func_0x00010bfee7a0(param_1);
  return;
}



/* Entry: 1069d691c; end: 1069d6c23; -[SCChatMediaDrawerCollectionViewCellV2 setMedia:editActionHandler:isChatDrawerRedesignEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069d691c(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined1 param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auStack_b8 [8];
  undefined1 uStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar9 = (long)_DAT_1127554b8;
  if (param_3 == *(ulong *)(param_1 + lVar9)) goto LAB_1069d6bb0;
  uVar8 = param_4;
  _objc_retainBlock();
  uVar6 = *(undefined8 *)(param_1 + _DAT_1127554b4);
  *(undefined8 *)(param_1 + _DAT_1127554b4) = uVar8;
  _objc_release(uVar6);
  _objc_initWeak(auStack_78,param_1);
  uVar8 = *(undefined8 *)(param_1 + _DAT_1127554b0);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1069d6c24;
  puStack_88 = &UNK_1108434b0;
  _objc_copyWeak(auStack_80,auStack_78);
  func_0x00010c193520(uVar8);
  uVar1 = *(ulong *)(param_1 + lVar9);
  func_0x00010c0c5220();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0c5220();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar1);
  _objc_retain(uVar2);
  if (uVar1 == uVar2) {
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  else {
    if (uVar2 == 0) {
      _objc_release(uVar1);
      _objc_release(uVar1);
    }
    else {
      uVar3 = uVar1;
      func_0x00010c071ae0();
      _objc_release(uVar2);
      _objc_release(uVar1);
      _objc_release(uVar2);
      _objc_release(uVar1);
      if ((uVar3 & 1) != 0) goto LAB_1069d6aac;
    }
    func_0x00010bf2f240(*(undefined8 *)(param_1 + lVar9));
  }
LAB_1069d6aac:
  _objc_retain(param_3);
  uVar8 = *(undefined8 *)(param_1 + lVar9);
  *(ulong *)(param_1 + lVar9) = param_3;
  _objc_release(uVar8);
  if (param_3 == 0) {
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_1127554ac));
  }
  else {
    _objc_initWeak(auStack_a8,param_1);
    _objc_copyWeak(auStack_b8,auStack_a8);
    _objc_retain(param_3);
    uStack_b0 = param_5;
    func_0x00010bfaad80(param_3);
    lVar7 = *(long *)(param_1 + lVar9);
    _objc_retain(lVar7);
    puVar4 = PTR_PTR_1126cf9e0;
    _objc_opt_class(PTR_PTR_1126cf9e0);
    lVar5 = lVar7;
    _objc_opt_isKindOfClass(lVar7,puVar4);
    _objc_release(lVar7);
    if (((uint)lVar5 & (uint)(lVar7 != 0)) == 1) {
      func_0x00010bf8b160(*(undefined8 *)(param_1 + lVar9));
      func_0x00010beb1100(param_1);
    }
    _objc_release(param_3);
    _objc_destroyWeak(auStack_b8);
    _objc_destroyWeak(auStack_a8);
  }
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
LAB_1069d6bb0:
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1069d6c24; end: 1069d6c6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069d6c24(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    (**(code **)(*(long *)(param_1 + _DAT_1127554b4) + 0x10))
              (*(long *)(param_1 + _DAT_1127554b4),*(undefined8 *)(param_1 + _DAT_1127554b8));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069d6c6c; end: 1069d6ccb;  */

void FUN_1069d6c6c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be2fea0(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1069d6ccc; end: 1069d6f2f; -[SCChatMediaDrawerCollectionViewCellV2 _handleSetMediaThumbnailFetchWithMedia:image:isChatDrawerRedesignEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069d6ccc(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,int param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar5 = (long)_DAT_1127554b8;
  uVar1 = *(ulong *)(param_1 + lVar5);
  func_0x00010c0c5220();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0c5220();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar1);
  _objc_retain(uVar2);
  if (uVar1 == uVar2) {
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(uVar2);
    _objc_release(uVar1);
LAB_1069d6dac:
    puVar3 = PTR_PTR_1126cf9e0;
    uVar4 = *(ulong *)(param_1 + lVar5);
    _objc_retain(uVar4);
    _objc_opt_class(puVar3);
    uVar2 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar3);
    uVar1 = uVar4;
    if ((uVar2 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar4);
    if (param_5 == 0) {
      if (uVar1 == 0) {
        func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_1127554ac));
      }
      else {
        _objc_initWeak(auStack_58,param_1);
        _objc_copyWeak(auStack_60,auStack_58);
        _objc_retain(param_3);
        _objc_retain(uVar4);
        _objc_retain(param_4);
        func_0x00010bfcc1a0(uVar4);
        _objc_release(param_4);
        _objc_release(uVar1);
        _objc_release(param_3);
        _objc_destroyWeak(auStack_60);
        _objc_destroyWeak(auStack_58);
      }
    }
    else {
      func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_1127554ac));
      if (uVar1 != 0) {
        func_0x00010bfcc1a0(uVar4);
      }
    }
  }
  else {
    if (uVar2 != 0) {
      uVar4 = uVar1;
      func_0x00010c071ae0();
      _objc_release(uVar2);
      _objc_release(uVar1);
      _objc_release(uVar2);
      _objc_release(uVar1);
      if ((uVar4 & 1) == 0) goto LAB_1069d6ee8;
      goto LAB_1069d6dac;
    }
    _objc_release();
  }
  _objc_release(uVar1);
LAB_1069d6ee8:
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1069d6f30; end: 1069d6f33;  */

void FUN_1069d6f30(void)

{
  return;
}



/* Entry: 1069d6f34; end: 1069d6ffb;  */

void FUN_1069d6f34(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1069d6ffc;
  puStack_58 = &UNK_110850cf8;
  _objc_copyWeak(auStack_38,param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = uVar1;
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_48 = uVar2;
  _objc_retain(uVar1);
  uStack_40 = uVar1;
  func_0x000100162d98("APPSTORE",&puStack_70);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1069d6ffc; end: 1069d7193;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069d6ffc(double param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  double dVar5;
  
  uVar1 = param_2 + 0x38;
  _objc_loadWeakRetained();
  if (uVar1 == 0) goto LAB_1069d7178;
  uVar2 = *(ulong *)(uVar1 + (long)_DAT_1127554b8);
  func_0x00010c0c5220();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(ulong *)(param_2 + 0x20);
  func_0x00010c0c5220();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar2);
  _objc_retain(uVar3);
  if (uVar2 == uVar3) {
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  else {
    if (uVar3 == 0) {
      _objc_release();
      _objc_release(uVar2);
      goto LAB_1069d7178;
    }
    uVar4 = uVar2;
    func_0x00010c071ae0(uVar2,param_3,uVar3);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((uVar4 & 1) == 0) goto LAB_1069d7178;
  }
  func_0x00010bf8b160(*(undefined8 *)(param_2 + 0x28));
  uVar2 = uVar1;
  dVar5 = param_1;
  func_0x00010bf6b020(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9020();
  if (param_1 <= dVar5) {
    func_0x00010bfad040(*(undefined8 *)(param_2 + 0x28));
    _objc_release(uVar2);
    if (1000.0 < dVar5) goto LAB_1069d7128;
  }
  else {
    _objc_release(uVar2);
LAB_1069d7128:
    uVar2 = uVar1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf36ba0();
    _objc_release(uVar2);
    if ((uVar3 & 1) != 0) goto LAB_1069d7178;
  }
  func_0x00010c1a9f00(*(undefined8 *)(uVar1 + (long)_DAT_1127554ac),param_3,
                      *(undefined8 *)(param_2 + 0x30));
LAB_1069d7178:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1069d7194; end: 1069d7213; -[SCChatMediaDrawerCollectionViewCellV2 animateSelectWithIndex:] */

void FUN_1069d7194(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_1069d7214;
  puStack_28 = &UNK_110848c48;
  uStack_20 = param_1;
  uStack_18 = param_3;
  func_0x00010bf03460(0x3fd3333333333333,0,0x3fe4cccccccccccd,0x3feccccccccccccd,
                      PTR__OBJC_CLASS___UIView_1126aec20,param_2,2,&puStack_40,0);
  return;
}



/* Entry: 1069d7214; end: 1069d722b;  */

void FUN_1069d7214(long param_1)

{
  if (*(long *)(param_1 + 0x28) == 0x7fffffffffffffff) {
                    /* WARNING: Could not recover jumptable at 0x00010bdce010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s__applyDeselectedState_1125511a0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdce8f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__applySelectedStateWithIndex__1125513d8);
  return;
}



/* Entry: 1069d722c; end: 1069d75af; -[SCChatMediaDrawerCollectionViewCellV2 _applySelectedStateWithIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069d722c(long param_1,undefined8 param_2,undefined8 param_3)

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
  undefined *puVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c1fb160(*(undefined8 *)(param_1 + _DAT_1127554b0));
  lVar15 = (long)_DAT_1127554bc;
  func_0x00010c1abfe0(*(undefined8 *)(param_1 + lVar15),param_2,param_3);
  lVar17 = (long)_DAT_1127554c4;
  if (*(long *)(param_1 + lVar17) == 0) {
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar14 = *(undefined8 *)(param_1 + lVar17);
    *(undefined **)(param_1 + lVar17) = puVar1;
    _objc_release(uVar14);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x25);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_1 + lVar17),param_2,puVar1);
    _objc_release(puVar1);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar17),param_2,0);
    lVar16 = (long)_DAT_1127554ac;
    func_0x00010c066fe0(*(undefined8 *)(param_1 + lVar16),param_2,*(undefined8 *)(param_1 + lVar17),
                        *(undefined8 *)(param_1 + lVar15));
    lVar15 = *(long *)(param_1 + lVar16);
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar15 != 0) {
      uVar2 = *(undefined8 *)(param_1 + lVar16);
      func_0x00010c261580();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar2;
      func_0x00010bf4b900();
      _objc_release(uVar2);
      _objc_release(lVar15);
      puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      if ((int)uVar14 != 0) {
        uVar3 = *(undefined8 *)(param_1 + lVar17);
        func_0x00010c274200();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = *(undefined8 *)(param_1 + lVar16);
        func_0x00010c274200();
        _objc_retainAutoreleasedReturnValue();
        uVar14 = uVar3;
        func_0x00010bf493a0(uVar3,param_2,uVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = *(undefined8 *)(param_1 + lVar17);
        uStack_88 = uVar14;
        func_0x00010bf1ff80();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = *(undefined8 *)(param_1 + lVar16);
        func_0x00010bf1ff80();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar5;
        func_0x00010bf493a0(uVar5,param_2,uVar6);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = *(undefined8 *)(param_1 + lVar17);
        uStack_80 = uVar2;
        func_0x00010c08de00();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = *(undefined8 *)(param_1 + lVar16);
        func_0x00010c08de00(uVar8);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar7;
        func_0x00010bf493a0(uVar7,param_2,uVar8);
        _objc_retainAutoreleasedReturnValue();
        uVar10 = *(undefined8 *)(param_1 + lVar17);
        uStack_78 = uVar9;
        func_0x00010c2793a0();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = *(undefined8 *)(param_1 + lVar16);
        func_0x00010c2793a0(uVar11);
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar10;
        func_0x00010bf493a0(uVar10,param_2,uVar11);
        _objc_retainAutoreleasedReturnValue();
        puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
        uStack_70 = uVar12;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_88,4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010beef8c0(puVar1,param_2,puVar13);
        _objc_release(puVar13);
        _objc_release(uVar12);
        _objc_release(uVar11);
        _objc_release(uVar10);
        _objc_release(uVar9);
        _objc_release(uVar8);
        _objc_release(uVar7);
        _objc_release(uVar2);
        _objc_release(uVar6);
        _objc_release(uVar5);
        _objc_release(uVar14);
        _objc_release(uVar4);
        _objc_release(uVar3);
      }
    }
  }
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar17),param_2,0);
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126cf9e8;
  func_0x00010bf34040();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_1,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c1fb160(*(undefined8 *)(param_1 + _DAT_1127554b0),param_2,0x7fffffffffffffff);
  func_0x00010c1abfe0(*(undefined8 *)(param_1 + _DAT_1127554bc),param_2,0x7fffffffffffffff);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_1127554c4),param_2,1);
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126cf9e8;
  func_0x00010bf33a00(PTR_PTR_1126cf9e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_1,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069d75b0; end: 1069d7647; -[SCChatMediaDrawerCollectionViewCellV2 _applyDeselectedState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069d75b0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x00010c1fb160(*(undefined8 *)(param_1 + _DAT_1127554b0),param_2,0x7fffffffffffffff);
  func_0x00010c1abfe0(*(undefined8 *)(param_1 + _DAT_1127554bc),param_2,0x7fffffffffffffff);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_1127554c4),param_2,1);
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126cf9e8;
  func_0x00010bf33a00(PTR_PTR_1126cf9e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_1,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069d7648; end: 1069d7657; +[SCChatMediaDrawerCollectionViewCellV2 highlightedBorderColor] */

void FUN_1069d7648(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23ba90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_sig_color__11266c8c8,0x88);
  return;
}



/* Entry: 1069d7658; end: 1069d7667; +[SCChatMediaDrawerCollectionViewCellV2 cellDefaultBackgroundColor] */

void FUN_1069d7658(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23ba90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_sig_color__11266c8c8,0x7d);
  return;
}



/* Entry: 1069d7668; end: 1069d7677; +[SCChatMediaDrawerCollectionViewCellV2 cellSeletedBackgroundColor] */

void FUN_1069d7668(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23ba90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_sig_color__11266c8c8,0xd5);
  return;
}



/* Entry: 1069d7678; end: 1069d76ab; -[SCChatMediaDrawerCollectionViewCellV2 animatedImagesTimeIntervalWithDuration:frameCount:] */

double FUN_1069d7678(double param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  double dVar1;
  
  param_1 = param_1 / (double)param_4;
  dVar1 = 0.4;
  if ((param_1 <= 0.4) && (dVar1 = param_1, param_1 < 0.2)) {
    dVar1 = 0.2;
  }
  return dVar1;
}



/* Entry: 1069d76ac; end: 1069d784b; -[SCChatMediaDrawerCollectionViewCellV2 _setupVideoThumbnailLabelIfNeeded:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069d76ac(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_1127554c0;
  if (*(long *)(param_2 + lVar5) == 0) {
    puVar1 = PTR_PTR_1126aea58;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar4 = *(undefined8 *)(param_2 + lVar5);
    *(undefined **)(param_2 + lVar5) = puVar1;
    _objc_release(uVar4);
    func_0x00010c21ad00(*(undefined8 *)(param_2 + lVar5));
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)(param_2 + lVar5));
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126b08d8;
    uVar4 = *(undefined8 *)(param_2 + lVar5);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010085b3c8(0x4000000000000000,0x3fe3333333333333,0,0x3ff0000000000000,puVar1,uVar4,
                        puVar2);
    _objc_release(puVar2);
    lVar3 = param_2;
    func_0x00010bf4dce0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar3);
    func_0x00010c0bbfc0(*(undefined8 *)(param_2 + lVar5));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar1 = PTR_PTR_1126b6600;
  func_0x00010bfb6060(param_1,PTR_PTR_1126b6600);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_2 + lVar5));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1069d784c; end: 1069d7a03;  */

void FUN_1069d784c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4dce0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(0xc008000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4dce0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(0x4014000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1069d7a04; end: 1069d7aeb; -[SCChatMediaDrawerCollectionViewCellV2 hitTest:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069d7a04(double param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  double dVar4;
  long lStack_50;
  undefined *puStack_48;
  
  plVar2 = &lStack_50;
  dVar4 = param_1;
  _objc_retain(param_5);
  lVar3 = (long)_DAT_1127554b0;
  func_0x00010bf01b40(*(undefined8 *)(param_3 + lVar3));
  if (dVar4 == 1.0) {
    iVar1 = (int)*(undefined8 *)(param_3 + lVar3);
    func_0x00010c082800();
    if (iVar1 != 0) {
      iVar1 = (int)*(undefined8 *)(param_3 + lVar3);
      func_0x00010bfb68e0();
      _CGRectContainsPoint();
      if (iVar1 != 0) {
        plVar2 = *(long **)(param_3 + lVar3);
        func_0x00010bfe3a40(param_1,param_2,plVar2);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_1069d7ac4;
      }
    }
  }
  puStack_48 = PTR_PTR_1126f4258;
  lStack_50 = param_3;
  _objc_msgSendSuper2(param_1,param_2,&lStack_50,PTR_s_hitTest_withEvent__1125d6850,param_5);
  _objc_retainAutoreleasedReturnValue();
LAB_1069d7ac4:
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar2);
  return;
}



/* Entry: 1069d7aec; end: 1069d7afb; -[SCChatMediaDrawerCollectionViewCellV2 media] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1069d7aec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127554b8);
}



/* Entry: 1069d7afc; end: 1069d7b3b; -[SCChatMediaDrawerCollectionViewCellV2 setMedia:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069d7afc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127554b8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1069d7b3c; end: 1069d7b5b; -[SCChatMediaDrawerCollectionViewCellV2 delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069d7b3c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127554c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1069d7b5c; end: 1069d7b6f; -[SCChatMediaDrawerCollectionViewCellV2 setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069d7b5c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127554c8,param_3);
  return;
}



/* Entry: 1069d7b70; end: 1069d7c0b; -[SCChatMediaDrawerCollectionViewCellV2 .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069d7b70(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127554c8);
  _objc_storeStrong(param_1 + _DAT_1127554b8,0);
  _objc_storeStrong(param_1 + _DAT_1127554b4,0);
  _objc_storeStrong(param_1 + _DAT_1127554b0,0);
  _objc_storeStrong(param_1 + _DAT_1127554bc,0);
  _objc_storeStrong(param_1 + _DAT_1127554c0,0);
  _objc_storeStrong(param_1 + _DAT_1127554c4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127554ac,0);
  return;
}



/* Entry: 1069d7c0c; end: 1069d7e37; -[SCChatMediaDrawerEmptyPlaceholderView init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1069d7c0c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126f4260;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),puVar1,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bf60();
    lVar6 = (long)_DAT_1127554cc;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar5);
    _objc_release(puVar3);
    func_0x00010befbb60(puVar1);
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(uVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc_init();
    lVar6 = (long)_DAT_1127554d0;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar5);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar6));
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x4031000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar6));
    _objc_release(puVar2);
    ppuVar4 = &PTR____CFConstantStringClassReference_110e670b8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e670b8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)((long)puVar1 + lVar6));
    _objc_release(ppuVar4);
    func_0x00010befbb60(puVar1);
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(uVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(puVar1);
  }
  return puVar1;
}



/* Entry: 1069d7e38; end: 1069d7eb7;  */

void FUN_1069d7e38(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1069d7eb8; end: 1069d8023;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069d7eb8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127554cc);
  func_0x00010c0bbea0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(0x4024000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1069d8024; end: 1069d8063; -[SCChatMediaDrawerEmptyPlaceholderView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069d8024(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127554d0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127554cc,0);
  return;
}



/* Entry: 1069d8064; end: 1069d8513; -[SCChatMediaDrawerPhotoPermissionView initWithDownloader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1069d8064(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_108 [8];
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 *puStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_3);
  puStack_78 = PTR_PTR_1126f4268;
  puVar1 = &uStack_80;
  uStack_80 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_opt_new();
    lVar7 = (long)_DAT_1127554d4;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined **)((long)puVar1 + lVar7) = puVar2;
    _objc_release(uVar6);
    func_0x00010befbb60(puVar1);
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_1069d8514;
    puStack_90 = &UNK_1108471b0;
    _objc_retain(puVar1);
    puStack_88 = puVar1;
    func_0x00010c0bbfc0(uVar6);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc_init();
    lVar7 = (long)_DAT_1127554d8;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined **)((long)puVar1 + lVar7) = puVar3;
    _objc_release(uVar6);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar7));
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x4031000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar7));
    _objc_release(puVar3);
    func_0x00010c1bdb00(*(undefined8 *)((long)puVar1 + lVar7));
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + lVar7));
    func_0x00010c213040(*(undefined8 *)((long)puVar1 + lVar7));
    ppuVar4 = &PTR____CFConstantStringClassReference_110e67118;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e67118,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)((long)puVar1 + lVar7));
    _objc_release(ppuVar4);
    func_0x00010c1e0180(0x4072c00000000000,*(undefined8 *)((long)puVar1 + lVar7));
    func_0x00010befbb60(puVar1);
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    puStack_d0 = puVar2;
    uStack_c8 = 0xc2000000;
    pcStack_c0 = FUN_1069d857c;
    puStack_b8 = &UNK_1108471b0;
    _objc_retain(puVar1);
    puStack_b0 = puVar1;
    func_0x00010c0bbfc0(uVar6);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIButton_1126aec48;
    func_0x00010bf25cc0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = (long)_DAT_1127554dc;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined **)((long)puVar1 + lVar7) = puVar3;
    _objc_release(uVar6);
    func_0x00010befbd60(*(undefined8 *)((long)puVar1 + lVar7));
    func_0x00010c181e40(0x4024000000000000,0x4059000000000000,0x4024000000000000,0x4059000000000000,
                        *(undefined8 *)((long)puVar1 + lVar7));
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    ppuVar4 = &PTR____CFConstantStringClassReference_110e286f8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e286f8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216260(uVar6);
    _objc_release(ppuVar4);
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41580(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(uVar6);
    _objc_release(puVar3);
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    func_0x00010c08c0e0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4034000000000000);
    _objc_release(uVar6);
    func_0x00010c17d4c0(*(undefined8 *)((long)puVar1 + lVar7));
    func_0x00010befbb60(puVar1);
    func_0x00010c219b60(puVar1);
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    puStack_f8 = puVar2;
    uStack_f0 = 0xc2000000;
    uStack_e8 = 0x1069d86d0;
    puStack_e0 = &UNK_1108471b0;
    _objc_retain(puVar1);
    puStack_d8 = puVar1;
    func_0x00010c0bbfc0(uVar6);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126aebd8;
    func_0x00010c14e3a0(PTR_PTR_1126aebd8);
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_100,puVar1);
    uVar6 = param_3;
    func_0x00010c269d40(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126aebf0;
    _objc_alloc(PTR_PTR_1126aebf0);
    puVar5 = puVar1;
    _objc_opt_class(puVar1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c011b80(puVar3);
    _objc_copyWeak(auStack_108,auStack_100);
    func_0x00010bf88c20(uVar6);
    _objc_release(puVar3);
    _objc_release(puVar5);
    _objc_release(uVar6);
    _objc_destroyWeak(auStack_108);
    _objc_destroyWeak(auStack_100);
    _objc_release(puVar2);
    _objc_release(puStack_d8);
    _objc_release(puStack_b0);
    _objc_release(puStack_88);
  }
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1069d8514; end: 1069d857b;  */

void FUN_1069d8514(undefined8 param_1,long param_2)

{
  long lVar1;
  
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1069d857c; end: 1069d883b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069d857c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127554d4);
  func_0x00010c0bbea0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(0x4024000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1069d883c; end: 1069d88ef;  */

void FUN_1069d883c(long param_1,undefined8 param_2)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    pcStack_40 = FUN_1069d88f0;
    puStack_38 = &UNK_110841f80;
    _objc_retain(param_1);
    lStack_30 = param_1;
    _objc_retain(param_2);
    uStack_28 = param_2;
    func_0x000100162d98("APPSTORE",&puStack_50);
    _objc_release(uStack_28);
    _objc_release(lStack_30);
  }
  _objc_release(param_1);
  _objc_release(param_2);
  return;
}



/* Entry: 1069d88f0; end: 1069d8903;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069d88f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a9f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127554d4),
             PTR_s_setImage__1126481e8,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1069d8904; end: 1069d8933; -[SCChatMediaDrawerPhotoPermissionView didPressAllow] */

void FUN_1069d8904(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf787a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069d8934; end: 1069d8953; -[SCChatMediaDrawerPhotoPermissionView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069d8934(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127554e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1069d8954; end: 1069d8967; -[SCChatMediaDrawerPhotoPermissionView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069d8954(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127554e0,param_3);
  return;
}



/* Entry: 1069d8968; end: 1069d89c3; -[SCChatMediaDrawerPhotoPermissionView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069d8968(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127554e0);
  _objc_storeStrong(param_1 + _DAT_1127554dc,0);
  _objc_storeStrong(param_1 + _DAT_1127554d8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127554d4,0);
  return;
}



/* Entry: 1069d89c4; end: 1069d8aaf; -[SCChatMediaDrawerSendBar initWithFrame:memoriesExperimentService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1069d89c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126f4270;
  uStack_60 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&uStack_60,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_1127554e4),param_7);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    func_0x00010be39a60(puVar1);
    func_0x00010be3a440(puVar1);
  }
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 1069d8ab0; end: 1069d8c63; -[SCChatMediaDrawerSendBar _initSendButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069d8ab0(undefined8 param_1,long param_2,undefined8 param_3)

{
  double dVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  double extraout_d1;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  double dStack_60;
  double dStack_58;
  
  uVar9 = (undefined4)((ulong)param_1 >> 0x20);
  uVar8 = (undefined4)param_1;
  puVar4 = PTR_PTR_1126b6138;
  _objc_alloc_init();
  lVar7 = (long)_DAT_1127554e8;
  uVar6 = *(undefined8 *)(param_2 + lVar7);
  *(undefined **)(param_2 + lVar7) = puVar4;
  _objc_release(uVar6);
  func_0x00010c160fc0(*(undefined8 *)(param_2 + lVar7),param_3,
                      &PTR____CFConstantStringClassReference_110e67198);
  lVar5 = param_2;
  func_0x00010be36a20(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(*(undefined8 *)(param_2 + lVar7),param_3,lVar5);
  func_0x00010c23d0a0(lVar5);
  dVar11 = (double)CONCAT44(uVar9,uVar8);
  func_0x00010c23d0a0(lVar5);
  auVar10 = NEON_fmov(0x3fe0000000000000,8);
  dVar1 = (double)(float)(int)((40.0 - dVar11) * auVar10._0_8_);
  func_0x00010c1aa420(SUB84(dVar1,0),(double)(float)(int)((40.0 - extraout_d1) * auVar10._8_8_),
                      *(undefined8 *)(param_2 + lVar7));
  func_0x00010befbd40(*(undefined8 *)(param_2 + lVar7),param_3,param_2,
                      PTR_s_pressedSendButton_112532978);
  func_0x00010c1c3c80(0xcccccccd,*(undefined8 *)(param_2 + lVar7));
  func_0x00010befbb60(param_2,param_3,*(undefined8 *)(param_2 + lVar7));
  iVar3 = (int)param_2 + _DAT_1127554e4;
  _objc_loadWeakRetained();
  iVar2 = iVar3;
  func_0x00010bfe6800();
  _objc_release();
  if (iVar2 != 0) {
    dVar12 = 0.0;
    func_0x000100478f84();
    if (iVar3 == 0) goto LAB_1069d8bf8;
  }
  func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
  dVar12 = (double)(float)(int)(dVar11 * -0.5);
LAB_1069d8bf8:
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1069d8c64;
  puStack_70 = &UNK_11084fbb8;
  lStack_68 = param_2;
  dStack_60 = dVar1;
  dStack_58 = dVar12;
  func_0x00010c0bbfc0(*(undefined8 *)(param_2 + lVar7),param_3,&puStack_88);
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 1069d8c64; end: 1069d8e6f;  */

void FUN_1069d8c64(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(*(double *)(param_1 + 0x28) + -10.0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf348c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(*(undefined8 *)(param_1 + 0x30));
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(0x4044000000000000,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar3 + 0x10))(lVar3,puVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1069d8e70; end: 1069d8fdb; -[SCChatMediaDrawerSendBar _initEditButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069d8e70(undefined8 param_1,undefined8 param_2,double param_3,long param_4,
                  undefined8 param_5)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  double dVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  double dStack_48;
  
  puVar3 = PTR_PTR_1126b6138;
  _objc_alloc_init();
  lVar5 = (long)_DAT_1127554ec;
  uVar4 = *(undefined8 *)(param_4 + lVar5);
  *(undefined **)(param_4 + lVar5) = puVar3;
  _objc_release(uVar4);
  func_0x00010c160fc0(*(undefined8 *)(param_4 + lVar5),param_5,
                      &PTR____CFConstantStringClassReference_110e671b8);
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_5,
                      &PTR____CFConstantStringClassReference_110e67138);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(*(undefined8 *)(param_4 + lVar5),param_5,puVar3);
  _objc_release(puVar3);
  func_0x00010c1aa420(0x4000000000000000,0x4010000000000000,*(undefined8 *)(param_4 + lVar5));
  func_0x00010befbd40(*(undefined8 *)(param_4 + lVar5),param_5,param_4,
                      PTR_s_pressedEditButton_112532980);
  func_0x00010befbb60(param_4,param_5,*(undefined8 *)(param_4 + lVar5));
  iVar2 = (int)param_4 + _DAT_1127554e4;
  _objc_loadWeakRetained();
  iVar1 = iVar2;
  func_0x00010bfe6800();
  _objc_release();
  if (iVar1 != 0) {
    dVar6 = 0.0;
    func_0x000100478f84();
    if (iVar2 == 0) goto LAB_1069d8f7c;
  }
  func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
  dVar6 = (double)(float)(int)(param_3 * -0.5);
LAB_1069d8f7c:
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1069d8fdc;
  puStack_58 = &UNK_11084fc28;
  lStack_50 = param_4;
  dStack_48 = dVar6;
  func_0x00010c0bbfc0(*(undefined8 *)(param_4 + lVar5),param_5,&puStack_70);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 1069d8fdc; end: 1069d91df;  */

void FUN_1069d8fdc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0x401c000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf348c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(*(undefined8 *)(param_1 + 0x28));
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  FUN_1069d91e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar3 + 0x10))(lVar3,lVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1069d91e0; end: 1069d921b;  */

void FUN_1069d91e0(void)

{
  undefined8 in_stack_00000000;
  
  func_0x00010c0df720(in_stack_00000000,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1069d921c; end: 1069d92df; -[SCChatMediaDrawerSendBar _makeDummyView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069d921c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puVar1 = PTR__OBJC_CLASS___UIScrollView_1126af098;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar3 = (long)_DAT_1127554f0;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c2025c0(*(undefined8 *)(param_1 + lVar3),param_2,0);
  func_0x00010c2026e0(*(undefined8 *)(param_1 + lVar3),param_2,0);
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar3));
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1069d92e0;
  puStack_30 = &UNK_1108471b0;
  lStack_28 = param_1;
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar3),param_2,&puStack_48);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 1069d92e0; end: 1069d940b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069d92e0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127554e8);
  func_0x00010c0bbfa0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1069d940c; end: 1069d95e3; -[SCChatMediaDrawerSendBar selectedMediaCollectionView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069d940c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lVar5 = (long)_DAT_1127554f4;
  lVar4 = *(long *)(param_1 + lVar5);
  if (lVar4 == 0) {
    func_0x00010be5b940();
    puVar1 = PTR_PTR_1126cfa00;
    _objc_alloc_init(PTR_PTR_1126cfa00);
    func_0x00010c1f7ac0();
    func_0x00010c1c82c0(0x4024000000000000,puVar1);
    puVar2 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
    _objc_alloc();
    func_0x00010c014040(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_1 + lVar5),param_2,puVar2);
    _objc_release(puVar2);
    func_0x00010c1d8be0(*(undefined8 *)(param_1 + lVar5),param_2,0);
    func_0x00010c2025c0(*(undefined8 *)(param_1 + lVar5),param_2,0);
    func_0x00010c17d4c0(*(undefined8 *)(param_1 + lVar5),param_2,1);
    lVar4 = param_1;
    func_0x00010c08cc40(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar5),param_2,lVar4);
    _objc_release(lVar4);
    lVar4 = param_1;
    func_0x00010bf643e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c189840(*(undefined8 *)(param_1 + lVar5),param_2,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    puVar2 = PTR_PTR_1126cfa08;
    _objc_opt_class(PTR_PTR_1126cfa08);
    func_0x00010c126000(uVar3,param_2,puVar2,&PTR____CFConstantStringClassReference_110e67178);
    func_0x00010befbb60(*(undefined8 *)(param_1 + _DAT_1127554f0),param_2,
                        *(undefined8 *)(param_1 + lVar5));
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_1069d95e4;
    puStack_40 = &UNK_1108471b0;
    lStack_38 = param_1;
    func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar5),param_2,&puStack_58);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c128b60(*(undefined8 *)(param_1 + lVar5));
    _objc_release(puVar1);
    lVar4 = *(long *)(param_1 + lVar5);
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 1069d95e4; end: 1069d98cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069d95e4(undefined8 param_1,undefined8 param_2,double param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_5);
  lVar1 = param_5;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0x4024000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_5;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(*(long *)(param_4 + 0x20) + (long)_DAT_1127554e8);
  func_0x00010c0bbfa0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0xc02c000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(uVar6);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_5;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0x4024000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_5;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
  (**(code **)(lVar5 + 0x10))(-10.0 - param_3,lVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1069d98cc; end: 1069d9943; -[SCChatMediaDrawerSendBar setEditButtonEnabled:] */

/* WARNING: Possible PIC construction at 0x0001069d9918: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001069d991c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069d98cc(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_1127554f8;
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar1),param_2,param_3 ^ 1);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_1127554ec));
  if (((param_3 ^ 1) & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf21310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s_bringSubviewToFront__1125a5e68,*(undefined8 *)(param_1 + lVar1));
    return;
  }
  return;
}



/* Entry: 1069d9944; end: 1069d9957; -[SCChatMediaDrawerSendBar setSendButtonEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069d9944(long param_1,undefined8 param_2,uint param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127554e8),PTR_s_setHidden__1126479f8,param_3 ^ 1);
  return;
}



/* Entry: 1069d9958; end: 1069d9a1b; -[SCChatMediaDrawerSendBar showThumbnailCollectionView:] */

/* WARNING: Possible PIC construction at 0x0001069d999c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001069d99a0) */
/* WARNING: Removing unreachable block (ram,0x0001069d9a0c) */
/* WARNING: Removing unreachable block (ram,0x0001069d99c0) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069d9958(long param_1,undefined8 param_2,int param_3)

{
  if (param_3 != 0) {
    func_0x00010c074c20(*(undefined8 *)(param_1 + _DAT_1127554f4));
    func_0x00010c159ba0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1069d9a1c; end: 1069d9a3b; -[SCChatMediaDrawerSendBar heightForThumbnailsCollectionView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069d9a1c(long param_1)

{
  func_0x00010bf20c00(*(undefined8 *)(param_1 + _DAT_1127554f4));
                    /* WARNING: Could not recover jumptable at 0x00010bdbb3e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGRectGetHeight_110347570)();
  return;
}



/* Entry: 1069d9a3c; end: 1069d9ba7; -[SCChatMediaDrawerSendBar insertThumbnailCellAtIndexPath:] */

/* WARNING: Possible PIC construction at 0x0001069d9b68: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069d9a3c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar7 = (long)_DAT_1127554f4;
  lVar5 = *(long *)(param_1 + lVar7);
  func_0x00010c1554e0(param_3);
  func_0x00010c0deec0();
  lVar1 = param_1;
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1554e0(param_3);
  lVar2 = lVar1;
  func_0x00010bf404e0();
  if (lVar5 + 1 == lVar2) {
    lVar2 = param_3;
    func_0x00010c0840e0();
    lVar5 = *(long *)(param_1 + lVar7);
    func_0x00010c1554e0(param_3);
    func_0x00010c0deec0();
    _objc_release(lVar1);
    if (lVar2 <= lVar5) {
      uVar6 = *(undefined8 *)(param_1 + lVar7);
      puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c066a40(uVar6);
      _objc_release(puVar3);
      lVar1 = param_3;
      func_0x00010c1525a0(*(undefined8 *)(param_1 + lVar7));
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
        return;
      }
      ___stack_chk_fail();
      lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
      _objc_retain(lVar1);
      lVar7 = (long)_DAT_1127554f4;
      lVar5 = *(long *)(param_3 + lVar7);
      func_0x00010c0df2e0();
      lVar2 = lVar1;
      func_0x00010c1554e0();
      if (lVar2 < lVar5) {
        lVar5 = *(long *)(param_3 + lVar7);
        func_0x00010c1554e0(lVar1);
        func_0x00010c0deec0();
        lVar2 = lVar1;
        func_0x00010c0840e0();
        if (lVar2 < lVar5) {
          uVar6 = *(undefined8 *)(param_3 + lVar7);
          puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf6c100(uVar6);
          _objc_release(puVar3);
        }
      }
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
        return;
      }
      ___stack_chk_fail();
      uVar6 = *(undefined8 *)(lVar1 + _DAT_1127554f4);
      goto code_r0x00010c128b60;
    }
  }
  else {
    _objc_release(lVar1);
  }
  uVar6 = *(undefined8 *)(param_1 + lVar7);
code_r0x00010c128b60:
                    /* WARNING: Could not recover jumptable at 0x00010c128b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar6,PTR_s_reloadData_112627cf8);
  return;
}



/* Entry: 1069d9ba8; end: 1069d9c9f; -[SCChatMediaDrawerSendBar removeThumbnailCellAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069d9ba8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar6 = (long)_DAT_1127554f4;
  lVar1 = *(long *)(param_1 + lVar6);
  func_0x00010c0df2e0();
  lVar2 = param_3;
  func_0x00010c1554e0();
  if (lVar2 < lVar1) {
    lVar1 = *(long *)(param_1 + lVar6);
    func_0x00010c1554e0(param_3);
    func_0x00010c0deec0();
    lVar2 = param_3;
    func_0x00010c0840e0();
    if (lVar2 < lVar1) {
      uVar5 = *(undefined8 *)(param_1 + lVar6);
      puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf6c100(uVar5);
      _objc_release(puVar3);
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c128b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + _DAT_1127554f4),PTR_s_reloadData_112627cf8);
  return;
}



/* Entry: 1069d9ca0; end: 1069d9caf; -[SCChatMediaDrawerSendBar resetThumbnailCellCollectionView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069d9ca0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c128b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127554f4),PTR_s_reloadData_112627cf8);
  return;
}



/* Entry: 1069d9cb0; end: 1069d9cdf; -[SCChatMediaDrawerSendBar pressedSendButton] */

void FUN_1069d9cb0(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf78a60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069d9ce0; end: 1069d9d0f; -[SCChatMediaDrawerSendBar pressedEditButton] */

void FUN_1069d9ce0(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf788c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069d9d10; end: 1069d9d1f; +[SCChatMediaDrawerSendBar editButtonFont] */

void FUN_1069d9d10(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6d690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x4031000000000000,PTR__OBJC_CLASS___UIFont_1126aec38,
             PTR_s_demiBoldAvenirNextFontOfSize__1125b8f48);
  return;
}



/* Entry: 1069d9d20; end: 1069d9d2f; +[SCChatMediaDrawerSendBar editButtonEnabledTextColor] */

void FUN_1069d9d20(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23ba90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_sig_color__11266c8c8,0x88);
  return;
}



/* Entry: 1069d9d30; end: 1069d9d4f; +[SCChatMediaDrawerSendBar editButtonDisabledTextColor] */

void FUN_1069d9d30(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf41630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3feb3b3b40000000,0x3feb3b3b40000000,0x3feb3b3b40000000,0x3ff0000000000000,
             PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_colorWithRed_green_blue_alpha__1125adf30);
  return;
}



/* Entry: 1069d9d50; end: 1069d9d6f; +[SCChatMediaDrawerSendBar topLineColor] */

void FUN_1069d9d50(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf41630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3feb3b3b40000000,0x3feb3b3b40000000,0x3feb3b3b40000000,0x3ff0000000000000,
             PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_colorWithRed_green_blue_alpha__1125adf30);
  return;
}



/* Entry: 1069d9d70; end: 1069d9def; -[SCChatMediaDrawerSendBar _iconPaperPlaneFillImage] */

void FUN_1069d9d70(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b0c40;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe7ac0(0x4040800000000000,0x4040800000000000,0x4008000000000000,0x4008000000000000,
                      0x4008000000000000,0x4008000000000000,puVar2,param_2,0x25,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1069d9df0; end: 1069d9e0f; -[SCChatMediaDrawerSendBar dataSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069d9df0(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127554fc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1069d9e10; end: 1069d9e23; -[SCChatMediaDrawerSendBar setDataSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069d9e10(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127554fc,param_3);
  return;
}



/* Entry: 1069d9e24; end: 1069d9e43; -[SCChatMediaDrawerSendBar layoutDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069d9e24(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112755500);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1069d9e44; end: 1069d9e57; -[SCChatMediaDrawerSendBar setLayoutDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069d9e44(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112755500,param_3);
  return;
}



/* Entry: 1069d9e58; end: 1069d9e77; -[SCChatMediaDrawerSendBar delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069d9e58(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112755504);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1069d9e78; end: 1069d9e8b; -[SCChatMediaDrawerSendBar setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069d9e78(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112755504,param_3);
  return;
}



/* Entry: 1069d9e8c; end: 1069d9f3b; -[SCChatMediaDrawerSendBar .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069d9e8c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112755504);
  _objc_destroyWeak(param_1 + _DAT_112755500);
  _objc_destroyWeak(param_1 + _DAT_1127554fc);
  _objc_destroyWeak(param_1 + _DAT_1127554e4);
  _objc_storeStrong(param_1 + _DAT_1127554f0,0);
  _objc_storeStrong(param_1 + _DAT_1127554f4,0);
  _objc_storeStrong(param_1 + _DAT_112755508,0);
  _objc_storeStrong(param_1 + _DAT_1127554ec,0);
  _objc_storeStrong(param_1 + _DAT_1127554f8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127554e8,0);
  return;
}



/* Entry: 1069d9f3c; end: 1069d9f43; -[UICollectionViewChatMediaDrawerFlowLayout flipsHorizontallyInOppositeLayoutDirection] */

undefined8 FUN_1069d9f3c(void)

{
  return 0;
}



/* Entry: 1069d9f44; end: 1069da16b; -[SCChatMediaDrawerSendBarCollectionViewCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1069d9f44(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f4278;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c17d4c0(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    lVar5 = (long)_DAT_11275550c;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(puVar2);
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c17d4c0(*(undefined8 *)((long)puVar1 + lVar5));
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    func_0x00010c08c0e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4000000000000000);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    func_0x00010c08c0e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(uVar4);
    puVar3 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(uVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  return puVar1;
}



/* Entry: 1069da16c; end: 1069da22f; -[SCChatMediaDrawerSendBarCollectionViewCell prepareForReuse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069da16c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f4278;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_prepareForReuse_112620008);
  func_0x00010bf2dba0(*(undefined8 *)(param_1 + _DAT_112755510));
  uVar1 = *(undefined8 *)(param_1 + _DAT_112755514);
  *(undefined8 *)(param_1 + _DAT_112755514) = 0;
  _objc_release(uVar1);
  lVar2 = (long)_DAT_11275550c;
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4000000000000000);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2c00();
  _objc_release(uVar1);
  return;
}



/* Entry: 1069da230; end: 1069da4c3; -[SCChatMediaDrawerSendBarCollectionViewCell layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069da230(undefined8 param_1,undefined8 param_2,double param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  double dVar9;
  long lStack_70;
  undefined *puStack_68;
  
  puStack_68 = PTR_PTR_1126f4278;
  lStack_70 = param_4;
  _objc_msgSendSuper2(&lStack_70,PTR_s_layoutSubviews_112600e60);
  lVar7 = (long)_DAT_112755514;
  lVar1 = *(long *)(param_4 + lVar7);
  func_0x00010c084c40();
  if (lVar1 != 1) {
    return;
  }
  uVar8 = *(ulong *)(param_4 + lVar7);
  _objc_retain(uVar8);
  uVar2 = uVar8;
  func_0x00010bfbdda0();
  func_0x00010b5fa33c();
  if (uVar2 < 7) {
    if ((1L << (uVar2 & 0x3f) & 0x6aU) != 0) goto LAB_1069da2bc;
    if (uVar2 != 2) goto LAB_1069da4b4;
    func_0x00010bfb68e0(param_4);
    dVar9 = param_3 * 0.5;
    lVar1 = (long)_DAT_11275550c;
    uVar4 = *(undefined8 *)(param_4 + lVar1);
    func_0x00010c08c0e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(dVar9);
    _objc_release(uVar4);
    func_0x00010bfb68e0(param_4);
    puVar5 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    func_0x00010bf199c0(0,0,PTR__OBJC_CLASS___UIBezierPath_1126aec18);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    func_0x000108df6a6c(param_3);
    func_0x00010bf199a0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf06f40(puVar5);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
    func_0x00010c08c0e0(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19bc80();
    puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    func_0x00010c19bc00(puVar3);
    _objc_release(puVar6);
    puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    func_0x00010c16e440(puVar3);
    _objc_release(puVar6);
    _objc_retainAutorelease(puVar5);
    func_0x00010bdc1040();
    func_0x00010c1d9820(puVar3);
    func_0x00010c19f0e0(0,0,param_3,param_3,puVar3);
    _objc_release(puVar5);
    uVar4 = *(undefined8 *)(param_4 + lVar1);
    func_0x00010c08c0e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2c00();
    _objc_release(uVar4);
  }
  else {
LAB_1069da4b4:
    if (uVar2 != 9999) goto LAB_1069da2f8;
LAB_1069da2bc:
    func_0x00010bfb68e0(param_4);
    puVar3 = *(undefined **)(param_4 + _DAT_11275550c);
    func_0x00010c08c0e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(param_3 * 0.5);
  }
  _objc_release(puVar3);
LAB_1069da2f8:
  _objc_release(uVar8);
  return;
}



/* Entry: 1069da4c4; end: 1069da63b; -[SCChatMediaDrawerSendBarCollectionViewCell setDrawerItem:encryptedContentManager:memoriesMergedDataSource:cachingMediaManager:circumstanceEngine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069da4c4(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar5 = (long)_DAT_112755514;
  uVar1 = *(ulong *)(param_1 + lVar5);
  func_0x00010c0844e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c0844e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0720c0(uVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) == 0) {
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    *(long *)(param_1 + lVar5) = param_3;
    _objc_release(uVar4);
    lVar2 = param_3;
    func_0x00010c084c40();
    if (lVar2 == 1) {
      func_0x00010bebb680(param_1,param_2,param_3,param_4,param_5,param_6);
    }
    else if (lVar2 == 0) {
      _objc_retain(param_3);
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0xc2000000;
      pcStack_80 = FUN_1069da63c;
      puStack_78 = &UNK_11084a078;
      lStack_70 = param_1;
      lStack_68 = param_3;
      func_0x00010bfaa2a0(param_3,param_2,&puStack_90);
      _objc_release(lStack_68);
    }
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1069da63c; end: 1069da66b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069da63c(long param_1,undefined8 param_2)

{
  if (*(long *)(*(long *)(param_1 + 0x20) + (long)_DAT_112755514) != *(long *)(param_1 + 0x28)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a9f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11275550c),
             PTR_s_setImage__1126481e8,param_2);
  return;
}



/* Entry: 1069da66c; end: 1069da6bf; +[SCChatMediaDrawerSendBarCollectionViewCell _sharedPerformer] */

void FUN_1069da66c(void)

{
  undefined8 uVar1;
  
  if (lRam00000001136c4820 != -1) {
    func_0x00010002a2fc(0x1136c4820,&PTR___NSConcreteGlobalBlock_110952638);
  }
  uVar1 = uRam00000001136c4818;
  _objc_retain(uRam00000001136c4818);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1069da6c0; end: 1069da703;  */

void FUN_1069da6c0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126ae790;
  _objc_alloc();
  func_0x00010c021520();
  uVar1 = puRam00000001136c4818;
  puRam00000001136c4818 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1069da704; end: 1069da883; -[SCChatMediaDrawerSendBarCollectionViewCell _showThumbnailForGalleryEntry:encryptedContentManager:memoriesMergedDataSource:cachingMediaManager:] */

void FUN_1069da704(double param_1,undefined8 param_2,double param_3,double param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  double dStack_60;
  double dStack_58;
  
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  uVar1 = param_5;
  func_0x00010bf4dce0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  param_3 = param_3 * param_1;
  puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  _objc_release(puVar3);
  _objc_release(puVar2);
  uVar1 = param_5;
  _objc_opt_class(param_5);
  func_0x00010beb20a0();
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1069da884;
  puStack_88 = &UNK_1108e75b8;
  uStack_80 = param_5;
  uStack_78 = param_7;
  uStack_70 = param_9;
  uStack_68 = param_10;
  dStack_60 = param_3;
  dStack_58 = param_4 * param_1;
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_7);
  func_0x00010c0f7fc0(uVar1,param_6,&puStack_a0);
  _objc_release(uVar1);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  return;
}



/* Entry: 1069da884; end: 1069daa63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069da884(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112755514);
  func_0x00010c0844e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf97200(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar3 != 0) {
    lVar4 = *(long *)(param_1 + 0x30);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bfa7340();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar4);
    if (lVar6 != 0) {
      _objc_initWeak(auStack_48,*(undefined8 *)(param_1 + 0x20));
      uVar1 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(PTR___dispatch_main_q_11034be20);
      _objc_copyWeak(auStack_50,auStack_48);
      uVar3 = uVar1;
      func_0x00010c134d00(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48));
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112755510);
      *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112755510) = uVar3;
      _objc_release(uVar2);
      _objc_release(PTR___dispatch_main_q_11034be20);
      _objc_release(uVar1);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
    }
    _objc_release(lVar6);
  }
  return;
}



/* Entry: 1069daa64; end: 1069daabf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069daa64(long param_1,long param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_2 != 0) && (param_1 != 0)) {
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_11275550c));
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1069daac0; end: 1069dab0f; -[SCChatMediaDrawerSendBarCollectionViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069daac0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112755510,0);
  _objc_storeStrong(param_1 + _DAT_112755514,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275550c,0);
  return;
}



/* Entry: 1069dab10; end: 1069db1d7; -[SCChatMediaDrawerSendBarSendButton initWithFrame:sendButtonAction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1069dab10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,long param_7)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined8 uStack_f0;
  undefined *puStack_e8;
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
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  puStack_e8 = PTR_PTR_1126f4280;
  puVar8 = &uStack_f0;
  uStack_f0 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,puVar8,PTR_s_initWithFrame__1125e2948);
  if (puVar8 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar8 + (long)_DAT_112755518) = 0x7fffffffffffffff;
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_opt_new();
    lVar18 = (long)_DAT_11275551c;
    uVar9 = *(undefined8 *)((long)puVar8 + lVar18);
    *(undefined **)((long)puVar8 + lVar18) = puVar2;
    _objc_release(uVar9);
    puVar3 = puVar8;
    func_0x00010be36a20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(*(undefined8 *)((long)puVar8 + lVar18));
    func_0x00010c219b60(*(undefined8 *)((long)puVar8 + lVar18));
    func_0x00010befbb60(puVar8);
    puVar2 = PTR_PTR_1126aea58;
    _objc_opt_new();
    lVar20 = (long)_DAT_112755520;
    uVar9 = *(undefined8 *)((long)puVar8 + lVar20);
    *(undefined **)((long)puVar8 + lVar20) = puVar2;
    _objc_release(uVar9);
    iVar1 = (int)*(undefined8 *)((long)puVar8 + lVar20);
    func_0x00010c21ad00();
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010b88a460();
    if ((iVar1 != 0) && (lRam00000001138466f0 < 3)) {
      plVar10 = (long *)&UNK_10e5f30e8;
      do {
        lVar13 = *plVar10;
        if (lVar13 == 0) goto LAB_1069dac98;
        plVar10 = plVar10 + 1;
      } while (lVar13 != 0x87);
      plVar10 = (long *)&UNK_10e5f3128;
      do {
        lVar13 = *plVar10;
        if (lVar13 == 0xd5) break;
        plVar10 = plVar10 + 1;
      } while (lVar13 != 0);
    }
LAB_1069dac98:
    func_0x00010c23ba80(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar8 + lVar20));
    _objc_release(puVar2);
    func_0x00010c219b60(*(undefined8 *)((long)puVar8 + lVar20));
    func_0x00010befbb60(puVar8);
    uVar4 = *(undefined8 *)((long)puVar8 + lVar18);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar8;
    func_0x00010c274200(puVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar4;
    func_0x00010bf493c0(0);
    _objc_retainAutoreleasedReturnValue();
    lVar13 = (long)_DAT_112755524;
    uVar11 = *(undefined8 *)((long)puVar8 + lVar13);
    *(undefined8 *)((long)puVar8 + lVar13) = uVar9;
    _objc_release(uVar11);
    _objc_release(puVar5);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)((long)puVar8 + lVar18);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar8;
    func_0x00010bf1ff80(puVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar4;
    func_0x00010bf493c0(0);
    _objc_retainAutoreleasedReturnValue();
    lVar14 = (long)_DAT_112755528;
    uVar11 = *(undefined8 *)((long)puVar8 + lVar14);
    *(undefined8 *)((long)puVar8 + lVar14) = uVar9;
    _objc_release(uVar11);
    _objc_release(puVar5);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)((long)puVar8 + lVar18);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar4;
    func_0x00010bf49420(0x4034000000000000);
    _objc_retainAutoreleasedReturnValue();
    lVar15 = (long)_DAT_11275552c;
    uVar11 = *(undefined8 *)((long)puVar8 + lVar15);
    *(undefined8 *)((long)puVar8 + lVar15) = uVar9;
    _objc_release(uVar11);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)((long)puVar8 + lVar20);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar4;
    func_0x00010bf49420(0);
    _objc_retainAutoreleasedReturnValue();
    lVar16 = (long)_DAT_112755530;
    uVar11 = *(undefined8 *)((long)puVar8 + lVar16);
    *(undefined8 *)((long)puVar8 + lVar16) = uVar9;
    _objc_release(uVar11);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)((long)puVar8 + lVar20);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar4;
    func_0x00010bf49420(0);
    _objc_retainAutoreleasedReturnValue();
    lVar22 = (long)_DAT_112755534;
    uVar11 = *(undefined8 *)((long)puVar8 + lVar22);
    *(undefined8 *)((long)puVar8 + lVar22) = uVar9;
    _objc_release(uVar11);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)((long)puVar8 + lVar20);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar8;
    func_0x00010c08de00(puVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar4;
    func_0x00010bf493c0(0);
    _objc_retainAutoreleasedReturnValue();
    lVar17 = (long)_DAT_112755538;
    uVar11 = *(undefined8 *)((long)puVar8 + lVar17);
    *(undefined8 *)((long)puVar8 + lVar17) = uVar9;
    _objc_release(uVar11);
    _objc_release(puVar5);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)((long)puVar8 + lVar20);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)((long)puVar8 + lVar18);
    func_0x00010c08de00(uVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar4;
    func_0x00010bf493c0(0);
    _objc_retainAutoreleasedReturnValue();
    lVar19 = (long)_DAT_11275553c;
    uVar12 = *(undefined8 *)((long)puVar8 + lVar19);
    *(undefined8 *)((long)puVar8 + lVar19) = uVar9;
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)((long)puVar8 + lVar20);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar8;
    func_0x00010c274200(puVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar4;
    func_0x00010bf493c0(0);
    _objc_retainAutoreleasedReturnValue();
    lVar21 = (long)_DAT_112755540;
    uVar11 = *(undefined8 *)((long)puVar8 + lVar21);
    *(undefined8 *)((long)puVar8 + lVar21) = uVar9;
    _objc_release(uVar11);
    _objc_release(puVar5);
    _objc_release(uVar4);
    puVar5 = puVar8;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf49420(0x4043000000000000);
    _objc_retainAutoreleasedReturnValue();
    lVar20 = (long)_DAT_112755544;
    uVar9 = *(undefined8 *)((long)puVar8 + lVar20);
    *(undefined8 **)((long)puVar8 + lVar20) = puVar6;
    _objc_release(uVar9);
    _objc_release(puVar5);
    puVar5 = puVar8;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf49420(0x4043000000000000);
    _objc_retainAutoreleasedReturnValue();
    lVar18 = (long)_DAT_112755548;
    uVar9 = *(undefined8 *)((long)puVar8 + lVar18);
    *(undefined8 **)((long)puVar8 + lVar18) = puVar6;
    _objc_release(uVar9);
    _objc_release(puVar5);
    uStack_e0 = *(undefined8 *)((long)puVar8 + lVar16);
    uStack_d8 = *(undefined8 *)((long)puVar8 + lVar22);
    uStack_d0 = *(undefined8 *)((long)puVar8 + lVar17);
    uStack_c8 = *(undefined8 *)((long)puVar8 + lVar19);
    uStack_c0 = *(undefined8 *)((long)puVar8 + lVar21);
    uStack_b8 = *(undefined8 *)((long)puVar8 + lVar13);
    uStack_b0 = *(undefined8 *)((long)puVar8 + lVar14);
    uStack_a8 = *(undefined8 *)((long)puVar8 + lVar15);
    uStack_a0 = *(undefined8 *)((long)puVar8 + lVar20);
    uStack_98 = *(undefined8 *)((long)puVar8 + lVar18);
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar7;
    func_0x00010bf51e00();
    uVar9 = *(undefined8 *)((long)puVar8 + (long)_DAT_11275554c);
    *(undefined **)((long)puVar8 + (long)_DAT_11275554c) = puVar2;
    _objc_release(uVar9);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010b83340c();
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar8);
    _objc_release(puVar2);
    puVar5 = puVar8;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4033000000000000);
    _objc_release(puVar5);
    lVar18 = param_7;
    _objc_retainBlock();
    uVar9 = *(undefined8 *)((long)puVar8 + (long)_DAT_112755550);
    *(long *)((long)puVar8 + (long)_DAT_112755550) = lVar18;
    _objc_release(uVar9);
    puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    func_0x00010c050900();
    uVar9 = *(undefined8 *)((long)puVar8 + (long)_DAT_112755554);
    *(undefined **)((long)puVar8 + (long)_DAT_112755554) = puVar2;
    _objc_release(uVar9);
    func_0x00010bef9040(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_90) {
    ___stack_chk_fail();
    puVar8 = *(undefined8 **)(param_7 + _DAT_112755520);
    func_0x00010c0699c0(puVar8);
    return puVar8;
  }
  return puVar8;
}



/* Entry: 1069db1d8; end: 1069db20b; -[SCChatMediaDrawerSendBarSendButton getButtonWidth] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1069db1d8(double param_1,long param_2)

{
  func_0x00010c0699c0(*(undefined8 *)(param_2 + _DAT_112755520));
  return param_1 + 38.0 + 9.0;
}



/* Entry: 1069db20c; end: 1069db463; -[SCChatMediaDrawerSendBarSendButton setSelectedItemCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069db20c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  if (param_5 == *(long *)(param_3 + _DAT_112755518)) {
    return;
  }
  *(long *)(param_3 + _DAT_112755518) = param_5;
  if (param_5 == 1) {
    func_0x00010c1677c0(0x3ff0000000000000,param_3);
    func_0x00010c1677c0(0,*(undefined8 *)(param_3 + _DAT_112755520));
    func_0x00010c181140(0,*(undefined8 *)(param_3 + _DAT_112755540));
    func_0x00010c181140(0x4022000000000000,*(undefined8 *)(param_3 + _DAT_112755538));
    func_0x00010c181140(0,*(undefined8 *)(param_3 + _DAT_11275553c));
    func_0x00010c181140(0,*(undefined8 *)(param_3 + _DAT_112755530));
    func_0x00010c181140(0,*(undefined8 *)(param_3 + _DAT_112755534));
    func_0x00010c181140(0x4022000000000000,*(undefined8 *)(param_3 + _DAT_112755524));
    func_0x00010c181140(0xc022000000000000,*(undefined8 *)(param_3 + _DAT_112755528));
    lVar3 = (long)_DAT_112755548;
    func_0x00010c181140(0x4043000000000000,*(undefined8 *)(param_3 + lVar3));
    func_0x00010c181140(0x4043000000000000,*(undefined8 *)(param_3 + lVar3));
    func_0x00010c08cdc0(param_3);
  }
  else if (param_5 == 0) {
    func_0x00010c1677c0(0,param_3);
  }
  else {
    func_0x00010c1677c0(0x3ff0000000000000,param_3);
    lVar3 = (long)_DAT_112755520;
    func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_3 + lVar3));
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_3 + lVar3));
    _objc_release(puVar2);
    _objc_release(puVar1);
    func_0x00010c181140(0x4022000000000000,*(undefined8 *)(param_3 + _DAT_112755540));
    func_0x00010c0699c0(*(undefined8 *)(param_3 + lVar3));
    func_0x00010c181140(*(undefined8 *)(param_3 + _DAT_112755534));
    func_0x00010c0699c0(*(undefined8 *)(param_3 + lVar3));
    func_0x00010c181140(param_2,*(undefined8 *)(param_3 + _DAT_112755530));
    func_0x00010c181140(0x4022000000000000,*(undefined8 *)(param_3 + _DAT_112755538));
    func_0x00010c181140(0xc022000000000000,*(undefined8 *)(param_3 + _DAT_11275553c));
    func_0x00010c181140(0x4022000000000000,*(undefined8 *)(param_3 + _DAT_112755524));
    func_0x00010c181140(0xc022000000000000,*(undefined8 *)(param_3 + _DAT_112755528));
    func_0x00010bfc32a0(param_3);
    func_0x00010c181140(*(undefined8 *)(param_3 + _DAT_112755548));
    func_0x00010c181140(0x4043000000000000,*(undefined8 *)(param_3 + _DAT_112755544));
  }
                    /* WARNING: Could not recover jumptable at 0x00010beef8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,PTR_s_activateConstraints__1125997d8,
             *(undefined8 *)(param_3 + _DAT_11275554c));
  return;
}



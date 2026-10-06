/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108f6f584; end: 108f6f80b; -[SCUnifiedProfileNetworkImageView _updateMediaCardWithImage:networkImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f6f584(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = *(long *)(param_1 + _DAT_11277e4a4);
  _objc_retain(param_4);
  _objc_retain(lVar2);
  if (param_4 == lVar2) {
    uVar3 = 0;
  }
  else {
    if (lVar2 == 0) {
      _objc_release(0);
      _objc_release(param_4);
      goto LAB_108f6f7e8;
    }
    lVar4 = param_4;
    func_0x00010c071ae0(param_4,param_2,lVar2);
    uVar3 = (uint)lVar4 ^ 1;
  }
  _objc_release(lVar2);
  _objc_release(param_4);
  if ((param_3 != 0) && ((uVar3 & 1) == 0)) {
    lVar4 = (long)_DAT_11277e494;
    lVar2 = *(long *)(param_1 + lVar4);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      func_0x00010bf57500(*(undefined8 *)(param_1 + lVar4));
      _objc_unsafeClaimAutoreleasedReturnValue();
      uVar1 = *(undefined8 *)(param_1 + lVar4);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60(param_1,param_2,uVar1);
      _objc_release(uVar1);
      if (*(long *)(param_1 + _DAT_11277e490) != 0) {
        func_0x00010bf21300(param_1);
      }
    }
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00();
    _objc_release(uVar1);
    lVar5 = (long)_DAT_11277e498;
    lVar4 = *(long *)(param_1 + lVar5);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    func_0x00010bfe6ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar4);
    if (lVar2 != 0) {
      uVar1 = *(undefined8 *)(param_1 + lVar5);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a9f00();
      _objc_release(uVar1);
    }
    uVar1 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar1);
    lVar2 = (long)_DAT_11277e49c;
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2558c0();
    _objc_release(uVar1);
    func_0x00010c16e440(param_1,param_2,0);
    lVar2 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe74a0();
    _objc_release(lVar2);
    func_0x00010c1cbe20(param_1);
  }
LAB_108f6f7e8:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f6f80c; end: 108f6f997; -[SCUnifiedProfileNetworkImageView _updateLoadingImageView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f6f80c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + _DAT_11277e494);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if ((param_3 != 0) && (lVar2 == 0)) {
    lVar1 = (long)_DAT_11277e498;
    lVar2 = *(long *)(param_1 + lVar1);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      func_0x00010bf57500(*(undefined8 *)(param_1 + lVar1));
      _objc_unsafeClaimAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + lVar1);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60(param_1,param_2,uVar3);
      _objc_release(uVar3);
      if (*(long *)(param_1 + _DAT_11277e490) != 0) {
        func_0x00010bf21300(param_1);
      }
      lVar4 = (long)_DAT_11277e49c;
      lVar2 = *(long *)(param_1 + lVar4);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar2 != 0) {
        uVar3 = *(undefined8 *)(param_1 + lVar4);
        func_0x00010c269d40(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf21300(param_1,param_2,uVar3);
        _objc_release(uVar3);
      }
    }
    uVar3 = *(undefined8 *)(param_1 + lVar1);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + lVar1);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00();
    _objc_release(uVar3);
    func_0x00010c1cbe20(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f6f998; end: 108f6f9a7; -[SCUnifiedProfileNetworkImageView viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f6f998(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277e4a4);
}



/* Entry: 108f6f9a8; end: 108f6f9b7; -[SCUnifiedProfileNetworkImageView mediaDownloader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f6f9a8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277e4a8);
}



/* Entry: 108f6f9b8; end: 108f6f9f7; -[SCUnifiedProfileNetworkImageView setMediaDownloader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f6f9b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277e4a8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f6f9f8; end: 108f6fa17; -[SCUnifiedProfileNetworkImageView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f6f9f8(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277e4ac);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108f6fa18; end: 108f6fa2b; -[SCUnifiedProfileNetworkImageView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f6fa18(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277e4ac,param_3);
  return;
}



/* Entry: 108f6fa2c; end: 108f6fad7; -[SCUnifiedProfileNetworkImageView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f6fa2c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11277e4ac);
  _objc_storeStrong(param_1 + _DAT_11277e4a8,0);
  _objc_storeStrong(param_1 + _DAT_11277e4a4,0);
  _objc_storeStrong(param_1 + _DAT_11277e48c,0);
  _objc_storeStrong(param_1 + _DAT_11277e490,0);
  _objc_storeStrong(param_1 + _DAT_11277e4a0,0);
  _objc_storeStrong(param_1 + _DAT_11277e49c,0);
  _objc_storeStrong(param_1 + _DAT_11277e498,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277e494,0);
  return;
}



/* Entry: 108f6fad8; end: 108f6fbd7; -[SCUnifiedProfileUpdatedNetworkImageView initWithCornerRadius:shouldUseTemplate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_108f6fad8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  puStack_68 = PTR_PTR_1126ff668;
  uVar4 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar5 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar6 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar7 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  uStack_70 = param_2;
  _objc_msgSendSuper2(uVar4,uVar5,uVar6,uVar7,&uStack_70,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + (long)_DAT_11277e4b0) = param_4;
    puVar2 = PTR_PTR_1126b48f0;
    _objc_alloc();
    func_0x00010c013de0(uVar4,uVar5,uVar6,uVar7);
    lVar3 = (long)_DAT_11277e4b4;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined **)((long)puVar1 + lVar3) = puVar2;
    _objc_release(uVar4);
    func_0x00010c1842e0(param_1,*(undefined8 *)((long)puVar1 + lVar3));
    func_0x00010c1bec20(*(undefined8 *)((long)puVar1 + lVar3));
    func_0x00010befbb60(puVar1);
    func_0x00010be49000(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108f6fbd8; end: 108f6fc73; -[SCUnifiedProfileUpdatedNetworkImageView setSIGIcon:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f6fbd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_11277e4b8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  _objc_release(uVar1);
  _objc_initWeak(auStack_38,param_1);
  _objc_retain();
  func_0x00010bea60c0(param_1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 108f6fc74; end: 108f6feeb; -[SCUnifiedProfileUpdatedNetworkImageView setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f6fc74(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  lVar6 = (long)_DAT_11277e4bc;
  uVar5 = *(ulong *)(param_1 + lVar6);
  _objc_retain(param_3);
  _objc_retain(uVar5);
  uVar4 = param_3;
  if (param_3 == uVar5) {
    _objc_release(uVar5);
  }
  else {
    if (uVar5 == 0) {
      _objc_release();
    }
    else {
      uVar1 = param_3;
      func_0x00010c071ae0();
      _objc_release(uVar5);
      _objc_release(param_3);
      if ((uVar1 & 1) != 0) goto LAB_108f6fea4;
    }
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar6);
    *(ulong *)(param_1 + lVar6) = param_3;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_11277e4b4;
    func_0x00010c216160(*(undefined8 *)(param_1 + lVar6));
    puVar3 = PTR_PTR_1126b4860;
    _objc_retain(param_3);
    _objc_opt_class(puVar3);
    uVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar3);
    if ((uVar5 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(param_3);
    func_0x00010c1cc200(*(undefined8 *)(param_1 + lVar6));
    puVar3 = PTR_PTR_1126aebd8;
    _objc_retain(param_3);
    _objc_opt_class(puVar3);
    uVar1 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar3);
    uVar5 = param_3;
    if ((uVar1 & 1) == 0) {
      uVar5 = 0;
    }
    _objc_retain(uVar5);
    _objc_release(param_3);
    if (uVar5 != 0) {
      _objc_initWeak(auStack_58,param_1);
      uVar2 = *(undefined8 *)(param_1 + _DAT_11277e4c0);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126aebf0;
      _objc_alloc(PTR_PTR_1126aebf0);
      _objc_opt_class(param_1);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c011b80(puVar3);
      _objc_copyWeak(auStack_60,auStack_58);
      func_0x00010bf88c20(uVar2);
      _objc_release(puVar3);
      _objc_release(param_1);
      _objc_release(uVar2);
      _objc_destroyWeak(auStack_60);
      _objc_destroyWeak(auStack_58);
    }
    _objc_release(uVar5);
  }
  _objc_release(uVar4);
LAB_108f6fea4:
  _objc_release(param_3);
  return;
}



/* Entry: 108f6feec; end: 108f6ffab;  */

void FUN_108f6feec(long param_1,undefined8 param_2)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_108f6ffac;
  puStack_50 = &UNK_110848218;
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  _objc_retain(param_2);
  uStack_40 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = param_2;
  func_0x000107c312cc("APPSTORE",&puStack_68);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 108f6ffac; end: 108f6ffdf;  */

void FUN_108f6ffac(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea60a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108f6ffe0; end: 108f70113; -[SCUnifiedProfileUpdatedNetworkImageView _setOnDemandAssetImage:resource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f6ffe0(long param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 == *(long *)(param_1 + _DAT_11277e4bc)) {
    if (*(char *)(param_1 + _DAT_11277e4b0) == '\x01') {
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xcd);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = (long)_DAT_11277e4b4;
      func_0x00010c216160(*(undefined8 *)(param_1 + lVar3),param_2,puVar2);
      _objc_release(puVar2);
      puVar2 = param_3;
      func_0x00010bfe9720(param_3,param_2,2);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR_PTR_1126b4860;
      func_0x00010bfe94a0(PTR_PTR_1126b4860,param_2,puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1cc200(*(undefined8 *)(param_1 + lVar3),param_2,puVar1);
      _objc_release(puVar1);
    }
    else {
      puVar2 = PTR_PTR_1126b4860;
      func_0x00010bfe94a0(PTR_PTR_1126b4860,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1cc200(*(undefined8 *)(param_1 + _DAT_11277e4b4),param_2,puVar2);
    }
    _objc_release(puVar2);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f70114; end: 108f7015f; -[SCUnifiedProfileUpdatedNetworkImageView _setOnDemandAssetSIGImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f70114(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b4860;
  func_0x00010bfe94a0(PTR_PTR_1126b4860);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cc200(*(undefined8 *)(param_1 + _DAT_11277e4b4),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108f70160; end: 108f7016f; -[SCUnifiedProfileUpdatedNetworkImageView _layoutConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f70160(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c14c950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277e4b4),PTR_s_sc_constrainToSuperviewEdges_112630c70)
  ;
  return;
}



/* Entry: 108f70170; end: 108f7017f; -[SCUnifiedProfileUpdatedNetworkImageView setImageDownloader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f70170(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1aa210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277e4b4),PTR_s_setImageDownloader__1126482a8);
  return;
}



/* Entry: 108f70180; end: 108f701b7; -[SCUnifiedProfileUpdatedNetworkImageView setResourceDownloader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f70180(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277e4c0);
  *(undefined8 *)(param_1 + _DAT_11277e4c0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f701b8; end: 108f701c7; -[SCUnifiedProfileUpdatedNetworkImageView viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f701b8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277e4bc);
}



/* Entry: 108f701c8; end: 108f701d7; -[SCUnifiedProfileUpdatedNetworkImageView SIGIcon] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f701c8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277e4b8);
}



/* Entry: 108f701d8; end: 108f70237; -[SCUnifiedProfileUpdatedNetworkImageView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f701d8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277e4b8,0);
  _objc_storeStrong(param_1 + _DAT_11277e4bc,0);
  _objc_storeStrong(param_1 + _DAT_11277e4c0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277e4b4,0);
  return;
}



/* Entry: 108f70238; end: 108f702ef; -[SCUnifiedProfileHeaderIconView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108f70238(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ff670;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae790;
    func_0x00010bfcd0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277e4c4);
    *(undefined **)((long)puVar1 + (long)_DAT_11277e4c4) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___UIButton_1126aec48;
    _objc_alloc_init();
    lVar4 = (long)_DAT_11277e4c8;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010c165e80(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010befbb60(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108f702f0; end: 108f70317; -[SCUnifiedProfileHeaderIconView intrinsicContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_108f702f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  undefined1 auVar1 [16];
  
  func_0x00010bf20c00(*(undefined8 *)(param_5 + _DAT_11277e4c8));
  auVar1._8_8_ = param_4;
  auVar1._0_8_ = param_3;
  return auVar1;
}



/* Entry: 108f70318; end: 108f70507; -[SCUnifiedProfileHeaderIconView setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f70318(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar6 = (long)_DAT_11277e4cc;
  uVar5 = *(ulong *)(param_1 + lVar6);
  _objc_retain(param_3);
  _objc_retain(uVar5);
  uVar4 = param_3;
  if (param_3 == uVar5) {
    _objc_release(uVar5);
  }
  else {
    if (uVar5 == 0) {
      _objc_release();
    }
    else {
      uVar1 = param_3;
      func_0x00010c071ae0();
      _objc_release(uVar5);
      _objc_release(param_3);
      if ((uVar1 & 1) != 0) goto LAB_108f704c8;
    }
    puVar2 = PTR_PTR_1126dcb80;
    _objc_retain(param_3);
    _objc_opt_class(puVar2);
    uVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    if ((uVar5 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(param_3);
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)(param_1 + lVar6);
    *(ulong *)(param_1 + lVar6) = param_3;
    _objc_release(uVar3);
    _objc_initWeak(auStack_48,param_1);
    uVar3 = *(undefined8 *)(param_1 + _DAT_11277e4c4);
    _objc_retain(uVar4);
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010c0f7fc0(uVar3);
    func_0x00010befbd60(*(undefined8 *)(param_1 + _DAT_11277e4c8));
    uVar5 = uVar4;
    func_0x00010beecec0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c160fc0(param_1);
    _objc_release(uVar5);
    _objc_destroyWeak(auStack_50);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(uVar4);
LAB_108f704c8:
  _objc_release(param_3);
  return;
}



/* Entry: 108f70508; end: 108f70647;  */

void FUN_108f70508(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  puVar1 = *(undefined **)(param_1 + 0x20);
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  if (puVar1 == (undefined *)0x0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfe6b80(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe8220();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
  }
  else {
    _objc_retain(puVar1);
    puVar2 = puVar1;
  }
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010bfe9720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_108f70648;
  puStack_50 = &UNK_110848218;
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  _objc_retain(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puStack_48 = puVar1;
  _objc_retain(uVar3);
  uStack_40 = uVar3;
  func_0x000107c312d0("APPSTORE",&puStack_68);
  _objc_release(uStack_40);
  _objc_release(puStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(puVar1);
  return;
}



/* Entry: 108f70648; end: 108f70837;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f70648(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_f0 [8];
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined1 auStack_c8 [8];
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
  
  lVar1 = param_3 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar5 = (long)_DAT_11277e4c8;
    uVar4 = *(undefined8 *)(lVar1 + lVar5);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(uVar4);
    _objc_release(puVar2);
    func_0x00010c1a9fc0(*(undefined8 *)(lVar1 + lVar5));
    func_0x00010c23d0a0(*(undefined8 *)(param_3 + 0x20));
    func_0x00010c23d0a0(*(undefined8 *)(param_3 + 0x20));
    func_0x00010c19f0e0(0,0,param_1,param_2,*(undefined8 *)(lVar1 + lVar5));
    lVar3 = lVar1;
    func_0x00010c262ca0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cbe20();
    _objc_release(lVar3);
    _CGAffineTransformMakeScale(&uStack_90,0x3fe0000000000000,0x3fe0000000000000);
    uStack_b8 = uStack_88;
    uStack_c0 = uStack_90;
    uStack_a8 = uStack_78;
    uStack_b0 = uStack_80;
    uStack_98 = uStack_68;
    uStack_a0 = uStack_70;
    func_0x00010c219960(*(undefined8 *)(lVar1 + lVar5));
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e0 = 0xc2000000;
    pcStack_d8 = FUN_108f70838;
    puStack_d0 = &UNK_1108434b0;
    _objc_copyWeak(auStack_c8,param_3 + 0x30);
    _objc_copyWeak(auStack_f0,param_3 + 0x30);
    uVar4 = *(undefined8 *)(param_3 + 0x28);
    _objc_retain(uVar4);
    func_0x00010bf03420(0x3fd3333340000000,puVar2);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_f0);
    _objc_destroyWeak(auStack_c8);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 108f70838; end: 108f708df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f70838(long param_1,undefined8 param_2)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uStack_48 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
    uStack_50 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
    uStack_38 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
    uStack_40 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
    uStack_28 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
    uStack_30 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
    func_0x00010c219960(*(undefined8 *)(param_1 + _DAT_11277e4c8),param_2,&uStack_50);
  }
  _objc_release(param_1);
  return;
}



/* Entry: 108f708e0; end: 108f7093f; -[SCUnifiedProfileHeaderIconView setExtendedTouchArea:] */

/* WARNING: Possible PIC construction at 0x000108f70914: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108f70918) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f708e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a8c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277e4c8),PTR_s_setHitTestSlop__112647d38);
  return;
}



/* Entry: 108f70940; end: 108f709e7; -[SCUnifiedProfileHeaderIconView _handleIconTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f70940(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  puVar2 = PTR_PTR_1126dcb80;
  uVar4 = *(undefined8 *)(param_1 + _DAT_11277e4d0);
  uVar5 = *(ulong *)(param_1 + _DAT_11277e4cc);
  _objc_retain(uVar5);
  _objc_opt_class(puVar2);
  uVar3 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar2);
  uVar1 = uVar5;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar5);
  uVar3 = uVar1;
  func_0x00010c268c60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd0140(uVar4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 108f709e8; end: 108f70a43; -[SCUnifiedProfileHeaderIconView _showTooltipIfNeeded:] */

void FUN_108f709e8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  if (param_3 != 0) {
    puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_38 = 0xc2000000;
    pcStack_30 = FUN_108f70a44;
    puStack_28 = &UNK_110848c48;
    uStack_20 = param_1;
    lStack_18 = param_3;
    func_0x000107c312cc("APPSTORE",&puStack_40);
  }
  return;
}



/* Entry: 108f70a44; end: 108f70b8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f70a44(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  FUN_108f71900(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b09c0;
  _objc_alloc(PTR_PTR_1126b09c0);
  func_0x00010c051640();
  lVar6 = (long)_DAT_11277e4c8;
  func_0x00010bf20c00(*(undefined8 *)(*(long *)(param_2 + 0x20) + lVar6));
  _CGRectGetMidX();
  uVar4 = param_1;
  func_0x00010bf20c00(*(undefined8 *)(*(long *)(param_2 + 0x20) + lVar6));
  _CGRectGetMaxY();
  func_0x00010c10c340(param_1,uVar4,0x4014000000000000,puVar2,param_3,
                      *(undefined8 *)(*(long *)(param_2 + 0x20) + lVar6));
  puVar3 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  FUN_108f71938(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,*(undefined8 *)(param_2 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01b460(puVar3,param_3,uVar4,puVar5);
  _objc_release(puVar5);
  _objc_release(uVar4);
  lVar6 = *(long *)(param_2 + 0x20);
  func_0x00010bfd0140(*(undefined8 *)(lVar6 + _DAT_11277e4d0),param_3,lVar6,puVar3,lVar6);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f70b90; end: 108f70b9f; -[SCUnifiedProfileHeaderIconView actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f70b90(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277e4d0);
}



/* Entry: 108f70ba0; end: 108f70bdf; -[SCUnifiedProfileHeaderIconView setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f70ba0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277e4d0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f70be0; end: 108f70bef; -[SCUnifiedProfileHeaderIconView viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f70be0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277e4cc);
}



/* Entry: 108f70bf0; end: 108f70c4f; -[SCUnifiedProfileHeaderIconView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f70bf0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277e4cc,0);
  _objc_storeStrong(param_1 + _DAT_11277e4d0,0);
  _objc_storeStrong(param_1 + _DAT_11277e4c4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277e4c8,0);
  return;
}



/* Entry: 108f70c50; end: 108f70f13; -[SCUnifiedProfileHeaderView initWithCornerViewHeight:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108f70c50(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar2 = &uStack_60;
  puStack_58 = PTR_PTR_1126ff678;
  uStack_60 = param_2;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar2);
    _objc_release(puVar3);
    *(undefined8 *)((long)puVar2 + (long)_DAT_11277e4d4) = param_1;
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_new();
    lVar8 = (long)_DAT_11277e4d8;
    uVar5 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined **)((long)puVar2 + lVar8) = puVar3;
    _objc_release(uVar5);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23bb00(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar2 + lVar8));
    _objc_release(puVar3);
    uVar5 = *(undefined8 *)((long)puVar2 + lVar8);
    func_0x00010c08c0e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe7a0(0,0x4000000000000000);
    _objc_release(uVar5);
    uVar1 = 0;
    if (lRam00000001138466f0 < 3) {
      uVar1 = 0x3dcccccd;
    }
    uVar5 = *(undefined8 *)((long)puVar2 + lVar8);
    func_0x00010c08c0e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe800(uVar1);
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)((long)puVar2 + lVar8);
    func_0x00010c08c0e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe840(0x4020000000000000);
    _objc_release(uVar5);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uVar5 = *(undefined8 *)((long)puVar2 + lVar8);
    func_0x00010c08c0e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe740();
    _objc_release(uVar5);
    _objc_release(puVar3);
    uVar4 = *(undefined8 *)((long)puVar2 + lVar8);
    func_0x00010c1677c0(0,uVar4);
    puVar3 = PTR__OBJC_CLASS___UIButton_1126aec48;
    func_0x00010b87f3b0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf833a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc2640();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = (long)_DAT_11277e4dc;
    uVar6 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined **)((long)puVar2 + lVar8) = puVar3;
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    func_0x00010c1a8c60(0xc039000000000000,0xc039000000000000,0xc039000000000000,0xc039000000000000,
                        *(undefined8 *)((long)puVar2 + lVar8));
    func_0x00010c160fc0(*(undefined8 *)((long)puVar2 + lVar8));
    puVar3 = PTR_PTR_1126dcb88;
    _objc_opt_new();
    lVar7 = (long)_DAT_11277e4e0;
    uVar5 = *(undefined8 *)((long)puVar2 + lVar7);
    *(undefined **)((long)puVar2 + lVar7) = puVar3;
    _objc_release(uVar5);
    func_0x00010c1a7f60(*(undefined8 *)((long)puVar2 + lVar7));
    func_0x00010befbb60(puVar2);
    func_0x00010befbb60(puVar2);
    func_0x00010befbb60(puVar2);
    func_0x00010befbd60(*(undefined8 *)((long)puVar2 + lVar8));
  }
  return (undefined1 *)puVar2;
}



/* Entry: 108f70f14; end: 108f71203; -[SCUnifiedProfileHeaderView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f70f14(undefined8 param_1,undefined8 param_2,undefined8 param_3,double param_4,
                  long param_5)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  long lStack_80;
  undefined *puStack_78;
  
  puStack_78 = PTR_PTR_1126ff678;
  lStack_80 = param_5;
  _objc_msgSendSuper2(&lStack_80,PTR_s_layoutSubviews_112600e60);
  lVar2 = (long)_DAT_11277e4d4;
  uVar10 = *(undefined8 *)(param_5 + lVar2);
  func_0x00010bf20c00(param_5);
  func_0x00010bf20c00(param_5);
  param_4 = param_4 - *(double *)(param_5 + lVar2);
  lVar2 = (long)_DAT_11277e4d8;
  dVar6 = 0.0;
  func_0x00010c19f0e0(0,uVar10,param_3,param_4,*(undefined8 *)(param_5 + lVar2));
  uVar10 = *(undefined8 *)(param_5 + lVar2);
  func_0x00010c08c0e0(uVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c22a0e0();
  _objc_release(uVar10);
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar2));
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar2));
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf199c0(0,dVar6 * 1.5,param_3,param_4 - dVar6 * 1.5,
                      PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc1040();
  uVar10 = *(undefined8 *)(param_5 + lVar2);
  func_0x00010c08c0e0(uVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe820();
  _objc_release(uVar10);
  _objc_release(puVar1);
  lVar2 = (long)_DAT_11277e4dc;
  dVar7 = 1.79769313486232e+308;
  dVar9 = 1.79769313486232e+308;
  func_0x00010c23d5a0(0x7fefffffffffffff,0x7fefffffffffffff,*(undefined8 *)(param_5 + lVar2));
  dVar6 = dVar7;
  func_0x00010bf20c00(param_5);
  _CGRectGetMidY();
  dVar8 = 20.0;
  func_0x00010c19f0e0(0x4034000000000000,dVar6 + dVar9 * -0.5,dVar7,dVar9,
                      *(undefined8 *)(param_5 + lVar2));
  func_0x00010bf20c00(param_5);
  _CGRectGetMaxX();
  dVar6 = dVar8 + -20.0;
  lVar4 = (long)_DAT_11277e4e4;
  func_0x00010c0699c0(*(undefined8 *)(param_5 + lVar4));
  func_0x00010c202c80(*(undefined8 *)(param_5 + lVar4));
  func_0x00010c1ba100(dVar6 - dVar8,*(undefined8 *)(param_5 + lVar4));
  func_0x00010bf20c00(param_5);
  _CGRectGetMidY();
  func_0x00010c17a860(*(undefined8 *)(param_5 + lVar4));
  lVar2 = (long)_DAT_11277e4e0;
  uVar10 = *(undefined8 *)(param_5 + lVar2);
  func_0x00010bf20c00(param_5);
  func_0x00010c23d5a0(dVar7,dVar9,uVar10);
  lVar5 = (long)_DAT_11277e4e8;
  dVar6 = dVar7;
  if (*(long *)(param_5 + lVar5) != 0) {
    func_0x00010c08e360(*(undefined8 *)(param_5 + lVar4));
    dVar8 = dVar6 + -12.0;
    func_0x00010c0699c0(*(undefined8 *)(param_5 + lVar5));
    func_0x00010c202c80(*(undefined8 *)(param_5 + lVar5));
    func_0x00010c1ba100(dVar8 - dVar6,*(undefined8 *)(param_5 + lVar5));
    func_0x00010bf20c00(param_5);
    _CGRectGetMidY();
    func_0x00010c17a860(*(undefined8 *)(param_5 + lVar5));
    iVar3 = (int)((dVar7 - dVar6) + -8.0);
    func_0x00010c08d140(*(undefined8 *)(param_5 + lVar2));
    dVar8 = 1.79769313486232e+308;
    dVar6 = 0.0;
    func_0x00010c26c660(0,0,0x7fefffffffffffff,dVar9,*(undefined8 *)(param_5 + lVar2));
    if (dVar8 <= 0.0) goto LAB_108f711ac;
    func_0x00010c08e420(*(undefined8 *)(param_5 + lVar2));
    dVar6 = dVar8 + dVar6;
    if ((double)iVar3 < dVar6) goto LAB_108f711ac;
  }
  iVar3 = (int)dVar7;
LAB_108f711ac:
  func_0x00010bf20c00(param_5);
  _CGRectGetMidX();
  func_0x00010c19f0e0(dVar6 + dVar7 * -0.5,*(double *)(param_5 + _DAT_11277e4ec) - dVar9,
                      (double)iVar3,dVar9,*(undefined8 *)(param_5 + lVar2));
  return;
}



/* Entry: 108f71204; end: 108f7127b; -[SCUnifiedProfileHeaderView setBackgroundColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f71204(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_s_setBackgroundColor__112639330;
  puStack_38 = PTR_PTR_1126ff678;
  lStack_40 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_40,puVar1,param_3);
  func_0x00010c16e440(*(undefined8 *)(param_1 + _DAT_11277e4d8));
  _objc_release(param_3);
  return;
}



/* Entry: 108f7127c; end: 108f713ff; -[SCUnifiedProfileHeaderView setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f7127c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_11277e4f0;
  uVar4 = *(ulong *)(param_1 + lVar5);
  _objc_retain(param_3);
  _objc_retain(uVar4);
  if (param_3 == uVar4) {
    _objc_release(uVar4);
    _objc_release(param_3);
  }
  else {
    if (uVar4 == 0) {
      _objc_release();
    }
    else {
      uVar1 = param_3;
      func_0x00010c071ae0();
      _objc_release(uVar4);
      _objc_release(param_3);
      if ((uVar1 & 1) != 0) goto LAB_108f713e8;
    }
    puVar2 = PTR_PTR_1126dcb90;
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
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(ulong *)(param_1 + lVar5) = param_3;
    _objc_release(uVar3);
    uVar1 = uVar4;
    func_0x00010bf866e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2226c0(*(undefined8 *)(param_1 + _DAT_11277e4e0));
    _objc_release(uVar1);
    uVar1 = uVar4;
    func_0x00010bfe54a0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bedeb00(param_1);
    _objc_release(uVar1);
    uVar1 = uVar4;
    func_0x00010c22a820(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    func_0x00010bedfd00(param_1);
    _objc_release(uVar1);
    func_0x00010c1cbe20(param_1);
  }
LAB_108f713e8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f71400; end: 108f714cb; +[SCUnifiedProfileHeaderView sizeWithViewModel:constrainedToSize:] */

undefined1  [16]
FUN_108f71400(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126dcb90;
  _objc_opt_class(PTR_PTR_1126dcb90);
  uVar3 = param_5;
  _objc_opt_isKindOfClass(param_5,puVar2);
  uVar1 = param_5;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  puVar2 = PTR_PTR_1126dcb88;
  if (uVar1 == 0) {
    param_1 = *(undefined8 *)PTR__CGSizeZero_110347620;
    param_2 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
  }
  else {
    uVar3 = param_5;
    func_0x00010bf866e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d6e0(param_1,param_2,puVar2);
    _objc_release(uVar3);
  }
  _objc_release(uVar1);
  _objc_release(param_5);
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 108f714cc; end: 108f7151f; -[SCUnifiedProfileHeaderView setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f714cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010c161980(*(undefined8 *)(param_1 + _DAT_11277e4e0),param_2,param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277e4f4);
  *(undefined8 *)(param_1 + _DAT_11277e4f4) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f71520; end: 108f71607; -[SCUnifiedProfileHeaderView setDisplayTitleBottomY:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f71520(double param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  
  lVar3 = (long)_DAT_11277e4e0;
  uVar1 = *(undefined8 *)(param_5 + lVar3);
  func_0x00010bf20c00();
  func_0x00010c23d5a0(uVar1);
  func_0x00010bf20c00(param_5);
  _CGRectGetMaxY();
  dVar5 = param_4 + param_3;
  func_0x00010bf20c00(param_5);
  _CGRectGetMidY();
  param_3 = param_4 * 0.5 + param_3;
  dVar4 = param_3;
  if (param_3 <= param_1) {
    dVar4 = param_1;
  }
  lVar2 = (long)_DAT_11277e4ec;
  *(double *)(param_5 + lVar2) = dVar4;
  func_0x00010c1a7f60(*(undefined8 *)(param_5 + lVar3));
  dVar5 = dVar5 / (dVar5 - param_3) + *(double *)(param_5 + lVar2) * (1.0 / (param_3 - dVar5));
  dVar4 = 1.0;
  if (dVar5 <= 1.0) {
    dVar4 = dVar5;
  }
  dVar5 = 0.0;
  if (0.0 <= dVar4) {
    dVar5 = dVar4;
  }
  func_0x00010c1677c0(dVar5,*(undefined8 *)(param_5 + _DAT_11277e4d8));
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_5,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 108f71608; end: 108f71643; -[SCUnifiedProfileHeaderView _handleDismissTap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f71608(long param_1)

{
  param_1 = param_1 + _DAT_11277e4f8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c280000();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108f71644; end: 108f716cf; -[SCUnifiedProfileHeaderView _updateRightIconView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f71644(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_11277e4e4;
  lVar1 = *(long *)(param_1 + lVar3);
  if (param_3 == 0) {
    if (lVar1 == 0) goto LAB_108f716b4;
    func_0x00010c12c960();
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = 0;
  }
  else {
    if (lVar1 != 0) {
LAB_108f716b4:
      func_0x00010c2226c0(lVar1,param_2,param_3);
      goto LAB_108f716bc;
    }
    lVar1 = param_1;
    func_0x00010bdd6340(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(long *)(param_1 + lVar3) = lVar1;
  }
  _objc_release(uVar2);
LAB_108f716bc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f716d0; end: 108f7175b; -[SCUnifiedProfileHeaderView _updateShareIconView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f716d0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_11277e4e8;
  lVar1 = *(long *)(param_1 + lVar3);
  if (param_3 == 0) {
    if (lVar1 == 0) goto LAB_108f71740;
    func_0x00010c12c960();
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = 0;
  }
  else {
    if (lVar1 != 0) {
LAB_108f71740:
      func_0x00010c2226c0(lVar1,param_2,param_3);
      goto LAB_108f71748;
    }
    lVar1 = param_1;
    func_0x00010bdd6340(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(long *)(param_1 + lVar3) = lVar1;
  }
  _objc_release(uVar2);
LAB_108f71748:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f7175c; end: 108f717ff; -[SCUnifiedProfileHeaderView _buildHeaderIconViewWithViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f7175c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126dcb98;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c2226c0();
  _objc_release(param_3);
  func_0x00010c161980(puVar1,param_2,*(undefined8 *)(param_1 + _DAT_11277e4f4));
  func_0x00010befbb60(param_1,param_2,puVar1);
  func_0x00010c199280(0xc039000000000000,0xc039000000000000,0xc039000000000000,0xc039000000000000,
                      puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108f71800; end: 108f7180f; -[SCUnifiedProfileHeaderView actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f71800(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277e4f4);
}



/* Entry: 108f71810; end: 108f7181f; -[SCUnifiedProfileHeaderView viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f71810(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277e4f0);
}



/* Entry: 108f71820; end: 108f7183f; -[SCUnifiedProfileHeaderView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f71820(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277e4f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108f71840; end: 108f71853; -[SCUnifiedProfileHeaderView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f71840(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277e4f8,param_3);
  return;
}



/* Entry: 108f71854; end: 108f71863; -[SCUnifiedProfileHeaderView displayTitleBottomY] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f71854(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277e4ec);
}



/* Entry: 108f71864; end: 108f718ff; -[SCUnifiedProfileHeaderView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f71864(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11277e4f8);
  _objc_storeStrong(param_1 + _DAT_11277e4f0,0);
  _objc_storeStrong(param_1 + _DAT_11277e4f4,0);
  _objc_storeStrong(param_1 + _DAT_11277e4e8,0);
  _objc_storeStrong(param_1 + _DAT_11277e4e4,0);
  _objc_storeStrong(param_1 + _DAT_11277e4e0,0);
  _objc_storeStrong(param_1 + _DAT_11277e4dc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277e4d8,0);
  return;
}



/* Entry: 108f71900; end: 108f71937;  */

void FUN_108f71900(long param_1)

{
  if (param_1 == 1) {
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110f11f58,0);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108f71938; end: 108f7194b;  */

undefined ** FUN_108f71938(long param_1)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f11f78;
  if (param_1 != 1) {
    ppuVar1 = (undefined **)0x0;
  }
  return ppuVar1;
}



/* Entry: 108f7194c; end: 108f71a87; -[SCProfileSectionButtonAccessoryHeaderView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108f7194c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar2 = &uStack_50;
  puStack_48 = PTR_PTR_1126ff680;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithFrame__1125e2948);
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = PTR_PTR_1126dcba0;
    _objc_opt_new();
    uVar5 = *(undefined8 *)((long)puVar2 + (long)_DAT_11277e4fc);
    *(undefined **)((long)puVar2 + (long)_DAT_11277e4fc) = puVar3;
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126b56f8;
    _objc_opt_new();
    lVar6 = (long)_DAT_11277e500;
    uVar5 = *(undefined8 *)((long)puVar2 + lVar6);
    *(undefined **)((long)puVar2 + lVar6) = puVar3;
    _objc_release(uVar5);
    puVar3 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    func_0x00010c050900();
    func_0x00010bef9040(*(undefined8 *)((long)puVar2 + lVar6));
    puVar4 = PTR_PTR_1126c51b8;
    _objc_alloc();
    func_0x00010c04eae0();
    uVar5 = *(undefined8 *)((long)puVar2 + (long)_DAT_11277e504);
    *(undefined **)((long)puVar2 + (long)_DAT_11277e504) = puVar4;
    _objc_release(uVar5);
    func_0x00010befbb60(puVar2);
    func_0x00010befbb60(puVar2);
    func_0x00010befbb60(puVar2);
    puVar1 = (undefined8 *)((long)puVar2 + (long)_DAT_11277e508);
    uVar5 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar8 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    uVar7 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    puVar1[1] = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    *puVar1 = uVar5;
    puVar1[3] = uVar8;
    puVar1[2] = uVar7;
    _objc_release(puVar3);
  }
  return (undefined1 *)puVar2;
}



/* Entry: 108f71a88; end: 108f71b73; -[SCProfileSectionButtonAccessoryHeaderView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f71a88(ulong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  ulong uStack_48;
  
  puVar1 = (undefined8 *)(param_1 + (long)_DAT_11277e508);
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  uVar2 = param_1;
  _CGRectEqualToRect();
  if ((int)uVar2 != 0) {
    uVar2 = param_1;
    func_0x00010bf20c00();
    _CGRectEqualToRect();
    if ((uVar2 & 1) == 0) {
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uVar3 = 0xc2000000;
      uStack_60 = 0xc2000000;
      pcStack_58 = FUN_108f71b74;
      puStack_50 = &UNK_110842e18;
      uStack_48 = param_1;
      func_0x00010c0f9680(PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_68);
      goto LAB_108f71b4c;
    }
  }
  func_0x00010c1144c0(param_1);
LAB_108f71b4c:
  func_0x00010bf20c00(param_1);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  puVar1[2] = uVar5;
  puVar1[3] = uVar6;
  return;
}



/* Entry: 108f71b74; end: 108f71b7b;  */

void FUN_108f71b74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1144d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_proceedLayoutChanges_112622b50);
  return;
}



/* Entry: 108f71b7c; end: 108f71cdf; -[SCProfileSectionButtonAccessoryHeaderView proceedLayoutChanges] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f71b7c(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  long lStack_80;
  undefined *puStack_78;
  
  puStack_78 = PTR_PTR_1126ff680;
  lStack_80 = param_5;
  _objc_msgSendSuper2(&lStack_80,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_5);
  lVar2 = (long)_DAT_11277e4fc;
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar2));
  lVar3 = (long)_DAT_11277e500;
  uVar1 = *(undefined8 *)(param_5 + lVar3);
  func_0x00010bf20c00(param_5);
  func_0x00010c23d5a0(param_3,param_4,uVar1);
  dVar4 = param_3;
  func_0x00010bf20c00(param_5);
  _CGRectGetMaxX();
  dVar4 = dVar4 + -16.0;
  dVar7 = dVar4 - param_3;
  func_0x00010bfdfc80(*(undefined8 *)(param_5 + lVar2));
  dVar4 = dVar4 - param_4 * 0.5;
  dVar6 = param_3;
  func_0x00010b8166f8(dVar7,dVar4,param_3,param_4,param_5);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar3));
  lVar3 = (long)_DAT_11277e504;
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar3));
  dVar5 = dVar6 * 0.5;
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar3));
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar3));
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar3));
  func_0x00010b816528((param_3 + dVar7) - dVar5,dVar4 - param_4 * 0.5,dVar6);
  func_0x00010b8166f8(param_5);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar3));
  func_0x00010c08d140(*(undefined8 *)(param_5 + lVar2));
  func_0x00010c08d140(*(undefined8 *)(param_5 + lVar3));
  return;
}



/* Entry: 108f71ce0; end: 108f71e77; -[SCProfileSectionButtonAccessoryHeaderView setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f71ce0(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar6 = (long)_DAT_11277e50c;
  uVar5 = *(ulong *)(param_1 + lVar6);
  _objc_retain(param_3);
  _objc_retain(uVar5);
  uVar3 = param_3;
  if (param_3 == uVar5) {
    _objc_release(uVar5);
  }
  else {
    if (uVar5 == 0) {
      _objc_release();
    }
    else {
      uVar1 = param_3;
      func_0x00010c071ae0();
      _objc_release(uVar5);
      _objc_release(param_3);
      if ((uVar1 & 1) != 0) goto LAB_108f71e60;
    }
    puVar2 = PTR_PTR_1126cc4a0;
    _objc_retain(param_3);
    _objc_opt_class(puVar2);
    uVar1 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    uVar5 = param_3;
    if ((uVar1 & 1) == 0) {
      uVar5 = 0;
    }
    _objc_retain(uVar5);
    _objc_release(param_3);
    if (uVar5 == 0) {
      uVar3 = 0;
    }
    else {
      uVar5 = param_3;
      func_0x00010bf51e00();
      uVar4 = *(undefined8 *)(param_1 + lVar6);
      *(ulong *)(param_1 + lVar6) = uVar5;
      _objc_release(uVar4);
      func_0x00010c2226c0(*(undefined8 *)(param_1 + _DAT_11277e4fc));
      uVar5 = param_3;
      func_0x00010beed3c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = (long)_DAT_11277e500;
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar6));
      _objc_release(uVar5);
      uVar5 = param_3;
      func_0x00010beed3c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2226c0(*(undefined8 *)(param_1 + lVar6));
      _objc_release(uVar5);
      func_0x00010c236120(param_3);
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11277e504));
      func_0x00010c1cbe20(param_1);
    }
  }
  _objc_release(uVar3);
LAB_108f71e60:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f71e78; end: 108f71f87; +[SCProfileSectionButtonAccessoryHeaderView sizeWithViewModel:constrainedToSize:] */

undefined1  [16]
FUN_108f71e78(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  double dVar6;
  undefined1 auVar7 [16];
  
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126cc4a0;
  _objc_opt_class(PTR_PTR_1126cc4a0);
  uVar3 = param_5;
  _objc_opt_isKindOfClass(param_5,puVar2);
  uVar1 = param_5;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar4 = uVar1;
  func_0x00010beed3c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b1918;
  _objc_opt_class(PTR_PTR_1126b1918);
  uVar5 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar3 = uVar4;
  if ((uVar5 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(uVar4);
  dVar6 = param_2;
  func_0x00010c23d6e0(param_1,PTR_PTR_1126dcba0);
  _objc_release(uVar1);
  func_0x00010c23d6e0(param_1,PTR_PTR_1126b56f8);
  _objc_release(uVar3);
  if (param_2 <= dVar6) {
    param_2 = dVar6;
  }
  _objc_release(param_5);
  auVar7._8_8_ = param_2;
  auVar7._0_8_ = param_1;
  return auVar7;
}



/* Entry: 108f71f88; end: 108f72087; -[SCProfileSectionButtonAccessoryHeaderView _handleButtonTap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f71f88(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  puVar2 = PTR_PTR_1126cc4a0;
  uVar5 = *(ulong *)(param_1 + _DAT_11277e50c);
  _objc_retain(uVar5);
  _objc_opt_class(puVar2);
  uVar3 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar2);
  uVar1 = uVar5;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar5);
  uVar5 = uVar1;
  func_0x00010beed3c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b1918;
  _objc_opt_class(PTR_PTR_1126b1918);
  uVar4 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar2);
  uVar3 = uVar5;
  if ((uVar4 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(uVar5);
  uVar6 = *(undefined8 *)(param_1 + _DAT_11277e510);
  uVar5 = uVar3;
  func_0x00010c0cfdc0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  func_0x00010bfd0140(uVar6);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 108f72088; end: 108f72097; -[SCProfileSectionButtonAccessoryHeaderView actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f72088(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277e510);
}



/* Entry: 108f72098; end: 108f720d7; -[SCProfileSectionButtonAccessoryHeaderView setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f72098(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277e510;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f720d8; end: 108f720e7; -[SCProfileSectionButtonAccessoryHeaderView viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f720d8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277e50c);
}



/* Entry: 108f720e8; end: 108f72157; -[SCProfileSectionButtonAccessoryHeaderView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f720e8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277e50c,0);
  _objc_storeStrong(param_1 + _DAT_11277e510,0);
  _objc_storeStrong(param_1 + _DAT_11277e504,0);
  _objc_storeStrong(param_1 + _DAT_11277e500,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277e4fc,0);
  return;
}



/* Entry: 108f72158; end: 108f721cb; -[SCProfileSectionHeaderSupplementaryViewProvider initWithSectionHeaderViewModel:] */

undefined1 * FUN_108f72158(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ff688;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108f721cc; end: 108f721d3; -[SCProfileSectionHeaderSupplementaryViewProvider sectionHeaderDisplayStrategy] */

undefined8 FUN_108f721cc(void)

{
  return 1;
}



/* Entry: 108f721d4; end: 108f7224b; -[SCProfileSectionHeaderSupplementaryViewProvider referenceSizeForSupplementaryElementOfKind:atIndexInSection:withWidth:] */

undefined1  [16]
FUN_108f721d4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  func_0x00010c0720c0(param_4,param_3,
                      *(undefined8 *)PTR__UICollectionElementKindSectionHeader_110345b00);
  if ((int)param_4 != 0) {
    uVar1 = 0x7fefffffffffffff;
                    /* WARNING: Could not recover jumptable at 0x00010c23d6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,0x7fefffffffffffff,PTR_PTR_1126dcba0,
               PTR_s_sizeWithViewModel_constrainedToS_11266cfe0,*(undefined8 *)(param_2 + 8));
    auVar2._8_8_ = uVar1;
    auVar2._0_8_ = param_1;
    return auVar2;
  }
  return *(undefined1 (*) [16])PTR__CGSizeZero_110347620;
}



/* Entry: 108f7224c; end: 108f72317; -[SCProfileSectionHeaderSupplementaryViewProvider viewClassesForSupplementaryViewsByElementKind] */

void FUN_108f7224c(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_opt_class();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = &puStack_30;
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_30 = puVar1;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    _objc_retain(ppuVar5);
    ppuVar2 = ppuVar5;
    func_0x00010c0720c0();
    if ((int)ppuVar2 == 0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar1 = puVar1 + 0x10;
      _objc_loadWeakRetained();
      puVar3 = puVar1;
      func_0x00010c1565c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      puVar1 = PTR_PTR_1126dcba0;
      _objc_retain(puVar3);
      _objc_opt_class(puVar1);
      puVar4 = puVar3;
      _objc_opt_isKindOfClass(puVar3,puVar1);
      puVar6 = puVar3;
      if (((ulong)puVar4 & 1) == 0) {
        puVar6 = (undefined *)0x0;
      }
      _objc_retain(puVar6);
      _objc_release(puVar3);
      func_0x00010c2226c0(puVar6);
      _objc_release(puVar3);
    }
    _objc_release(ppuVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 108f72318; end: 108f72407; -[SCProfileSectionHeaderSupplementaryViewProvider viewForSupplementaryElementOfKind:atIndexInSection:] */

void FUN_108f72318(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0();
  if ((int)uVar1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = param_1 + 0x10;
    _objc_loadWeakRetained();
    uVar2 = uVar5;
    func_0x00010c1565c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126dcba0;
    _objc_retain(uVar2);
    _objc_opt_class(puVar3);
    uVar4 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    uVar5 = uVar2;
    if ((uVar4 & 1) == 0) {
      uVar5 = 0;
    }
    _objc_retain(uVar5);
    _objc_release(uVar2);
    func_0x00010c2226c0(uVar5);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 108f72408; end: 108f724ef; -[SCProfileSectionHeaderSupplementaryViewProvider updateSectionHeaderViewModel:] */

void FUN_108f72408(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010c071ae0();
  if ((uVar1 & 1) == 0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = param_3;
    _objc_release(uVar2);
    uVar1 = param_1 + 0x10;
    _objc_loadWeakRetained();
    uVar3 = uVar1;
    func_0x00010c1565e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar4 = PTR_PTR_1126dcba0;
    _objc_retain(uVar3);
    _objc_opt_class(puVar4);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    uVar1 = uVar3;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar3);
    func_0x00010c2226c0(uVar1);
    _objc_release(uVar1);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f724f0; end: 108f72507; -[SCProfileSectionHeaderSupplementaryViewProvider supplementaryViewProviderDelegate] */

void FUN_108f724f0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108f72508; end: 108f72513; -[SCProfileSectionHeaderSupplementaryViewProvider setSupplementaryViewProviderDelegate:] */

void FUN_108f72508(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 108f72514; end: 108f7251b; -[SCProfileSectionHeaderSupplementaryViewProvider supplementaryViewModels] */

undefined8 FUN_108f72514(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108f7251c; end: 108f72523; -[SCProfileSectionHeaderSupplementaryViewProvider setSupplementaryViewModels:] */

void FUN_108f7251c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108f72524; end: 108f7255b; -[SCProfileSectionHeaderSupplementaryViewProvider .cxx_destruct] */

void FUN_108f72524(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108f7255c; end: 108f72563; -[SCProfileSectionHeaderView headerLabelCenterY] */

undefined8 FUN_108f7255c(void)

{
  return 0x4030000000000000;
}



/* Entry: 108f72564; end: 108f7288f; -[SCProfileSectionHeaderView setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f72564(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar15 = (long)_DAT_11277e520;
  uVar14 = *(ulong *)(param_1 + lVar15);
  _objc_retain(param_3);
  _objc_retain(uVar14);
  uVar11 = param_3;
  if (param_3 == uVar14) {
    _objc_release(uVar14);
  }
  else {
    if (uVar14 == 0) {
      _objc_release();
    }
    else {
      uVar1 = param_3;
      func_0x00010c071ae0();
      _objc_release(uVar14);
      _objc_release(param_3);
      if ((uVar1 & 1) != 0) goto LAB_108f7284c;
    }
    puVar2 = PTR_PTR_1126cc4a0;
    _objc_retain(param_3);
    _objc_opt_class(puVar2);
    uVar14 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    if ((uVar14 & 1) == 0) {
      uVar11 = 0;
    }
    _objc_retain(uVar11);
    _objc_release(param_3);
    if (uVar11 != 0) {
      uVar14 = param_3;
      func_0x00010bf51e00();
      uVar13 = *(undefined8 *)(param_1 + lVar15);
      *(ulong *)(param_1 + lVar15) = uVar14;
      _objc_release(uVar13);
      uVar14 = param_3;
      func_0x00010bfe0000(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar15 = param_1;
      func_0x00010c27f7c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216240();
      _objc_release(lVar15);
      _objc_release(uVar14);
      lVar15 = param_1;
      func_0x00010c27f7c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c160fc0();
      _objc_release(lVar15);
      uVar14 = param_3;
      func_0x00010bfe0000(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar15 = param_1;
      func_0x00010c27f7c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c161020();
      _objc_release(lVar15);
      _objc_release(uVar14);
      puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      lVar15 = param_1;
      func_0x00010c27f7c0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar15;
      func_0x00010c08e400();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_1;
      func_0x00010c08e400(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar3;
      func_0x00010bf493c0(0x4030000000000000);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_1;
      func_0x00010c27f7c0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010c1408a0();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = param_1;
      func_0x00010c1408a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar7;
      func_0x00010bf493c0(0x4030000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar2);
      _objc_release(puVar10);
      _objc_release(lVar9);
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar15);
      func_0x00010c1cbe20(param_1);
    }
  }
  _objc_release(uVar11);
LAB_108f7284c:
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
    ___stack_chk_fail();
    return;
  }
  return;
}



/* Entry: 108f72890; end: 108f7289b; +[SCProfileSectionHeaderView sizeWithViewModel:constrainedToSize:] */

void FUN_108f72890(void)

{
  return;
}



/* Entry: 108f7289c; end: 108f728ab; -[SCProfileSectionHeaderView viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f7289c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277e520);
}



/* Entry: 108f728ac; end: 108f728bf; -[SCProfileSectionHeaderView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f728ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277e520,0);
  return;
}



/* Entry: 108f728c0; end: 108f7290f;  */

void FUN_108f728c0(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cc4a0;
  _objc_retain();
  _objc_alloc(puVar1);
  func_0x00010c01a0a0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108f72910; end: 108f72adf;  */

void FUN_108f72910(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  _objc_retain(param_4);
  _objc_retain(param_2);
  _objc_retain(param_1);
  func_0x00010c23bb00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23bb00(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b0c40;
  func_0x00010bfe7aa0(0x4038000000000000,0x4038000000000000,PTR_PTR_1126b0c40);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126d5c58;
  _objc_alloc();
  func_0x00010c007c00(0x4026000000000000,0x4022000000000000,0,0x4039000000000000,0x4018000000000000,
                      0x4026000000000000,0x4026000000000000);
  puVar5 = PTR_PTR_1126b1918;
  _objc_alloc(PTR_PTR_1126b1918);
  func_0x00010c053140(0,0x4020000000000000,0,0x4020000000000000);
  _objc_release(param_4);
  _objc_release(param_2);
  puVar6 = PTR_PTR_1126cc4a0;
  _objc_alloc(PTR_PTR_1126cc4a0);
  func_0x00010c01a0a0();
  _objc_release(param_1);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 108f72ae0; end: 108f72c63;  */

void FUN_108f72ae0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126d5c58;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_alloc();
  puVar2 = puVar1;
  func_0x000108f7493c();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c007c00(0x4026000000000000,0x4022000000000000,0,0x4039000000000000,0,0,0);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b1918;
  _objc_alloc(PTR_PTR_1126b1918);
  func_0x00010c053140(0,0x4020000000000000,0,0x4020000000000000);
  _objc_release(param_3);
  _objc_release(param_2);
  puVar3 = PTR_PTR_1126cc4a0;
  _objc_alloc(PTR_PTR_1126cc4a0);
  func_0x00010c01a0a0();
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108f72c64; end: 108f72e3b;  */

void FUN_108f72c64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(param_1);
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b0c40;
  func_0x00010bcbeb30();
  func_0x00010bfe7aa0(0x4024000000000000,0x4024000000000000,puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126d5c58;
  _objc_alloc();
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c007c00(0x4028000000000000,0,0,0x4039000000000000,0,0x4024000000000000,
                      0x4024000000000000);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126b1918;
  _objc_alloc(PTR_PTR_1126b1918);
  func_0x00010c053140(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18));
  _objc_release(param_3);
  _objc_release(param_2);
  puVar5 = PTR_PTR_1126cc4a0;
  _objc_alloc(PTR_PTR_1126cc4a0);
  func_0x00010c01a0a0();
  _objc_release(param_1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108f72e3c; end: 108f735d7;  */

undefined ** FUN_108f72e3c(double param_1,double param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  uint uVar13;
  undefined **ppuVar14;
  undefined **ppuStack_680;
  undefined **ppuStack_678;
  undefined **ppuStack_670;
  undefined **ppuStack_668;
  undefined **ppuStack_660;
  undefined **ppuStack_658;
  undefined **ppuStack_650;
  undefined **ppuStack_648;
  undefined **ppuStack_640;
  undefined **ppuStack_638;
  undefined **ppuStack_630;
  undefined **ppuStack_628;
  undefined **ppuStack_620;
  undefined **ppuStack_618;
  undefined **ppuStack_610;
  undefined **ppuStack_608;
  undefined **ppuStack_600;
  undefined **ppuStack_5f8;
  undefined **ppuStack_5f0;
  undefined **ppuStack_5e8;
  undefined **ppuStack_5e0;
  undefined **ppuStack_5d8;
  undefined **ppuStack_5d0;
  undefined **ppuStack_5c8;
  undefined **ppuStack_5c0;
  undefined **ppuStack_5b8;
  undefined **ppuStack_5b0;
  undefined **ppuStack_5a8;
  undefined **ppuStack_5a0;
  undefined **ppuStack_598;
  undefined **ppuStack_590;
  undefined **ppuStack_588;
  undefined **ppuStack_580;
  undefined **ppuStack_578;
  undefined **ppuStack_570;
  undefined **ppuStack_568;
  undefined **ppuStack_560;
  undefined **ppuStack_558;
  undefined **ppuStack_550;
  undefined **ppuStack_548;
  undefined **ppuStack_540;
  undefined **ppuStack_538;
  undefined **ppuStack_530;
  undefined **ppuStack_528;
  undefined **ppuStack_520;
  undefined **ppuStack_518;
  undefined **ppuStack_510;
  undefined **ppuStack_508;
  undefined **ppuStack_500;
  undefined **ppuStack_4f8;
  undefined **ppuStack_4f0;
  undefined **ppuStack_4e8;
  undefined **ppuStack_4e0;
  undefined **ppuStack_4d8;
  undefined **ppuStack_4d0;
  undefined **ppuStack_4c8;
  undefined **ppuStack_4c0;
  undefined **ppuStack_4b8;
  undefined **ppuStack_4b0;
  undefined **ppuStack_4a8;
  undefined **ppuStack_4a0;
  undefined **ppuStack_498;
  undefined **ppuStack_490;
  undefined **ppuStack_488;
  undefined **ppuStack_480;
  undefined **ppuStack_478;
  undefined **ppuStack_470;
  undefined **ppuStack_468;
  undefined **ppuStack_460;
  undefined **ppuStack_458;
  undefined **ppuStack_450;
  undefined **ppuStack_448;
  undefined **ppuStack_440;
  undefined **ppuStack_438;
  undefined **ppuStack_430;
  undefined **ppuStack_428;
  undefined **ppuStack_420;
  undefined **ppuStack_418;
  undefined **ppuStack_410;
  undefined **ppuStack_408;
  undefined **ppuStack_400;
  undefined *puStack_3f8;
  undefined *puStack_3f0;
  undefined *puStack_3e8;
  undefined *puStack_3e0;
  undefined *puStack_3d8;
  undefined *puStack_3d0;
  undefined *puStack_3c8;
  long lStack_3c0;
  undefined **ppuStack_3b0;
  undefined **ppuStack_3a8;
  undefined *puStack_3a0;
  undefined *puStack_398;
  undefined *puStack_390;
  undefined *puStack_388;
  undefined **ppuStack_380;
  undefined **ppuStack_378;
  undefined **ppuStack_370;
  undefined **ppuStack_368;
  undefined1 *puStack_360;
  undefined8 uStack_358;
  undefined *puStack_350;
  undefined *puStack_348;
  undefined *puStack_340;
  undefined **ppuStack_338;
  undefined **ppuStack_330;
  undefined **ppuStack_328;
  undefined **ppuStack_320;
  undefined **ppuStack_318;
  undefined **ppuStack_310;
  undefined **ppuStack_308;
  undefined **ppuStack_300;
  undefined **ppuStack_2f8;
  undefined **ppuStack_2f0;
  undefined **ppuStack_2e8;
  undefined **ppuStack_2e0;
  undefined **ppuStack_2d8;
  undefined **ppuStack_2d0;
  undefined **ppuStack_2c8;
  undefined **ppuStack_2c0;
  undefined **ppuStack_2b8;
  undefined **ppuStack_2b0;
  undefined **ppuStack_2a8;
  undefined **ppuStack_2a0;
  undefined **ppuStack_298;
  undefined **ppuStack_290;
  undefined **ppuStack_288;
  undefined **ppuStack_280;
  undefined **ppuStack_278;
  undefined **ppuStack_270;
  undefined **ppuStack_268;
  undefined **ppuStack_260;
  undefined **ppuStack_258;
  undefined **ppuStack_250;
  undefined **ppuStack_248;
  undefined **ppuStack_240;
  undefined **ppuStack_238;
  undefined **ppuStack_230;
  undefined **ppuStack_228;
  undefined **ppuStack_220;
  undefined **ppuStack_218;
  undefined **ppuStack_210;
  undefined **ppuStack_208;
  undefined **ppuStack_200;
  undefined **ppuStack_1f8;
  undefined **ppuStack_1f0;
  undefined **ppuStack_1e8;
  undefined **ppuStack_1e0;
  undefined **ppuStack_1d8;
  undefined **ppuStack_1d0;
  undefined **ppuStack_1c8;
  undefined **ppuStack_1c0;
  undefined **ppuStack_1b8;
  undefined **ppuStack_1b0;
  undefined **ppuStack_1a8;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_100 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1068;
  ppuStack_f8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1068;
  ppuStack_f0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1050;
  ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_4,&ppuStack_f8,&ppuStack_100,1)
  ;
  _objc_retainAutoreleasedReturnValue();
  ppuStack_e8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1080;
  ppuStack_120 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1068;
  ppuStack_118 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1050;
  ppuStack_110 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1098;
  ppuStack_108 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d10b0;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  ppuStack_338 = ppuVar2;
  ppuStack_b0 = ppuVar2;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_4,&ppuStack_110,&ppuStack_120,2
                     );
  _objc_retainAutoreleasedReturnValue();
  ppuStack_e0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d10c8;
  ppuStack_150 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1068;
  ppuStack_148 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1050;
  ppuStack_138 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d10e0;
  ppuStack_130 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1068;
  ppuStack_140 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1080;
  ppuStack_128 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d10f8;
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_340 = puVar3;
  puStack_a8 = puVar3;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_4,&ppuStack_138,&ppuStack_150,3
                     );
  _objc_retainAutoreleasedReturnValue();
  ppuStack_d8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1110;
  ppuStack_190 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1068;
  ppuStack_188 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1050;
  ppuStack_170 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1128;
  ppuStack_168 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1140;
  ppuStack_180 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1080;
  ppuStack_178 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d10c8;
  ppuStack_160 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1158;
  ppuStack_158 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1170;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_348 = puVar4;
  puStack_a0 = puVar4;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_4,&ppuStack_170,&ppuStack_190,4
                     );
  _objc_retainAutoreleasedReturnValue();
  ppuStack_d0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1188;
  ppuStack_1e0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1068;
  ppuStack_1d8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1050;
  ppuStack_1b8 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111185af0;
  ppuStack_1b0 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111185b00;
  ppuStack_1d0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1080;
  ppuStack_1c8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d10c8;
  ppuStack_1a8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1068;
  ppuStack_1a0 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111185b10;
  ppuStack_1c0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1110;
  ppuStack_198 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111185b20;
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_350 = puVar3;
  puStack_98 = puVar3;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_4,&ppuStack_1b8,&ppuStack_1e0,5
                     );
  _objc_retainAutoreleasedReturnValue();
  ppuStack_c8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d11a0;
  ppuStack_240 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1068;
  ppuStack_238 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1050;
  ppuStack_210 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111185b30;
  ppuStack_208 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111185b40;
  ppuStack_230 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1080;
  ppuStack_228 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d10c8;
  ppuStack_200 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111185b50;
  ppuStack_1f8 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111185b60;
  ppuStack_220 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1110;
  ppuStack_218 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1188;
  ppuStack_1f0 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111185b70;
  ppuStack_1e8 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111185b80;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_90 = puVar4;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_4,&ppuStack_210,&ppuStack_240,6
                     );
  _objc_retainAutoreleasedReturnValue();
  ppuStack_c0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d11b8;
  ppuStack_2b0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1068;
  ppuStack_2a8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1050;
  ppuStack_278 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111185b90;
  ppuStack_270 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111185ba0;
  ppuStack_2a0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1080;
  ppuStack_298 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d10c8;
  ppuStack_268 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111185bb0;
  ppuStack_260 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1068;
  ppuStack_290 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1110;
  ppuStack_288 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1188;
  ppuStack_258 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111185bc0;
  ppuStack_250 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111185bd0;
  ppuStack_280 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d11a0;
  ppuStack_248 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111185be0;
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_88 = puVar3;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_4,&ppuStack_278,&ppuStack_2b0,7
                     );
  _objc_retainAutoreleasedReturnValue();
  ppuStack_b8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d11d0;
  ppuStack_330 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1068;
  ppuStack_328 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1050;
  ppuStack_2f0 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111185bf0;
  ppuStack_2e8 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111185c00;
  ppuStack_320 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1080;
  ppuStack_318 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d10c8;
  ppuStack_2e0 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111185c10;
  ppuStack_2d8 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111185c20;
  ppuStack_310 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1110;
  ppuStack_308 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1188;
  ppuStack_2d0 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111185c30;
  ppuStack_2c8 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111185c40;
  ppuStack_300 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d11a0;
  ppuStack_2f8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d11b8;
  ppuStack_2c0 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111185c50;
  ppuStack_2b8 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111185c60;
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_80 = puVar5;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_4,&ppuStack_2f0,&ppuStack_330,8
                     );
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_78 = puVar6;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_4,&ppuStack_b0,&ppuStack_f0,8);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam0000000113730458;
  puRam0000000113730458 = puVar7;
  _objc_release(uVar1);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(puStack_350);
  _objc_release(puStack_348);
  _objc_release(puStack_340);
  ppuVar2 = ppuStack_338;
  _objc_release(ppuStack_338);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return ppuVar2;
  }
  ___stack_chk_fail();
  ppuStack_3b0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1068;
  ppuStack_3a8 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
  ppuStack_380 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1188;
  ppuStack_378 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1110;
  ppuStack_370 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d10c8;
  ppuStack_368 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1080;
  uStack_358 = 0x108f7325c;
  lStack_3c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_450 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1068;
  ppuStack_448 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111185c70;
  ppuStack_440 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1050;
  ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_3a0 = puVar6;
  puStack_398 = puVar5;
  puStack_390 = puVar3;
  puStack_388 = puVar4;
  puStack_360 = &stack0xfffffffffffffff0;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_4,&ppuStack_448,&ppuStack_450,1
                     );
  _objc_retainAutoreleasedReturnValue();
  ppuStack_438 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1080;
  ppuStack_470 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1068;
  ppuStack_468 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1050;
  ppuStack_460 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111185c70;
  ppuStack_458 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111185c70;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  ppuStack_400 = ppuVar8;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_4,&ppuStack_460,&ppuStack_470,2
                     );
  _objc_retainAutoreleasedReturnValue();
  ppuStack_430 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d10c8;
  ppuStack_4a0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1068;
  ppuStack_498 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1050;
  ppuStack_488 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111185c80;
  ppuStack_480 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111185c70;
  ppuStack_490 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1080;
  ppuStack_478 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111185c80;
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_3f8 = puVar3;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_4,&ppuStack_488,&ppuStack_4a0,3
                     );
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1110;
  ppuStack_428 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1110;
  ppuStack_4e0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1068;
  ppuStack_4d8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1050;
  ppuStack_4c0 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111185c80;
  ppuStack_4b8 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111185c70;
  ppuStack_4d0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1080;
  ppuStack_4c8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d10c8;
  ppuStack_4b0 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111185c70;
  ppuStack_4a8 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111185c80;
  puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_3f0 = puVar4;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_4,&ppuStack_4c0,&ppuStack_4e0,4
                     );
  _objc_retainAutoreleasedReturnValue();
  ppuStack_420 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1188;
  ppuStack_530 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1068;
  ppuStack_528 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1050;
  ppuStack_508 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111185c90;
  ppuStack_500 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111185ca0;
  ppuStack_520 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1080;
  ppuStack_518 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d10c8;
  ppuStack_4f8 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111185cb0;
  ppuStack_4f0 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111185ca0;
  ppuStack_510 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1110;
  ppuStack_4e8 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111185c90;
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_3e8 = puVar7;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_4,&ppuStack_508,&ppuStack_530,5
                     );
  _objc_retainAutoreleasedReturnValue();
  ppuStack_418 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d11a0;
  ppuStack_590 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1068;
  ppuStack_588 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1050;
  ppuStack_560 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111185cc0;
  ppuStack_558 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111185cd0;
  ppuStack_580 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1080;
  ppuStack_578 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d10c8;
  ppuStack_550 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111185ce0;
  ppuStack_548 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111185ce0;
  ppuStack_570 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1110;
  ppuStack_568 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1188;
  ppuStack_540 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111185cd0;
  ppuStack_538 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111185cc0;
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_3e0 = puVar6;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_4,&ppuStack_560,&ppuStack_590,6
                     );
  _objc_retainAutoreleasedReturnValue();
  ppuStack_410 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d11b8;
  ppuStack_600 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1068;
  ppuStack_5f8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1050;
  ppuStack_5c8 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111185cf0;
  ppuStack_5c0 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111185d00;
  ppuStack_5f0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1080;
  ppuStack_5e8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d10c8;
  ppuStack_5b8 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111185bc0;
  ppuStack_5b0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d11e8;
  ppuStack_5e0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1110;
  ppuStack_5d8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1188;
  ppuStack_5a8 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111185bc0;
  ppuStack_5a0 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111185d00;
  ppuStack_5d0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d11a0;
  ppuStack_598 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111185cf0;
  puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_3d8 = puVar5;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_4,&ppuStack_5c8,&ppuStack_600,7
                     );
  _objc_retainAutoreleasedReturnValue();
  ppuStack_408 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d11d0;
  ppuStack_680 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1068;
  ppuStack_678 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1050;
  ppuStack_640 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d11a0;
  ppuStack_638 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1110;
  ppuStack_670 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1080;
  ppuStack_668 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d10c8;
  ppuStack_630 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1080;
  ppuStack_628 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1068;
  ppuStack_660 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1110;
  ppuStack_658 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1188;
  ppuStack_620 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1068;
  ppuStack_618 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1080;
  ppuStack_650 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d11a0;
  ppuStack_648 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d11b8;
  ppuStack_610 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1110;
  ppuStack_608 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d11a0;
  puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_3d0 = puVar9;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_4,&ppuStack_640,&ppuStack_680,8
                     );
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_3c8 = puVar10;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_4,&ppuStack_400,&ppuStack_440,8
                     );
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam0000000113730468;
  puRam0000000113730468 = puVar11;
  _objc_release(uVar1);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar5);
  _objc_release(puVar6);
  _objc_release(puVar7);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3c0) {
    return ppuVar8;
  }
  ___stack_chk_fail();
  _objc_retain();
  if (ppuVar8 == (undefined **)0x0) {
    ppuVar14 = (undefined **)0x0;
    goto LAB_108f736bc;
  }
  ppuVar12 = ppuVar8;
  _objc_retainAutorelease();
  func_0x00010bdc1020();
  if (ppuVar12 == (undefined **)0x0) {
    ppuVar2 = ppuVar8;
    func_0x00010bdc10e0();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar2 != (undefined **)0x0) goto LAB_108f73620;
    ppuVar14 = (undefined **)0x0;
  }
  else {
LAB_108f73620:
    func_0x00010c23d0a0(ppuVar8);
    uVar13 = (uint)(param_1 != *(double *)PTR__CGSizeZero_110347620);
    if (param_2 != *(double *)(PTR__CGSizeZero_110347620 + 8)) {
      uVar13 = 1;
    }
    ppuVar14 = (undefined **)(ulong)uVar13;
    if (ppuVar12 != (undefined **)0x0) goto LAB_108f736bc;
  }
  _objc_release(ppuVar2);
LAB_108f736bc:
  _objc_release(ppuVar8);
  return ppuVar14;
}



/* Entry: 108f735d8; end: 108f736ef;  */

bool FUN_108f735d8(double param_1,double param_2,long param_3)

{
  long lVar1;
  long unaff_x21;
  bool bVar2;
  
  _objc_retain();
  if (param_3 == 0) {
    bVar2 = false;
    goto LAB_108f736bc;
  }
  lVar1 = param_3;
  _objc_retainAutorelease();
  func_0x00010bdc1020();
  if (lVar1 == 0) {
    unaff_x21 = param_3;
    func_0x00010bdc10e0();
    _objc_retainAutoreleasedReturnValue();
    if (unaff_x21 != 0) goto LAB_108f73620;
    bVar2 = false;
  }
  else {
LAB_108f73620:
    func_0x00010c23d0a0(param_3);
    bVar2 = param_2 != *(double *)(PTR__CGSizeZero_110347620 + 8) ||
            param_1 != *(double *)PTR__CGSizeZero_110347620;
    if (lVar1 != 0) goto LAB_108f736bc;
  }
  _objc_release(unaff_x21);
LAB_108f736bc:
  _objc_release(param_3);
  return bVar2;
}



/* Entry: 108f736f0; end: 108f73a97;  */

void FUN_108f736f0(double param_1,double param_2,ulong param_3)

{
  bool bVar1;
  uint uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  dVar13 = param_1;
  _objc_retain();
  puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  _UIGraphicsBeginImageContextWithOptions(param_1,param_2,dVar13,0);
  _objc_release(puVar3);
  uVar4 = param_3;
  func_0x00010bf529e0();
  if (lRam0000000113730450 != -1) {
    func_0x000107c27d9c(0x113730450,&PTR___NSConcreteGlobalBlock_110acefd8);
  }
  puVar3 = puRam0000000113730458;
  puVar5 = PTR____NSDictionary0__struct_11034ab58;
  if (uVar4 != 0) {
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dff20(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    puVar5 = puVar3;
  }
  puVar3 = PTR____NSDictionary0__struct_11034ab58;
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar7 = puRam0000000113730468;
  if (lRam0000000113730460 != -1) {
    func_0x000107c27d9c(0x113730460,&PTR___NSConcreteGlobalBlock_110aceff8);
    puVar3 = PTR____NSDictionary0__struct_11034ab58;
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puVar7 = puRam0000000113730468;
  }
  PTR____NSDictionary0__struct_11034ab58 = puVar3;
  PTR__OBJC_CLASS___NSNumber_1126ae570 = puVar6;
  puRam0000000113730468 = puVar7;
  if (uVar4 == 0) {
    dVar13 = 31.0;
  }
  else {
    func_0x00010c0df780(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dff20(puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    dVar13 = 0.0;
    puVar3 = puVar7;
    if (uVar4 < 9) {
      dVar13 = 31.0;
      if (4 < uVar4) {
        if (uVar4 == 5) {
          dVar13 = 29.0;
        }
        else if (uVar4 == 7) {
          dVar13 = 25.0;
        }
        else if (uVar4 == 6) {
          dVar13 = 27.5;
        }
        else {
          dVar13 = 22.0;
        }
      }
    }
  }
  uVar4 = param_3;
  func_0x00010bf529e0();
  uVar2 = (int)uVar4 - 1;
  if (-1 < (int)uVar2) {
    dVar14 = (param_1 * dVar13) / 100.0;
    dVar13 = 1.2283105022831051;
    dVar15 = dVar14 * 1.2283105022831051;
    uVar9 = (ulong)uVar2;
    do {
      uVar4 = param_3;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      if ((uVar4 != 0) && (uVar8 = uVar4, FUN_108f735d8(), (int)uVar8 != 0)) {
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar5;
        func_0x00010c0e00e0(puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf885a0();
        dVar10 = dVar13;
        _objc_release(puVar7);
        _objc_release(puVar6);
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar3;
        func_0x00010c0e00e0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf885a0();
        _objc_release(puVar7);
        _objc_release(puVar6);
        dVar12 = 100.0;
        dVar11 = (param_1 * dVar13) / 100.0;
        dVar13 = param_1 * 0.5 + dVar11;
        func_0x00010c23d0a0(uVar4);
        dVar13 = (dVar13 - dVar14 * 0.5) + (dVar14 - dVar11 / (dVar11 / dVar14)) * 0.5;
        func_0x00010bf89920(dVar13,((param_2 - (dVar15 * 0.5 - (dVar15 * dVar10) / 100.0)) -
                                   dVar15 * 0.5) + (dVar15 - dVar12 / (dVar11 / dVar14)) * 0.5,uVar4
                           );
      }
      _objc_release(uVar4);
      bVar1 = 0 < (long)uVar9;
      uVar9 = uVar9 - 1;
    } while (bVar1);
  }
  _UIGraphicsGetImageFromCurrentImageContext();
  _objc_retainAutoreleasedReturnValue();
  _UIGraphicsEndImageContext();
  _objc_release(puVar3);
  _objc_release(puVar5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 108f73a98; end: 108f73b0f; -[SCUnifiedProfileSquadmojiLoggingImageSetter initWithOnFirstFullSquadDraw:] */

undefined1 * FUN_108f73a98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ff690;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108f73b10; end: 108f73b8f; -[SCUnifiedProfileSquadmojiLoggingImageSetter runImageBlock:context:view:] */

void FUN_108f73b10(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  
  pcVar2 = *(code **)(param_3 + 0x10);
  _objc_retain(param_4);
  (*pcVar2)(param_3);
  uVar1 = param_4;
  func_0x00010bfd7d40();
  _objc_release(param_4);
  if (((int)uVar1 != 0) && (*(long *)(param_1 + 8) != 0)) {
    (**(code **)(*(long *)(param_1 + 8) + 0x10))();
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 108f73b90; end: 108f73b9b; -[SCUnifiedProfileSquadmojiLoggingImageSetter .cxx_destruct] */

void FUN_108f73b90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108f73b9c; end: 108f73c5f; -[SCUnifiedProfileSquadmojiView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108f73b9c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126ff698;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277e528);
    *(undefined **)((long)puVar1 + (long)_DAT_11277e528) = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
    func_0x00010c182220(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108f73c60; end: 108f73c7b; -[SCUnifiedProfileSquadmojiView sizeThatFits:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f73c60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23d6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126dcb40,PTR_s_sizeWithViewModel_constrainedToS_11266cfe0,
             *(undefined8 *)(param_1 + _DAT_11277e52c));
  return;
}



/* Entry: 108f73c7c; end: 108f73cb3; -[SCUnifiedProfileSquadmojiView setBitmojiSelfieServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f73c7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277e530);
  *(undefined8 *)(param_1 + _DAT_11277e530) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f73cb4; end: 108f73d17; -[SCUnifiedProfileSquadmojiView setOnFirstFullSquadDraw:] */

void FUN_108f73cb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126dcba8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c031580();
  _objc_release(param_3);
  func_0x00010c1aa9a0(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108f73d18; end: 108f73f1b; -[SCUnifiedProfileSquadmojiView setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f73d18(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  uVar5 = param_3;
  if ((uVar2 & 1) == 0) {
    uVar5 = 0;
  }
  _objc_retain(uVar5);
  _objc_release(param_3);
  uVar2 = uVar5;
  func_0x00010bf529e0();
  uVar3 = uVar5;
  if (8 < uVar2) {
    func_0x00010c25e980();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
  }
  lVar6 = (long)_DAT_11277e52c;
  uVar5 = *(ulong *)(param_1 + lVar6);
  _objc_retain(uVar3);
  _objc_retain(uVar5);
  if (uVar3 == uVar5) {
    _objc_release(uVar5);
    uVar5 = uVar3;
  }
  else {
    if (uVar5 == 0) {
      _objc_release();
    }
    else {
      uVar2 = uVar3;
      func_0x00010c071ae0();
      _objc_release(uVar5);
      _objc_release(uVar3);
      if ((uVar2 & 1) != 0) goto LAB_108f73ed8;
    }
    _objc_retain(uVar3);
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    *(ulong *)(param_1 + lVar6) = uVar3;
    _objc_release(uVar4);
    func_0x00010c1aa620(param_1);
    uVar5 = *(ulong *)(param_1 + _DAT_11277e530);
    _objc_retain(uVar5);
    _objc_initWeak(auStack_48,param_1);
    uVar4 = *(undefined8 *)(param_1 + _DAT_11277e528);
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(uVar3);
    func_0x00010c0f7fc0(uVar4);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(uVar5);
LAB_108f73ed8:
  _objc_release(uVar3);
  _objc_release(param_3);
  return;
}



/* Entry: 108f73f1c; end: 108f73f4f;  */

void FUN_108f73f1c(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be115e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108f73f50; end: 108f73f5f; +[SCUnifiedProfileSquadmojiView sizeWithViewModel:constrainedToSize:] */

void FUN_108f73f50(void)

{
  return;
}



/* Entry: 108f73f60; end: 108f7428f; -[SCUnifiedProfileSquadmojiView _fetchFriendmojiForViewModel:bitmojiSelfieServices:] */

void FUN_108f73f60(undefined1 *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  long lVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined1 auStack_98 [8];
  undefined4 uStack_90;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_88);
  uVar10 = param_3;
  func_0x00010bf529e0();
  puVar11 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  if (uVar10 != 0) {
    func_0x00010bf529e0(param_3);
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    _objc_opt_class(PTR_PTR_1126dcb40);
    func_0x00010bf249e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe8240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    for (uVar10 = 0; uVar3 = param_3, func_0x00010bf529e0(),
        puVar1 = PTR___dispatch_main_q_11034be20, uVar10 < uVar3; uVar10 = uVar10 + 1) {
      func_0x00010befa120(puVar11);
    }
    for (uVar10 = 0; uVar3 = param_3, func_0x00010bf529e0(), uVar10 < uVar3; uVar10 = uVar10 + 1) {
      uVar3 = param_3;
      func_0x00010c0dfd40(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_4;
      func_0x00010c15ada0(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126b19f8;
      func_0x00010c1164a0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_80 = puVar6;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar1);
      param_1 = auStack_88;
      _objc_copyWeak(auStack_98);
      _objc_retain(puVar11);
      uStack_90 = (undefined4)uVar10;
      _objc_retain(param_3);
      func_0x00010bfa62a0(uVar5);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar1);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(param_3);
      _objc_release(puVar11);
      _objc_destroyWeak(auStack_98);
      _objc_release(uVar3);
    }
    _objc_release(puVar2);
    _objc_release(puVar11);
  }
  _objc_destroyWeak(auStack_88);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_88);
  __Unwind_Resume();
  _objc_retain(param_1);
  puVar8 = param_1;
  func_0x00010c08fa60();
  if (puVar8 == (undefined1 *)0x0) {
    puVar11 = (undefined *)0x0;
  }
  else {
    puVar11 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010c14d040(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
  }
  lVar9 = param_3 + 0x30;
  _objc_loadWeakRetained(lVar9);
  func_0x00010bdfde80();
  _objc_release(lVar9);
  _objc_release(puVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108f74290; end: 108f7431f;  */

void FUN_108f74290(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010c14d040(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
  }
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfde80();
  _objc_release(param_1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



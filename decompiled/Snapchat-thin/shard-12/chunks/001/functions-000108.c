/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108df4e8c; end: 108df565b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108df4e8c(long param_1,long param_2)

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
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x28) + (long)_DAT_11277bc58);
  func_0x00010c0bbfa0(uVar3);
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
  (**(code **)(lVar6 + 0x10))(0xc024000000000000);
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



/* Entry: 108df565c; end: 108df569b; -[SCMemoriesInformationWebViewController _backPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108df565c(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277bc4c;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar2);
  func_0x00010bf2cac0();
  if (iVar1 != 0) {
    func_0x00010bfcd2c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 108df569c; end: 108df56db; -[SCMemoriesInformationWebViewController _forwardPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108df569c(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277bc4c;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar2);
  func_0x00010bf2cae0();
  if (iVar1 != 0) {
    func_0x00010bfcd320(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 108df56dc; end: 108df572b; -[SCMemoriesInformationWebViewController _refreshPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108df56dc(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11277bc4c;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar3);
  func_0x00010c076be0();
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c256170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_stopLoading_112673280);
    return;
  }
  func_0x00010c1288e0(uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 108df572c; end: 108df574b; -[SCMemoriesInformationWebViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108df572c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277bc5c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108df574c; end: 108df575f; -[SCMemoriesInformationWebViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108df574c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277bc5c,param_3);
  return;
}



/* Entry: 108df5760; end: 108df583b; -[SCMemoriesInformationWebViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108df5760(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11277bc5c);
  _objc_storeStrong(param_1 + _DAT_11277bc34,0);
  _objc_storeStrong(param_1 + _DAT_11277bc58,0);
  _objc_storeStrong(param_1 + _DAT_11277bc54,0);
  _objc_storeStrong(param_1 + _DAT_11277bc50,0);
  _objc_storeStrong(param_1 + _DAT_11277bc3c,0);
  _objc_storeStrong(param_1 + _DAT_11277bc4c,0);
  _objc_storeStrong(param_1 + _DAT_11277bc48,0);
  _objc_storeStrong(param_1 + _DAT_11277bc44,0);
  _objc_storeStrong(param_1 + _DAT_11277bc40,0);
  _objc_storeStrong(param_1 + _DAT_11277bc38,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277bc2c,0);
  return;
}



/* Entry: 108df583c; end: 108df596b;  */

void FUN_108df583c(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c07f8c0();
  _objc_release(puVar1);
  if (param_1 != (int)puVar2) {
    puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14dc40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 108df596c; end: 108df59cb;  */

void FUN_108df596c(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (param_1 == (undefined *)0x0) {
    return;
  }
  _objc_retain();
  func_0x00010c1070e0(param_1);
  FUN_108df583c();
  puVar3 = param_1;
  func_0x00010c106ec0();
  _objc_release(param_1);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c14cde0();
  _objc_release(puVar1);
  if (puVar2 == puVar3) {
    return;
  }
  puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14dc80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 108df59cc; end: 108df5c03; -[SCLinkLabel linkfyHtmlString:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108df59cc(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar6 = (long)_DAT_11277bc64;
  if (*(long *)(param_1 + lVar6) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    *(undefined **)(param_1 + lVar6) = puVar1;
    _objc_release(uVar5);
  }
  puVar1 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
  _objc_alloc();
  lVar6 = param_3;
  func_0x00010bf64920(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c008460();
  _objc_release(puVar2);
  _objc_release(lVar6);
  func_0x00010bdce5a0(param_1);
  func_0x00010c08fa60(puVar1);
  if (((*(long *)(param_1 + _DAT_11277bc68) != 0) || (*(long *)(param_1 + _DAT_11277bc6c) != 0)) ||
     (*(long *)(param_1 + _DAT_11277bc70) != 0)) {
    _objc_retain(puVar1);
    func_0x00010bf97b20(puVar1);
    _objc_release(puVar1);
  }
  puVar2 = puVar1;
  func_0x00010c25cd40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(param_1);
  _objc_release(puVar2);
  func_0x00010c16b720(param_1);
  func_0x00010c21e900(param_1);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  lVar4 = param_2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 != 0) {
    lVar6 = lVar4;
    func_0x00010bfb3f20();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar6;
    func_0x00010c11f440();
    _objc_release(lVar6);
    if (lVar3 != 0x7fffffffffffffff) {
      if (*(long *)(*(long *)(param_3 + 0x20) + (long)_DAT_11277bc68) != 0) {
        func_0x00010bef6f40(*(undefined8 *)(param_3 + 0x28));
      }
    }
    lVar6 = lVar4;
    func_0x00010bfb3f20();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar6;
    func_0x00010c11f440();
    _objc_release(lVar6);
    if (lVar3 != 0x7fffffffffffffff) {
      if (*(long *)(*(long *)(param_3 + 0x20) + (long)_DAT_11277bc6c) != 0) {
        func_0x00010bef6f40(*(undefined8 *)(param_3 + 0x28));
      }
    }
  }
  lVar6 = param_2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 != 0) {
    func_0x00010c12b3c0(*(undefined8 *)(param_3 + 0x28));
    func_0x00010c12b3c0(*(undefined8 *)(param_3 + 0x28));
    func_0x00010bef6f40(*(undefined8 *)(param_3 + 0x28));
    uVar5 = *(undefined8 *)(*(long *)(param_3 + 0x20) + (long)_DAT_11277bc64);
    puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010c297300(PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar5);
    _objc_release(puVar1);
  }
  _objc_release(lVar6);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108df5c04; end: 108df5dfb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108df5c04(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010bfb3f20();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c11f440();
    _objc_release(lVar2);
    if (lVar3 != 0x7fffffffffffffff) {
      if (*(long *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277bc68) != 0) {
        func_0x00010bef6f40(*(undefined8 *)(param_1 + 0x28));
      }
    }
    lVar2 = lVar1;
    func_0x00010bfb3f20();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c11f440();
    _objc_release(lVar2);
    if (lVar3 != 0x7fffffffffffffff) {
      if (*(long *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277bc6c) != 0) {
        func_0x00010bef6f40(*(undefined8 *)(param_1 + 0x28));
      }
    }
  }
  lVar2 = param_2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    func_0x00010c12b3c0(*(undefined8 *)(param_1 + 0x28));
    func_0x00010c12b3c0(*(undefined8 *)(param_1 + 0x28));
    func_0x00010bef6f40(*(undefined8 *)(param_1 + 0x28));
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277bc64);
    puVar4 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010c297300(PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar5);
    _objc_release(puVar4);
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108df5dfc; end: 108df614b; -[SCLinkLabel linkfyMarkdownString:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108df5dfc(long param_1,int param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar9 = (long)_DAT_11277bc64;
  if (*(long *)(param_1 + lVar9) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar10 = *(undefined8 *)(param_1 + lVar9);
    *(undefined **)(param_1 + lVar9) = puVar1;
    _objc_release(uVar10);
  }
  puVar2 = PTR_PTR_1126d0ca8;
  _objc_alloc();
  func_0x00010c028a20();
  puVar1 = puVar2;
  func_0x00010bf86540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(param_1);
  _objc_release(puVar1);
  puVar3 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
  _objc_alloc(PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08);
  lVar4 = param_1;
  func_0x00010c26b700(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e820(puVar3);
  _objc_release(lVar4);
  func_0x00010bdce5a0(param_1);
  puVar5 = puVar2;
  func_0x00010c099a20();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar5;
  func_0x00010bf52a60();
  lVar4 = lRam0000000000000000;
  while (puVar1 != (undefined *)0x0) {
    puVar12 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar4) {
        _objc_enumerationMutation(puVar5);
      }
      uVar11 = *(undefined8 *)((long)puVar12 * 8);
      uVar10 = uVar11;
      func_0x00010c0e00e0(uVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c11f4c0();
      _objc_release(uVar10);
      puVar6 = PTR__OBJC_CLASS___NSURL_1126ae598;
      func_0x00010c0e00e0(uVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc3460(puVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar11);
      uVar10 = *(undefined8 *)(param_1 + lVar9);
      puVar7 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      func_0x00010c297300(PTR__OBJC_CLASS___NSValue_1126afdf8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar10);
      _objc_release(puVar7);
      func_0x00010bef6f40(puVar3);
      _objc_release(puVar6);
      puVar12 = puVar12 + 1;
    } while (puVar1 != puVar12);
    puVar1 = puVar5;
    func_0x00010bf52a60();
  }
  _objc_release(puVar5);
  func_0x00010c16b720(param_1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  while( true ) {
    func_0x00010c21e900(param_1);
    uVar10 = param_3;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
      return;
    }
    ___stack_chk_fail();
    if (param_2 != 1) break;
    _objc_begin_catch();
    _objc_retain();
    func_0x00010c212f20(param_1);
    _objc_release(uVar10);
    _objc_end_catch();
  }
  __Unwind_Resume(uVar10);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0999a0(uVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108df614c; end: 108df61a3; -[SCLinkLabel setLink:withDisplayText:] */

void FUN_108df614c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110ef8d78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0999a0(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108df61a4; end: 108df6323; -[SCLinkLabel _applyNormalAttributes:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108df61a4(double param_1,double param_2,double param_3,undefined8 param_4,long param_5,
                  ulong param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined8 uStack_1e0;
  long lStack_1d8;
  long *plStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long lStack_120;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  func_0x00010c08fa60();
  lVar12 = (long)_DAT_11277bc74;
  if (*(long *)(param_5 + lVar12) == 0) {
    lVar14 = param_5;
    func_0x00010bfb3a80();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = param_5;
    func_0x00010c26b920();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_5 + lVar12);
    *(undefined **)(param_5 + lVar12) = puVar1;
    _objc_release(uVar9);
    _objc_release(lVar15);
    _objc_release(lVar14);
  }
  func_0x00010bef6f40(param_7);
  puVar2 = (undefined8 *)PTR__OBJC_CLASS___NSMutableParagraphStyle_1126aec00;
  _objc_opt_new();
  func_0x00010c26b7a0(param_5);
  func_0x00010c166c00(puVar2);
  func_0x00010bef6f20(param_7);
  _objc_release(param_7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  lStack_120 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSLayoutManager_1126b51e8;
  _objc_opt_new();
  puVar3 = PTR__OBJC_CLASS___NSTextContainer_1126b51f0;
  _objc_alloc();
  func_0x00010c0469e0(*(undefined8 *)PTR__CGSizeZero_110347620,
                      *(undefined8 *)(PTR__CGSizeZero_110347620 + 8));
  func_0x00010c1bdbc0(0);
  func_0x00010c099180(puVar2);
  func_0x00010c1bdb00(puVar3);
  func_0x00010c0def20(puVar2);
  func_0x00010c1c3c00(puVar3);
  func_0x00010bf20c00(puVar2);
  dVar18 = param_3;
  uVar9 = param_4;
  func_0x00010c202c80(param_3,param_4,puVar3);
  func_0x00010befbe20(puVar1);
  puVar4 = PTR__OBJC_CLASS___NSTextStorage_1126b51e0;
  _objc_alloc();
  puVar5 = puVar2;
  func_0x00010bf0e540(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff4f40();
  _objc_release(puVar5);
  func_0x00010bef96a0(puVar4);
  func_0x00010c290f80(puVar1);
  dVar17 = param_3;
  func_0x00010bf20c00(puVar2);
  _CGRectGetWidth();
  dVar19 = param_3;
  _CGRectGetWidth(param_3,param_4,dVar18,uVar9);
  dVar16 = param_3;
  _CGRectGetMinX(param_3,param_4,dVar18,uVar9);
  dVar19 = (dVar17 - dVar19) * 0.5 - dVar16;
  func_0x00010bf20c00(puVar2);
  _CGRectGetHeight();
  dVar17 = param_3;
  _CGRectGetHeight(param_3,param_4,dVar18,uVar9);
  _CGRectGetMinY(param_3,param_4,dVar18);
  dVar17 = param_2 - ((dVar16 - dVar17) * 0.5 - param_3);
  puVar6 = puVar1;
  func_0x00010bf359a0(param_1 - dVar19);
  lStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1c8 = 0;
  plStack_1d0 = (long *)0x0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  lVar14 = (long)_DAT_11277bc64;
  lVar12 = *(long *)((long)puVar2 + lVar14);
  _objc_retain(lVar12);
  puVar5 = &uStack_1e0;
  lVar8 = lVar12;
  func_0x00010bf52a60();
  if (lVar8 != 0) {
    lVar15 = *plStack_1d0;
    do {
      lVar10 = 0;
      do {
        if (*plStack_1d0 != lVar15) {
          _objc_enumerationMutation(lVar12);
        }
        puVar13 = *(undefined **)(lStack_1d8 + lVar10 * 8);
        func_0x00010c11f4c0();
        if (puVar13 <= puVar6 && (ulong)((long)puVar6 - (long)puVar13) < param_6) {
          uVar7 = *(undefined8 *)((long)puVar2 + lVar14);
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar2;
          func_0x00010bf6b020(puVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c099780();
          _objc_release(puVar5);
          _objc_release(uVar7);
          puVar5 = puVar2;
          goto LAB_108df65f0;
        }
        lVar10 = lVar10 + 1;
      } while (lVar8 != lVar10);
      puVar5 = &uStack_1e0;
      lVar8 = lVar12;
      func_0x00010bf52a60();
    } while (lVar8 != 0);
  }
LAB_108df65f0:
  _objc_release(lVar12);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_120) {
    return;
  }
  ___stack_chk_fail();
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar5);
  uVar7 = 0;
  puVar2 = puVar5;
  func_0x00010bf52a60();
  lVar8 = lRam0000000000000000;
  while (puVar2 != (undefined8 *)0x0) {
    puVar11 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar8) {
        _objc_enumerationMutation(puVar5);
      }
      func_0x00010c09ef00(*(undefined8 *)((long)puVar11 * 8));
      func_0x00010be32360(puVar1);
      puVar11 = (undefined8 *)((long)puVar11 + 1);
    } while (puVar2 != puVar11);
    puVar2 = puVar5;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
  puVar5 = (undefined8 *)((long)puVar5 + (long)_DAT_11277bc60);
  *puVar5 = uVar7;
  puVar5[1] = dVar17;
  puVar5[2] = param_2;
  puVar5[3] = uVar9;
  return;
}



/* Entry: 108df6324; end: 108df665b; -[SCLinkLabel _handleTouchAtPoint:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108df6324(double param_1,double param_2,double param_3,undefined8 param_4,
                  undefined8 *param_5,ulong param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined8 uVar18;
  double dVar19;
  undefined8 uStack_170;
  long lStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_b0;
  
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSLayoutManager_1126b51e8;
  _objc_opt_new();
  puVar2 = PTR__OBJC_CLASS___NSTextContainer_1126b51f0;
  _objc_alloc();
  func_0x00010c0469e0(*(undefined8 *)PTR__CGSizeZero_110347620,
                      *(undefined8 *)(PTR__CGSizeZero_110347620 + 8));
  func_0x00010c1bdbc0(0);
  func_0x00010c099180(param_5);
  func_0x00010c1bdb00(puVar2);
  func_0x00010c0def20(param_5);
  func_0x00010c1c3c00(puVar2);
  func_0x00010bf20c00(param_5);
  dVar17 = param_3;
  uVar18 = param_4;
  func_0x00010c202c80(param_3,param_4,puVar2);
  func_0x00010befbe20(puVar1);
  puVar3 = PTR__OBJC_CLASS___NSTextStorage_1126b51e0;
  _objc_alloc();
  puVar4 = param_5;
  func_0x00010bf0e540(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff4f40();
  _objc_release(puVar4);
  func_0x00010bef96a0(puVar3);
  func_0x00010c290f80(puVar1);
  dVar16 = param_3;
  func_0x00010bf20c00(param_5);
  _CGRectGetWidth();
  dVar19 = param_3;
  _CGRectGetWidth(param_3,param_4,dVar17,uVar18);
  dVar15 = param_3;
  _CGRectGetMinX(param_3,param_4,dVar17,uVar18);
  dVar19 = (dVar16 - dVar19) * 0.5 - dVar15;
  func_0x00010bf20c00(param_5);
  _CGRectGetHeight();
  dVar16 = param_3;
  _CGRectGetHeight(param_3,param_4,dVar17,uVar18);
  _CGRectGetMinY(param_3,param_4,dVar17);
  dVar16 = param_2 - ((dVar15 - dVar16) * 0.5 - param_3);
  puVar5 = puVar1;
  func_0x00010bf359a0(param_1 - dVar19);
  lStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  plStack_160 = (long *)0x0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  lVar13 = (long)_DAT_11277bc64;
  lVar10 = *(long *)((long)param_5 + lVar13);
  _objc_retain(lVar10);
  puVar4 = &uStack_170;
  lVar6 = lVar10;
  func_0x00010bf52a60();
  if (lVar6 != 0) {
    lVar14 = *plStack_160;
    do {
      lVar9 = 0;
      do {
        if (*plStack_160 != lVar14) {
          _objc_enumerationMutation(lVar10);
        }
        puVar12 = *(undefined **)(lStack_168 + lVar9 * 8);
        func_0x00010c11f4c0();
        if (puVar12 <= puVar5 && (ulong)((long)puVar5 - (long)puVar12) < param_6) {
          uVar7 = *(undefined8 *)((long)param_5 + lVar13);
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = param_5;
          func_0x00010bf6b020(param_5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c099780();
          _objc_release(puVar4);
          _objc_release(uVar7);
          puVar4 = param_5;
          goto LAB_108df65f0;
        }
        lVar9 = lVar9 + 1;
      } while (lVar6 != lVar9);
      puVar4 = &uStack_170;
      lVar6 = lVar10;
      func_0x00010bf52a60();
    } while (lVar6 != 0);
  }
LAB_108df65f0:
  _objc_release(lVar10);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
    return;
  }
  ___stack_chk_fail();
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar4);
  uVar7 = 0;
  puVar8 = puVar4;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  while (puVar8 != (undefined8 *)0x0) {
    puVar11 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(puVar4);
      }
      func_0x00010c09ef00(*(undefined8 *)((long)puVar11 * 8));
      func_0x00010be32360(puVar1);
      puVar11 = (undefined8 *)((long)puVar11 + 1);
    } while (puVar8 != puVar11);
    puVar8 = puVar4;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  puVar4 = (undefined8 *)((long)puVar4 + (long)_DAT_11277bc60);
  *puVar4 = uVar7;
  puVar4[1] = dVar16;
  puVar4[2] = param_2;
  puVar4[3] = uVar18;
  return;
}



/* Entry: 108df665c; end: 108df675b; -[SCLinkLabel touchesEnded:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108df665c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  uVar5 = 0;
  uVar6 = 0;
  uVar7 = 0;
  uVar8 = 0;
  uVar9 = 0;
  uVar10 = 0;
  uVar11 = 0;
  uVar12 = 0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar2 = param_7;
  func_0x00010bf52a60(param_7,param_6,&uStack_110,auStack_c8,0x10);
  if (lVar2 != 0) {
    lVar3 = *plStack_100;
    do {
      lVar4 = 0;
      do {
        if (*plStack_100 != lVar3) {
          _objc_enumerationMutation(param_7);
        }
        func_0x00010c09ef00(*(undefined8 *)(lStack_108 + lVar4 * 8),param_6,param_5);
        func_0x00010be32360(param_5);
        lVar4 = lVar4 + 1;
      } while (lVar2 != lVar4);
      lVar2 = param_7;
      func_0x00010bf52a60(param_7,param_6,&uStack_110,auStack_c8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = (undefined8 *)(param_7 + _DAT_11277bc60);
  *puVar1 = CONCAT17(uVar12,CONCAT16(uVar11,CONCAT15(uVar10,CONCAT14(uVar9,CONCAT13(uVar8,CONCAT12(
                                                  uVar7,CONCAT11(uVar6,uVar5)))))));
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  return;
}



/* Entry: 108df675c; end: 108df6773; -[SCLinkLabel setHitTestEdgeInsets:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108df675c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_5 + _DAT_11277bc60);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  return;
}



/* Entry: 108df6774; end: 108df687b; -[SCLinkLabel pointInside:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_108df6774(undefined8 param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4,
             undefined8 param_5)

{
  double *pdVar1;
  undefined1 *puVar2;
  undefined1 **ppuVar3;
  ushort uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_50;
  _objc_retain(param_5);
  pdVar1 = (double *)(param_3 + _DAT_11277bc60);
  dVar9 = *(double *)PTR__UIEdgeInsetsZero_110345bb0;
  dVar10 = *(double *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10);
  dVar8 = (double)-(ulong)(pdVar1[2] == dVar10);
  uVar4 = NEON_uminv(CONCAT26(-(ushort)(pdVar1[3] ==
                                       *(double *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18)),
                              CONCAT24(SUB82(dVar8,0),
                                       CONCAT22(-(ushort)(pdVar1[1] ==
                                                         *(double *)
                                                          (PTR__UIEdgeInsetsZero_110345bb0 + 8)),
                                                -(ushort)(*pdVar1 == dVar9)))),2);
  uVar5 = 0;
  uVar6 = 0;
  uVar7 = 0;
  if ((((uVar4 & 1) == 0) && (puVar2 = param_3, func_0x00010c071800(), (int)puVar2 != 0)) &&
     (puVar2 = param_3, func_0x00010c074c20(), (int)puVar2 == 0)) {
    func_0x00010bf20c00(param_3);
    _CGRectContainsPoint
              (SUB82((double)CONCAT26(uVar7,CONCAT24(uVar6,CONCAT22(uVar5,uVar4))) + pdVar1[1],0),
               *pdVar1 + dVar8,dVar9 - (pdVar1[1] + pdVar1[3]),dVar10 - (*pdVar1 + pdVar1[2]),
               param_1,param_2);
  }
  else {
    puStack_48 = PTR_PTR_1126fe920;
    puStack_50 = param_3;
    _objc_msgSendSuper2((short)param_1,param_2,&puStack_50,PTR_s_pointInside_withEvent__11261e4e8,
                        param_5);
    param_3 = (undefined1 *)ppuVar3;
  }
  _objc_release(param_5);
  return param_3;
}



/* Entry: 108df687c; end: 108df689b; -[SCLinkLabel delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108df687c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277bc78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108df689c; end: 108df68af; -[SCLinkLabel setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108df689c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277bc78,param_3);
  return;
}



/* Entry: 108df68b0; end: 108df68bf; -[SCLinkLabel normalAttributes] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108df68b0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277bc74);
}



/* Entry: 108df68c0; end: 108df68ff; -[SCLinkLabel setNormalAttributes:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108df68c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277bc74;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108df6900; end: 108df690f; -[SCLinkLabel boldAttributes] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108df6900(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277bc68);
}



/* Entry: 108df6910; end: 108df694f; -[SCLinkLabel setBoldAttributes:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108df6910(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277bc68;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108df6950; end: 108df695f; -[SCLinkLabel italicAttributes] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108df6950(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277bc6c);
}



/* Entry: 108df6960; end: 108df699f; -[SCLinkLabel setItalicAttributes:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108df6960(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277bc6c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108df69a0; end: 108df69af; -[SCLinkLabel linkAttributes] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108df69a0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277bc70);
}



/* Entry: 108df69b0; end: 108df69ef; -[SCLinkLabel setLinkAttributes:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108df69b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277bc70;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108df69f0; end: 108df6a6b; -[SCLinkLabel .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108df69f0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277bc70,0);
  _objc_storeStrong(param_1 + _DAT_11277bc6c,0);
  _objc_storeStrong(param_1 + _DAT_11277bc68,0);
  _objc_storeStrong(param_1 + _DAT_11277bc74,0);
  _objc_destroyWeak(param_1 + _DAT_11277bc78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277bc64,0);
  return;
}



/* Entry: 108df6a6c; end: 108df6a9f;  */

double FUN_108df6a6c(double param_1)

{
  return (param_1 / 329.0) * -42.5;
}



/* Entry: 108df6aa0; end: 108df6bef;  */

void FUN_108df6aa0(double param_1,int param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  double dVar4;
  double dVar5;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  dVar4 = param_1;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  if (param_2 == 0) {
    func_0x00010bf199a0(0x3ff0000000000000,0x3ff0000000000000,param_1 + -2.0,param_1 + -2.0,
                        PTR__OBJC_CLASS___UIBezierPath_1126aec18);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    param_1 = param_1 + (1.0 / dVar4) * 2.0;
    dVar5 = param_1 / 329.0;
    dVar4 = -(1.0 / dVar4);
    func_0x00010bf199a0(dVar4,dVar4,param_1,param_1,PTR__OBJC_CLASS___UIBezierPath_1126aec18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21fa00();
    puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    func_0x00010bf199a0(dVar5 * -42.5,dVar5 * 10.5,dVar5 * 119.0,dVar5 * 119.0,
                        PTR__OBJC_CLASS___UIBezierPath_1126aec18);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf19940();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf06f40(puVar1,param_3,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108df6bf0; end: 108df6c93; -[SCMemoriesRoundButton initWithButtonType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108df6bf0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fe928;
  uStack_40 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_40,
                      PTR_s_initWithFrame__1125e2948);
  *(undefined8 *)((long)puVar1 + (long)_DAT_11277bc7c) = param_3;
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277bc80);
  *(undefined **)((long)puVar1 + (long)_DAT_11277bc80) = puVar2;
  _objc_release(uVar3);
  func_0x00010bde24c0(puVar1);
  return (undefined1 *)puVar1;
}



/* Entry: 108df6c94; end: 108df6d1b; -[SCMemoriesRoundButton setButtonColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108df6c94(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_11277bc80;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010c14cfc0(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,*(undefined8 *)(param_1 + lVar3));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c16e720(param_1,param_2,puVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108df6d1c; end: 108df6eeb; -[SCMemoriesRoundButton _commonInit] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108df6d1c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  if (*(ulong *)(param_1 + _DAT_11277bc7c) < 4) {
    puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(*(undefined8 *)(&UNK_10dfa3288 + *(ulong *)(param_1 + _DAT_11277bc7c) * 8),
                        PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c271420(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480();
    _objc_release(lVar2);
    _objc_release(puVar1);
  }
  lVar2 = param_1;
  func_0x00010c271420(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c165e20();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c271420(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16f5a0();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c271420(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c83a0(0x3fe0000000000000);
  _objc_release(lVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216380(param_1,param_2,puVar1,0);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010c14cfc0(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      *(undefined8 *)(param_1 + _DAT_11277bc80));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e720(param_1,param_2,puVar1,0);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c14c520(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14cfc0(puVar1,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e720(param_1,param_2,puVar1,2);
  _objc_release(puVar1);
  _objc_release(puVar3);
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108df6eec; end: 108df6f63; -[SCMemoriesRoundButton layoutSubviews] */

void FUN_108df6eec(undefined8 param_1)

{
  undefined8 uVar1;
  double in_d3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  func_0x00010bfb68e0();
  uVar1 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(in_d3 * 0.5);
  _objc_release(uVar1);
  puStack_38 = PTR_PTR_1126fe928;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_layoutSubviews_112600e60);
  return;
}



/* Entry: 108df6f64; end: 108df7143; -[SCMemoriesRoundButton intrinsicContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_108df6f64(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  double dVar6;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = param_1;
  func_0x00010c271420();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar5;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  uStack_68 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  lVar2 = param_1;
  func_0x00010c271420();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfb3a80();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lStack_60 = lVar3;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&lStack_60,&uStack_68,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d660(lVar1,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar5);
  func_0x00010c2712a0(param_1);
  func_0x00010c2712a0(param_1);
  lVar5 = *(long *)(param_1 + _DAT_11277bc7c);
  dVar6 = 44.0;
  if (lVar5 < 2) {
    if ((lVar5 == 0) || (lVar5 == 1)) {
      dVar6 = 44.0;
    }
  }
  else if (lVar5 == 2) {
    dVar6 = 48.0;
  }
  else if (lVar5 == 3) {
    dVar6 = 56.0;
  }
  func_0x00010c2163a0(0,dVar6 * 0.5,0,dVar6 * 0.5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_1;
  }
  ___stack_chk_fail();
  return *(long *)(param_1 + _DAT_11277bc80);
}



/* Entry: 108df7144; end: 108df7153; -[SCMemoriesRoundButton buttonColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108df7144(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277bc80);
}



/* Entry: 108df7154; end: 108df7167; -[SCMemoriesRoundButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108df7154(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277bc80,0);
  return;
}



/* Entry: 108df7168; end: 108df721b; +[SCRandomEncryptionKey secureGenerateRandomKey:IV:] */

void FUN_108df7168(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = 0x20;
  _malloc();
  puVar2 = (undefined *)0x0;
  if (lVar1 != 0) {
    func_0x000107c2b3c4();
    puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
    _objc_alloc();
    func_0x00010bffa1a0();
    _objc_autorelease();
  }
  *param_3 = puVar2;
  lVar1 = 0x10;
  _malloc();
  puVar2 = (undefined *)0x0;
  if (lVar1 != 0) {
    func_0x000107c2b3c4();
    puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
    _objc_alloc();
    func_0x00010bffa1a0();
    _objc_autorelease();
  }
  *param_4 = puVar2;
  return;
}



/* Entry: 108df721c; end: 108df727b;  */

void FUN_108df721c(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    _bzero(param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_2);
  return;
}



/* Entry: 108df727c; end: 108df736b;  */

void FUN_108df727c(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  
  _objc_retain();
  puVar3 = PTR_PTR_1126aed70;
  ppuVar2 = &PTR____CFConstantStringClassReference_110dad758;
  ppuVar1 = ppuVar2;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_1);
  func_0x00010beff440(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(param_1);
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108df736c; end: 108df7437;  */

void FUN_108df736c(long param_1,undefined8 param_2)

{
  func_0x00010bf84b00(param_2,param_2,1,0);
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108df73a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 108df7438; end: 108df7557;  */

void FUN_108df7438(undefined8 param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  
  puVar1 = PTR_PTR_1126aed78;
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_alloc();
  ppuVar2 = &PTR____CFConstantStringClassReference_110e222f8;
  lVar9 = 0;
  func_0x00010bcbeaa8();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0;
  FUN_108df727c();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0();
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(ppuVar2);
  func_0x00010c10eda0(param_1);
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(lVar9);
  puVar4 = PTR_PTR_1126aed70;
  _objc_retain(puVar1);
  ppuVar2 = &PTR____CFConstantStringClassReference_110ef8d98;
  ppuVar5 = ppuVar2;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ef8d98,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ef8d98,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(lVar9);
  func_0x00010beff440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  _objc_release(ppuVar5);
  puVar6 = PTR_PTR_1126aed70;
  ppuVar2 = &PTR____CFConstantStringClassReference_110dcc5f8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dcc5f8,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(lVar9);
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  puVar7 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  ppuVar2 = &PTR____CFConstantStringClassReference_110ef8db8;
  ppuVar5 = ppuVar2;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ef8db8,0);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar7);
  _objc_release(puVar8);
  _objc_release(ppuVar5);
  func_0x00010c160fc0(puVar7);
  uVar3 = 0;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ef8db8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(puVar7);
  _objc_release(ppuVar2);
  func_0x00010c10eda0(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(lVar9);
  _objc_release(puVar4);
  _objc_release(lVar9);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf84b00(uVar3);
  lVar9 = *(long *)(lVar9 + 0x20);
  if (lVar9 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108df7828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar9 + 0x10))(lVar9,1);
    return;
  }
  return;
}



/* Entry: 108df7558; end: 108df77ef;  */

void FUN_108df7558(undefined8 param_1,long param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar3 = PTR_PTR_1126aed70;
  _objc_retain(param_1);
  ppuVar2 = &PTR____CFConstantStringClassReference_110ef8d98;
  ppuVar1 = ppuVar2;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ef8d98,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ef8d98,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  func_0x00010beff440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  puVar4 = PTR_PTR_1126aed70;
  ppuVar2 = &PTR____CFConstantStringClassReference_110dcc5f8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dcc5f8,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  puVar5 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  ppuVar2 = &PTR____CFConstantStringClassReference_110ef8db8;
  ppuVar1 = ppuVar2;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ef8db8,0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar5);
  _objc_release(puVar6);
  _objc_release(ppuVar1);
  func_0x00010c160fc0(puVar5);
  uVar7 = 0;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ef8db8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(puVar5);
  _objc_release(ppuVar2);
  func_0x00010c10eda0(param_1);
  _objc_release(param_1);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(param_2);
  _objc_release(puVar3);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf84b00(uVar7);
  lVar8 = *(long *)(param_2 + 0x20);
  if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108df7828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar8 + 0x10))(lVar8,1);
    return;
  }
  return;
}



/* Entry: 108df77f0; end: 108df787f;  */

void FUN_108df77f0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x00010bf84b00(param_2,param_2,1,0);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108df7828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,1);
    return;
  }
  return;
}



/* Entry: 108df7880; end: 108df7bdb;  */

void FUN_108df7880(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_108ec0e94();
  puVar2 = PTR_PTR_1126aed70;
  ppuVar1 = &PTR____CFConstantStringClassReference_110ef8dd8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ef8dd8,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar3 = PTR_PTR_1126aed70;
  ppuVar1 = &PTR____CFConstantStringClassReference_110ef8df8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ef8df8,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar4 = PTR_PTR_1126aed70;
  ppuVar1 = &PTR____CFConstantStringClassReference_110ef8e18;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ef8e18,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar5 = PTR_PTR_1126aed70;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dcc5f8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dcc5f8,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  ppuVar1 = &PTR____CFConstantStringClassReference_110ef8e38;
  uVar8 = 0;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ef8e38,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar7);
  _objc_release(ppuVar1);
  func_0x00010c10eda0(param_1);
  _objc_release(param_1);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(param_3);
  _objc_release(puVar4);
  _objc_release(param_3);
  _objc_release(puVar3);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf84b00(uVar8);
  lVar9 = *(long *)(param_3 + 0x20);
  if (lVar9 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108df7c20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar9 + 0x10))(lVar9,1,0,0,1);
    return;
  }
  return;
}



/* Entry: 108df7bdc; end: 108df7d2b;  */

void FUN_108df7bdc(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x00010bf84b00(param_2,param_2,1,0);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108df7c20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,1,0,0,1);
    return;
  }
  return;
}



/* Entry: 108df7d2c; end: 108df800f;  */

void FUN_108df7d2c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_108ec0e94();
  puVar2 = PTR_PTR_1126aed70;
  ppuVar1 = &PTR____CFConstantStringClassReference_110ef8df8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ef8df8,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar3 = PTR_PTR_1126aed70;
  ppuVar1 = &PTR____CFConstantStringClassReference_110ef8e18;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ef8e18,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar4 = PTR_PTR_1126aed70;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dcc5f8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dcc5f8,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  ppuVar1 = &PTR____CFConstantStringClassReference_110ef8e38;
  uVar7 = 0;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ef8e38,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar6);
  _objc_release(ppuVar1);
  func_0x00010c10eda0(param_1);
  _objc_release(param_1);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(param_3);
  _objc_release(puVar3);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf84b00(uVar7);
  lVar8 = *(long *)(param_3 + 0x20);
  if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108df8050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar8 + 0x10))(lVar8,1,1,0);
    return;
  }
  return;
}



/* Entry: 108df8010; end: 108df80ff;  */

void FUN_108df8010(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x00010bf84b00(param_2,param_2,1,0);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108df8050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,1,1,0);
    return;
  }
  return;
}



/* Entry: 108df8100; end: 108df84b3;  */

void FUN_108df8100(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_2;
  func_0x00010bf52a60();
  lVar11 = lRam0000000000000000;
  if (lVar1 == 0) {
    lVar14 = 0;
    lVar15 = 0;
  }
  else {
    lVar14 = 0;
    lVar15 = 0;
    do {
      lVar16 = 0;
      do {
        if (lRam0000000000000000 != lVar11) {
          _objc_enumerationMutation(param_2);
        }
        lVar2 = *(long *)(lVar16 * 8);
        func_0x00010c0c6c20();
        if (lVar2 == 2) {
          lVar14 = lVar14 + 1;
        }
        else if (lVar2 == 1) {
          lVar15 = lVar15 + 1;
        }
        lVar16 = lVar16 + 1;
      } while (lVar1 != lVar16);
      lVar1 = param_2;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  if (lVar15 + lVar14 == 0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
    if (lVar14 != 0) goto LAB_108df824c;
LAB_108df825c:
    if (lVar15 == 0) {
      if (lVar14 == 0) {
        ppuVar4 = &PTR____CFConstantStringClassReference_110daafd8;
        goto LAB_108df82a8;
      }
      ppuVar5 = &PTR____CFConstantStringClassReference_110ef8f18;
      ppuVar4 = &PTR____CFConstantStringClassReference_110ef8ef8;
    }
    else {
      ppuVar5 = &PTR____CFConstantStringClassReference_110ef8ed8;
      ppuVar4 = &PTR____CFConstantStringClassReference_110ef8eb8;
      lVar14 = lVar15;
    }
    if (lVar14 != 1) {
      ppuVar4 = ppuVar5;
    }
  }
  else {
    ppuVar3 = &PTR____CFConstantStringClassReference_110ef8e78;
    if (lVar15 + lVar14 == 1) {
      ppuVar3 = &PTR____CFConstantStringClassReference_110ef8e58;
    }
    func_0x00010bcbeaa8(ppuVar3,0);
    _objc_retainAutoreleasedReturnValue();
    if (lVar14 == 0) goto LAB_108df825c;
LAB_108df824c:
    if (lVar15 == 0) goto LAB_108df825c;
    ppuVar4 = &PTR____CFConstantStringClassReference_110ef8e98;
  }
  func_0x00010bcbeaa8(ppuVar4,0);
  _objc_retainAutoreleasedReturnValue();
LAB_108df82a8:
  puVar6 = PTR_PTR_1126aed70;
  ppuVar5 = &PTR____CFConstantStringClassReference_110db18b8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db18b8,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar5);
  puVar8 = PTR_PTR_1126aed70;
  ppuVar5 = &PTR____CFConstantStringClassReference_110dace78;
  uVar12 = 0;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dace78,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = ppuVar5;
  func_0x00010c28ed80();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar7);
  _objc_release(ppuVar5);
  puVar9 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar9);
  _objc_release(puVar10);
  func_0x00010c10eda0(param_1);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(param_3);
  _objc_release(puVar6);
  _objc_release(param_3);
  _objc_release(param_3);
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf84b00(uVar12);
  lVar11 = *(long *)(param_1 + 0x20);
  if (lVar11 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000108df84ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar11 + 0x10))(lVar11,1);
  return;
}



/* Entry: 108df84b4; end: 108df8543;  */

void FUN_108df84b4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x00010bf84b00(param_2,param_2,1,0);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108df84ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,1);
    return;
  }
  return;
}



/* Entry: 108df8544; end: 108df8b33;  */

void FUN_108df8544(undefined8 param_1,long param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined *puStack_2f0;
  undefined8 uStack_2e8;
  code *pcStack_2e0;
  undefined *puStack_2d8;
  long lStack_2d0;
  undefined **ppuStack_2c8;
  undefined *puStack_2c0;
  long lStack_2b8;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  func_0x00010c0c6c20();
  ppuVar1 = &PTR____CFConstantStringClassReference_110ef8f38;
  if (param_2 != 2) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ef8f58;
  }
  func_0x00010bcbeaa8(ppuVar1,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126aed78;
  _objc_alloc();
  uVar3 = 0;
  FUN_108df727c();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0();
  _objc_release(puVar4);
  _objc_release(uVar3);
  func_0x00010c211b40(puVar2);
  func_0x00010bf0c980(param_1);
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR_PTR_1126aed78;
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_alloc();
  ppuVar5 = &PTR____CFConstantStringClassReference_110ef8f78;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ef8f78,0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0;
  FUN_108df727c();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0();
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(ppuVar5);
  func_0x00010c211b40(puVar2);
  func_0x00010bf0c980(ppuVar1);
  _objc_release(ppuVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  puVar4 = PTR_PTR_1126aed78;
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_alloc();
  ppuVar1 = &PTR____CFConstantStringClassReference_110ef8f98;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ef8f98,0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0;
  FUN_108df727c();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0();
  _objc_release(puVar6);
  _objc_release(uVar3);
  _objc_release(ppuVar1);
  func_0x00010c10eda0(puVar2);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR_PTR_1126aed78;
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_alloc();
  ppuVar1 = &PTR____CFConstantStringClassReference_110ef8fb8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ef8fb8,0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0;
  FUN_108df727c();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0();
  _objc_release(puVar6);
  _objc_release(uVar3);
  _objc_release(ppuVar1);
  func_0x00010c211b40(puVar2);
  func_0x00010c10eda0(puVar4);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  puVar4 = PTR_PTR_1126aed78;
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_alloc();
  ppuVar1 = &PTR____CFConstantStringClassReference_110ef8458;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ef8458,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = &PTR____CFConstantStringClassReference_110daeb18;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daeb18,0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0;
  FUN_108df727c();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0();
  _objc_release(puVar6);
  _objc_release(uVar3);
  _objc_release(ppuVar5);
  _objc_release(ppuVar1);
  func_0x00010c10eda0(puVar2);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR_PTR_1126aed78;
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_alloc();
  ppuVar1 = &PTR____CFConstantStringClassReference_110ef8fd8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ef8fd8,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = &PTR____CFConstantStringClassReference_110ef8ff8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ef8ff8,0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0;
  FUN_108df727c();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0();
  _objc_release(puVar6);
  _objc_release(uVar3);
  _objc_release(ppuVar5);
  _objc_release(ppuVar1);
  func_0x00010c160fc0(puVar2);
  func_0x00010c10eda0(puVar4);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  puVar4 = PTR_PTR_1126aed78;
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_alloc();
  ppuVar1 = &PTR____CFConstantStringClassReference_110ef9018;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ef9018,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = &PTR____CFConstantStringClassReference_110ef9038;
  lVar9 = 0;
  func_0x00010bcbeaa8();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0;
  FUN_108df727c();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0();
  _objc_release(puVar6);
  _objc_release(uVar3);
  _objc_release(ppuVar5);
  _objc_release(ppuVar1);
  func_0x00010c160fc0(puVar4);
  func_0x00010c10eda0(puVar2);
  _objc_release(puVar2);
  _objc_release(puVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  lStack_2b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(lVar9);
  puStack_2f0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_2e8 = 0xc2000000;
  pcStack_2e0 = FUN_108df9028;
  puStack_2d8 = &UNK_110849530;
  _objc_retain(lVar9);
  lStack_2d0 = lVar9;
  _objc_retain(puVar4);
  ppuVar1 = &puStack_2f0;
  FUN_108df727c();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126aed70;
  ppuVar5 = &PTR____CFConstantStringClassReference_110ef9058;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ef9058,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(lVar9);
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar5);
  puVar6 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  ppuVar5 = &PTR____CFConstantStringClassReference_110ef9078;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ef9078,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = &PTR____CFConstantStringClassReference_110ef9098;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ef9098,0);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  ppuStack_2c8 = ppuVar1;
  puStack_2c0 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar6);
  _objc_release(puVar8);
  _objc_release(ppuVar7);
  _objc_release(ppuVar5);
  func_0x00010c160fc0(puVar6);
  func_0x00010c10eda0(puVar4);
  _objc_release(puVar4);
  _objc_release(puVar6);
  _objc_release(puVar2);
  _objc_release(lVar9);
  _objc_release(ppuVar1);
  _objc_release(lStack_2d0);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2b8) {
    return;
  }
  ___stack_chk_fail();
  lVar9 = *(long *)(lVar9 + 0x20);
  if (lVar9 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108df9038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar9 + 0x10))(lVar9,1);
    return;
  }
  return;
}



/* Entry: 108df8b34; end: 108df8deb;  */

void FUN_108df8b34(undefined8 param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  long lStack_140;
  undefined **ppuStack_138;
  undefined *puStack_130;
  long lStack_128;
  
  puVar1 = PTR_PTR_1126aed78;
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_alloc();
  ppuVar2 = &PTR____CFConstantStringClassReference_110ef8fd8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ef8fd8,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = &PTR____CFConstantStringClassReference_110ef8ff8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ef8ff8,0);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 0;
  FUN_108df727c();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0();
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  func_0x00010c160fc0(puVar1);
  func_0x00010c10eda0(param_1);
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  puVar5 = PTR_PTR_1126aed78;
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_alloc();
  ppuVar2 = &PTR____CFConstantStringClassReference_110ef9018;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ef9018,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = &PTR____CFConstantStringClassReference_110ef9038;
  lVar9 = 0;
  func_0x00010bcbeaa8();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 0;
  FUN_108df727c();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0();
  _objc_release(puVar6);
  _objc_release(uVar4);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  func_0x00010c160fc0(puVar5);
  func_0x00010c10eda0(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(lVar9);
  puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_158 = 0xc2000000;
  pcStack_150 = FUN_108df9028;
  puStack_148 = &UNK_110849530;
  _objc_retain(lVar9);
  lStack_140 = lVar9;
  _objc_retain(puVar5);
  ppuVar2 = &puStack_160;
  FUN_108df727c();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126aed70;
  ppuVar3 = &PTR____CFConstantStringClassReference_110ef9058;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ef9058,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(lVar9);
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar3);
  puVar6 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  ppuVar3 = &PTR____CFConstantStringClassReference_110ef9078;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ef9078,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = &PTR____CFConstantStringClassReference_110ef9098;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ef9098,0);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  ppuStack_138 = ppuVar2;
  puStack_130 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar6);
  _objc_release(puVar8);
  _objc_release(ppuVar7);
  _objc_release(ppuVar3);
  func_0x00010c160fc0(puVar6);
  func_0x00010c10eda0(puVar5);
  _objc_release(puVar5);
  _objc_release(puVar6);
  _objc_release(puVar1);
  _objc_release(lVar9);
  _objc_release(ppuVar2);
  _objc_release(lStack_140);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_128) {
    return;
  }
  ___stack_chk_fail();
  lVar9 = *(long *)(lVar9 + 0x20);
  if (lVar9 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108df9038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar9 + 0x10))(lVar9,1);
    return;
  }
  return;
}



/* Entry: 108df8dec; end: 108df9027;  */

void FUN_108df8dec(undefined8 param_1,long param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined **ppuStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_108df9028;
  puStack_88 = &UNK_110849530;
  _objc_retain(param_2);
  lStack_80 = param_2;
  _objc_retain(param_1);
  ppuVar1 = &puStack_a0;
  FUN_108df727c();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126aed70;
  ppuVar2 = &PTR____CFConstantStringClassReference_110ef9058;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ef9058,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  puVar4 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  ppuVar2 = &PTR____CFConstantStringClassReference_110ef9078;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ef9078,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = &PTR____CFConstantStringClassReference_110ef9098;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ef9098,0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  ppuStack_78 = ppuVar1;
  puStack_70 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar4);
  _objc_release(puVar6);
  _objc_release(ppuVar5);
  _objc_release(ppuVar2);
  func_0x00010c160fc0(puVar4);
  func_0x00010c10eda0(param_1);
  _objc_release(param_1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(param_2);
  _objc_release(ppuVar1);
  _objc_release(lStack_80);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  lVar7 = *(long *)(param_2 + 0x20);
  if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108df9038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar7 + 0x10))(lVar7,1);
    return;
  }
  return;
}



/* Entry: 108df9028; end: 108df903f;  */

void FUN_108df9028(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108df9038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,1);
    return;
  }
  return;
}



/* Entry: 108df9040; end: 108df9087;  */

void FUN_108df9040(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x00010bf84b00(param_2,param_2,1,0);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108df9078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    return;
  }
  return;
}



/* Entry: 108df9088; end: 108df9377;  */

void FUN_108df9088(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126aed70;
  _objc_retain(param_1);
  ppuVar1 = &PTR____CFConstantStringClassReference_110dc40f8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc40f8,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar3 = PTR_PTR_1126aed70;
  ppuVar1 = &PTR____CFConstantStringClassReference_110db18b8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db18b8,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar4 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  ppuVar1 = &PTR____CFConstantStringClassReference_110dcf298;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dcf298,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(0);
  puVar6 = PTR_PTR_1126aed70;
  ppuVar5 = &PTR____CFConstantStringClassReference_110dcc5f8;
  uVar8 = 0;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dcc5f8,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(0);
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(0);
  _objc_release(0);
  _objc_release(ppuVar5);
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar4);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(ppuVar1);
  func_0x00010c211b40(puVar4);
  func_0x00010c10eda0(param_1);
  _objc_release(param_1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(param_2);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf84b00(uVar8);
  if (*(long *)(param_2 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108df93ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_2 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 108df9378; end: 108df93ff;  */

void FUN_108df9378(long param_1,undefined8 param_2)

{
  func_0x00010bf84b00(param_2,param_2,1,0);
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108df93ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 108df9400; end: 108df97e7;  */

void FUN_108df9400(undefined8 param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  
  puVar1 = PTR_PTR_1126aed78;
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_alloc();
  ppuVar2 = &PTR____CFConstantStringClassReference_110ef90d8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ef90d8,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = &PTR____CFConstantStringClassReference_110ef90f8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ef90f8,0);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 0;
  FUN_108df727c();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0();
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  func_0x00010c10eda0(param_1);
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  puVar5 = PTR_PTR_1126aed78;
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_alloc();
  ppuVar2 = &PTR____CFConstantStringClassReference_110ef9118;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ef9118,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = &PTR____CFConstantStringClassReference_110ef9138;
  uVar8 = 0;
  func_0x00010bcbeaa8();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 0;
  FUN_108df727c();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0();
  _objc_release(puVar6);
  _objc_release(uVar4);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  func_0x00010c211b40(puVar5);
  func_0x00010c10eda0(puVar1);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126aed78;
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(uVar8);
  _objc_retain(puVar5);
  _objc_alloc();
  ppuVar2 = &PTR____CFConstantStringClassReference_110db7678;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db7678,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = &PTR____CFConstantStringClassReference_110ef9158;
  lVar9 = 0;
  func_0x00010bcbeaa8();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar8;
  FUN_108df727c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0();
  _objc_release(puVar6);
  _objc_release(uVar4);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  func_0x00010bf0c980(puVar5);
  _objc_release(puVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(lVar9);
  puVar5 = PTR_PTR_1126aed70;
  _objc_retain(puVar1);
  ppuVar2 = &PTR____CFConstantStringClassReference_110dad758;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(lVar9);
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  puVar6 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  ppuVar2 = &PTR____CFConstantStringClassReference_110ef9178;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ef9178,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = &PTR____CFConstantStringClassReference_110ef9198;
  uVar4 = 0;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ef9198,0);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar6);
  _objc_release(puVar7);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  func_0x00010c10eda0(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(lVar9);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf84b00(uVar4);
  if (*(long *)(lVar9 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108df99f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar9 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 108df97e8; end: 108df99bf;  */

void FUN_108df97e8(undefined8 param_1,long param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126aed70;
  _objc_retain(param_1);
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad758;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar3 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  ppuVar1 = &PTR____CFConstantStringClassReference_110ef9178;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ef9178,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = &PTR____CFConstantStringClassReference_110ef9198;
  uVar6 = 0;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ef9198,0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar3);
  _objc_release(puVar5);
  _objc_release(ppuVar4);
  _objc_release(ppuVar1);
  func_0x00010c10eda0(param_1);
  _objc_release(param_1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf84b00(uVar6);
  if (*(long *)(param_2 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108df99f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_2 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 108df99c0; end: 108df9a03;  */

void FUN_108df99c0(long param_1,undefined8 param_2)

{
  func_0x00010bf84b00(param_2,param_2,1,0);
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108df99f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 108df9a04; end: 108df9c5b;  */

void FUN_108df9a04(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_1);
  func_0x00010bf09f00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126aed70;
  ppuVar2 = &PTR____CFConstantStringClassReference_110dad758;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  func_0x00010beff480(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar1);
  _objc_release(puVar3);
  _objc_release(ppuVar2);
  puVar3 = PTR_PTR_1126aed70;
  if (param_3 == 1) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110ef91b8;
    func_0x000107c312f8(&PTR____CFConstantStringClassReference_110ef91b8,
                        &PTR____CFConstantStringClassReference_110ef91d8,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_2);
    func_0x00010beff480(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1);
    _objc_release(puVar3);
    _objc_release(ppuVar2);
    _objc_release(param_2);
  }
  puVar3 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  ppuVar2 = &PTR____CFConstantStringClassReference_110ef91f8;
  func_0x000107c312f8(&PTR____CFConstantStringClassReference_110ef91f8,
                      &PTR____CFConstantStringClassReference_110ef91d8,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = &PTR____CFConstantStringClassReference_110ebfc38;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ebfc38,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar3);
  _objc_release(ppuVar4);
  _objc_release(ppuVar2);
  func_0x00010bf0c980(param_1);
  _objc_release(param_1);
  _objc_release(puVar3);
  _objc_release(param_2);
  _objc_release(puVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 108df9c5c; end: 108df9ceb;  */

void FUN_108df9c5c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x00010bf84b00(param_2,param_2,1,0);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108df9c94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    return;
  }
  return;
}



/* Entry: 108df9cec; end: 108df9e7f;  */

void FUN_108df9cec(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  
  puVar3 = PTR_PTR_1126aed70;
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad758;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010c28ed80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  puVar4 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  ppuVar1 = &PTR____CFConstantStringClassReference_110ef9218;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ef9218,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = &PTR____CFConstantStringClassReference_110ef9238;
  uVar6 = 0;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ef9238,0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar4);
  _objc_release(puVar5);
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  func_0x00010c10eda0(param_1);
  _objc_release(param_1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar6,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0)
  ;
  return;
}



/* Entry: 108df9e80; end: 108df9e8f;  */

void FUN_108df9e80(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 108df9e90; end: 108dfa117;  */

void FUN_108df9e90(undefined8 param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  long lVar12;
  
  puVar1 = PTR_PTR_1126aed78;
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_alloc();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  ppuVar2 = &PTR____CFConstantStringClassReference_110ef9258;
  ppuVar11 = &PTR____CFConstantStringClassReference_110ef91d8;
  func_0x000107c312f8(&PTR____CFConstantStringClassReference_110ef9258,
                      &PTR____CFConstantStringClassReference_110ef91d8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 0;
  FUN_108df727c();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0();
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(ppuVar2);
  func_0x00010c10eda0(param_1);
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126aed78;
  _objc_alloc();
  uVar4 = 0;
  FUN_108df727c();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0();
  _objc_release(puVar6);
  _objc_release(uVar4);
  func_0x00010c10eda0(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar5);
  _objc_release(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126aed70;
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(ppuVar11);
  _objc_retain(puVar3);
  ppuVar2 = &PTR____CFConstantStringClassReference_110daf8b8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  puVar6 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar7 = puVar6;
  func_0x000108dfdca4();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x000108dfdcbc();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(ppuVar11);
  puVar5 = PTR_PTR_1126aed70;
  ppuVar2 = &PTR____CFConstantStringClassReference_110dad758;
  ppuVar9 = ppuVar2;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 0;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(ppuVar11);
  func_0x00010beff460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar11);
  _objc_release(ppuVar11);
  _objc_release(ppuVar2);
  _objc_release(ppuVar9);
  _objc_release(ppuVar11);
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar6);
  _objc_release(puVar10);
  _objc_release(puVar5);
  _objc_release(puVar8);
  _objc_release(puVar7);
  func_0x00010c10eda0(puVar3);
  _objc_release(puVar3);
  _objc_release(puVar6);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar4,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0)
  ;
  return;
}



/* Entry: 108dfa118; end: 108dfa36f;  */

void FUN_108dfa118(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  
  puVar2 = PTR_PTR_1126aed70;
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_1);
  ppuVar1 = &PTR____CFConstantStringClassReference_110daf8b8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar3 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar4 = puVar3;
  func_0x000108dfdca4();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x000108dfdcbc();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  puVar7 = PTR_PTR_1126aed70;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad758;
  ppuVar6 = ppuVar1;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = 0;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  func_0x00010beff460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_2);
  _objc_release(ppuVar1);
  _objc_release(ppuVar6);
  _objc_release(param_2);
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar3);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar4);
  func_0x00010c10eda0(param_1);
  _objc_release(param_1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar9,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0)
  ;
  return;
}



/* Entry: 108dfa370; end: 108dfa37f;  */

void FUN_108dfa370(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 108dfa380; end: 108dfa403; +[SCCMemoriesAddressTitleDbDb schema] */

void FUN_108dfa380(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b84f8;
  _objc_alloc(PTR_PTR_1126b84f8);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f51c9a3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c060a40(puVar1,param_2,0,puVar2,PTR____NSArray0__struct_11034ab48);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108dfa404; end: 108dfa42b; -[SCCMemoriesAddressTitleDbDb getConn] */

void FUN_108dfa404(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108dfa42c; end: 108dfa4b3; -[SCCMemoriesAddressTitleDbDb initWithSqliteConnection:] */

undefined1 * FUN_108dfa42c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fe930;
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



/* Entry: 108dfa4b4; end: 108dfa51f; -[SCCMemoriesAddressTitleDbDb .cxx_destruct] */

void FUN_108dfa4b4(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108dfa520; end: 108dfa52b; -[SCCMemoriesAddressTitleDbDb .cxx_construct] */

void FUN_108dfa520(long param_1)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



/* Entry: 108dfa52c; end: 108dfa68f;  */

void FUN_108dfa52c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_1 + 8));
      lVar1 = param_1 + 0x10;
      func_0x000107c30770(lVar1,*(undefined8 *)(param_1 + 8),&UNK_10dfa32a8,0x4a);
      func_0x000107c3075c();
      func_0x000107c30760(lVar1,FUN_108dfa690);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_108dfa5d4;
    }
  }
  lVar1 = 0;
LAB_108dfa5d4:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 108dfa690; end: 108dfa703;  */

void FUN_108dfa690(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126dbf58;
  _objc_alloc(PTR_PTR_1126dbf58);
  func_0x000107c30768(param_1,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108dfab08(puVar1,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108dfa704; end: 108dfa867;  */

void FUN_108dfa704(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 uStack_44;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      lVar1 = param_1 + 0x18;
      func_0x000107c30770(lVar1,*(undefined8 *)(param_1 + 8),&UNK_10dfa32f3,0x68);
      uStack_44 = 1;
      func_0x000107c3075c();
      func_0x000107c3075c(lVar1,&uStack_44,param_3);
      func_0x00010b5ef0d0(lVar1);
    }
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108dfa868; end: 108dfa997;  */

void FUN_108dfa868(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      lVar1 = param_1 + 0x20;
      func_0x000107c30770(lVar1,*(undefined8 *)(param_1 + 8),&UNK_10dfa335c,0x3e);
      func_0x000107c3075c();
      func_0x00010b5ef0d0(lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108dfa998; end: 108dfa9bb; -[SnapAddressTitleTable copyWithZone:] */

undefined8 FUN_108dfa998(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108dfa9bc; end: 108dfaa2f; -[SnapAddressTitleTable hash] */

undefined8 * FUN_108dfa9bc(long param_1,undefined8 param_2,undefined8 *param_3)

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
  func_0x000107c3191c(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_108dfaab0:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_108dfaabc;
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
          goto LAB_108dfaabc;
        }
        goto LAB_108dfaab0;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_108dfaabc:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 108dfaa30; end: 108dfaad7; -[SnapAddressTitleTable isEqual:] */

long FUN_108dfaa30(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108dfaab0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108dfaabc;
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
          goto LAB_108dfaabc;
        }
        goto LAB_108dfaab0;
      }
    }
    lVar3 = 0;
  }
LAB_108dfaabc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108dfaad8; end: 108dfab83; -[SnapAddressTitleTable .cxx_destruct] */

void FUN_108dfaad8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108dfab84; end: 108dfaba7; -[QueryAddressTitle copyWithZone:] */

undefined8 FUN_108dfab84(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108dfaba8; end: 108dfabaf; -[QueryAddressTitle hash] */

void FUN_108dfaba8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 108dfabb0; end: 108dfac3f; -[QueryAddressTitle isEqual:] */

long FUN_108dfabb0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108dfac24;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_108dfac24;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_108dfac24;
    }
  }
  lVar3 = 1;
LAB_108dfac24:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108dfac40; end: 108dfac4b; -[QueryAddressTitle .cxx_destruct] */

void FUN_108dfac40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108dfac4c; end: 108dfaccf; +[SCCMemoriesSnapKeyIvDbDb schema] */

void FUN_108dfac4c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b84f8;
  _objc_alloc(PTR_PTR_1126b84f8);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f51ca34);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c060a40(puVar1,param_2,0,puVar2,PTR____NSArray0__struct_11034ab48);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108dfacd0; end: 108dfacf7; -[SCCMemoriesSnapKeyIvDbDb getConn] */

void FUN_108dfacd0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108dfacf8; end: 108dfad7f; -[SCCMemoriesSnapKeyIvDbDb initWithSqliteConnection:] */

undefined1 * FUN_108dfacf8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fe948;
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



/* Entry: 108dfad80; end: 108dfadeb; -[SCCMemoriesSnapKeyIvDbDb .cxx_destruct] */

void FUN_108dfad80(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108dfadec; end: 108dfadf7; -[SCCMemoriesSnapKeyIvDbDb .cxx_construct] */

void FUN_108dfadec(long param_1)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



/* Entry: 108dfadf8; end: 108dfae1b; -[SnapKeyIvTable copyWithZone:] */

undefined8 FUN_108dfadf8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108dfae1c; end: 108dfaea7; -[SnapKeyIvTable hash] */

undefined8 * FUN_108dfae1c(long param_1,undefined8 param_2,undefined8 *param_3)

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
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_108dfaf58:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_108dfaf64;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[3];
          if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = (undefined8 *)puVar3[4];
            if (puVar6 != (undefined8 *)param_3[4]) {
              func_0x00010c071ae0();
              goto LAB_108dfaf64;
            }
            goto LAB_108dfaf58;
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_108dfaf64:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 108dfaea8; end: 108dfaf7f; -[SnapKeyIvTable isEqual:] */

long FUN_108dfaea8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108dfaf58:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108dfaf64;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if (lVar3 != *(long *)(param_3 + 0x20)) {
              func_0x00010c071ae0();
              goto LAB_108dfaf64;
            }
            goto LAB_108dfaf58;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_108dfaf64:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108dfaf80; end: 108dfafc7; -[SnapKeyIvTable .cxx_destruct] */

void FUN_108dfaf80(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108dfafc8; end: 108dfafeb; -[QueryEncryptionForIdentifier copyWithZone:] */

undefined8 FUN_108dfafc8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108dfafec; end: 108dfb06b; -[QueryEncryptionForIdentifier hash] */

undefined8 * FUN_108dfafec(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_108dfb104:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_108dfb110;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
          if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_108dfb110;
          }
          goto LAB_108dfb104;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_108dfb110:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 108dfb06c; end: 108dfb12b; -[QueryEncryptionForIdentifier isEqual:] */

long FUN_108dfb06c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108dfb104:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108dfb110;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if (lVar3 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_108dfb110;
          }
          goto LAB_108dfb104;
        }
      }
    }
    lVar3 = 0;
  }
LAB_108dfb110:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108dfb12c; end: 108dfb167; -[QueryEncryptionForIdentifier .cxx_destruct] */

void FUN_108dfb12c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108dfb168; end: 108dfb1eb; +[SCCMemoriesLocationDbDb schema] */

void FUN_108dfb168(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b84f8;
  _objc_alloc(PTR_PTR_1126b84f8);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f51cadd);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c060a40(puVar1,param_2,0,puVar2,PTR____NSArray0__struct_11034ab48);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108dfb1ec; end: 108dfb213; -[SCCMemoriesLocationDbDb getConn] */

void FUN_108dfb1ec(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



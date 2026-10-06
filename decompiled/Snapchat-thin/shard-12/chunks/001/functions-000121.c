/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108e31f6c; end: 108e31f73; -[SCQuickCaptionManagerImpl initialState] */

undefined8 FUN_108e31f6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108e31f74; end: 108e31fa3; -[SCQuickCaptionManagerImpl setInitialState:] */

void FUN_108e31f74(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e31fa4; end: 108e31fab; -[SCQuickCaptionManagerImpl temporaryState] */

undefined8 FUN_108e31fa4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108e31fac; end: 108e31fdb; -[SCQuickCaptionManagerImpl setTemporaryState:] */

void FUN_108e31fac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e31fdc; end: 108e31fe7; -[SCQuickCaptionManagerImpl originalContentBounds] */

undefined8 FUN_108e31fdc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108e31fe8; end: 108e31ff3; -[SCQuickCaptionManagerImpl setOriginalContentBounds:] */

void FUN_108e31fe8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  *(undefined8 *)(param_5 + 0x28) = param_1;
  *(undefined8 *)(param_5 + 0x30) = param_2;
  *(undefined8 *)(param_5 + 0x38) = param_3;
  *(undefined8 *)(param_5 + 0x40) = param_4;
  return;
}



/* Entry: 108e31ff4; end: 108e31ffb; -[SCQuickCaptionManagerImpl isLagunaMedia] */

undefined1 FUN_108e31ff4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108e31ffc; end: 108e32003; -[SCQuickCaptionManagerImpl setIsLagunaMedia:] */

void FUN_108e31ffc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 108e32004; end: 108e3201b; -[SCQuickCaptionManagerImpl currentTransform] */

void FUN_108e32004(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x48);
  uVar3 = *(undefined8 *)(param_2 + 0x60);
  uVar2 = *(undefined8 *)(param_2 + 0x58);
  param_1[1] = *(undefined8 *)(param_2 + 0x50);
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 0x68);
  param_1[5] = *(undefined8 *)(param_2 + 0x70);
  param_1[4] = uVar1;
  return;
}



/* Entry: 108e3201c; end: 108e32033; -[SCQuickCaptionManagerImpl setCurrentTransform:] */

void FUN_108e3201c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = param_3[1];
  uVar1 = *param_3;
  uVar4 = param_3[3];
  uVar3 = param_3[2];
  uVar5 = param_3[4];
  *(undefined8 *)(param_1 + 0x70) = param_3[5];
  *(undefined8 *)(param_1 + 0x68) = uVar5;
  *(undefined8 *)(param_1 + 0x60) = uVar4;
  *(undefined8 *)(param_1 + 0x58) = uVar3;
  *(undefined8 *)(param_1 + 0x50) = uVar2;
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  return;
}



/* Entry: 108e32034; end: 108e3206f; -[SCQuickCaptionManagerImpl .cxx_destruct] */

void FUN_108e32034(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108e32070; end: 108e321cf;  */

void FUN_108e32070(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  if (param_2 != 0) {
    lVar1 = param_2;
    func_0x00010c2790e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      func_0x00010bf34840(param_2);
      uVar5 = param_1;
      func_0x00010bf348c0(param_2);
      puVar2 = PTR_PTR_1126b2700;
      uVar6 = uVar5;
      _objc_alloc(PTR_PTR_1126b2700);
      func_0x00010c141a80(param_2);
      func_0x00010c055500(param_1,uVar5,0x3ff0000000000000,uVar6,puVar2);
      puVar3 = PTR_PTR_1126bb2a8;
      _objc_alloc();
      func_0x00010c052280();
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
    else {
      func_0x00010c2790e0();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  _objc_release();
  if ((*(long *)PTR____stack_chk_guard_11034bdc0 != lVar4) && (___stack_chk_fail(), param_2 != 0)) {
    func_0x000107c31908();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e321d0; end: 108e321ef;  */

void FUN_108e321d0(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c31908(param_1,&PTR___NSConcreteGlobalBlock_110ac69f0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e321f0; end: 108e32263;  */

void FUN_108e321f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c296d80(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithFloat__1126157e8);
  return;
}



/* Entry: 108e32264; end: 108e322ab;  */

void FUN_108e32264(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010bfb2c80(param_3);
  puVar1 = PTR_PTR_1126c0300;
  _objc_opt_new(PTR_PTR_1126c0300);
  func_0x00010c220160(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108e322ac; end: 108e324b7;  */

void FUN_108e322ac(float param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  _objc_retain();
  if (param_2 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126dc010;
    _objc_alloc_init(PTR_PTR_1126dc010);
    lVar4 = param_2;
    func_0x00010bf40c80();
    if (lVar4 == 0) {
      func_0x00010c17e800(puVar3,param_3,0);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    else {
      lVar4 = param_2;
      func_0x00010bf40c60(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c17e800(puVar3,param_3,lVar4);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(lVar4);
    }
    lVar4 = param_2;
    func_0x00010bf41340();
    if (lVar4 == 0) {
      func_0x00010c17e9e0(puVar3,param_3,0);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    else {
      lVar4 = param_2;
      func_0x00010bf41320(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      FUN_108e321d0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c17e9e0(puVar3,param_3,lVar5);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(lVar5);
      _objc_release(lVar4);
    }
    lVar4 = param_2;
    func_0x00010bf413c0();
    iVar2 = (int)lVar4;
    if (iVar2 < 2) {
      if ((iVar2 == -0x4524111) || (uVar6 = 0x3f26f14, iVar2 == 0)) {
        uVar6 = 0;
      }
    }
    else {
      uVar1 = 0x3f26f14;
      if (iVar2 == 2) {
        uVar1 = 0xffffffff89879c63;
      }
      uVar6 = 0x7bf02fb1;
      if (iVar2 != 3) {
        uVar6 = uVar1;
      }
    }
    func_0x00010c17eaa0(puVar3,param_3,uVar6);
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar4 = param_2;
    func_0x00010bf41000(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c296d80();
    func_0x00010c17e920((double)param_1,puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar4);
    lVar4 = param_2;
    func_0x00010bf41460(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    FUN_108e321d0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17eac0(puVar3,param_3,lVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar4);
    puVar7 = puVar3;
    func_0x00010bf21f60(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 108e324b8; end: 108e32663;  */

void FUN_108e324b8(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar7 = (undefined4)((ulong)param_1 >> 0x20);
  uVar6 = (undefined4)param_1;
  _objc_retain();
  if (param_2 == 0) {
    puVar5 = (undefined *)0x0;
    goto LAB_108e32644;
  }
  puVar5 = PTR_PTR_1126dc120;
  _objc_opt_new(PTR_PTR_1126dc120);
  lVar1 = param_2;
  func_0x00010bf40c40(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0d3c80();
  func_0x00010c17e840(puVar5,param_3,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf41300(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x000108e3221c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17ea00(puVar5,param_3,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf41400();
  uVar4 = 1;
  if (lVar1 < 0) {
    if (lVar1 == -0x7678639d) {
      uVar4 = 2;
    }
    else if (lVar1 == -0x4ab130cd) goto LAB_108e325b8;
  }
  else if (lVar1 == 0) {
LAB_108e325b8:
    uVar4 = 0;
  }
  else {
    uVar4 = 3;
    if (lVar1 != 0x7bf02fb1) {
      uVar4 = 1;
    }
  }
  func_0x00010c17ea80(puVar5,param_3,uVar4);
  func_0x00010bf41020(param_2);
  puVar3 = PTR_PTR_1126c0300;
  _objc_opt_new(PTR_PTR_1126c0300);
  func_0x00010c220160((float)(double)CONCAT44(uVar7,uVar6));
  func_0x00010c17e900(puVar5,param_3,puVar3);
  _objc_release(puVar3);
  lVar1 = param_2;
  func_0x00010bf41440(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x000108e3221c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17eae0(puVar5,param_3,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
LAB_108e32644:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108e32664; end: 108e327d7;  */

void FUN_108e32664(float param_1,ulong param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  float fVar5;
  double dVar6;
  
  _objc_retain();
  if (param_2 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126dc020;
    _objc_alloc_init(PTR_PTR_1126dc020);
    uVar2 = param_2;
    func_0x00010c2be880(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c296d80();
    dVar6 = (double)param_1;
    func_0x00010c227680(dVar6,puVar1);
    fVar5 = SUB84(dVar6,0);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar2 = param_2;
    func_0x00010c2beba0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c296d80();
    dVar6 = (double)fVar5;
    func_0x00010c227840(dVar6,puVar1);
    fVar5 = SUB84(dVar6,0);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar2 = param_2;
    func_0x00010c11ef60(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c296d80();
    func_0x00010c1e6ec0((double)fVar5,puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar2 = param_2;
    func_0x00010bfd56a0();
    if ((uVar2 & 1) == 0) {
      func_0x00010c17e800(puVar1,param_3,0);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    else {
      uVar2 = param_2;
      func_0x00010bf40c40(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      FUN_108e322ac();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c17e800(puVar1,param_3,uVar3);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(uVar3);
      _objc_release(uVar2);
    }
    puVar4 = puVar1;
    func_0x00010bf21f60(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108e327d8; end: 108e32913;  */

void FUN_108e327d8(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  puVar4 = PTR_PTR_1126dc128;
  uVar6 = (undefined4)((ulong)param_1 >> 0x20);
  uVar7 = (undefined4)param_1;
  if (param_2 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    _objc_retain();
    _objc_opt_new(puVar4);
    lVar1 = param_2;
    func_0x00010bf40c40(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    FUN_108e324b8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17e800(puVar4,param_3,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
    func_0x00010c2beb40(param_2);
    puVar3 = PTR_PTR_1126c0300;
    _objc_opt_new(PTR_PTR_1126c0300);
    fVar5 = (float)(double)CONCAT44(uVar6,uVar7);
    uVar7 = 0;
    func_0x00010c220160(fVar5);
    func_0x00010c227500(puVar4,param_3,puVar3);
    _objc_release(puVar3);
    func_0x00010c2bed60(param_2);
    puVar3 = PTR_PTR_1126c0300;
    _objc_opt_new(PTR_PTR_1126c0300);
    fVar5 = (float)(double)CONCAT44(uVar7,fVar5);
    uVar7 = 0;
    func_0x00010c220160(fVar5);
    func_0x00010c2276e0(puVar4,param_3,puVar3);
    _objc_release(puVar3);
    func_0x00010c11efa0(param_2);
    _objc_release(param_2);
    puVar3 = PTR_PTR_1126c0300;
    _objc_opt_new(PTR_PTR_1126c0300);
    func_0x00010c220160((float)(double)CONCAT44(uVar7,fVar5));
    func_0x00010c1e6e60(puVar4,param_3,puVar3);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108e32914; end: 108e329df;  */

void FUN_108e32914(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126dc148;
  _objc_retain(param_2);
  _objc_opt_new(puVar1);
  func_0x00010c1bf6c0();
  func_0x00010c1ba840(puVar1);
  puVar2 = PTR_PTR_1126dc140;
  _objc_opt_new(PTR_PTR_1126dc140);
  uVar3 = param_2;
  func_0x00010bfe1180(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c17e800(puVar2);
  _objc_release(uVar3);
  func_0x00010c1e6f40(puVar2);
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x20));
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108e329e0; end: 108e32b8b;  */

void FUN_108e329e0(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_2;
    func_0x00010c0e00e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14d200();
    _objc_release(lVar1);
    lVar1 = param_2;
    func_0x00010c0e00e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14d1e0();
    _objc_release(lVar1);
  }
  lVar1 = param_2;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_2;
    func_0x00010c0e00e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067ec0();
    _objc_release(lVar1);
  }
  puVar2 = PTR_PTR_1126dc148;
  _objc_opt_new(PTR_PTR_1126dc148);
  func_0x00010c1bf6c0();
  func_0x00010c1ba840(puVar2);
  puVar3 = PTR_PTR_1126dc150;
  _objc_opt_new(PTR_PTR_1126dc150);
  func_0x00010c1af960();
  func_0x00010c1b2000(puVar3);
  func_0x00010c1b5440(puVar3);
  func_0x00010c1e6f40(puVar3);
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x20));
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108e32b8c; end: 108e32b9b;  */

void FUN_108e32b8c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  puVar4 = PTR_PTR_1126dc128;
  uVar6 = (undefined4)((ulong)param_1 >> 0x20);
  uVar7 = (undefined4)param_1;
  if (param_3 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    _objc_retain();
    _objc_opt_new(puVar4);
    lVar1 = param_3;
    func_0x00010bf40c40(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    FUN_108e324b8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17e800(puVar4);
    _objc_release(lVar2);
    _objc_release(lVar1);
    func_0x00010c2beb40(param_3);
    puVar3 = PTR_PTR_1126c0300;
    _objc_opt_new(PTR_PTR_1126c0300);
    fVar5 = (float)(double)CONCAT44(uVar6,uVar7);
    uVar7 = 0;
    func_0x00010c220160(fVar5);
    func_0x00010c227500(puVar4);
    _objc_release(puVar3);
    func_0x00010c2bed60(param_3);
    puVar3 = PTR_PTR_1126c0300;
    _objc_opt_new(PTR_PTR_1126c0300);
    fVar5 = (float)(double)CONCAT44(uVar7,fVar5);
    uVar7 = 0;
    func_0x00010c220160(fVar5);
    func_0x00010c2276e0(puVar4);
    _objc_release(puVar3);
    func_0x00010c11efa0(param_3);
    _objc_release(param_3);
    puVar3 = PTR_PTR_1126c0300;
    _objc_opt_new(PTR_PTR_1126c0300);
    func_0x00010c220160((float)(double)CONCAT44(uVar7,fVar5));
    func_0x00010c1e6e60(puVar4);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108e32b9c; end: 108e32e57;  */

undefined * FUN_108e32b9c(long param_1,long param_2,long param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar10 = (undefined *)0x0;
  if ((((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) && (param_4 != (long *)0x0)) {
    puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    lVar2 = param_1;
    func_0x00010c0ff580();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar3 != 0) {
      lVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar2);
        }
        lVar11 = *(long *)(lVar9 * 8);
        lVar4 = param_1;
        func_0x00010c0ff640();
        _objc_retainAutoreleasedReturnValue();
        lVar12 = *param_4;
        *param_4 = lVar12 + 1;
        if (lVar11 == 0 || lVar4 == 0) {
          lVar13 = 0;
        }
        else {
          _objc_retain(param_2);
          _objc_retain(param_1);
          _objc_retain(lVar11);
          _objc_retain(lVar4);
          lVar5 = lVar4;
          func_0x00010c118b40(lVar4);
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar5;
          func_0x00010c27a600();
          _objc_retainAutoreleasedReturnValue();
          lVar7 = param_1;
          func_0x00010bf67240(param_1);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(param_1);
          _objc_release(lVar6);
          _objc_release(lVar5);
          lVar6 = lVar4;
          func_0x00010bf5cc00(lVar4);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar4);
          lVar13 = lVar6;
          lVar5 = lVar7;
          FUN_108e35fac(lVar6,lVar7,param_2,lVar11,lVar12);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(param_2);
          _objc_release(lVar11);
          _objc_release(lVar6);
          _objc_release(lVar7);
        }
        func_0x00010befa140(puVar10);
        _objc_release(lVar13);
        _objc_release(lVar4);
        lVar9 = lVar9 + 1;
      } while (lVar3 != lVar9);
      lVar3 = lVar2;
      func_0x00010bf52a60();
    }
    _objc_release(lVar2);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
    return puVar10;
  }
  ___stack_chk_fail();
  func_0x00010bf5cc00(lVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar5;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar8;
  func_0x00010c0cc820();
  _objc_release(lVar8);
  _objc_release(lVar5);
  return (undefined *)(ulong)((int)lVar3 == 2);
}



/* Entry: 108e32e58; end: 108e32e5f;  */

bool FUN_108e32e58(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf5cc00(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0cc820();
  _objc_release(uVar1);
  _objc_release(param_2);
  return (int)uVar2 == 2;
}



/* Entry: 108e32e60; end: 108e32ebf;  */

bool FUN_108e32e60(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf5cc00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0cc820();
  _objc_release(uVar1);
  _objc_release(param_1);
  return (int)uVar2 == 2;
}



/* Entry: 108e32ec0; end: 108e32fcf;  */

void FUN_108e32ec0(double param_1,double param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar3 = (undefined *)0x0;
  if (((param_3 != 0) && (param_4 != 0)) && (param_5 != 0)) {
    _objc_retain(param_5);
    _objc_retain(param_3);
    lVar1 = param_5;
    func_0x00010bf931e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126c7b90;
    _objc_opt_new(PTR_PTR_1126c7b90);
    func_0x00010c2199c0();
    func_0x00010bf930a0((float)param_1,param_5);
    func_0x00010c2256c0(puVar2);
    func_0x00010bf930c0((float)param_2,param_5);
    _objc_release(param_5);
    func_0x00010c1a7d00(puVar2);
    puVar3 = PTR_PTR_1126b25d0;
    _objc_opt_new(PTR_PTR_1126b25d0);
    func_0x00010c1e5020();
    func_0x00010c1863a0(puVar3);
    _objc_release(param_3);
    _objc_release(puVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108e32fd0; end: 108e344d3;  */

void FUN_108e32fd0(double param_1,undefined8 param_2,ulong param_3,undefined **param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined *puVar20;
  undefined **ppuVar21;
  undefined **ppuVar22;
  undefined8 uVar23;
  long lVar24;
  undefined *puVar25;
  ulong uVar26;
  ulong uVar27;
  undefined8 uVar28;
  undefined *puVar29;
  ulong uVar30;
  float fVar31;
  double dVar32;
  undefined **ppuStack_168;
  
  lVar24 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = param_4;
  _objc_retain();
  _objc_retain(param_4);
  puVar25 = (undefined *)0x0;
  if ((param_3 != 0) && (param_4 != (undefined **)0x0)) {
    uVar27 = param_3;
    func_0x00010bf5cc00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar27;
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf30500();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar27);
    uVar27 = param_3;
    func_0x00010bf5cc00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar27;
    func_0x00010c0840e0();
    _objc_retainAutoreleasedReturnValue();
    uVar30 = uVar2;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar30;
    func_0x00010bf30580();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar30);
    _objc_release(uVar2);
    _objc_release(uVar27);
    uVar27 = param_3;
    func_0x00010c118b40(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar27;
    func_0x00010c27a600();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = param_4;
    func_0x00010bf67240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar27);
    ppuVar6 = ppuVar5;
    func_0x00010bf529e0();
    if (ppuVar6 < (undefined **)0x2) {
      ppuStack_168 = (undefined **)0x0;
    }
    else {
      ppuStack_168 = ppuVar5;
      FUN_1091743c8();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuVar6 = ppuVar5;
    func_0x00010bf529e0();
    if (ppuVar6 < (undefined **)0x4) {
      ppuVar6 = ppuVar5;
      func_0x00010bfb1920(ppuVar5);
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = ppuVar6;
      func_0x00010c27a460();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14e120();
      if (param_1 != 0.0) {
        ppuVar8 = ppuVar5;
        func_0x00010c089820(ppuVar5);
        _objc_retainAutoreleasedReturnValue();
        ppuVar9 = ppuVar8;
        func_0x00010c27a460();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14e120();
        _objc_release(ppuVar9);
        _objc_release(ppuVar8);
      }
      _objc_release(ppuVar7);
      _objc_release(ppuVar6);
    }
    puVar10 = PTR__OBJC_CLASS___NSScanner_1126b3380;
    uVar27 = uVar3;
    func_0x00010bf40c40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14f820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar27);
    func_0x00010c14ec80(puVar10);
    ppuVar6 = ppuVar5;
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar6;
    func_0x00010c27a460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar6);
    puVar29 = PTR_PTR_1126c4000;
    _objc_alloc_init();
    func_0x00010c27ada0(ppuVar7);
    func_0x00010c227680(puVar29);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c27ada0(ppuVar7);
    func_0x00010c227840(param_2,puVar29);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar2 = uVar3;
    func_0x00010c0ca840();
    _objc_retainAutoreleasedReturnValue();
    uVar27 = uVar2;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (uVar27 != 0) {
      uVar30 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(uVar2);
        }
        uVar28 = *(undefined8 *)(uVar30 * 8);
        uVar23 = uVar28;
        func_0x00010bf96da0();
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar23;
        func_0x00010bf96ee0();
        _objc_release(uVar23);
        if ((int)uVar12 == 1) {
          puVar13 = PTR_PTR_1126dc0e0;
          _objc_alloc_init(PTR_PTR_1126dc0e0);
          uVar23 = uVar28;
          func_0x00010bf96da0(uVar28);
          _objc_retainAutoreleasedReturnValue();
          uVar12 = uVar23;
          func_0x00010c290fa0();
          _objc_retainAutoreleasedReturnValue();
          uVar14 = uVar12;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c21e620(puVar13);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(uVar14);
          _objc_release(uVar12);
          _objc_release(uVar23);
          puVar25 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c11f2a0(uVar28);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c09ea00();
          func_0x00010c0df7c0(puVar25);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2097e0(puVar13);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(puVar25);
          _objc_release(uVar28);
          puVar25 = puVar13;
          func_0x00010bf21f60(puVar13);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar11);
          _objc_release(puVar25);
          _objc_release(puVar13);
        }
        uVar30 = uVar30 + 1;
      } while (uVar27 != uVar30);
      uVar27 = uVar2;
      func_0x00010bf52a60();
    }
    _objc_release(uVar2);
    uVar27 = uVar4;
    func_0x00010bf305a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar27;
    func_0x000107c31908();
    _objc_release(uVar27);
    puVar13 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar27 = uVar2;
    func_0x00010bf529e0();
    if (uVar27 == 0) {
      uVar27 = 0;
      uVar30 = 0;
    }
    else {
      uVar26 = 0;
      uVar16 = 0;
      uVar19 = 0;
      do {
        uVar15 = uVar2;
        func_0x00010c0dfd20();
        _objc_retainAutoreleasedReturnValue();
        uVar27 = uVar15;
        func_0x00010bf51e00();
        uVar30 = uVar16;
        if (uVar26 != 0) {
          func_0x00010befa120(puVar13);
          uVar30 = uVar27;
          uVar27 = uVar16;
        }
        _objc_release(uVar30);
        uVar30 = uVar15;
        func_0x00010bf303a0();
        _objc_retainAutoreleasedReturnValue();
        uVar16 = uVar30;
        func_0x00010c25e080();
        _objc_retainAutoreleasedReturnValue();
        uVar17 = uVar3;
        func_0x00010bf07fc0(uVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar18 = uVar16;
        func_0x00010c0720c0();
        _objc_release(uVar17);
        _objc_release(uVar16);
        _objc_release(uVar30);
        uVar30 = uVar19;
        if ((int)uVar18 != 0) {
          uVar30 = uVar15;
          func_0x00010bf51e00();
          _objc_release(uVar19);
        }
        _objc_release(uVar15);
        uVar26 = uVar26 + 1;
        uVar15 = uVar2;
        func_0x00010bf529e0();
        uVar16 = uVar27;
        uVar19 = uVar30;
      } while (uVar26 < uVar15);
    }
    uVar26 = uVar3;
    func_0x00010bf41260();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar26;
    func_0x000107c31908();
    _objc_release(uVar26);
    uVar26 = uVar3;
    func_0x00010c25e200();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = &PTR___NSConcreteGlobalBlock_110ac6b90;
    uVar19 = uVar26;
    func_0x000107c31908();
    _objc_release(uVar26);
    puVar20 = PTR_PTR_1126dc0f0;
    _objc_alloc_init();
    func_0x00010c26b7a0();
    func_0x00010c21ace0(puVar20);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar26 = uVar3;
    func_0x00010c26b700(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(puVar20);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar26);
    uVar26 = uVar3;
    func_0x00010bf85740(uVar3);
    func_0x00010c19e600((double)(int)uVar26,puVar20);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar26 = uVar3;
    func_0x00010bf8c740(uVar3);
    param_1 = (double)(int)uVar26;
    func_0x00010c193bc0(param_1,puVar20);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar25 = puVar29;
    func_0x00010bf21f60(puVar29);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dee80(puVar20);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar25);
    func_0x00010c141a80(ppuVar7);
    func_0x00010c1ee8e0(puVar20);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c1b51a0(puVar20);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c219440(puVar20);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar26 = uVar3;
    func_0x00010bf40c40();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar26;
    func_0x00010c08fa60();
    if (uVar15 == 0) {
      func_0x00010c1db640(puVar20);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    else {
      puVar25 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df820();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1db640(puVar20);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar25);
    }
    _objc_release(uVar26);
    func_0x00010bf529e0();
    func_0x00010c21f5a0(puVar20);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c193040(puVar20);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c1b50a0(puVar20);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c165940(puVar20);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c169a20(puVar20);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010c213120(puVar20);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010c20eac0(puVar20);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar26 = uVar3;
    func_0x00010bfc0860();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar26;
    func_0x00010c08fa60();
    if (uVar15 == 0) {
      func_0x00010c1a2740(puVar20);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    else {
      uVar15 = uVar3;
      func_0x00010bfc0860();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a2740(puVar20);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(uVar15);
    }
    _objc_release(uVar26);
    puVar25 = puVar20;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar20);
    _objc_release(uVar19);
    _objc_release(uVar16);
    _objc_release(uVar30);
    _objc_release(puVar13);
    _objc_release(uVar27);
    _objc_release(uVar2);
    _objc_release(puVar11);
    _objc_release(puVar29);
    _objc_release(ppuVar7);
    _objc_release(puVar10);
    _objc_release(ppuStack_168);
    _objc_release(ppuVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  fVar31 = SUB84(param_1,0);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar24) {
    ___stack_chk_fail();
    _objc_retain(ppuVar6);
    if (ppuVar6 == (undefined **)0x0) {
      puVar25 = (undefined *)0x0;
    }
    else {
      ppuVar5 = ppuVar6;
      func_0x00010bfb40c0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = ppuVar5;
      func_0x00010c26c7c0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = ppuVar7;
      func_0x000107c31908();
      _objc_release(ppuVar7);
      _objc_release(ppuVar5);
      ppuVar5 = ppuVar6;
      func_0x00010bfb40c0();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR_PTR_1126dc040;
      _objc_alloc_init(PTR_PTR_1126dc040);
      ppuVar7 = ppuVar5;
      func_0x00010bfb3f20(ppuVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19e560(puVar10);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(ppuVar7);
      puVar25 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      ppuVar7 = ppuVar5;
      func_0x00010bfb4120(ppuVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c078c00();
      if ((int)puVar25 == 0) {
        ppuVar9 = ppuVar5;
        func_0x00010bfb4120(ppuVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c19e660(puVar10);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(ppuVar9);
      }
      else {
        func_0x00010c19e660(puVar10);
        _objc_unsafeClaimAutoreleasedReturnValue();
      }
      _objc_release(ppuVar7);
      ppuVar7 = ppuVar5;
      func_0x00010bfd7380();
      if (((ulong)ppuVar7 & 1) == 0) {
        func_0x00010c19e500(puVar10);
        _objc_unsafeClaimAutoreleasedReturnValue();
      }
      else {
        ppuVar7 = ppuVar5;
        func_0x00010bfb3c40(ppuVar5);
        _objc_retainAutoreleasedReturnValue();
        ppuVar9 = ppuVar7;
        FUN_108e322ac();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c19e500(puVar10);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(ppuVar9);
        _objc_release(ppuVar7);
      }
      puVar25 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      ppuVar7 = ppuVar6;
      func_0x00010bf144e0(ppuVar6);
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = ppuVar7;
      func_0x00010bf14140();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c078c00();
      if ((int)puVar25 == 0) {
        ppuVar21 = ppuVar6;
        func_0x00010bf144e0(ppuVar6);
        _objc_retainAutoreleasedReturnValue();
        ppuVar22 = ppuVar21;
        func_0x00010bf14140();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c16e7a0(puVar10);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(ppuVar22);
        _objc_release(ppuVar21);
      }
      else {
        func_0x00010c16e7a0(puVar10);
        _objc_unsafeClaimAutoreleasedReturnValue();
      }
      _objc_release(ppuVar9);
      _objc_release(ppuVar7);
      ppuVar7 = ppuVar5;
      func_0x00010c0989c0(ppuVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c296d80();
      dVar32 = (double)fVar31;
      func_0x00010c1bd7e0(dVar32,puVar10);
      fVar31 = SUB84(dVar32,0);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(ppuVar7);
      ppuVar7 = ppuVar5;
      func_0x00010c099280(ppuVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c296d80();
      dVar32 = (double)fVar31;
      func_0x00010c1bdc20(dVar32,puVar10);
      fVar31 = SUB84(dVar32,0);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(ppuVar7);
      func_0x00010c26ca00();
      func_0x00010c2138a0(puVar10);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010bf529e0();
      func_0x00010c213700(puVar10);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c26bb00();
      func_0x00010c213280(puVar10);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c26b760();
      func_0x00010c213020(puVar10);
      _objc_unsafeClaimAutoreleasedReturnValue();
      ppuVar7 = ppuVar5;
      func_0x00010bfb4000(ppuVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c296d80();
      dVar32 = (double)fVar31;
      func_0x00010c19e600(dVar32,puVar10);
      fVar31 = SUB84(dVar32,0);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(ppuVar7);
      ppuVar7 = ppuVar5;
      func_0x00010bfd9f40();
      if (((ulong)ppuVar7 & 1) == 0) {
        func_0x00010c1d7e40(puVar10);
        _objc_unsafeClaimAutoreleasedReturnValue();
      }
      else {
        ppuVar7 = ppuVar5;
        func_0x00010c0f0ba0();
        _objc_retainAutoreleasedReturnValue();
        puVar25 = PTR_PTR_1126dc030;
        if (ppuVar7 == (undefined **)0x0) {
          puVar29 = (undefined *)0x0;
        }
        else {
          _objc_retain(ppuVar7);
          _objc_alloc_init(puVar25);
          ppuVar9 = ppuVar7;
          func_0x00010c274140(ppuVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c296d80();
          dVar32 = (double)fVar31;
          func_0x00010c2176c0(dVar32,puVar25);
          fVar31 = SUB84(dVar32,0);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(ppuVar9);
          ppuVar9 = ppuVar7;
          func_0x00010c08e360(ppuVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c296d80();
          dVar32 = (double)fVar31;
          func_0x00010c1ba380(dVar32,puVar25);
          fVar31 = SUB84(dVar32,0);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(ppuVar9);
          ppuVar9 = ppuVar7;
          func_0x00010c140820(ppuVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c296d80();
          dVar32 = (double)fVar31;
          func_0x00010c1ee280(dVar32,puVar25);
          fVar31 = SUB84(dVar32,0);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(ppuVar9);
          ppuVar9 = ppuVar7;
          func_0x00010bf1fec0(ppuVar7);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar7);
          func_0x00010c296d80(ppuVar9);
          dVar32 = (double)fVar31;
          func_0x00010c1737e0(dVar32,puVar25);
          fVar31 = SUB84(dVar32,0);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(ppuVar9);
          puVar29 = puVar25;
          func_0x00010bf21f60(puVar25);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar25);
        }
        func_0x00010c1d7e40(puVar10);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar29);
        _objc_release(ppuVar7);
      }
      ppuVar7 = ppuVar5;
      func_0x00010bfd4c40();
      if (((ulong)ppuVar7 & 1) == 0) {
        func_0x00010c173280(puVar10);
        _objc_unsafeClaimAutoreleasedReturnValue();
      }
      else {
        ppuVar7 = ppuVar5;
        func_0x00010bf1fb20(ppuVar5);
        _objc_retainAutoreleasedReturnValue();
        ppuVar9 = ppuVar7;
        FUN_108e322ac();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c173280(puVar10);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(ppuVar9);
        _objc_release(ppuVar7);
      }
      ppuVar7 = ppuVar5;
      func_0x00010bfb3bc0(ppuVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c296d80();
      dVar32 = (double)fVar31;
      func_0x00010c19e4e0(dVar32,puVar10);
      fVar31 = SUB84(dVar32,0);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(ppuVar7);
      ppuVar7 = ppuVar5;
      func_0x00010bfd9200();
      puVar25 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if (((ulong)ppuVar7 & 1) == 0) {
        func_0x00010c1c7ba0(puVar10);
        _objc_unsafeClaimAutoreleasedReturnValue();
      }
      else {
        ppuVar7 = ppuVar5;
        func_0x00010c0cd720(ppuVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c296d80();
        func_0x00010c0df740(puVar25);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1c7ba0(puVar10);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar25);
        _objc_release(ppuVar7);
      }
      uVar23 = 0x6ca5c9d9;
      func_0x00010b79b7f0(0x6ca5c9d9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e840(puVar10);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(uVar23);
      ppuVar7 = ppuVar6;
      func_0x00010bf144e0();
      _objc_retainAutoreleasedReturnValue();
      puVar29 = PTR_PTR_1126dc050;
      _objc_alloc_init(PTR_PTR_1126dc050);
      ppuVar9 = ppuVar7;
      func_0x00010bfd56a0();
      if (((ulong)ppuVar9 & 1) == 0) {
        func_0x00010c17e800(puVar29);
        _objc_unsafeClaimAutoreleasedReturnValue();
      }
      else {
        ppuVar9 = ppuVar7;
        func_0x00010bf40c40(ppuVar7);
        _objc_retainAutoreleasedReturnValue();
        ppuVar21 = ppuVar9;
        FUN_108e322ac();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c17e800(puVar29);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(ppuVar21);
        _objc_release(ppuVar9);
      }
      ppuVar9 = ppuVar7;
      func_0x00010bfd4cc0();
      if (((ulong)ppuVar9 & 1) == 0) {
        func_0x00010c173a20(puVar29);
        _objc_unsafeClaimAutoreleasedReturnValue();
      }
      else {
        ppuVar9 = ppuVar7;
        func_0x00010bf20d60(ppuVar7);
        _objc_retainAutoreleasedReturnValue();
        ppuVar21 = ppuVar9;
        FUN_108e32664();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c173a20(puVar29);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(ppuVar21);
        _objc_release(ppuVar9);
      }
      ppuVar9 = ppuVar7;
      func_0x00010bf1fbe0(ppuVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c296d80();
      func_0x00010c173320((double)fVar31,puVar29);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(ppuVar9);
      puVar11 = PTR_PTR_1126dc060;
      _objc_alloc_init(PTR_PTR_1126dc060);
      ppuVar9 = ppuVar6;
      func_0x00010c25e140(ppuVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c20eb00(puVar11);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(ppuVar9);
      ppuVar9 = ppuVar6;
      func_0x00010bf85d80(ppuVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c18fca0(puVar11);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(ppuVar9);
      puVar25 = puVar10;
      func_0x00010bf21f60(puVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19e620(puVar11);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar25);
      ppuVar9 = ppuVar6;
      func_0x00010bfd47e0();
      if (((ulong)ppuVar9 & 1) == 0) {
        func_0x00010c16e900(puVar11);
        _objc_unsafeClaimAutoreleasedReturnValue();
      }
      else {
        puVar25 = puVar29;
        func_0x00010bf21f60(puVar29);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c16e900(puVar11);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar25);
      }
      func_0x00010bf40d20(ppuVar6);
      func_0x00010c17e8e0(puVar11);
      _objc_unsafeClaimAutoreleasedReturnValue();
      ppuVar9 = ppuVar6;
      func_0x00010bf15ec0(ppuVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16f2c0(puVar11);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(ppuVar9);
      func_0x00010c25e260();
      func_0x00010c21ace0(puVar11);
      _objc_unsafeClaimAutoreleasedReturnValue();
      puVar25 = PTR_PTR_1126dc170;
      _objc_alloc(PTR_PTR_1126dc170);
      puVar13 = puVar11;
      func_0x00010bf21f60(puVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bffc640(puVar25);
      _objc_release(puVar13);
      _objc_release(puVar11);
      _objc_release(puVar29);
      _objc_release(ppuVar7);
      _objc_release(puVar10);
      _objc_release(ppuVar5);
      _objc_release(ppuVar8);
    }
    _objc_release(ppuVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar25);
  return;
}



/* Entry: 108e344d4; end: 108e34807;  */

void FUN_108e344d4(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar1 = PTR_PTR_1126dc138;
  puVar3 = (undefined *)0x0;
  if (param_2 != 0) {
    _objc_retain(param_2);
    _objc_alloc(puVar1);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar2 = param_2;
    func_0x00010c11f2a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09ea00();
    func_0x00010c0df7c0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar4 = param_2;
    func_0x00010c11f2a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60();
    func_0x00010c0df7c0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04b8e0(puVar1);
    _objc_release(puVar5);
    _objc_release(lVar4);
    _objc_release(puVar3);
    _objc_release(lVar2);
    puVar6 = PTR_PTR_1126dc0d0;
    _objc_alloc_init(PTR_PTR_1126dc0d0);
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    lVar2 = param_2;
    func_0x00010bf40c40(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    func_0x00010bf415c0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    func_0x00010c1e6f40(puVar6);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010bf41080(puVar5);
    func_0x00010c17eb00(puVar6);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar3 = puVar6;
    func_0x00010bf21f60(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar6);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108e34808; end: 108e350fb;  */

void FUN_108e34808(double param_1,undefined *param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined *puVar17;
  undefined *puVar18;
  long lVar19;
  undefined8 uVar20;
  double dVar21;
  undefined8 uStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  code *pcStack_1a8;
  undefined *puStack_1a0;
  long lStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long *plStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined **ppuStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_a0;
  
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar18 = (undefined *)0x0;
  if (((param_2 != (undefined *)0x0) && (param_3 != 0)) && (param_4 != 0)) {
    puVar1 = PTR_PTR_1126b0cc0;
    _objc_opt_new();
    puVar2 = PTR_PTR_1126b0cb8;
    _objc_opt_new();
    puVar3 = PTR_PTR_1126b37c0;
    _objc_opt_new();
    puVar4 = PTR_PTR_1126dc178;
    _objc_opt_new();
    puVar5 = PTR_PTR_1126dc180;
    _objc_opt_new();
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar18 = param_2;
    func_0x00010bf8b600(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa140(puVar6);
    _objc_release(puVar18);
    uVar20 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    plStack_180 = (long *)0x0;
    puVar18 = param_2;
    func_0x00010befcf40();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar18;
    func_0x00010bf52a60();
    if (puVar7 != (undefined *)0x0) {
      lVar19 = *plStack_180;
      do {
        puVar17 = (undefined *)0x0;
        do {
          if (*plStack_180 != lVar19) {
            _objc_enumerationMutation(puVar18);
          }
          func_0x00010befa140(puVar6);
          puVar17 = puVar17 + 1;
        } while (puVar7 != puVar17);
        puVar7 = puVar18;
        func_0x00010bf52a60();
      } while (puVar7 != (undefined *)0x0);
    }
    _objc_release(puVar18);
    puVar18 = puVar6;
    func_0x000107c31908(puVar6,&PTR___NSConcreteGlobalBlock_110ac6bd0);
    puVar7 = puVar18;
    func_0x00010c0d3c80();
    func_0x00010c178a20(puVar4);
    _objc_release(puVar7);
    _objc_release(puVar18);
    puVar18 = param_2;
    func_0x00010c293dc0();
    _objc_retainAutoreleasedReturnValue();
    puStack_1b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1b0 = 0xc2000000;
    pcStack_1a8 = FUN_108e35990;
    puStack_1a0 = &UNK_110ac6bf0;
    _objc_retain(param_4);
    puVar7 = puVar18;
    lStack_198 = param_4;
    func_0x000107c31908(puVar18,&puStack_1b8);
    puVar17 = puVar7;
    func_0x00010c0d3c80();
    _objc_release(puVar7);
    _objc_release(puVar18);
    puVar18 = param_2;
    func_0x00010c26b8a0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar18;
    func_0x000107c31908();
    puVar8 = puVar7;
    func_0x00010c0d3c80();
    _objc_release(puVar7);
    _objc_release(puVar18);
    puVar18 = param_2;
    func_0x00010c25dfe0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar18;
    func_0x000107c31908();
    puVar9 = puVar7;
    func_0x00010c0d3c80();
    _objc_release(puVar7);
    _objc_release(puVar18);
    puVar18 = param_2;
    func_0x00010c26b700(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(puVar5);
    _objc_release(puVar18);
    func_0x00010bfb4080(param_2);
    func_0x00010c18fb00(puVar5);
    func_0x00010bf8c760(param_2);
    func_0x00010c193ba0(puVar5);
    func_0x00010c27dde0();
    func_0x00010c213040(puVar5);
    puVar7 = param_2;
    func_0x00010c0fb8e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar18 = PTR__OBJC_CLASS___UIColor_1126aea70;
    if (puVar7 != (undefined *)0x0) {
      puVar7 = param_2;
      func_0x00010c0fb8e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2827c0();
      func_0x00010bf41580(puVar18);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      puVar7 = puVar18;
      func_0x00010bfe1180(puVar18);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c17e800(puVar5);
      _objc_release(puVar7);
      _objc_release(puVar18);
    }
    puVar18 = param_2;
    func_0x00010bf07d40(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar18;
    func_0x00010bf303a0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar7;
    func_0x00010c25e080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c169b20(puVar5);
    _objc_release(puVar10);
    _objc_release(puVar7);
    _objc_release(puVar18);
    func_0x00010bf529e0();
    func_0x00010c1c6ae0(puVar5);
    func_0x00010bf529e0();
    func_0x00010c17e9c0(puVar5);
    func_0x00010bf529e0();
    func_0x00010c20eb60(puVar5);
    puVar18 = param_2;
    func_0x00010bfc0860(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a2740(puVar5);
    _objc_release(puVar18);
    _objc_retain(param_2);
    puVar18 = param_2;
    func_0x00010c2790e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar18 == (undefined *)0x0) {
      puVar18 = param_2;
      func_0x00010c104260(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar18;
      func_0x00010c2be880();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      puVar10 = param_2;
      func_0x00010c104260(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar10;
      func_0x00010c2beba0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      _objc_release(puVar11);
      _objc_release(puVar10);
      _objc_release(puVar7);
      _objc_release(puVar18);
      puVar18 = PTR_PTR_1126b2700;
      _objc_alloc(PTR_PTR_1126b2700);
      func_0x00010c141d40(param_2);
      func_0x00010c055500(uVar20,puVar18);
      puVar7 = PTR_PTR_1126bb2a8;
      _objc_alloc();
      ppuStack_148 = *(undefined ***)(PTR__kCMTimeZero_110348670 + 8);
      puStack_150 = *(undefined **)PTR__kCMTimeZero_110348670;
      uStack_140 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
      func_0x00010c052280();
      puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_150 = puVar7;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
    }
    else {
      puVar18 = param_2;
      func_0x00010c2790e0();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar18;
      FUN_109173e90();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar18);
    _objc_release(param_2);
    func_0x00010c178a00(puVar3);
    func_0x00010c196600(puVar2);
    func_0x00010c1b5d40(puVar1);
    puVar18 = puVar1;
    func_0x00010c0cc0c0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c178980();
    _objc_release(puVar18);
    puVar7 = param_2;
    FUN_108e380fc(param_2,0,0);
    _objc_retainAutoreleasedReturnValue();
    puVar18 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _objc_release(puVar18);
    ppuStack_148 = &puStack_150;
    puStack_150 = (undefined *)0x0;
    uStack_140 = 0x3032000000;
    pcStack_138 = FUN_108e35df0;
    uStack_130 = 0x108e35e00;
    uStack_128 = 0;
    puStack_1d0 = &uStack_1d8;
    uStack_1d8 = 0;
    uStack_1c8 = 0x2020000000;
    uStack_1c0 = 0;
    puStack_1f0 = &uStack_1f8;
    uStack_1f8 = 0;
    uStack_1e8 = 0x2020000000;
    uStack_1e0 = 0;
    func_0x000107c30a80();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar7);
    func_0x00010c0f8240(puVar18);
    _objc_release(puVar18);
    param_1 = (double)puStack_1d0[3];
    puVar18 = puVar1;
    FUN_108e32ec0(param_1,puStack_1f0[3],puVar1,puVar10,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    __Block_object_dispose(&uStack_1f8,8);
    __Block_object_dispose(&uStack_1d8,8);
    __Block_object_dispose(&puStack_150,8);
    _objc_release(uStack_128);
    _objc_release(puVar7);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar17);
    _objc_release(lStack_198);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_a0) {
    ___stack_chk_fail();
    __Block_object_dispose(&uStack_1f8,8);
    __Block_object_dispose(&uStack_1d8,8);
    lVar19 = 8;
    __Block_object_dispose(&puStack_150);
    __Unwind_Resume(param_2);
    _objc_retain(lVar19);
    if (lVar19 == 0) {
      puVar18 = (undefined *)0x0;
    }
    else {
      lVar12 = lVar19;
      func_0x00010bf303a0();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar12;
      func_0x00010bfb40c0();
      _objc_retainAutoreleasedReturnValue();
      lVar14 = lVar13;
      func_0x00010c26c7a0();
      _objc_retainAutoreleasedReturnValue();
      lVar15 = lVar14;
      func_0x000107c31908();
      lVar16 = lVar15;
      func_0x00010c0d3c80();
      _objc_release(lVar15);
      _objc_release(lVar14);
      _objc_release(lVar13);
      _objc_release(lVar12);
      lVar12 = lVar19;
      func_0x00010bf303a0();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar12;
      func_0x00010bfb40c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar12);
      puVar1 = PTR_PTR_1126dc158;
      _objc_opt_new(PTR_PTR_1126dc158);
      lVar12 = lVar13;
      func_0x00010bfb3f20(lVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19e560(puVar1);
      _objc_release(lVar12);
      lVar12 = lVar13;
      func_0x00010bfb4140(lVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19e640(puVar1);
      _objc_release(lVar12);
      lVar12 = lVar13;
      func_0x00010bfb3c40(lVar13);
      _objc_retainAutoreleasedReturnValue();
      lVar14 = lVar12;
      FUN_108e324b8();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19e500(puVar1);
      _objc_release(lVar14);
      _objc_release(lVar12);
      lVar12 = lVar13;
      func_0x00010bf1fb20(lVar13);
      _objc_retainAutoreleasedReturnValue();
      lVar14 = lVar12;
      FUN_108e324b8();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c173280(puVar1);
      _objc_release(lVar14);
      _objc_release(lVar12);
      func_0x00010c0989e0(lVar13);
      puVar18 = PTR_PTR_1126c0300;
      _objc_opt_new(PTR_PTR_1126c0300);
      dVar21 = (double)(ulong)(uint)(float)param_1;
      func_0x00010c220160(dVar21);
      func_0x00010c1bd7a0(puVar1);
      _objc_release(puVar18);
      func_0x00010c0992e0(lVar13);
      puVar18 = PTR_PTR_1126c0300;
      _objc_opt_new(PTR_PTR_1126c0300);
      dVar21 = (double)(ulong)(uint)(float)dVar21;
      func_0x00010c220160(dVar21);
      func_0x00010c1bdbe0(puVar1);
      _objc_release(puVar18);
      func_0x00010bfb4080(lVar13);
      puVar18 = PTR_PTR_1126c0300;
      _objc_opt_new(PTR_PTR_1126c0300);
      dVar21 = (double)(ulong)(uint)(float)dVar21;
      func_0x00010c220160(dVar21);
      func_0x00010c19e5c0(puVar1);
      _objc_release(puVar18);
      func_0x00010bfb3be0(lVar13);
      puVar18 = PTR_PTR_1126c0300;
      _objc_opt_new(PTR_PTR_1126c0300);
      dVar21 = (double)(ulong)(uint)(float)dVar21;
      func_0x00010c220160(dVar21);
      func_0x00010c19e4c0(puVar1);
      _objc_release(puVar18);
      func_0x00010c26ca20();
      func_0x00010c213880(puVar1);
      func_0x00010c26bb40();
      func_0x00010c213260(puVar1);
      func_0x00010c26b780();
      func_0x00010c213000(puVar1);
      lVar12 = lVar13;
      func_0x00010c0f0ba0();
      _objc_retainAutoreleasedReturnValue();
      puVar18 = PTR_PTR_1126dc130;
      if (lVar12 == 0) {
        puVar18 = (undefined *)0x0;
      }
      else {
        _objc_retain(lVar12);
        _objc_opt_new(puVar18);
        func_0x00010c275080(lVar12);
        puVar2 = PTR_PTR_1126c0300;
        _objc_opt_new(PTR_PTR_1126c0300);
        dVar21 = (double)(ulong)(uint)(float)dVar21;
        func_0x00010c220160(dVar21);
        func_0x00010c2172c0(puVar18);
        _objc_release(puVar2);
        func_0x00010c08eae0(lVar12);
        puVar2 = PTR_PTR_1126c0300;
        _objc_opt_new(PTR_PTR_1126c0300);
        dVar21 = (double)(ulong)(uint)(float)dVar21;
        func_0x00010c220160(dVar21);
        func_0x00010c1ba100(puVar18);
        _objc_release(puVar2);
        func_0x00010c140dc0(lVar12);
        puVar2 = PTR_PTR_1126c0300;
        _objc_opt_new(PTR_PTR_1126c0300);
        dVar21 = (double)(ulong)(uint)(float)dVar21;
        func_0x00010c220160(dVar21);
        func_0x00010c1ee020(puVar18);
        _objc_release(puVar2);
        func_0x00010bf20740(lVar12);
        _objc_release(lVar12);
        puVar2 = PTR_PTR_1126c0300;
        _objc_opt_new(PTR_PTR_1126c0300);
        dVar21 = (double)(ulong)(uint)(float)dVar21;
        func_0x00010c220160(dVar21);
        func_0x00010c173440(puVar18);
        _objc_release(puVar2);
      }
      func_0x00010c1d7e40(puVar1);
      _objc_release(puVar18);
      _objc_release(lVar12);
      func_0x00010c0cd740(lVar13);
      puVar18 = PTR_PTR_1126c0300;
      _objc_opt_new(PTR_PTR_1126c0300);
      dVar21 = (double)(ulong)(uint)(float)dVar21;
      func_0x00010c220160(dVar21);
      func_0x00010c1c7ba0(puVar1);
      _objc_release(puVar18);
      func_0x00010bf529e0();
      func_0x00010c213720(puVar1);
      lVar12 = lVar19;
      func_0x00010bf303a0(lVar19);
      _objc_retainAutoreleasedReturnValue();
      lVar14 = lVar12;
      func_0x00010bf144e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar12);
      puVar2 = PTR_PTR_1126dc160;
      _objc_opt_new(PTR_PTR_1126dc160);
      lVar12 = lVar14;
      func_0x00010bf40c40(lVar14);
      _objc_retainAutoreleasedReturnValue();
      lVar15 = lVar12;
      FUN_108e324b8();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c17e800(puVar2);
      _objc_release(lVar15);
      _objc_release(lVar12);
      lVar12 = lVar14;
      func_0x00010bf20d60(lVar14);
      _objc_retainAutoreleasedReturnValue();
      lVar15 = lVar12;
      FUN_108e327d8();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c173a20(puVar2);
      _objc_release(lVar15);
      _objc_release(lVar12);
      func_0x00010bf1fc00(lVar14);
      puVar18 = PTR_PTR_1126c0300;
      _objc_opt_new(PTR_PTR_1126c0300);
      func_0x00010c220160((float)dVar21);
      func_0x00010c173300(puVar2);
      _objc_release(puVar18);
      puVar18 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      lVar12 = lVar13;
      func_0x00010bf14160(lVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c078c00();
      if ((int)puVar18 == 0) {
        lVar15 = lVar13;
        func_0x00010bf14160(lVar13);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c16e780(puVar2);
        _objc_release(lVar15);
      }
      else {
        func_0x00010c16e780(puVar2);
      }
      _objc_release(lVar12);
      lVar12 = lVar19;
      func_0x00010bf303a0();
      _objc_retainAutoreleasedReturnValue();
      puVar18 = PTR_PTR_1126dc168;
      _objc_opt_new(PTR_PTR_1126dc168);
      lVar15 = lVar12;
      func_0x00010c25e080(lVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c20eb20(puVar18);
      _objc_release(lVar15);
      lVar15 = lVar12;
      func_0x00010bf85d80(lVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c18fca0(puVar18);
      _objc_release(lVar15);
      func_0x00010c19e620(puVar18);
      lVar15 = lVar12;
      func_0x00010bf144e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e900(puVar18);
      _objc_release(lVar15);
      func_0x00010bf40d40(lVar12);
      func_0x00010c17e8c0(puVar18);
      lVar15 = lVar12;
      func_0x00010bf15ec0(lVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16f2c0(puVar18);
      _objc_release(lVar15);
      func_0x00010c27dde0();
      func_0x00010c20eb80(puVar18);
      _objc_release(lVar12);
      _objc_release(puVar2);
      _objc_release(lVar14);
      _objc_release(puVar1);
      _objc_release(lVar13);
      _objc_release(lVar16);
    }
    _objc_release(lVar19);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar18);
  return;
}



/* Entry: 108e350fc; end: 108e3598f;  */

void FUN_108e350fc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  uVar10 = (undefined4)((ulong)param_1 >> 0x20);
  uVar11 = (undefined4)param_1;
  _objc_retain(param_3);
  if (param_3 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    lVar1 = param_3;
    func_0x00010bf303a0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfb40c0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c26c7a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x000107c31908();
    lVar5 = lVar4;
    func_0x00010c0d3c80();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010bf303a0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfb40c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puVar6 = PTR_PTR_1126dc158;
    _objc_opt_new(PTR_PTR_1126dc158);
    lVar1 = lVar2;
    func_0x00010bfb3f20(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e560(puVar6);
    _objc_release(lVar1);
    lVar1 = lVar2;
    func_0x00010bfb4140(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e640(puVar6);
    _objc_release(lVar1);
    lVar1 = lVar2;
    func_0x00010bfb3c40(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    FUN_108e324b8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e500(puVar6);
    _objc_release(lVar3);
    _objc_release(lVar1);
    lVar1 = lVar2;
    func_0x00010bf1fb20(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    FUN_108e324b8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c173280(puVar6);
    _objc_release(lVar3);
    _objc_release(lVar1);
    func_0x00010c0989e0(lVar2);
    puVar8 = PTR_PTR_1126c0300;
    _objc_opt_new(PTR_PTR_1126c0300);
    fVar9 = (float)(double)CONCAT44(uVar10,uVar11);
    uVar11 = 0;
    func_0x00010c220160(fVar9);
    func_0x00010c1bd7a0(puVar6);
    _objc_release(puVar8);
    func_0x00010c0992e0(lVar2);
    puVar8 = PTR_PTR_1126c0300;
    _objc_opt_new(PTR_PTR_1126c0300);
    fVar9 = (float)(double)CONCAT44(uVar11,fVar9);
    uVar11 = 0;
    func_0x00010c220160(fVar9);
    func_0x00010c1bdbe0(puVar6);
    _objc_release(puVar8);
    func_0x00010bfb4080(lVar2);
    puVar8 = PTR_PTR_1126c0300;
    _objc_opt_new(PTR_PTR_1126c0300);
    fVar9 = (float)(double)CONCAT44(uVar11,fVar9);
    uVar11 = 0;
    func_0x00010c220160(fVar9);
    func_0x00010c19e5c0(puVar6);
    _objc_release(puVar8);
    func_0x00010bfb3be0(lVar2);
    puVar8 = PTR_PTR_1126c0300;
    _objc_opt_new(PTR_PTR_1126c0300);
    fVar9 = (float)(double)CONCAT44(uVar11,fVar9);
    uVar11 = 0;
    func_0x00010c220160(fVar9);
    func_0x00010c19e4c0(puVar6);
    _objc_release(puVar8);
    func_0x00010c26ca20();
    func_0x00010c213880(puVar6);
    func_0x00010c26bb40();
    func_0x00010c213260(puVar6);
    func_0x00010c26b780();
    func_0x00010c213000(puVar6);
    lVar1 = lVar2;
    func_0x00010c0f0ba0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126dc130;
    if (lVar1 == 0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      _objc_retain(lVar1);
      _objc_opt_new(puVar8);
      func_0x00010c275080(lVar1);
      puVar7 = PTR_PTR_1126c0300;
      _objc_opt_new(PTR_PTR_1126c0300);
      fVar9 = (float)(double)CONCAT44(uVar11,fVar9);
      uVar11 = 0;
      func_0x00010c220160(fVar9);
      func_0x00010c2172c0(puVar8);
      _objc_release(puVar7);
      func_0x00010c08eae0(lVar1);
      puVar7 = PTR_PTR_1126c0300;
      _objc_opt_new(PTR_PTR_1126c0300);
      fVar9 = (float)(double)CONCAT44(uVar11,fVar9);
      uVar11 = 0;
      func_0x00010c220160(fVar9);
      func_0x00010c1ba100(puVar8);
      _objc_release(puVar7);
      func_0x00010c140dc0(lVar1);
      puVar7 = PTR_PTR_1126c0300;
      _objc_opt_new(PTR_PTR_1126c0300);
      fVar9 = (float)(double)CONCAT44(uVar11,fVar9);
      uVar11 = 0;
      func_0x00010c220160(fVar9);
      func_0x00010c1ee020(puVar8);
      _objc_release(puVar7);
      func_0x00010bf20740(lVar1);
      _objc_release(lVar1);
      puVar7 = PTR_PTR_1126c0300;
      _objc_opt_new(PTR_PTR_1126c0300);
      fVar9 = (float)(double)CONCAT44(uVar11,fVar9);
      uVar11 = 0;
      func_0x00010c220160(fVar9);
      func_0x00010c173440(puVar8);
      _objc_release(puVar7);
    }
    func_0x00010c1d7e40(puVar6);
    _objc_release(puVar8);
    _objc_release(lVar1);
    func_0x00010c0cd740(lVar2);
    puVar8 = PTR_PTR_1126c0300;
    _objc_opt_new(PTR_PTR_1126c0300);
    fVar9 = (float)(double)CONCAT44(uVar11,fVar9);
    uVar11 = 0;
    func_0x00010c220160(fVar9);
    func_0x00010c1c7ba0(puVar6);
    _objc_release(puVar8);
    func_0x00010bf529e0();
    func_0x00010c213720(puVar6);
    lVar1 = param_3;
    func_0x00010bf303a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf144e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puVar7 = PTR_PTR_1126dc160;
    _objc_opt_new(PTR_PTR_1126dc160);
    lVar1 = lVar3;
    func_0x00010bf40c40(lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    FUN_108e324b8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17e800(puVar7);
    _objc_release(lVar4);
    _objc_release(lVar1);
    lVar1 = lVar3;
    func_0x00010bf20d60(lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    FUN_108e327d8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c173a20(puVar7);
    _objc_release(lVar4);
    _objc_release(lVar1);
    func_0x00010bf1fc00(lVar3);
    puVar8 = PTR_PTR_1126c0300;
    _objc_opt_new(PTR_PTR_1126c0300);
    func_0x00010c220160((float)(double)CONCAT44(uVar11,fVar9));
    func_0x00010c173300(puVar7);
    _objc_release(puVar8);
    puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    lVar1 = lVar2;
    func_0x00010bf14160(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c078c00();
    if ((int)puVar8 == 0) {
      lVar4 = lVar2;
      func_0x00010bf14160(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e780(puVar7);
      _objc_release(lVar4);
    }
    else {
      func_0x00010c16e780(puVar7);
    }
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010bf303a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126dc168;
    _objc_opt_new(PTR_PTR_1126dc168);
    lVar4 = lVar1;
    func_0x00010c25e080(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20eb20(puVar8);
    _objc_release(lVar4);
    lVar4 = lVar1;
    func_0x00010bf85d80(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18fca0(puVar8);
    _objc_release(lVar4);
    func_0x00010c19e620(puVar8);
    lVar4 = lVar1;
    func_0x00010bf144e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e900(puVar8);
    _objc_release(lVar4);
    func_0x00010bf40d40(lVar1);
    func_0x00010c17e8c0(puVar8);
    lVar4 = lVar1;
    func_0x00010bf15ec0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16f2c0(puVar8);
    _objc_release(lVar4);
    func_0x00010c27dde0();
    func_0x00010c20eb80(puVar8);
    _objc_release(lVar1);
    _objc_release(puVar7);
    _objc_release(lVar3);
    _objc_release(puVar6);
    _objc_release(lVar2);
    _objc_release(lVar5);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 108e35990; end: 108e35b23;  */

void FUN_108e35990(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  
  _objc_retain(param_2);
  lVar6 = *(long *)(param_1 + 0x20);
  uVar1 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ee920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (lVar6 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar7 = PTR_PTR_1126dc188;
    _objc_opt_new(PTR_PTR_1126dc188);
    puVar2 = PTR_PTR_1126dc190;
    _objc_opt_new(PTR_PTR_1126dc190);
    puVar3 = PTR_PTR_1126dc198;
    _objc_opt_new(PTR_PTR_1126dc198);
    puVar4 = PTR_PTR_1126dc148;
    _objc_opt_new(PTR_PTR_1126dc148);
    uVar1 = param_2;
    func_0x00010c24ff00(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067ec0();
    func_0x00010c1bf6c0(puVar4);
    _objc_release(uVar1);
    lVar5 = lVar6;
    func_0x00010c294420(lVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60();
    func_0x00010c1ba840(puVar4);
    _objc_release(lVar5);
    lVar5 = lVar6;
    func_0x00010c2923e0(lVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21e620(puVar3);
    _objc_release(lVar5);
    func_0x00010c21dd80(puVar2);
    func_0x00010c196600(puVar7);
    func_0x00010c1e6f40(puVar7);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(lVar6);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 108e35b24; end: 108e35def;  */

void FUN_108e35b24(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar6 = PTR_PTR_1126dc140;
  if (param_2 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    _objc_retain(param_2);
    _objc_opt_new(puVar6);
    puVar1 = PTR_PTR_1126dc148;
    _objc_opt_new(PTR_PTR_1126dc148);
    lVar2 = param_2;
    func_0x00010c11f2a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c24d960();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067ec0();
    func_0x00010c1bf6c0(puVar1);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010c11f2a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fa60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067ec0();
    func_0x00010c1ba840(puVar1);
    _objc_release(lVar3);
    _objc_release(lVar2);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    lVar2 = param_2;
    func_0x00010bf40c40(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    func_0x00010c2827c0(lVar2);
    func_0x00010bf41580(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    puVar5 = puVar4;
    func_0x00010bfe1180(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17e800(puVar6);
    _objc_release(puVar5);
    func_0x00010c1e6f40(puVar6);
    _objc_release(puVar4);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 108e35df0; end: 108e35e07;  */

void FUN_108e35df0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 108e35e08; end: 108e35edb;  */

void FUN_108e35e08(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  dVar4 = *(double *)(param_1 + 0x40);
  FUN_108e23a3c(dVar4,*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),
                *(undefined8 *)(param_1 + 0x58),uVar1,*(undefined1 *)(param_1 + 0x60),0,0);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
  uVar1 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
  func_0x00010c26ba60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  dVar5 = *(double *)(param_1 + 0x40);
  _CGRectGetWidth(dVar5,*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),
                  *(undefined8 *)(param_1 + 0x58));
  dVar4 = dVar4 / dVar5;
  *(double *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = dVar4;
  func_0x00010bf20c00(uVar1);
  _CGRectGetHeight();
  dVar5 = *(double *)(param_1 + 0x40);
  _CGRectGetHeight(dVar5,*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),
                   *(undefined8 *)(param_1 + 0x58));
  *(double *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = dVar4 / dVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e35edc; end: 108e35f67;  */

void FUN_108e35edc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126bae70;
  puVar3 = (undefined *)0x0;
  if (param_1 != 0) {
    _objc_retain(param_1);
    _objc_opt_new(puVar1);
    lVar2 = param_1;
    func_0x00010c0840e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    puVar3 = puVar1;
    func_0x00010bf96e00(puVar1,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108e35f68; end: 108e35fab;  */

void FUN_108e35f68(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = 0;
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) {
    FUN_108e32b9c();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 108e35fac; end: 108e3757b;  */

void FUN_108e35fac(double param_1,undefined8 param_2,undefined *param_3,ulong param_4,long param_5,
                  long param_6)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  long lVar17;
  undefined *puVar18;
  ulong uVar19;
  long lVar20;
  undefined8 uVar21;
  undefined *puVar22;
  int iVar23;
  undefined *puVar24;
  undefined *puVar25;
  long lVar26;
  long lVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  float fVar31;
  undefined *puStack_3e0;
  
  lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar19 = param_4;
  _objc_retain();
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar28 = (undefined *)0x0;
  if ((((param_3 != (undefined *)0x0) && (param_4 != 0)) && (param_5 != 0)) && (param_6 != 0)) {
    puVar28 = param_3;
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    puVar24 = puVar28;
    func_0x00010bf30500();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar28);
    func_0x00010bf529e0();
    uVar2 = param_4;
    func_0x00010bf529e0();
    if (uVar2 < 4) {
      uVar2 = param_4;
      func_0x00010bfb1920(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c27a460();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14e120();
      if (param_1 != 0.0) {
        uVar4 = param_4;
        func_0x00010c089820(param_4);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010c27a460();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14e120();
        _objc_release(uVar5);
        _objc_release(uVar4);
      }
      _objc_release(uVar3);
      _objc_release(uVar2);
    }
    uVar2 = param_4;
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c27a460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar6 = param_3;
    FUN_108e35edc();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c113040();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar6;
    func_0x00010befd420();
    _objc_retainAutoreleasedReturnValue();
    puVar28 = puVar8;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (puStack_3e0 = puVar7, puVar28 != (undefined *)0x0) {
      puVar29 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar8);
        }
        puStack_3e0 = *(undefined **)((long)puVar29 * 8);
        puVar9 = puStack_3e0;
        func_0x00010c25e080();
        _objc_retainAutoreleasedReturnValue();
        puVar25 = puVar24;
        func_0x00010bf07fc0(puVar24);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar9;
        func_0x00010c0720c0();
        _objc_release(puVar25);
        _objc_release(puVar9);
        if ((int)puVar10 != 0) {
          _objc_retain(puStack_3e0);
          _objc_release(puVar7);
          goto LAB_108e36268;
        }
        puVar29 = puVar29 + 1;
      } while (puVar28 != puVar29);
      puVar28 = puVar8;
      func_0x00010bf52a60();
    }
LAB_108e36268:
    _objc_release(puVar8);
    puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    puVar8 = puVar24;
    func_0x00010c0ca840();
    _objc_retainAutoreleasedReturnValue();
    puVar28 = puVar8;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (puVar28 != (undefined *)0x0) {
      puVar29 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar8);
        }
        uVar21 = *(undefined8 *)((long)puVar29 * 8);
        uVar11 = uVar21;
        func_0x00010bf96da0();
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar11;
        func_0x00010bf96ee0();
        _objc_release(uVar11);
        if ((int)uVar12 == 1) {
          uVar11 = uVar21;
          func_0x00010bf96da0(uVar21);
          _objc_retainAutoreleasedReturnValue();
          uVar12 = uVar11;
          func_0x00010c290fa0();
          _objc_retainAutoreleasedReturnValue();
          uVar13 = uVar12;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          lVar14 = param_5;
          func_0x00010c0ee920();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar13);
          _objc_release(uVar12);
          _objc_release(uVar11);
          if (lVar14 != 0) {
            puVar25 = PTR_PTR_1126dc090;
            _objc_alloc(PTR_PTR_1126dc090);
            uVar11 = uVar21;
            func_0x00010c11f2a0(uVar21);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c09ea00();
            uVar12 = uVar21;
            func_0x00010c11f2a0(uVar21);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c08fa60();
            func_0x00010c05a700(puVar25);
            _objc_release(uVar12);
            _objc_release(uVar11);
            puVar10 = PTR_PTR_1126d2ab0;
            func_0x00010c268440(PTR_PTR_1126d2ab0);
            _objc_retainAutoreleasedReturnValue();
            puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c11f2a0(uVar21);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c09ea00();
            func_0x00010c0df7c0(puVar9);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0560(puVar7);
            _objc_release(puVar9);
            _objc_release(uVar21);
            _objc_release(puVar10);
            _objc_release(puVar25);
          }
          _objc_release(lVar14);
        }
        puVar29 = puVar29 + 1;
      } while (puVar28 != puVar29);
      puVar28 = puVar8;
      func_0x00010bf52a60();
    }
    _objc_release(puVar8);
    puVar28 = PTR_PTR_1126cbf60;
    puVar8 = puVar24;
    func_0x00010c26b700(puVar24);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c252940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_retain(param_3);
    puVar8 = param_3;
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    puVar29 = puVar8;
    func_0x00010bf30500();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    puVar8 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
    _objc_alloc();
    puVar9 = puVar29;
    func_0x00010c26b700(puVar29);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e820();
    _objc_release(puVar9);
    puVar9 = puVar29;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60();
    _objc_release(puVar9);
    puVar9 = PTR__OBJC_CLASS___NSMutableParagraphStyle_1126aec00;
    _objc_opt_new();
    puVar25 = puVar29;
    func_0x00010c26b7a0();
    if ((uint)puVar25 < 4) {
      func_0x00010c166c00(puVar9);
    }
    func_0x00010bef6f20(puVar8);
    puVar25 = puVar29;
    func_0x00010bf41280();
    if (puVar25 == (undefined *)0x0) {
      puVar25 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef6f20(puVar8);
    }
    else {
      puVar25 = puVar29;
      func_0x00010bf41260();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar25;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (puVar10 != (undefined *)0x0) {
        puVar22 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(puVar25);
          }
          lVar26 = *(long *)((long)puVar22 * 8);
          puVar30 = PTR__OBJC_CLASS___UIColor_1126aea70;
          func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
          _objc_retainAutoreleasedReturnValue();
          lVar14 = lVar26;
          func_0x00010bf40c40(lVar26);
          _objc_retainAutoreleasedReturnValue();
          puVar15 = PTR__OBJC_CLASS___UIColor_1126aea70;
          func_0x00010c082c40();
          puVar16 = puVar30;
          if ((int)puVar15 != 0) {
            puVar16 = PTR__OBJC_CLASS___UIColor_1126aea70;
            func_0x00010bf415c0(PTR__OBJC_CLASS___UIColor_1126aea70);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar30);
          }
          lVar27 = lVar26;
          func_0x00010c11f2a0(lVar26);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c09ea00();
          lVar17 = lVar26;
          func_0x00010c11f2a0(lVar26);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c08fa60();
          _objc_release(lVar17);
          _objc_release(lVar27);
          func_0x00010c11f2a0();
          _objc_retainAutoreleasedReturnValue();
          puVar30 = puVar8;
          func_0x00010c08fa60();
          _objc_retain(lVar26);
          lVar27 = lVar26;
          func_0x00010c09ea00();
          if ((lVar27 < 0) || (lVar27 = lVar26, func_0x00010c08fa60(), lVar27 < 0)) {
            _objc_release(lVar26);
            _objc_release(lVar26);
          }
          else {
            lVar27 = lVar26;
            func_0x00010c09ea00();
            lVar17 = lVar26;
            func_0x00010c08fa60();
            _objc_release(lVar26);
            _objc_release(lVar26);
            if ((undefined *)(lVar17 + lVar27) <= puVar30) {
              func_0x00010bef6f20(puVar8);
            }
          }
          _objc_release(lVar14);
          _objc_release(puVar16);
          puVar22 = puVar22 + 1;
        } while (puVar10 != puVar22);
        puVar10 = puVar25;
        func_0x00010bf52a60();
      }
    }
    _objc_release(puVar25);
    func_0x00010c26b7a0();
    puVar25 = PTR__OBJC_CLASS___UIFont_1126aec38;
    puVar10 = puVar29;
    func_0x00010bf85740();
    fVar31 = SUB84((double)(int)puVar10,0);
    func_0x00010bfb41a0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar29;
    func_0x00010c25e220();
    if (puVar10 == (undefined *)0x0) {
      func_0x00010bef6f20(puVar8);
    }
    else {
      fVar31 = 0.0;
      puVar22 = puVar29;
      func_0x00010c25e200();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar22;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (puVar10 != (undefined *)0x0) {
        puVar30 = (undefined *)0x0;
        do {
          iVar23 = (int)puVar29;
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(puVar22);
          }
          lVar27 = *(long *)((long)puVar30 * 8);
          func_0x00010c06d700();
          func_0x00010c075d40(lVar27);
          puVar15 = puVar25;
          func_0x00010bfb3ce0(puVar25);
          _objc_retainAutoreleasedReturnValue();
          puVar16 = puVar15;
          func_0x00010bfb3d60();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar15);
          puVar15 = PTR__OBJC_CLASS___UIFont_1126aec38;
          func_0x00010bf85740();
          fVar31 = SUB84((double)iVar23,0);
          func_0x00010bfb4160(puVar15);
          _objc_retainAutoreleasedReturnValue();
          lVar14 = lVar27;
          func_0x00010c11f2a0(lVar27);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c09ea00();
          lVar26 = lVar27;
          func_0x00010c11f2a0(lVar27);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c08fa60();
          _objc_release(lVar26);
          _objc_release(lVar14);
          lVar14 = lVar27;
          func_0x00010c11f2a0();
          _objc_retainAutoreleasedReturnValue();
          puVar18 = puVar8;
          func_0x00010c08fa60();
          _objc_retain(lVar14);
          lVar26 = lVar14;
          func_0x00010c09ea00();
          if ((lVar26 < 0) || (lVar26 = lVar14, func_0x00010c08fa60(), lVar26 < 0)) {
            _objc_release(lVar14);
            _objc_release(lVar14);
          }
          else {
            lVar26 = lVar14;
            func_0x00010c09ea00();
            lVar17 = lVar14;
            func_0x00010c08fa60();
            _objc_release(lVar14);
            _objc_release(lVar14);
            if ((undefined *)(lVar17 + lVar26) <= puVar18) {
              func_0x00010bef6f20(puVar8);
              func_0x00010c081e60();
              if ((int)lVar27 != 0) {
                func_0x00010bef6f20(puVar8);
              }
            }
          }
          _objc_release(puVar15);
          _objc_release(puVar16);
          puVar30 = puVar30 + 1;
        } while (puVar10 != puVar30);
        puVar10 = puVar22;
        func_0x00010bf52a60();
      }
      _objc_release(puVar22);
    }
    puVar10 = param_3;
    func_0x00010c0840e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar22 = puVar10;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    puVar30 = puVar22;
    func_0x00010bf30580();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar30;
    func_0x00010bf305a0();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar15;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar15);
    _objc_release(puVar30);
    _objc_release(puVar22);
    _objc_release(puVar10);
    puVar10 = puVar16;
    func_0x00010bfb40c0(puVar16);
    _objc_retainAutoreleasedReturnValue();
    puVar22 = puVar10;
    func_0x00010c0989c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c296d80();
    _objc_release(puVar22);
    _objc_release(puVar10);
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (fVar31 != 0.0) {
      puVar22 = puVar16;
      func_0x00010bfb40c0(puVar16);
      _objc_retainAutoreleasedReturnValue();
      puVar30 = puVar22;
      func_0x00010c0989c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c296d80();
      func_0x00010c0df740(puVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef6f20(puVar8);
      _objc_release(puVar10);
      _objc_release(puVar30);
      _objc_release(puVar22);
    }
    puVar10 = puVar8;
    func_0x00010bf51e00(puVar8);
    _objc_release(puVar16);
    _objc_release(puVar25);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar29);
    _objc_release(param_3);
    func_0x00010c16b720(puVar28);
    _objc_release(puVar10);
    puVar8 = puVar24;
    func_0x00010bf85740(puVar24);
    func_0x00010c190940((double)(int)puVar8,puVar28);
    func_0x00010bf85740(puVar24);
    puVar8 = puVar24;
    func_0x00010bf85740();
    if (((int)puVar8 < 0xd) || (puVar8 = puVar24, func_0x00010bf85740(), 0x82 < (int)puVar8)) {
      puVar8 = puStack_3e0;
      func_0x00010bfb40c0(puStack_3e0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb4000();
      func_0x00010c193ba0(puVar28);
      _objc_release(puVar8);
    }
    else {
      puVar8 = puVar24;
      func_0x00010bf8c740(puVar24);
      func_0x00010c193ba0((double)(int)puVar8,puVar28);
    }
    func_0x00010c27ada0(uVar3);
    func_0x00010c17a840(puVar28);
    func_0x00010c27ada0(uVar3);
    func_0x00010c17a860(param_2,puVar28);
    func_0x00010c141a80(uVar3);
    func_0x00010c1ee7a0(puVar28);
    func_0x00010c1b5180(puVar28);
    func_0x00010c26b7a0();
    func_0x00010c166c00(puVar28);
    func_0x00010c219440(puVar28);
    func_0x00010c169b00(puVar28);
    puVar8 = puVar24;
    func_0x00010bf40c40();
    _objc_retainAutoreleasedReturnValue();
    puVar29 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c082c40();
    if ((int)puVar29 != 0) {
      puVar29 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf415c0(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1db640(puVar28);
      _objc_release(puVar29);
    }
    func_0x00010bf529e0();
    func_0x00010c211940(puVar28);
    func_0x00010c282760(param_6);
    func_0x00010c1dd660(puVar28);
    func_0x00010c21b740(puVar28);
    func_0x00010c1b5080(puVar28);
    puVar29 = puVar24;
    func_0x00010bfc0860(puVar24);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a2740(puVar28);
    _objc_release(puVar29);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puStack_3e0);
    _objc_release(puVar6);
    _objc_release(uVar3);
    _objc_release(puVar24);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar20) {
    ___stack_chk_fail();
    lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain();
    if (param_3 == (undefined *)0x0) {
      puVar28 = (undefined *)0x0;
    }
    else {
      puVar6 = PTR_PTR_1126bae70;
      _objc_opt_new();
      puVar28 = PTR_PTR_1126b0cc0;
      _objc_opt_new();
      puVar7 = PTR_PTR_1126dc180;
      _objc_opt_new();
      puVar24 = param_3;
      func_0x00010bf303a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar6;
      func_0x00010bdc22c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar24);
      puVar29 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      puVar24 = param_3;
      func_0x00010c268460();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar24;
      func_0x00010bf002e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar24);
      puVar24 = puVar9;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (puVar24 != (undefined *)0x0) {
        puVar25 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(puVar9);
          }
          puVar10 = PTR_PTR_1126dc188;
          _objc_opt_new(PTR_PTR_1126dc188);
          puVar22 = PTR_PTR_1126dc190;
          _objc_opt_new(PTR_PTR_1126dc190);
          puVar30 = PTR_PTR_1126dc198;
          _objc_opt_new();
          puVar15 = PTR_PTR_1126dc148;
          _objc_opt_new();
          puVar16 = param_3;
          func_0x00010c268460(param_3);
          _objc_retainAutoreleasedReturnValue();
          puVar18 = puVar16;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(puVar15);
          _objc_retain(puVar30);
          func_0x00010c0c0b00(puVar18);
          _objc_release(puVar18);
          _objc_release(puVar16);
          func_0x00010c21dd80(puVar22);
          func_0x00010c196600(puVar10);
          func_0x00010c1e6f40(puVar10);
          func_0x00010befa120(puVar29);
          _objc_release(puVar15);
          _objc_release(puVar30);
          _objc_release(puVar15);
          _objc_release(puVar30);
          _objc_release(puVar22);
          _objc_release(puVar10);
          puVar25 = puVar25 + 1;
        } while (puVar24 != puVar25);
        puVar24 = puVar9;
        func_0x00010bf52a60();
      }
      _objc_release(puVar9);
      puVar24 = param_3;
      func_0x00010c26b700(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20(puVar7);
      _objc_release(puVar24);
      func_0x00010bf86ca0(param_3);
      func_0x00010c18fb00(puVar7);
      func_0x00010bf8c740(param_3);
      func_0x00010c193ba0(puVar7);
      func_0x00010beffa20();
      func_0x00010c213040(puVar7);
      puVar24 = param_3;
      func_0x00010c0fb8e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar24 != (undefined *)0x0) {
        puVar24 = param_3;
        func_0x00010c0fb8e0(param_3);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar24;
        func_0x00010bfe1180();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c17e800(puVar7);
        _objc_release(puVar9);
        _objc_release(puVar24);
      }
      puVar24 = param_3;
      func_0x00010bf07f80(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar24;
      func_0x00010c25e080();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c169b20(puVar7);
      _objc_release(puVar9);
      _objc_release(puVar24);
      func_0x00010bf529e0();
      func_0x00010c1c6ae0(puVar7);
      puVar9 = param_3;
      func_0x00010bf0e540();
      _objc_retainAutoreleasedReturnValue();
      puVar24 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      if (puVar9 == (undefined *)0x0) {
        puVar24 = (undefined *)0x0;
      }
      else {
        _objc_retain(puVar9);
        _objc_opt_new();
        func_0x00010c08fa60(puVar9);
        _objc_retain(puVar24);
        func_0x00010bf97b20(puVar9);
        _objc_release(puVar9);
        _objc_release(puVar24);
      }
      func_0x00010c20eb60(puVar7);
      _objc_release(puVar24);
      _objc_release(puVar9);
      puVar9 = param_3;
      func_0x00010bf0e540();
      _objc_retainAutoreleasedReturnValue();
      puVar24 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      if (puVar9 == (undefined *)0x0) {
        puVar24 = (undefined *)0x0;
      }
      else {
        _objc_retain(puVar9);
        _objc_opt_new();
        func_0x00010c08fa60(puVar9);
        _objc_retain(puVar24);
        func_0x00010bf97b00(puVar9);
        _objc_release(puVar9);
        _objc_release(puVar24);
      }
      func_0x00010c17e9c0(puVar7);
      _objc_release(puVar24);
      _objc_release(puVar9);
      puVar24 = param_3;
      func_0x00010bfc0860(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a2740(puVar7);
      _objc_release(puVar24);
      func_0x00010c1b5d40(puVar28);
      puVar24 = puVar28;
      func_0x00010c0cc0c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c178980();
      _objc_release(puVar24);
      _objc_release(puVar29);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
    }
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar20) {
      ___stack_chk_fail();
      uVar4 = uVar19;
      _objc_retain(uVar19);
      uVar2 = uVar19;
      func_0x00010c290fa0(uVar19);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c21e620(*(undefined8 *)(param_3 + 0x20));
      _objc_release(uVar3);
      _objc_release(uVar2);
      func_0x00010c11f2a0(uVar19);
      func_0x00010c1bf6c0(*(undefined8 *)(param_3 + 0x28));
      func_0x00010c11f2a0(uVar19);
      _objc_release(uVar19);
                    /* WARNING: Could not recover jumptable at 0x00010c1ba850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_3 + 0x28),PTR_s_setLength__11264c438,uVar4);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar28);
  return;
}



/* Entry: 108e3757c; end: 108e3761b;  */

void FUN_108e3757c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = param_2;
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c290fa0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e620(*(undefined8 *)(param_1 + 0x20));
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c11f2a0(param_2);
  func_0x00010c1bf6c0(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c11f2a0(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c1ba850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_setLength__11264c438,uVar3);
  return;
}



/* Entry: 108e3761c; end: 108e376ef;  */

void FUN_108e3761c(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = 0;
  if ((param_3 != 0) && (param_4 != 0)) {
    _objc_retain(param_4);
    _objc_retain(param_3);
    lVar1 = param_3;
    func_0x000108e36f3c(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    FUN_108e32070(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1281e0(param_3);
    _objc_release(param_3);
    lVar3 = lVar1;
    FUN_108e32ec0(param_1,param_2,lVar1,lVar2,param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 108e376f0; end: 108e377db;  */

void FUN_108e376f0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010bfc0860();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126b0cc0;
    _objc_alloc_init(PTR_PTR_1126b0cc0);
    puVar3 = PTR_PTR_1126b37e0;
    _objc_alloc_init(PTR_PTR_1126b37e0);
    puVar4 = PTR_PTR_1126dc180;
    _objc_alloc_init(PTR_PTR_1126dc180);
    lVar1 = param_1;
    func_0x00010bfc0860(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a2740(puVar4,param_2,lVar1);
    _objc_release(lVar1);
    func_0x00010c178980(puVar3,param_2,puVar4);
    func_0x00010c1c73c0(puVar5,param_2,puVar3);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108e377dc; end: 108e37837; -[SCUserSession captionStyleResourceProvider] */

void FUN_108e377dc(undefined8 param_1,undefined8 param_2)

{
  _NSStringFromSelector(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e0000(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108e37838; end: 108e378f7;  */

void FUN_108e37838(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c293260();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  if (lVar1 == 0) {
    FUN_108e4970c();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar1);
  }
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126dc1a0;
  _objc_alloc(PTR_PTR_1126dc1a0);
  lVar1 = param_2;
  func_0x00010c135d00(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c038240(puVar3);
  _objc_release(lVar1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108e378f8; end: 108e37fbf; +[SCUserTaggingCaptionUtils extractUserTagsFromText:excludeCarouselTaggedItems:] */

void FUN_108e378f8(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar7 = PTR____NSDictionary0__struct_11034ab58;
  if (param_3 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
    func_0x00010bf35a20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be707e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSSet_1126ae870;
    uVar5 = param_4;
    func_0x00010bf002e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c225c20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    func_0x00010c08fa60(param_3);
    uVar5 = param_3;
    func_0x00010c08fa60();
    if (uVar5 != 0) {
      do {
        func_0x00010c08fa60(param_3);
        uVar5 = param_3;
        func_0x00010c11f460();
        if (uVar5 == 0x7fffffffffffffff) break;
        puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar6;
        func_0x00010bf4b900();
        _objc_release(puVar7);
        if (((ulong)puVar8 & 1) == 0) {
          func_0x00010c08fa60(param_3);
          uVar5 = param_3;
          func_0x00010c11f380();
          uVar9 = param_3;
          if (uVar5 == 0x7fffffffffffffff) {
            func_0x00010c260c00();
            _objc_retainAutoreleasedReturnValue();
            uVar5 = param_3;
            func_0x00010c08fa60();
          }
          else {
            func_0x00010c260c80();
            _objc_retainAutoreleasedReturnValue();
          }
          uVar10 = uVar9;
          func_0x00010c08fa60();
          lVar17 = uVar10 + 1;
          do {
            uVar10 = uVar9;
            if (lVar17 + -2 < 1) goto LAB_108e37cb0;
            func_0x00010bf35920(uVar9);
            puVar7 = puVar4;
            func_0x00010bf359c0();
            lVar17 = lVar17 + -1;
          } while (((ulong)puVar7 & 1) != 0);
          func_0x00010c260c80();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar9);
LAB_108e37cb0:
          uVar9 = uVar10;
          func_0x00010c08fa60();
          if (1 < uVar9) {
            uVar9 = uVar10;
            func_0x00010c260c20();
            _objc_retainAutoreleasedReturnValue();
            uVar11 = uVar9;
            func_0x00010c0720c0();
            _objc_release();
            if ((int)uVar11 != 0) {
              func_0x000107c3121c();
              _objc_retainAutoreleasedReturnValue();
              _objc_opt_class(PTR_PTR_1126bb668);
              uVar11 = uVar9;
              func_0x00010beecc40();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar9);
              uVar9 = uVar11;
              func_0x00010bfe63a0();
              _objc_retainAutoreleasedReturnValue();
              uVar12 = uVar9;
              func_0x00010c269d40();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar9);
              uVar9 = uVar10;
              func_0x00010c260c00(uVar10);
              _objc_retainAutoreleasedReturnValue();
              uVar13 = uVar12;
              func_0x00010c0ee940();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar9);
              if (uVar13 == 0) {
                uVar9 = uVar10;
                func_0x00010c260c00(uVar10);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befa120(puVar2);
                _objc_release(uVar9);
              }
              else {
                func_0x00010befa120(puVar1);
              }
              uVar9 = uVar10;
              func_0x00010c260c00(uVar10);
              _objc_retainAutoreleasedReturnValue();
              puVar7 = puVar3;
              func_0x00010bf4b900();
              _objc_release(uVar9);
              if (((ulong)puVar7 & 1) == 0) {
                uVar9 = uVar10;
                func_0x00010c260c00(uVar10);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befa120(puVar3);
                _objc_release(uVar9);
              }
              _objc_release(uVar13);
              _objc_release(uVar12);
              _objc_release(uVar11);
            }
          }
        }
        else {
          puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          uVar10 = param_4;
          func_0x00010c0dff20();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar7);
          uVar9 = uVar10;
          func_0x00010c290fa0();
          _objc_retainAutoreleasedReturnValue();
          if (uVar9 != 0) {
            uVar11 = uVar10;
            func_0x00010c290fa0(uVar10);
            _objc_retainAutoreleasedReturnValue();
            uVar12 = uVar11;
            func_0x00010c294420();
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar3;
            func_0x00010bf4b900();
            _objc_release(uVar12);
            _objc_release(uVar11);
            _objc_release(uVar9);
            if (((ulong)puVar7 & 1) == 0) {
              uVar9 = uVar10;
              func_0x00010c290fa0(uVar10);
              _objc_retainAutoreleasedReturnValue();
              uVar11 = uVar9;
              func_0x00010c294420();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar3);
              _objc_release(uVar11);
              _objc_release(uVar9);
            }
          }
          puStack_c8 = &uStack_d0;
          uStack_d0 = 0;
          uStack_c0 = 0x2020000000;
          uStack_b8 = 0;
          func_0x00010c0c0b00(uVar10);
          uVar5 = uVar5 + puStack_c8[3] + 1;
          __Block_object_dispose(&uStack_d0,8);
        }
        _objc_release(uVar10);
        uVar9 = param_3;
        func_0x00010c08fa60();
      } while (uVar5 < uVar9);
    }
    ppuStack_b0 = &PTR____CFConstantStringClassReference_110efb658;
    puVar8 = puVar1;
    func_0x00010bf51e00();
    ppuStack_a8 = &PTR____CFConstantStringClassReference_110efb678;
    puVar14 = puVar2;
    puStack_98 = puVar8;
    func_0x00010bf51e00();
    ppuStack_a0 = &PTR____CFConstantStringClassReference_110efb698;
    puVar15 = puVar3;
    puStack_90 = puVar14;
    func_0x00010bf51e00();
    puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_88 = puVar15;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar8);
    _objc_release(puVar6);
    _objc_release(param_1);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    uVar16 = 8;
    __Block_object_dispose(&uStack_d0,8);
    __Unwind_Resume(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c244d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar16,PTR_s_snapchattersSynchronousDataFetch_11266ed80);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 108e37fc0; end: 108e37fc7;  */

void FUN_108e37fc0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c244d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snapchattersSynchronousDataFetch_11266ed80);
  return;
}



/* Entry: 108e37fc8; end: 108e3802b;  */

void FUN_108e37fc8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c290fa0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c08fa60();
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = uVar2;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108e3802c; end: 108e380fb; +[SCUserTaggingCaptionUtils _partitionCharacterSet] */

void FUN_108e3802c(void)

{
  undefined8 uVar1;
  
  if (lRam000000011372e9f8 != -1) {
    func_0x000107c27d9c(0x11372e9f8,&PTR___NSConcreteGlobalBlock_110ac6d40);
  }
  uVar1 = uRam000000011372e9f0;
  _objc_retain(uRam000000011372e9f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108e380fc; end: 108e388a7;  */

void FUN_108e380fc(double param_1,undefined *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_4);
  puVar12 = param_2;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar12;
  func_0x00010c08fa60();
  _objc_release(puVar12);
  if ((puVar2 == (undefined *)0x0) ||
     (puVar12 = param_2, func_0x00010c27dde0(), puVar12 == (undefined *)0x0)) {
    puVar12 = (undefined *)0x0;
    goto LAB_108e38844;
  }
  puVar12 = PTR_PTR_1126cbf60;
  _objc_alloc_init();
  func_0x00010c27dde0();
  func_0x00010c166c00(puVar12);
  puVar2 = param_2;
  func_0x00010c26b700(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar12);
  _objc_release(puVar2);
  puVar2 = param_2;
  func_0x00010c26b8a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf529e0();
  if (puVar3 == (undefined *)0x0) {
    puVar3 = param_2;
    func_0x00010c25dfe0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf529e0();
    _objc_release(puVar3);
    _objc_release(puVar2);
    if (puVar4 != (undefined *)0x0) goto LAB_108e38288;
  }
  else {
    _objc_release(puVar2);
LAB_108e38288:
    puVar2 = PTR_PTR_1126c4438;
    func_0x00010bf0e3a0(PTR_PTR_1126c4438);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b720(puVar12);
    _objc_release(puVar2);
  }
  func_0x00010bfb4080(param_2);
  if (param_1 <= 0.0) {
    param_1 = 1.79769313486232e+308;
  }
  else {
    func_0x00010bfb4080(param_2);
  }
  func_0x00010c190940(puVar12);
  func_0x00010bf8c760(param_2);
  if (0.0 < param_1) {
    func_0x00010bf8c760(param_2);
  }
  func_0x00010c193ba0(puVar12);
  puVar2 = param_2;
  func_0x00010c104260(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2beb40();
  func_0x00010c17a840(puVar12);
  _objc_release(puVar2);
  puVar2 = param_2;
  func_0x00010c104260(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bed60();
  func_0x00010c17a860(puVar12);
  _objc_release(puVar2);
  func_0x00010c141d40(param_2);
  func_0x00010c1ee7a0(puVar12);
  func_0x00010c0816c0(param_2);
  func_0x00010c1b5180(puVar12);
  puVar2 = param_2;
  func_0x00010c2790e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  param_3 = param_4;
  FUN_109173e90();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219440(puVar12);
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010c1a7f60(puVar12);
  func_0x00010c193b00(puVar12);
  func_0x00010c1b6e20(0,puVar12);
  puVar2 = param_2;
  func_0x00010bf8b600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar3 = param_2;
  if (puVar2 == (undefined *)0x0) {
    puVar2 = param_2;
    func_0x00010bf303a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar2 == (undefined *)0x0) {
      func_0x00010c27dde0(param_2);
      FUN_108e267b4();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_108e3841c;
    }
    func_0x00010bf303a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    FUN_108e267fc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c178860(puVar12);
    _objc_release(puVar2);
  }
  else {
    param_3 = 0;
    FUN_108e0e67c(param_2,0);
    _objc_retainAutoreleasedReturnValue();
LAB_108e3841c:
    func_0x00010c178860(puVar12);
  }
  _objc_release(puVar3);
  puVar2 = param_2;
  func_0x00010bf07d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar2 == (undefined *)0x0) {
    puVar2 = puVar12;
    func_0x00010bf303a0(puVar12);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c113040();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c169b00(puVar12);
  }
  else {
    puVar2 = param_2;
    func_0x00010bf07d40(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf303a0();
    _objc_retainAutoreleasedReturnValue();
    param_3 = 0;
    puVar4 = puVar3;
    FUN_108e0d1d4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c169b00(puVar12);
    _objc_release(puVar4);
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar3 = param_2;
  func_0x00010c0fb8e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  if (puVar3 != (undefined *)0x0) {
    puVar3 = param_2;
    func_0x00010c0fb8e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2827c0();
    func_0x00010bf41580(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1db640(puVar12);
    _objc_release(puVar2);
    _objc_release(puVar3);
  }
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_2;
  func_0x00010c293dc0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  _objc_release();
  if (puVar3 != (undefined *)0x0) {
    func_0x000107c3121c();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126bb668);
    puVar5 = puVar4;
    func_0x00010beecc40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar3 = puVar5;
    func_0x00010bfe63a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar6 = param_2;
    func_0x00010c293dc0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar6;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (puVar3 != (undefined *)0x0) {
      puVar14 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar6);
        }
        uVar13 = *(undefined8 *)((long)puVar14 * 8);
        uVar7 = uVar13;
        func_0x00010c2923e0(uVar13);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar4;
        func_0x00010c0ee920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar7);
        puVar10 = PTR_PTR_1126d2ab0;
        if (puVar8 != (undefined *)0x0) {
          uVar7 = uVar13;
          func_0x00010c24ff00(uVar13);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2827c0();
          puVar9 = puVar8;
          func_0x00010c294420(puVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c08fa60();
          func_0x00010bf51620(puVar10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c24ff00(uVar13);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar2);
          _objc_release(uVar13);
          _objc_release(puVar10);
          _objc_release(puVar9);
          _objc_release(uVar7);
        }
        _objc_release(puVar8);
        puVar14 = puVar14 + 1;
      } while (puVar3 != puVar14);
      puVar3 = puVar6;
      func_0x00010bf52a60();
    }
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(puVar5);
  }
  func_0x00010c211940(puVar12);
  func_0x00010c21b740(puVar12);
  func_0x00010c081180(param_2);
  func_0x00010c1b5080(puVar12);
  puVar3 = param_2;
  func_0x00010bfc0860(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a2740(puVar12);
  _objc_release(puVar3);
  _objc_release(puVar2);
LAB_108e38844:
  _objc_release(param_4);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c244d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_snapchattersSynchronousDataFetch_11266ed80)
    ;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 108e388a8; end: 108e388af;  */

void FUN_108e388a8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c244d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snapchattersSynchronousDataFetch_11266ed80);
  return;
}



/* Entry: 108e388b0; end: 108e38ae3; +[SCUserTaggingCaptionUtils handleCancelTagging:textView:userTaggingStartIndex:taggedItems:editingDelegate:] */

void FUN_108e388b0(undefined8 param_1,ulong param_2,undefined *param_3,long param_4,
                  undefined8 param_5,ulong param_6,ulong param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = param_4;
  func_0x00010c15a1e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_4;
  func_0x00010bf193c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c24d960(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_4;
  func_0x00010c0e1ce0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_retain(param_6);
  uVar5 = param_6;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  if (uVar5 != 0) {
    do {
      uVar11 = 0;
      do {
        uVar9 = param_2;
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(param_6);
          uVar9 = param_2;
        }
        uVar6 = param_6;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x00010c11f2a0();
        param_2 = uVar9;
        _objc_release(uVar6);
        if (uVar7 <= lVar4 - 1U && (lVar4 - 1U) - uVar7 < uVar9) {
          func_0x00010bf6b640(PTR_PTR_1126c4438);
          _objc_release(param_6);
          goto LAB_108e38a80;
        }
        uVar11 = uVar11 + 1;
      } while (uVar5 != uVar11);
      uVar5 = param_6;
      func_0x00010bf52a60();
    } while (uVar5 != 0);
  }
  _objc_release(param_6);
  uVar5 = param_7;
  _objc_opt_respondsToSelector(param_7,PTR_s_didSwitchToStyleMode_1125bcac8);
  if ((uVar5 & 1) != 0) {
    func_0x00010bf7c480(param_7);
  }
LAB_108e38a80:
  _objc_release(lVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  puVar8 = PTR_PTR_1126bf720;
  _objc_opt_class();
  if (param_3 == puVar8) {
    uRam000000011372ea00 = 0;
  }
  return;
}



/* Entry: 108e38ae4; end: 108e38b1b; +[SCSnapCropUtils initialize] */

void FUN_108e38ae4(undefined *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bf720;
  _objc_opt_class();
  if (param_1 == puVar1) {
    uRam000000011372ea00 = 0;
  }
  return;
}



/* Entry: 108e38b1c; end: 108e38bbf; +[SCSnapCropUtils maxMediaAreaSize] */

undefined1  [16]
FUN_108e38b1c(double param_1,double param_2,double param_3,double param_4,undefined8 param_5)

{
  double dVar1;
  double dVar2;
  undefined *puVar3;
  undefined1 auVar4 [16];
  
  puVar3 = PTR_PTR_1126b9e78;
  func_0x00010c072be0();
  if ((int)puVar3 == 0) {
    func_0x00010bf69c00(param_5);
  }
  else {
    func_0x00010c1513c0(PTR_PTR_1126b9e78);
    param_3 = param_1;
    param_4 = param_2;
  }
  _os_unfair_lock_lock(0x11372ea00);
  if ((param_3 <= 0.0) || (dVar1 = param_3, dVar2 = param_4, param_4 <= 0.0)) {
    dVar1 = dRam000000011372ea08;
    dVar2 = dRam000000011372ea10;
  }
  dRam000000011372ea10 = dVar2;
  dRam000000011372ea08 = dVar1;
  dVar2 = dRam000000011372ea10;
  dVar1 = dRam000000011372ea08;
  _os_unfair_lock_unlock(0x11372ea00);
  auVar4._8_8_ = dVar2;
  auVar4._0_8_ = dVar1;
  return auVar4;
}



/* Entry: 108e38bc0; end: 108e38c57; +[SCSnapCropUtils defaultMaxMediaAreaFrame] */

double FUN_108e38bc0(undefined8 param_1,undefined8 param_2,double param_3,double param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  func_0x000107c308a4(param_3,param_4);
  _objc_release(puVar1);
  func_0x00010c11cac0(PTR__OBJC_CLASS___UIViewController_1126af898);
  return param_3 + param_4;
}



/* Entry: 108e38c58; end: 108e38d4b; +[SCSnapCropUtils defaultMaxMediaAreaFrameMatchingCapture] */

double FUN_108e38c58(undefined8 param_1,undefined8 param_2,double param_3,double param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  func_0x000107c308a4(param_3,param_4);
  _objc_release(puVar1);
  func_0x00010c11cac0(PTR__OBJC_CLASS___UIViewController_1126af898);
  puVar1 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x00010bf5e640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c292ac0();
  func_0x00010c08ebc0();
  _objc_release(puVar1);
  return param_3 + param_4;
}



/* Entry: 108e38d4c; end: 108e38d63; +[SCSnapCropUtils getRoundedScaleWithTargetScale:fillScale:] */

double FUN_108e38d4c(double param_1,double param_2)

{
  if (ABS(param_2 - param_1) <= 0.009999999776482582) {
    param_1 = param_2;
  }
  return param_1;
}



/* Entry: 108e38d64; end: 108e38fbb; +[SCSnapCropUtils cropImageIfNeeded:croppingAspectRatio:] */

void FUN_108e38d64(double param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  double extraout_d1;
  double extraout_d1_00;
  double extraout_d1_01;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  double dStack_50;
  double dStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_4);
  if (param_4 == (undefined *)0x0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    uVar3 = 0;
    uVar5 = 0x7ff00000;
    if (param_1 == INFINITY) {
      func_0x00010c0c2640(param_2);
      if ((double)CONCAT44(uVar5,uVar3) == 0.0) {
        func_0x00010c23d0a0(param_4);
        dVar7 = extraout_d1_00;
        goto LAB_108e38df8;
      }
      if (extraout_d1 != 0.0) {
        param_1 = (double)CONCAT44(uVar5,uVar3) / extraout_d1;
        goto LAB_108e38de8;
      }
      func_0x00010c23d0a0(param_4);
LAB_108e38e10:
      dVar7 = 0.0;
      dVar9 = (double)CONCAT44(uVar5,uVar3);
    }
    else {
LAB_108e38de8:
      func_0x00010c23d0a0(param_4);
      dVar7 = extraout_d1_01;
      if (param_1 == 0.0) {
LAB_108e38df8:
        dVar9 = 0.0;
      }
      else {
        if (param_1 == INFINITY) goto LAB_108e38e10;
        dVar9 = param_1 * extraout_d1_01;
        if ((double)CONCAT44(uVar5,uVar3) == dVar9 || (double)CONCAT44(uVar5,uVar3) < dVar9) {
          dVar7 = (double)CONCAT44(uVar5,uVar3) / param_1;
          dVar9 = (double)CONCAT44(uVar5,uVar3);
        }
      }
    }
    puVar1 = (undefined *)0x0;
    auVar8 = NEON_fmov(0x3fe0000000000000,8);
    fVar4 = (float)(int)(dVar9 * auVar8._0_8_);
    fVar6 = (float)(int)(dVar7 * auVar8._8_8_);
    fVar4 = fVar4 + fVar4;
    fVar6 = fVar6 + fVar6;
    puVar2 = param_4;
    if ((fVar4 <= 0.0) || (fVar6 <= 0.0)) goto LAB_108e38ebc;
    dStack_50 = (double)fVar4;
    dStack_48 = (double)fVar6;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    uStack_68 = 0x108e38f0c;
    puStack_60 = &UNK_110ac6d80;
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    puStack_58 = param_4;
    func_0x00010c12fc20(SUB84(dStack_50,0),dStack_48,0x3ff0000000000000,
                        PTR__OBJC_CLASS___UIImage_1126aea68,param_3,0,&puStack_78);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puStack_58);
  }
  _objc_retain(puVar1);
  puVar2 = puVar1;
LAB_108e38ebc:
  _objc_release(puVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108e38fbc; end: 108e39033;  */

uint FUN_108e38fbc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfb3ce0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c265a80();
  _objc_release(param_1);
  return (uint)uVar1 >> 1 & 1;
}



/* Entry: 108e39034; end: 108e390fb;  */

ulong FUN_108e39034(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  uVar2 = param_1;
  func_0x00010bfa0820();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c071ae0();
  _objc_release(uVar2);
  if ((uVar1 & 1) == 0) {
    puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c266f40(0x4024000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa0820(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bfa0820(puVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c071ae0(param_1,param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(param_1);
    _objc_release(puVar3);
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* Entry: 108e390fc; end: 108e3920b; -[SCCaptionCarouselActionStyleModel toCaptionCarouselEventWithProtobufTransformer:] */

void FUN_108e390fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126b0cb8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_1;
  func_0x00010c25dfa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf25f00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c008360(puVar1,param_2,uVar3,0);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf96e00(param_3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar4 = PTR_PTR_1126dc1a8;
  _objc_alloc(PTR_PTR_1126dc1a8);
  uVar3 = param_1;
  func_0x00010bfec9e0(param_1);
  uVar5 = param_1;
  func_0x00010bfc1d00(param_1);
  func_0x00010bddb260(param_1,param_2,uVar5);
  func_0x00010c043b80(puVar4,param_2,uVar2,uVar3,param_1);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108e3920c; end: 108e39223; -[SCCaptionCarouselActionStyleModel _captionGestureTypeFromStyleGestureType:] */

undefined1 FUN_108e3920c(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined1 uVar1;
  
  uVar1 = 2;
  if (param_3 != 2) {
    uVar1 = param_3 == 1;
  }
  return uVar1;
}



/* Entry: 108e39224; end: 108e394ff; -[SCComposerCaptionView initWithCaptionFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_108e39224(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined *puVar16;
  long lVar17;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_3;
  _objc_retain(param_3);
  puStack_90 = PTR_PTR_1126fea78;
  puVar2 = &uStack_98;
  uStack_98 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    lVar17 = (long)_DAT_11277c1d8;
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar17);
    *(undefined **)((long)puVar2 + lVar17) = param_3;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126bae70;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_11277c1dc);
    *(undefined **)((long)puVar2 + (long)_DAT_11277c1dc) = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126dc1b0;
    _objc_alloc_init();
    lVar17 = (long)_DAT_11277c1e0;
    uVar3 = *(undefined8 *)((long)puVar2 + lVar17);
    *(undefined **)((long)puVar2 + lVar17) = puVar4;
    _objc_release(uVar3);
    func_0x00010befbb60(puVar2);
    func_0x00010c219b60(*(undefined8 *)((long)puVar2 + lVar17));
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar5 = *(undefined8 *)((long)puVar2 + lVar17);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_88 = uVar3;
    uVar7 = *(undefined8 *)((long)puVar2 + lVar17);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar2;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar7;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_80 = uVar9;
    uVar10 = *(undefined8 *)((long)puVar2 + lVar17);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar2;
    func_0x00010c274200(puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar10;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_78 = uVar12;
    uVar13 = *(undefined8 *)((long)puVar2 + lVar17);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar2;
    func_0x00010bf1ff80(puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar13;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = uVar15;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar16;
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar16);
    _objc_release(uVar15);
    _objc_release(puVar14);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(puVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(puVar8);
    _objc_release(uVar7);
    _objc_release(uVar3);
    _objc_release(puVar6);
    _objc_release(uVar5);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar2 = (undefined8 *)PTR_PTR_1126b0cb8;
  _objc_retain(puVar4);
  _objc_alloc();
  func_0x00010c008360();
  _objc_release(puVar4);
  if (puVar2 != (undefined8 *)0x0) {
    uVar3 = *(undefined8 *)(param_3 + _DAT_11277c1dc);
    func_0x00010bf96e00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be4cc80(param_3);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return puVar2;
}



/* Entry: 108e39500; end: 108e39593; -[SCComposerCaptionView _handleUpdateToStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e39500(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b0cb8;
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c008360();
  _objc_release(param_3);
  if (puVar1 != (undefined *)0x0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11277c1dc);
    func_0x00010bf96e00(uVar2,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be4cc80(param_1,param_2,uVar2);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108e39594; end: 108e39677; -[SCComposerCaptionView _loadCaptionStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e39594(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277c1d8);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c1090a0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 108e39678; end: 108e39737;  */

void FUN_108e39678(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_108e39738;
  puStack_48 = &UNK_110841fb0;
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_40 = uVar1;
  func_0x000107c312cc("APPSTORE",&puStack_60);
  _objc_release(uStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 108e39738; end: 108e397af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e39738(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar4 = *(undefined8 *)(lVar1 + _DAT_11277c1e0);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = uVar4;
    func_0x00010c26b700(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1788a0(uVar4,param_2,uVar3,1,uVar2);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108e397b0; end: 108e3985b; -[SCComposerCaptionView _setText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e397b0(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  lVar5 = (long)_DAT_11277c1e0;
  uVar4 = *(ulong *)(param_1 + lVar5);
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010c0720c0();
  _objc_release(uVar4);
  if ((uVar3 & 1) == 0) {
    func_0x00010c212f20(*(undefined8 *)(param_1 + lVar5));
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108e3985c; end: 108e398cb; +[SCComposerCaptionView bindAttributes:] */

void FUN_108e3985c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf1a180(param_3,param_2,&PTR____CFConstantStringClassReference_110efb578,1,
                      &PTR___NSConcreteGlobalBlock_110ac6e00,&PTR___NSConcreteGlobalBlock_110ac6e40)
  ;
  func_0x00010bf1a160(param_3,param_2,&PTR____CFConstantStringClassReference_110dbf1d8,1,
                      &PTR___NSConcreteGlobalBlock_110ac6e60,&PTR___NSConcreteGlobalBlock_110ac6e80)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108e398cc; end: 108e3997b;  */

undefined8 FUN_108e398cc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_retain(param_2);
  _objc_opt_class(puVar2);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar3 = uVar1;
  func_0x00010c296f60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010be32a00(param_2);
  _objc_release(param_2);
  _objc_release(uVar3);
  _objc_release(param_3);
  return 1;
}



/* Entry: 108e3997c; end: 108e3997f;  */

void FUN_108e3997c(void)

{
  return;
}



/* Entry: 108e39980; end: 108e3999b;  */

undefined8 FUN_108e39980(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bea84a0(param_2);
  return 1;
}



/* Entry: 108e3999c; end: 108e399a7;  */

void FUN_108e3999c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea84b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__setText__112587ad0,0);
  return;
}



/* Entry: 108e399a8; end: 108e399f7; -[SCComposerCaptionView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e399a8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277c1e0,0);
  _objc_storeStrong(param_1 + _DAT_11277c1dc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277c1d8,0);
  return;
}



/* Entry: 108e399f8; end: 108e39cd3; -[SCCaptionCarouselController initWithValdiRuntime:captionFetcher:captionDataProvider:userTaggingFriendsProvider:previewCaptionLogger:delegate:asyncQueueProvider:creativeToolsABProvider:networkingClient:aiFontsEnabled:] */

undefined8 *
FUN_108e399f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined1 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
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
  puStack_68 = PTR_PTR_1126fea80;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
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
    uVar2 = puVar1[4];
    puVar1[4] = param_7;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 5,param_8);
    _objc_retain(param_11);
    uVar2 = puVar1[6];
    puVar1[6] = param_11;
    _objc_release(uVar2);
    uVar2 = param_9;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c11e0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[8];
    puVar1[8] = uVar3;
    _objc_release(uVar5);
    _objc_release(uVar2);
    uVar2 = param_10;
    func_0x00010c087020();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c06e160();
    *(char *)(puVar1 + 7) = (char)uVar3;
    _objc_release(uVar2);
    uVar2 = param_10;
    func_0x00010c079e20();
    *(char *)((long)puVar1 + 0x39) = (char)uVar2;
    uVar2 = param_10;
    func_0x00010c07ae60();
    *(char *)((long)puVar1 + 0x3a) = (char)uVar2;
    uVar2 = param_10;
    func_0x00010c07ae40();
    *(char *)((long)puVar1 + 0x3b) = (char)uVar2;
    *(undefined1 *)((long)puVar1 + 0x3c) = param_12;
    puVar4 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[10];
    puVar1[10] = puVar4;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[0xb];
    puVar1[0xb] = puVar4;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = puVar1[0xc];
    puVar1[0xc] = puVar4;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126bae70;
    _objc_opt_new();
    uVar2 = puVar1[0xd];
    puVar1[0xd] = puVar4;
    _objc_release(uVar2);
    func_0x00010c18b5e0(puVar1[2]);
    func_0x00010bdd5e00(puVar1);
    uVar2 = puVar1[2];
    func_0x00010bf00b20(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bed4de0(puVar1);
    _objc_release(uVar2);
  }
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



/* Entry: 108e39cd4; end: 108e39d7f; -[SCCaptionCarouselController _buildCarouselWithValdiRuntime:captionFetcher:] */

void FUN_108e39cd4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126dc1b8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  lVar2 = param_1;
  func_0x00010bddb1e0(param_1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c061d40(puVar1,param_2,0,lVar2,param_3);
  _objc_release(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  *(undefined **)(param_1 + 0x48) = puVar1;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 108e39d80; end: 108e3a123; -[SCCaptionCarouselController _captionCarouselContextViewFactoryWithValdiRuntime:captionFetcher:] */

void FUN_108e39d80(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126dc1c0;
  _objc_alloc_init(PTR_PTR_1126dc1c0);
  lVar2 = param_1;
  func_0x00010bddb460(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c178c20(puVar1);
  _objc_release(lVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c272120(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c178a40(puVar1);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c272120(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c178600(puVar1);
  _objc_release(uVar3);
  lVar2 = param_1;
  func_0x00010bec26a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21c7e0(puVar1);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bec2520(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a5340(puVar1);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010be60440(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c77e0(puVar1);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010beaa400(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe440(puVar1);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010be26ee0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1da820(puVar1);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bddb240(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a3220(puVar1);
  _objc_release(lVar2);
  _objc_initWeak(auStack_78,param_1);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_108e3a124;
  puStack_88 = &UNK_110ac6ea0;
  _objc_copyWeak(auStack_80,auStack_78);
  func_0x00010c1f8360(puVar1);
  _objc_copyWeak(auStack_a8,auStack_78);
  func_0x00010c1a3120(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cc960(puVar1);
  _objc_release(uVar3);
  ppuVar4 = &PTR__OBJC_CLASS___NSConstantArray_111183170;
  func_0x00010c0d3c80(&PTR__OBJC_CLASS___NSConstantArray_111183170);
  if (*(char *)(param_1 + 0x3c) == '\x01') {
    func_0x00010befa120(ppuVar4);
  }
  func_0x00010c20ff00(puVar1);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b04e0(puVar1);
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b04c0(puVar1);
  _objc_release(puVar5);
  func_0x00010c201680(puVar1);
  _objc_release(ppuVar4);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108e3a124; end: 108e3a1d7;  */

void FUN_108e3a124(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = (undefined *)(param_1 + 0x20);
  _objc_loadWeakRetained();
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126ae820;
    _objc_opt_new(PTR_PTR_1126ae820);
  }
  else {
    puVar2 = puVar1;
    func_0x00010be9c620(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar3 = puVar2;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108e3a1d8; end: 108e3a257;  */

void FUN_108e3a1d8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = (undefined *)(param_1 + 0x20);
  _objc_loadWeakRetained();
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126ae820;
    _objc_opt_new(PTR_PTR_1126ae820);
  }
  else {
    puVar2 = puVar1;
    func_0x00010bdc9da0(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar3 = puVar2;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108e3a258; end: 108e3a31b; -[SCCaptionCarouselController _captionViewFactoryWithValdiRuntime:captionFetcher:] */

void FUN_108e3a258(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126dc1c8;
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_108e3a31c;
  puStack_40 = &UNK_110868d10;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  uVar2 = param_3;
  func_0x00010c0b7ac0(param_3,param_2,&puStack_58,0,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uStack_38);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108e3a31c; end: 108e3a34b;  */

void FUN_108e3a31c(void)

{
  _objc_alloc(PTR_PTR_1126dc1c8);
  func_0x00010bffc5e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e3a34c; end: 108e3a423; -[SCCaptionCarouselController _updateCaptionStyles:] */

void FUN_108e3a34c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_108e3a424;
  puStack_50 = &UNK_110841fb0;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  uStack_48 = param_3;
  func_0x000107c312dc(uVar1,&puStack_68);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 108e3a424; end: 108e3a4af;  */

void FUN_108e3a424(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_108e3a4b0;
    puStack_30 = &UNK_110ac6f00;
    lStack_28 = lVar1;
    func_0x000107c31908(uVar2,&puStack_48);
    func_0x00010c0d9840(*(undefined8 *)(lVar1 + 0x50));
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108e3a4b0; end: 108e3a4bb;  */

void FUN_108e3a4b0(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be61f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__nativeCTItemForCaptionStyle__112576178,param_2);
  return;
}



/* Entry: 108e3a4bc; end: 108e3a513; -[SCCaptionCarouselController _stateUpdateObservers] */

void FUN_108e3a4bc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126dc1d0;
  _objc_opt_new(PTR_PTR_1126dc1d0);
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c272120(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21c8c0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108e3a514; end: 108e3a673; -[SCCaptionCarouselController _stateEventHandling] */

void FUN_108e3a514(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  puVar2 = PTR_PTR_1126dc1d8;
  _objc_opt_new(PTR_PTR_1126dc1d8);
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_108e3a674;
  puStack_58 = &UNK_11085df68;
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c190920(puVar2);
  puStack_98 = puVar1;
  uStack_90 = 0xc2000000;
  uStack_88 = 0x108e3a744;
  puStack_80 = &UNK_11085df68;
  _objc_copyWeak(auStack_78,auStack_48);
  func_0x00010c18d8c0(puVar2);
  _objc_copyWeak(auStack_a0,auStack_48);
  func_0x00010c18d640(puVar2);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108e3a674; end: 108e3a783;  */

void FUN_108e3a674(long param_1,undefined4 param_2)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined4 uStack_28;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    uStack_40 = 0x108e3a6f4;
    puStack_38 = &UNK_110868698;
    lStack_30 = param_1;
    uStack_28 = param_2;
    func_0x000107c312cc("APPSTORE",&puStack_50);
  }
  _objc_release(param_1);
  return;
}



/* Entry: 108e3a784; end: 108e3a81f;  */

void FUN_108e3a784(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010be06b60(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    lVar2 = lVar1;
    func_0x00010bfadea0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a2940(uVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108e3a820; end: 108e3a8d7; -[SCCaptionCarouselController _metrics] */

void FUN_108e3a820(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  puVar1 = PTR_PTR_1126dc1e0;
  _objc_opt_new(PTR_PTR_1126dc1e0);
  _objc_initWeak(auStack_28,param_1);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c179c20(puVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108e3a8d8; end: 108e3a94f;  */

void FUN_108e3a8d8(long param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_108e3a950;
    puStack_30 = &UNK_110842e18;
    lStack_28 = param_1;
    func_0x000107c312cc("APPSTORE",&puStack_48);
  }
  _objc_release(param_1);
  return;
}



/* Entry: 108e3a950; end: 108e3a963;  */

void FUN_108e3a950(long param_1)

{
  *(long *)(*(long *)(param_1 + 0x20) + 0xa0) = *(long *)(*(long *)(param_1 + 0x20) + 0xa0) + 1;
  return;
}



/* Entry: 108e3a964; end: 108e3a9eb; -[SCCaptionCarouselController _captionEditorState] */

void FUN_108e3a964(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  ppuVar1 = &puStack_50;
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_108e3a9ec;
  puStack_38 = &UNK_110ac6f60;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retainBlock(&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 108e3a9ec; end: 108e3ab43;  */

void FUN_108e3a9ec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = (undefined *)(param_1 + 0x20);
  _objc_loadWeakRetained();
  puVar2 = PTR_PTR_1126dc1e8;
  _objc_opt_new(PTR_PTR_1126dc1e8);
  func_0x00010c17e800();
  if (puVar1 == (undefined *)0x0) {
    func_0x00010c212f20(puVar2,param_2,&PTR____CFConstantStringClassReference_110daafd8);
    puVar5 = PTR_PTR_1126dc1f0;
    _objc_alloc(PTR_PTR_1126dc1f0);
    func_0x00010c04b840();
    func_0x00010c1fb7a0(puVar2,param_2,puVar5);
    _objc_release(puVar5);
    puVar5 = PTR_PTR_1126dc1f8;
    _objc_opt_new(PTR_PTR_1126dc1f8);
    func_0x00010c20eaa0(puVar2,param_2,puVar5);
  }
  else {
    func_0x00010c212f20(puVar2,param_2,*(undefined8 *)(puVar1 + 0x78));
    lVar3 = *(long *)(puVar1 + 0x90);
    if (lVar3 != 0) {
      func_0x00010bf41080();
      func_0x00010c17e800(puVar2,param_2,(long)(int)lVar3);
    }
    func_0x00010c20eaa0(puVar2,param_2,*(undefined8 *)(puVar1 + 0x70));
    puVar5 = PTR_PTR_1126dc1f0;
    _objc_alloc(PTR_PTR_1126dc1f0);
    func_0x00010c04b840();
    func_0x00010c1fb7a0(puVar2,param_2,puVar5);
    _objc_release(puVar5);
    puVar5 = puVar1;
    func_0x00010bdcd9a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar5;
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c169a60(puVar2,param_2,puVar4);
    _objc_release(puVar4);
  }
  _objc_release(puVar5);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108e3ab44; end: 108e3ac8f; -[SCCaptionCarouselController _appliedEntities] */

void FUN_108e3ab44(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined **ppuStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_108e3ac90;
  uStack_50 = 0x108e3aca0;
  puVar2 = PTR_PTR_1126ae820;
  puStack_68 = &uStack_70;
  _objc_opt_new();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_108e3aca8;
  puStack_88 = &UNK_11084b9d0;
  ppuVar3 = &puStack_a0;
  lStack_80 = param_1;
  puStack_78 = &uStack_70;
  puStack_48 = puVar2;
  _objc_retainBlock();
  if (*(char *)(param_1 + 0x38) == '\x01') {
    puStack_c8 = puVar1;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_108e3afb0;
    puStack_b0 = &UNK_110849530;
    _objc_retain(ppuVar3);
    ppuStack_a8 = ppuVar3;
    func_0x000107c312cc("APPSTORE",&puStack_c8);
    _objc_release(ppuStack_a8);
  }
  else {
    (*(code *)ppuVar3[2])(ppuVar3);
  }
  uVar4 = puStack_68[5];
  _objc_retain(uVar4);
  _objc_release(ppuVar3);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(puStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 108e3ac90; end: 108e3aca7;  */

void FUN_108e3ac90(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 108e3aca8; end: 108e3ad67;  */

void FUN_108e3aca8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = *(long *)(param_1 + 0x20) + 0x28;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf5e800();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c268460();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar5 != 0) {
    func_0x00010c0d9840(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28),param_2,
                        lVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 108e3ad68; end: 108e3ae4f;  */

void FUN_108e3ad68(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain(param_2);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_108e3ac90;
  uStack_30 = 0x108e3aca0;
  puVar1 = PTR_PTR_1126dc200;
  _objc_opt_new();
  puStack_28 = puVar1;
  func_0x00010c0c0b00(param_2);
  uVar2 = puStack_48[5];
  _objc_retain(uVar2);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(puStack_28);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108e3ae50; end: 108e3afaf;  */

void FUN_108e3ae50(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126dc208;
  _objc_retain(param_2);
  _objc_opt_new(puVar1);
  func_0x00010c196680();
  uVar2 = param_2;
  func_0x00010c290fa0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196620(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010c290fa0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216240(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c196640(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28));
  puVar4 = PTR_PTR_1126dc1f0;
  _objc_alloc(PTR_PTR_1126dc1f0);
  func_0x00010c11f2a0(param_2);
  func_0x00010c11f2a0(param_2);
  func_0x00010c11f2a0(param_2);
  _objc_release(param_2);
  func_0x00010c04b840(puVar4);
  func_0x00010c213620(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28));
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108e3afb0; end: 108e3afbb;  */

void FUN_108e3afb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108e3afb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 108e3afbc; end: 108e3b103; -[SCCaptionCarouselController _searchEntitiesSubjectForEntityTypes:query:] */

void FUN_108e3afbc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae820;
  _objc_opt_new();
  uVar2 = param_3;
  func_0x00010bf4b900();
  if ((int)uVar2 != 0) {
    _objc_initWeak(auStack_48,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c11de00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(puVar1);
    func_0x00010c244bc0(uVar3);
    _objc_release(uVar2);
    _objc_release(puVar1);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108e3b104; end: 108e3b1ab;  */

void FUN_108e3b104(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_108e3b1ac;
    puStack_40 = &UNK_110ac6fd0;
    uVar2 = param_2;
    lStack_38 = lVar1;
    func_0x000107c31908(param_2,&puStack_58);
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20));
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108e3b1ac; end: 108e3b1b7;  */

void FUN_108e3b1ac(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bddb210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__captionCarouselEntityModelFromS_112554620,
             param_2);
  return;
}



/* Entry: 108e3b1b8; end: 108e3b2bf; -[SCCaptionCarouselController _allEntitiesSubjectForEntityType:] */

void FUN_108e3b1b8(long param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  puVar1 = PTR_PTR_1126ae820;
  _objc_opt_new();
  if (param_3 == 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c11de00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(puVar1);
    func_0x00010bf00600(uVar3);
    _objc_release(uVar2);
    _objc_release(puVar1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



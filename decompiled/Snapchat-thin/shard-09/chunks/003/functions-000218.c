/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106beea54; end: 106beeabb; -[SCMergedGalleryDataSource countOfGallerySnapsForEntryFavorited:] */

undefined * FUN_106beea54(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be3fe60(param_1,param_2,param_3);
  if ((int)lVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126af4d0;
    func_0x00010bf52de0(PTR_PTR_1126af4d0,param_2,param_3,0,*(undefined8 *)(param_1 + 0x48));
  }
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 106beeabc; end: 106beeb2b; -[SCMergedGalleryDataSource fetchGallerySnapsForEntryFavorited:] */

void FUN_106beeabc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be3fe60(param_1,param_2,param_3);
  puVar2 = PTR____NSArray0__struct_11034ab48;
  if ((int)lVar1 != 0) {
    puVar2 = PTR_PTR_1126af4d0;
    func_0x00010bfa7400(PTR_PTR_1126af4d0,param_2,param_3,*(undefined8 *)(param_1 + 0x48));
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106beeb2c; end: 106beeb87; -[SCMergedGalleryDataSource fetchFavoritedGallerySnapsWithSnapIds:] */

void FUN_106beeb2c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126af4d0;
  func_0x00010bfa7740();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (puVar2 != (undefined *)0x0) {
    puVar1 = puVar2;
  }
  _objc_retain(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106beeb88; end: 106beed17; -[SCMergedGalleryDataSource fetchRandomGallerySnaps:] */

void FUN_106beeb88(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar3 = PTR_PTR_1126af4c0;
  func_0x00010bfa9a00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar4 != (undefined *)0x0) {
    puVar8 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar3);
      }
      puVar5 = PTR_PTR_1126af4d0;
      func_0x00010bfa7380();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010bf529e0();
      if (puVar6 != (undefined *)0x0) {
        puVar6 = puVar5;
        func_0x00010bfb1920(puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2);
        _objc_release(puVar6);
      }
      _objc_release(puVar5);
      puVar8 = puVar8 + 1;
    } while (puVar4 != puVar8);
    puVar4 = puVar3;
    func_0x00010bf52a60();
  }
  puVar4 = puVar2;
  func_0x00010bf51e00(puVar2);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bfaaf50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126af4c0,PTR_s_fetchTotalGalleryEntries__1125c8578,
             *(undefined8 *)(puVar2 + 0x48));
  return;
}



/* Entry: 106beed18; end: 106beed2b; -[SCMergedGalleryDataSource fetchTotalGalleryEntries] */

void FUN_106beed18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaaf50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126af4c0,PTR_s_fetchTotalGalleryEntries__1125c8578,
             *(undefined8 *)(param_1 + 0x48));
  return;
}



/* Entry: 106beed2c; end: 106beee53; -[SCMergedGalleryDataSource fetchCurrentGalleryEntries] */

void FUN_106beed2c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_90 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_106beee54;
  uStack_30 = 0x106beee64;
  uStack_28 = 0;
  puStack_88 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_106beee54;
  uStack_60 = 0x106beee64;
  uStack_58 = 0;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_106beee6c;
  puStack_a0 = &UNK_110876070;
  lStack_98 = param_1;
  puStack_78 = puStack_88;
  puStack_48 = puStack_90;
  func_0x00010c0f8240(*(undefined8 *)(param_1 + 0x10),param_2,&puStack_b8);
  if (puStack_78[5] == 0) {
    puVar1 = PTR____NSArray0__struct_11034ab48;
    if ((undefined *)puStack_48[5] != (undefined *)0x0) {
      puVar1 = (undefined *)puStack_48[5];
    }
    _objc_retain(puVar1);
  }
  else {
    puVar1 = (undefined *)0x0;
  }
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106beee54; end: 106beee6b;  */

void FUN_106beee54(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106beee6c; end: 106beeed7;  */

void FUN_106beee6c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010be10ce0(*(undefined8 *)(param_1 + 0x20));
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar2;
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x68);
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106beeed8; end: 106beeeeb; -[SCMergedGalleryDataSource fetchGallerySnapsWithMediaIds:] */

void FUN_106beeed8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa7530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126af4d0,PTR_s_fetchGallerySnapsWithMediaIds_da_1125c76f0,param_3,
             *(undefined8 *)(param_1 + 0x48));
  return;
}



/* Entry: 106beeeec; end: 106beef03; -[SCMergedGalleryDataSource fetchGallerySnapDetailForSnap:] */

void FUN_106beeeec(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa7170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126bc7b8,PTR_s_fetchGallerySnapDetailForSnap_op_1125c7600,param_3,0,
             *(undefined8 *)(param_1 + 0x48));
  return;
}



/* Entry: 106beef04; end: 106bef027; -[SCMergedGalleryDataSource isGalleryEntryFailed:] */

uint FUN_106beef04(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x00010c077480();
  if ((int)puVar2 == 0) {
    puStack_48 = &uStack_50;
    uStack_50 = 0;
    uStack_40 = 0x2020000000;
    uStack_38 = 0;
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    _objc_retain(param_3);
    func_0x00010c0f8240(uVar4);
    uVar1 = (uint)*(byte *)(puStack_48 + 3);
    _objc_release(param_3);
    __Block_object_dispose(&uStack_50,8);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    uVar4 = param_3;
    func_0x00010bf97200(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900(uVar3);
    uVar1 = (uint)uVar3;
    _objc_release(uVar4);
  }
  _objc_release(param_3);
  return uVar1 & 1;
}



/* Entry: 106bef028; end: 106bef05b;  */

void FUN_106bef028(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  func_0x00010bf4b900(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  *(char *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = (char)uVar1;
  return;
}



/* Entry: 106bef05c; end: 106bef1c7; -[SCMergedGalleryDataSource observe:queue:changeHandler:] */

void FUN_106bef05c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_5);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf97780(uVar2,param_2,param_3);
  puVar1 = PTR_PTR_1126af4c0;
  if ((int)uVar2 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    uStack_80 = 0x106bef1d4;
    puStack_78 = &UNK_1109672d0;
    uStack_70 = param_5;
    _objc_retain(param_5);
    func_0x00010c0e0700(puVar1,param_2,param_3,uVar2,param_4,&puStack_90);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    _objc_release(param_3);
    uVar2 = uStack_70;
  }
  else {
    puVar1 = *(undefined **)(param_1 + 0x40);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_106bef1c8;
    puStack_50 = &UNK_1109672d0;
    uStack_48 = param_5;
    _objc_retain(param_5);
    func_0x00010c0e0800(puVar1,param_2,param_3,param_4,&puStack_68);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    _objc_release(param_3);
    uVar2 = uStack_48;
  }
  _objc_release(uVar2);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106bef1c8; end: 106bef1df;  */

void FUN_106bef1c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106bef1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 106bef1e0; end: 106bef2bf; -[SCMergedGalleryDataSource observeUserNumberOfStories] */

void FUN_106bef1e0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf6ab80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25ffc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106bef2c0; end: 106bef393;  */

void FUN_106bef2c0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  _objc_release();
  puVar3 = PTR_PTR_1126af5d0;
  puVar4 = PTR_PTR_1126ae6b8;
  if (lVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                        &PTR____CFConstantStringClassReference_110e785f8,0,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar3,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar4,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  else {
    puVar2 = (undefined *)(param_1 + 0x20);
    _objc_loadWeakRetained(puVar2);
    puVar4 = puVar2;
    func_0x00010be66b60();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106bef394; end: 106bef4cf; -[SCMergedGalleryDataSource _observeQueryForUserNumberOfStories] */

void FUN_106bef394(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = param_1;
  func_0x00010c0e0960(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar2 = uVar1;
  func_0x00010c0b8600(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be153a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2519e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_50);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 106bef4d0; end: 106bef56f;  */

void FUN_106bef4d0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  _objc_release();
  puVar3 = PTR_PTR_1126af5d0;
  if (lVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                        &PTR____CFConstantStringClassReference_110e785f8,0,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar3,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = (undefined *)(param_1 + 0x20);
    _objc_loadWeakRetained(puVar2);
    puVar3 = puVar2;
    func_0x00010be153a0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106bef570; end: 106bef607; -[SCMergedGalleryDataSource _fetchUserNumberOfStories] */

void FUN_106bef570(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126af4c0;
  func_0x00010bfa4c40(PTR_PTR_1126af4c0,param_2,*(undefined8 *)(param_1 + 0x48));
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126af5d0;
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar2 = puVar1;
  func_0x00010bf529e0();
  func_0x00010c0df840(puVar3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2619e0(puVar4,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106bef608; end: 106bef6eb; -[SCMergedGalleryDataSource addListener:] */

void FUN_106bef608(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  func_0x00010bef9980(*(undefined8 *)(param_1 + 0x18));
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106bef6ec; end: 106bef773;  */

void FUN_106bef6ec(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be10ce0(lVar1);
    uVar2 = *(undefined8 *)(lVar1 + 0x38);
    uVar3 = *(undefined8 *)(lVar1 + 0x28);
    _objc_retain(uVar3);
    _objc_retain(uVar2);
    func_0x00010bdde0a0(lVar1);
    func_0x00010bf64400(*(undefined8 *)(param_1 + 0x20),param_2,lVar1,uVar2,uVar3,
                        *(undefined8 *)(lVar1 + 0x68));
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106bef774; end: 106bef77b; -[SCMergedGalleryDataSource removeListener:] */

void FUN_106bef774(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 106bef77c; end: 106bef7d3; -[SCMergedGalleryDataSource reannounceDataSourceChange] */

void FUN_106bef77c(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106bef7d4;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x10),param_2,&puStack_38);
  return;
}



/* Entry: 106bef7d4; end: 106bef7eb;  */

void FUN_106bef7d4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bf64410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(lVar1 + 0x18),PTR_s_dataSource_didChangeEntries_fail_1125b6aa8,lVar1,
             *(undefined8 *)(lVar1 + 0x38),*(undefined8 *)(lVar1 + 0x28),
             *(undefined8 *)(lVar1 + 0x68));
  return;
}



/* Entry: 106bef7ec; end: 106bef813; -[SCMergedGalleryDataSource observeChanges] */

void FUN_106bef7ec(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106bef814; end: 106bef877; -[SCMergedGalleryDataSource dataSource:didChangeEntries:failedEntries:fetchEntryError:] */

void FUN_106bef814(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long in_x5;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  puVar1 = PTR_PTR_1126af5d0;
  if (in_x5 == 0) {
    func_0x00010c2619e0(PTR_PTR_1126af5d0,param_2,PTR____kCFBooleanTrue_11034ab68);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,in_x5);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106bef878; end: 106bef87b; -[SCMergedGalleryDataSource cloudSyncDidMutateBackupOperation] */

void FUN_106bef878(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c128b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_reloadDataAfterMutating_112627d00);
  return;
}



/* Entry: 106bef87c; end: 106bef883; -[SCMergedGalleryDataSource cloudSyncDidMutateBackupOperationIsDuringSync:hasMoreResponses:] */

void FUN_106bef87c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c26d5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x78),PTR_s_throttleCloudSyncDidMutateBackup_112678fa0);
  return;
}



/* Entry: 106bef884; end: 106bef92b; -[SCMergedGalleryDataSource reloadDataAfterMutating] */

void FUN_106bef884(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106bef92c; end: 106bef9b7;  */

void FUN_106bef92c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be880e0(param_1);
    func_0x00010be88100(param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar2);
    _objc_retain(uVar1);
    func_0x00010bdde0a0(param_1);
    func_0x00010bf64400(*(undefined8 *)(param_1 + 0x18),param_2,param_1,uVar1,uVar2,
                        *(undefined8 *)(param_1 + 0x68));
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106bef9b8; end: 106befb67; -[SCMergedGalleryDataSource _mixWithAllContentIfNeeded] */

void FUN_106bef9b8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x40);
  func_0x00010bf97420(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    uVar7 = *(ulong *)(param_1 + 0x38);
    func_0x00010c071b60(uVar7,param_2,*(undefined8 *)(param_1 + 0x20));
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar9);
    uVar8 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = uVar9;
    _objc_release(uVar8);
    if ((uVar7 & 1) != 0) goto LAB_106befb2c;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a0c0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,
                        *(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160();
    puVar4 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
    func_0x00010c246960(PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8,param_2,
                        &PTR____CFConstantStringClassReference_110f6e2d8,0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
    puStack_58 = puVar4;
    func_0x00010c246960(PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8,param_2,
                        &PTR____CFConstantStringClassReference_110f6e998,0);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_50 = puVar5;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_58,2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar4);
    puVar4 = puVar3;
    func_0x00010c246cc0(puVar3,param_2,puVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x38);
    *(undefined **)(param_1 + 0x38) = puVar4;
    _objc_release(uVar8);
    _objc_release(puVar6);
    _objc_release(puVar3);
  }
  uVar9 = *(undefined8 *)(param_1 + 0x80);
  uVar8 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bf51e00(uVar8);
  func_0x00010c0d9840(uVar9,param_2,uVar8);
  _objc_release(uVar8);
LAB_106befb2c:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  pcStack_68 = FUN_106befb68;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_106befbc0;
  puStack_80 = &UNK_110842e18;
  lStack_78 = lVar1;
  puStack_70 = &stack0xfffffffffffffff0;
  func_0x00010c0f7fc0(*(undefined8 *)(lVar1 + 0x10),param_2,&puStack_98);
  return;
}



/* Entry: 106befb68; end: 106befbbf; -[SCMergedGalleryDataSource lagunaContentDataSourceDidChange:] */

void FUN_106befb68(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106befbc0;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x10),param_2,&puStack_38);
  return;
}



/* Entry: 106befbc0; end: 106befbc7;  */

void FUN_106befbc0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be60850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__mixAllDataSourcesAndAnnounceCha_112575bb0);
  return;
}



/* Entry: 106befbc8; end: 106befbcb; -[SCMergedGalleryDataSource lagunaContentFinalized:withSnaps:] */

void FUN_106befbc8(void)

{
  return;
}



/* Entry: 106befbcc; end: 106befbcf; -[SCMergedGalleryDataSource featuredStoryDataSourceDidChange] */

void FUN_106befbcc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c128b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_reloadDataAfterMutating_112627d00);
  return;
}



/* Entry: 106befbd0; end: 106befc07; -[SCMergedGalleryDataSource _fetchDataIfNeeded] */

void FUN_106befbd0(long param_1)

{
  if ((*(byte *)(param_1 + 0x60) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x60) = 1;
  func_0x00010be880e0();
                    /* WARNING: Could not recover jumptable at 0x00010be88110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__refetchFailedEntries_11257f9e0);
  return;
}



/* Entry: 106befc08; end: 106befd63; -[SCMergedGalleryDataSource _refetchEntries] */

/* WARNING: Removing unreachable block (ram,0x000106befcc0) */

void FUN_106befc08(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar3 = PTR_PTR_1126af4c0;
  if (lVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bfb06d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (PTR_PTR_1126b24e0,PTR_s_fireSnapsTabNilProfileWithGraphe_1125c9b58,
               *(undefined8 *)(param_1 + 0x58));
    return;
  }
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa9160();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(0);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  *(undefined **)(param_1 + 0x20) = puVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
  _objc_retain(0);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126b24e0;
  func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010bfb06a0(puVar3);
  _objc_release(0);
  func_0x00010be608c0(param_1);
  return;
}



/* Entry: 106befd64; end: 106befe83; -[SCMergedGalleryDataSource _refetchFailedEntries] */

void FUN_106befd64(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar3 = PTR_PTR_1126af4c0;
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa9180();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_retain(puVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    *(undefined **)(param_1 + 0x28) = puVar3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_38,param_1);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_106befe84;
    puStack_50 = &UNK_110841fb0;
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(puVar3);
    puStack_48 = puVar3;
    func_0x000100162d98("APPSTORE",&puStack_68);
    _objc_release(puStack_48);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
    _objc_release(puVar3);
  }
  return;
}



/* Entry: 106befe84; end: 106befedb;  */

void FUN_106befe84(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0b8600(uVar2,param_2,&PTR___NSConcreteGlobalBlock_110967320);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(lVar1 + 0x30);
    *(undefined8 *)(lVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106befedc; end: 106befee3;  */

void FUN_106befedc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf97210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_entryId_1125c3628);
  return;
}



/* Entry: 106befee4; end: 106beff47; -[SCMergedGalleryDataSource _mixAllDataSourcesAndAnnounceChanges] */

void FUN_106befee4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010be608c0();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x68);
  _objc_retain(uVar1);
  func_0x00010bf64400(uVar3,param_2,param_1,uVar1,uVar2,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106beff48; end: 106bf0007; -[SCMergedGalleryDataSource _checkSQLiteLowDiskFetchError] */

void FUN_106beff48(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 uVar4;
  
  lVar1 = *(long *)(param_1 + 0x68);
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar3 = *(long *)(param_1 + 0x68);
    func_0x00010c292820();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c067fc0();
    _objc_release(lVar2);
    _objc_release(lVar3);
    if (lVar1 == 0xd) {
      uVar4 = 1;
      goto LAB_106befff4;
    }
  }
  uVar4 = 0;
LAB_106befff4:
  *(undefined1 *)(param_1 + 0x88) = uVar4;
  return;
}



/* Entry: 106bf0008; end: 106bf000f; -[SCMergedGalleryDataSource sqliteLowDiskError] */

undefined1 FUN_106bf0008(long param_1)

{
  return *(undefined1 *)(param_1 + 0x88);
}



/* Entry: 106bf0010; end: 106bf00db; -[SCMergedGalleryDataSource .cxx_destruct] */

void FUN_106bf0010(long param_1)

{
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
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



/* Entry: 106bf00dc; end: 106bf00e7; -[SCMemoriesSpectaclesContentDataSourcePluginScope .cxx_destruct] */

void FUN_106bf00dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106bf00e8; end: 106bf017f; -[SCMemoriesMergedDataSourceThrottler throttleCloudSyncDidMutateBackupOperationIsDuringSync:hasMoreResponses:] */

void FUN_106bf00e8(long param_1,undefined8 param_2,int param_3,int param_4)

{
  long lVar1;
  
  if (param_3 != 0) {
    if ((param_4 == 0) ||
       (lVar1 = *(long *)(param_1 + 8), (ulong)(lVar1 * 0x6db6db6db6db6db7) < 0x2492492492492493)) {
      lVar1 = param_1 + 0x10;
      _objc_loadWeakRetained(lVar1);
      func_0x00010bf3e4c0();
      _objc_release(lVar1);
      lVar1 = *(long *)(param_1 + 8);
    }
    *(long *)(param_1 + 8) = lVar1 + 1;
    return;
  }
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf3e4c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106bf0180; end: 106bf0187; -[SCMemoriesMergedDataSourceThrottler .cxx_destruct] */

void FUN_106bf0180(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 0x10);
  return;
}



/* Entry: 106bf0188; end: 106bf03b7; -[SCMemoriesMergedDataSourceListenerAnnouncer removeListener:] */

void FUN_106bf0188(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  
  _objc_retain(param_3);
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  puVar8 = (undefined8 *)(param_1 + 0x48);
  plVar6 = (long *)*puVar8;
  if (plVar6 == (long *)0x0) goto LAB_106bf033c;
  lVar7 = *plVar6;
  if (plVar6[1] - lVar7 == 8) {
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar7 != param_3) goto LAB_106bf01f0;
    uStack_70 = 0;
    plStack_68 = (long *)0x0;
    func_0x000100b8965c(puVar8,&uStack_70);
    if (plStack_68 == (long *)0x0) goto LAB_106bf033c;
    plVar6 = plStack_68 + 1;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar9 = plStack_68;
    } while (cVar2 != '\0');
  }
  else {
LAB_106bf01f0:
    plVar6 = (long *)0x30;
    __Znwm();
    plVar10 = plVar6 + 1;
    *plVar10 = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&PTR_FUN_110967350;
    plVar9 = plVar6 + 3;
    *plVar9 = 0;
    plVar6[4] = 0;
    plVar6[5] = 0;
    lVar1 = ((long *)*puVar8)[1];
    plStack_80 = plVar9;
    plStack_78 = plVar6;
    for (lVar7 = *(long *)*puVar8; lVar7 != lVar1; lVar7 = lVar7 + 8) {
      lVar4 = lVar7;
      _objc_loadWeakRetained();
      if (lVar4 != 0) {
        lVar5 = lVar7;
        _objc_loadWeakRetained();
        _objc_release();
        _objc_release(lVar4);
        if (lVar5 != param_3) {
          func_0x000100b8951c(plVar9,lVar7);
        }
      }
    }
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plStack_90 = plVar9;
    plStack_88 = plVar6;
    func_0x000100b8965c(puVar8,&plStack_90);
    plVar6 = plStack_88;
    if (plStack_88 != (long *)0x0) {
      plVar9 = plStack_88 + 1;
      do {
        lVar7 = *plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    if (plStack_78 == (long *)0x0) goto LAB_106bf033c;
    plVar6 = plStack_78 + 1;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar9 = plStack_78;
    } while (cVar2 != '\0');
  }
  if (lVar7 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
  }
LAB_106bf033c:
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106bf03b8; end: 106bf052f; -[SCMemoriesMergedDataSourceListenerAnnouncer dataSource:didChangeEntries:failedEntries:fetchEntryError:] */

void FUN_106bf03b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar8 = param_1 + 0x48;
  __ZNSt3__112__get_sp_mutEPKv(lVar8);
  __ZNSt3__18__sp_mut4lockEv();
  plVar2 = *(long **)(param_1 + 0x48);
  plVar3 = *(long **)(param_1 + 0x50);
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = *plVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  __ZNSt3__18__sp_mut6unlockEv(lVar8);
  if (plVar2 != (long *)0x0) {
    lVar4 = plVar2[1];
    for (lVar8 = *plVar2; lVar8 != lVar4; lVar8 = lVar8 + 8) {
      lVar7 = lVar8;
      _objc_loadWeakRetained(lVar8);
      func_0x00010bf64400();
      _objc_release(lVar7);
    }
  }
  if (plVar3 != (long *)0x0) {
    plVar2 = plVar3 + 1;
    do {
      lVar8 = *plVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar8 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106bf0530; end: 106bf0557; -[SCMemoriesMergedDataSourceListenerAnnouncer .cxx_destruct] */

void FUN_106bf0530(long param_1)

{
  FUN_106bf0608(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1 + 8);
  return;
}



/* Entry: 106bf0558; end: 106bf056b;  */

void FUN_106bf0558(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  *puVar1 = &PTR_FUN_110967350;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 106bf056c; end: 106bf057b;  */

void FUN_106bf056c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110967350;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 106bf057c; end: 106bf059b;  */

void FUN_106bf057c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110967350;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 106bf059c; end: 106bf0603;  */

void FUN_106bf059c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    lVar1 = lVar3;
    if (lVar3 != lVar2) {
      do {
        lVar2 = lVar2 + -8;
        _objc_destroyWeak(lVar2);
      } while (lVar2 != lVar3);
      lVar1 = *(long *)(param_1 + 0x18);
    }
    *(long *)(param_1 + 0x20) = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 106bf0604; end: 106bf0607;  */

void FUN_106bf0604(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 106bf0608; end: 106bf065f;  */

long FUN_106bf0608(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 106bf0660; end: 106bf088f; -[SCSpectaclesCustomExportScope initWithUIContainer:fromViewController:delegate:userContext:thumbnailLivePreview:magicMomentCache:selectedItems:selectedSnaps:allSnaps:editedVideoFilter:previewConfiguration:commonLoggingParamsBuilder:] */

undefined8 *
FUN_106bf0660(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  puStack_68 = PTR_PTR_1126f59d0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 2,param_4);
    _objc_storeWeak(puVar1 + 3,param_5);
    puVar1[4] = param_6;
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_14;
    _objc_release(uVar2);
  }
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106bf0890; end: 106bf0abf; -[SCSpectaclesCustomExportScope initWithUIContainer:fromViewController:delegate:userContext:thumbnailLivePreview:magicMomentCache:selectedItems:selectedSnaps:allSnaps:editedImage:previewConfiguration:commonLoggingParamsBuilder:] */

undefined8 *
FUN_106bf0890(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  puStack_68 = PTR_PTR_1126f59d0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 2,param_4);
    _objc_storeWeak(puVar1 + 3,param_5);
    puVar1[4] = param_6;
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_14;
    _objc_release(uVar2);
  }
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106bf0ac0; end: 106bf0ac7; -[SCSpectaclesCustomExportScope uiContainer] */

undefined8 FUN_106bf0ac0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106bf0ac8; end: 106bf0af7; -[SCSpectaclesCustomExportScope setUiContainer:] */

void FUN_106bf0ac8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106bf0af8; end: 106bf0b0f; -[SCSpectaclesCustomExportScope fromViewController] */

void FUN_106bf0af8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106bf0b10; end: 106bf0b1b; -[SCSpectaclesCustomExportScope setFromViewController:] */

void FUN_106bf0b10(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 106bf0b1c; end: 106bf0b33; -[SCSpectaclesCustomExportScope delegate] */

void FUN_106bf0b1c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106bf0b34; end: 106bf0b3f; -[SCSpectaclesCustomExportScope setDelegate:] */

void FUN_106bf0b34(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 106bf0b40; end: 106bf0b47; -[SCSpectaclesCustomExportScope userContext] */

undefined8 FUN_106bf0b40(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106bf0b48; end: 106bf0b4f; -[SCSpectaclesCustomExportScope setUserContext:] */

void FUN_106bf0b48(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 106bf0b50; end: 106bf0b57; -[SCSpectaclesCustomExportScope thumbnailLivePreview] */

undefined8 FUN_106bf0b50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106bf0b58; end: 106bf0b87; -[SCSpectaclesCustomExportScope setThumbnailLivePreview:] */

void FUN_106bf0b58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106bf0b88; end: 106bf0b8f; -[SCSpectaclesCustomExportScope magicMomentCache] */

undefined8 FUN_106bf0b88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106bf0b90; end: 106bf0bbf; -[SCSpectaclesCustomExportScope setMagicMomentCache:] */

void FUN_106bf0b90(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106bf0bc0; end: 106bf0bc7; -[SCSpectaclesCustomExportScope selectedItems] */

undefined8 FUN_106bf0bc0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106bf0bc8; end: 106bf0bf7; -[SCSpectaclesCustomExportScope setSelectedItems:] */

void FUN_106bf0bc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106bf0bf8; end: 106bf0bff; -[SCSpectaclesCustomExportScope selectedSnaps] */

undefined8 FUN_106bf0bf8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 106bf0c00; end: 106bf0c2f; -[SCSpectaclesCustomExportScope setSelectedSnaps:] */

void FUN_106bf0c00(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106bf0c30; end: 106bf0c37; -[SCSpectaclesCustomExportScope allSnaps] */

undefined8 FUN_106bf0c30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 106bf0c38; end: 106bf0c67; -[SCSpectaclesCustomExportScope setAllSnaps:] */

void FUN_106bf0c38(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106bf0c68; end: 106bf0c6f; -[SCSpectaclesCustomExportScope editedVideoFilter] */

undefined8 FUN_106bf0c68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 106bf0c70; end: 106bf0c9f; -[SCSpectaclesCustomExportScope setEditedVideoFilter:] */

void FUN_106bf0c70(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106bf0ca0; end: 106bf0ca7; -[SCSpectaclesCustomExportScope editedImage] */

undefined8 FUN_106bf0ca0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 106bf0ca8; end: 106bf0cd7; -[SCSpectaclesCustomExportScope setEditedImage:] */

void FUN_106bf0ca8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106bf0cd8; end: 106bf0cdf; -[SCSpectaclesCustomExportScope previewConfiguration] */

undefined8 FUN_106bf0cd8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 106bf0ce0; end: 106bf0d0f; -[SCSpectaclesCustomExportScope setPreviewConfiguration:] */

void FUN_106bf0ce0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106bf0d10; end: 106bf0d17; -[SCSpectaclesCustomExportScope commonLoggingParamsBuilder] */

undefined8 FUN_106bf0d10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 106bf0d18; end: 106bf0d47; -[SCSpectaclesCustomExportScope setCommonLoggingParamsBuilder:] */

void FUN_106bf0d18(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106bf0d48; end: 106bf0de7; -[SCSpectaclesCustomExportScope .cxx_destruct] */

void FUN_106bf0d48(long param_1)

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
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106bf0de8; end: 106bf0ed7; -[SCTopicViewerMusicCameraPresenter initWithMusicTrackId:startOffsetMs:sourcePageType:musicCameraScopeExposer:musicCameraScopeBuilderServices:sourcePageSessionId:] */

undefined1 *
FUN_106bf0de8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126f59d8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 0x30) = param_4;
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  return (undefined1 *)puVar1;
}



/* Entry: 106bf0ed8; end: 106bf0fa7; -[SCTopicViewerMusicCameraPresenter presentCameraWorkflowWithPresentingViewController:] */

void FUN_106bf0ed8(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
  func_0x00010c071800();
  if (iVar1 != 0) {
    lVar2 = param_1;
    func_0x00010becd840(param_1,param_2,*(undefined8 *)(param_1 + 0x10));
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    lVar3 = param_1;
    func_0x00010be8f000(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf236a0(uVar4,param_2,param_3,lVar3,param_1,*(undefined8 *)(param_1 + 8),lVar2,0,
                        *(undefined4 *)(param_1 + 0x30),1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x18),param_2,uVar4);
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106bf0fa8; end: 106bf100b; -[SCTopicViewerMusicCameraPresenter dismissCameraScope:] */

void FUN_106bf0fa8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x18));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  func_0x00010bf29840(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c275880();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106bf100c; end: 106bf1037; -[SCTopicViewerMusicCameraPresenter _topicsPageTypeFromMusicSourcePageType:] */

undefined8 FUN_106bf100c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0x60;
  if (param_3 == 0xc6) {
    uVar1 = 0xcd;
  }
  uVar2 = 0xcc;
  if (param_3 != 0xc5) {
    uVar2 = uVar1;
  }
  uVar1 = 0xcb;
  if (param_3 != 0x5c) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* Entry: 106bf1038; end: 106bf10fb; -[SCTopicViewerMusicCameraPresenter _replyConfiguration] */

void FUN_106bf1038(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126c20e0;
  _objc_alloc(PTR_PTR_1126c20e0);
  func_0x00010c054660();
  puVar2 = PTR_PTR_1126ae6c0;
  func_0x00010c294300(PTR_PTR_1126ae6c0,param_2,&PTR____CFConstantStringClassReference_110daafd8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae6d0;
  _objc_alloc(PTR_PTR_1126ae6d0);
  func_0x00010c03e5a0();
  puVar4 = PTR_PTR_1126b1bb0;
  func_0x00010c275ae0(PTR_PTR_1126b1bb0,param_2,puVar3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106bf10fc; end: 106bf1113; -[SCTopicViewerMusicCameraPresenter cameraFlowObserver] */

void FUN_106bf10fc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106bf1114; end: 106bf111f; -[SCTopicViewerMusicCameraPresenter setCameraFlowObserver:] */

void FUN_106bf1114(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x38,param_3);
  return;
}



/* Entry: 106bf1120; end: 106bf1163; -[SCTopicViewerMusicCameraPresenter .cxx_destruct] */

void FUN_106bf1120(long param_1)

{
  _objc_destroyWeak(param_1 + 0x38);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 106bf1164; end: 106bf116f; +[SCCSoundTopicHeader componentPath] */

undefined ** FUN_106bf1164(void)

{
  return &PTR____CFConstantStringClassReference_110e78638;
}



/* Entry: 106bf1170; end: 106bf11a3; -[SCCSoundTopicHeader initWithViewModel:componentContext:runtime:] */

void FUN_106bf1170(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f59e0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 106bf11a4; end: 106bf11f3; -[SCCSoundTopicHeader setViewModel:] */

void FUN_106bf11a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106bf11f4; end: 106bf1237; -[SCCSoundTopicHeader viewModel] */

void FUN_106bf11f4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106bf1238; end: 106bf12af; -[SCCSoundTopicHeaderArtworkContext initWithOnTapArtwork:playbackProgressObservable:] */

undefined8
FUN_106bf1238(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retainBlock();
  uVar1 = param_3;
  func_0x000106bf15a0();
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 106bf12b0; end: 106bf12c3; +[SCCSoundTopicHeaderArtworkContext valdiMarshallableObjectDescriptor] */

void FUN_106bf12b0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110967390;
  param_1[1] = &PTR_s_SCBridgeObservable_1109673d8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106bf12c4; end: 106bf12f7; -[SCCSoundTopicHeaderButtonContext initWithOnTapActionButton:] */

void FUN_106bf12c4(void)

{
  func_0x000106bf15dc();
  func_0x000106bf1578(PTR_PTR_1126f59f0);
  func_0x000106bf15d0();
  return;
}



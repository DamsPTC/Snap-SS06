/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10848f2f4; end: 10848f39b; -[SCAdMediaRenditionSelector getHigherQualityRendition:and:] */

void FUN_10848f2f4(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_3;
  func_0x00010bfe0640();
  lVar3 = param_3;
  func_0x00010c2a5040();
  _objc_retain(param_4);
  lVar4 = param_4;
  func_0x00010bfe0640();
  lVar5 = param_4;
  func_0x00010c2a5040();
  _objc_release(param_4);
  lVar1 = param_3;
  if (lVar3 * lVar2 - lVar5 * lVar4 == 0 || lVar3 * lVar2 < lVar5 * lVar4) {
    lVar1 = param_4;
  }
  _objc_retain(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10848f39c; end: 10848f413; -[SCAdMediaRenditionSelector getSmallerRendition:and:] */

void FUN_10848f39c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  double dVar2;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010bfad040(param_4);
  dVar2 = param_1;
  func_0x00010bfad040(param_5);
  uVar1 = param_4;
  if (dVar2 <= param_1) {
    uVar1 = param_5;
  }
  _objc_retain(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10848f414; end: 10848f45b;  */

void FUN_10848f414(int param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (param_1 - 1U < 0x1a) {
    uVar1 = *(undefined8 *)(&UNK_10df30520 + (ulong)(param_1 - 1U) * 8);
  }
  else {
    uVar1 = 0x17;
  }
  func_0x00010c25d240(PTR_PTR_1126b8ca0,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10848f45c; end: 10848f47b;  */

undefined4 FUN_10848f45c(ulong param_1)

{
  if (param_1 < 0x17) {
    return *(undefined4 *)(&UNK_10df305f0 + param_1 * 4);
  }
  return 0;
}



/* Entry: 10848f47c; end: 10848f4df;  */

bool FUN_10848f47c(double param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain();
  if (((param_2 == 0) || (lVar2 = param_2, func_0x00010c0cdaa0(), lVar2 != 0)) ||
     (func_0x00010c0cdca0(param_2), param_1 != 0.0)) {
    bVar1 = false;
  }
  else {
    lVar2 = param_2;
    func_0x00010c0cdb40(param_2);
    bVar1 = lVar2 == 0;
  }
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 10848f4e0; end: 10848f5c7; -[SCAdRecentViewReceipts init] */

undefined1 * FUN_10848f4e0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fca30;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10848f5c8; end: 10848f69f; -[SCAdRecentViewReceipts enqueueViewReceipt:] */

void FUN_10848f5c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10848f6a0; end: 10848f6d3;  */

void FUN_10848f6a0(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be0a320();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10848f6d4; end: 10848f7ab; -[SCAdRecentViewReceipts getRecentViewReceiptsWithCompletion:] */

void FUN_10848f6d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10848f7ac; end: 10848f7df;  */

void FUN_10848f7ac(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be21f00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10848f7e0; end: 10848f867; -[SCAdRecentViewReceipts _enqueueViewReceipt:] */

void FUN_10848f7e0(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (param_3 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    _objc_retain(param_3);
    func_0x00010c12d360(uVar2,param_2,param_3);
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x18),param_2,puVar1,param_3);
    _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 10848f868; end: 10848f953; -[SCAdRecentViewReceipts _getRecentViewReceiptsWithCompletion:] */

void FUN_10848f868(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10848f954;
  puStack_50 = &UNK_110a4acc0;
  lStack_48 = param_1;
  func_0x00010bfed480(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d480(*(undefined8 *)(param_1 + 0x10));
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puStack_90 = puVar1;
  uStack_88 = 0xc2000000;
  uStack_80 = 0x10848f9d4;
  puStack_78 = &UNK_110a4acf0;
  lStack_70 = param_1;
  func_0x000100504554(uVar3,&puStack_90);
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3,uVar3);
  }
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10848f954; end: 10848fa4f;  */

bool FUN_10848f954(double param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x18);
  func_0x00010c0e00e0(uVar1,param_3,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f380();
  _objc_release(puVar2);
  _objc_release(uVar1);
  return 300.0 < param_1;
}



/* Entry: 10848fa50; end: 10848fa57; -[SCAdRecentViewReceipts recentViewReceipts] */

undefined8 FUN_10848fa50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10848fa58; end: 10848fa87; -[SCAdRecentViewReceipts setRecentViewReceipts:] */

void FUN_10848fa58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10848fa88; end: 10848fa8f; -[SCAdRecentViewReceipts recentViewReceiptToViewedTimestamp] */

undefined8 FUN_10848fa88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10848fa90; end: 10848fabf; -[SCAdRecentViewReceipts setRecentViewReceiptToViewedTimestamp:] */

void FUN_10848fa90(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10848fac0; end: 10848fafb; -[SCAdRecentViewReceipts .cxx_destruct] */

void FUN_10848fac0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10848fafc; end: 10848fb8f; -[SCAdServeResponseDataStore init] */

undefined8 FUN_10848fafc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae790;
  _objc_alloc(PTR_PTR_1126ae790);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f49c3ac);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021520(puVar1,param_2,puVar2,0x15,0,0x10);
  _objc_release(puVar2);
  func_0x00010c034960(param_1,param_2,puVar1);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 10848fb90; end: 10848fc1f; -[SCAdServeResponseDataStore initWithPerformer:] */

undefined1 * FUN_10848fb90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fca38;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10848fc20; end: 10848fcf7; -[SCAdServeResponseDataStore addAdResponse:] */

void FUN_10848fc20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10848fcf8; end: 10848fd2b;  */

void FUN_10848fcf8(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdc5ca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10848fd2c; end: 10848fe03; -[SCAdServeResponseDataStore removeAdResponseForIdentifier:] */

void FUN_10848fd2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10848fe04; end: 10848fe37;  */

void FUN_10848fe04(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8b400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10848fe38; end: 10848ff37; -[SCAdServeResponseDataStore adResponseForIdentifier:completion:] */

void FUN_10848fe38(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10848ff38; end: 10848ff6b;  */

void FUN_10848ff38(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdc5760();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10848ff6c; end: 10849006b; -[SCAdServeResponseDataStore updateAdResponseList:completion:] */

void FUN_10848ff6c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10849006c; end: 10849009f;  */

void FUN_10849006c(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed2aa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1084900a0; end: 10849014f; -[SCAdServeResponseDataStore _addAdResponse:] */

void FUN_1084900a0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  if ((param_3 != 0) && (lVar2 = lVar1, func_0x00010c08fa60(), lVar2 != 0)) {
    lVar2 = *(long *)(param_1 + 0x10);
    func_0x00010c0e00e0(lVar2,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      lVar3 = param_3;
      func_0x00010bef4240();
      _objc_release(lVar2);
      if (lVar3 == 4) goto LAB_108490130;
    }
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x10),param_2,param_3,lVar1);
  }
LAB_108490130:
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108490150; end: 108490157; -[SCAdServeResponseDataStore _removeAdResponseForIdentifier:] */

void FUN_108490150(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12d3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeObjectForKey__112628f18);
  return;
}



/* Entry: 108490158; end: 1084901ef; -[SCAdServeResponseDataStore _adResponseForIdentifier:completion:] */

void FUN_108490158(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == 0) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4,0);
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c0e00e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4,uVar1);
    }
    _objc_release(uVar1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1084901f0; end: 10849061b; -[SCAdServeResponseDataStore _updateAdResponseList:completion:] */

long FUN_1084901f0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar13 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      lVar14 = *(long *)(lVar13 * 8);
      lVar4 = lVar14;
      func_0x00010c28d1c0(lVar14);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = *(long *)(param_1 + 0x10);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar5 == 0) {
        lVar6 = lVar14;
        func_0x00010bef4a60();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar6;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar14;
        func_0x00010c28d1c0(lVar14);
        _objc_retainAutoreleasedReturnValue();
        lVar12 = lVar7;
        func_0x00010c0720c0();
        _objc_release(lVar8);
        _objc_release(lVar7);
        _objc_release(lVar6);
        if ((int)lVar12 == 0) {
          puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
          lVar6 = lVar14;
          func_0x00010bef4a60();
          _objc_retainAutoreleasedReturnValue();
          lVar8 = lVar6;
          func_0x00010bef52c0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar6);
          lVar6 = lVar8;
          func_0x00010bf52a60();
          lVar7 = lRam0000000000000000;
          while (lVar6 != 0) {
            lVar12 = 0;
            do {
              if (lRam0000000000000000 != lVar7) {
                _objc_enumerationMutation(lVar8);
              }
              uVar10 = *(undefined8 *)(lVar12 * 8);
              func_0x00010c2af9a0(uVar10);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar9);
              _objc_release(uVar10);
              lVar12 = lVar12 + 1;
            } while (lVar6 != lVar12);
            lVar6 = lVar8;
            func_0x00010bf52a60();
          }
          _objc_release(lVar8);
          lVar6 = lVar14;
          func_0x00010bef4a60(lVar14);
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar6;
          func_0x00010c2af9a0();
          _objc_retainAutoreleasedReturnValue();
          lVar8 = lVar7;
          func_0x00010c2a7da0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar7);
          _objc_release(lVar6);
          uVar10 = *(undefined8 *)(param_1 + 0x10);
          func_0x00010bef4a60(lVar14);
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar14;
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c12d3e0(uVar10);
          _objc_release(lVar6);
          _objc_release(lVar14);
          func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x10));
          func_0x00010befa120(puVar2);
          _objc_release(lVar8);
          _objc_release(puVar9);
        }
        else {
          lVar6 = lVar14;
          func_0x00010bef4a60(lVar14);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x10));
          _objc_release(lVar6);
          func_0x00010bef4a60(lVar14);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar2);
          _objc_release(lVar14);
        }
      }
      else {
        func_0x00010befa120(puVar2);
      }
      _objc_release(lVar5);
      _objc_release(lVar4);
      lVar13 = lVar13 + 1;
    } while (lVar13 != lVar3);
    lVar3 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  if (param_4 != 0) {
    (**(code **)(param_4 + 0x10))(param_4,puVar2);
  }
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return param_3;
  }
  ___stack_chk_fail();
  return *(long *)(param_3 + 0x10);
}



/* Entry: 10849061c; end: 108490623; -[SCAdServeResponseDataStore adIdentifierToResponseMap] */

undefined8 FUN_10849061c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108490624; end: 108490653; -[SCAdServeResponseDataStore setAdIdentifierToResponseMap:] */

void FUN_108490624(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108490654; end: 108490683; -[SCAdServeResponseDataStore .cxx_destruct] */

void FUN_108490654(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108490684; end: 108490713;  */

void FUN_108490684(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126afde0;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c09e4e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf55ce0(puVar3,param_2,uVar2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f340(uVar1,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108490714; end: 108492893;  */

undefined *
FUN_108490714(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
             undefined8 param_10,undefined8 param_11,undefined8 param_12,long param_13)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  ulong uVar19;
  long *plVar20;
  undefined **ppuVar21;
  undefined **ppuVar22;
  undefined **ppuVar23;
  undefined **ppuVar24;
  undefined **ppuVar25;
  undefined8 uVar26;
  undefined *puVar27;
  long lVar28;
  long lVar29;
  undefined *puVar30;
  long lVar31;
  ulong uVar32;
  ulong uVar33;
  int iVar34;
  undefined *puVar35;
  long lVar36;
  undefined **ppuVar37;
  double dVar38;
  ulong uStack_2d0;
  long lStack_228;
  long lStack_220;
  undefined *puStack_218;
  undefined8 uStack_210;
  code *pcStack_208;
  undefined *puStack_200;
  undefined **ppuStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  code *pcStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  long lStack_188;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  puVar35 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18ba0();
  _objc_release(puVar35);
  puVar35 = PTR_PTR_1126c0260;
  _objc_opt_new();
  puVar1 = PTR_PTR_1126c0270;
  _objc_opt_new();
  lVar31 = param_1;
  func_0x00010c292860(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar31;
  FUN_10848b778();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195bc0(puVar1);
  _objc_release(lVar2);
  _objc_release(lVar31);
  uVar3 = param_2;
  func_0x00010c149400();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c08fa60();
  _objc_release(uVar3);
  if (uVar4 != 0) {
    uVar3 = param_2;
    func_0x00010c149400(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010b704680();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f5260(puVar1);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  uVar3 = param_2;
  func_0x00010c06a360(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar32 = uVar4;
  func_0x00010c26a3a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07b8e0();
  func_0x00010c1b4fa0(puVar1);
  _objc_release(uVar32);
  _objc_release(uVar4);
  _objc_release(uVar3);
  lVar31 = param_1;
  func_0x00010bf1a840();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar31;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar36 = lVar2;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar36;
  FUN_10848b7c8();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar36);
  _objc_release(lVar2);
  _objc_release(lVar31);
  if (lVar5 != 0) {
    func_0x00010c189ba0(puVar1);
  }
  func_0x00010c21dd80(puVar35);
  lVar31 = param_1;
  func_0x00010bf07960(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar31;
  FUN_10848b980();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c169820(puVar35);
  _objc_release(lVar2);
  _objc_release(lVar31);
  uVar3 = param_2;
  func_0x00010befe100();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010848b8e8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dfdc0(puVar35);
  _objc_release(uVar4);
  puVar6 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18ba0();
  _objc_release(puVar6);
  func_0x00010bf91260(param_2);
  if (param_13 == 0) {
    lVar31 = param_1;
    func_0x00010c292860();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar31;
    func_0x00010bfcbcc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    _objc_release(lVar2);
    _objc_release(lVar31);
  }
  else {
    _objc_retain(param_13);
    lVar2 = param_13;
  }
  lVar31 = param_1;
  func_0x00010bf6fee0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar36 = lVar31;
  FUN_10848bb28();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18c700(puVar35);
  _objc_release(lVar36);
  _objc_release(lVar31);
  puVar6 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95660();
  _objc_release(puVar6);
  puVar6 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18ba0();
  _objc_release(puVar6);
  lVar31 = param_1;
  func_0x00010bf6fee0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar36 = lVar31;
  FUN_10848cb44();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cbfe0(puVar35);
  _objc_release(lVar36);
  _objc_release(lVar31);
  puVar6 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95660();
  _objc_release(puVar6);
  puVar6 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18ba0();
  _objc_release(puVar6);
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  dVar38 = 0.0;
  lStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  plStack_1e0 = (long *)0x0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uVar4 = param_2;
  func_0x00010c06a360();
  _objc_retainAutoreleasedReturnValue();
  uStack_2d0 = uVar4;
  func_0x00010bf52a60();
  if (uStack_2d0 != 0) {
    lVar31 = *plStack_1e0;
    do {
      uVar32 = 0;
      do {
        if (*plStack_1e0 != lVar31) {
          _objc_enumerationMutation(uVar4);
        }
        ppuVar37 = *(undefined ***)(lStack_1e8 + uVar32 * 8);
        puVar7 = PTR_PTR_1126c0278;
        _objc_opt_new(PTR_PTR_1126c0278);
        ppuVar8 = ppuVar37;
        func_0x00010c26a3a0(ppuVar37);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf8fe40();
        func_0x00010c1b08e0(puVar7);
        _objc_release(ppuVar8);
        ppuVar8 = ppuVar37;
        func_0x00010c26a3a0(ppuVar37);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf8fa80();
        func_0x00010c177e80(puVar7);
        _objc_release(ppuVar8);
        ppuVar8 = ppuVar37;
        func_0x00010c26a3a0(ppuVar37);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf2da00();
        func_0x00010c177ee0(puVar7);
        _objc_release(ppuVar8);
        func_0x00010c177e40(puVar7);
        func_0x00010c177e00(puVar7);
        func_0x00010c217c80(puVar7);
        func_0x00010c177e20(puVar7);
        func_0x00010c177ea0(puVar7);
        func_0x00010c067f60(param_9);
        puVar9 = PTR_PTR_1126c0320;
        _objc_alloc(PTR_PTR_1126c0320);
        func_0x00010c01e4a0();
        func_0x00010c20ff80(puVar7);
        _objc_release(puVar9);
        func_0x00010c177e60(puVar7);
        ppuVar10 = ppuVar37;
        func_0x00010c26a3a0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar8 = ppuVar10;
        func_0x00010c263100();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar10);
        ppuVar10 = ppuVar8;
        func_0x00010c08fa60();
        if (ppuVar10 == (undefined **)0x0) {
          _objc_release(ppuVar8);
          ppuVar8 = &PTR____CFConstantStringClassReference_110eddeb8;
        }
        ppuVar10 = ppuVar8;
        FUN_108492894();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1914e0(puVar7);
        func_0x00010c177ec0(puVar7);
        puVar9 = PTR_PTR_1126ae740;
        func_0x00010bf09f00();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = param_6;
        func_0x00010bf91e40();
        if ((int)uVar11 != 0) {
          func_0x00010befc800(puVar9);
        }
        func_0x00010befc800(puVar9);
        func_0x00010befc800(puVar9);
        func_0x00010c20ff60(puVar7);
        func_0x00010c177f20(puVar7);
        ppuVar12 = (undefined **)PTR_PTR_1126ae740;
        func_0x00010bf09f00();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = PTR_PTR_1126b8ca0;
        func_0x00010beffb80(PTR_PTR_1126b8ca0);
        _objc_retainAutoreleasedReturnValue();
        puStack_218 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_210 = 0xc2000000;
        pcStack_208 = FUN_108492978;
        puStack_200 = &UNK_1109583a8;
        _objc_retain(ppuVar12);
        ppuStack_1f8 = ppuVar12;
        func_0x00010bf97e80(puVar13);
        _objc_release(puVar13);
        ppuVar14 = ppuVar37;
        func_0x00010c26a3a0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar15 = ppuVar14;
        func_0x00010bef4240();
        _objc_release(ppuVar14);
        if (ppuVar15 == (undefined **)0x5) {
          func_0x00010befc800(ppuVar12);
        }
        uVar11 = param_6;
        func_0x00010bf91f80();
        if ((int)uVar11 != 0) {
          func_0x00010befc800(ppuVar12);
        }
        func_0x00010c1e51a0(puVar7);
        ppuVar15 = ppuVar37;
        func_0x00010c26a3a0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar16 = ppuVar15;
        func_0x00010c263040();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(ppuVar12);
        ppuVar17 = ppuVar16;
        FUN_108492894();
        _objc_retainAutoreleasedReturnValue();
        ppuVar18 = ppuVar17;
        func_0x00010bf529e0();
        ppuVar14 = ppuVar12;
        if (ppuVar18 != (undefined **)0x0) {
          ppuVar14 = ppuVar17;
        }
        _objc_retain(ppuVar14);
        _objc_release(ppuVar12);
        _objc_release(ppuVar17);
        _objc_release(ppuVar16);
        _objc_release(ppuVar15);
        ppuVar15 = ppuVar37;
        func_0x00010c26a3a0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar16 = ppuVar15;
        func_0x00010bef4240();
        _objc_release(ppuVar15);
        if (ppuVar16 == (undefined **)0x5) {
          func_0x00010befc800(ppuVar14);
        }
        ppuVar15 = ppuVar37;
        func_0x00010c26a3a0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar16 = ppuVar15;
        func_0x00010bf91ea0();
        _objc_release(ppuVar15);
        if ((int)ppuVar16 != 0) {
          func_0x00010befc800(ppuVar14);
        }
        uVar11 = param_6;
        func_0x00010bf91f80();
        if ((int)uVar11 != 0) {
          func_0x00010befc800(ppuVar14);
        }
        func_0x00010c20fee0(puVar7);
        uVar33 = param_2;
        func_0x00010c0c2ca0();
        _objc_retainAutoreleasedReturnValue();
        uVar19 = uVar33;
        func_0x00010c08fa60();
        _objc_release(uVar33);
        if (uVar19 != 0) {
          uVar33 = param_2;
          func_0x00010c0c2ca0(param_2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1c37a0(puVar7);
          _objc_release(uVar33);
        }
        uVar33 = param_2;
        func_0x00010c0c2cc0();
        _objc_retainAutoreleasedReturnValue();
        uVar19 = uVar33;
        func_0x00010c08fa60();
        _objc_release(uVar33);
        if (uVar19 != 0) {
          uVar33 = param_2;
          func_0x00010c0c2cc0(param_2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1c37c0(puVar7);
          _objc_release(uVar33);
        }
        puVar13 = PTR_PTR_1126d9830;
        func_0x00010bf45120(PTR_PTR_1126d9830);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1803c0(puVar7);
        _objc_release(puVar13);
        puVar13 = PTR_PTR_1126c0320;
        _objc_alloc(PTR_PTR_1126c0320);
        func_0x00010c01e4a0();
        func_0x00010c20ff20(puVar7);
        _objc_release(puVar13);
        func_0x00010c210080(puVar7);
        func_0x00010c1c9300(puVar7);
        func_0x00010c07ed80(param_6);
        func_0x00010c1b47e0(puVar7);
        puVar13 = PTR_PTR_1126ae740;
        func_0x00010bf09f00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befc800();
        func_0x00010c20ffa0(puVar7);
        func_0x00010bfc9140(param_7);
        func_0x00010c194aa0(puVar7);
        lStack_220 = 0;
        plVar20 = &lStack_220;
        FUN_1084929a8(plVar20);
        _objc_retainAutoreleasedReturnValue();
        lVar28 = lStack_220;
        _objc_retain(lStack_220);
        func_0x00010c166400(puVar7);
        _objc_release(plVar20);
        lStack_228 = lVar28;
        plVar20 = &lStack_228;
        func_0x000108492c7c(plVar20);
        _objc_retainAutoreleasedReturnValue();
        lVar36 = lStack_228;
        _objc_retain(lStack_228);
        _objc_release(lVar28);
        func_0x00010c199a00(puVar7);
        _objc_release(plVar20);
        if (lVar36 != 0) {
          _objc_retain(param_10);
          _objc_retain(lVar36);
          puStack_1b0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_1a8 = 0xc2000000;
          pcStack_1a0 = FUN_108490684;
          puStack_198 = &UNK_110841f80;
          _objc_retain(param_10);
          uStack_190 = param_10;
          _objc_retain(lVar36);
          lStack_188 = lVar36;
          func_0x000107c312d0("APPSTORE",&puStack_1b0);
          _objc_release(lStack_188);
          _objc_release(uStack_190);
          _objc_release(lVar36);
          _objc_release(param_10);
        }
        func_0x00010c23eb60(param_2);
        func_0x00010c177f00(puVar7);
        ppuVar15 = ppuVar37;
        func_0x00010c26a3a0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar16 = ppuVar15;
        func_0x00010c06a4a0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar17 = ppuVar16;
        FUN_10848c894();
        ppuVar18 = ppuVar37;
        func_0x00010c26a3a0(ppuVar37);
        _objc_retainAutoreleasedReturnValue();
        ppuVar21 = ppuVar18;
        func_0x00010c06a3c0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar22 = ppuVar37;
        func_0x00010c26a3a0(ppuVar37);
        _objc_retainAutoreleasedReturnValue();
        ppuVar23 = ppuVar22;
        func_0x00010bf65fc0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar24 = ppuVar37;
        func_0x00010c26a3a0(ppuVar37);
        _objc_retainAutoreleasedReturnValue();
        ppuVar25 = ppuVar24;
        func_0x00010bf66360();
        _objc_retainAutoreleasedReturnValue();
        func_0x000108492f58(ppuVar37,ppuVar17,ppuVar21,param_2,ppuVar23,ppuVar25,1,puVar7);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar25);
        _objc_release(ppuVar24);
        _objc_release(ppuVar23);
        _objc_release(ppuVar22);
        _objc_release(ppuVar21);
        _objc_release(ppuVar18);
        _objc_release(ppuVar16);
        _objc_release(ppuVar15);
        func_0x00010befa120(puVar6);
        _objc_release(ppuVar37);
        _objc_release(lVar36);
        _objc_release(puVar13);
        _objc_release(ppuVar14);
        _objc_release(ppuStack_1f8);
        _objc_release(ppuVar12);
        _objc_release(puVar9);
        _objc_release(ppuVar10);
        _objc_release(ppuVar8);
        _objc_release(puVar7);
        uVar32 = uVar32 + 1;
      } while (uStack_2d0 != uVar32);
      uStack_2d0 = uVar4;
      func_0x00010bf52a60();
    } while (uStack_2d0 != 0);
  }
  _objc_release(uVar4);
  puVar7 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95660();
  _objc_release(puVar7);
  puVar7 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18ba0();
  _objc_release(puVar7);
  uVar4 = param_2;
  func_0x00010c2330a0();
  if ((int)uVar4 != 0) {
    puVar7 = PTR_PTR_1126d9898;
    _objc_opt_new(PTR_PTR_1126d9898);
    puVar9 = PTR_PTR_1126d98a0;
    _objc_alloc(PTR_PTR_1126d98a0);
    func_0x00010c09ef80(param_2);
    func_0x00010c00e360(puVar9);
    func_0x00010c1b9520(puVar7);
    _objc_release(puVar9);
    puVar9 = PTR_PTR_1126d98a0;
    _objc_alloc(PTR_PTR_1126d98a0);
    func_0x00010c09efa0(param_2);
    func_0x00010c00e360(puVar9);
    func_0x00010c1c0e80(puVar7);
    _objc_release(puVar9);
    puVar9 = PTR_PTR_1126c0320;
    _objc_alloc(PTR_PTR_1126c0320);
    func_0x00010c09eac0(param_2);
    func_0x00010c01e4a0(puVar9);
    func_0x00010c161500(puVar7);
    _objc_release(puVar9);
    puVar9 = PTR_PTR_1126c0350;
    _objc_alloc(PTR_PTR_1126c0350);
    func_0x00010c09eb60(param_2);
    func_0x00010c01e4e0(puVar9);
    func_0x00010c1bf820(puVar7);
    _objc_release(puVar9);
    func_0x00010c1bf6c0(puVar35);
    _objc_release(puVar7);
  }
  puVar7 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95660();
  _objc_release(puVar7);
  func_0x00010c1ae920(puVar35);
  func_0x00010c0703c0(param_2);
  func_0x00010c1b0520(puVar35);
  func_0x00010bf604c0(PTR_PTR_1126afec0);
  func_0x00010c215dc0(puVar35);
  uVar11 = param_3;
  func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_110a4ad40);
  uVar26 = uVar11;
  func_0x00010c0d3c80();
  func_0x00010c1e8500(puVar35);
  _objc_release(uVar26);
  puVar7 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18ba0();
  _objc_release(puVar7);
  uVar4 = param_2;
  func_0x00010c0b39c0();
  _objc_retainAutoreleasedReturnValue();
  uVar32 = uVar4;
  func_0x00010bf8be80();
  if ((uVar32 & 1) == 0) {
    uVar32 = param_2;
    func_0x00010c0b39c0();
    _objc_retainAutoreleasedReturnValue();
    uVar33 = uVar32;
    func_0x00010c107cc0();
    iVar34 = (int)uVar33;
    _objc_release(uVar32);
  }
  else {
    iVar34 = 1;
  }
  _objc_release(uVar4);
  uVar4 = param_2;
  func_0x00010c29f3e0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar4 == 0) {
    if (iVar34 == 0) goto LAB_108492710;
    uVar4 = param_2;
    func_0x00010c283180();
    _objc_retainAutoreleasedReturnValue();
    uVar32 = uVar4;
    func_0x00010bf529e0();
    if (uVar32 != 0) goto LAB_108491754;
    uVar32 = param_2;
    func_0x00010bef3aa0();
    _objc_retainAutoreleasedReturnValue();
    uVar33 = uVar32;
    func_0x00010bf529e0();
    _objc_release(uVar32);
    _objc_release(uVar4);
    if (uVar33 == 0) goto LAB_108492710;
  }
  else {
LAB_108491754:
    _objc_release(uVar4);
  }
  puVar7 = PTR_PTR_1126d98a8;
  _objc_opt_new();
  uVar4 = param_2;
  func_0x00010bef3aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar32 = uVar4;
  func_0x00010bf529e0();
  _objc_release(uVar4);
  if (uVar32 != 0) {
    uVar4 = param_2;
    func_0x00010bef3aa0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar32 = uVar4;
    func_0x00010c0d3c80();
    func_0x00010c163cc0(puVar7);
    _objc_release(uVar32);
    _objc_release(uVar4);
  }
  uVar4 = param_2;
  func_0x00010c283180();
  _objc_retainAutoreleasedReturnValue();
  uVar32 = uVar4;
  func_0x00010bf529e0();
  _objc_release(uVar4);
  if (uVar32 != 0) {
    uVar4 = param_2;
    func_0x00010c283180(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar32 = uVar4;
    func_0x000100504554();
    _objc_release(uVar4);
    uVar4 = uVar32;
    func_0x00010c0d3c80(uVar32);
    func_0x00010c21c460(puVar7);
    _objc_release(uVar4);
    _objc_release(uVar32);
  }
  uVar4 = param_2;
  func_0x00010bef4300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar4 != 0) {
    puVar9 = PTR_PTR_1126c0350;
    _objc_alloc(PTR_PTR_1126c0350);
    uVar4 = param_2;
    func_0x00010bef4300(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb66c0();
    func_0x00010c01e4e0(puVar9);
    func_0x00010c19ef20(puVar7);
    _objc_release(puVar9);
    _objc_release(uVar4);
    puVar9 = PTR_PTR_1126c0350;
    _objc_alloc(PTR_PTR_1126c0350);
    uVar4 = param_2;
    func_0x00010bef4300(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb66a0();
    func_0x00010c01e4e0(puVar9);
    func_0x00010c19ef00(puVar7);
    _objc_release(puVar9);
    _objc_release(uVar4);
    puVar9 = PTR_PTR_1126c0350;
    _objc_alloc(PTR_PTR_1126c0350);
    uVar4 = param_2;
    func_0x00010bef4300(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb6600();
    func_0x00010c01e4e0(puVar9);
    func_0x00010c19ee80(puVar7);
    _objc_release(puVar9);
    _objc_release(uVar4);
    puVar9 = PTR_PTR_1126c0350;
    _objc_alloc(PTR_PTR_1126c0350);
    uVar4 = param_2;
    func_0x00010bef4300(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb65c0();
    func_0x00010c01e4e0(puVar9);
    func_0x00010c19ee60(puVar7);
    _objc_release(puVar9);
    _objc_release(uVar4);
    puVar9 = PTR_PTR_1126c0350;
    _objc_alloc(PTR_PTR_1126c0350);
    uVar4 = param_2;
    func_0x00010bef4300(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb6680();
    func_0x00010c01e4e0(puVar9);
    func_0x00010c19eee0(puVar7);
    _objc_release(puVar9);
    _objc_release(uVar4);
    puVar9 = PTR_PTR_1126c0350;
    _objc_alloc(PTR_PTR_1126c0350);
    uVar4 = param_2;
    func_0x00010bef4300(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb6640();
    func_0x00010c01e4e0(puVar9);
    func_0x00010c19eec0(puVar7);
    _objc_release(puVar9);
    _objc_release(uVar4);
  }
  func_0x00010c0eb5e0(param_2);
  func_0x00010c1d5800(puVar7);
  func_0x00010c26f7c0(param_2);
  if (0.0 <= dVar38) {
    puVar9 = PTR_PTR_1126c0350;
    _objc_alloc(PTR_PTR_1126c0350);
    func_0x00010c26f7c0(param_2);
    func_0x00010c01e4e0(puVar9);
    func_0x00010c215000(puVar7);
    _objc_release(puVar9);
  }
  puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  dVar38 = 0.0;
  uVar32 = param_2;
  func_0x00010c29f3e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar32;
  func_0x00010bf52a60();
  lVar31 = lRam0000000000000000;
  while (uVar4 != 0) {
    uVar33 = 0;
    do {
      if (lRam0000000000000000 != lVar31) {
        _objc_enumerationMutation(uVar32);
      }
      lVar36 = *(long *)(uVar33 * 8);
      puVar13 = PTR_PTR_1126d98c8;
      _objc_opt_new(PTR_PTR_1126d98c8);
      func_0x00010c29d460(lVar36);
      FUN_10848cfd8();
      func_0x00010c222c00(puVar13);
      func_0x00010c1603e0(lVar36);
      func_0x00010c209ac0(puVar13);
      puVar27 = PTR_PTR_1126c0350;
      _objc_alloc(PTR_PTR_1126c0350);
      func_0x00010c277020(lVar36);
      func_0x00010c01e4e0(puVar27);
      func_0x00010c215060(puVar13);
      _objc_release(puVar27);
      puVar27 = PTR_PTR_1126c0350;
      _objc_alloc(PTR_PTR_1126c0350);
      func_0x00010c275fc0(lVar36);
      func_0x00010c01e4e0(puVar27);
      func_0x00010c217f40(puVar13);
      _objc_release(puVar27);
      func_0x00010c276820(lVar36);
      if (0.0 <= dVar38) {
        puVar27 = PTR_PTR_1126c0350;
        _objc_alloc(PTR_PTR_1126c0350);
        func_0x00010c276820(lVar36);
        func_0x00010c01e4e0(puVar27);
        func_0x00010c2185c0(puVar13);
        _objc_release(puVar27);
      }
      func_0x00010c275f40(lVar36);
      if (0.0 <= dVar38) {
        puVar27 = PTR_PTR_1126c0350;
        _objc_alloc(PTR_PTR_1126c0350);
        func_0x00010c275f40(lVar36);
        func_0x00010c01e4e0(puVar27);
        func_0x00010c217ec0(puVar13);
        _objc_release(puVar27);
      }
      puVar27 = PTR_PTR_1126c0320;
      _objc_alloc(PTR_PTR_1126c0320);
      func_0x00010c275fa0(lVar36);
      func_0x00010c01e4a0(puVar27);
      func_0x00010c217ee0(puVar13);
      _objc_release(puVar27);
      puVar27 = PTR_PTR_1126c0320;
      _objc_alloc(PTR_PTR_1126c0320);
      func_0x00010c276c60(lVar36);
      func_0x00010c01e4a0(puVar27);
      func_0x00010c218920(puVar13);
      _objc_release(puVar27);
      lVar28 = lVar36;
      func_0x00010c275f00();
      if (-1 < lVar28) {
        puVar27 = PTR_PTR_1126c0320;
        _objc_alloc(PTR_PTR_1126c0320);
        func_0x00010c275f00(lVar36);
        func_0x00010c01e4a0(puVar27);
        func_0x00010c217f60(puVar13);
        _objc_release(puVar27);
      }
      lVar28 = lVar36;
      func_0x00010c276be0();
      if (-1 < lVar28) {
        puVar27 = PTR_PTR_1126c0320;
        _objc_alloc(PTR_PTR_1126c0320);
        func_0x00010c276be0(lVar36);
        func_0x00010c01e4a0(puVar27);
        func_0x00010c218a20(puVar13);
        _objc_release(puVar27);
      }
      puVar27 = PTR_PTR_1126c0320;
      _objc_alloc(PTR_PTR_1126c0320);
      func_0x00010c276d40(lVar36);
      func_0x00010c01e4a0(puVar27);
      func_0x00010c2189e0(puVar13);
      _objc_release(puVar27);
      puVar27 = PTR_PTR_1126c0320;
      _objc_alloc(PTR_PTR_1126c0320);
      func_0x00010c276f60(lVar36);
      func_0x00010c01e4a0(puVar27);
      func_0x00010c218b00(puVar13);
      _objc_release(puVar27);
      puVar27 = PTR_PTR_1126c0320;
      _objc_alloc(PTR_PTR_1126c0320);
      lVar28 = lVar36;
      func_0x00010bf12a60(lVar36);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0304c0(puVar27);
      func_0x00010c16d820(puVar13);
      _objc_release(puVar27);
      _objc_release(lVar28);
      lVar28 = lVar36;
      func_0x00010bf9b8c0(lVar36);
      _objc_retainAutoreleasedReturnValue();
      FUN_1084b7d54();
      func_0x00010c198340(puVar13);
      _objc_release(lVar28);
      puVar27 = PTR_PTR_1126c0308;
      _objc_alloc(PTR_PTR_1126c0308);
      func_0x00010c076180(lVar36);
      func_0x00010bff91e0(puVar27);
      func_0x00010c1b21c0(puVar13);
      _objc_release(puVar27);
      lVar28 = lVar36;
      func_0x00010bf4dd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar28 != 0) {
        puVar27 = PTR_PTR_1126c0320;
        _objc_alloc(PTR_PTR_1126c0320);
        lVar28 = lVar36;
        func_0x00010bf4dd40(lVar36);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c276680();
        func_0x00010c01e4a0(puVar27);
        func_0x00010c218120(puVar13);
        _objc_release(puVar27);
        _objc_release(lVar28);
        puVar27 = PTR_PTR_1126c0350;
        _objc_alloc(PTR_PTR_1126c0350);
        lVar28 = lVar36;
        func_0x00010bf4dd40(lVar36);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0f07e0();
        func_0x00010c01e4e0(puVar27);
        func_0x00010c1823a0(puVar13);
        _objc_release(puVar27);
        _objc_release(lVar28);
        puVar27 = PTR_PTR_1126c0350;
        _objc_alloc(PTR_PTR_1126c0350);
        lVar28 = lVar36;
        func_0x00010bf4dd40(lVar36);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0f08a0();
        func_0x00010c01e4e0(puVar27);
        func_0x00010c1823c0(puVar13);
        _objc_release(puVar27);
        _objc_release(lVar28);
        puVar27 = PTR_PTR_1126c0350;
        _objc_alloc(PTR_PTR_1126c0350);
        lVar28 = lVar36;
        func_0x00010bf4dd40(lVar36);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0f08c0();
        func_0x00010c01e4e0(puVar27);
        func_0x00010c1823e0(puVar13);
        _objc_release(puVar27);
        _objc_release(lVar28);
        puVar27 = PTR_PTR_1126c0350;
        _objc_alloc(PTR_PTR_1126c0350);
        lVar28 = lVar36;
        func_0x00010bf4dd40(lVar36);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0f08e0();
        func_0x00010c01e4e0(puVar27);
        func_0x00010c182400(puVar13);
        _objc_release(puVar27);
        _objc_release(lVar28);
        puVar27 = PTR_PTR_1126c0350;
        _objc_alloc(PTR_PTR_1126c0350);
        lVar28 = lVar36;
        func_0x00010bf4dd40(lVar36);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0cde00();
        func_0x00010c01e4e0(puVar27);
        func_0x00010c182200(puVar13);
        _objc_release(puVar27);
        _objc_release(lVar28);
        puVar27 = PTR_PTR_1126c0350;
        _objc_alloc(PTR_PTR_1126c0350);
        lVar28 = lVar36;
        func_0x00010bf4dd40(lVar36);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0c3180();
        func_0x00010c01e4e0(puVar27);
        func_0x00010c1821c0(puVar13);
        _objc_release(puVar27);
        _objc_release(lVar28);
      }
      lVar28 = lVar36;
      func_0x00010befe240();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar28 != 0) {
        puVar27 = PTR_PTR_1126c0320;
        _objc_alloc(PTR_PTR_1126c0320);
        lVar28 = lVar36;
        func_0x00010befe240(lVar36);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c276680();
        func_0x00010c01e4a0(puVar27);
        func_0x00010c217ea0(puVar13);
        _objc_release(puVar27);
        _objc_release(lVar28);
        puVar27 = PTR_PTR_1126c0350;
        _objc_alloc(PTR_PTR_1126c0350);
        lVar28 = lVar36;
        func_0x00010befe240(lVar36);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0f07e0();
        func_0x00010c01e4e0(puVar27);
        func_0x00010c1660e0(puVar13);
        _objc_release(puVar27);
        _objc_release(lVar28);
        puVar27 = PTR_PTR_1126c0350;
        _objc_alloc(PTR_PTR_1126c0350);
        lVar28 = lVar36;
        func_0x00010befe240(lVar36);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0f08a0();
        func_0x00010c01e4e0(puVar27);
        func_0x00010c166100(puVar13);
        _objc_release(puVar27);
        _objc_release(lVar28);
        puVar27 = PTR_PTR_1126c0350;
        _objc_alloc(PTR_PTR_1126c0350);
        lVar28 = lVar36;
        func_0x00010befe240(lVar36);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0f08c0();
        func_0x00010c01e4e0(puVar27);
        func_0x00010c166120(puVar13);
        _objc_release(puVar27);
        _objc_release(lVar28);
        puVar27 = PTR_PTR_1126c0350;
        _objc_alloc(PTR_PTR_1126c0350);
        lVar28 = lVar36;
        func_0x00010befe240(lVar36);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0f08e0();
        func_0x00010c01e4e0(puVar27);
        func_0x00010c166140(puVar13);
        _objc_release(puVar27);
        _objc_release(lVar28);
        puVar27 = PTR_PTR_1126c0350;
        _objc_alloc(PTR_PTR_1126c0350);
        lVar28 = lVar36;
        func_0x00010befe240(lVar36);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0cde00();
        func_0x00010c01e4e0(puVar27);
        func_0x00010c1660c0(puVar13);
        _objc_release(puVar27);
        _objc_release(lVar28);
        puVar27 = PTR_PTR_1126c0350;
        _objc_alloc(PTR_PTR_1126c0350);
        lVar28 = lVar36;
        func_0x00010befe240(lVar36);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0c3180();
        func_0x00010c01e4e0(puVar27);
        func_0x00010c1660a0(puVar13);
        _objc_release(puVar27);
        _objc_release(lVar28);
      }
      lVar28 = lVar36;
      func_0x00010c241ce0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar28 != 0) {
        lVar28 = lVar36;
        func_0x00010c241ce0(lVar36);
        _objc_retainAutoreleasedReturnValue();
        lVar29 = lVar28;
        func_0x000100504554();
        _objc_release(lVar28);
        lVar28 = lVar29;
        func_0x00010c0d3c80(lVar29);
        func_0x00010c204cc0(puVar13);
        _objc_release(lVar28);
        _objc_release(lVar29);
      }
      lVar28 = lVar36;
      func_0x00010c25a0e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar28 != 0) {
        lVar28 = lVar36;
        func_0x00010c25a0e0(lVar36);
        _objc_retainAutoreleasedReturnValue();
        lVar29 = lVar28;
        func_0x000100504554();
        _objc_release(lVar28);
        lVar28 = lVar29;
        func_0x00010c0d3c80(lVar29);
        func_0x00010c20d440(puVar13);
        _objc_release(lVar28);
        _objc_release(lVar29);
      }
      lVar28 = lVar36;
      func_0x00010bf49b80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar28 != 0) {
        lVar28 = lVar36;
        func_0x00010bf49b80(lVar36);
        _objc_retainAutoreleasedReturnValue();
        lVar29 = lVar28;
        func_0x000100504554();
        _objc_release(lVar28);
        lVar28 = lVar29;
        func_0x00010c0d3c80(lVar29);
        func_0x00010c1811e0(puVar13);
        _objc_release(lVar28);
        _objc_release(lVar29);
      }
      lVar28 = lVar36;
      func_0x00010c15fca0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar28 != 0) {
        puVar27 = PTR_PTR_1126d98e8;
        _objc_opt_new(PTR_PTR_1126d98e8);
        puVar30 = PTR_PTR_1126c0350;
        _objc_alloc(PTR_PTR_1126c0350);
        lVar28 = lVar36;
        func_0x00010c15fca0(lVar36);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c276240();
        func_0x00010c01e4e0(puVar30);
        func_0x00010c218140(puVar27);
        _objc_release(puVar30);
        _objc_release(lVar28);
        puVar30 = PTR_PTR_1126c0350;
        _objc_alloc(PTR_PTR_1126c0350);
        lVar28 = lVar36;
        func_0x00010c15fca0(lVar36);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c275f60();
        func_0x00010c01e4e0(puVar30);
        func_0x00010c217f00(puVar27);
        _objc_release(puVar30);
        _objc_release(lVar28);
        puVar30 = PTR_PTR_1126c0350;
        _objc_alloc(PTR_PTR_1126c0350);
        lVar28 = lVar36;
        func_0x00010c15fca0(lVar36);
        _objc_retainAutoreleasedReturnValue();
        lVar29 = lVar28;
        func_0x00010c276260();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0304c0(puVar30);
        func_0x00010c218160(puVar27);
        _objc_release(puVar30);
        _objc_release(lVar29);
        _objc_release(lVar28);
        puVar30 = PTR_PTR_1126c0350;
        _objc_alloc(PTR_PTR_1126c0350);
        lVar28 = lVar36;
        func_0x00010c15fca0(lVar36);
        _objc_retainAutoreleasedReturnValue();
        lVar29 = lVar28;
        func_0x00010c275f80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0304c0(puVar30);
        func_0x00010c217f20(puVar27);
        _objc_release(puVar30);
        _objc_release(lVar29);
        _objc_release(lVar28);
        func_0x00010c1fd900(puVar13);
        _objc_release(puVar27);
      }
      lVar28 = lVar36;
      func_0x00010c29eaa0();
      _objc_retainAutoreleasedReturnValue();
      lVar29 = lVar28;
      func_0x00010bf529e0();
      _objc_release(lVar28);
      if (lVar29 != 0) {
        func_0x00010c29eaa0(lVar36);
        _objc_retainAutoreleasedReturnValue();
        lVar28 = lVar36;
        func_0x000100504554();
        _objc_release(lVar36);
        lVar36 = lVar28;
        func_0x00010c0d3c80(lVar28);
        func_0x00010c222e80(puVar13);
        _objc_release(lVar36);
        _objc_release(lVar28);
      }
      func_0x00010befa120(puVar9);
      _objc_release(puVar13);
      uVar33 = uVar33 + 1;
    } while (uVar4 != uVar33);
    uVar4 = uVar32;
    func_0x00010bf52a60();
  }
  _objc_release(uVar32);
  func_0x00010c222b40(puVar7);
  func_0x00010c164040(puVar35);
  _objc_release(puVar9);
  _objc_release(puVar7);
LAB_108492710:
  puVar7 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95660();
  _objc_release(puVar7);
  puVar7 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95660();
  _objc_release(puVar7);
  _objc_retain(puVar35);
  _objc_release(uVar11);
  _objc_release(puVar6);
  _objc_release(lVar2);
  _objc_release(uVar3);
  _objc_release(lVar5);
  _objc_release(puVar1);
  _objc_release(puVar35);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return puVar35;
  }
  ___stack_chk_fail();
  _objc_retain();
  lVar31 = param_1;
  func_0x00010c08fa60();
  if (lVar31 == 0) {
    puVar35 = (undefined *)0x0;
  }
  else {
    lVar31 = param_1;
    func_0x00010bf44740();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar31;
    func_0x00010bf529e0();
    if (lVar2 == 0) {
      puVar35 = (undefined *)0x0;
    }
    else {
      puVar35 = PTR_PTR_1126ae740;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      func_0x00010bf97e80(lVar31);
      _objc_release(puVar35);
    }
    _objc_release(lVar31);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar35);
  return puVar35;
}



/* Entry: 108492894; end: 108492977;  */

void FUN_108492894(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    lVar1 = param_1;
    func_0x00010bf44740(param_1,param_2,&PTR____CFConstantStringClassReference_110db3ed8);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf529e0();
    if (lVar2 == 0) {
      puVar3 = (undefined *)0x0;
    }
    else {
      puVar3 = PTR_PTR_1126ae740;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_50 = 0xc2000000;
      pcStack_48 = FUN_108494800;
      puStack_40 = &UNK_1108709c0;
      _objc_retain();
      puStack_38 = puVar3;
      func_0x00010bf97e80(lVar1,param_2,&puStack_58);
      _objc_release(puStack_38);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108492978; end: 1084929a7;  */

void FUN_108492978(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c067fc0(param_2);
  FUN_10848f45c();
                    /* WARNING: Could not recover jumptable at 0x00010befc810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_addValue__11259cba8,param_2);
  return;
}



/* Entry: 1084929a8; end: 108493b73;  */

void FUN_1084929a8(undefined8 *param_1,undefined **param_2,undefined8 param_3,long param_4,
                  undefined *param_5,long param_6,int param_7,long param_8)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  undefined **ppuVar15;
  long lVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined8 *puVar19;
  undefined *puVar20;
  int iVar21;
  long lVar22;
  long lStack_110;
  undefined *puStack_108;
  
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = (undefined8 *)PTR_PTR_1126b8c98;
  func_0x00010befe5a0();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010c2a4be0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d0a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar18);
  _objc_release(puVar1);
  puVar1 = (undefined8 *)PTR_PTR_1126b8c98;
  func_0x00010befe5c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010c2a4be0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  ppuVar15 = ppuVar3;
  func_0x00010c25d0a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar3);
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c08fa60();
  if (puVar1 == (undefined8 *)0x0) {
    puVar18 = (undefined *)0x0;
  }
  else {
    ppuVar15 = &PTR____CFConstantStringClassReference_110db3ed8;
    puVar1 = puVar2;
    func_0x00010bf44740();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf44740();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar1;
    func_0x00010bf529e0();
    puVar6 = puVar5;
    func_0x00010bf529e0();
    puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
    if (puVar19 == puVar6) {
      puVar18 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      puVar19 = puVar1;
      func_0x00010bf529e0();
      if (puVar19 != (undefined8 *)0x0) {
        puVar19 = (undefined8 *)0x0;
        do {
          ppuVar3 = (undefined **)PTR_PTR_1126d9918;
          _objc_opt_new();
          puVar6 = puVar1;
          func_0x00010c0dfd40(puVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c17df00(ppuVar3);
          _objc_release(puVar6);
          puVar6 = puVar5;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c17e080(ppuVar3);
          _objc_release(puVar6);
          ppuVar15 = ppuVar3;
          func_0x00010befa120(puVar18);
          _objc_release(ppuVar3);
          puVar19 = (undefined8 *)((long)puVar19 + 1);
          puVar6 = puVar1;
          func_0x00010bf529e0();
        } while (puVar19 < puVar6);
      }
    }
    else {
      puVar18 = (undefined *)0x0;
      if (param_1 != (undefined8 *)0x0) {
        puVar18 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080();
        _objc_retainAutoreleasedReturnValue();
        ppuVar15 = &PTR____CFConstantStringClassReference_110eddfb8;
        param_4 = 0;
        param_5 = puVar18;
        func_0x00010bf99240();
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        *param_1 = puVar7;
        _objc_release(puVar18);
        puVar18 = (undefined *)0x0;
      }
    }
    _objc_release(puVar5);
    _objc_release(puVar1);
  }
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = PTR_PTR_1126b8c98;
  func_0x00010befe5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126b8c98;
  func_0x00010befe600();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar7;
  func_0x00010c08fa60();
  if (puVar18 == (undefined *)0x0) {
    puVar18 = (undefined *)0x0;
  }
  else {
    ppuVar15 = &PTR____CFConstantStringClassReference_110db3ed8;
    puVar17 = puVar7;
    func_0x00010bf44740();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010bf44740();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar17;
    func_0x00010bf529e0();
    puVar10 = puVar9;
    func_0x00010bf529e0();
    puVar20 = PTR__OBJC_CLASS___NSError_1126ae858;
    if (puVar18 == puVar10) {
      puVar18 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      puVar20 = puVar17;
      func_0x00010bf529e0();
      if (puVar20 != (undefined *)0x0) {
        puVar20 = (undefined *)0x0;
        do {
          ppuVar3 = (undefined **)PTR_PTR_1126d9920;
          _objc_opt_new();
          puVar10 = puVar17;
          func_0x00010c0dfd40(puVar17);
          _objc_retainAutoreleasedReturnValue();
          puVar11 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
          func_0x00010c2a4be0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
          _objc_retainAutoreleasedReturnValue();
          puVar12 = puVar10;
          func_0x00010c25d0a0(puVar10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1ba3e0(ppuVar3);
          _objc_release(puVar12);
          _objc_release(puVar11);
          _objc_release(puVar10);
          puVar10 = puVar9;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          puVar11 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
          func_0x00010c2a4be0();
          _objc_retainAutoreleasedReturnValue();
          puVar12 = puVar10;
          func_0x00010c25d0a0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1c8f60(ppuVar3);
          _objc_release(puVar12);
          _objc_release(puVar11);
          _objc_release(puVar10);
          ppuVar15 = ppuVar3;
          func_0x00010befa120(puVar18);
          _objc_release(ppuVar3);
          puVar20 = puVar20 + 1;
          puVar10 = puVar17;
          func_0x00010bf529e0();
          puStack_108 = puVar8;
        } while (puVar20 < puVar10);
      }
    }
    else {
      puVar18 = (undefined *)0x0;
      if (puVar2 != (undefined8 *)0x0) {
        puVar18 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080();
        _objc_retainAutoreleasedReturnValue();
        ppuVar15 = &PTR____CFConstantStringClassReference_110eddfb8;
        param_4 = 0;
        param_5 = puVar18;
        func_0x00010bf99240();
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        *puVar2 = puVar20;
        _objc_release(puVar18);
        puVar18 = (undefined *)0x0;
      }
    }
    _objc_release(puVar9);
    _objc_release(puVar17);
  }
  _objc_release(puVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar3 = param_2;
  _objc_retain();
  _objc_retain(ppuVar15);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(lStack_110);
  _objc_retain(puStack_108);
  puVar18 = PTR_PTR_1126d9900;
  _objc_opt_new(PTR_PTR_1126d9900);
  iVar21 = (int)param_2;
  if (iVar21 != -0x4524111) {
    func_0x00010c1ae9c0(puVar18);
  }
  if (ppuVar15 != (undefined **)0x0) {
    func_0x00010c1ae8a0(puVar18);
  }
  if (param_4 != 0) {
    lVar13 = param_4;
    func_0x00010bef28c0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126d9928;
    _objc_opt_new(PTR_PTR_1126d9928);
    lVar14 = lVar13;
    func_0x00010c281dc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar14 != 0) {
      puVar20 = PTR_PTR_1126d9930;
      _objc_opt_new(PTR_PTR_1126d9930);
      func_0x00010c1a1860(puVar8);
      _objc_release(puVar20);
      puVar20 = PTR_PTR_1126c0320;
      _objc_opt_new(PTR_PTR_1126c0320);
      puVar17 = puVar8;
      func_0x00010bfbc1a0(puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1cf6e0();
      _objc_release(puVar17);
      _objc_release(puVar20);
      lVar14 = lVar13;
      func_0x00010c281dc0(lVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067fc0();
      puVar20 = puVar8;
      func_0x00010bfbc1a0(puVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar17 = puVar20;
      func_0x00010c0de8e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c220160();
      _objc_release(puVar17);
      _objc_release(puVar20);
      _objc_release(lVar14);
    }
    func_0x00010c17cbe0(puVar18);
    _objc_release(puVar8);
    _objc_release(lVar13);
    lVar13 = param_4;
    func_0x00010c0b39c0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c107cc0();
    func_0x00010c1b3780(puVar18);
    _objc_release(lVar13);
    lVar13 = param_4;
    func_0x00010c29d360(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067fc0();
    FUN_10848cfd8();
    func_0x00010c222c00(puVar18);
    _objc_release(lVar13);
    param_2 = (undefined **)((ulong)param_2 & 0xffffffff);
  }
  puVar8 = param_5;
  func_0x00010c08fa60();
  if (puVar8 != (undefined *)0x0) {
    func_0x00010c189ee0(puVar18);
  }
  if (param_7 != -0x4524111) {
    func_0x00010c1ecf80(puVar18);
  }
  if (param_8 != 0) {
    func_0x00010c19a9c0(puVar18);
  }
  if (((int)param_2 == 9) && (lStack_110 != 0)) {
    func_0x00010c2590e0(lStack_110);
    func_0x00010c2013e0(puVar18);
  }
  func_0x00010c1d00e0(puVar18);
  func_0x00010bfce2a0(puStack_108);
  func_0x00010c1cfa20(puVar18);
  puVar8 = puVar7;
  func_0x00010c26a3a0();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar8;
  func_0x00010c06a400();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  _objc_retain(param_6);
  if (puVar20 == (undefined *)0x0) {
    lVar13 = param_6;
    func_0x00010bf529e0();
    if (lVar13 != 0) {
      puVar17 = PTR_PTR_1126d9938;
      _objc_alloc_init(PTR_PTR_1126d9938);
      goto LAB_10849331c;
    }
    puVar17 = (undefined *)0x0;
  }
  else {
    puVar17 = PTR_PTR_1126d9938;
    _objc_alloc_init(PTR_PTR_1126d9938);
    func_0x00010bf89560(puVar20);
    func_0x00010c1915e0(puVar17);
    func_0x00010bf5ac80();
    func_0x00010c1857e0(puVar17);
    func_0x00010bf3fda0();
    func_0x00010c17e580(puVar17);
LAB_10849331c:
    lVar13 = param_6;
    func_0x00010bf529e0();
    puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    if (lVar13 != 0) {
      func_0x00010bf529e0(param_6);
      func_0x00010bf0a0e0(puVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c18a0c0(puVar17);
      _objc_release(puVar9);
      _objc_retain(param_6);
      lVar13 = param_6;
      func_0x00010bf52a60();
      lVar14 = lRam0000000000000000;
      while (lVar13 != 0) {
        lVar22 = 0;
        do {
          if (lRam0000000000000000 != lVar14) {
            _objc_enumerationMutation(param_6);
          }
          puVar9 = puVar17;
          func_0x00010bf66380(puVar17);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120();
          _objc_release(puVar9);
          lVar22 = lVar22 + 1;
        } while (lVar13 != lVar22);
        lVar13 = param_6;
        func_0x00010bf52a60();
      }
      _objc_release(param_6);
    }
  }
  _objc_release(param_6);
  _objc_release(puVar20);
  func_0x00010c1ae900(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar20);
  _objc_release(puVar8);
  if (puVar7 != (undefined *)0x0) {
    puVar8 = puVar7;
    func_0x00010c26a3a0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c06a440();
    FUN_10848cc70();
    func_0x00010c1ae940(puVar18);
    _objc_release(puVar8);
    puVar20 = puVar7;
    func_0x00010c26a3a0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar20;
    func_0x00010bf4bf60();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR_PTR_1126ae740;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    func_0x00010bf97e80(puVar17);
    puVar10 = puVar9;
    func_0x00010bf529e0();
    puVar8 = (undefined *)0x0;
    if (puVar10 != (undefined *)0x0) {
      puVar8 = puVar9;
    }
    _objc_retain(puVar8);
    _objc_release(puVar9);
    _objc_release(puVar9);
    _objc_release(puVar17);
    _objc_release(puVar20);
    if (puVar8 != (undefined *)0x0) {
      func_0x00010c181ca0(puVar18);
    }
    if (iVar21 == 1) {
      puVar17 = puVar7;
      func_0x00010c26a3a0(puVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar20 = PTR_PTR_1126d9890;
      _objc_retain();
      _objc_opt_new(puVar20);
      puVar9 = puVar17;
      func_0x00010c06a3a0(puVar17);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1ae860(puVar20);
      _objc_release(puVar9);
      puVar9 = puVar17;
      func_0x00010bf35520(puVar17);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c17aae0(puVar20);
      _objc_release(puVar9);
      puVar9 = puVar17;
      func_0x00010bf35680(puVar17);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c17ab60(puVar20);
      _objc_release(puVar9);
      puVar9 = puVar17;
      func_0x00010c116320(puVar17);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e3de0(puVar20);
      _objc_release(puVar9);
      puVar9 = puVar17;
      func_0x00010c11af80(puVar17);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e5aa0(puVar20);
      _objc_release(puVar9);
      func_0x00010c11b1e0(puVar17);
      func_0x00010c1e5b60(puVar20);
      puVar9 = puVar17;
      func_0x00010bf8c980(puVar17);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067fc0();
      func_0x00010c193c40(puVar20);
      _objc_release(puVar9);
      puVar9 = puVar17;
      func_0x00010c1057c0(puVar17);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar17);
      func_0x00010c1df700(puVar20);
      _objc_release(puVar9);
      func_0x00010c18eec0(puVar18);
      _objc_release(puVar20);
      _objc_release(puVar17);
    }
    puVar20 = PTR_PTR_1126c0320;
    _objc_opt_new(PTR_PTR_1126c0320);
    puVar17 = puVar7;
    func_0x00010c26a3a0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef3ea0();
    func_0x00010c220160(puVar20);
    _objc_release(puVar17);
    func_0x00010c1deec0(puVar18);
    puVar17 = puVar7;
    func_0x00010c26a3a0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0821a0();
    func_0x00010c1b5540(puVar18);
    _objc_release(puVar17);
    puVar17 = puVar7;
    func_0x00010bef2c80(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010c1ce9c0(puVar18);
    _objc_release(puVar17);
    lVar13 = param_4;
    func_0x00010c11bf40();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar13;
    func_0x00010bf529e0();
    _objc_release(lVar13);
    if (lVar14 != 0) {
      lVar13 = param_4;
      func_0x00010c11bf40(param_4);
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = &PTR___NSConcreteGlobalBlock_110a4aee0;
      lVar14 = lVar13;
      func_0x000100504554();
      _objc_release(lVar13);
      lVar13 = lVar14;
      func_0x00010c0d3c80(lVar14);
      func_0x00010c1e5e40(puVar18);
      _objc_release(lVar13);
      _objc_release(lVar14);
    }
    puVar17 = PTR_PTR_1126d9908;
    _objc_opt_new(PTR_PTR_1126d9908);
    lVar13 = param_4;
    func_0x00010bf21060();
    if (lVar13 == 3) {
      func_0x00010c1c7c40(puVar17);
LAB_108493870:
      func_0x00010c173b60(puVar18);
    }
    else {
      if (lVar13 == 2) {
        func_0x00010c1c7dc0(puVar17);
        goto LAB_108493870;
      }
      if (lVar13 == 1) {
        func_0x00010c1c7be0(puVar17);
        goto LAB_108493870;
      }
    }
    lVar13 = param_4;
    func_0x00010bf90d40();
    if ((int)lVar13 != 0) {
      puVar9 = puVar7;
      func_0x00010c26a3a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      puVar10 = PTR_PTR_1126d98f8;
      _objc_opt_new(PTR_PTR_1126d98f8);
      func_0x00010c0cf580();
      func_0x00010c0cf560(puVar9);
      func_0x00010c189f00(puVar10);
      func_0x00010c0cf5a0(puVar9);
      func_0x00010c19e980(puVar10);
      func_0x00010c189f80(puVar10);
      _objc_release(puVar9);
      _objc_release(puVar9);
      puVar9 = puVar10;
      func_0x00010bf63640(puVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c89c0(puVar18);
      _objc_release(puVar9);
      _objc_release(puVar10);
    }
    _objc_release(puVar17);
    _objc_release(puVar20);
    _objc_release(puVar8);
  }
  lVar13 = param_4;
  func_0x00010c0ddd40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar13 == 0) {
    lVar13 = param_4;
    func_0x00010c0de520();
    _objc_retainAutoreleasedReturnValue();
    if (lVar13 != 0) goto LAB_1084939bc;
    lVar13 = param_4;
    func_0x00010c0de8c0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar13 != 0) goto LAB_1084939bc;
    lVar13 = param_4;
    func_0x00010bf36560();
    if (lVar13 != 0) goto LAB_1084939c0;
  }
  else {
LAB_1084939bc:
    _objc_release();
LAB_1084939c0:
    puVar8 = PTR_PTR_1126d9910;
    _objc_opt_new(PTR_PTR_1126d9910);
    lVar13 = param_4;
    func_0x00010c0ddd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar13 != 0) {
      lVar13 = param_4;
      func_0x00010c0ddd40(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c282760();
      func_0x00010c1ceb20(puVar8);
      _objc_release(lVar13);
    }
    lVar13 = param_4;
    func_0x00010c0de520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar13 != 0) {
      lVar13 = param_4;
      func_0x00010c0de520(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c282760();
      func_0x00010c1cf220(puVar8);
      _objc_release(lVar13);
    }
    lVar13 = param_4;
    func_0x00010c0de8c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar13 != 0) {
      lVar13 = param_4;
      func_0x00010c0de8c0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c282760();
      func_0x00010c1cf6c0(puVar8);
      _objc_release(lVar13);
    }
    lVar13 = param_4;
    func_0x00010bf36560();
    if (lVar13 != 0) {
      func_0x00010bf36560();
      func_0x00010c17b320(puVar8);
    }
    func_0x00010c17b4e0(puVar18);
    _objc_release(puVar8);
  }
  _objc_release(puStack_108);
  _objc_release(lStack_110);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(ppuVar15);
  _objc_release(puVar7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar16) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c29e0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(ppuVar3,PTR_s_viewReceipt_112685260);
    return;
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar18);
  return;
}



/* Entry: 108493b74; end: 108493b7b;  */

void FUN_108493b74(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c29e0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_viewReceipt_112685260);
  return;
}



/* Entry: 108493b7c; end: 1084941bb;  */

void FUN_108493b7c(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126d98b0;
  _objc_opt_new(PTR_PTR_1126d98b0);
  lVar2 = param_2;
  func_0x00010c23f9e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x000100504554();
  _objc_release(lVar2);
  lVar2 = lVar3;
  func_0x00010c0d3c80(lVar3);
  func_0x00010c203ca0(puVar1);
  _objc_release(lVar2);
  lVar2 = param_2;
  func_0x00010bf1d120(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25b720();
  FUN_10848d1c4();
  func_0x00010c171bc0(puVar1);
  _objc_release(lVar2);
  lVar2 = param_2;
  func_0x00010bf1d120(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c25b7c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c171be0(puVar1);
  _objc_release(lVar4);
  _objc_release(lVar2);
  lVar2 = param_2;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_2;
    func_0x00010c259cc0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20d1a0(puVar1);
    _objc_release(lVar2);
  }
  _objc_release(lVar3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1084941bc; end: 108494373;  */

void FUN_1084941bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126d98d8;
  _objc_retain(param_2);
  _objc_opt_new(puVar1);
  uVar2 = param_2;
  func_0x00010c259cc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20d1a0(puVar1);
  _objc_release(uVar2);
  func_0x00010c25b720(param_2);
  FUN_10848d1c4();
  func_0x00010c20ddc0(puVar1);
  uVar2 = param_2;
  func_0x00010bf9b8c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_1084b7d54();
  func_0x00010c20d040(puVar1);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126c0350;
  _objc_alloc(PTR_PTR_1126c0350);
  func_0x00010c25b9c0(param_2);
  func_0x00010c01e4e0(puVar3);
  func_0x00010c20e020(puVar1);
  _objc_release(puVar3);
  func_0x00010c251140(param_2);
  func_0x00010c209ac0(puVar1);
  puVar3 = PTR_PTR_1126c0308;
  _objc_alloc(PTR_PTR_1126c0308);
  func_0x00010c06b7e0(param_2);
  func_0x00010bff91e0(puVar3);
  func_0x00010c1af0a0(puVar1);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126c0350;
  _objc_alloc(PTR_PTR_1126c0350);
  func_0x00010bf4d940(param_2);
  func_0x00010c01e4e0(puVar3);
  func_0x00010c1829c0(puVar1);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126c0350;
  _objc_alloc(PTR_PTR_1126c0350);
  func_0x00010bef5ba0(param_2);
  _objc_release(param_2);
  func_0x00010c01e4e0(puVar3);
  func_0x00010c164ba0(puVar1);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108494374; end: 1084946b3;  */

void FUN_108494374(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126d98e0;
  _objc_retain(param_2);
  _objc_opt_new(puVar1);
  uVar2 = param_2;
  func_0x00010c06a4a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10848c894();
  func_0x00010c1ae9c0(puVar1);
  _objc_release(uVar2);
  func_0x00010c06a440(param_2);
  FUN_10848cc70();
  func_0x00010c1ae940(puVar1);
  puVar3 = PTR_PTR_1126c0300;
  _objc_alloc(PTR_PTR_1126c0300);
  func_0x00010bf4d900(param_2);
  func_0x00010c0138c0(puVar3);
  func_0x00010c1829c0(puVar1);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126c0300;
  _objc_alloc(PTR_PTR_1126c0300);
  func_0x00010bf4d920(param_2);
  func_0x00010c0138c0(puVar3);
  func_0x00010c1829e0(puVar1);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126c0300;
  _objc_alloc(PTR_PTR_1126c0300);
  func_0x00010bf4bea0(param_2);
  func_0x00010c0138c0(puVar3);
  func_0x00010c181c40(puVar1);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126c0300;
  _objc_alloc(PTR_PTR_1126c0300);
  func_0x00010bf4bec0(param_2);
  func_0x00010c0138c0(puVar3);
  func_0x00010c181c60(puVar1);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126c0350;
  _objc_alloc(PTR_PTR_1126c0350);
  func_0x00010bf4d7e0(param_2);
  func_0x00010c01e4e0(puVar3);
  func_0x00010c182960(puVar1);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126c0350;
  _objc_alloc(PTR_PTR_1126c0350);
  func_0x00010c276220(param_2);
  func_0x00010c01e4e0(puVar3);
  func_0x00010c218120(puVar1);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126c0300;
  _objc_alloc(PTR_PTR_1126c0300);
  func_0x00010bef5b00(param_2);
  func_0x00010c0138c0(puVar3);
  func_0x00010c164ba0(puVar1);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126c0300;
  _objc_alloc(PTR_PTR_1126c0300);
  func_0x00010bef5b20(param_2);
  func_0x00010c0138c0(puVar3);
  func_0x00010c164bc0(puVar1);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126c0300;
  _objc_alloc(PTR_PTR_1126c0300);
  func_0x00010bef20c0(param_2);
  func_0x00010c0138c0(puVar3);
  func_0x00010c1631c0(puVar1);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126c0300;
  _objc_alloc(PTR_PTR_1126c0300);
  func_0x00010bef20e0(param_2);
  func_0x00010c0138c0(puVar3);
  func_0x00010c1631e0(puVar1);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126c0350;
  _objc_alloc(PTR_PTR_1126c0350);
  func_0x00010bef5820(param_2);
  func_0x00010c01e4e0(puVar3);
  func_0x00010c164a80(puVar1);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126c0350;
  _objc_alloc(PTR_PTR_1126c0350);
  func_0x00010c276000(param_2);
  func_0x00010c01e4e0(puVar3);
  func_0x00010c217f80(puVar1);
  _objc_release(puVar3);
  func_0x00010c251140(param_2);
  _objc_release(param_2);
  func_0x00010c209ac0(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1084946b4; end: 1084947f7;  */

void FUN_1084946b4(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d98f0;
  _objc_opt_new(PTR_PTR_1126d98f0);
  uVar2 = param_3;
  func_0x00010bef2900(param_3);
  _objc_retainAutoreleasedReturnValue();
  FUN_1084b7d54();
  func_0x00010c163500(puVar1);
  _objc_release(uVar2);
  func_0x00010bef34e0(param_3);
  if (0.0 <= param_1) {
    puVar3 = PTR_PTR_1126c0320;
    _objc_alloc(PTR_PTR_1126c0320);
    func_0x00010bef34e0(param_3);
    func_0x00010c01e4a0(puVar3);
    func_0x00010c163a60(puVar1);
    _objc_release(puVar3);
  }
  func_0x00010bef6320(param_3);
  if (0.0 <= param_1) {
    puVar3 = PTR_PTR_1126c0320;
    _objc_alloc(PTR_PTR_1126c0320);
    func_0x00010bef6320(param_3);
    func_0x00010c01e4a0(puVar3);
    func_0x00010c164ec0(puVar1);
    _objc_release(puVar3);
  }
  puVar3 = PTR_PTR_1126c0308;
  _objc_alloc(PTR_PTR_1126c0308);
  func_0x00010bef5860(param_3);
  func_0x00010bff91e0(puVar3);
  func_0x00010c164aa0(puVar1);
  _objc_release(puVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1084947f8; end: 1084947ff;  */

void FUN_1084947f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSUUID_1126b0270;
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_alloc();
  func_0x00010c057ea0();
  _objc_release(param_2);
  if (puVar1 == (undefined *)0x0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    func_0x00010bfcb980(puVar1);
    puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf64a00();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar2) {
    ___stack_chk_fail();
    _objc_retain();
    if ((puVar1 == (undefined *)0x0) ||
       (puVar3 = puVar1, func_0x00010c08fa60(), puVar3 != (undefined *)0x10)) {
      puVar3 = (undefined *)0x0;
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSUUID_1126b0270;
      _objc_alloc(PTR__OBJC_CLASS___NSUUID_1126b0270);
      _objc_retainAutorelease(puVar1);
      func_0x00010bf25f00();
      func_0x00010c057e80(puVar3);
    }
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108494800; end: 10849489f;  */

void FUN_108494800(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b8ca0;
  func_0x00010bef6100(PTR_PTR_1126b8ca0,param_2,param_2);
  if (puVar1 == (undefined *)0x17) {
    return;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  FUN_10848f45c();
                    /* WARNING: Could not recover jumptable at 0x00010befc810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_addValue__11259cba8,puVar1);
  return;
}



/* Entry: 1084948a0; end: 108494cab;  */

void FUN_1084948a0(undefined **param_1,undefined **param_2,ulong param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  
  _objc_retain();
  _objc_retain(param_2);
  ppuVar1 = param_2;
  func_0x00010bfb74a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010c08fa60();
  _objc_release(ppuVar1);
  if (ppuVar2 == (undefined **)0x0) {
    ppuVar1 = param_1;
    func_0x00010bf90d40();
    if (((ulong)ppuVar1 & 1) == 0) {
      ppuVar1 = param_1;
      func_0x00010c1194c0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar2 = param_2;
      func_0x00010c235640();
      ppuVar3 = ppuVar1;
      if ((int)ppuVar2 != 0) {
        ppuVar3 = param_2;
        func_0x00010bf6a4a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar1);
      }
      ppuVar1 = ppuVar3;
      func_0x00010c08fa60();
      ppuVar2 = ppuVar3;
      if (ppuVar1 == (undefined **)0x0) {
        ppuVar2 = param_2;
        if ((param_3 & 1) == 0) {
          func_0x00010bf6a040(param_2);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          func_0x00010bf6a020();
          _objc_retainAutoreleasedReturnValue();
        }
        _objc_release(ppuVar3);
      }
      ppuVar3 = param_1;
      func_0x00010c289c80();
      ppuVar1 = ppuVar2;
      if ((int)ppuVar3 == 0) {
        _objc_retain(ppuVar2);
      }
      else {
        ppuVar3 = param_1;
        func_0x00010c06a360();
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = ppuVar3;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        ppuVar5 = ppuVar4;
        func_0x00010c26a3a0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar6 = ppuVar5;
        func_0x00010c06a4a0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar7 = param_1;
        func_0x00010c06a360(param_1);
        _objc_retainAutoreleasedReturnValue();
        ppuVar8 = ppuVar7;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        ppuVar9 = ppuVar8;
        func_0x00010c26a3a0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar10 = ppuVar9;
        func_0x00010c06a440();
        FUN_10848cffc(ppuVar2,ppuVar6,ppuVar10,0);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar9);
        _objc_release(ppuVar8);
        _objc_release(ppuVar7);
        _objc_release(ppuVar6);
        _objc_release(ppuVar5);
        _objc_release(ppuVar4);
        _objc_release(ppuVar3);
      }
      _objc_release(ppuVar2);
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110ede018;
    }
  }
  else {
    ppuVar1 = param_2;
    func_0x00010bfb74a0(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 108494cac; end: 108494e17;  */

bool FUN_108494cac(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain();
  lVar2 = param_1;
  func_0x00010c06a360();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  _objc_release(lVar2);
  if (lVar3 == 0) {
    bVar1 = false;
  }
  else {
    lVar2 = param_1;
    func_0x00010c06a360(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = lVar3;
    func_0x00010bef2c80(lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010bf529e0();
    bVar1 = lVar4 != 0;
    _objc_release(lVar2);
    _objc_release(lVar3);
  }
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 108494e18; end: 108494ed7; +[SCAdProtoLensImpressionDataBuilder protoAttachmentTypeFromString:] */

undefined4 FUN_108494e18(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined4 uVar2;
  
  _objc_retain(param_3);
  if ((param_3 == 0) ||
     (uVar1 = param_3,
     func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110ede038),
     (uVar1 & 1) != 0)) {
    uVar2 = 1;
  }
  else {
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e45458);
    if ((uVar1 & 1) == 0) {
      uVar1 = param_3;
      func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e99c78);
      if ((uVar1 & 1) == 0) {
        uVar1 = param_3;
        func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e45478);
        if ((uVar1 & 1) == 0) {
          uVar1 = param_3;
          func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e35d58);
          uVar2 = 5;
          if ((int)uVar1 == 0) {
            uVar2 = 0;
          }
        }
        else {
          uVar2 = 4;
        }
      }
      else {
        uVar2 = 6;
      }
    }
    else {
      uVar2 = 3;
    }
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 108494ed8; end: 108494fb7; +[SCAdProtoLensImpressionDataBuilder buildProtoAdDeviceInfoWithDeviceScreenHeight:devicesScreenWidth:] */

void FUN_108494ed8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126c0310;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  puVar2 = PTR_PTR_1126c0318;
  _objc_opt_new(PTR_PTR_1126c0318);
  puVar3 = PTR_PTR_1126c0320;
  _objc_alloc(PTR_PTR_1126c0320);
  func_0x00010c0304c0();
  _objc_release(param_4);
  func_0x00010c2256c0(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126c0320;
  _objc_alloc(PTR_PTR_1126c0320);
  func_0x00010c0304c0();
  _objc_release(param_3);
  func_0x00010c1a7d00(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  func_0x00010c1f7040(puVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108494fb8; end: 10849503b; +[SCAdProtoLensImpressionDataBuilder protoFilterCarouselEntryDirectionFromString:] */

undefined4 FUN_108494fb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined4 uVar2;
  
  _objc_retain(param_3);
  ppuVar1 = &PTR____CFConstantStringClassReference_110dea818;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110dea818,param_2,param_3);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 1;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ede1d8;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ede1d8,param_2,param_3);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 2;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110ede1f8;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ede1f8,param_2,param_3);
      uVar2 = 3;
      if (ppuVar1 != (undefined **)0x0) {
        uVar2 = 0;
      }
    }
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 10849503c; end: 108495243; +[SCAdProtoLensImpressionDataBuilder protoAdsMediaTypeFromString:] */

undefined4 FUN_10849503c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined4 uVar2;
  
  func_0x00010c28ed80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0720c0();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110df3358);
    if (((uVar1 & 1) == 0) &&
       (uVar1 = param_3,
       func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110ed9318),
       (uVar1 & 1) == 0)) {
      uVar1 = param_3;
      func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110db93f8);
      if ((uVar1 & 1) == 0) {
        uVar1 = param_3;
        func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110ede058);
        if ((uVar1 & 1) == 0) {
          uVar1 = param_3;
          func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110ede078);
          if ((uVar1 & 1) == 0) {
            uVar1 = param_3;
            func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110ede098);
            if ((uVar1 & 1) == 0) {
              uVar1 = param_3;
              func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110ed9338);
              if ((uVar1 & 1) == 0) {
                uVar1 = param_3;
                func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110ede0b8
                                   );
                if ((uVar1 & 1) == 0) {
                  uVar1 = param_3;
                  func_0x00010c0720c0(param_3,param_2,
                                      &PTR____CFConstantStringClassReference_110ede0d8);
                  if ((uVar1 & 1) == 0) {
                    uVar1 = param_3;
                    func_0x00010c0720c0(param_3,param_2,
                                        &PTR____CFConstantStringClassReference_110ede0f8);
                    if ((uVar1 & 1) == 0) {
                      uVar1 = param_3;
                      func_0x00010c0720c0(param_3,param_2,
                                          &PTR____CFConstantStringClassReference_110ede118);
                      if ((uVar1 & 1) == 0) {
                        uVar1 = param_3;
                        func_0x00010c0720c0(param_3,param_2,
                                            &PTR____CFConstantStringClassReference_110ede138);
                        if ((uVar1 & 1) == 0) {
                          uVar1 = param_3;
                          func_0x00010c0720c0(param_3,param_2,
                                              &PTR____CFConstantStringClassReference_110ede158);
                          if ((uVar1 & 1) == 0) {
                            uVar1 = param_3;
                            func_0x00010c0720c0(param_3,param_2,
                                                &PTR____CFConstantStringClassReference_110ede178);
                            if ((uVar1 & 1) == 0) {
                              uVar1 = param_3;
                              func_0x00010c0720c0(param_3,param_2,
                                                  &PTR____CFConstantStringClassReference_110ede198);
                              if ((uVar1 & 1) == 0) {
                                uVar1 = param_3;
                                func_0x00010c0720c0(param_3,param_2,
                                                    &PTR____CFConstantStringClassReference_110ede1b8
                                                   );
                                uVar2 = 10;
                                if ((int)uVar1 == 0) {
                                  uVar2 = 0;
                                }
                              }
                              else {
                                uVar2 = 9;
                              }
                            }
                            else {
                              uVar2 = 0x10;
                            }
                          }
                          else {
                            uVar2 = 6;
                          }
                        }
                        else {
                          uVar2 = 5;
                        }
                      }
                      else {
                        uVar2 = 8;
                      }
                    }
                    else {
                      uVar2 = 7;
                    }
                  }
                  else {
                    uVar2 = 0xf;
                  }
                }
                else {
                  uVar2 = 0xe;
                }
              }
              else {
                uVar2 = 0xd;
              }
            }
            else {
              uVar2 = 4;
            }
          }
          else {
            uVar2 = 3;
          }
        }
        else {
          uVar2 = 0xb;
        }
      }
      else {
        uVar2 = 1;
      }
    }
    else {
      uVar2 = 2;
    }
  }
  else {
    uVar2 = 0x11;
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 108495244; end: 10849525b; +[SCAdProtoLensImpressionDataBuilder protoLensImpressionTrackUnlockType:] */

undefined4 FUN_108495244(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  
  uVar1 = 2;
  if (param_3 != 1) {
    uVar1 = 0;
  }
  if (param_3 == 0) {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 10849525c; end: 10849526b; +[SCAdProtoLensImpressionDataBuilder protoLensImpressionTrackCarouselExitEvent:] */

int FUN_10849525c(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_3 - 1U < 0xd) {
    iVar1 = (int)(param_3 - 1U) + 1;
  }
  return iVar1;
}



/* Entry: 10849526c; end: 1084952a3;  */

void FUN_10849526c(long param_1)

{
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
    func_0x00010c2761e0(*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf3fea0();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1084952a4; end: 108495883;  */

void FUN_1084952a4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
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
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined *puVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  
  puVar1 = PTR_PTR_1126b9300;
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_alloc();
  lVar2 = param_2;
  func_0x00010bef31c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2415a0();
  lVar3 = param_2;
  func_0x00010bf6d3a0(param_2);
  func_0x00010c274de0();
  func_0x00010c274ca0();
  func_0x00010c274ea0(param_3);
  uVar26 = param_1;
  func_0x00010c274ec0(param_3);
  uVar27 = uVar26;
  _objc_release(param_3);
  lVar4 = param_2;
  func_0x00010c0c2660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c264640();
  func_0x00010c0b5240(param_2);
  lVar5 = param_2;
  func_0x00010c23e120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a22e0();
  lVar6 = param_2;
  func_0x00010bf89520();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_2;
  func_0x00010bfc1a40();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_2;
  func_0x00010bf9b760();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_2;
  func_0x00010c254400();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef5780();
  func_0x00010bef4fe0();
  func_0x00010bef5020();
  func_0x00010c265160();
  func_0x00010bf00b60();
  func_0x00010bef5760();
  lVar10 = param_2;
  func_0x00010bef5720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c063ba0();
  func_0x00010bf4eaa0();
  func_0x00010bef29a0();
  lVar11 = param_2;
  func_0x00010bef2960();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef2980();
  lVar12 = param_2;
  func_0x00010bf3c940();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_2;
  func_0x00010c269580();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_2;
  func_0x00010c107040();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_2;
  func_0x00010c106ba0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_2;
  func_0x00010c106c20();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_2;
  func_0x00010c254200();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_2;
  func_0x00010bf94440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2d740();
  lVar19 = param_2;
  func_0x00010c295100();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = PTR_PTR_1126d9940;
  _objc_alloc();
  func_0x00010c2a17c0(param_2);
  func_0x00010c2a17a0(param_2);
  func_0x00010c0508a0();
  lVar21 = param_2;
  func_0x00010c1035c0();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_2;
  func_0x00010c063b00();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_2;
  func_0x00010c063b60();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = param_2;
  func_0x00010bef47a0();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = param_2;
  func_0x00010bef4780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c006820((double)lVar3,0,0,param_1,uVar26,uVar27);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(puVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108495884; end: 1084958ff;  */

void FUN_108495884(undefined8 param_1)

{
  undefined *puVar1;
  
  FUN_1084952a4();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b92f8;
  _objc_alloc(PTR_PTR_1126b92f8);
  func_0x00010bff2180();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108495900; end: 108495aa7;  */

void FUN_108495900(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined4 param_11,undefined4 param_12,
                  undefined8 param_13)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  _objc_retain();
  uVar1 = param_2;
  FUN_1084952a4(param_2,param_3,param_4,param_5,param_6,param_7,param_10,param_13);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bdcf0;
  _objc_alloc();
  func_0x00010c09c980(param_2);
  func_0x00010c09c9a0(param_2);
  func_0x00010c29ff80(param_2);
  func_0x00010bf61aa0(param_2);
  uVar3 = param_2;
  func_0x00010bf053e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010c23dce0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c0266c0(param_1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  puVar5 = PTR_PTR_1126b92f8;
  _objc_alloc(PTR_PTR_1126b92f8);
  func_0x00010bff2180();
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108495aa8; end: 108495bc3;  */

void FUN_108495aa8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1084952a4(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b92f8;
  _objc_alloc(PTR_PTR_1126b92f8);
  uVar3 = param_1;
  func_0x00010c2a4420(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c0fa9a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010bff2180(puVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108495bc4; end: 108495c3f;  */

void FUN_108495bc4(undefined8 param_1)

{
  undefined *puVar1;
  
  FUN_1084952a4();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b92f8;
  _objc_alloc(PTR_PTR_1126b92f8);
  func_0x00010bff2180();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108495c40; end: 108495d27;  */

void FUN_108495c40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  FUN_1084952a4(param_1,param_2,param_4,param_5,param_6,param_7,param_8,0);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b92f8;
  _objc_alloc(PTR_PTR_1126b92f8);
  func_0x00010bff2180();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108495d28; end: 108495fdf;  */

void FUN_108495d28(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
                  undefined4 param_9,undefined4 param_10,undefined8 param_11)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined1 uStack_68;
  
  _objc_retain(param_11);
  _objc_retain(param_8);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010bef53e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bef53e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  FUN_1084952a4(lVar1,lVar2,param_3,param_4,1,param_5,param_11,param_8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bef53e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar4 = param_6;
  func_0x00010c269d40(param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_retain(lVar1);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_10849526c;
  puStack_78 = &UNK_110914608;
  lStack_70 = lVar1;
  uStack_68 = param_7;
  _objc_retain(lVar1);
  _objc_retain(lVar3);
  ppuVar5 = &puStack_90;
  FUN_10849526c(ppuVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  lVar2 = lVar3;
  func_0x00010c264640();
  _objc_release(lVar3);
  ppuVar8 = ppuVar5;
  if (lVar2 == 0) {
    _objc_release(ppuVar5);
    ppuVar8 = (undefined **)0x0;
  }
  puVar6 = PTR_PTR_1126b9330;
  _objc_alloc(PTR_PTR_1126b9330);
  func_0x00010c01e740();
  _objc_release(ppuVar8);
  _objc_release(ppuVar5);
  _objc_release(lStack_70);
  _objc_release(lVar1);
  _objc_release(uVar4);
  puVar7 = PTR_PTR_1126b92f8;
  _objc_alloc(PTR_PTR_1126b92f8);
  lVar2 = lVar1;
  func_0x00010c2a4420(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff2180(puVar7);
  _objc_release(lVar2);
  _objc_release(puVar6);
  _objc_release(lVar1);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 108495fe0; end: 10849625b;  */

void FUN_108495fe0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  
  _objc_retain();
  uVar1 = param_2;
  FUN_1084952a4(param_2,param_3,param_4,param_5,param_6,param_7,in_stack_00000008,in_stack_00000010)
  ;
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b9320;
  _objc_alloc();
  func_0x00010bf67e80(param_2);
  func_0x00010bf67d00(param_2);
  func_0x00010bf67d40(param_2);
  func_0x00010bf67d20(param_2);
  uVar3 = param_2;
  func_0x00010bf68260(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf61aa0(param_2);
  func_0x00010c009c00();
  _objc_release(uVar3);
  puVar6 = puVar2;
  func_0x00010bf68220();
  if ((long)puVar6 < 1) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = PTR_PTR_1126bdcf0;
    _objc_alloc();
    func_0x00010c09c980(param_2);
    func_0x00010c09c9a0(param_2);
    func_0x00010c29ff80(param_2);
    func_0x00010bf61aa0(param_2);
    uVar3 = param_2;
    func_0x00010bf053e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_2;
    func_0x00010c23dce0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0266c0(param_1);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  puVar5 = PTR_PTR_1126b92f8;
  _objc_alloc(PTR_PTR_1126b92f8);
  uVar3 = param_2;
  func_0x00010c2a4420(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff2180(puVar5);
  _objc_release(uVar3);
  _objc_release(puVar6);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10849625c; end: 1084965b7;  */

void FUN_10849625c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1084952a4(param_1,param_2,param_3,param_4,param_5,param_6,param_7,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d9948;
  _objc_alloc();
  func_0x00010bf72aa0(param_1);
  _objc_release(param_1);
  func_0x00010c00c620();
  puVar3 = PTR_PTR_1126b92f8;
  _objc_alloc(PTR_PTR_1126b92f8);
  func_0x00010bff2180();
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1084965b8; end: 108496633;  */

void FUN_1084965b8(undefined8 param_1)

{
  undefined *puVar1;
  
  FUN_1084952a4();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b92f8;
  _objc_alloc(PTR_PTR_1126b92f8);
  func_0x00010bff2180();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108496634; end: 108496a03;  */

void FUN_108496634(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1084952a4(param_1,param_2,param_3,param_4,param_5,param_6,param_7,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b92f8;
  _objc_alloc(PTR_PTR_1126b92f8);
  puVar3 = PTR_PTR_1126d9960;
  _objc_alloc();
  uVar4 = param_1;
  func_0x00010c25f9c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010bfb5760(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c04eee0();
  func_0x00010bff2180(puVar2);
  _objc_release(puVar3);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108496a04; end: 108496a57;  */

long FUN_108496a04(long param_1)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010bef4240();
  lVar2 = 0;
  if ((lVar1 != 2) && (lVar1 != 5)) {
    lVar2 = param_1;
    func_0x00010c081d80(param_1);
  }
  _objc_release(param_1);
  return lVar2;
}



/* Entry: 108496a58; end: 1084984a3;  */

void FUN_108496a58(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5,undefined *param_6,long param_7,undefined8 param_8,
                  undefined *param_9,undefined4 param_10,undefined4 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined1 param_15,undefined4 param_16,
                  undefined8 param_17,undefined8 param_18)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  float fVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  
  uVar12 = param_1;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_17);
  puVar2 = param_3;
  func_0x00010bef53e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_9;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_17;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = param_3;
  func_0x00010bef60a0();
  fVar19 = (float)uVar12;
  puVar15 = (undefined *)0x0;
  puVar17 = puVar2;
  puVar13 = param_3;
  puVar14 = param_3;
  switch(puVar4) {
  case (undefined *)0x0:
    puVar4 = puVar2;
    func_0x00010bf093e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    FUN_108495884(puVar2,puVar2,param_8,puVar3,1,param_14,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar15 = PTR_PTR_1126b92f0;
    _objc_alloc();
    FUN_108496a04();
    func_0x00010c29c0c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfcb360(param_3);
    dVar20 = (double)fVar19;
    func_0x00010bfcb340(param_3);
    dVar21 = (double)fVar19;
    func_0x00010bfc9e40(param_3);
    dVar22 = (double)fVar19;
    func_0x00010bfc9dc0(param_3);
    dVar23 = (double)fVar19;
    func_0x00010c0e95a0();
    func_0x00010c0e9a20();
    func_0x00010bef38c0();
    func_0x00010c0e9dc0();
    _objc_retainAutoreleasedReturnValue();
    break;
  case (undefined *)0x1:
    puVar4 = puVar2;
    func_0x00010bf093e0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = param_12;
    func_0x00010c269d40(param_12);
    _objc_retainAutoreleasedReturnValue();
    FUN_108495900(puVar2,puVar2,param_8,puVar3,1,param_14);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar12);
    _objc_release(puVar4);
    puVar15 = PTR_PTR_1126b92f0;
    _objc_alloc();
    FUN_108496a04();
    func_0x00010c29c0c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfcb360(param_3);
    dVar20 = (double)fVar19;
    func_0x00010bfcb340(param_3);
    dVar21 = (double)fVar19;
    func_0x00010bfc9e40(param_3);
    dVar22 = (double)fVar19;
    func_0x00010bfc9dc0(param_3);
    dVar23 = (double)fVar19;
    func_0x00010c0e95a0();
    func_0x00010c0e9a20();
    func_0x00010bef38c0();
    func_0x00010c0e9dc0();
    _objc_retainAutoreleasedReturnValue();
    break;
  default:
    goto LAB_108498300;
  case (undefined *)0x3:
    puVar4 = puVar2;
    func_0x00010bf093e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    if (param_7 == 0) {
      FUN_108495aa8(puVar2,puVar2,param_8,puVar3,1,param_14,puVar4,uVar5);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      FUN_108495c40(puVar2,puVar2,param_7,param_8,puVar3,1,param_14,puVar4);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar4);
    puVar15 = PTR_PTR_1126b92f0;
    _objc_alloc(PTR_PTR_1126b92f0);
    FUN_108496a04(param_3);
    func_0x00010c29c0c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfcb360(param_3);
    dVar20 = (double)fVar19;
    func_0x00010bfcb340(param_3);
    dVar21 = (double)fVar19;
    func_0x00010bfc9e40(param_3);
    dVar22 = (double)fVar19;
    func_0x00010bfc9dc0(param_3);
    dVar23 = (double)fVar19;
    func_0x00010c0e95a0();
    func_0x00010c0e9a20();
    func_0x00010bef38c0();
    func_0x00010c0e9dc0();
    _objc_retainAutoreleasedReturnValue();
    break;
  case (undefined *)0x5:
  case (undefined *)0x16:
    puVar4 = puVar2;
    func_0x00010bf093e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    _objc_retain(param_6);
    _objc_retain(param_9);
    _objc_retain(param_12);
    _objc_retain(param_17);
    _objc_retain(puVar4);
    puVar15 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar6 = param_6;
    func_0x00010c0912e0();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = param_3;
    func_0x00010c29f440();
    fVar19 = (float)uVar12;
    if (0 < (long)puVar17) {
      puVar17 = (undefined *)0x0;
      do {
        puVar7 = param_3;
        func_0x00010bef63a0();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        func_0x00010bef60a0();
        puVar18 = puVar6;
        func_0x00010bf529e0();
        if (puVar17 < puVar18) {
          puVar18 = puVar6;
          func_0x00010c0dfd40(puVar6);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          puVar18 = (undefined *)0x0;
        }
        puVar16 = param_9;
        func_0x00010bf529e0();
        if (puVar17 < puVar16) {
          puVar16 = param_9;
          func_0x00010c0dfd40(param_9);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          puVar16 = (undefined *)0x0;
        }
        uVar1 = param_18;
        if (puVar17 != (undefined *)0x0) {
          uVar1 = 0;
        }
        puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        uVar10 = param_17;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar9);
        puVar9 = puVar7;
        uVar11 = param_12;
        switch(puVar8) {
        case (undefined *)0x0:
          FUN_108495884(puVar7,0,0,puVar16,0,param_14,puVar4);
          _objc_retainAutoreleasedReturnValue();
          break;
        case (undefined *)0x1:
          func_0x00010c269d40(param_12);
          _objc_retainAutoreleasedReturnValue();
          FUN_108495900(puVar7,0,0,puVar16,0,param_14);
          _objc_retainAutoreleasedReturnValue();
          goto code_r0x000108496eb4;
        default:
          goto code_r0x000108496f90;
        case (undefined *)0x3:
          FUN_108495aa8(puVar7,0,0,puVar16,0,param_14,puVar4,uVar10);
          _objc_retainAutoreleasedReturnValue();
          break;
        case (undefined *)0x9:
          func_0x000108496480(puVar7,puVar18,0,0,puVar16,0,param_14,puVar4);
          _objc_retainAutoreleasedReturnValue();
          break;
        case (undefined *)0xa:
          puVar8 = puVar7;
          func_0x00010c2415a0(puVar7);
          puVar9 = param_3;
          FUN_108495d28(param_3,puVar8,0,puVar16,param_14,param_12,0,uVar10,uVar1,puVar4);
          _objc_retainAutoreleasedReturnValue();
          break;
        case (undefined *)0xf:
          FUN_1084965b8(puVar7,0,0,puVar16,0,param_14,puVar4);
          _objc_retainAutoreleasedReturnValue();
          break;
        case (undefined *)0x10:
          func_0x000108496634(puVar7,0,0,puVar16,0,param_14,puVar4);
          _objc_retainAutoreleasedReturnValue();
          break;
        case (undefined *)0x13:
          func_0x00010849677c(puVar7,0,0,puVar16,0,param_14,puVar4);
          _objc_retainAutoreleasedReturnValue();
          break;
        case (undefined *)0x14:
          func_0x0001084968a4(puVar7,0,0,puVar16,0,param_14,puVar4);
          _objc_retainAutoreleasedReturnValue();
          break;
        case (undefined *)0x15:
          FUN_108495bc4(puVar7,0,0,puVar16,0,param_14,puVar4);
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
        case (undefined *)0x6:
          func_0x00010c269d40(param_12);
          _objc_retainAutoreleasedReturnValue();
          FUN_108495fe0(puVar7,0,0,puVar16,0,param_14);
          _objc_retainAutoreleasedReturnValue();
code_r0x000108496eb4:
          _objc_release(uVar11);
        }
        if (puVar9 != (undefined *)0x0) {
          func_0x00010befa120(puVar15);
          _objc_release(puVar9);
        }
code_r0x000108496f90:
        _objc_release(uVar10);
        _objc_release(puVar16);
        _objc_release(puVar18);
        _objc_release(puVar7);
        puVar17 = puVar17 + 1;
        puVar7 = param_3;
        func_0x00010c29f440();
        fVar19 = (float)uVar12;
      } while ((long)puVar17 < (long)puVar7);
    }
    puVar7 = PTR_PTR_1126d9978;
    _objc_alloc();
    puVar17 = param_3;
    func_0x00010bf9bcc0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar17;
    if (puVar17 == (undefined *)0x0) {
      puVar8 = param_3;
      func_0x00010bf760e0(param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    puVar18 = param_3;
    func_0x00010bf760e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c011060();
    _objc_release(puVar18);
    if (puVar17 == (undefined *)0x0) {
      _objc_release(puVar8);
    }
    _objc_release(puVar17);
    puVar17 = PTR_PTR_1126bdce8;
    _objc_alloc();
    puVar8 = param_3;
    func_0x00010bef31c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23fa00();
    func_0x00010c06c960();
    puVar18 = param_3;
    func_0x00010bf9b740(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c276dc0(param_3);
    func_0x00010c2806e0(param_3);
    func_0x00010c0c31c0();
    func_0x00010c276f40();
    func_0x00010c26fbc0(param_3);
    func_0x00010c006800(puVar17);
    _objc_release(puVar18);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar15);
    _objc_release(puVar4);
    _objc_release(param_17);
    _objc_release(param_12);
    _objc_release(param_9);
    _objc_release(param_6);
    _objc_release(param_3);
    _objc_release(puVar4);
    puVar15 = PTR_PTR_1126b92f0;
    _objc_alloc(PTR_PTR_1126b92f0);
    func_0x00010bef60a0(param_3);
    FUN_108496a04(param_3);
    func_0x00010c29c0c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfcb360(param_3);
    dVar20 = (double)fVar19;
    func_0x00010bfcb340(param_3);
    dVar21 = (double)fVar19;
    func_0x00010bfc9e40(param_3);
    dVar22 = (double)fVar19;
    func_0x00010bfc9dc0(param_3);
    dVar23 = (double)fVar19;
    func_0x00010c0e95a0();
    func_0x00010c0e9a20();
    func_0x00010bef38c0();
    func_0x00010c0e9dc0();
    _objc_retainAutoreleasedReturnValue();
    break;
  case (undefined *)0x6:
    uVar12 = param_12;
    func_0x00010c269d40(param_12);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bf093e0();
    _objc_retainAutoreleasedReturnValue();
    FUN_108495fe0(puVar2,puVar2,param_8,puVar3,1,param_14);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(uVar12);
    puVar15 = PTR_PTR_1126b92f0;
    _objc_alloc();
    FUN_108496a04();
    func_0x00010c29c0c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfcb360(param_3);
    dVar20 = (double)fVar19;
    func_0x00010bfcb340(param_3);
    dVar21 = (double)fVar19;
    func_0x00010bfc9e40(param_3);
    dVar22 = (double)fVar19;
    func_0x00010bfc9dc0(param_3);
    dVar23 = (double)fVar19;
    func_0x00010c0e95a0();
    func_0x00010c0e9a20();
    func_0x00010bef38c0();
    func_0x00010c0e9dc0();
    _objc_retainAutoreleasedReturnValue();
    break;
  case (undefined *)0x9:
    puVar4 = param_6;
    func_0x00010c0912e0();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = puVar2;
    func_0x00010bf093e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar2;
    func_0x000108496480(puVar2,puVar17,puVar2,param_8,puVar3,1,param_14,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar15 = PTR_PTR_1126b92f0;
    _objc_alloc();
    FUN_108496a04();
    func_0x00010c29c0c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfcb360(param_3);
    dVar20 = (double)fVar19;
    func_0x00010bfcb340(param_3);
    dVar21 = (double)fVar19;
    func_0x00010bfc9e40(param_3);
    dVar22 = (double)fVar19;
    func_0x00010bfc9dc0(param_3);
    func_0x00010c0e95a0();
    func_0x00010c0e9a20();
    func_0x00010bef38c0();
    puVar4 = param_3;
    func_0x00010c0e9dc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff2160(dVar20,dVar21,dVar22,(double)fVar19,param_1,puVar15);
    _objc_release(puVar4);
    goto code_r0x0001084982dc;
  case (undefined *)0xa:
    puVar4 = puVar2;
    func_0x00010bf093e0();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = param_3;
    FUN_108495d28(param_3,0,param_8,puVar3,param_14,param_12,param_15,uVar5,param_18,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar15 = PTR_PTR_1126b92f0;
    _objc_alloc();
    FUN_108496a04();
    func_0x00010c29c0c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfcb360(param_3);
    dVar20 = (double)fVar19;
    func_0x00010bfcb340(param_3);
    dVar21 = (double)fVar19;
    func_0x00010bfc9e40(param_3);
    dVar22 = (double)fVar19;
    func_0x00010bfc9dc0(param_3);
    dVar23 = (double)fVar19;
    func_0x00010c0e95a0();
    func_0x00010c0e9a20();
    func_0x00010bef38c0();
    func_0x00010c0e9dc0();
    _objc_retainAutoreleasedReturnValue();
    break;
  case (undefined *)0xd:
    puVar4 = puVar2;
    func_0x00010bf093e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010849625c(puVar2,puVar2,param_8,puVar3,1,param_14,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar15 = PTR_PTR_1126b92f0;
    _objc_alloc();
    FUN_108496a04();
    func_0x00010c29c0c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfcb360(param_3);
    dVar20 = (double)fVar19;
    func_0x00010bfcb340(param_3);
    dVar21 = (double)fVar19;
    func_0x00010bfc9e40(param_3);
    dVar22 = (double)fVar19;
    func_0x00010bfc9dc0(param_3);
    dVar23 = (double)fVar19;
    func_0x00010c0e95a0();
    func_0x00010c0e9a20();
    func_0x00010bef38c0();
    func_0x00010c0e9dc0();
    _objc_retainAutoreleasedReturnValue();
    break;
  case (undefined *)0xe:
    puVar4 = puVar2;
    func_0x00010bf093e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010849636c(puVar2,puVar2,param_8,puVar3,1,param_14,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar15 = PTR_PTR_1126b92f0;
    _objc_alloc();
    FUN_108496a04();
    func_0x00010c29c0c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfcb360(param_3);
    dVar20 = (double)fVar19;
    func_0x00010bfcb340(param_3);
    dVar21 = (double)fVar19;
    func_0x00010bfc9e40(param_3);
    dVar22 = (double)fVar19;
    func_0x00010bfc9dc0(param_3);
    dVar23 = (double)fVar19;
    func_0x00010c0e95a0();
    func_0x00010c0e9a20();
    func_0x00010bef38c0();
    func_0x00010c0e9dc0();
    _objc_retainAutoreleasedReturnValue();
    break;
  case (undefined *)0xf:
    puVar4 = puVar2;
    func_0x00010bf093e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    FUN_1084965b8(puVar2,puVar2,param_8,puVar3,1,param_14,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar15 = PTR_PTR_1126b92f0;
    _objc_alloc();
    FUN_108496a04();
    func_0x00010c29c0c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfcb360(param_3);
    dVar20 = (double)fVar19;
    func_0x00010bfcb340(param_3);
    dVar21 = (double)fVar19;
    func_0x00010bfc9e40(param_3);
    dVar22 = (double)fVar19;
    func_0x00010bfc9dc0(param_3);
    dVar23 = (double)fVar19;
    func_0x00010c0e95a0();
    func_0x00010c0e9a20();
    func_0x00010bef38c0();
    func_0x00010c0e9dc0();
    _objc_retainAutoreleasedReturnValue();
    break;
  case (undefined *)0x10:
    puVar4 = puVar2;
    func_0x00010bf093e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108496634(puVar2,puVar2,param_8,puVar3,1,param_14,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar15 = PTR_PTR_1126b92f0;
    _objc_alloc();
    FUN_108496a04();
    func_0x00010c29c0c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfcb360(param_3);
    dVar20 = (double)fVar19;
    func_0x00010bfcb340(param_3);
    dVar21 = (double)fVar19;
    func_0x00010bfc9e40(param_3);
    dVar22 = (double)fVar19;
    func_0x00010bfc9dc0(param_3);
    dVar23 = (double)fVar19;
    func_0x00010c0e95a0();
    func_0x00010c0e9a20();
    func_0x00010bef38c0();
    func_0x00010c0e9dc0();
    _objc_retainAutoreleasedReturnValue();
    break;
  case (undefined *)0x11:
    puVar4 = puVar2;
    func_0x00010bf093e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    FUN_108495c40(puVar2,puVar2,param_7,param_8,puVar3,1,param_14,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar15 = PTR_PTR_1126b92f0;
    _objc_alloc();
    FUN_108496a04();
    func_0x00010c29c0c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfcb360(param_3);
    dVar20 = (double)fVar19;
    func_0x00010bfcb340(param_3);
    dVar21 = (double)fVar19;
    func_0x00010bfc9e40(param_3);
    dVar22 = (double)fVar19;
    func_0x00010bfc9dc0(param_3);
    dVar23 = (double)fVar19;
    func_0x00010c0e95a0();
    func_0x00010c0e9a20();
    func_0x00010bef38c0();
    func_0x00010c0e9dc0();
    _objc_retainAutoreleasedReturnValue();
    break;
  case (undefined *)0x13:
    puVar4 = puVar2;
    func_0x00010bf093e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010849677c(puVar2,puVar2,param_8,puVar3,1,param_14,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar15 = PTR_PTR_1126b92f0;
    _objc_alloc();
    FUN_108496a04();
    func_0x00010c29c0c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfcb360(param_3);
    dVar20 = (double)fVar19;
    func_0x00010bfcb340(param_3);
    dVar21 = (double)fVar19;
    func_0x00010bfc9e40(param_3);
    dVar22 = (double)fVar19;
    func_0x00010bfc9dc0(param_3);
    dVar23 = (double)fVar19;
    func_0x00010c0e95a0();
    func_0x00010c0e9a20();
    func_0x00010bef38c0();
    func_0x00010c0e9dc0();
    _objc_retainAutoreleasedReturnValue();
    break;
  case (undefined *)0x14:
    puVar4 = puVar2;
    func_0x00010bf093e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001084968a4(puVar2,puVar2,param_8,puVar3,1,param_14,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar15 = PTR_PTR_1126b92f0;
    _objc_alloc();
    FUN_108496a04();
    func_0x00010c29c0c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfcb360(param_3);
    dVar20 = (double)fVar19;
    func_0x00010bfcb340(param_3);
    dVar21 = (double)fVar19;
    func_0x00010bfc9e40(param_3);
    dVar22 = (double)fVar19;
    func_0x00010bfc9dc0(param_3);
    dVar23 = (double)fVar19;
    func_0x00010c0e95a0();
    func_0x00010c0e9a20();
    func_0x00010bef38c0();
    func_0x00010c0e9dc0();
    _objc_retainAutoreleasedReturnValue();
    break;
  case (undefined *)0x15:
    puVar4 = puVar2;
    func_0x00010bf093e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    FUN_108495bc4(puVar2,puVar2,param_8,puVar3,1,param_14,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar15 = PTR_PTR_1126b92f0;
    _objc_alloc();
    FUN_108496a04();
    func_0x00010c29c0c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfcb360(param_3);
    dVar20 = (double)fVar19;
    func_0x00010bfcb340(param_3);
    dVar21 = (double)fVar19;
    func_0x00010bfc9e40(param_3);
    dVar22 = (double)fVar19;
    func_0x00010bfc9dc0(param_3);
    dVar23 = (double)fVar19;
    func_0x00010c0e95a0();
    func_0x00010c0e9a20();
    func_0x00010bef38c0();
    func_0x00010c0e9dc0();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bff2160(dVar20,dVar21,dVar22,dVar23,param_1,puVar15);
code_r0x0001084982dc:
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar17);
LAB_108498300:
  _objc_release(uVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_17);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
  return;
}



/* Entry: 1084984a4; end: 108498553;  */

void FUN_1084984a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b92f0;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010bff2160(*(undefined8 *)PTR__CGSizeZero_110347620,
                      *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),
                      *(undefined8 *)PTR__CGSizeZero_110347620,
                      *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),0);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108498554; end: 108498bcb;  */

long FUN_108498554(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain();
  _objc_retain(param_2);
  if (param_1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010bef53e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010bef60a0();
    lVar2 = 0;
    switch(lVar3) {
    case 0:
      lVar2 = lVar1;
      FUN_108495884(lVar1,lVar1,0,0,1,3,0);
      _objc_retainAutoreleasedReturnValue();
      break;
    case 1:
      lVar2 = lVar1;
      FUN_108495900(lVar1,lVar1,0,0,1,3);
      _objc_retainAutoreleasedReturnValue();
      break;
    case 3:
      lVar2 = lVar1;
      FUN_108495aa8(lVar1,lVar1,0,0,1,3,0,0);
      _objc_retainAutoreleasedReturnValue();
      break;
    case 6:
      lVar2 = lVar1;
      FUN_108495fe0(lVar1,lVar1,0,0,1,3);
      _objc_retainAutoreleasedReturnValue();
      break;
    case 9:
      lVar2 = lVar1;
      func_0x000108496480(lVar1,0,0,0,0,1,3,0);
      _objc_retainAutoreleasedReturnValue();
      break;
    case 10:
      lVar2 = param_1;
      FUN_108495d28(param_1,0,0,0,3,0,0,0,0,0);
      _objc_retainAutoreleasedReturnValue();
      break;
    case 0xd:
      lVar2 = lVar1;
      func_0x00010849625c(lVar1,lVar1,0,0,1,3,0);
      _objc_retainAutoreleasedReturnValue();
      break;
    case 0xe:
      lVar2 = lVar1;
      func_0x00010849636c(lVar1,lVar1,0,0,1,3,0);
      _objc_retainAutoreleasedReturnValue();
      break;
    case 0xf:
      lVar2 = lVar1;
      FUN_1084965b8(lVar1,lVar1,0,0,1,3,0);
      _objc_retainAutoreleasedReturnValue();
      break;
    case 0x10:
      lVar2 = lVar1;
      func_0x000108496634(lVar1,lVar1,0,0,1,3,0);
      _objc_retainAutoreleasedReturnValue();
      break;
    case 0x11:
      lVar2 = lVar1;
      FUN_108495c40(lVar1,lVar1,0,0,0,1,3,0);
      _objc_retainAutoreleasedReturnValue();
      break;
    case 0x13:
      lVar2 = lVar1;
      func_0x00010849677c(lVar1,lVar1,0,0,1,3,0);
      _objc_retainAutoreleasedReturnValue();
      break;
    case 0x15:
      lVar2 = lVar1;
      FUN_108495bc4(lVar1,lVar1,0,0,1,3,0);
      _objc_retainAutoreleasedReturnValue();
    }
    lVar3 = lVar2;
    func_0x000108498878(lVar2,param_2);
    _objc_release(lVar1);
    _objc_release(lVar2);
  }
  _objc_release(param_2);
  _objc_release(param_1);
  return lVar3;
}



/* Entry: 108498bcc; end: 108498c93; -[SCAdInteractionHistoryTracker initWithAudioOutputVolume:] */

undefined1 *
FUN_108498bcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126fca40;
  uStack_50 = param_5;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108498c94; end: 108498c9b; -[SCAdInteractionHistoryTracker updateAudioOutputVolume:] */

void FUN_108498c94(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x10) = param_1;
  return;
}



/* Entry: 108498c9c; end: 108498d97; -[SCAdInteractionHistoryTracker onAdShownInteractionUpdate:snapIndex:isUnskippableAd:isTopPanelOpen:isBottomPanelOpen:adResponseV2:] */

void FUN_108498c9c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 in_x7;
  
  _objc_retain(param_3);
  _objc_retain(in_x7);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010c0e00e0(lVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      lVar1 = param_1;
      func_0x00010be1a7c0(param_1,param_2,in_x7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 8),param_2,lVar1,param_3);
      _objc_release(lVar1);
    }
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0e00e0(uVar2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef5140(*(undefined8 *)(param_1 + 0x10));
    _objc_release(uVar2);
  }
  _objc_release(in_x7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108498d98; end: 108498e23; -[SCAdInteractionHistoryTracker onVideoViewedInteractionUpdate:snapIndex:adPanel:mediaDurationInMillis:viewedDurationInMillis:] */

void FUN_108498d98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  _objc_retain(param_3);
  if (param_5 == 1) {
    func_0x00010be69f20(param_1,param_2,param_3,param_4,param_6,param_7);
  }
  else if (param_5 == 0) {
    func_0x00010be6c0c0(param_1,param_2,param_3,param_4,param_6,param_7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108498e24; end: 108498e7b; -[SCAdInteractionHistoryTracker onTopSnapImageViewedInteractionUpdate:snapIndex:mediaDurationInMillis:viewedDurationInMillis:] */

void FUN_108498e24(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x00010bef6380();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    func_0x00010c217680(param_1,param_2,param_5,param_6,param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108498e7c; end: 108498ed3; -[SCAdInteractionHistoryTracker onTopSnapWebpageViewedInteractionUpdate:snapIndex:mediaDurationInMillis:viewedDurationInMillis:] */

void FUN_108498e7c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x00010bef6380();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    func_0x00010c217680(param_1,param_2,param_5,param_6,param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108498ed4; end: 108498f97; -[SCAdInteractionHistoryTracker onDeepLinkedInteractionUpdate:snapIndex:deepLinkFromCard:deepLinkFallBackToAppStore:deepLinkFallBackToWebview:deepLinkFallBackToDefaultBrowser:deepLinkURI:collectionItemIndex:] */

void FUN_108498ed4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  _objc_retain(param_9);
  _objc_retain(param_10);
  func_0x00010bef6380(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    func_0x00010c18a880(param_1,param_2,param_5,param_6,param_7,param_8,param_9,param_4,param_10);
  }
  _objc_release(param_1);
  _objc_release(param_10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_9);
  return;
}



/* Entry: 108498f98; end: 10849902f; -[SCAdInteractionHistoryTracker onAppInstallInteractionUpdate:snapIndex:loadedOnEntry:loadedOnExit:visiblePageLoadTimeSeconds:collectionItemIndex:] */

void FUN_108498f98(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  _objc_retain(param_8);
  func_0x00010bef6380(param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  if (param_2 != 0) {
    func_0x00010c168c60(param_1,param_2,param_3,param_5,param_8,param_6,param_7);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_8);
  return;
}



/* Entry: 108499030; end: 1084990df; -[SCAdInteractionHistoryTracker onRemoteWebViewInteractionUpdate:snapIndex:loadedOnEntry:loadedOnExit:visiblePageLoadTimeSeconds:collectionItemIndex:viewedDurationInMillis:initialPageLoadStatusCode:] */

void FUN_108499030(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 in_x6;
  undefined8 in_stack_00000000;
  
  _objc_retain(in_stack_00000000);
  _objc_retain(in_x6);
  func_0x00010bef6380(param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bea80(param_1);
  _objc_release(in_stack_00000000);
  _objc_release(in_x6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1084990e0; end: 108499147; -[SCAdInteractionHistoryTracker onCommercePdpInteractionUpdate:snapIndex:collectionItemIndex:] */

void FUN_1084990e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  func_0x00010bef6380(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17f260();
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108499148; end: 1084991cf; -[SCAdInteractionHistoryTracker onShowcaseInteractionUpdate:snapIndex:collectionItemIndex:showcaseTrackInfo:] */

void FUN_108499148(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010bef6380(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c202280();
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1084991d0; end: 108499217; -[SCAdInteractionHistoryTracker onSwipedUpToCardInteractionUpdate:snapIndex:attachmentTriggerType:] */

void FUN_1084991d0(undefined8 param_1)

{
  func_0x00010bef6380();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c265260();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108499218; end: 10849926f; -[SCAdInteractionHistoryTracker onProfileAttachmentTriggered:snapIndex:attachmentTriggerType:attachmentTriggeredTimestampMs:] */

void FUN_108499218(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bef6380();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e5c40(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108499270; end: 10849930b; -[SCAdInteractionHistoryTracker onWebViewClosedWithTrackInfo:collectionItemIndex:adIdentifier:snapIndex:] */

void FUN_108499270(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bef6380();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  _objc_opt_respondsToSelector();
  if ((uVar1 & 1) != 0) {
    func_0x00010befdd80(param_1);
  }
  _objc_release(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10849930c; end: 108499393; -[SCAdInteractionHistoryTracker onWebBrowserSessionEvent:collectionItemIndex:adIdentifier:snapIndex:] */

void FUN_10849930c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bef6380(param_1,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e7aa0();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108499394; end: 10849941b; -[SCAdInteractionHistoryTracker didReceiveWebViewContext:collectionItemIndex:adIdentifier:snapIndex:] */

void FUN_108499394(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bef6380(param_1,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf796c0();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10849941c; end: 108499453; -[SCAdInteractionHistoryTracker onScreenshotInteractionUpdate:snapIndex:] */

void FUN_10849941c(undefined8 param_1)

{
  func_0x00010bef6380();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef4ce0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108499454; end: 10849949b; -[SCAdInteractionHistoryTracker onBoostInteractionUpdate:snapIndex:wasBoosted:] */

void FUN_108499454(undefined8 param_1)

{
  func_0x00010bef6380();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef2080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10849949c; end: 1084994d3; -[SCAdInteractionHistoryTracker onLongPressInteractionUpdate:snapIndex:] */

void FUN_10849949c(undefined8 param_1)

{
  func_0x00010bef6380();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef3520();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1084994d4; end: 108499543; -[SCAdInteractionHistoryTracker onTapToPauseInteraction:adRequestClientId:snapIndex:] */

void FUN_1084994d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_3);
  func_0x00010bef6380(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    func_0x00010c211ec0(param_1,param_2,param_3,param_5);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108499544; end: 10849954f; -[SCAdInteractionHistoryTracker onWindowFocusChangedInteractionUpdate:snapIndex:fromPanel:hasFocus:] */

void FUN_108499544(undefined8 param_1)

{
  int in_w5;
  
  if (in_w5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be6c1f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__onUnobstructed_snapIndex_fromPa_112578a18)
    ;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be6a6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__onObstructed_snapIndex_fromPane_112578358);
  return;
}



/* Entry: 108499550; end: 10849959b; -[SCAdInteractionHistoryTracker onAudioChangeInteractionUpdate:snapIndex:audioOutputVolume:] */

void FUN_108499550(undefined8 param_1,long param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_2 + 0x10) = param_1;
  lVar1 = param_2;
  func_0x00010bef6380();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e29c0(*(undefined8 *)(param_2 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10849959c; end: 1084996ef; -[SCAdInteractionHistoryTracker onAdHiddenInteractionUpdate:snapIndex:adPanel:viewContext:dismissDuration:] */

void FUN_10849959c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,ulong param_7)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  puVar2 = PTR_PTR_1126b92c8;
  _objc_retain(param_7);
  _objc_retain(param_4);
  func_0x00010bf9b740(puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_7;
  func_0x00010c0e00e0(param_7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b92c8;
  func_0x00010bf9b760(PTR_PTR_1126b92c8);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_7;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126ca8f8;
  _objc_opt_class(PTR_PTR_1126ca8f8);
  uVar5 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  func_0x00010be6b800(param_1,param_2);
  _objc_release(uVar1);
  func_0x00010be69780(param_2);
  _objc_release(param_7);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1084996f0; end: 10849979f; -[SCAdInteractionHistoryTracker onPanelChangedInteractionUpdate:snapIndex:fromPanel:isPixelCookieAvailable:viewContext:attachmentTriggerType:] */

void FUN_1084996f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  
  _objc_retain(param_7);
  lVar1 = param_1;
  func_0x00010bef6380(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if ((lVar1 != 0) &&
     (func_0x00010c265460(*(undefined8 *)(param_1 + 0x10),lVar1,param_2,param_5 == 0,param_4,param_7
                          ,param_8), param_5 == 0)) {
    func_0x00010c1dc060(lVar1,param_2,param_6,param_4);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 1084997a0; end: 1084997ef; -[SCAdInteractionHistoryTracker onAdToCallInteractionUpdate:snapIndex:didCall:] */

void FUN_1084997a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x00010bef6380();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    func_0x00010c18d560(param_1,param_2,param_5,param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1084997f0; end: 10849983f; -[SCAdInteractionHistoryTracker onAdToMessageInteractionUpdate:snapIndex:didMessage:] */

void FUN_1084997f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x00010bef6380();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    func_0x00010c18d900(param_1,param_2,param_5,param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108499840; end: 1084998af; -[SCAdInteractionHistoryTracker onLeadGenerationSubmissionUpdate:snapIndex:submittedLead:] */

void FUN_108499840(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  func_0x00010bef6380(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    func_0x00010c20f300(param_1,param_2,param_5,param_4);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1084998b0; end: 10849991f; -[SCAdInteractionHistoryTracker onLeadGenerationFormInteractionUpdate:snapIndex:formInteraction:] */

void FUN_1084998b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  func_0x00010bef6380(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    func_0x00010c19ebe0(param_1,param_2,param_5,param_4);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 108499920; end: 10849998f; -[SCAdInteractionHistoryTracker onGestureParametersUpdate:snapIndex:gestureParameters:] */

void FUN_108499920(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  func_0x00010bef6380(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    func_0x00010c1a2fa0(param_1,param_2,param_5,param_4);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



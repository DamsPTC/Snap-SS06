/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105913330; end: 105913587; -[SCIAPTokenTokenPackPurchaseServiceImplementation _processPurchasedTransactionWithProduct:appStoreReceipt:] */

void FUN_105913330(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c0f67c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c115ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c279820();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  FUN_105914190();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = param_3;
  func_0x00010c112a80(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c112b00();
  _objc_release(uVar1);
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = param_3;
  func_0x00010c112b80(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c112ae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_78,auStack_68);
  _objc_retain(uVar2);
  _objc_retain(uVar3);
  uStack_70 = uVar6;
  _objc_retain(uVar7);
  _objc_retain(uVar4);
  func_0x00010c11bc60(uVar1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar7);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar7);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105913588; end: 1059136e7;  */

void FUN_105913588(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if ((param_2 & 1) == 0) {
      puVar2 = (undefined *)0x515;
      func_0x0001059142b0(0x515,*(undefined8 *)(param_1 + 0x20),param_5);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126c01e8;
      func_0x00010bf9ff60(PTR_PTR_1126c01e8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(*(undefined8 *)(lVar1 + 0x38));
      func_0x00010be92900(lVar1);
      _objc_release(puVar3);
    }
    else {
      func_0x00010bfafd40(*(undefined8 *)(lVar1 + 0x10));
      FUN_105913f34(*(undefined8 *)(lVar1 + 0x18),*(undefined8 *)(param_1 + 0x28));
      puVar2 = PTR_PTR_1126c01e8;
      func_0x00010c275ea0(param_3);
      func_0x00010c11cf60(param_4);
      func_0x00010c261700(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(*(undefined8 *)(lVar1 + 0x38));
      func_0x00010be92900(lVar1);
    }
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1059136e8; end: 105913877; -[SCIAPTokenTokenPackPurchaseServiceImplementation _processFailedTransaction] */

void FUN_1059136e8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c0f67c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c115ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010bf987e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfafd40(*(undefined8 *)(param_1 + 0x10));
  uVar1 = uVar3;
  func_0x0001059144d4();
  if ((int)uVar1 == 0) {
    uVar1 = 0x4b2;
    func_0x0001059142b0(0x4b2,uVar2,uVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar1 = 0x4b3;
    FUN_1059141d4(0x4b3,uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar4 = PTR_PTR_1126c01e8;
  func_0x00010bf9ff60(PTR_PTR_1126c01e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x38));
  _objc_initWeak(auStack_48,param_1);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c0f7fc0(uVar5);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar4);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  return;
}



/* Entry: 105913878; end: 1059138ab;  */

void FUN_105913878(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be92900(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059138ac; end: 1059139a3; -[SCIAPTokenTokenPackPurchaseServiceImplementation _processRestoredTransaction] */

void FUN_1059138ac(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c279820(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(ulong *)(param_1 + 0x18);
  FUN_105913e88(uVar2,uVar1);
  func_0x00010bfafd40(*(undefined8 *)(param_1 + 0x10));
  if ((uVar2 & 1) == 0) {
    FUN_105913f34(*(undefined8 *)(param_1 + 0x18),uVar1);
  }
  _objc_initWeak(auStack_38,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0f7fc0(uVar3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(uVar1);
  return;
}



/* Entry: 1059139a4; end: 1059139d7;  */

void FUN_1059139a4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be92900(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059139d8; end: 105913aeb; -[SCIAPTokenTokenPackPurchaseServiceImplementation _processDeferredTransaction] */

void FUN_1059139d8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c0f67c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c115ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126c01e8;
  func_0x00010bf6ac60(PTR_PTR_1126c01e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x38));
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(puVar3);
  _objc_release(uVar2);
  return;
}



/* Entry: 105913aec; end: 105913b1f;  */

void FUN_105913aec(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be92900(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105913b20; end: 105913c47; -[SCIAPTokenTokenPackPurchaseServiceImplementation _fetchPromotions] */

void FUN_105913b20(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  puVar2 = PTR_PTR_1126c01f8;
  func_0x00010c251d80(PTR_PTR_1126c01f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x40));
  lVar3 = param_1;
  func_0x00010c273240(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c11de00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010bfcb460(uVar1);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(lVar3);
  _objc_release(puVar2);
  return;
}



/* Entry: 105913c48; end: 105913d1b;  */

void FUN_105913c48(long param_1,int param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    if (param_2 == 0) {
      puVar3 = PTR_PTR_1126c01f8;
      func_0x00010bf9ff00(PTR_PTR_1126c01f8);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar1 = param_3;
      func_0x00010bf529e0();
      if (lVar1 != 0) {
        _objc_retain(param_3);
        uVar2 = *(undefined8 *)(param_1 + 0x60);
        *(long *)(param_1 + 0x60) = param_3;
        _objc_release(uVar2);
      }
      puVar3 = PTR_PTR_1126c01f8;
      func_0x00010c261720(PTR_PTR_1126c01f8);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x40));
    _objc_release(puVar3);
  }
  _objc_release(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105913d1c; end: 105913d5f; -[SCIAPTokenTokenPackPurchaseServiceImplementation _fetchTokenBalance] */

void FUN_105913d1c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcb440(uVar1,param_2,uVar2,&PTR___NSConcreteGlobalBlock_1108bfdf8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105913d60; end: 105913d63;  */

void FUN_105913d60(void)

{
  return;
}



/* Entry: 105913d64; end: 105913e17; -[SCIAPTokenTokenPackPurchaseServiceImplementation .cxx_destruct] */

void FUN_105913d64(long param_1)

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



/* Entry: 105913e18; end: 105913e23;  */

void FUN_105913e18(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfda7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_hasPrefix__1125d43b0,&PTR____CFConstantStringClassReference_110e0d2b8);
  return;
}



/* Entry: 105913e24; end: 105913e87;  */

undefined8 FUN_105913e24(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c0f67c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c115ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar2 = uVar1;
  func_0x00010bfda7c0(uVar1);
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105913e88; end: 105913f33;  */

ulong FUN_105913e88(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_2);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  _objc_opt_class(PTR__OBJC_CLASS___NSSet_1126ae870);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
  if (uVar1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x00010bf4b900(param_1);
  }
  _objc_release(uVar1);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 105913f34; end: 105913fdb;  */

void FUN_105913f34(undefined8 param_1,undefined8 param_2)

{
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_2);
  _objc_retain(param_1);
  func_0x00010bf6db60(param_1);
  _objc_release(param_2);
  _objc_release(param_1);
  _objc_release(param_2);
  _objc_release(param_1);
  return;
}



/* Entry: 105913fdc; end: 1059140eb;  */

void FUN_105913fdc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_sync_enter(&PTR____CFConstantStringClassReference_110e0d2d8);
  puVar1 = *(undefined **)(param_1 + 0x20);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  _objc_opt_class(PTR__OBJC_CLASS___NSSet_1126ae870);
  puVar3 = puVar1;
  _objc_opt_isKindOfClass(puVar1,puVar2);
  puVar2 = puVar1;
  if (((ulong)puVar3 & 1) == 0) {
    puVar2 = (undefined *)0x0;
  }
  _objc_retain(puVar2);
  _objc_release(puVar1);
  if (puVar2 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c2268e0(PTR__OBJC_CLASS___NSSet_1126ae870);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = puVar1;
    func_0x00010c174bc0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  puVar3 = puVar2;
  func_0x00010bf51e00(puVar2);
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x20));
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf4a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_sync_exit_11034d348)(&PTR____CFConstantStringClassReference_110e0d2d8);
  return;
}



/* Entry: 1059140ec; end: 10591418f;  */

void FUN_1059140ec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x00010bf063a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf64ac0(PTR__OBJC_CLASS___NSData_1126ae778,param_2,param_1);
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 == (undefined *)0x0) {
      puVar2 = (undefined *)0x0;
    }
    else {
      puVar2 = puVar1;
      func_0x00010bf15da0(puVar1,param_2,0);
      _objc_retainAutoreleasedReturnValue();
      if (puVar2 != (undefined *)0x0) {
        _objc_retain(puVar2);
      }
      _objc_release(puVar2);
    }
    _objc_release(puVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105914190; end: 1059141d3;  */

void FUN_105914190(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c257f60();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf53280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1059141d4; end: 1059143db;  */

void FUN_1059141d4(undefined8 param_1,undefined *param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined **ppuStack_c8;
  undefined1 **ppuStack_c0;
  code *pcStack_b8;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined *puStack_98;
  undefined **ppuStack_90;
  long lStack_88;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  undefined **ppuStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110e89458;
  puVar4 = param_2;
  puStack_40 = param_2;
  _objc_retain(param_2);
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = &PTR____CFConstantStringClassReference_110e89438;
  ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(ppuVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    uStack_58 = 0x1059142b0;
    lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar5 = puVar4;
    puStack_60 = &stack0xfffffffffffffff0;
    _objc_retain(ppuVar6);
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    if (ppuVar6 == (undefined **)0x0) {
      _objc_retain(puVar4);
      puVar5 = puVar4;
      FUN_1059141d4(ppuVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar4;
      ppuVar2 = ppuVar1;
    }
    else {
      ppuStack_a8 = &PTR____CFConstantStringClassReference_110e89458;
      ppuStack_a0 = &PTR____CFConstantStringClassReference_110e89478;
      puStack_98 = puVar4;
      ppuStack_90 = ppuVar6;
      _objc_retain(puVar4);
      func_0x00010bf72080(puVar3);
      _objc_retainAutoreleasedReturnValue();
      ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
    }
    _objc_release(puVar3);
    ppuVar1 = ppuVar6;
    _objc_release(ppuVar6);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
      ___stack_chk_fail();
      pcStack_b8 = FUN_1059143dc;
      puStack_d0 = puVar4;
      ppuStack_c8 = ppuVar6;
      ppuStack_c0 = &puStack_60;
      _objc_retain(puVar5);
      puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_f0 = 0xc2000000;
      pcStack_e8 = FUN_105914468;
      puStack_e0 = &UNK_1108bfe58;
      puStack_d8 = puVar5;
      _objc_retain(puVar5);
      func_0x0001006372a4(ppuVar1,&puStack_f8);
      _objc_release(puStack_d8);
      _objc_release(puVar5);
      ppuVar2 = ppuVar1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 1059143dc; end: 105914467;  */

void FUN_1059143dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105914468;
  puStack_30 = &UNK_1108bfe58;
  uStack_28 = param_2;
  _objc_retain(param_2);
  func_0x0001006372a4(param_1,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105914468; end: 10591455b;  */

undefined8 FUN_105914468(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c0f67c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c115ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar2 = uVar1;
  func_0x00010c0720c0(uVar1);
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10591455c; end: 105914573;  */

void FUN_10591455c(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e0d2f8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e0d2f8,
                      &PTR____CFConstantStringClassReference_110e0d318,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 105914574; end: 1059145df;  */

ulong FUN_105914574(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bf1f440(param_1,param_2,&PTR____CFConstantStringClassReference_110e0d338,0,0);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010bf1f440(param_1,param_2,&PTR____CFConstantStringClassReference_110e0d358,0,0);
  }
  else {
    uVar1 = 1;
  }
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1059145e0; end: 1059145fb;  */

void FUN_1059145e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c14e3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126aebd8,PTR_s_scaleSensitiveWithUrl2x_url3x__112631308,
             &PTR____CFConstantStringClassReference_110e0d378,
             &PTR____CFConstantStringClassReference_110e0d398);
  return;
}



/* Entry: 1059145fc; end: 105914677;  */

undefined * FUN_1059145fc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c15b8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e0d3b8,
                        &UNK_10ddc1acc,&UNK_10ddc1aec,3,FUN_105914678,0);
    do {
      if (puRam00000001136c15b8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c15b8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c15b8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c15b8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c15b8;
}



/* Entry: 105914678; end: 105914683;  */

bool FUN_105914678(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 105914684; end: 1059146eb; +[SCIAPTokenPbEntitleConsumeItemRequest descriptor] */

void FUN_105914684(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c15c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a7ba10,
                        &PTR____CFConstantStringClassReference_110e0d3d8,&PTR_DAT_11310d5d8,
                        &PTR_s_id_p_11310d6f0,4,0x20,0x1c);
    puRam00000001136c15c0 = puVar1;
  }
  return;
}



/* Entry: 1059146ec; end: 105914753; +[SCIAPTokenPbEntitleConsumeItemResponse descriptor] */

void FUN_1059146ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c15c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a7ba60,
                        &PTR____CFConstantStringClassReference_110e0d3f8,&PTR_DAT_11310d5d8,0,0,4,
                        0x1c);
    puRam00000001136c15c8 = puVar1;
  }
  return;
}



/* Entry: 105914754; end: 1059147bb; +[SCIAPTokenPbEntitleAckConsumeItemRequest descriptor] */

void FUN_105914754(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c15d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a7bab0,
                        &PTR____CFConstantStringClassReference_110e0d418,&PTR_DAT_11310d5d8,
                        &PTR_s_id_p_11310d5f0,1,0x10,0x1c);
    puRam00000001136c15d0 = puVar1;
  }
  return;
}



/* Entry: 1059147bc; end: 105914823; +[SCIAPTokenPbEntitleAckConsumeItemResponse descriptor] */

void FUN_1059147bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c15d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a7bb00,
                        &PTR____CFConstantStringClassReference_110e0d438,&PTR_DAT_11310d5d8,0,0,4,
                        0x1c);
    puRam00000001136c15d8 = puVar1;
  }
  return;
}



/* Entry: 105914824; end: 10591488b; +[SCIAPTokenPbEntitleGetItemRequest descriptor] */

void FUN_105914824(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c15e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a7bb50,
                        &PTR____CFConstantStringClassReference_110e0d458,&PTR_DAT_11310d5d8,
                        &PTR_s_appId_11310d670,2,0x18,0x1c);
    puRam00000001136c15e0 = puVar1;
  }
  return;
}



/* Entry: 10591488c; end: 1059148f3; +[SCIAPTokenPbEntitleGetItemResponse descriptor] */

void FUN_10591488c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c15e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a7bba0,
                        &PTR____CFConstantStringClassReference_110e0d478,&PTR_DAT_11310d5d8,
                        &PTR_s_item_11310d610,1,0x10,0x1c);
    puRam00000001136c15e8 = puVar1;
  }
  return;
}



/* Entry: 1059148f4; end: 10591495b; +[SCIAPTokenPbEntitleGetItemsRequest descriptor] */

void FUN_1059148f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c15f0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a7bbf0,
                        &PTR____CFConstantStringClassReference_110e019b8,&PTR_DAT_11310d5d8,
                        &PTR_s_appId_11310d630,1,0x10,0x1c);
    puRam00000001136c15f0 = puVar1;
  }
  return;
}



/* Entry: 10591495c; end: 1059149c3; +[SCIAPTokenPbEntitleGetItemsResponse descriptor] */

void FUN_10591495c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c15f8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a7bc40,
                        &PTR____CFConstantStringClassReference_110e019f8,&PTR_DAT_11310d5d8,
                        &PTR_s_itemsArray_11310d650,1,0x10,0x1c);
    puRam00000001136c15f8 = puVar1;
  }
  return;
}



/* Entry: 1059149c4; end: 105914a2b; +[SCIAPTokenPbEntitleClearInventoryRequest descriptor] */

void FUN_1059149c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1600 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a7bc90,
                        &PTR____CFConstantStringClassReference_110e0d498,&PTR_DAT_11310d5d8,
                        &PTR_s_appId_11310d6b0,2,0x18,0x1c);
    puRam00000001136c1600 = puVar1;
  }
  return;
}



/* Entry: 105914a2c; end: 105914a93; +[SCIAPTokenPbEntitleClearInventoryResponse descriptor] */

void FUN_105914a2c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1608 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a7bce0,
                        &PTR____CFConstantStringClassReference_110e0d4b8,&PTR_DAT_11310d5d8,0,0,4,
                        0x1c);
    puRam00000001136c1608 = puVar1;
  }
  return;
}



/* Entry: 105914a94; end: 105914afb; +[SCIAPTokenPbEntitleItem descriptor] */

void FUN_105914a94(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1610 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a7bd30,
                        &PTR____CFConstantStringClassReference_110dd6618,&PTR_DAT_11310d5d8,
                        &PTR_s_id_p_11310d770,6,0x30,0x1c);
    puRam00000001136c1610 = puVar1;
  }
  return;
}



/* Entry: 105914afc; end: 105914b63; +[SCIAPTokenPbOrderOrderRequest descriptor] */

void FUN_105914afc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1618 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a7bdd0,
                        &PTR____CFConstantStringClassReference_110e0d4d8,&PTR_DAT_11310d830,
                        &PTR_s_id_p_11310d948,3,0x18,0x1c);
    puRam00000001136c1618 = puVar1;
  }
  return;
}



/* Entry: 105914b64; end: 105914bcb; +[SCIAPTokenPbOrderOrderResponse descriptor] */

void FUN_105914b64(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1620 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a7be20,
                        &PTR____CFConstantStringClassReference_110e0d4f8,&PTR_DAT_11310d830,
                        &PTR_s_order_11310d8c8,2,0x18,0x1c);
    puRam00000001136c1620 = puVar1;
  }
  return;
}



/* Entry: 105914bcc; end: 105914c33; +[SCIAPTokenPbOrderConsumeOrderRequest descriptor] */

void FUN_105914bcc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1628 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a7be70,
                        &PTR____CFConstantStringClassReference_110e0d518,&PTR_DAT_11310d830,
                        &PTR_s_orderId_11310d848,1,0x10,0x1c);
    puRam00000001136c1628 = puVar1;
  }
  return;
}



/* Entry: 105914c34; end: 105914c9b; +[SCIAPTokenPbOrderConsumeOrderResponse descriptor] */

void FUN_105914c34(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1630 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a7bec0,
                        &PTR____CFConstantStringClassReference_110e0d538,&PTR_DAT_11310d830,0,0,4,
                        0x1c);
    puRam00000001136c1630 = puVar1;
  }
  return;
}



/* Entry: 105914c9c; end: 105914d03; +[SCIAPTokenPbOrderGetUnconsumedOrdersRequest descriptor] */

void FUN_105914c9c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1638 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a7bf10,
                        &PTR____CFConstantStringClassReference_110e0d558,&PTR_DAT_11310d830,
                        &PTR_s_appId_11310d868,1,0x10,0x1c);
    puRam00000001136c1638 = puVar1;
  }
  return;
}



/* Entry: 105914d04; end: 105914d6b; +[SCIAPTokenPbOrderGetUnconsumedOrdersResponse descriptor] */

void FUN_105914d04(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1640 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a7bf60,
                        &PTR____CFConstantStringClassReference_110e0d578,&PTR_DAT_11310d830,
                        &PTR_s_ordersArray_11310d888,1,0x10,0x1c);
    puRam00000001136c1640 = puVar1;
  }
  return;
}



/* Entry: 105914d6c; end: 105914dd3; +[SCIAPTokenPbOrderListItemsRequest descriptor] */

void FUN_105914d6c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1648 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a7bfb0,
                        &PTR____CFConstantStringClassReference_110debbd8,&PTR_DAT_11310d830,
                        &PTR_s_appId_11310d908,2,0x18,0x1c);
    puRam00000001136c1648 = puVar1;
  }
  return;
}



/* Entry: 105914dd4; end: 105914eb7; +[SCIAPTokenPbOrderListItemsResponse descriptor] */

void FUN_105914dd4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1650 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a7c000,
                        &PTR____CFConstantStringClassReference_110debbf8,&PTR_DAT_11310d830,
                        &PTR_s_itemsArray_11310d8a8,1,0x10,0x1c);
    puRam00000001136c1650 = puVar1;
  }
  return;
}



/* Entry: 105914eb8; end: 105914ec3;  */

bool FUN_105914eb8(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 105914ec4; end: 105914f3f; +[SCIAPTokenPbOrderItem descriptor] */

undefined * FUN_105914ec4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1660 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a7c0a0,
                        &PTR____CFConstantStringClassReference_110dd6618,&PTR_DAT_11310d9a8,
                        &PTR_s_id_p_11310da80,10,0x48,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c1660 = puVar1;
  }
  return puRam00000001136c1660;
}



/* Entry: 105914f40; end: 105914fa7; +[SCIAPTokenPbOrderOrderRecord descriptor] */

void FUN_105914f40(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1668 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a7c0f0,
                        &PTR____CFConstantStringClassReference_110e0d5b8,&PTR_DAT_11310d9a8,
                        &PTR_s_id_p_11310d9e0,5,0x28,0x1c);
    puRam00000001136c1668 = puVar1;
  }
  return;
}



/* Entry: 105914fa8; end: 10591500f; +[SCIAPTokenPbOrderBalance descriptor] */

void FUN_105914fa8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1670 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a7c140,
                        &PTR____CFConstantStringClassReference_110e0d5d8,&PTR_DAT_11310d9a8,
                        &PTR_s_total_11310d9c0,1,0x10,0x1c);
    puRam00000001136c1670 = puVar1;
  }
  return;
}



/* Entry: 105915010; end: 105915077; +[SCIAPTokenPbPurchaseRequest descriptor] */

void FUN_105915010(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1678 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a7c1e0,
                        &PTR____CFConstantStringClassReference_110e0d5f8,&PTR_DAT_11310dbc0,
                        &PTR_DAT_11310dd18,3,0x20,0x1c);
    puRam00000001136c1678 = puVar1;
  }
  return;
}



/* Entry: 105915078; end: 1059150df; +[SCIAPTokenPbPurchaseResponse descriptor] */

void FUN_105915078(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1680 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a7c230,
                        &PTR____CFConstantStringClassReference_110e0d618,&PTR_DAT_11310dbc0,
                        &PTR_DAT_11310dc98,2,0x18,0x1c);
    puRam00000001136c1680 = puVar1;
  }
  return;
}



/* Entry: 1059150e0; end: 105915147; +[SCIAPTokenPbGetTokenPacksRequest descriptor] */

void FUN_1059150e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1688 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a7c280,
                        &PTR____CFConstantStringClassReference_110e0d638,&PTR_DAT_11310dbc0,
                        &PTR_DAT_11310dbd8,1,8,0x1c);
    puRam00000001136c1688 = puVar1;
  }
  return;
}



/* Entry: 105915148; end: 1059151af; +[SCIAPTokenPbGetTokenPacksResponse descriptor] */

void FUN_105915148(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1690 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a7c2d0,
                        &PTR____CFConstantStringClassReference_110e0d658,&PTR_DAT_11310dbc0,
                        &PTR_DAT_11310dbf8,1,0x10,0x1c);
    puRam00000001136c1690 = puVar1;
  }
  return;
}



/* Entry: 1059151b0; end: 105915217; +[SCIAPTokenPbGetPromotionsRequest descriptor] */

void FUN_1059151b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1698 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a7c320,
                        &PTR____CFConstantStringClassReference_110e0d678,&PTR_DAT_11310dbc0,
                        &PTR_s_locale_11310dcd8,2,0x10,0x1c);
    puRam00000001136c1698 = puVar1;
  }
  return;
}



/* Entry: 105915218; end: 10591527f; +[SCIAPTokenPbGetPromotionsResponse descriptor] */

void FUN_105915218(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c16a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a7c370,
                        &PTR____CFConstantStringClassReference_110e0d698,&PTR_DAT_11310dbc0,
                        &PTR_DAT_11310dc18,1,0x10,0x1c);
    puRam00000001136c16a0 = puVar1;
  }
  return;
}



/* Entry: 105915280; end: 1059152e7; +[SCIAPTokenPbAcceptPromotionRequest descriptor] */

void FUN_105915280(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c16a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a7c3c0,
                        &PTR____CFConstantStringClassReference_110e0d6b8,&PTR_DAT_11310dbc0,
                        &PTR_DAT_11310dc38,1,0x10,0x1c);
    puRam00000001136c16a8 = puVar1;
  }
  return;
}



/* Entry: 1059152e8; end: 10591534f; +[SCIAPTokenPbAcceptPromotionResponse descriptor] */

void FUN_1059152e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c16b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a7c410,
                        &PTR____CFConstantStringClassReference_110e0d6d8,&PTR_DAT_11310dbc0,
                        &PTR_DAT_11310dc58,1,0x10,0x1c);
    puRam00000001136c16b0 = puVar1;
  }
  return;
}



/* Entry: 105915350; end: 1059153b7; +[SCIAPTokenPbGetBalanceRequest descriptor] */

void FUN_105915350(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c16b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a7c460,
                        &PTR____CFConstantStringClassReference_110e0d6f8,&PTR_DAT_11310dbc0,0,0,4,
                        0x1c);
    puRam00000001136c16b8 = puVar1;
  }
  return;
}



/* Entry: 1059153b8; end: 10591549b; +[SCIAPTokenPbGetBalanceResponse descriptor] */

void FUN_1059153b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c16c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a7c4b0,
                        &PTR____CFConstantStringClassReference_110e0d718,&PTR_DAT_11310dbc0,
                        &PTR_DAT_11310dc78,1,0x10,0x1c);
    puRam00000001136c16c0 = puVar1;
  }
  return;
}



/* Entry: 10591549c; end: 1059154a7;  */

bool FUN_10591549c(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 1059154a8; end: 105915523;  */

undefined * FUN_1059154a8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c16d0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e0d758,
                        &UNK_10ddc1b7c,&UNK_10ddc1bb0,3,FUN_105915524,0);
    do {
      if (puRam00000001136c16d0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c16d0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c16d0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c16d0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c16d0;
}



/* Entry: 105915524; end: 10591552f;  */

bool FUN_105915524(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 105915530; end: 105915597; +[SCIAPTokenPbShopInAppReceipt descriptor] */

void FUN_105915530(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c16d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a7c550,
                        &PTR____CFConstantStringClassReference_110e0d778,&PTR_DAT_11310dd78,
                        &PTR_s_provider_11310de70,4,0x20,0x1c);
    puRam00000001136c16d8 = puVar1;
  }
  return;
}



/* Entry: 105915598; end: 1059155ff; +[SCIAPTokenPbShopPrice descriptor] */

void FUN_105915598(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c16e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a7c5a0,
                        &PTR____CFConstantStringClassReference_110e0d798,&PTR_DAT_11310dd78,
                        &PTR_DAT_11310ddd0,2,0x18,0x1c);
    puRam00000001136c16e0 = puVar1;
  }
  return;
}



/* Entry: 105915600; end: 105915667; +[SCIAPTokenPbShopCountry descriptor] */

void FUN_105915600(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c16e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a7c5f0,
                        &PTR____CFConstantStringClassReference_110e0d7b8,&PTR_DAT_11310dd78,
                        &PTR_s_code_11310dd90,1,0x10,0x1c);
    puRam00000001136c16e8 = puVar1;
  }
  return;
}



/* Entry: 105915668; end: 1059156cf; +[SCIAPTokenPbShopBalance descriptor] */

void FUN_105915668(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c16f0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a7c640,
                        &PTR____CFConstantStringClassReference_110e0d5d8,&PTR_DAT_11310dd78,
                        &PTR_s_total_11310ddb0,1,0x10,0x1c);
    puRam00000001136c16f0 = puVar1;
  }
  return;
}



/* Entry: 1059156d0; end: 10591574b; +[SCIAPTokenPbShopTokenPack descriptor] */

undefined * FUN_1059156d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c16f8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a7c690,
                        &PTR____CFConstantStringClassReference_110e0d7d8,&PTR_DAT_11310dd78,
                        &PTR_s_sku_11310de10,3,0x18,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c16f8 = puVar1;
  }
  return puRam00000001136c16f8;
}



/* Entry: 10591574c; end: 1059157b3; +[SCIAPTokenPbShopPromotion descriptor] */

void FUN_10591574c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1700 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a7c6e0,
                        &PTR____CFConstantStringClassReference_110e0d7f8,&PTR_DAT_11310dd78,
                        &PTR_s_id_p_11310def0,6,0x30,0x1c);
    puRam00000001136c1700 = puVar1;
  }
  return;
}



/* Entry: 1059157b4; end: 10591585f; -[SCPreviewLegacyServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1059157b4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126c0200;
  _objc_alloc(PTR_PTR_1126c0200);
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1 + _DAT_11272c230;
    _objc_loadWeakRetained(lVar4);
  }
  lVar2 = lVar4;
  func_0x00010c08ef00(lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c010700(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar4);
  if (param_1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + _DAT_11272c234);
  }
  func_0x00010bf9d660(uVar3,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105915860; end: 1059158a7; -[SCPreviewLegacyServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105915860(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272c234,0);
  _objc_destroyWeak(param_1 + _DAT_11272c230);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272c22c);
  return;
}



/* Entry: 1059158a8; end: 10591592b; -[SCPreferences imageSnapTime] */

void FUN_1059158a8(undefined **param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110e0d818);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  ppuVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  ppuVar1 = param_1;
  if (((ulong)ppuVar3 & 1) == 0) {
    ppuVar1 = (undefined **)0x0;
  }
  _objc_retain(ppuVar1);
  _objc_release(param_1);
  ppuVar3 = &PTR__OBJC_CLASS___NSConstantFloatNumber_111186280;
  if (ppuVar1 != (undefined **)0x0) {
    ppuVar3 = ppuVar1;
  }
  _objc_retain(ppuVar3);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 10591592c; end: 1059159af; -[SCPreferences videoSnapTime] */

void FUN_10591592c(undefined **param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110e0d838);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  ppuVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  ppuVar1 = param_1;
  if (((ulong)ppuVar3 & 1) == 0) {
    ppuVar1 = (undefined **)0x0;
  }
  _objc_retain(ppuVar1);
  _objc_release(param_1);
  ppuVar3 = &PTR__OBJC_CLASS___NSConstantFloatNumber_111186280;
  if (ppuVar1 != (undefined **)0x0) {
    ppuVar3 = ppuVar1;
  }
  _objc_retain(ppuVar3);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 1059159b0; end: 105915a33; -[SCPreferences batchCaptureImageDefaultSnapTime] */

void FUN_1059159b0(undefined **param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110e0d858);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  ppuVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  ppuVar1 = param_1;
  if (((ulong)ppuVar3 & 1) == 0) {
    ppuVar1 = (undefined **)0x0;
  }
  _objc_retain(ppuVar1);
  _objc_release(param_1);
  ppuVar3 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_1111843b0;
  if (ppuVar1 != (undefined **)0x0) {
    ppuVar3 = ppuVar1;
  }
  _objc_retain(ppuVar3);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 105915a34; end: 105915a3f; -[SCPreferences setImageSnapTime:] */

void FUN_105915a34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setObject_forKey__112651b80,param_3,
             &PTR____CFConstantStringClassReference_110e0d818);
  return;
}



/* Entry: 105915a40; end: 105915a4b; -[SCPreferences setVideoSnapTime:] */

void FUN_105915a40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setObject_forKey__112651b80,param_3,
             &PTR____CFConstantStringClassReference_110e0d838);
  return;
}



/* Entry: 105915a4c; end: 105915a57; -[SCPreferences setBatchCaptureImageDefaultSnapTime:] */

void FUN_105915a4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setObject_forKey__112651b80,param_3,
             &PTR____CFConstantStringClassReference_110e0d858);
  return;
}



/* Entry: 105915a58; end: 105915aa7; -[SCPreferences clearTimePreferences] */

/* WARNING: Possible PIC construction at 0x000105915a74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105915a78) */

void FUN_105915a58(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setObject_forKey__112651b80,0,
             &PTR____CFConstantStringClassReference_110e0d818);
  return;
}



/* Entry: 105915aa8; end: 105915b17; -[SCUserPreferenceTimeProviderEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105915aa8(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272c238);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3c3a0();
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1126eae58;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105915b18; end: 105915b6f; -[SCUserPreferenceTimeProviderEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105915b18(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272c23c,0);
  _objc_destroyWeak(param_1 + _DAT_11272c244);
  _objc_destroyWeak(param_1 + _DAT_11272c240);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272c238,0);
  return;
}



/* Entry: 105915b70; end: 105915bd7; -[SCUserPreferenceTimeProviderImpl imageSnapTime] */

void FUN_105915b70(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c1067a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfe8c00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105915bd8; end: 105915c3f; -[SCUserPreferenceTimeProviderImpl videoSnapTime] */

void FUN_105915bd8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c1067a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c29b300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105915c40; end: 105915ca7; -[SCUserPreferenceTimeProviderImpl batchCaptureImageDefaultSnapTime] */

void FUN_105915c40(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c1067a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf16a00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105915ca8; end: 105915d17; -[SCUserPreferenceTimeProviderImpl setImageSnapTime:] */

void FUN_105915ca8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c1067a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1aa9e0();
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105915d18; end: 105915d87; -[SCUserPreferenceTimeProviderImpl setVideoSnapTime:] */

void FUN_105915d18(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c1067a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c221fc0();
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105915d88; end: 105915df7; -[SCUserPreferenceTimeProviderImpl setBatchCaptureImageDefaultSnapTime:] */

void FUN_105915d88(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c1067a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16f660();
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105915df8; end: 105915e43; -[SCUserPreferenceTimeProviderImpl clearTimePreferences] */

void FUN_105915df8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c1067a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3c3a0();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105915e44; end: 105915e4f; -[SCUserPreferenceTimeProviderImpl .cxx_destruct] */

void FUN_105915e44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105915e50; end: 105915fa3; -[SCPreviewCameraRollSnapSaver initWithSnapSavingService:directories:backgroundTaskWrapper:memoriesSaveLogger:memoriesLegacySaveLogger:watermarkGenerator:] */

undefined1 *
FUN_105915e50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126eae68;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105915fa4; end: 10591644f; -[SCPreviewCameraRollSnapSaver saveVideo:mediaId:saveSessionId:completion:] */

void FUN_105915fa4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined *puStack_1d0;
  long lStack_1c8;
  undefined **ppuStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  code *pcStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined **ppuStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined **ppuStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 *puStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar2 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_2 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a7240(lVar3);
  uVar6 = uVar5;
  func_0x00010bf17d00();
  _CACurrentMediaTime();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_105916450;
  uStack_88 = 0x105916460;
  uStack_80 = 0;
  uStack_c8 = 0;
  uVar11 = 0x2020000000;
  uStack_b8 = 0x2020000000;
  uStack_b0 = 0;
  uStack_e8 = 0;
  uStack_d8 = 0x2020000000;
  uStack_d0 = 0;
  puStack_140 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_138 = 0xc2000000;
  pcStack_130 = FUN_105916468;
  puStack_128 = &UNK_1108bfee8;
  puStack_e0 = &uStack_e8;
  puStack_c0 = &uStack_c8;
  _objc_retain(uVar4);
  uStack_120 = uVar4;
  _objc_retain(lVar3);
  lStack_118 = lVar3;
  puStack_108 = &uStack_e8;
  puStack_100 = &uStack_c8;
  uStack_f0 = param_1;
  _objc_retain(param_6);
  puStack_f8 = &uStack_a8;
  ppuVar7 = &puStack_140;
  uStack_110 = param_6;
  _objc_retainBlock();
  puStack_188 = puVar1;
  uStack_180 = 0xc2000000;
  pcStack_178 = FUN_105916698;
  puStack_170 = &UNK_1108bff18;
  _objc_retain(param_6);
  uStack_168 = param_6;
  _objc_retain(ppuVar7);
  ppuStack_158 = ppuVar7;
  _objc_retain(param_7);
  uStack_150 = param_7;
  _objc_retain(uVar5);
  ppuVar8 = &puStack_188;
  uStack_160 = uVar5;
  uStack_148 = uVar6;
  _objc_retainBlock();
  puStack_1b8 = puVar1;
  uStack_1b0 = 0xc2000000;
  pcStack_1a8 = FUN_1059166f4;
  puStack_1a0 = &UNK_1108bff78;
  _objc_retain(uVar2);
  uStack_198 = uVar2;
  _objc_retain(ppuVar8);
  ppuVar9 = &puStack_1b8;
  ppuStack_190 = ppuVar8;
  _objc_retainBlock();
  lVar10 = param_2;
  func_0x00010bdd9940();
  if ((int)lVar10 == 0) {
    _CACurrentMediaTime();
    puStack_c0[3] = uVar11;
    _objc_retain(lVar3);
    _objc_retain(ppuVar8);
    _objc_retain(ppuVar9);
    func_0x00010bfae700(param_4);
    _objc_release(ppuVar9);
    _objc_release(ppuVar8);
    param_2 = lVar3;
  }
  else {
    func_0x00010be631e0();
    uVar6 = param_4;
    func_0x00010c29ae80(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9d2e0();
    _objc_release(uVar6);
    _CACurrentMediaTime();
    puStack_e0[3] = uVar11;
    func_0x00010c0a7220(lVar3);
    puStack_1e8 = puVar1;
    uStack_1e0 = 0xc2000000;
    uStack_1d8 = 0x1059167ac;
    puStack_1d0 = &UNK_11084aaa8;
    _objc_retain(ppuVar9);
    ppuStack_1c0 = ppuVar9;
    _objc_retain(param_2);
    lStack_1c8 = param_2;
    func_0x0001000d76cc("APPSTORE",&puStack_1e8);
    _objc_release(lStack_1c8);
    _objc_release(ppuStack_1c0);
  }
  _objc_release(param_2);
  _objc_release(ppuVar9);
  _objc_release(ppuStack_190);
  _objc_release(uStack_198);
  _objc_release(ppuVar8);
  _objc_release(uStack_160);
  _objc_release(uStack_150);
  _objc_release(ppuStack_158);
  _objc_release(uStack_168);
  _objc_release(ppuVar7);
  _objc_release(uStack_110);
  _objc_release(lStack_118);
  _objc_release(uStack_120);
  __Block_object_dispose(&uStack_e8,8);
  __Block_object_dispose(&uStack_c8,8);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(uVar2);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 105916450; end: 105916467;  */

void FUN_105916450(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105916468; end: 1059165ab;  */

void FUN_105916468(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  uVar2 = param_2;
  FUN_1059165ac();
  if ((int)uVar2 != 0) {
    func_0x00010c0a71c0(*(undefined8 *)(param_1 + 0x20));
  }
  func_0x00010c0a7260(*(undefined8 *)(param_1 + 0x28));
  _CACurrentMediaTime();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  _objc_retain(param_2);
  func_0x00010c13ed80(uVar2);
  _objc_release(param_2);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 1059165ac; end: 10591660f;  */

bool FUN_1059165ac(long param_1)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain();
  if (param_1 == 0) {
    bVar1 = false;
  }
  else {
    lVar2 = param_1;
    func_0x00010bf3ec40();
    if (lVar2 == -0x2e1f) {
      bVar1 = true;
    }
    else {
      lVar2 = param_1;
      func_0x00010bf3ec40(param_1);
      bVar1 = lVar2 == 0x280;
    }
  }
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 105916610; end: 105916697;  */

void FUN_105916610(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(param_2);
    func_0x00010c0a2380(uVar1);
    func_0x00010bf73f80(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  return;
}



/* Entry: 105916698; end: 1059166f3;  */

void FUN_105916698(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),param_2);
  lVar1 = *(long *)(param_1 + 0x38);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_2);
  }
  func_0x00010bf94260(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1059166f4; end: 105916797;  */

void FUN_1059166f4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  func_0x00010c14b000(uVar1);
  _objc_release(uVar2);
  return;
}



/* Entry: 105916798; end: 1059167c7;  */

void FUN_105916798(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001059167a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),param_2,*(undefined1 *)(param_1 + 0x28));
  return;
}



/* Entry: 1059167c8; end: 10591691b;  */

void FUN_1059167c8(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0a7220(*(undefined8 *)(param_2 + 0x20));
  lVar2 = *(long *)(*(long *)(param_2 + 0x38) + 8);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(long *)(lVar2 + 0x28) = param_4;
  _objc_release(uVar1);
  _CACurrentMediaTime();
  *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x40) + 8) + 0x18) = param_1;
  if (param_4 == 0) {
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_105916930;
    puStack_78 = &UNK_11084aaa8;
    uVar1 = *(undefined8 *)(param_2 + 0x30);
    _objc_retain(uVar1);
    uStack_68 = uVar1;
    _objc_retain(param_3);
    uStack_70 = param_3;
    func_0x0001000d76cc("APPSTORE",&puStack_90);
    _objc_release(uStack_70);
    uVar1 = uStack_68;
  }
  else {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_10591691c;
    puStack_48 = &UNK_11084aaa8;
    uVar1 = *(undefined8 *)(param_2 + 0x28);
    _objc_retain(uVar1);
    uStack_38 = uVar1;
    _objc_retain(param_4);
    lStack_40 = param_4;
    func_0x000100162d98("APPSTORE",&puStack_60);
    _objc_release(lStack_40);
    uVar1 = uStack_38;
  }
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10591691c; end: 10591692f;  */

void FUN_10591691c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010591692c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),1);
  return;
}



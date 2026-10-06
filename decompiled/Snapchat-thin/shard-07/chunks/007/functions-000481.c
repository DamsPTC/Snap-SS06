/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10590e3a8; end: 10590e3cf; -[SCIAPTokenItemOrderServiceImplementation consumeOrderUpdateObservable] */

void FUN_10590e3a8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10590e3d0; end: 10590e3f7; -[SCIAPTokenItemOrderServiceImplementation getUnconsumedOrdersUpdateObservable] */

void FUN_10590e3d0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10590e3f8; end: 10590e41f; -[SCIAPTokenItemOrderServiceImplementation itemOrderConfirmedUpdateObservable] */

void FUN_10590e3f8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10590e420; end: 10590e4f7; -[SCIAPTokenItemOrderServiceImplementation listItemsWithAppId:] */

void FUN_10590e420(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
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



/* Entry: 10590e4f8; end: 10590e533;  */

void FUN_10590e4f8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be4c580(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10590e534; end: 10590e60b; -[SCIAPTokenItemOrderServiceImplementation orderItemWithItemId:] */

void FUN_10590e534(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
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



/* Entry: 10590e60c; end: 10590e647;  */

void FUN_10590e60c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be6e340(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10590e648; end: 10590e71f; -[SCIAPTokenItemOrderServiceImplementation consumeOrderWithOrderId:] */

void FUN_10590e648(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
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



/* Entry: 10590e720; end: 10590e75b;  */

void FUN_10590e720(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bde7140(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10590e75c; end: 10590e833; -[SCIAPTokenItemOrderServiceImplementation getUnconsumedOrdersWithAppId:] */

void FUN_10590e75c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
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



/* Entry: 10590e834; end: 10590e86f;  */

void FUN_10590e834(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be23880(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10590e870; end: 10590e99f; -[SCIAPTokenItemOrderServiceImplementation itemOrderConfirmedWithAppId:forSku:orderId:] */

void FUN_10590e870(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10590e9a0; end: 10590ea03;  */

void FUN_10590e9a0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126c0128;
    func_0x00010c261660(PTR_PTR_1126c0128,param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(*(undefined8 *)(lVar1 + 0x30),param_2,puVar2);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10590ea04; end: 10590eba7; -[SCIAPTokenItemOrderServiceImplementation _listItemsWithAppId:] */

void FUN_10590ea04(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c08fa60();
  puVar5 = PTR_PTR_1126c0130;
  if (lVar2 == 0) {
    func_0x00010bf9fec0(PTR_PTR_1126c0130);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x38));
  }
  else {
    func_0x00010c251ec0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x38));
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c106d20(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_initWeak(auStack_48,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c11de00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    func_0x00010c09a160(uVar1);
    _objc_release(uVar3);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_release(uVar4);
  }
  _objc_release(puVar5);
  _objc_release(param_3);
  return;
}



/* Entry: 10590eba8; end: 10590ecdb;  */

void FUN_10590eba8(long param_1,int param_2,long param_3,undefined *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) goto LAB_10590ecb4;
  if (param_2 == 0) {
    _objc_retain(param_4);
    uVar5 = 0x44f;
    puVar4 = param_4;
LAB_10590ec58:
    func_0x0001059142b0(uVar5,*(undefined8 *)(param_1 + 0x20),puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126c0130;
    func_0x00010bf9fec0(PTR_PTR_1126c0130);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(*(undefined8 *)(lVar1 + 0x38));
    _objc_release(puVar6);
    _objc_release(uVar5);
  }
  else {
    lVar2 = param_3;
    func_0x00010bf529e0();
    lVar3 = param_3;
    func_0x00010bf529e0();
    if (lVar2 == 0) {
      uVar5 = 0x44e;
      if (lVar3 != 0) {
        uVar5 = 0;
      }
      puVar4 = (undefined *)0x0;
      goto LAB_10590ec58;
    }
    puVar4 = PTR_PTR_1126c0130;
    func_0x00010c261680(PTR_PTR_1126c0130);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(*(undefined8 *)(lVar1 + 0x38));
  }
  _objc_release(puVar4);
LAB_10590ecb4:
  _objc_release(lVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10590ecdc; end: 10590ee53; -[SCIAPTokenItemOrderServiceImplementation _orderItemWithItemId:] */

void FUN_10590ecdc(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c08fa60();
  puVar4 = PTR_PTR_1126c0138;
  if (lVar2 == 0) {
    func_0x00010bf9ff20(PTR_PTR_1126c0138);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x40));
  }
  else {
    func_0x00010c251f00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x40));
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x48));
    _objc_initWeak(auStack_48,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c11de00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    func_0x00010c0ecb60(uVar1);
    _objc_release(uVar3);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(puVar4);
  _objc_release(param_3);
  return;
}



/* Entry: 10590ee54; end: 10590efaf;  */

void FUN_10590ee54(long param_1,uint param_2,undefined8 param_3,long param_4,undefined *param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if ((param_2 == 0) || (param_4 == 0)) {
      uVar3 = 0x44e;
      if ((param_2 & param_4 == 0) == 0) {
        uVar3 = 0;
      }
      if ((param_2 & 1) == 0) {
        _objc_retain(param_5);
        uVar3 = 0x44f;
        puVar2 = param_5;
      }
      else {
        puVar2 = (undefined *)0x0;
      }
      func_0x0001059142b0(uVar3,*(undefined8 *)(param_1 + 0x20),puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126c0138;
      func_0x00010bf9ff20(PTR_PTR_1126c0138);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(*(undefined8 *)(lVar1 + 0x40));
      func_0x00010c12d360(*(undefined8 *)(lVar1 + 0x48));
      _objc_release(puVar4);
      _objc_release(uVar3);
    }
    else {
      puVar2 = PTR_PTR_1126c0138;
      func_0x00010c2616c0(PTR_PTR_1126c0138);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(*(undefined8 *)(lVar1 + 0x40));
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



/* Entry: 10590efb0; end: 10590f0f3; -[SCIAPTokenItemOrderServiceImplementation _consumeOrderWithOrderId:] */

void FUN_10590efb0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    puVar4 = PTR_PTR_1126c0140;
    func_0x00010bf9ff40(PTR_PTR_1126c0140);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20));
    _objc_release(puVar4);
  }
  else {
    _objc_initWeak(auStack_38,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c11de00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    func_0x00010bf499e0(uVar1);
    _objc_release(uVar3);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10590f0f4; end: 10590f1cf;  */

void FUN_10590f0f4(long param_1,ulong param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    if ((param_2 & 1) == 0) {
      puVar1 = (undefined *)0x0;
      func_0x0001059142b0(0,&PTR____CFConstantStringClassReference_110daafd8,param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_PTR_1126c0140;
      func_0x00010bf9ff40(PTR_PTR_1126c0140);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20));
      _objc_release(puVar2);
    }
    else {
      puVar1 = PTR_PTR_1126c0140;
      func_0x00010c2616e0(PTR_PTR_1126c0140);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20));
    }
    _objc_release(puVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10590f1d0; end: 10590f313; -[SCIAPTokenItemOrderServiceImplementation _getUnconsumedOrdersWithAppId:] */

void FUN_10590f1d0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    puVar4 = PTR_PTR_1126c0148;
    func_0x00010bf9fec0(PTR_PTR_1126c0148);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x28));
    _objc_release(puVar4);
  }
  else {
    _objc_initWeak(auStack_38,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c11de00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    func_0x00010bfcba00(uVar1);
    _objc_release(uVar3);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10590f314; end: 10590f40f;  */

void FUN_10590f314(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    if ((param_2 & 1) == 0) {
      puVar1 = (undefined *)0x0;
      func_0x0001059142b0(0,&PTR____CFConstantStringClassReference_110daafd8,param_4);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_PTR_1126c0148;
      func_0x00010bf9fec0(PTR_PTR_1126c0148);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x28));
      _objc_release(puVar2);
    }
    else {
      puVar1 = PTR_PTR_1126c0148;
      func_0x00010c2616a0(PTR_PTR_1126c0148);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x28));
    }
    _objc_release(puVar1);
  }
  _objc_release(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10590f410; end: 10590f493; -[SCIAPTokenItemOrderServiceImplementation .cxx_destruct] */

void FUN_10590f410(long param_1)

{
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



/* Entry: 10590f494; end: 10590f60b; -[SCIAPTokenOrderGRPCServiceImpl initWithPerformerProvider:grpcClientFactory:] */

undefined1 *
FUN_10590f494(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126eae38;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010c0f9920();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126ae728;
    func_0x00010bf24820(PTR_PTR_1126ae728);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c196320();
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c1eeba0(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c214be0(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c17ca40(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar2 = param_4;
    func_0x00010bf56360(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126c0150;
    _objc_alloc();
    func_0x00010c058f80();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar4;
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(puVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10590f60c; end: 10590f7a7; -[SCIAPTokenOrderGRPCServiceImpl listItemsWithAppId:locale:completionQueue:completionBlock:] */

void FUN_10590f60c(long param_1,undefined8 param_2,long param_3,long param_4,undefined *param_5,
                  undefined *param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar2 = PTR___dispatch_main_q_11034be20;
  if ((param_5 == (undefined *)0x0) && (param_6 != (undefined *)0x0)) {
    _objc_retain(PTR___dispatch_main_q_11034be20);
    param_5 = puVar2;
  }
  lVar1 = param_3;
  func_0x00010c08fa60();
  if ((lVar1 == 0) || (lVar1 = param_4, func_0x00010c08fa60(), lVar1 == 0)) {
    if (param_6 == (undefined *)0x0) goto LAB_10590f770;
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_10590f7a8;
    puStack_50 = &UNK_110849530;
    _objc_retain(param_6);
    puStack_48 = param_6;
    func_0x00010007380c(param_5,&puStack_68);
    puVar2 = puStack_48;
  }
  else {
    puVar2 = PTR_PTR_1126c0158;
    _objc_opt_new(PTR_PTR_1126c0158);
    func_0x00010c168ae0();
    func_0x00010c1bf3e0(puVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    _objc_retain(param_6);
    _objc_retain(param_5);
    func_0x00010c09a180(uVar3);
    _objc_release(param_5);
    _objc_release(param_6);
  }
  _objc_release(puVar2);
LAB_10590f770:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10590f7a8; end: 10590f7bf;  */

void FUN_10590f7a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010590f7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0,0);
  return;
}



/* Entry: 10590f7c0; end: 10590f93b;  */

void FUN_10590f7c0(long param_1,undefined *param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar4 = *(undefined **)(param_1 + 0x28);
  if (puVar4 != (undefined *)0x0) {
    if ((param_2 == (undefined *)0x0) || (param_3 != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0xc2000000;
      uStack_90 = 0x10590fb34;
      puStack_88 = &UNK_11084aaa8;
      _objc_retain(puVar4);
      puStack_78 = puVar4;
      _objc_retain(param_3);
      lStack_80 = param_3;
      func_0x00010007380c(uVar3,&puStack_a0);
      _objc_release(lStack_80);
      puVar4 = puStack_78;
    }
    else {
      puVar2 = param_2;
      func_0x00010c085000();
      puVar4 = PTR____NSArray0__struct_11034ab48;
      if (puVar2 != (undefined *)0x0) {
        puVar2 = param_2;
        func_0x00010c084fe0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar2;
        func_0x000100504554();
        _objc_release(puVar2);
      }
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0xc2000000;
      pcStack_60 = FUN_10590fb1c;
      puStack_58 = &UNK_11084aaa8;
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      uVar1 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(uVar1);
      puStack_50 = puVar4;
      uStack_48 = uVar1;
      _objc_retain(puVar4);
      func_0x00010007380c(uVar3,&puStack_70);
      _objc_release(puStack_50);
      _objc_release(uStack_48);
    }
    _objc_release(puVar4);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 10590f93c; end: 10590fb1b;  */

void FUN_10590f93c(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  
  _objc_retain(param_2);
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bfe5ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  lVar5 = param_2;
  if (lVar2 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    lVar2 = param_2;
    func_0x00010c23e6c0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fa60();
    if (lVar3 == 0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      lVar3 = param_2;
      func_0x00010c2711a0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c08fa60();
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
      _objc_release(param_2);
      puVar6 = (undefined *)0x0;
      if (lVar4 == 0) goto LAB_10590faf0;
      func_0x00010c27dd80();
      puVar6 = PTR_PTR_1126c0160;
      _objc_alloc(PTR_PTR_1126c0160);
      func_0x00010bfe5ea0(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_2;
      func_0x00010c23e6c0(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_2;
      func_0x00010c2711a0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c273440(param_2);
      lVar3 = param_2;
      func_0x00010bf6e6e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_2;
      func_0x00010bf0b7e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf49b60();
      func_0x00010c020060(puVar6);
      _objc_release(lVar4);
      _objc_release(lVar3);
    }
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(lVar5);
LAB_10590faf0:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10590fb1c; end: 10590fb4b;  */

void FUN_10590fb1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010590fb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),1,*(undefined8 *)(param_1 + 0x20),0);
  return;
}



/* Entry: 10590fb4c; end: 10590fd27; -[SCIAPTokenOrderGRPCServiceImpl orderWithItemId:completionQueue:completionBlock:] */

void FUN_10590fb4c(long param_1,undefined8 param_2,long param_3,undefined *param_4,
                  undefined *param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = PTR___dispatch_main_q_11034be20;
  if ((param_4 == (undefined *)0x0) && (param_5 != (undefined *)0x0)) {
    _objc_retain(PTR___dispatch_main_q_11034be20);
    param_4 = puVar2;
  }
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    if (param_5 == (undefined *)0x0) goto LAB_10590fcdc;
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_10590fd28;
    puStack_50 = &UNK_110849530;
    _objc_retain(param_5);
    puStack_48 = param_5;
    func_0x00010007380c(param_4,&puStack_68);
    puVar2 = puStack_48;
  }
  else {
    puVar2 = PTR_PTR_1126c0168;
    _objc_opt_new(PTR_PTR_1126c0168);
    puVar3 = puVar2;
    func_0x00010c1b5f20();
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a99c0(puVar2);
    _objc_release(puVar3);
    _objc_initWeak(auStack_70,param_1);
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    _objc_retain(param_5);
    _objc_copyWeak(auStack_78,auStack_70);
    _objc_retain(param_4);
    func_0x00010c0ecb80(uVar4);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_78);
    _objc_release(param_5);
    _objc_destroyWeak(auStack_70);
  }
  _objc_release(puVar2);
LAB_10590fcdc:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10590fd28; end: 10590fd43;  */

void FUN_10590fd28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010590fd40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0,0,0);
  return;
}



/* Entry: 10590fd44; end: 10590ffa3;  */

void FUN_10590fd44(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x28) != 0) {
    lVar3 = param_1 + 0x30;
    _objc_loadWeakRetained();
    if (lVar3 == 0) {
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0xc2000000;
      pcStack_68 = FUN_10590ffa4;
      puStack_60 = &UNK_110849530;
      uVar1 = *(undefined8 *)(param_1 + 0x20);
      puVar6 = *(undefined **)(param_1 + 0x28);
      _objc_retain(puVar6);
      puStack_58 = puVar6;
      func_0x00010007380c(uVar1,&puStack_78);
      puVar6 = puStack_58;
    }
    else if ((param_2 == 0) || (param_3 != 0)) {
      puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_e0 = 0xc2000000;
      uStack_d8 = 0x10590ffdc;
      puStack_d0 = &UNK_11084aaa8;
      uVar1 = *(undefined8 *)(param_1 + 0x20);
      puVar6 = *(undefined **)(param_1 + 0x28);
      _objc_retain(puVar6);
      puStack_c0 = puVar6;
      _objc_retain(param_3);
      lStack_c8 = param_3;
      func_0x00010007380c(uVar1,&puStack_e8);
      _objc_release(lStack_c8);
      puVar6 = puStack_c0;
    }
    else {
      lVar5 = param_2;
      func_0x00010bfd9c80();
      if (((int)lVar5 == 0) || (lVar5 = param_2, func_0x00010bfd4860(), (int)lVar5 == 0)) {
        puVar6 = (undefined *)0x0;
        lVar5 = 0;
        uStack_80 = 0;
      }
      else {
        lVar4 = param_2;
        func_0x00010c0ec9a0();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010bfe5ea0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar4);
        puVar6 = PTR_PTR_1126c0170;
        _objc_alloc();
        lVar4 = param_2;
        func_0x00010bf15740(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c275ea0();
        func_0x00010c054820();
        _objc_release(lVar4);
        uStack_80 = 1;
      }
      puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b0 = 0xc2000000;
      uStack_a8 = 0x10590ffc0;
      puStack_a0 = &UNK_110864938;
      uVar1 = *(undefined8 *)(param_1 + 0x20);
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(uVar2);
      puStack_98 = puVar6;
      lStack_90 = lVar5;
      uStack_88 = uVar2;
      _objc_retain(lVar5);
      _objc_retain(puVar6);
      func_0x00010007380c(uVar1,&puStack_b8);
      _objc_release(lStack_90);
      _objc_release(puStack_98);
      _objc_release(uStack_88);
      _objc_release(lVar5);
    }
    _objc_release(puVar6);
    _objc_release(lVar3);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 10590ffa4; end: 10590fff7;  */

void FUN_10590ffa4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010590ffbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0,0,0);
  return;
}



/* Entry: 10590fff8; end: 105910167; -[SCIAPTokenOrderGRPCServiceImpl consumeOrderWithOrderId:completionQueue:completionBlock:] */

void FUN_10590fff8(long param_1,undefined8 param_2,long param_3,undefined *param_4,
                  undefined *param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = PTR___dispatch_main_q_11034be20;
  if ((param_4 == (undefined *)0x0) && (param_5 != (undefined *)0x0)) {
    _objc_retain(PTR___dispatch_main_q_11034be20);
    param_4 = puVar2;
  }
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    if (param_5 == (undefined *)0x0) goto LAB_105910138;
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_105910168;
    puStack_50 = &UNK_110849530;
    _objc_retain(param_5);
    puStack_48 = param_5;
    func_0x00010007380c(param_4,&puStack_68);
    puVar2 = puStack_48;
  }
  else {
    puVar2 = PTR_PTR_1126c0178;
    _objc_opt_new(PTR_PTR_1126c0178);
    func_0x00010c1d60c0();
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    _objc_retain(param_5);
    _objc_retain(param_4);
    func_0x00010bf49a00(uVar3);
    _objc_release(param_4);
    _objc_release(param_5);
  }
  _objc_release(puVar2);
LAB_105910138:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105910168; end: 10591017b;  */

void FUN_105910168(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105910178. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0);
  return;
}



/* Entry: 10591017c; end: 10591028f;  */

void FUN_10591017c(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  long lStack_68;
  long lStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    if ((param_2 == 0) || (param_3 != 0)) {
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0xc2000000;
      uStack_78 = 0x1059102a4;
      puStack_70 = &UNK_11084aaa8;
      _objc_retain(lVar2);
      lStack_60 = lVar2;
      _objc_retain(param_3);
      lStack_68 = param_3;
      func_0x00010007380c(uVar1,&puStack_88);
      _objc_release(lStack_68);
      lVar2 = lStack_60;
    }
    else {
      puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_50 = 0xc2000000;
      pcStack_48 = FUN_105910290;
      puStack_40 = &UNK_110849530;
      _objc_retain(lVar2);
      lStack_38 = lVar2;
      func_0x00010007380c(uVar1,&puStack_58);
      lVar2 = lStack_38;
    }
    _objc_release(lVar2);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 105910290; end: 1059102b7;  */

void FUN_105910290(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001059102a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),1,0);
  return;
}



/* Entry: 1059102b8; end: 10591046f; -[SCIAPTokenOrderGRPCServiceImpl getUnconsumedOrdersWithAppId:completionQueue:completionBlock:] */

void FUN_1059102b8(long param_1,undefined8 param_2,long param_3,undefined *param_4,
                  undefined *param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = PTR___dispatch_main_q_11034be20;
  if ((param_4 == (undefined *)0x0) && (param_5 != (undefined *)0x0)) {
    _objc_retain(PTR___dispatch_main_q_11034be20);
    param_4 = puVar2;
  }
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    if (param_5 == (undefined *)0x0) goto LAB_105910424;
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_105910470;
    puStack_50 = &UNK_110849530;
    _objc_retain(param_5);
    puStack_48 = param_5;
    func_0x00010007380c(param_4,&puStack_68);
    puVar2 = puStack_48;
  }
  else {
    puVar2 = PTR_PTR_1126c0180;
    _objc_opt_new(PTR_PTR_1126c0180);
    func_0x00010c168ae0();
    _objc_initWeak(auStack_70,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    _objc_retain(param_5);
    _objc_copyWeak(auStack_78,auStack_70);
    _objc_retain(param_4);
    func_0x00010bfcba20(uVar3);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_78);
    _objc_release(param_5);
    _objc_destroyWeak(auStack_70);
  }
  _objc_release(puVar2);
LAB_105910424:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105910470; end: 105910487;  */

void FUN_105910470(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105910484. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0,0);
  return;
}



/* Entry: 105910488; end: 10591066b;  */

void FUN_105910488(long param_1,undefined *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x28) != 0) {
    lVar3 = param_1 + 0x30;
    _objc_loadWeakRetained();
    if (lVar3 == 0) {
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0xc2000000;
      pcStack_58 = FUN_10591066c;
      puStack_50 = &UNK_110849530;
      uVar1 = *(undefined8 *)(param_1 + 0x20);
      puVar5 = *(undefined **)(param_1 + 0x28);
      _objc_retain(puVar5);
      puStack_48 = puVar5;
      func_0x00010007380c(uVar1,&puStack_68);
      puVar5 = puStack_48;
    }
    else if ((param_2 == (undefined *)0x0) || (param_3 != 0)) {
      puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_c0 = 0xc2000000;
      uStack_b8 = 0x105910798;
      puStack_b0 = &UNK_11084aaa8;
      uVar1 = *(undefined8 *)(param_1 + 0x20);
      puVar5 = *(undefined **)(param_1 + 0x28);
      _objc_retain(puVar5);
      puStack_a0 = puVar5;
      _objc_retain(param_3);
      lStack_a8 = param_3;
      func_0x00010007380c(uVar1,&puStack_c8);
      _objc_release(lStack_a8);
      puVar5 = puStack_a0;
    }
    else {
      puVar4 = param_2;
      func_0x00010c0ecec0();
      puVar5 = PTR____NSArray0__struct_11034ab48;
      if (puVar4 != (undefined *)0x0) {
        puVar4 = param_2;
        func_0x00010c0ecea0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x000100504554();
        _objc_release(puVar4);
      }
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0xc2000000;
      pcStack_88 = FUN_105910780;
      puStack_80 = &UNK_11084aaa8;
      uVar1 = *(undefined8 *)(param_1 + 0x20);
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(uVar2);
      puStack_78 = puVar5;
      uStack_70 = uVar2;
      _objc_retain(puVar5);
      func_0x00010007380c(uVar1,&puStack_98);
      _objc_release(puStack_78);
      _objc_release(uStack_70);
    }
    _objc_release(puVar5);
    _objc_release(lVar3);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 10591066c; end: 105910683;  */

void FUN_10591066c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105910680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0,0);
  return;
}



/* Entry: 105910684; end: 10591077f;  */

void FUN_105910684(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bfe5ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    lVar2 = param_2;
    func_0x00010c23e6c0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fa60();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar3 == 0) {
      puVar4 = (undefined *)0x0;
      goto LAB_105910764;
    }
    puVar4 = PTR_PTR_1126c0188;
    _objc_alloc(PTR_PTR_1126c0188);
    lVar1 = param_2;
    func_0x00010bfe5ea0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2;
    func_0x00010c23e6c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c273440(param_2);
    func_0x00010c01b9c0(puVar4);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
LAB_105910764:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105910780; end: 1059107af;  */

void FUN_105910780(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105910794. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),1,*(undefined8 *)(param_1 + 0x20),0);
  return;
}



/* Entry: 1059107b0; end: 1059107df; -[SCIAPTokenOrderGRPCServiceImpl .cxx_destruct] */

void FUN_1059107b0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1059107e0; end: 105910abb; -[SCIAPTokenShopGRPCServiceImpl initWithPerformerProvider:preferences:grpcClientFactory:] */

undefined8 *
FUN_1059107e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_58 = PTR_PTR_1126eae40;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = puVar1[1];
    puVar1[1] = param_4;
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c0f9920();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar6);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c226900(PTR__OBJC_CLASS___NSSet_1126ae870);
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_68,puVar1);
    uVar2 = puVar1[1];
    uVar6 = puVar1[2];
    func_0x00010c11de00(uVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_70,auStack_68);
    func_0x00010c0e06e0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar7);
    _objc_release(uVar6);
    puVar4 = PTR_PTR_1126ae728;
    func_0x00010bf24820(PTR_PTR_1126ae728);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c196320();
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c1eeba0(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c214be0(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c17ca40(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar2 = param_5;
    func_0x00010bf56360(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126c0190;
    _objc_alloc();
    func_0x00010c058f80();
    uVar6 = puVar1[6];
    puVar1[6] = puVar5;
    _objc_release(uVar6);
    _objc_release(uVar2);
    _objc_release(puVar4);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
    _objc_release(puVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105910abc; end: 105910bd7;  */

void FUN_105910abc(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar2 = param_2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126c0170;
    _objc_opt_class(PTR_PTR_1126c0170);
    uVar4 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    uVar1 = uVar2;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar2);
    if (uVar1 != 0) {
      func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x18));
    }
    uVar4 = param_2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
    uVar5 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar3);
    uVar2 = uVar4;
    if ((uVar5 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar4);
    if (uVar2 != 0) {
      func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20));
    }
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105910bd8; end: 105910d2b; -[SCIAPTokenShopGRPCServiceImpl initWithPreferences:performer:tokenBalanceSubject:tokenPromotionsSubject:preferencesObserver:tokenShopGRPCService:] */

undefined1 *
FUN_105910bd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_58 = PTR_PTR_1126eae40;
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



/* Entry: 105910d2c; end: 105910d73; -[SCIAPTokenShopGRPCServiceImpl dealloc] */

void FUN_105910d2c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c281a60(*(undefined8 *)(param_1 + 0x28));
  puStack_28 = PTR_PTR_1126eae40;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 105910d74; end: 105910ddb; -[SCIAPTokenShopGRPCServiceImpl tokenBalance] */

void FUN_105910d74(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  uVar2 = *(ulong *)(param_1 + 8);
  func_0x00010c0dff20(uVar2,param_2,&PTR____CFConstantStringClassReference_110e0d258);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c0170;
  _objc_opt_class(PTR_PTR_1126c0170);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105910ddc; end: 105910e03; -[SCIAPTokenShopGRPCServiceImpl tokenBalanceObservable] */

void FUN_105910ddc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105910e04; end: 105910f4b; -[SCIAPTokenShopGRPCServiceImpl getTokenBalanceWithCompletionQueue:completionBlock:] */

void FUN_105910e04(long param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR___dispatch_main_q_11034be20;
  if ((param_3 == (undefined *)0x0) && (param_4 != 0)) {
    _objc_retain(PTR___dispatch_main_q_11034be20);
    param_3 = puVar1;
  }
  puVar1 = PTR_PTR_1126c0198;
  func_0x00010c0cb140(PTR_PTR_1126c0198);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_48,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bfc2d60(uVar2);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105910f4c; end: 105911107;  */

void FUN_105910f4c(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (((param_2 == 0) || (lVar4 = param_2, func_0x00010bfd4860(), param_3 != 0)) ||
     ((int)lVar4 == 0)) {
    puVar2 = *(undefined **)(param_1 + 0x28);
    if (puVar2 == (undefined *)0x0) goto LAB_1059110d8;
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    uStack_90 = 0x105911120;
    puStack_88 = &UNK_11084aaa8;
    _objc_retain(puVar2);
    puStack_78 = puVar2;
    _objc_retain(param_3);
    lStack_80 = param_3;
    func_0x00010007380c(uVar3,&puStack_a0);
    _objc_release(lStack_80);
    puVar2 = puStack_78;
  }
  else {
    puVar2 = PTR_PTR_1126c0170;
    _objc_alloc();
    lVar4 = param_2;
    func_0x00010bf15740(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c275ea0();
    func_0x00010c054820();
    _objc_release(lVar4);
    lVar4 = *(long *)(param_1 + 0x28);
    if (lVar4 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0xc2000000;
      pcStack_60 = FUN_105911108;
      puStack_58 = &UNK_11084aaa8;
      _objc_retain(lVar4);
      lStack_48 = lVar4;
      _objc_retain(puVar2);
      puStack_50 = puVar2;
      func_0x00010007380c(uVar3,&puStack_70);
      _objc_release(puStack_50);
      _objc_release(lStack_48);
    }
    if (lVar1 != 0) {
      func_0x00010c1d0640(*(undefined8 *)(lVar1 + 8));
    }
  }
  _objc_release(puVar2);
LAB_1059110d8:
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 105911108; end: 105911137;  */

void FUN_105911108(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010591111c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),1,*(undefined8 *)(param_1 + 0x20),0);
  return;
}



/* Entry: 105911138; end: 10591115f; -[SCIAPTokenShopGRPCServiceImpl tokenPromotionsObservable] */

void FUN_105911138(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105911160; end: 1059112bb; -[SCIAPTokenShopGRPCServiceImpl getTokenPromotionsWithLocale:completionQueue:completionBlock:] */

void FUN_105911160(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR___dispatch_main_q_11034be20;
  if ((param_4 == (undefined *)0x0) && (param_5 != 0)) {
    _objc_retain(PTR___dispatch_main_q_11034be20);
    param_4 = puVar1;
  }
  puVar1 = PTR_PTR_1126c01a0;
  _objc_opt_new(PTR_PTR_1126c01a0);
  func_0x00010c1bf3e0();
  _objc_initWeak(auStack_48,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010bfc92a0(uVar2);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1059112bc; end: 105911487;  */

void FUN_1059112bc(long param_1,undefined *param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if ((param_2 == (undefined *)0x0) || (param_3 != 0)) {
    puVar4 = *(undefined **)(param_1 + 0x28);
    if (puVar4 == (undefined *)0x0) goto LAB_105911454;
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    uStack_a0 = 0x105911550;
    puStack_98 = &UNK_11084aaa8;
    _objc_retain(puVar4);
    puStack_88 = puVar4;
    _objc_retain(param_3);
    lStack_90 = param_3;
    func_0x00010007380c(uVar5,&puStack_b0);
    _objc_release(lStack_90);
    puVar4 = puStack_88;
  }
  else {
    puVar2 = param_2;
    func_0x00010c118440();
    puVar4 = PTR____NSArray0__struct_11034ab48;
    if (puVar2 != (undefined *)0x0) {
      puVar2 = param_2;
      func_0x00010c118420();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x000100504554();
      puVar4 = puVar3;
      func_0x00010bf51e00();
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
    lVar6 = *(long *)(param_1 + 0x28);
    if (lVar6 != 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0xc2000000;
      pcStack_70 = FUN_105911538;
      puStack_68 = &UNK_11084aaa8;
      _objc_retain(lVar6);
      lStack_58 = lVar6;
      _objc_retain(puVar4);
      puStack_60 = puVar4;
      func_0x00010007380c(uVar5,&puStack_80);
      _objc_release(puStack_60);
      _objc_release(lStack_58);
    }
    if (lVar1 != 0) {
      func_0x00010c1d0640(*(undefined8 *)(lVar1 + 8));
    }
  }
  _objc_release(puVar4);
LAB_105911454:
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 105911488; end: 105911537;  */

void FUN_105911488(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bfe5ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126c01a8;
    _objc_alloc(PTR_PTR_1126c01a8);
    lVar1 = param_2;
    func_0x00010bfe5ea0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c273180(param_2);
    func_0x00010c03b600(puVar3);
    _objc_release(lVar1);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105911538; end: 105911567;  */

void FUN_105911538(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010591154c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),1,*(undefined8 *)(param_1 + 0x20),0);
  return;
}



/* Entry: 105911568; end: 1059117d7; -[SCIAPTokenShopGRPCServiceImpl purchaseTokenPackWithTokenPackSKU:transactionId:appStoreReceipt:priceInMillis:priceCurrencyCode:appStoreCountryCode:completionQueue:completionBlock:] */

void FUN_105911568(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined *param_9,long param_10)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puVar1 = PTR___dispatch_main_q_11034be20;
  if ((param_9 == (undefined *)0x0) && (param_10 != 0)) {
    _objc_retain(PTR___dispatch_main_q_11034be20);
    param_9 = puVar1;
  }
  puVar1 = PTR_PTR_1126c01b0;
  _objc_opt_new(PTR_PTR_1126c01b0);
  func_0x00010c1e52e0();
  func_0x00010c203160(puVar1);
  func_0x00010c219600(puVar1);
  func_0x00010c1e81a0(puVar1);
  puVar2 = PTR_PTR_1126c01b8;
  _objc_opt_new(PTR_PTR_1126c01b8);
  func_0x00010c1c7a20();
  func_0x00010c186ea0(puVar2);
  puVar3 = PTR_PTR_1126c01c0;
  _objc_opt_new(PTR_PTR_1126c01c0);
  func_0x00010c17dba0();
  puVar4 = PTR_PTR_1126c01c8;
  _objc_opt_new(PTR_PTR_1126c01c8);
  func_0x00010c1e81a0();
  func_0x00010c1e2880(puVar4);
  func_0x00010c184920(puVar4);
  _objc_initWeak(auStack_68,param_1);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_10);
  _objc_retain(param_9);
  func_0x00010c11bcc0(uVar5);
  _objc_release(param_9);
  _objc_release(param_10);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1059117d8; end: 105911a97;  */

void FUN_1059117d8(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if ((param_2 == 0) || (param_3 != 0)) {
    puVar4 = *(undefined **)(param_1 + 0x28);
    if (puVar4 == (undefined *)0x0) goto LAB_105911a60;
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0xc2000000;
    uStack_b8 = 0x105911ab4;
    puStack_b0 = &UNK_11084aaa8;
    _objc_retain(puVar4);
    puStack_a0 = puVar4;
    _objc_retain(param_3);
    lStack_a8 = param_3;
    func_0x00010007380c(uVar5,&puStack_c8);
    _objc_release(lStack_a8);
    puVar4 = puStack_a0;
  }
  else {
    lVar7 = param_2;
    func_0x00010bfd4860();
    if ((int)lVar7 == 0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      puVar4 = PTR_PTR_1126c0170;
      _objc_alloc();
      lVar7 = param_2;
      func_0x00010bf15740(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c275ea0();
      func_0x00010c054820();
      _objc_release(lVar7);
    }
    lVar7 = param_2;
    func_0x00010bfdd740();
    if ((int)lVar7 == 0) {
LAB_1059119b0:
      puVar6 = (undefined *)0x0;
    }
    else {
      lVar7 = param_2;
      func_0x00010c273140();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar7;
      func_0x00010c23e6c0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c08fa60();
      _objc_release(lVar2);
      _objc_release(lVar7);
      if (lVar3 == 0) goto LAB_1059119b0;
      puVar6 = PTR_PTR_1126c01d0;
      _objc_alloc();
      lVar7 = param_2;
      func_0x00010c273140(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar7;
      func_0x00010c23e6c0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_2;
      func_0x00010c273140(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c11cf60();
      func_0x00010c046c40();
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar7);
    }
    lVar7 = *(long *)(param_1 + 0x28);
    if (lVar7 != 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0xc2000000;
      pcStack_88 = FUN_105911a98;
      puStack_80 = &UNK_11084a9e8;
      _objc_retain(lVar7);
      lStack_68 = lVar7;
      _objc_retain(puVar4);
      puStack_78 = puVar4;
      _objc_retain(puVar6);
      puStack_70 = puVar6;
      func_0x00010007380c(uVar5,&puStack_98);
      _objc_release(puStack_70);
      _objc_release(puStack_78);
      _objc_release(lStack_68);
    }
    if ((lVar1 != 0) && (puVar4 != (undefined *)0x0)) {
      func_0x00010c1d0640(*(undefined8 *)(lVar1 + 8));
    }
    _objc_release(puVar6);
  }
  _objc_release(puVar4);
LAB_105911a60:
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 105911a98; end: 105911acf;  */

void FUN_105911a98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105911ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),1,*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28),0);
  return;
}



/* Entry: 105911ad0; end: 105911b2f; -[SCIAPTokenShopGRPCServiceImpl .cxx_destruct] */

void FUN_105911ad0(long param_1)

{
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



/* Entry: 105911b30; end: 105911d1b; -[SCIAPTokenTokenPackPurchaseNotificationManager initWithMainQueuePerformer:onDemandResourceDownloader:notificationPool:purchaseUpdateObservable:tokenLogger:] */

undefined8 *
FUN_105911b30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_68 = PTR_PTR_1126eae48;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = puVar1[1];
    puVar1[1] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[3];
    puVar1[3] = param_7;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_78,puVar1);
    uVar2 = param_6;
    func_0x00010c0e0ea0(param_6);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_80,auStack_78);
    uVar4 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105911d1c; end: 105911d63;  */

void FUN_105911d1c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2e900();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105911d64; end: 105911d7b; -[SCIAPTokenTokenPackPurchaseNotificationManager _isProductIdentifierForJustStartedPurchase:] */

long FUN_105911d64(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  if ((param_3 != 0) && (lVar1 = *(long *)(param_1 + 0x28), lVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010c0720d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_isEqualToString__1125fa240);
    return lVar1;
  }
  return 0;
}



/* Entry: 105911d7c; end: 105911e2f; -[SCIAPTokenTokenPackPurchaseNotificationManager _handlePurchaseUpdate:] */

void FUN_105911d7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
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
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105911e30;
  puStack_20 = &UNK_1108450c8;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x105911e64;
  puStack_48 = &UNK_1108450c8;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_105911ea8;
  puStack_70 = &UNK_1108bfd18;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_105911f64;
  puStack_98 = &UNK_11084f200;
  uStack_90 = param_1;
  uStack_68 = param_1;
  uStack_40 = param_1;
  uStack_18 = param_1;
  func_0x00010c0c0340(param_3,param_2,&puStack_38,&puStack_60,&puStack_88,&puStack_b0);
  return;
}



/* Entry: 105911e30; end: 105911ea7;  */

void FUN_105911e30(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105911ea8; end: 105911f63;  */

void FUN_105911ea8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_5);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010be43000();
  if (iVar1 == 0) {
    func_0x00010be7cd40();
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2200(uVar3);
  }
  else {
    puVar2 = *(undefined **)(*(long *)(param_1 + 0x20) + 0x28);
    *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28) = 0;
  }
  _objc_release(puVar2);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105911f64; end: 105911fcb;  */

void FUN_105911f64(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010be43000();
  lVar3 = *(long *)(param_1 + 0x20);
  if (iVar1 == 0) {
    func_0x00010c0b2200(*(undefined8 *)(lVar3 + 0x18));
  }
  else {
    uVar2 = *(undefined8 *)(lVar3 + 0x28);
    *(undefined8 *)(lVar3 + 0x28) = 0;
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105911fcc; end: 10591219b; -[SCIAPTokenTokenPackPurchaseNotificationManager _presentNotificationForPurchaseDelayedSuccessWithTokenQuantity:] */

void FUN_105911fcc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 in_x7;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  lVar1 = param_1;
  FUN_1059145e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae560;
  _objc_opt_new();
  uVar7 = *(undefined8 *)(param_1 + 8);
  puVar3 = PTR_PTR_1126aebf0;
  _objc_alloc(PTR_PTR_1126aebf0);
  lVar4 = param_1;
  _objc_opt_class(param_1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c011b80(puVar3,param_2,lVar4,0x29);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10591219c;
  puStack_60 = &UNK_11084d858;
  puStack_58 = puVar2;
  _objc_retain(puVar2);
  func_0x00010bf88c20(uVar7,param_2,lVar1,puVar3,&puStack_78);
  _objc_release(puVar3);
  _objc_release(lVar4);
  puVar5 = puVar2;
  func_0x00010bfbc3e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10590bde0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar7 = param_3;
  FUN_10591455c();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c14de00(puVar3,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  puVar6 = PTR_PTR_1126b0ae0;
  func_0x00010bf57f00(PTR_PTR_1126b0ae0,param_2,puVar5,puVar3,0,0,0,in_x7,uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f340(*(undefined8 *)(param_1 + 0x10),param_2,puVar6);
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release(param_3);
  _objc_release(puVar5);
  _objc_release(puStack_58);
  _objc_release(puVar2);
  _objc_release(lVar1);
  return;
}



/* Entry: 10591219c; end: 1059121a7;  */

void FUN_10591219c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,param_2);
  return;
}



/* Entry: 1059121a8; end: 1059121fb; -[SCIAPTokenTokenPackPurchaseNotificationManager .cxx_destruct] */

void FUN_1059121a8(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1059121fc; end: 1059124cb; -[SCIAPTokenTokenPackPurchaseServiceImplementation initWithBundle:paymentQueue:mainQueuePerformer:performerProvider:preferences:onDemandResourceDownloader:notificationPool:inAppProductService:grpcClientFactory:tokenLogger:circumstanceEngine:] */

undefined8 *
FUN_1059121fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
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
  puStack_68 = PTR_PTR_1126eae50;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[3];
    puVar1[3] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[4];
    puVar1[4] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_13;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c01d8;
    _objc_alloc();
    func_0x00010c0353e0();
    uVar2 = puVar1[5];
    puVar1[5] = puVar3;
    _objc_release(uVar2);
    uVar2 = param_6;
    func_0x00010c0f9920();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = puVar1[7];
    puVar1[7] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c01e0;
    _objc_alloc();
    func_0x00010c027fa0();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    _objc_release(uVar2);
    func_0x00010befc600(puVar1[2]);
    func_0x00010bfaaea0(puVar1);
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



/* Entry: 1059124cc; end: 105912517; -[SCIAPTokenTokenPackPurchaseServiceImplementation dealloc] */

void FUN_1059124cc(long param_1,undefined8 param_2)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c12eca0(*(undefined8 *)(param_1 + 0x10),param_2,param_1);
  puStack_28 = PTR_PTR_1126eae50;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 105912518; end: 10591262f; -[SCIAPTokenTokenPackPurchaseServiceImplementation paymentQueue:updatedTransactions:] */

void FUN_105912518(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x0001006372a4(param_4,&PTR___NSConcreteGlobalBlock_1108bfe38);
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    _objc_initWeak(auStack_48,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(lVar1);
    func_0x00010c0f7fc0(uVar3);
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105912630; end: 10591266b;  */

void FUN_105912630(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be32be0(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10591266c; end: 105912713; -[SCIAPTokenTokenPackPurchaseServiceImplementation processPendingTransactionsIfNeeded] */

void FUN_10591266c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105912714; end: 105912747;  */

void FUN_105912714(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be81c40(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105912748; end: 10591281f; -[SCIAPTokenTokenPackPurchaseServiceImplementation purchaseProduct:] */

void FUN_105912748(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105912820; end: 10591285b;  */

void FUN_105912820(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be84940(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10591285c; end: 105912903; -[SCIAPTokenTokenPackPurchaseServiceImplementation fetchPromotions] */

void FUN_10591285c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105912904; end: 105912937;  */

void FUN_105912904(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be13420(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105912938; end: 1059129df; -[SCIAPTokenTokenPackPurchaseServiceImplementation fetchTokenBalance] */

void FUN_105912938(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1059129e0; end: 105912a13;  */

void FUN_1059129e0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be15040(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105912a14; end: 105912a1b; -[SCIAPTokenTokenPackPurchaseServiceImplementation isTokenShopEnabled] */

ulong FUN_105912a14(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x68);
  _objc_retain();
  uVar2 = uVar1;
  func_0x00010bf1f440(uVar1,param_2,&PTR____CFConstantStringClassReference_110e0d338,0,0);
  if ((uVar2 & 1) == 0) {
    uVar2 = uVar1;
    func_0x00010bf1f440(uVar1,param_2,&PTR____CFConstantStringClassReference_110e0d358,0,0);
  }
  else {
    uVar2 = 1;
  }
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105912a1c; end: 105912a43; -[SCIAPTokenTokenPackPurchaseServiceImplementation purchaseUpdateObservable] */

void FUN_105912a1c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105912a44; end: 105912a6b; -[SCIAPTokenTokenPackPurchaseServiceImplementation promotionsUpdateObservable] */

void FUN_105912a44(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105912a6c; end: 105912a73; -[SCIAPTokenTokenPackPurchaseServiceImplementation tokenBalance] */

void FUN_105912a6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_tokenBalance_11267a600);
  return;
}



/* Entry: 105912a74; end: 105912a7b; -[SCIAPTokenTokenPackPurchaseServiceImplementation tokenBalanceObservable] */

void FUN_105912a74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_tokenBalanceObservable_11267a608);
  return;
}



/* Entry: 105912a7c; end: 105912ad3; -[SCIAPTokenTokenPackPurchaseServiceImplementation tokenShopLocale] */

void FUN_105912a7c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = *(undefined **)(param_1 + 8);
  func_0x00010590bd9c();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c08fa60();
  puVar1 = PTR_PTR_11310d330;
  if (puVar3 != (undefined *)0x0) {
    puVar1 = puVar2;
  }
  _objc_retain(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105912ad4; end: 105912b77; -[SCIAPTokenTokenPackPurchaseServiceImplementation _processPendingTransactionsIfNeeded] */

void FUN_105912ad4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_1 + 0x50) == 0) {
    lVar1 = *(long *)(param_1 + 0x58);
    func_0x00010bf529e0();
    if (lVar1 == 0) {
      lVar2 = *(long *)(param_1 + 0x10);
      func_0x00010c279880();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar2;
      func_0x0001006372a4();
      _objc_release(lVar2);
      lVar2 = lVar1;
      func_0x00010bf529e0();
      if (lVar2 != 0) {
        lVar2 = lVar1;
        func_0x00010c0d3c80();
        uVar3 = *(undefined8 *)(param_1 + 0x58);
        *(long *)(param_1 + 0x58) = lVar2;
        _objc_release(uVar3);
        func_0x00010be819e0(param_1);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar1);
      return;
    }
  }
  return;
}



/* Entry: 105912b78; end: 105912cf7; -[SCIAPTokenTokenPackPurchaseServiceImplementation _purchaseProduct:] */

void FUN_105912b78(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c115ea0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c01e8;
  func_0x00010c251f20(PTR_PTR_1126c01e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x38));
  iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
  _objc_opt_class();
  func_0x00010bf2ce20();
  if (iVar1 == 0) {
    puVar7 = (undefined *)0x3e9;
  }
  else {
    uVar4 = uVar2;
    FUN_105913e18();
    if ((int)uVar4 == 0) {
      puVar7 = (undefined *)0x44d;
    }
    else {
      lVar5 = *(long *)(param_1 + 0x10);
      func_0x00010c279880();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      FUN_1059143dc();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
      lVar5 = lVar6;
      func_0x00010bf529e0();
      _objc_release(lVar6);
      if (lVar5 == 0) {
        puVar7 = PTR__OBJC_CLASS___SKPayment_1126c01f0;
        func_0x00010c0f6a00(PTR__OBJC_CLASS___SKPayment_1126c01f0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa6c0(*(undefined8 *)(param_1 + 0x10));
        goto LAB_105912c98;
      }
      puVar7 = (undefined *)0x4b1;
    }
  }
  FUN_1059141d4(puVar7,uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126c01e8;
  func_0x00010bf9ff60(PTR_PTR_1126c01e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x38));
  _objc_release(puVar8);
LAB_105912c98:
  _objc_release(puVar7);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105912cf8; end: 105912d2f; -[SCIAPTokenTokenPackPurchaseServiceImplementation _handleUpdatedTransactions:] */

void FUN_105912cf8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c0d3c80();
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be819f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__processNextTransactionIfNeeded_11257e018);
  return;
}



/* Entry: 105912d30; end: 105912d5b; -[SCIAPTokenTokenPackPurchaseServiceImplementation _resetCurrentAndProcessNextTransactionIfNeeded] */

void FUN_105912d30(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be819f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__processNextTransactionIfNeeded_11257e018);
  return;
}



/* Entry: 105912d5c; end: 105912e37; -[SCIAPTokenTokenPackPurchaseServiceImplementation _processNextTransactionIfNeeded] */

void FUN_105912d5c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_1 + 0x50) == 0) {
    lVar1 = *(long *)(param_1 + 0x58);
    func_0x00010bf529e0();
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x58);
      func_0x00010c089820();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0x50);
      *(undefined8 *)(param_1 + 0x50) = uVar2;
      _objc_release(uVar3);
      func_0x00010c12cd60(*(undefined8 *)(param_1 + 0x58));
      lVar1 = *(long *)(param_1 + 0x50);
      func_0x00010c279860();
      if (lVar1 < 2) {
        if (lVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be81eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_msgSend_11034d288)
                    (param_1,PTR_s__processPurchasingTransaction_11257e148);
          return;
        }
        if (lVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010be81e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_msgSend_11034d288)
                    (param_1,PTR_s__processPurchasedTransaction_11257e130);
          return;
        }
      }
      else {
        if (lVar1 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00010be81010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__processFailedTransaction_11257dda0);
          return;
        }
        if (lVar1 == 3) {
                    /* WARNING: Could not recover jumptable at 0x00010be820d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_msgSend_11034d288)
                    (param_1,PTR_s__processRestoredTransaction_11257e1d0);
          return;
        }
        if (lVar1 == 4) {
                    /* WARNING: Could not recover jumptable at 0x00010be80c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_msgSend_11034d288)
                    (param_1,PTR_s__processDeferredTransaction_11257dcc0);
          return;
        }
      }
    }
  }
  return;
}



/* Entry: 105912e38; end: 105912edf; -[SCIAPTokenTokenPackPurchaseServiceImplementation _processPurchasingTransaction] */

void FUN_105912e38(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105912ee0; end: 105912f13;  */

void FUN_105912ee0(long param_1)

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



/* Entry: 105912f14; end: 1059130e3; -[SCIAPTokenTokenPackPurchaseServiceImplementation _processPurchasedTransaction] */

void FUN_105912f14(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c0f67c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c115ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c279820(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  FUN_105913e88(uVar3,uVar1);
  if ((int)uVar3 == 0) {
    _objc_initWeak(auStack_48,param_1);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c11de00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_78,auStack_48);
    _objc_retain(uVar2);
    func_0x00010bfa9740(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar2);
    puVar4 = auStack_78;
  }
  else {
    func_0x00010bfafd40(*(undefined8 *)(param_1 + 0x10));
    _objc_initWeak(auStack_48,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_1059130e4;
    puStack_58 = &UNK_1108434b0;
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010c0f7fc0(uVar3);
    puVar4 = auStack_50;
  }
  _objc_destroyWeak(puVar4);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar1);
  _objc_release(uVar2);
  return;
}



/* Entry: 1059130e4; end: 105913117;  */

void FUN_1059130e4(long param_1)

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



/* Entry: 105913118; end: 10591322f;  */

void FUN_105913118(long param_1,uint param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if ((param_2 == 0) || (param_3 == 0)) {
      uVar2 = 0x44e;
      if ((param_2 & param_3 == 0) == 0) {
        uVar2 = 0;
      }
      if ((param_2 & 1) == 0) {
        _objc_retain(param_4);
        uVar2 = 0x44f;
        uVar4 = param_4;
      }
      else {
        uVar4 = 0;
      }
      func_0x0001059142b0(uVar2,*(undefined8 *)(param_1 + 0x20),uVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126c01e8;
      func_0x00010bf9ff60(PTR_PTR_1126c01e8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(*(undefined8 *)(lVar1 + 0x38));
      func_0x00010be92900(lVar1);
      _objc_release(puVar3);
      _objc_release(uVar2);
      _objc_release(uVar4);
    }
    else {
      func_0x00010be81e60(lVar1);
    }
  }
  _objc_release(lVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105913230; end: 10591332f; -[SCIAPTokenTokenPackPurchaseServiceImplementation _processPurchasedTransactionWithProduct:] */

void FUN_105913230(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c0f67c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c115ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  lVar3 = *(long *)(param_1 + 8);
  FUN_1059140ec();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    uVar1 = 0x3ea;
    FUN_1059141d4(0x3ea,uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126c01e8;
    func_0x00010bf9ff60(PTR_PTR_1126c01e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x38));
    func_0x00010be92900(param_1);
    _objc_release(puVar4);
    _objc_release(uVar1);
  }
  else {
    func_0x00010be81e80(param_1);
  }
  _objc_release(lVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



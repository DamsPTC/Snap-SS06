/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10539be00; end: 10539be57;  */

void FUN_10539be00(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010be890c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10539be58; end: 10539becf; -[SCSimpleContentFetcherImpl retrieveContentWithConfigBuilder:completion:] */

void FUN_10539be58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  func_0x00010bf220e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13e5e0(param_1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10539bed0; end: 10539c26b; -[SCSimpleContentFetcherImpl _registerAndRetrieveUsingURL:config:expirationDate:cancelableGroup:completion:] */

void FUN_10539bed0(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_initWeak(auStack_70,param_1);
  puVar1 = param_4;
  func_0x00010bf4c8a0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    uVar5 = param_3;
    FUN_10539b6b4(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126b08b8;
    _objc_alloc();
    func_0x00010c0c46a0(param_4);
    func_0x00010c0295e0();
    _objc_release(uVar5);
  }
  puVar2 = PTR_PTR_1126b1058;
  _objc_alloc();
  puVar3 = puVar1;
  func_0x00010c0c5180(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_4;
  func_0x00010c0c6c20(param_4);
  func_0x00010b7f5628();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01b360();
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126b1050;
  _objc_alloc();
  puVar4 = puVar1;
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05a200();
  _objc_release(puVar4);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_4;
  func_0x00010bf93ec0(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = param_4;
  func_0x00010bf93de0(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = param_4;
  func_0x00010c104860();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = param_4;
  func_0x00010c15eac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_78,auStack_70);
  _objc_retain(puVar1);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  func_0x00010c1261a0(uVar5);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(uVar5);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_78);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_70);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10539c26c; end: 10539c2b3;  */

void FUN_10539c26c(long param_1)

{
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2ed60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10539c2b4; end: 10539c557; -[SCSimpleContentFetcherImpl _registerAndRetrieveUsingContentObject:config:expirationDate:cancelableGroup:completion:] */

void FUN_10539c2b4(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_initWeak(auStack_68,param_1);
  puVar1 = param_4;
  func_0x00010bf4c8a0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    uVar2 = param_3;
    func_0x00010bdc2560(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126b08b8;
    _objc_alloc();
    func_0x00010c0c46a0(param_4);
    func_0x00010c0295e0();
    _objc_release(uVar2);
  }
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c6c20(param_4);
  puVar3 = param_4;
  func_0x00010bf93ec0(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_4;
  func_0x00010bf93de0(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = param_4;
  func_0x00010c15eac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(puVar1);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  func_0x00010c125e00(uVar2);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_70);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10539c558; end: 10539c59f;  */

void FUN_10539c558(long param_1)

{
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2ed60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10539c5a0; end: 10539c7db; -[SCSimpleContentFetcherImpl _handleRegistrationCompletionForKey:success:config:cancelableGroup:completion:] */

void FUN_10539c5a0(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,long param_5,
                  ulong param_6,undefined *param_7)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar1 = param_6;
  func_0x00010c06e0e0();
  if ((uVar1 & 1) == 0) {
    if ((param_4 & 1) == 0) {
      (**(code **)(param_7 + 0x10))(param_7,0);
    }
    else {
      lVar2 = param_5;
      func_0x00010c0d7e20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar2 == 0) {
        puVar4 = PTR_PTR_1126b1060;
        _objc_alloc(PTR_PTR_1126b1060);
        lVar2 = param_5;
        func_0x00010c1350c0(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c032f60(puVar4);
        _objc_release(lVar2);
        uVar3 = *(undefined8 *)(param_1 + 8);
        func_0x00010c269d40(uVar3);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(param_7);
        uVar5 = uVar3;
        func_0x00010c13e560(uVar3);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar3);
        _objc_release(param_7);
      }
      else {
        uVar3 = *(undefined8 *)(param_1 + 8);
        func_0x00010c269d40(uVar3);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = param_5;
        func_0x00010c0d7e20(param_5);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(param_7);
        uVar5 = uVar3;
        func_0x00010c13e5c0(uVar3);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar2);
        _objc_release(uVar3);
        puVar4 = param_7;
      }
      _objc_release(puVar4);
      func_0x00010bef7460(param_6);
      _objc_release(uVar5);
    }
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 10539c7dc; end: 10539c7f3;  */

void FUN_10539c7dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010539c7e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 10539c7f4; end: 10539c823; -[SCSimpleContentFetcherImpl .cxx_destruct] */

void FUN_10539c7f4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10539c824; end: 10539c89b; -[SCContentCallback initWithCallback:] */

undefined1 * FUN_10539c824(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e7d00;
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



/* Entry: 10539c89c; end: 10539c8ab; -[SCContentCallback handleContentResult:] */

void FUN_10539c89c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010539c8a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(*(long *)(param_1 + 8),param_3);
  return;
}



/* Entry: 10539c8ac; end: 10539c8b7; -[SCContentCallback .cxx_destruct] */

void FUN_10539c8ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10539c8b8; end: 10539c92f; -[SCNContentManagerQueryContentStatusCallback initWithCallback:] */

undefined1 * FUN_10539c8b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e7d08;
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



/* Entry: 10539c930; end: 10539c93f; -[SCNContentManagerQueryContentStatusCallback complete:] */

void FUN_10539c930(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010539c93c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(*(long *)(param_1 + 8),param_3);
  return;
}



/* Entry: 10539c940; end: 10539c94b; -[SCNContentManagerQueryContentStatusCallback .cxx_destruct] */

void FUN_10539c940(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10539c94c; end: 10539c9c3; -[SCNContentManagerRegisterCallback initWithCallback:] */

undefined1 * FUN_10539c94c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e7d10;
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



/* Entry: 10539c9c4; end: 10539c9d3; -[SCNContentManagerRegisterCallback done:] */

void FUN_10539c9c4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010539c9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(*(long *)(param_1 + 8),param_3);
  return;
}



/* Entry: 10539c9d4; end: 10539c9df; -[SCNContentManagerRegisterCallback .cxx_destruct] */

void FUN_10539c9d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10539c9e0; end: 10539ca57; -[SCNContentManagerTaskCompletionCallback initWithCallback:] */

undefined1 * FUN_10539c9e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e7d18;
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



/* Entry: 10539ca58; end: 10539cacf; -[SCNContentManagerTaskCompletionCallback initWithSuccessFailureCallback:] */

undefined1 * FUN_10539ca58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e7d18;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10539cad0; end: 10539cafb; -[SCNContentManagerTaskCompletionCallback done:] */

void FUN_10539cad0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  if (*(long *)(param_1 + 8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010539cae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 8) + 0x10))();
    return;
  }
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010539caf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3);
    return;
  }
  return;
}



/* Entry: 10539cafc; end: 10539cb2b; -[SCNContentManagerTaskCompletionCallback .cxx_destruct] */

void FUN_10539cafc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10539cb2c; end: 10539cb9f; -[SCNContentResolutionBlizzardProtoLoggerInterface initWithUserBlizzard:] */

undefined1 * FUN_10539cb2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e7d20;
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



/* Entry: 10539cba0; end: 10539cc13; -[SCNContentResolutionBlizzardProtoLoggerInterface initWithSystemBlizzard:] */

undefined1 * FUN_10539cba0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e7d20;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10539cc14; end: 10539cd53; -[SCNContentResolutionBlizzardProtoLoggerInterface concatenateInt64:] */

void FUN_10539cc14(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSMutableString_1126af7f8;
    _objc_alloc_init();
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    uStack_50 = 0x10539ccf0;
    puStack_48 = &UNK_110880398;
    _objc_retain(param_3);
    lStack_40 = param_3;
    _objc_retain(ppuVar3);
    ppuStack_38 = ppuVar3;
    func_0x00010bf980c0(param_3,param_2,&puStack_60);
    ppuVar1 = ppuStack_38;
    _objc_retain(ppuVar3);
    _objc_release(ppuVar1);
    _objc_release(lStack_40);
    _objc_release(ppuVar3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 10539cd54; end: 10539ce93; -[SCNContentResolutionBlizzardProtoLoggerInterface concatenateInt32:] */

void FUN_10539cd54(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSMutableString_1126af7f8;
    _objc_alloc_init();
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    uStack_50 = 0x10539ce30;
    puStack_48 = &UNK_1108803c8;
    _objc_retain(param_3);
    lStack_40 = param_3;
    _objc_retain(ppuVar3);
    ppuStack_38 = ppuVar3;
    func_0x00010bf980c0(param_3,param_2,&puStack_60);
    ppuVar1 = ppuStack_38;
    _objc_retain(ppuVar3);
    _objc_release(ppuVar1);
    _objc_release(lStack_40);
    _objc_release(ppuVar3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 10539ce94; end: 10539cef3; -[SCNContentResolutionBlizzardProtoLoggerInterface bytesToString:] */

void FUN_10539ce94(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010c008340();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10539cef4; end: 10539d683; -[SCNContentResolutionBlizzardProtoLoggerInterface logEvent:message:] */

void FUN_10539cef4(float param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  float fVar9;
  double dVar10;
  undefined *puStack_48;
  
  puVar2 = PTR_PTR_1126b8030;
  if (param_4 != 0) {
    return;
  }
  _objc_retain(param_5);
  _objc_opt_new(puVar2);
  puStack_48 = (undefined *)0x0;
  puVar6 = PTR_PTR_1126b8038;
  func_0x00010c0f40e0(PTR_PTR_1126b8038,param_3,param_5,&puStack_48);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  puVar3 = puStack_48;
  _objc_retain(puStack_48);
  if (puVar3 != (undefined *)0x0) goto LAB_10539cf7c;
  puVar3 = puVar6;
  func_0x00010bf4d320(puVar6);
  func_0x00010c182600(puVar2,param_3,puVar3);
  puVar3 = puVar6;
  func_0x00010bf4d2c0(puVar6);
  func_0x00010c1825c0(puVar2,param_3,puVar3);
  puVar3 = puVar6;
  func_0x00010c13aea0();
  if ((int)puVar3 != 0) {
    if ((int)puVar3 == 1) {
      uVar7 = 1;
      goto LAB_10539cff4;
    }
LAB_10539d07c:
    puVar3 = (undefined *)0x0;
    goto LAB_10539cf7c;
  }
  uVar7 = (ulong)puVar3 & 0xffffffff;
LAB_10539cff4:
  func_0x00010c1ecb60(puVar2,param_3,uVar7);
  puVar3 = puVar6;
  func_0x00010bf4c700(puVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_2;
  func_0x00010bf26020(param_2,param_3,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c181f40(puVar2,param_3,lVar4);
  _objc_release(lVar4);
  _objc_release(puVar3);
  puVar3 = puVar6;
  func_0x00010c13a820();
  uVar8 = 0;
  switch((ulong)puVar3 & 0xffffffff) {
  case 0:
    goto code_r0x00010539d0ec;
  case 1:
    break;
  case 2:
    uVar8 = 1;
    break;
  case 3:
    uVar8 = 2;
    break;
  case 4:
    uVar8 = 3;
    break;
  case 5:
    uVar8 = 4;
    break;
  case 6:
    uVar8 = 5;
    break;
  case 7:
    uVar8 = 6;
    break;
  case 8:
    uVar8 = 7;
    break;
  case 9:
    uVar8 = 8;
    break;
  case 10:
    uVar8 = 9;
    break;
  case 0xb:
    uVar8 = 10;
    break;
  case 0xc:
    uVar8 = 0xb;
    break;
  case 0xd:
    uVar8 = 0xc;
    break;
  case 0xe:
    uVar8 = 0xd;
    break;
  default:
    goto LAB_10539d07c;
  }
  func_0x00010c1ecac0(puVar2,param_3,uVar8);
code_r0x00010539d0ec:
  puVar3 = puVar6;
  func_0x00010c0c5180(puVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_2;
  func_0x00010bf26020(param_2,param_3,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c4880(puVar2,param_3,lVar4);
  _objc_release(lVar4);
  _objc_release(puVar3);
  puVar3 = puVar6;
  func_0x00010c0d7fc0(puVar6);
  func_0x00010c1cc620(puVar2,param_3,puVar3);
  puVar3 = puVar6;
  func_0x00010c0d7c80(puVar6);
  func_0x00010c1cc340(puVar2,param_3,puVar3);
  puVar3 = puVar6;
  func_0x00010c09fa20(puVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_2;
  func_0x00010bf45aa0(param_2,param_3,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bff60(puVar2,param_3,lVar4);
  _objc_release(lVar4);
  _objc_release(puVar3);
  puVar3 = puVar6;
  func_0x00010c09fa40(puVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_2;
  func_0x00010bf45aa0(param_2,param_3,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bff80(puVar2,param_3,lVar4);
  _objc_release(lVar4);
  _objc_release(puVar3);
  puVar3 = puVar6;
  func_0x00010c0ec040(puVar6);
  func_0x00010c1d5d40(puVar2,param_3,puVar3);
  puVar3 = puVar6;
  func_0x00010c09f460(puVar6);
  func_0x00010c1bfb80(puVar2,param_3,puVar3);
  puVar3 = puVar6;
  func_0x00010c1552a0(puVar6);
  func_0x00010c1f90a0(puVar2,param_3,puVar3);
  puVar3 = puVar6;
  func_0x00010bf13680(puVar6);
  func_0x00010c16dfe0(puVar2,param_3,puVar3);
  puVar3 = puVar6;
  func_0x00010bf1f120(puVar6);
  func_0x00010c172f20(puVar2,param_3,(ulong)puVar3 & 0xffffffff);
  puVar3 = puVar6;
  func_0x00010bfde380();
  if ((int)puVar3 != 0) {
    puVar3 = puVar6;
    func_0x00010c2975c0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010c2974e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_2;
    func_0x00010bf26020(param_2,param_3,puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c220420(puVar2,param_3,lVar4);
    _objc_release(lVar4);
    _objc_release(puVar5);
    puVar5 = puVar3;
    func_0x00010c2974c0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_2;
    func_0x00010bf26020(param_2,param_3,puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c220400(puVar2,param_3,lVar4);
    _objc_release(lVar4);
    _objc_release(puVar5);
    puVar5 = puVar3;
    func_0x00010bf12b20(puVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_2;
    func_0x00010bf45a80(param_2,param_3,puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16d860(puVar2,param_3,lVar4);
    _objc_release(lVar4);
    _objc_release(puVar5);
    puVar5 = puVar3;
    func_0x00010bf27660(puVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_2;
    func_0x00010bf45a80(param_2,param_3,puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c175580(puVar2,param_3,lVar4);
    _objc_release(lVar4);
    _objc_release(puVar5);
    puVar5 = puVar3;
    func_0x00010c0ec080(puVar3);
    func_0x00010c1d5d60(puVar2,param_3,(long)(int)puVar5);
    puVar5 = puVar3;
    func_0x00010c2976e0(puVar3);
    func_0x00010c220560(puVar2,param_3,(long)(int)puVar5);
    puVar5 = puVar3;
    func_0x00010c15a3c0(puVar3);
    func_0x00010c2205c0(puVar2,param_3,(long)(int)puVar5);
    puVar5 = puVar3;
    func_0x00010c15a340(puVar3);
    func_0x00010c2204c0(puVar2,param_3,(long)(int)puVar5);
    puVar5 = puVar3;
    func_0x00010c15a380();
    uVar1 = (int)puVar5 - 1;
    lVar4 = 0;
    if (uVar1 < 4) {
      lVar4 = (ulong)uVar1 + 1;
    }
    func_0x00010c220580(puVar2,param_3,lVar4);
    func_0x00010c15a3a0(puVar3);
    dVar10 = (double)param_1;
    func_0x00010c2205a0(dVar10,puVar2);
    fVar9 = SUB84(dVar10,0);
    puVar5 = puVar3;
    func_0x00010c297700(puVar3);
    func_0x00010c2203e0(puVar2,param_3,(long)(int)puVar5);
    puVar5 = puVar3;
    func_0x00010c297720(puVar3);
    func_0x00010c2204a0(puVar2,param_3,puVar5);
    puVar5 = puVar3;
    func_0x00010c294ca0(puVar3);
    func_0x00010c21fb80(puVar2,param_3,puVar5);
    puVar5 = puVar3;
    func_0x00010bf12b40(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16d880(puVar2,param_3,puVar5);
    _objc_release(puVar5);
    puVar5 = puVar3;
    func_0x00010bfaeb80(puVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_2;
    func_0x00010bf45a80(param_2,param_3,puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19c8a0(puVar2,param_3,lVar4);
    _objc_release(lVar4);
    _objc_release(puVar5);
    puVar5 = puVar3;
    func_0x00010c11f920(puVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_2;
    func_0x00010bf45a80(param_2,param_3,puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e71c0(puVar2,param_3,lVar4);
    _objc_release(lVar4);
    _objc_release(puVar5);
    puVar5 = puVar3;
    func_0x00010c104c40(puVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_2;
    func_0x00010bf45a80(param_2,param_3,puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1df280(puVar2,param_3,lVar4);
    _objc_release(lVar4);
    _objc_release(puVar5);
    puVar5 = puVar3;
    func_0x00010bf70a60(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18cb60(puVar2,param_3,puVar5);
    _objc_release(puVar5);
    puVar5 = puVar3;
    func_0x00010c29af40(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c221d60(puVar2,param_3,puVar5);
    _objc_release(puVar5);
    puVar5 = puVar3;
    func_0x00010bf6ff80(puVar3);
    func_0x00010c18c740(puVar2,param_3,(long)(int)puVar5);
    puVar5 = puVar3;
    func_0x00010bf8cf80(puVar3);
    func_0x00010c193de0(puVar2,param_3,(long)(int)puVar5);
    puVar5 = puVar3;
    func_0x00010c11f9a0(puVar3);
    func_0x00010c1e7260(puVar2,param_3,(long)(int)puVar5);
    func_0x00010bf4db60(puVar3);
    func_0x00010c182a40((double)fVar9,puVar2);
    puVar5 = puVar3;
    func_0x00010bf27ce0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c175720(puVar2,param_3,puVar5);
    _objc_release(puVar5);
    puVar5 = puVar3;
    func_0x00010c2976c0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c220540(puVar2,param_3,puVar5);
    _objc_release(puVar5);
    _objc_release(puVar3);
  }
  puVar5 = *(undefined **)(param_2 + 0x10);
  puVar3 = puVar6;
  if (puVar5 == (undefined *)0x0) {
    puVar6 = *(undefined **)(param_2 + 8);
    func_0x00010c269d40(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
  }
  else {
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b29e0();
    puVar6 = puVar5;
  }
LAB_10539cf7c:
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release(puVar2);
  return;
}



/* Entry: 10539d684; end: 10539d6b3; -[SCNContentResolutionBlizzardProtoLoggerInterface .cxx_destruct] */

void FUN_10539d684(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10539d6b4; end: 10539d6db; -[SCNContentManagerContentManagerSupportInterfaces getPayloadProcessor] */

void FUN_10539d6b4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10539d6dc; end: 10539d703; -[SCNContentManagerContentManagerSupportInterfaces getNetworkManager] */

void FUN_10539d6dc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10539d704; end: 10539d72b; -[SCNContentManagerContentManagerSupportInterfaces getClientMetricsProcessor] */

void FUN_10539d704(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10539d72c; end: 10539d753; -[SCNContentManagerContentManagerSupportInterfaces getDBLocation] */

void FUN_10539d72c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10539d754; end: 10539d793; -[SCNContentManagerContentManagerSupportInterfaces getIsDataSaverModeEnabled] */

undefined8 FUN_10539d754(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf642a0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10539d794; end: 10539d79f; -[SCNContentManagerContentManagerSupportInterfaces getIsMainThread] */

void FUN_10539d794(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c077490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSThread_1126b47e0,PTR_s_isMainThread_1125fb730);
  return;
}



/* Entry: 10539d7a0; end: 10539d817; -[SCNContentManagerContentManagerSupportInterfaces getCacheRootDirectory] */

void FUN_10539d7a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b8040;
  _objc_alloc(PTR_PTR_1126b8040);
  puVar2 = puVar1;
  func_0x0001000f73a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x000100088750();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c040220(puVar1,param_2,puVar2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10539d818; end: 10539d81f; -[SCNContentManagerContentManagerSupportInterfaces getCacheScope] */

undefined8 FUN_10539d818(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10539d820; end: 10539d827; -[SCNContentManagerContentManagerSupportInterfaces getNetworkMappingProvider] */

void FUN_10539d820(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x50),PTR_s_target_112678178);
  return;
}



/* Entry: 10539d828; end: 10539d86f; -[SCNContentManagerContentManagerSupportInterfaces getAuthContextDelegate] */

void FUN_10539d828(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010bf106e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10539d870; end: 10539d8d7; -[SCNContentManagerContentManagerSupportInterfaces getCronetPointer] */

void FUN_10539d870(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010bfcfa00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf5c580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10539d8d8; end: 10539d8df; -[SCNContentManagerContentManagerSupportInterfaces getStreamingManifestParser] */

undefined8 FUN_10539d8d8(void)

{
  return 0;
}



/* Entry: 10539d8e0; end: 10539d9ff; -[SCNContentManagerContentManagerSupportInterfaces .cxx_destruct] */

void FUN_10539d8e0(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
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



/* Entry: 10539da00; end: 10539da0b;  */

bool FUN_10539da00(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10539da0c; end: 10539da9b;  */

undefined * FUN_10539da0c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bb6d0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e20(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110dd5eb8,
                        &UNK_10dd994de,&UNK_10dd995f0,0xf,FUN_10539da9c,0,&UNK_10dd9962c);
    do {
      if (puRam00000001136bb6d0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bb6d0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bb6d0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bb6d0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bb6d0;
}



/* Entry: 10539da9c; end: 10539daa7;  */

bool FUN_10539da9c(uint param_1)

{
  return param_1 < 0xf;
}



/* Entry: 10539daa8; end: 10539db23;  */

undefined * FUN_10539daa8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bb6d8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110dd5ed8,
                        &UNK_10dd9965f,&UNK_10dd9967c,5,FUN_10539db24,0);
    do {
      if (puRam00000001136bb6d8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bb6d8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bb6d8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bb6d8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bb6d8;
}



/* Entry: 10539db24; end: 10539db2f;  */

bool FUN_10539db24(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 10539db30; end: 10539dbab; +[SCAPbDataContentResolve descriptor] */

undefined * FUN_10539db30(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bb6e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a2ed00,
                        &PTR____CFConstantStringClassReference_110dd5ef8,
                        &PTR_s_snapchat_data_1130d19c0,&PTR_s_contentResolveTimeMs_1130d19d8,0x11,
                        0x70,0x1c);
    func_0x00010c2289e0();
    puRam00000001136bb6e0 = puVar1;
  }
  return puRam00000001136bb6e0;
}



/* Entry: 10539dbac; end: 10539dc27; +[SCAPbDataContentResolve_VariantInfo descriptor] */

undefined * FUN_10539dbac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bb6e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a2ed50,
                        &PTR____CFConstantStringClassReference_110dd5f18,
                        &PTR_s_snapchat_data_1130d19c0,&PTR_s_variantCofConfigId_1130d1bf8,0x1b,0xa8
                        ,0x1c);
    func_0x00010c228780();
    puRam00000001136bb6e8 = puVar1;
  }
  return puRam00000001136bb6e8;
}



/* Entry: 10539dc28; end: 10539dccb;  */

void FUN_10539dc28(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126b8048;
  _objc_alloc(PTR_PTR_1126b8048);
  lVar2 = param_1;
  FUN_10539dccc(param_1);
  _objc_retainAutoreleasedReturnValue();
  if (*(char *)(param_1 + 600) == '\x01') {
    param_1 = param_1 + 0x230;
    FUN_10539f6b8(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    param_1 = 0;
  }
  func_0x00010c0606a0(puVar1,param_2,lVar2,param_1);
  func_0x00010539dd84();
  func_0x00010539dd7c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10539dccc; end: 10539dcfb;  */

void FUN_10539dccc(long param_1)

{
  if (*(char *)(param_1 + 0x228) == '\x01') {
    func_0x00010b109884();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10539dcfc; end: 10539dd2b;  */

undefined1 * FUN_10539dcfc(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x228] = 0;
  FUN_10539dd2c();
  return param_1;
}



/* Entry: 10539dd2c; end: 10539dd3f;  */

void FUN_10539dd2c(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x228) == '\x01') {
    func_0x0001052b5fec();
    *(undefined1 *)(param_1 + 0x228) = 1;
    return;
  }
  return;
}



/* Entry: 10539dd40; end: 10539dd7b;  */

void FUN_10539dd40(long param_1)

{
  func_0x0001052b5fec();
  *(undefined1 *)(param_1 + 0x228) = 1;
  return;
}



/* Entry: 10539dd7c; end: 10539dd8f;  */

void FUN_10539dd7c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10539dd90; end: 10539de8b;  */

void FUN_10539dd90(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  if (param_2 != 0) {
    _objc_retain(param_2);
    ppuStack_48 = &PTR_DAT_110880450;
    lStack_50 = param_2;
    func_0x0001000de59c(&uStack_40,&ppuStack_48,&lStack_50,FUN_10539de8c);
    uVar1 = uStack_38;
    uVar3 = uStack_40;
    uStack_40 = 0;
    uStack_38 = 0;
    func_0x0001000df524(&uStack_40);
    _objc_release(lStack_50);
    param_1[1] = uVar1;
    *param_1 = uVar3;
    uStack_60 = 0;
    uStack_58 = 0;
    FUN_10539e134(&uStack_60);
    func_0x00010539e168();
    return;
  }
  uVar3 = 0x10;
  ___cxa_allocate_exception(0x10);
  FUN_10527a174();
  ___cxa_throw(uVar3,PTR___ZTISt16invalid_argument_110352248,
               PTR___ZNSt16invalid_argumentD1Ev_1103461e8);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10539de5c);
  (*pcVar2)();
}



/* Entry: 10539de8c; end: 10539df83;  */

void FUN_10539de8c(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar8 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)0x38;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_110880490;
  puVar4[3] = &PTR_DAT_110880508;
  puVar5 = puVar8;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar6 = puVar5;
  func_0x0001000de520();
  lVar7 = puVar6[1];
  uVar9 = *puVar6;
  puVar4[5] = puVar6[1];
  puVar4[4] = uVar9;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  _objc_retain(puVar8);
  puVar4[6] = puVar8;
  _objc_autoreleasePoolPop(puVar5);
  FUN_10539e160();
  puVar4[3] = &PTR_FUN_1108804e0;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_10539e134(&uStack_50);
  return;
}



/* Entry: 10539df84; end: 10539df87;  */

void FUN_10539df84(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110880490;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10539df88; end: 10539df9b;  */

void FUN_10539df88(void)

{
  FUN_10539e124();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10539df9c; end: 10539dfa7;  */

long FUN_10539df9c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 0x20;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110880450;
    _objc_retain(lVar4);
    func_0x0001005f2030(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x0001005f2294(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 10539dfa8; end: 10539dfe7;  */

void FUN_10539dfa8(void)

{
  func_0x00010539e170();
  return;
}



/* Entry: 10539dfe8; end: 10539e08f;  */

void FUN_10539dfe8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x0001001011a4(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b109884(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dd760(uVar2);
  FUN_10539e160();
  func_0x00010539e168();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 10539e090; end: 10539e123;  */

long FUN_10539e090(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110880450;
    _objc_retain(lVar3);
    func_0x0001005f2030(param_1,&ppuStack_38,lVar3);
    _objc_release(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x0001005f2294(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 10539e124; end: 10539e133;  */

void FUN_10539e124(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110880490;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10539e134; end: 10539e15f;  */

long FUN_10539e134(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10539e160; end: 10539e17b;  */

void FUN_10539e160(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10539e17c; end: 10539e1f3; -[SCNMdpSignalCenterContentResolutionMonitor initWithCpp:] */

undefined1 * FUN_10539e17c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126e7d30;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_10539ef40();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_10539e938(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10539e1f4; end: 10539e2b3; +[SCNMdpSignalCenterContentResolutionMonitor getUserScoped:] */

void FUN_10539e1f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  func_0x00010539f030();
  func_0x00010b189580(&uStack_40,auStack_58);
  func_0x00010539efe0();
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10539e2b4(&uStack_70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010539ef6c();
  func_0x00010539f010();
  func_0x00010539efa8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10539e2b4; end: 10539e4eb;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10539e2b4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  int extraout_w10;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined *puStack_80;
  long lStack_78;
  long alStack_68 [7];
  
  puVar1 = PTR_PTR_1126b8058;
  _objc_alloc_init();
  puVar2 = puVar1;
  func_0x00010bfc5fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar1);
  alStack_68[5] = 0;
  alStack_68[6] = 0;
  alStack_68[1] = 0;
  alStack_68[2] = 0;
  FUN_10539e95c(alStack_68 + 3,param_1,alStack_68 + 1);
  FUN_10539e9b0(alStack_68 + 5,alStack_68 + 3);
  func_0x00010539e8a8(alStack_68 + 3);
  func_0x00010539e8a8(alStack_68 + 1);
  func_0x0001003b69cc(alStack_68);
  func_0x0001003b6c18(alStack_68 + 3,alStack_68[0]);
  lStack_78 = alStack_68[0];
  alStack_68[0] = 0;
  lStack_90 = 0;
  lStack_88 = 0;
  lStack_a0 = alStack_68[5] + 0x48;
  lStack_98 = CONCAT71(lStack_98._1_7_,1);
  puStack_80 = puVar1;
  __ZNSt3__15mutex4lockEv();
  lVar3 = alStack_68[5];
  func_0x00010539e9f0();
  if ((int)lVar3 == 0) {
    puVar4 = (undefined8 *)0x18;
    __Znwm();
    lVar3 = lStack_78;
    puVar1 = puStack_80;
    *puVar4 = &PTR_FUN_110880540;
    puStack_80 = (undefined *)0x0;
    lStack_78 = 0;
    puVar4[2] = lVar3;
    puVar4[1] = puVar1;
    plVar5 = *(long **)(alStack_68[5] + 0x90);
    *(undefined8 **)(alStack_68[5] + 0x90) = puVar4;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))(plVar5);
    }
  }
  else {
    FUN_10539e9b0(&lStack_90,alStack_68 + 5);
  }
  func_0x0001000df5a0(&lStack_a0);
  if (lStack_90 != 0) {
    lStack_a0 = lStack_90;
    lStack_98 = lStack_88;
    if (lStack_88 != 0) {
      do {
        FUN_10539ef40();
      } while (extraout_w10 != 0);
    }
    FUN_10539ea38(&puStack_80);
    func_0x00010539ef58();
  }
  uStack_a8 = alStack_68[4];
  uStack_b0 = alStack_68[3];
  alStack_68[3] = 0;
  alStack_68[4] = 0;
  func_0x00010539ef88();
  FUN_10539ee60(&puStack_80);
  func_0x0001003b6c64(alStack_68 + 3);
  lVar3 = alStack_68[0];
  alStack_68[0] = 0;
  if (lVar3 != 0) {
    func_0x00010539f018();
  }
  func_0x00010539e8a8(alStack_68 + 5);
  func_0x0001003b6c64(&uStack_b0);
  _objc_release(0);
  func_0x00010539efa8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10539e4ec; end: 10539e57f; +[SCNMdpSignalCenterContentResolutionMonitor getGlobalScoped] */

void FUN_10539e4ec(void)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  func_0x00010b189e8c(&uStack_30);
  uStack_38 = uStack_28;
  uStack_40 = uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10539e2b4(&uStack_40);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010539ef6c();
  func_0x00010539ef58();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10539e580; end: 10539e687; -[SCNMdpSignalCenterContentResolutionMonitor requestMonitoringContent:observer:] */

void FUN_10539e580(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x00010539f030();
  FUN_10539dd90(auStack_68,param_4);
  (**(code **)(*plVar1 + 0x10))(auStack_40,plVar1,auStack_58,auStack_68);
  func_0x00010539ee8c(auStack_68);
  func_0x00010539efe0();
  func_0x00010b49b48c(auStack_40);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010539f024();
  func_0x00010539f000();
  func_0x00010539efa8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar1);
  return;
}



/* Entry: 10539e688; end: 10539e70b; -[SCNMdpSignalCenterContentResolutionMonitor getSignalCollector] */

void FUN_10539e688(void)

{
  undefined1 auStack_30 [16];
  
  func_0x00010539eff8();
  FUN_10539f390(auStack_30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010539ef7c();
  func_0x00010539eed4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10539e70c; end: 10539e78f; -[SCNMdpSignalCenterContentResolutionMonitor getPlaylistScopedAnalyticsInfoAccessor] */

void FUN_10539e70c(void)

{
  undefined1 auStack_30 [16];
  
  func_0x00010539eff8();
  FUN_10539f910(auStack_30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010539ef7c();
  func_0x00010539eef8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10539e790; end: 10539e813; -[SCNMdpSignalCenterContentResolutionMonitor getUserScopedSignalAccessor] */

void FUN_10539e790(void)

{
  undefined1 auStack_30 [16];
  
  func_0x00010539eff8();
  FUN_10539fbe0(auStack_30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010539ef7c();
  func_0x00010539ef1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10539e814; end: 10539e867; -[SCNMdpSignalCenterContentResolutionMonitor .cxx_destruct] */

void FUN_10539e814(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110880520;
    func_0x0001004a52a0(param_1 + 8,&ppuStack_28);
  }
  FUN_10539e938((long *)(param_1 + 0x18));
  func_0x0001004a5588(param_1 + 8);
  return;
}



/* Entry: 10539e868; end: 10539e8cb; -[SCNMdpSignalCenterContentResolutionMonitor .cxx_construct] */

undefined8 * FUN_10539e868(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x00010015c19c();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_10539ef40();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10539e8cc; end: 10539e937;  */

void FUN_10539e8cc(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126b8050;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_10539ef40();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  FUN_10539e938(&uStack_30);
  return;
}



/* Entry: 10539e938; end: 10539e95b;  */

void FUN_10539e938(long param_1)

{
  func_0x00010539efc4();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10539e95c; end: 10539e9af;  */

void FUN_10539e95c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = param_2;
  __ZNSt3__112__get_sp_mutEPKv();
  __ZNSt3__18__sp_mut4lockEv();
  uVar2 = *param_3;
  uVar4 = param_2[1];
  uVar3 = *param_2;
  param_2[1] = param_3[1];
  *param_2 = uVar2;
  param_3[1] = uVar4;
  *param_3 = uVar3;
  __ZNSt3__18__sp_mut6unlockEv(puVar1);
  uVar2 = *param_3;
  param_1[1] = param_3[1];
  *param_1 = uVar2;
  *param_3 = 0;
  param_3[1] = 0;
  return;
}



/* Entry: 10539e9b0; end: 10539ea37;  */

undefined8 * FUN_10539e9b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x00010539ef6c();
  return param_1;
}



/* Entry: 10539ea38; end: 10539ec6f;  */

void FUN_10539ea38(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined8 uVar1;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_58;
  long lStack_50;
  undefined **ppuStack_48;
  
  if (param_3 != 0) {
    do {
      FUN_10539ef40();
    } while (extraout_w10 != 0);
    do {
      FUN_10539ef40();
    } while (extraout_w10_00 != 0);
  }
  uVar1 = *param_1;
  uStack_80 = param_2;
  lStack_78 = param_3;
  FUN_10539ed04(&lStack_58,&uStack_80);
  if (lStack_58 != 0) {
    ppuStack_48 = &PTR_DAT_110880520;
    lStack_70 = lStack_58;
    lStack_68 = lStack_50;
    if (lStack_50 != 0) {
      do {
        FUN_10539ef40();
      } while (extraout_w10_01 != 0);
    }
    func_0x00010015c218(&ppuStack_48,&lStack_70,FUN_10539e8cc);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001000df524(&lStack_70);
  }
  func_0x00010c220160(uVar1);
  func_0x00010539efbc();
  FUN_10539e938(&lStack_58);
  func_0x00010539ef88();
  func_0x00010539ef58();
  func_0x0001003b8370(param_1[1]);
  return;
}



/* Entry: 10539ec70; end: 10539ec73;  */

undefined8 * FUN_10539ec70(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110880540;
  FUN_10539ee60(param_1 + 1);
  return param_1;
}



/* Entry: 10539ec74; end: 10539ec87;  */

void FUN_10539ec74(void)

{
  FUN_10539ecd8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10539ec88; end: 10539ecd7;  */

void FUN_10539ec88(long param_1,long param_2)

{
  int extraout_w10;
  
  if (*(long *)(param_2 + 8) != 0) {
    do {
      FUN_10539ef40();
    } while (extraout_w10 != 0);
  }
  FUN_10539ea38(param_1 + 8);
  func_0x00010539ef6c();
  return;
}



/* Entry: 10539ecd8; end: 10539ed03;  */

undefined8 * FUN_10539ecd8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110880540;
  FUN_10539ee60(param_1 + 1);
  return param_1;
}



/* Entry: 10539ed04; end: 10539ee17;  */

void FUN_10539ed04(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [8];
  undefined8 *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  undefined1 uStack_38;
  undefined8 *puStack_30;
  long lStack_28;
  
  puStack_30 = (undefined8 *)0x0;
  lStack_28 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10539e95c(&puStack_40,param_2,&uStack_50);
  FUN_10539e9b0(&puStack_30,&puStack_40);
  func_0x00010539f010();
  func_0x00010539ef88();
  puStack_40 = puStack_30 + 9;
  uStack_38 = 1;
  __ZNSt3__15mutex4lockEv();
  puStack_60 = puStack_30;
  lStack_58 = lStack_28;
  if (lStack_28 != 0) {
    plVar1 = (long *)(lStack_28 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_10539ee18(puStack_30 + 3,&puStack_40,&puStack_60);
  func_0x00010539ef58();
  if (puStack_30[0x11] == 0) {
    uVar5 = *puStack_30;
    param_1[1] = puStack_30[1];
    *param_1 = uVar5;
    *puStack_30 = 0;
    puStack_30[1] = 0;
    func_0x0001000df5a0(&puStack_40);
    func_0x00010539e8a8(&puStack_30);
    return;
  }
  __ZNSt13exception_ptrC1ERKS_(auStack_68);
  __ZSt17rethrow_exceptionSt13exception_ptr(auStack_68);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10539eddc);
  (*pcVar4)();
}



/* Entry: 10539ee18; end: 10539ee57;  */

void FUN_10539ee18(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  while (uVar1 = param_3, FUN_10539ee58(), (uVar1 & 1) == 0) {
    __ZNSt3__118condition_variable4waitERNS_11unique_lockINS_5mutexEEE(param_1,param_2);
  }
  return;
}



/* Entry: 10539ee58; end: 10539ee5f;  */

bool FUN_10539ee58(long *param_1)

{
  bool bVar1;
  
  if ((*(byte *)(*param_1 + 0x10) & 1) == 0) {
    bVar1 = *(long *)(*param_1 + 0x88) != 0;
    func_0x00010539efe8();
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 10539ee60; end: 10539ef3f;  */

undefined8 * FUN_10539ee60(undefined8 *param_1)

{
  func_0x0001003b6cec(param_1 + 1);
  _objc_release(*param_1);
  return param_1;
}



/* Entry: 10539ef40; end: 10539f047;  */

void FUN_10539ef40(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10539f048; end: 10539f0bf; -[SCNMdpSignalCenterContentResolutionSignalCollector initWithCpp:] */

undefined1 * FUN_10539f048(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126e7d38;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_10539f538();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x00010539eed4(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10539f0c0; end: 10539f1a3; -[SCNMdpSignalCenterContentResolutionSignalCollector addVariantSelectionSignals:params:] */

void FUN_10539f0c0(void)

{
  long unaff_x21;
  long *plVar1;
  undefined1 auStack_280 [552];
  undefined1 auStack_58 [24];
  
  func_0x00010539f550();
  _objc_retain();
  plVar1 = *(long **)(unaff_x21 + 0x18);
  func_0x00010539f590(auStack_58);
  func_0x00010b10933c(auStack_280);
  (**(code **)(*plVar1 + 0x10))(plVar1,auStack_58,auStack_280);
  func_0x0001052b5d04(auStack_280);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
  func_0x00010539f564();
  func_0x00010539f548();
  return;
}



/* Entry: 10539f1a4; end: 10539f253; -[SCNMdpSignalCenterContentResolutionSignalCollector addPlaylistSignal:operation:] */

void FUN_10539f1a4(void)

{
  long unaff_x21;
  long *plVar1;
  undefined1 auStack_48 [24];
  
  func_0x00010539f550();
  plVar1 = *(long **)(unaff_x21 + 0x18);
  func_0x00010539f590(auStack_48);
  (**(code **)(*plVar1 + 0x18))(plVar1,auStack_48);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  func_0x00010539f548();
  return;
}



/* Entry: 10539f254; end: 10539f32f; -[SCNMdpSignalCenterContentResolutionSignalCollector addPlayerSignal:operation:playerInfo:] */

void FUN_10539f254(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined1 auStack_70 [40];
  undefined1 auStack_48 [24];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x00010539f590(auStack_48);
  FUN_10539f5a0(auStack_70,param_5);
  (**(code **)(*plVar1 + 0x20))(plVar1,auStack_48,param_4,auStack_70);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  func_0x00010539f564();
  func_0x00010539f548();
  return;
}



/* Entry: 10539f330; end: 10539f38f; -[SCNMdpSignalCenterContentResolutionSignalCollector addIsNewUserSignal:] */

void FUN_10539f330(long param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(**(long **)(param_1 + 0x18) + 0x28))(*(long **)(param_1 + 0x18),param_3);
  return;
}



/* Entry: 10539f390; end: 10539f3bb;  */

void FUN_10539f390(long *param_1)

{
  if (*param_1 != 0) {
    FUN_10539f454();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10539f3bc; end: 10539f40f; -[SCNMdpSignalCenterContentResolutionSignalCollector .cxx_destruct] */

void FUN_10539f3bc(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110880580;
    func_0x0001004a52a0(param_1 + 8,&ppuStack_28);
  }
  func_0x00010539eed4((long *)(param_1 + 0x18));
  func_0x0001004a5588(param_1 + 8);
  return;
}



/* Entry: 10539f410; end: 10539f453; -[SCNMdpSignalCenterContentResolutionSignalCollector .cxx_construct] */

undefined8 * FUN_10539f410(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x00010015c19c();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_10539f538();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10539f454; end: 10539f4c7;  */

void FUN_10539f454(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110880580;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      FUN_10539f538();
    } while (extraout_w10 != 0);
  }
  func_0x00010015c218(&ppuStack_28,&uStack_40,FUN_10539f4c8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010539f584();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10539f4c8; end: 10539f537;  */

void FUN_10539f4c8(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126b8060;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_10539f538();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  func_0x00010539eed4(&uStack_30);
  return;
}



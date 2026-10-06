/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1055758b4; end: 1055758bb; -[CTPItemsRepositoryImplementation registeredLoaders] */

undefined8 FUN_1055758b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1055758bc; end: 10557591b; -[CTPItemsRepositoryImplementation .cxx_destruct] */

void FUN_1055758bc(long param_1)

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



/* Entry: 10557591c; end: 105575987; -[CTPItemsLoaderClient initWithLoaders:] */

undefined1 * FUN_10557591c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e8fe8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010be89900(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105575988; end: 105575b5b; -[CTPItemsLoaderClient _registerLoaders:] */

void FUN_105575988(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  puVar6 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_f0,0x10);
  if (lVar2 != 0) {
    lVar10 = *plStack_120;
    do {
      lVar11 = 0;
      do {
        if (*plStack_120 != lVar10) {
          _objc_enumerationMutation(param_3);
        }
        lVar9 = *(long *)(lStack_128 + lVar11 * 8);
        lVar3 = lVar9;
        func_0x00010bfa4340();
        if (((lVar3 != 0) && (lVar3 = lVar9, func_0x00010bfa4340(), lVar3 != 10)) &&
           (lVar3 = lVar9, func_0x00010bfa4340(), puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570,
           lVar3 != 0xb)) {
          lVar3 = lVar9;
          func_0x00010bfa4340(lVar9);
          func_0x00010c0df840(puVar4,param_2,lVar3);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar1;
          func_0x00010c0e00e0(puVar1,param_2,puVar4);
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (puVar5 == (undefined *)0x0) {
            func_0x00010c1d0640(puVar1,param_2,lVar9,puVar4);
          }
          _objc_release(puVar4);
        }
        lVar11 = lVar11 + 1;
      } while (lVar2 != lVar11);
      lVar2 = param_3;
      puVar6 = &uStack_130;
      func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  puVar4 = puVar1;
  func_0x00010bf51e00();
  uVar8 = *(undefined8 *)(param_1 + 8);
  *(undefined **)(param_1 + 8) = puVar4;
  _objc_release(uVar8);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bfa3d00(puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = (undefined1 *)puVar6;
  func_0x00010c27dd80();
  func_0x00010c0df840(puVar1,param_2,puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  uVar8 = *(undefined8 *)(param_3 + 8);
  func_0x00010c0e00e0(uVar8,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar8);
  return;
}



/* Entry: 105575b5c; end: 105575be3; -[CTPItemsLoaderClient _loaderForFeed:] */

void FUN_105575b5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bfa3d00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c27dd80();
  func_0x00010c0df840(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0e00e0(uVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105575be4; end: 105575beb; -[CTPItemsLoaderClient loaderType] */

undefined8 FUN_105575be4(void)

{
  return 1;
}



/* Entry: 105575bec; end: 105575e4f; -[CTPItemsLoaderClient itemsForFeed:returnCachedFirst:useChecksum:] */

void FUN_105575bec(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  if (param_3 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                        &PTR____CFConstantStringClassReference_110deae58,1,0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  else {
    puVar3 = PTR_PTR_1126badb0;
    _objc_alloc(PTR_PTR_1126badb0);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    uStack_50 = 0x105575d08;
    puStack_48 = &UNK_110897868;
    uStack_40 = param_1;
    _objc_retain(param_3);
    puStack_38 = param_3;
    func_0x00010c031700(puVar3,param_2,&puStack_60);
    puVar1 = puStack_38;
  }
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105575e50; end: 105575e5b; -[CTPItemsLoaderClient continuouslyUpdatingItemsForFeed:] */

void FUN_105575e50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c085110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_itemsForFeed_returnCachedFirst_u_1125fee50,param_3,0,0);
  return;
}



/* Entry: 105575e5c; end: 105575e67; -[CTPItemsLoaderClient .cxx_destruct] */

void FUN_105575e5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105575e68; end: 105575f0f; -[CTPItemsLoaderClientEmoji initWithExperiments:] */

undefined1 * FUN_105575e68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e8ff0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105575f10; end: 105575f17; -[CTPItemsLoaderClientEmoji feedType] */

undefined8 FUN_105575f10(void)

{
  return 7;
}



/* Entry: 105575f18; end: 105575f63; -[CTPItemsLoaderClientEmoji loadItems] */

void FUN_105575f18(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010be4d260();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105575f64; end: 105575f73;  */

void FUN_105575f64(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2619f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126af5d0,PTR_s_successWithObject__1126760a0,param_2);
  return;
}



/* Entry: 105575f74; end: 105575fc3; -[CTPItemsLoaderClientEmoji _loadEmoji] */

void FUN_105575f74(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010be4d280();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be80e40(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105575fc4; end: 10557608b; -[CTPItemsLoaderClientEmoji _loadEmojiSet] */

void FUN_105575fc4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puVar1 = PTR_PTR_1126ae820;
  _objc_alloc_init();
  uVar2 = *(undefined8 *)(param_1 + 8);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x105576048;
  puStack_30 = &UNK_110842e18;
  _objc_retain();
  puStack_28 = puVar1;
  func_0x00010c0f7fc0(uVar2,param_2,&puStack_48);
  _objc_release(puStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10557608c; end: 10557609b; -[CTPItemsLoaderClientEmoji _processEmojiSet:] */

void FUN_10557608c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b8610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_map__11260bb98,&PTR___NSConcreteGlobalBlock_110897a78);
  return;
}



/* Entry: 10557609c; end: 1055760eb;  */

void FUN_10557609c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf33060(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1055760ec; end: 105576287;  */

void FUN_1055760ec(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bf8e2c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126badc0;
  _objc_alloc(PTR_PTR_1126badc0);
  uVar1 = param_2;
  func_0x00010c2711a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c0531c0(puVar3);
  _objc_release(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105576288; end: 1055762b7; -[CTPItemsLoaderClientEmoji .cxx_destruct] */

void FUN_105576288(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055762b8; end: 105576363;  */

void FUN_1055762b8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  func_0x00010c067fc0();
  puVar1 = PTR_PTR_1126ba8d8;
  _objc_alloc(PTR_PTR_1126ba8d8);
  func_0x00010c01dac0();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126baa60;
  _objc_alloc(PTR_PTR_1126baa60);
  func_0x00010c01fe20();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105576364; end: 10557649b;  */

undefined1 *
FUN_105576364(undefined **param_1,undefined8 param_2,undefined **param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined ***pppuVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined **ppuStack_b0;
  undefined *puStack_a8;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_1 == (undefined **)0x3) {
    param_1 = &PTR__OBJC_CLASS___NSConstantArray_11117edf0;
    func_0x00010c0b8600(&PTR__OBJC_CLASS___NSConstantArray_11117edf0,param_2,
                        &PTR___NSConcreteGlobalBlock_110897b38);
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = &PTR__OBJC_CLASS___NSConstantArray_11117ee08;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126badc0;
    _objc_alloc();
    func_0x00010c0531c0();
    puVar3 = PTR_PTR_1126badc0;
    _objc_alloc();
    param_5 = 2;
    param_6 = 1;
    func_0x00010c0531c0();
    param_3 = &puStack_58;
    param_4 = 2;
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_58 = puVar2;
    puStack_50 = puVar3;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(ppuVar1);
    _objc_release();
  }
  else {
    puVar6 = (undefined *)0x0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return puVar6;
  }
  ___stack_chk_fail();
  pppuVar4 = &ppuStack_b0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_a8 = PTR_PTR_1126e8ff8;
  ppuStack_b0 = param_1;
  _objc_msgSendSuper2(&ppuStack_b0,PTR_s_init_1125d9248);
  if (pppuVar4 != (undefined ***)0x0) {
    _objc_retain(param_3);
    uVar5 = *(undefined8 *)((long)pppuVar4 + 8);
    *(undefined ***)((long)pppuVar4 + 8) = param_3;
    _objc_release(uVar5);
    _objc_retain(param_4);
    uVar5 = *(undefined8 *)((long)pppuVar4 + 0x10);
    *(undefined8 *)((long)pppuVar4 + 0x10) = param_4;
    _objc_release(uVar5);
    _objc_retain(param_5);
    uVar5 = *(undefined8 *)((long)pppuVar4 + 0x18);
    *(undefined8 *)((long)pppuVar4 + 0x18) = param_5;
    _objc_release(uVar5);
    _objc_retain(param_6);
    uVar5 = *(undefined8 *)((long)pppuVar4 + 0x20);
    *(undefined8 *)((long)pppuVar4 + 0x20) = param_6;
    _objc_release(uVar5);
    puVar6 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar5 = *(undefined8 *)((long)pppuVar4 + 0x28);
    *(undefined **)((long)pppuVar4 + 0x28) = puVar6;
    _objc_release(uVar5);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)pppuVar4;
}



/* Entry: 10557649c; end: 1055765cf; -[CTPItemsLoaderCompute initWithItemsPersistenceService:networkItemsClient:circumstanceEngine:repositoryLogger:] */

undefined1 *
FUN_10557649c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126e8ff8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1055765d0; end: 1055765d7; -[CTPItemsLoaderCompute loaderType] */

undefined8 FUN_1055765d0(void)

{
  return 2;
}



/* Entry: 1055765d8; end: 1055765e3; -[CTPItemsLoaderCompute itemsForFeed:returnCachedFirst:useChecksum:] */

void FUN_1055765d8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be461b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__itemsForFeed_returnCachedFirst__11256f208);
  return;
}



/* Entry: 1055765e4; end: 1055765fb; -[CTPItemsLoaderCompute itemsForFeed:pageToken:pageSize:returnCachedFirst:] */

void FUN_1055765e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
                    /* WARNING: Could not recover jumptable at 0x00010be461b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__itemsForFeed_returnCachedFirst__11256f208,param_3,param_6,0,param_4,
             param_5);
  return;
}



/* Entry: 1055765fc; end: 105576943; -[CTPItemsLoaderCompute _itemsForFeed:returnCachedFirst:useChecksum:pageToken:pageSize:] */

void FUN_1055765fc(undefined *param_1,undefined8 param_2,long param_3,ulong param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined **ppuStack_78;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_6);
  if (param_3 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    param_1 = PTR_PTR_1126ae6b8;
    puVar2 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  else {
    puStack_a0 = &uStack_a8;
    uStack_a8 = 0;
    uStack_98 = 0x3032000000;
    pcStack_90 = FUN_105576944;
    uStack_88 = 0x105576954;
    uStack_80 = 0;
    puStack_d0 = &uStack_d8;
    uStack_d8 = 0;
    uStack_c8 = 0x3032000000;
    pcStack_c0 = FUN_105576944;
    uStack_b8 = 0x105576954;
    uStack_b0 = 0;
    lVar3 = param_3;
    func_0x00010c247520(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bd420();
    _objc_release(lVar3);
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    if (puStack_a0[5] == 0) {
      ppuStack_78 = &PTR____CFConstantStringClassReference_110deaef8;
      puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      lStack_70 = param_3;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99240(puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      param_1 = PTR_PTR_1126ae6b8;
      puVar2 = PTR_PTR_1126af5d0;
      func_0x00010bfa01c0(PTR_PTR_1126af5d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0860a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      _objc_release(puVar1);
    }
    else if (param_6 == 0) {
      if ((param_4 & 1) == 0) {
        func_0x00010be1fd40(param_1);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010be1fd60(param_1);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      func_0x00010be11f40(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    __Block_object_dispose(&uStack_d8,8);
    _objc_release(uStack_b0);
    __Block_object_dispose(&uStack_a8,8);
    _objc_release(uStack_80);
  }
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    __Block_object_dispose(&uStack_d8,8);
    lVar3 = 8;
    __Block_object_dispose(&uStack_a8);
    __Unwind_Resume();
    *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(lVar3 + 0x28);
    *(undefined8 *)(lVar3 + 0x28) = 0;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105576944; end: 10557695b;  */

void FUN_105576944(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10557695c; end: 1055769e3;  */

void FUN_10557695c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010bf51e00();
  _objc_release(param_3);
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = uVar3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1055769e4; end: 105576c4f; -[CTPItemsLoaderCompute continuouslyUpdatingItemsForFeed:] */

void FUN_1055769e4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uStack_150;
  undefined8 *puStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c085100();
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_105576c50;
  puStack_88 = &UNK_110897b88;
  _objc_retain(param_3);
  lVar2 = lVar1;
  lStack_80 = param_3;
  func_0x00010bfb2660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_initWeak(auStack_a8,param_1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010bfa3d00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar3;
  func_0x00010c0e05c0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = auStack_a8;
  _objc_copyWeak(auStack_b0,puVar6);
  _objc_retain(param_3);
  uVar4 = uVar7;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(lVar1);
  _objc_release(uVar3);
  puVar8 = PTR_PTR_1126ae6b8;
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_78 = lVar2;
  uStack_70 = uVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cab40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_a8);
  _objc_release(lVar2);
  _objc_release(lStack_80);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_destroyWeak(auStack_b0);
    _objc_destroyWeak(auStack_a8);
    __Unwind_Resume();
    _objc_retain(puVar6);
    puStack_148 = &uStack_150;
    uStack_150 = 0;
    uStack_140 = 0x3032000000;
    pcStack_138 = FUN_105576944;
    uStack_130 = 0x105576954;
    uStack_128 = 0;
    uVar7 = *(undefined8 *)(param_3 + 0x20);
    _objc_retain(uVar7);
    func_0x00010c0c0800(puVar6);
    puVar8 = (undefined *)puStack_148[5];
    _objc_retain(puVar8);
    _objc_release(uVar7);
    __Block_object_dispose(&uStack_150,8);
    _objc_release(uStack_128);
    _objc_release(puVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 105576c50; end: 105576d7b;  */

void FUN_105576c50(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_105576944;
  uStack_50 = 0x105576954;
  uStack_48 = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010c0c0800(param_2);
  uVar2 = puStack_68[5];
  _objc_retain(uVar2);
  _objc_release(uVar1);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105576d7c; end: 105576dbf;  */

void FUN_105576d7c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126ae6b8;
  func_0x00010bf8eb20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105576dc0; end: 105576e37;  */

void FUN_105576dc0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar2 = PTR_PTR_1126ae6b8;
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0860a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105576e38; end: 10557701f;  */

void FUN_105576e38(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar2 == 0) {
    puVar7 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_2);
    lVar4 = param_2;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar4 != 0) {
      lVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_2);
        }
        uVar5 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010bfa3d00(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c27dd80();
        func_0x00010beb5740(lVar2);
        lVar6 = lVar2;
        func_0x00010be46200(lVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar3);
        _objc_release(lVar6);
        _objc_release(uVar5);
        lVar9 = lVar9 + 1;
      } while (lVar4 != lVar9);
      lVar4 = param_2;
      func_0x00010bf52a60();
    }
    _objc_release(param_2);
    puVar7 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  _objc_release(lVar2);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010be1fd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 105577020; end: 10557702b; -[CTPItemsLoaderCompute _getItemsFromCacheThenNetworkIfNecessaryForFeed:useChecksum:] */

void FUN_105577020(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be1fd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__getItemsFromCacheThenNetworkIfN_1125658f8,param_3,param_4,0,0);
  return;
}



/* Entry: 10557702c; end: 10557724b; -[CTPItemsLoaderCompute _getItemsFromCacheThenNetworkIfNecessaryForFeed:useChecksum:pageSize:pageToken:] */

void FUN_10557702c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126ae820;
  _objc_alloc_init();
  uVar2 = param_1;
  func_0x00010be11fa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae810;
  _objc_alloc_init();
  _objc_initWeak(auStack_68,param_1);
  puStack_80 = &uStack_88;
  uStack_88 = 0;
  uStack_78 = 0x2020000000;
  uStack_70 = 0;
  uVar4 = uVar2;
  func_0x00010bfb0d80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar3);
  _objc_copyWeak(auStack_a0,auStack_68);
  _objc_retain(param_3);
  _objc_retain(puVar1);
  uStack_98 = param_5;
  _objc_retain(param_6);
  uVar5 = uVar4;
  uStack_90 = param_4;
  func_0x00010c25ff60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_retain(puVar1);
  _objc_release(param_6);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_a0);
  _objc_release(puVar3);
  _objc_release(puVar1);
  __Block_object_dispose(&uStack_88,8);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(param_6);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10557724c; end: 10557743b;  */

void FUN_10557724c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_2);
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x20));
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x2020000000;
    uStack_48 = 0;
    func_0x00010c0c0800(param_2);
    if (*(char *)(puStack_58 + 3) == '\x01') {
      lVar2 = *(long *)(param_1 + 0x28);
      func_0x00010bfa3d00();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c27dd80();
      FUN_105576364();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      if (lVar3 != 0) {
        *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18) = 1;
        uVar5 = *(undefined8 *)(param_1 + 0x30);
        puVar4 = PTR_PTR_1126af5d0;
        func_0x00010c2619e0(PTR_PTR_1126af5d0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0d9840(uVar5);
        _objc_release(puVar4);
      }
      _objc_release(lVar3);
    }
    else {
      *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18) = 2;
      func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x30));
    }
    if (*(long *)(param_1 + 0x50) < 1) {
      func_0x00010be1fd80(lVar1);
    }
    else {
      func_0x00010be1fda0(lVar1);
    }
    __Block_object_dispose(&uStack_60,8);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 10557743c; end: 105577473;  */

void FUN_10557743c(long param_1,long param_2)

{
  func_0x00010bf529e0();
  if (param_2 == 0) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  }
  return;
}



/* Entry: 105577474; end: 105577487;  */

void FUN_105577474(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 105577488; end: 10557774b; -[CTPItemsLoaderCompute _getItemsFromNetworkIfCacheExpired:lifecycle:behaviorSubject:previousResult:useChecksum:] */

void FUN_105577488(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,int param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_120 [8];
  undefined8 uStack_118;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_105576944;
  uStack_88 = 0x105576954;
  uStack_80 = 0;
  uStack_d8 = 0;
  uStack_c8 = 0x3032000000;
  pcStack_c0 = FUN_105576944;
  uStack_b8 = 0x105576954;
  uStack_b0 = 0;
  uVar1 = param_3;
  puStack_d0 = &uStack_d8;
  puStack_a0 = &uStack_a8;
  func_0x00010c247520(param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_100 = 0xc2000000;
  pcStack_f8 = FUN_10557774c;
  puStack_f0 = &UNK_110897b58;
  puStack_e8 = &uStack_a8;
  puStack_e0 = &uStack_d8;
  func_0x00010c0bd420();
  _objc_release(uVar1);
  if (param_7 == 0) {
    uVar1 = param_1;
    func_0x00010bdcf280(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_110,param_1);
    uVar2 = uVar1;
    func_0x00010bfb0d80(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_4);
    _objc_copyWeak(auStack_120,auStack_110);
    _objc_retain(param_5);
    uStack_118 = param_6;
    _objc_retain(param_3);
    uVar3 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(param_3);
    _objc_release(param_5);
    _objc_destroyWeak(auStack_120);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_110);
    _objc_release(uVar1);
  }
  else {
    func_0x00010be11ee0(param_1);
  }
  __Block_object_dispose(&uStack_d8,8);
  _objc_release(uStack_b0);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10557774c; end: 1055777d3;  */

void FUN_10557774c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010bf51e00();
  _objc_release(param_3);
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = uVar3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1055777d4; end: 105577923;  */

void FUN_1055777d4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x20));
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x28));
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar5);
    func_0x00010c0c0800(param_2);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105577924; end: 105577a17;  */

void FUN_105577924(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfa3d00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4e080();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfa3d00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27dd80();
  func_0x00010c0a38c0(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (lRam00000001136bc8c8 != -1) {
    func_0x00010002a2fc(0x1136bc8c8,&PTR___NSConcreteGlobalBlock_1108983d8);
  }
  if ((bRam00000001136bc8c0 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x30),PTR_s_complete_1125ae760);
  return;
}



/* Entry: 105577a18; end: 105577a43;  */

void FUN_105577a18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be11ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__fetchItemsForComputeFeedEndpoin_112562150,
             *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28),
             *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28),
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x48),PTR____NSArray0__struct_11034ab48);
  return;
}



/* Entry: 105577a44; end: 105577af3;  */

void FUN_105577a44(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  __Block_object_assign(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),8);
  __Block_object_assign(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x48,param_2 + 0x48);
  return;
}



/* Entry: 105577af4; end: 105577dd7; -[CTPItemsLoaderCompute _getItemsFromCacheOnlyIfValidForFeed:useChecksum:pageSize:pageToken:] */

void FUN_105577af4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_120 [8];
  undefined8 uStack_118;
  undefined1 uStack_110;
  undefined1 auStack_108 [8];
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  pcStack_88 = FUN_105576944;
  uStack_80 = 0x105576954;
  uStack_78 = 0;
  uStack_d0 = 0;
  uStack_c0 = 0x3032000000;
  pcStack_b8 = FUN_105576944;
  uStack_b0 = 0x105576954;
  uStack_a8 = 0;
  uVar1 = param_3;
  puStack_c8 = &uStack_d0;
  puStack_98 = &uStack_a0;
  func_0x00010c247520(param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_f8 = 0xc2000000;
  pcStack_f0 = FUN_105577dd8;
  puStack_e8 = &UNK_110897b58;
  puStack_e0 = &uStack_a0;
  puStack_d8 = &uStack_d0;
  func_0x00010c0bd420();
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126ae820;
  _objc_alloc_init();
  uVar1 = param_1;
  func_0x00010bdcf280(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae810;
  _objc_alloc_init();
  _objc_initWeak(auStack_108,param_1);
  uVar4 = uVar1;
  func_0x00010bfb0d80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar3);
  _objc_copyWeak(auStack_120,auStack_108);
  _objc_retain(param_3);
  _objc_retain(puVar2);
  uStack_118 = param_5;
  uStack_110 = param_4;
  _objc_retain(param_6);
  uVar5 = uVar4;
  func_0x00010c25ff60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_retain(puVar2);
  _objc_release(param_6);
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_120);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_108);
  _objc_release(puVar3);
  _objc_release(uVar1);
  __Block_object_dispose(&uStack_d0,8);
  _objc_release(uStack_a8);
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(uStack_78);
  _objc_release(param_6);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105577dd8; end: 105577e5f;  */

void FUN_105577dd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010bf51e00();
  _objc_release(param_3);
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = uVar3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105577e60; end: 10557802f;  */

void FUN_105577e60(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  _objc_retain(param_2);
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x20));
  lVar1 = param_1 + 0x50;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar2);
    _objc_copyWeak(auStack_78,param_1 + 0x50);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar3);
    uStack_68 = *(undefined1 *)(param_1 + 0x60);
    uStack_70 = *(undefined8 *)(param_1 + 0x58);
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar6);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar5);
    uVar7 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar7);
    func_0x00010c0c0800(param_2);
    _objc_release(uVar7);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar6);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_78);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 105578030; end: 105578177;  */

void FUN_105578030(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be11fa0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb0d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_58,param_1 + 0x50);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar4);
  uStack_48 = *(undefined1 *)(param_1 + 0x60);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar5);
  uStack_50 = *(undefined8 *)(param_1 + 0x58);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar3);
  func_0x00010c25ff60(uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 105578178; end: 1055782db;  */

void FUN_105578178(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar5);
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar6);
    func_0x00010c0c0800(param_2);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1055782dc; end: 105578373;  */

void FUN_1055782dc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010c2619e0(PTR_PTR_1126af5d0,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2);
  _objc_release(puVar1);
  if (*(char *)(param_1 + 0x48) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010be11ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x28),PTR_s__fetchItemsForComputeFeedEndpoin_112562158,
               *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28),
               *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28),
               *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),2,1);
    return;
  }
  return;
}



/* Entry: 105578374; end: 1055783bf;  */

void FUN_105578374(long param_1,undefined8 param_2)

{
  func_0x00010be116a0(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28),
                      *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28),0,
                      *(undefined1 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x50),
                      *(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 1055783c0; end: 10557841b;  */

void FUN_1055783c0(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  __Block_object_assign(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),8);
  return;
}



/* Entry: 10557841c; end: 105578467;  */

void FUN_10557841c(long param_1,undefined8 param_2)

{
  func_0x00010be116a0(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28),
                      *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28),0,
                      *(undefined1 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x50),
                      *(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 105578468; end: 1055784a7; -[CTPItemsLoaderCompute _fetchFromNetworkForSubject:feed:computeEndpoint:backendPrivateData:previousResult:useChecksum:pageSize:pageToken:] */

void FUN_105578468(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined8 param_10)

{
  if (0 < param_9) {
                    /* WARNING: Could not recover jumptable at 0x00010be11f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__fetchItemsForFeedWithPagination_112562168,param_4,param_3,param_7,
               param_10,param_9);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be11ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__fetchItemsForComputeFeedEndpoin_112562158,param_5,param_6,param_4,
             param_3);
  return;
}



/* Entry: 1055784a8; end: 10557867b; -[CTPItemsLoaderCompute _getItemsFromNetworkIfCacheExpiredWithPagination:lifecycle:behaviorSubject:previousResult:pageSize:pageToken:] */

void FUN_1055784a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  uVar1 = param_1;
  func_0x00010bdcf280(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_68,param_1);
  uVar2 = uVar1;
  func_0x00010bfb0d80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  _objc_copyWeak(auStack_80,auStack_68);
  _objc_retain(param_5);
  uStack_78 = param_6;
  _objc_retain(param_3);
  _objc_retain(param_8);
  uVar3 = uVar2;
  uStack_70 = param_7;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_8);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar1);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10557867c; end: 1055787e3;  */

void FUN_10557867c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x20));
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x28));
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar5);
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar6);
    func_0x00010c0c0800(param_2);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1055787e4; end: 10557888f;  */

void FUN_1055787e4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfa3d00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4e080();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfa3d00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27dd80();
  func_0x00010c0a38c0(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x30),PTR_s_complete_1125ae760);
  return;
}



/* Entry: 105578890; end: 1055788a3;  */

void FUN_105578890(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be11f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__fetchItemsForFeedWithPagination_112562168,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x38),
             *(undefined8 *)(param_1 + 0x48));
  return;
}



/* Entry: 1055788a4; end: 10557892f; -[CTPItemsLoaderCompute _fetchItemsForFeedWithPagination:pageToken:pageSize:] */

void FUN_1055788a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae820;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010be11f20(param_1,param_2,param_3,puVar1,0,param_4,param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105578930; end: 105578b77; -[CTPItemsLoaderCompute _fetchItemsForFeedWithPagination:forSubject:previousResult:pageToken:pageSize:] */

void FUN_105578930(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puStack_90 = &uStack_98;
  uStack_98 = 0;
  uStack_88 = 0x3032000000;
  pcStack_80 = FUN_105576944;
  uStack_78 = 0x105576954;
  uStack_70 = 0;
  puStack_c0 = &uStack_c8;
  uStack_c8 = 0;
  uStack_b8 = 0x3032000000;
  pcStack_b0 = FUN_105576944;
  uStack_a8 = 0x105576954;
  uStack_a0 = 0;
  uVar1 = param_3;
  func_0x00010c247520(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bd420();
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bfa3d00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27dd80();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c120260(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar1);
  _objc_release(uVar2);
  func_0x00010be81ba0(param_1);
  _objc_release(uVar4);
  __Block_object_dispose(&uStack_c8,8);
  _objc_release(uStack_a0);
  __Block_object_dispose(&uStack_98,8);
  _objc_release(uStack_70);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105578b78; end: 105578bff;  */

void FUN_105578b78(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010bf51e00();
  _objc_release(param_3);
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = uVar3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105578c00; end: 105578dc7; -[CTPItemsLoaderCompute _processPaginatedNetworkResponse:feed:subject:previousResult:isFirstPage:] */

void FUN_105578c00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [8];
  undefined1 uStack_80;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126ae810;
  _objc_alloc_init();
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x2020000000;
  uStack_58 = param_6;
  _objc_initWeak(auStack_78,param_1);
  uVar2 = param_3;
  func_0x00010bfb0d80(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar1);
  _objc_copyWeak(auStack_88,auStack_78);
  _objc_retain(param_5);
  _objc_retain(param_4);
  uVar3 = uVar2;
  uStack_80 = param_7;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_88);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_78);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105578dc8; end: 105578f0b;  */

void FUN_105578dc8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x20));
  lVar2 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar2 == 0) {
    func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x28));
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar5);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar3);
    func_0x00010c0c0800(param_2);
    _objc_release(uVar3);
    _objc_release(uVar1);
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105578f0c; end: 105578f2b;  */

void FUN_105578f0c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be2dad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__handlePaginatedComputeResult_fo_112569050,
             param_2,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18),
             *(undefined1 *)(param_1 + 0x40));
  return;
}



/* Entry: 105578f2c; end: 105579033;  */

void FUN_105578f2c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  _objc_retain(param_2);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfa3d00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4e080();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfa3d00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27dd80();
  func_0x00010c0a38c0(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  puVar3 = PTR_PTR_1126af5d0;
  func_0x00010bfa01c0(PTR_PTR_1126af5d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c0d9840(uVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x30),PTR_s_complete_1125ae760);
  return;
}



/* Entry: 105579034; end: 10557913f; -[CTPItemsLoaderCompute _handlePaginatedComputeResult:forFeed:subject:previousResult:isFirstPage:] */

void FUN_105579034(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  undefined *puVar1;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_105579140;
  puStack_90 = &UNK_110897e58;
  uStack_88 = param_1;
  uStack_80 = param_4;
  _objc_retain(param_5);
  puStack_d0 = puVar1;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_10557915c;
  puStack_b8 = &UNK_110850cc8;
  uStack_b0 = param_5;
  uStack_78 = param_5;
  uStack_70 = param_6;
  uStack_68 = param_7;
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c0bde40(param_3,param_2,&puStack_a8,&puStack_d0);
  _objc_release(uStack_b0);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105579140; end: 10557915b;  */

void FUN_105579140(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be81b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__processPagedFlatResult_response_11257e080,
             param_2,param_3,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38),*(undefined1 *)(param_1 + 0x40));
  return;
}



/* Entry: 10557915c; end: 105579267;  */

void FUN_10557915c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 in_x5;
  undefined8 uVar14;
  undefined8 in_x6;
  undefined8 uVar15;
  int in_w7;
  undefined *puVar16;
  long lVar17;
  undefined8 uVar18;
  undefined *puVar19;
  long lVar20;
  undefined1 auStack_218 [8];
  undefined8 uStack_210;
  undefined1 auStack_208 [8];
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  undefined *puStack_1b8;
  undefined1 **ppuStack_1b0;
  code *pcStack_1a8;
  int iStack_19c;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long lStack_178;
  long *plStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_c0;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  ppuStack_40 = &PTR____CFConstantStringClassReference_110deb178;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_40,&uStack_48,1);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = 0;
  puVar13 = puVar1;
  func_0x00010bf99240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar18 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010bfa01c0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar1;
  func_0x00010c0d9840(uVar18);
  _objc_release(puVar1);
  func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x20));
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  pcStack_58 = FUN_105579268;
  lStack_c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iStack_19c = in_w7;
  uStack_198 = in_x6;
  puStack_60 = &stack0xfffffffffffffff0;
  _objc_retain(puVar10);
  uStack_188 = uVar11;
  _objc_retain(uVar11);
  _objc_retain(puVar13);
  uStack_190 = in_x5;
  _objc_retain(in_x5);
  puVar1 = puVar2;
  func_0x00010be70140();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc_init();
  lStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  plStack_170 = (long *)0x0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  _objc_retain(puVar1);
  puVar4 = puVar1;
  func_0x00010bf52a60();
  if (puVar4 != (undefined *)0x0) {
    lVar17 = *plStack_170;
    do {
      puVar19 = (undefined *)0x0;
      do {
        if (*plStack_170 != lVar17) {
          _objc_enumerationMutation(puVar1);
        }
        lVar20 = *(long *)(lStack_178 + (long)puVar19 * 8);
        lVar5 = lVar20;
        func_0x00010c0844e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar5 != 0) {
          func_0x00010c0844e0(lVar20);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar3);
          _objc_release(lVar20);
        }
        puVar19 = puVar19 + 1;
      } while (puVar4 != puVar19);
      puVar4 = puVar1;
      func_0x00010bf52a60();
    } while (puVar4 != (undefined *)0x0);
  }
  _objc_release(puVar1);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar19 = puVar13;
  func_0x00010bfa3d00(puVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27dd80();
  func_0x00010beb5740(puVar2);
  _objc_release(puVar19);
  puVar19 = puVar13;
  func_0x00010bfa3d00(puVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bedbe00(puVar2);
  _objc_release(puVar19);
  puVar19 = puVar2;
  func_0x00010be461c0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar7 = puVar13;
  func_0x00010c0d4f60(puVar13);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar2;
  func_0x00010be17f20(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar6);
  _objc_release(puVar8);
  _objc_release(puVar7);
  uVar18 = uStack_188;
  uVar11 = uStack_190;
  puVar7 = puVar4;
  uVar12 = uStack_188;
  puVar8 = puVar13;
  uVar14 = uStack_190;
  uVar15 = uStack_198;
  puVar16 = puVar6;
  if (iStack_19c == 0) {
    func_0x00010be5f7c0(puVar2);
  }
  else {
    func_0x00010be733e0(puVar2);
  }
  _objc_release(puVar6);
  _objc_release(puVar19);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(uVar11);
  _objc_release(puVar13);
  _objc_release(uVar18);
  puVar9 = puVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c0) {
    return;
  }
  ___stack_chk_fail();
  uStack_1d0 = uVar11;
  uStack_1c0 = uVar18;
  pcStack_1a8 = FUN_1055795a4;
  puStack_200 = puVar4;
  puStack_1f8 = puVar3;
  puStack_1f0 = puVar6;
  puStack_1e8 = puVar2;
  puStack_1e0 = puVar1;
  puStack_1d8 = puVar19;
  puStack_1c8 = puVar13;
  puStack_1b8 = puVar10;
  ppuStack_1b0 = &puStack_60;
  _objc_retain(puVar7);
  _objc_retain(uVar12);
  _objc_retain(puVar8);
  _objc_retain(uVar14);
  _objc_retain(puVar16);
  uVar18 = *(undefined8 *)(puVar9 + 8);
  func_0x00010c269d40(uVar18);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar8;
  func_0x00010bfa3d00(puVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar18;
  func_0x00010c085120(uVar18);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar18);
  _objc_initWeak(auStack_208,puVar9);
  _objc_copyWeak(auStack_218,auStack_208);
  _objc_retain(uVar14);
  _objc_retain(puVar7);
  _objc_retain(puVar8);
  _objc_retain(uVar12);
  uStack_210 = uVar15;
  _objc_retain(puVar16);
  func_0x00010c297260(uVar11);
  _objc_release(puVar16);
  _objc_release(uVar12);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(uVar14);
  _objc_destroyWeak(auStack_218);
  _objc_destroyWeak(auStack_208);
  _objc_release(uVar11);
  _objc_release(puVar16);
  _objc_release(uVar14);
  _objc_release(puVar8);
  _objc_release(uVar12);
  _objc_release(puVar7);
  return;
}



/* Entry: 105579268; end: 1055795a3; -[CTPItemsLoaderCompute _processPagedFlatResult:responseToken:forFeed:subject:previousResult:isFirstPage:] */

void FUN_105579268(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,int param_8)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined1 auStack_1c8 [8];
  undefined8 uStack_1c0;
  undefined1 auStack_1b8 [8];
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long lStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  int iStack_14c;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iStack_14c = param_8;
  uStack_148 = param_7;
  _objc_retain(param_3);
  uStack_138 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_5);
  uStack_140 = param_6;
  _objc_retain(param_6);
  lVar1 = param_1;
  func_0x00010be70140();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc_init();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(lVar1);
  lVar3 = lVar1;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar16 = *plStack_120;
    do {
      lVar17 = 0;
      do {
        if (*plStack_120 != lVar16) {
          _objc_enumerationMutation(lVar1);
        }
        lVar18 = *(long *)(lStack_128 + lVar17 * 8);
        lVar4 = lVar18;
        func_0x00010c0844e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar4 != 0) {
          func_0x00010c0844e0(lVar18);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar2);
          _objc_release(lVar18);
        }
        lVar17 = lVar17 + 1;
      } while (lVar3 != lVar17);
      lVar3 = lVar1;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(lVar1);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar6 = param_5;
  func_0x00010bfa3d00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27dd80();
  func_0x00010beb5740(param_1);
  _objc_release(uVar6);
  uVar6 = param_5;
  func_0x00010bfa3d00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bedbe00(param_1);
  _objc_release(uVar6);
  lVar3 = param_1;
  func_0x00010be461c0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar6 = param_5;
  func_0x00010c0d4f60(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1;
  func_0x00010be17f20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar7);
  _objc_release(lVar16);
  _objc_release(uVar6);
  uVar9 = uStack_138;
  uVar6 = uStack_140;
  puVar10 = puVar5;
  uVar11 = uStack_138;
  uVar12 = param_5;
  uVar13 = uStack_140;
  uVar14 = uStack_148;
  puVar15 = puVar7;
  if (iStack_14c == 0) {
    func_0x00010be5f7c0(param_1);
  }
  else {
    func_0x00010be733e0(param_1);
  }
  _objc_release(puVar7);
  _objc_release(lVar3);
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_release(uVar6);
  _objc_release(param_5);
  _objc_release(uVar9);
  lVar16 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  uStack_180 = uVar6;
  uStack_170 = uVar9;
  pcStack_158 = FUN_1055795a4;
  puStack_1b0 = puVar5;
  puStack_1a8 = puVar2;
  puStack_1a0 = puVar7;
  lStack_198 = param_1;
  lStack_190 = lVar1;
  lStack_188 = lVar3;
  uStack_178 = param_5;
  lStack_168 = param_3;
  puStack_160 = &stack0xfffffffffffffff0;
  _objc_retain(puVar10);
  _objc_retain(uVar11);
  _objc_retain(uVar12);
  _objc_retain(uVar13);
  _objc_retain(puVar15);
  uVar8 = *(undefined8 *)(lVar16 + 8);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar12;
  func_0x00010bfa3d00(uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c085120(uVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar8);
  _objc_initWeak(auStack_1b8,lVar16);
  _objc_copyWeak(auStack_1c8,auStack_1b8);
  _objc_retain(uVar13);
  _objc_retain(puVar10);
  _objc_retain(uVar12);
  _objc_retain(uVar11);
  uStack_1c0 = uVar14;
  _objc_retain(puVar15);
  func_0x00010c297260(uVar9);
  _objc_release(puVar15);
  _objc_release(uVar11);
  _objc_release(uVar12);
  _objc_release(puVar10);
  _objc_release(uVar13);
  _objc_destroyWeak(auStack_1c8);
  _objc_destroyWeak(auStack_1b8);
  _objc_release(uVar9);
  _objc_release(puVar15);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(puVar10);
  return;
}



/* Entry: 1055795a4; end: 105579793; -[CTPItemsLoaderCompute _mergeAndPersistPagedItems:pageToken:forFeed:subject:previousResult:uiItemsGroups:] */

void FUN_1055795a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_5;
  func_0x00010bfa3d00(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c085120(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_initWeak(auStack_68,param_1);
  _objc_copyWeak(auStack_78,auStack_68);
  _objc_retain(param_6);
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_4);
  uStack_70 = param_7;
  _objc_retain(param_8);
  func_0x00010c297260(uVar3);
  _objc_release(param_8);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_6);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar3);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105579794; end: 10557987f;  */

void FUN_105579794(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (param_3 == 0) {
    if (lVar1 != 0) {
      lVar3 = lVar1;
      func_0x00010be5f840(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be733e0(lVar1);
      _objc_release(lVar3);
      goto LAB_105579858;
    }
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    puVar2 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar4);
    _objc_release(puVar2);
  }
  func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x20));
LAB_105579858:
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105579880; end: 1055799c7; -[CTPItemsLoaderCompute _mergeExistingItems:withNewItems:forFeed:] */

void FUN_105579880(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_5;
  func_0x00010bfa3d00(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c27dd80();
  uVar3 = param_1;
  func_0x00010beb5740(param_1,param_2,uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) == 0) {
    _objc_retain(param_3);
    uVar1 = param_3;
  }
  else {
    uVar2 = param_3;
    func_0x00010c140180();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010bf00560();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  uVar4 = param_1;
  func_0x00010bdf8cc0(param_1,param_2,uVar1,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_5;
  func_0x00010bfa3d00(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010be85fe0(param_1,param_2,uVar4,uVar3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1055799c8; end: 105579b9b; -[CTPItemsLoaderCompute _deduplicateAndMergeExisting:withNewItems:] */

void FUN_1055799c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf529e0(param_3);
  func_0x00010bf529e0(param_4);
  uVar1 = param_3;
  func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_110897ed8);
  uVar2 = param_3;
  func_0x00010050471c(param_3,&PTR___NSConcreteGlobalBlock_110897f18,
                      &PTR___NSConcreteGlobalBlock_110897f38);
  _objc_release(param_3);
  uVar3 = param_4;
  func_0x00010050471c(param_4,&PTR___NSConcreteGlobalBlock_110897f58,
                      &PTR___NSConcreteGlobalBlock_110897f78);
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71fe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
  func_0x00010bef7f60(puVar4);
  puVar6 = PTR__OBJC_CLASS___NSSet_1126ae870;
  uVar5 = param_4;
  func_0x000100504554(param_4,&PTR___NSConcreteGlobalBlock_110897f98);
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_105579d5c;
  puStack_68 = &UNK_110897fb8;
  puStack_60 = puVar6;
  puStack_58 = puVar4;
  _objc_retain(puVar4);
  _objc_retain(puVar6);
  uVar5 = uVar1;
  func_0x000100504554(uVar1,&puStack_80);
  uVar7 = uVar5;
  func_0x00010c0d3c80();
  func_0x00010befa160();
  _objc_release(param_4);
  _objc_release(uVar5);
  _objc_release(puStack_58);
  _objc_release(puStack_60);
  _objc_release(puVar4);
  _objc_release(puVar6);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
  return;
}



/* Entry: 105579b9c; end: 105579c8b;  */

void FUN_105579b9c(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c0844e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_2;
    func_0x00010c0844e0(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 105579c8c; end: 105579cb3;  */

void FUN_105579c8c(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 105579cb4; end: 105579d2b;  */

void FUN_105579cb4(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c0844e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_2;
    func_0x00010c0844e0(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 105579d2c; end: 105579d53;  */

void FUN_105579d2c(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 105579d54; end: 105579d5b;  */

void FUN_105579d54(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0844f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_itemId_1125feb48);
  return;
}



/* Entry: 105579d5c; end: 105579dbf;  */

void FUN_105579d5c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010bf4b900();
  if ((uVar1 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0e00e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar2 = 0;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105579dc0; end: 105579e7b; -[CTPItemsLoaderCompute _reRankItems:shouldReverse:forFeedId:] */

void FUN_105579dc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105579e7c;
  puStack_50 = &UNK_110897fe8;
  uStack_48 = param_3;
  uStack_40 = param_5;
  uStack_38 = param_4;
  _objc_retain(param_5);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bd86420(param_3,&puStack_68);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105579e7c; end: 10557a00f;  */

void FUN_105579e7c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_2);
  if (*(char *)(param_1 + 0x30) == '\x01') {
    func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x20));
  }
  puVar1 = PTR_PTR_1126badb8;
  func_0x00010c11fda0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bacd0;
  _objc_alloc(PTR_PTR_1126bacd0);
  uVar3 = param_2;
  func_0x00010c0844e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010bf63640(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  func_0x00010c1554e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_2;
  func_0x00010c298be0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3cba0();
  uVar7 = param_2;
  func_0x00010c135700();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_2;
  func_0x00010c156360();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01ffe0(puVar2);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10557a010; end: 10557a20f; -[CTPItemsLoaderCompute _persistPagedItems:pageToken:forFeed:subject:previousResult:uiItemsGroups:] */

void FUN_10557a010(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  uVar1 = param_5;
  func_0x00010bfa3d00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27dd80();
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_5;
  func_0x00010bfa3d00(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c1b6480(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_initWeak(auStack_68,param_1);
  _objc_copyWeak(auStack_78,auStack_68);
  _objc_retain(param_6);
  uStack_70 = param_7;
  _objc_retain(param_8);
  _objc_retain(param_5);
  func_0x00010c297260(uVar3);
  _objc_release(param_5);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar3);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10557a210; end: 10557a353;  */

void FUN_10557a210(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126af5d0;
    if (param_3 == 0) {
      uVar7 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c2619e0(PTR_PTR_1126af5d0,param_2,*(undefined8 *)(param_1 + 0x28));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar7,param_2,puVar2);
      uVar7 = 3;
    }
    else {
      uVar7 = *(undefined8 *)(param_1 + 0x40);
      uVar8 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar8,param_2,puVar2);
    }
    _objc_release(puVar2);
    uVar3 = *(undefined8 *)(lVar1 + 0x20);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010bfa3d00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar4;
    func_0x00010bf4e080();
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010bfa3d00(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c27dd80();
    func_0x00010c0a38c0(uVar3,param_2,uVar7,uVar8,uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x20));
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10557a354; end: 10557a4c7; -[CTPItemsLoaderCompute _areCachedItemsValidForFeed:] */

void FUN_10557a354(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae820;
  _objc_alloc_init();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bfa3d00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bfa4280(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_initWeak(auStack_48,param_1);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(puVar1);
  func_0x00010c297260(uVar4);
  _objc_retain(puVar1);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10557a4c8; end: 10557a5af;  */

void FUN_10557a4c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfa3d00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27dd80();
    lVar3 = lVar1;
    func_0x00010be40680();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    puVar4 = PTR_PTR_1126af5d0;
    if ((int)lVar3 == 0) {
      func_0x00010bfa01c0(PTR_PTR_1126af5d0);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c2619e0();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c0d9840(uVar2);
    _objc_release(puVar4);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10557a5b0; end: 10557a5cb; -[CTPItemsLoaderCompute _shouldReverseFeedResults:] */

uint FUN_10557a5b0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return (uint)(param_3 < 0x19) & 0x1e8a014U >> (ulong)((uint)param_3 & 0x1f);
}



/* Entry: 10557a5cc; end: 10557a7bf; -[CTPItemsLoaderCompute _isFeedValid:feedType:] */

bool FUN_10557a5cc(double param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  bool bVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_4);
  bVar4 = false;
  if (param_4 == 0) goto LAB_10557a77c;
  switch(param_5) {
  case 2:
    lVar1 = *(long *)(param_2 + 0x18);
    ppuVar2 = &PTR____CFConstantStringClassReference_110deb038;
    break;
  case 3:
    lVar1 = *(long *)(param_2 + 0x18);
    ppuVar2 = &PTR____CFConstantStringClassReference_110deafb8;
    goto code_r0x00010557a6ac;
  case 4:
    lVar1 = *(long *)(param_2 + 0x18);
    ppuVar2 = &PTR____CFConstantStringClassReference_110deb018;
    uVar3 = 0x1e13380;
    goto code_r0x00010557a74c;
  case 5:
    lVar1 = *(long *)(param_2 + 0x18);
    ppuVar2 = &PTR____CFConstantStringClassReference_110deafd8;
    goto code_r0x00010557a6ac;
  default:
    goto LAB_10557a77c;
  case 9:
    lVar1 = *(long *)(param_2 + 0x18);
    ppuVar2 = &PTR____CFConstantStringClassReference_110deaff8;
    break;
  case 0xc:
    lVar1 = *(long *)(param_2 + 0x18);
    ppuVar2 = &PTR____CFConstantStringClassReference_110deb0d8;
code_r0x00010557a6ac:
    uVar3 = 900;
    goto code_r0x00010557a74c;
  case 0xd:
    lVar1 = *(long *)(param_2 + 0x18);
    ppuVar2 = &PTR____CFConstantStringClassReference_110deaf38;
    goto code_r0x00010557a730;
  case 0xf:
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    ppuVar2 = &PTR____CFConstantStringClassReference_110deaf58;
    goto code_r0x00010557a7a8;
  case 0x10:
    lVar1 = *(long *)(param_2 + 0x18);
    ppuVar2 = &PTR____CFConstantStringClassReference_110deaf18;
code_r0x00010557a730:
    uVar3 = 0x93a80;
    goto code_r0x00010557a74c;
  case 0x11:
    lVar1 = *(long *)(param_2 + 0x18);
    ppuVar2 = &PTR____CFConstantStringClassReference_110deb0b8;
    break;
  case 0x12:
    lVar1 = *(long *)(param_2 + 0x18);
    ppuVar2 = &PTR____CFConstantStringClassReference_110deb098;
    goto code_r0x00010557a748;
  case 0x13:
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    ppuVar2 = &PTR____CFConstantStringClassReference_110deaf78;
    goto code_r0x00010557a7a8;
  case 0x14:
    lVar1 = *(long *)(param_2 + 0x18);
    ppuVar2 = &PTR____CFConstantStringClassReference_110deb058;
    goto code_r0x00010557a748;
  case 0x15:
    lVar1 = *(long *)(param_2 + 0x18);
    ppuVar2 = &PTR____CFConstantStringClassReference_110deb0f8;
    break;
  case 0x16:
    lVar1 = *(long *)(param_2 + 0x18);
    ppuVar2 = &PTR____CFConstantStringClassReference_110deb138;
    break;
  case 0x17:
    lVar1 = *(long *)(param_2 + 0x18);
    ppuVar2 = &PTR____CFConstantStringClassReference_110deb118;
    break;
  case 0x18:
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    ppuVar2 = &PTR____CFConstantStringClassReference_110deaf98;
code_r0x00010557a7a8:
    func_0x00010c067f00(uVar3,param_3,ppuVar2,0x15180,0);
    dVar6 = (double)(int)uVar3;
    goto code_r0x00010557a758;
  case 0x19:
    lVar1 = *(long *)(param_2 + 0x18);
    ppuVar2 = &PTR____CFConstantStringClassReference_110deb078;
code_r0x00010557a748:
    uVar3 = 0x708;
    goto code_r0x00010557a74c;
  }
  uVar3 = 0x15180;
code_r0x00010557a74c:
  func_0x00010c0b5020(lVar1,param_3,ppuVar2,uVar3,0);
  dVar6 = (double)lVar1;
code_r0x00010557a758:
  func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
  dVar5 = param_1;
  func_0x00010c08a800(param_4);
  bVar4 = param_1 - dVar5 <= dVar6;
LAB_10557a77c:
  _objc_release(param_4);
  return bVar4;
}



/* Entry: 10557a7c0; end: 10557a987; -[CTPItemsLoaderCompute _fetchItemsFromCacheForFeed:] */

void FUN_10557a7c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x2020000000;
  uStack_58 = 0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bfa3d00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bfa4280(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_10557a988;
  puStack_80 = &UNK_110898078;
  puStack_78 = &uStack_70;
  func_0x00010c297260(uVar3);
  _objc_initWeak(auStack_a0,param_1);
  puVar4 = PTR_PTR_1126ae6b8;
  _objc_retain(param_3);
  _objc_copyWeak(auStack_a8,auStack_a0);
  func_0x00010bf54280(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_a8);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_a0);
  _objc_release(uVar3);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10557a988; end: 10557a9c7;  */

void FUN_10557a988(double param_1,long param_2,undefined8 param_3)

{
  func_0x00010c08a800(param_3);
  *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 8) + 0x18) = (long)(param_1 / 60.0);
  return;
}



/* Entry: 10557a9c8; end: 10557ab2b;  */

void FUN_10557a9c8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfa3d00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c156ba0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_retain(param_2);
  _objc_copyWeak(auStack_48,param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  func_0x00010c297260(uVar3);
  puVar4 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_2);
  _objc_release(uVar3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10557ab2c; end: 10557ad4b;  */

void FUN_10557ab2c(long param_1,long param_2,undefined *param_3,undefined1 *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_3;
  _objc_retain(param_2);
  iVar7 = (int)param_8;
  if (param_3 == (undefined *)0x0) {
    puVar2 = (undefined *)(param_1 + 0x38);
    _objc_loadWeakRetained();
    iVar7 = (int)param_8;
    if (puVar2 != (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_2);
      param_4 = auStack_e8;
      param_5 = 0x10;
      lVar4 = param_2;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      iVar7 = (int)param_8;
      while (lVar4 != 0) {
        lVar9 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(param_2);
          }
          uVar8 = *(undefined8 *)(param_1 + 0x28);
          func_0x00010bfa3d00();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c27dd80();
          func_0x00010beb5740(puVar2);
          puVar5 = puVar2;
          func_0x00010be46200();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar3);
          _objc_release(puVar5);
          _objc_release(uVar8);
          lVar9 = lVar9 + 1;
        } while (lVar4 != lVar9);
        param_4 = auStack_e8;
        param_5 = 0x10;
        lVar4 = param_2;
        func_0x00010bf52a60();
        iVar7 = (int)param_8;
      }
      _objc_release(param_2);
      uVar8 = *(undefined8 *)(param_1 + 0x20);
      puVar6 = PTR_PTR_1126af5d0;
      func_0x00010c2619e0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar6;
      func_0x00010c0d9840(uVar8);
      _objc_release(puVar6);
      _objc_release(puVar3);
    }
  }
  else {
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    puVar2 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010c0d9840(uVar8);
  }
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar5);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (iVar7 == 0) {
    func_0x00010be11ec0(param_2);
  }
  else {
    func_0x00010be13020(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_2;
    func_0x00010bfb0d80();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar5);
    _objc_retain(param_4);
    _objc_retain(param_5);
    _objc_retain(param_6);
    func_0x00010c25ff60(lVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(puVar5);
    _objc_release(param_2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar5);
  return;
}



/* Entry: 10557ad4c; end: 10557aed7; -[CTPItemsLoaderCompute _fetchItemsForComputeFeedEndpoint:backendPrivateData:feed:forSubject:previousResult:useChecksum:] */

void FUN_10557ad4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,int param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_8 == 0) {
    func_0x00010be11ec0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                        PTR____NSArray0__struct_11034ab48);
  }
  else {
    uVar1 = param_1;
    func_0x00010be13020(param_1,param_2,param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfb0d80();
    _objc_retainAutoreleasedReturnValue();
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_10557aed8;
    puStack_88 = &UNK_110898108;
    uStack_80 = param_1;
    _objc_retain(param_3);
    uStack_78 = param_3;
    _objc_retain(param_4);
    uStack_70 = param_4;
    _objc_retain(param_5);
    uStack_68 = param_5;
    _objc_retain(param_6);
    uStack_60 = param_6;
    uStack_58 = param_7;
    func_0x00010c25ff60(uVar2,param_2,&puStack_a0);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uStack_60);
    _objc_release(uStack_68);
    _objc_release(uStack_70);
    _objc_release(uStack_78);
    _objc_release(uVar1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10557aed8; end: 10557afd3;  */

void FUN_10557aed8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_2);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_105576944;
  uStack_40 = 0x105576954;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puStack_38 = puVar1;
  func_0x00010c0c0800(param_2);
  func_0x00010be11ec0(*(undefined8 *)(param_1 + 0x20));
  __Block_object_dispose(&uStack_60,8);
  _objc_release(puStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 10557afd4; end: 10557b00b;  */

void FUN_10557afd4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c0d3c80();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10557b00c; end: 10557b33f; -[CTPItemsLoaderCompute _fetchItemsForComputeFeedEndpoint:backendPrivateData:feed:forSubject:previousResult:cachedItems:] */

void FUN_10557b00c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  lVar1 = param_5;
  func_0x00010bfa3d00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf4e080();
  lVar5 = param_5;
  if (lVar2 == 7) {
    _objc_release(lVar1);
  }
  else {
    lVar2 = param_5;
    func_0x00010bfa3d00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c27dd80();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar3 != 0x10) {
      uVar4 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa3d00(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c27dd80();
      uVar6 = uVar4;
      func_0x00010c120240(uVar4);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10557b198;
    }
  }
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa3d00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27dd80();
  lVar1 = param_5;
  func_0x00010bfa3d00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4e080();
  uVar6 = uVar4;
  func_0x00010c085060(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
LAB_10557b198:
  _objc_release(lVar5);
  _objc_release(uVar4);
  puVar7 = PTR_PTR_1126ae810;
  _objc_alloc_init();
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x2020000000;
  uStack_68 = param_7;
  _objc_initWeak(auStack_88,param_1);
  uVar4 = uVar6;
  func_0x00010bfb0d80(uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar7);
  _objc_copyWeak(auStack_90,auStack_88);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar8 = uVar4;
  func_0x00010c25ff60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar8);
  _objc_release(uVar4);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_90);
  _objc_release(puVar7);
  _objc_destroyWeak(auStack_88);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10557b340; end: 10557b4af;  */

void FUN_10557b340(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x20));
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_10557b4b0;
  puStack_80 = &UNK_1108981c8;
  _objc_copyWeak(auStack_58,param_1 + 0x48);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(*(undefined8 *)(param_1 + 0x30));
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_78 = uVar2;
  uStack_70 = uVar3;
  _objc_retain(uVar1);
  uStack_60 = *(undefined8 *)(param_1 + 0x40);
  uStack_68 = uVar1;
  _objc_copyWeak(auStack_a0,param_1 + 0x48);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar1);
  func_0x00010c0c0800(param_2);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_a0);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_2);
  return;
}



/* Entry: 10557b4b0; end: 10557b7b7;  */

void FUN_10557b4b0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puStack_98 = &uStack_a0;
    uStack_a0 = 0;
    uStack_90 = 0x3032000000;
    pcStack_88 = FUN_105576944;
    uStack_80 = 0x105576954;
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puStack_c8 = &uStack_d0;
    uStack_d0 = 0;
    uStack_c0 = 0x3032000000;
    pcStack_b8 = FUN_105576944;
    uStack_b0 = 0x105576954;
    uStack_a8 = 0;
    uVar8 = *(undefined8 *)(param_1 + 0x28);
    puStack_78 = puVar3;
    _objc_retain(*(undefined8 *)(param_1 + 0x28));
    _objc_retain(puVar2);
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar7);
    _objc_retain(puVar2);
    func_0x00010c0bde40(param_2);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bfa3d00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27dd80();
    _objc_release(uVar4);
    uVar5 = *(undefined8 *)(lVar1 + 8);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bfa3d00(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010c1b6480(uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(uVar5);
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar6);
    _objc_retain(puVar2);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar5);
    func_0x00010c297260(uVar4);
    _objc_release(uVar5);
    _objc_release(puVar2);
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(puVar2);
    _objc_release(uVar7);
    _objc_release(puVar2);
    _objc_release(uVar8);
    __Block_object_dispose(&uStack_d0,8);
    _objc_release(uStack_a8);
    __Block_object_dispose(&uStack_a0,8);
    _objc_release(puStack_78);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 10557b7b8; end: 10557bbff;  */

void FUN_10557b7b8(long param_1,ulong param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar10 = param_2;
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar12 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(lVar12 + 0x28);
  *(undefined8 *)(lVar12 + 0x28) = param_3;
  _objc_release(uVar2);
  lVar12 = *(long *)(param_1 + 0x20);
  func_0x00010be70140();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010be461c0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc_init();
  _objc_retain(lVar12);
  lVar4 = lVar12;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar15 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar12);
      }
      uVar14 = *(undefined8 *)(lVar15 * 8);
      func_0x00010c0844e0(uVar14);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0560(puVar3);
      _objc_release(uVar14);
      lVar15 = lVar15 + 1;
    } while (lVar4 != lVar15);
    lVar4 = lVar12;
    func_0x00010bf52a60();
  }
  _objc_release(lVar12);
  uVar14 = *(undefined8 *)(param_1 + 0x28);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bfa3d00();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfa3d00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27dd80();
  func_0x00010beb5740(uVar9);
  func_0x00010bedbe00(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar14);
  uVar14 = *(undefined8 *)(param_1 + 0x30);
  uVar9 = *(undefined8 *)(param_1 + 0x38);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be17f20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar9);
  _objc_release(uVar14);
  _objc_release(uVar6);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(lVar12);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar10);
  uVar13 = uVar10;
  func_0x00010bf529e0();
  if (uVar13 != 0) {
    uVar13 = 0;
    do {
      uVar7 = uVar10;
      func_0x00010c0dfd40(uVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126bad00;
      _objc_alloc(PTR_PTR_1126bad00);
      func_0x00010c27dd80(uVar7);
      func_0x00010bf7f0e0(uVar7);
      func_0x00010bf85520(uVar7);
      func_0x00010c055f80(puVar3);
      uVar6 = *(undefined8 *)(param_2 + 0x20);
      uVar8 = uVar7;
      func_0x00010c084fc0(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(param_2 + 0x28);
      func_0x00010bfa3d00(uVar9);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_2 + 0x28);
      uVar14 = *(undefined8 *)(param_2 + 0x30);
      func_0x00010bfa3d00(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c27dd80();
      func_0x00010beb5740(uVar14);
      func_0x00010bedbe00(uVar6);
      _objc_release(uVar2);
      _objc_release(uVar9);
      _objc_release(uVar8);
      uVar14 = *(undefined8 *)(param_2 + 0x38);
      uVar2 = *(undefined8 *)(param_2 + 0x20);
      func_0x00010be46220(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar14);
      _objc_release(uVar2);
      _objc_release(puVar3);
      _objc_release(uVar7);
      uVar13 = uVar13 + 1;
      uVar7 = uVar10;
      func_0x00010bf529e0();
    } while (uVar13 < uVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar10);
  return;
}



/* Entry: 10557bc00; end: 10557be87;  */

void FUN_10557bc00(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_3 == 0) {
    *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18) = 3;
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    puVar1 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    puVar1 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c0d9840(uVar4);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bfa3d00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4e080();
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bfa3d00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27dd80();
  func_0x00010c0a38c0(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar2);
  if (lRam00000001136bc8c8 != -1) {
    func_0x00010002a2fc(0x1136bc8c8,&PTR___NSConcreteGlobalBlock_1108983d8);
  }
  if ((bRam00000001136bc8c0 & 1) == 0) {
    func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10557be88; end: 10557c3a7; -[CTPItemsLoaderCompute _updateMutablePersistedItemArrayWithCurrentPersisted:cachedItemMap:rawItems:feedId:sectionMetadata:reverseItems:] */

void FUN_10557be88(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  ulong param_5,undefined8 param_6,undefined8 param_7,int param_8)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 uStack_188;
  undefined8 *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 *puStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar8 = param_5;
  func_0x00010bf529e0();
  if (uVar8 != 0) {
    uVar8 = 0;
    do {
      if (param_8 != 0) {
        func_0x00010bf529e0(param_5);
      }
      puVar1 = PTR_PTR_1126badb8;
      func_0x00010c11fda0(PTR_PTR_1126badb8);
      _objc_retainAutoreleasedReturnValue();
      uStack_b8 = 0;
      uStack_a8 = 0x3032000000;
      pcStack_a0 = FUN_105576944;
      uStack_98 = 0x105576954;
      uStack_90 = 0;
      puStack_d0 = &uStack_d8;
      uStack_d8 = 0;
      uStack_c8 = 0x2020000000;
      uStack_c0 = 0;
      puStack_f0 = &uStack_f8;
      uStack_f8 = 0;
      uStack_e8 = 0x2020000000;
      uStack_e0 = 0;
      puStack_120 = &uStack_128;
      uStack_128 = 0;
      uStack_118 = 0x3032000000;
      pcStack_110 = FUN_105576944;
      uStack_108 = 0x105576954;
      uStack_100 = 0;
      puStack_150 = &uStack_158;
      uStack_158 = 0;
      uStack_148 = 0x3032000000;
      pcStack_140 = FUN_105576944;
      uStack_138 = 0x105576954;
      uStack_130 = 0;
      puStack_180 = &uStack_188;
      uStack_188 = 0;
      uStack_178 = 0x3032000000;
      pcStack_170 = FUN_105576944;
      uStack_168 = 0x105576954;
      uStack_160 = 0;
      uVar2 = param_5;
      puStack_b0 = &uStack_b8;
      func_0x00010c0dfd40(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0beee0();
      _objc_release(uVar2);
      if (puStack_120[5] == 0) {
        puVar7 = *(undefined **)(param_1 + 0x10);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar7;
        func_0x00010bf5d7e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar7);
        if (puVar4 != (undefined *)0x0) {
          puVar7 = puVar4;
          func_0x00010c0844e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (puVar7 != (undefined *)0x0) {
            puVar7 = PTR_PTR_1126bacd0;
            _objc_alloc(PTR_PTR_1126bacd0);
            puVar5 = puVar4;
            func_0x00010c0844e0(puVar4);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c01ffe0(puVar7);
            goto LAB_10557c230;
          }
        }
LAB_10557c25c:
        _objc_release(puVar4);
        puVar7 = (undefined *)0x0;
      }
      else {
        puVar4 = param_4;
        func_0x00010c0dff20();
        _objc_retainAutoreleasedReturnValue();
        if (puVar4 == (undefined *)0x0) goto LAB_10557c25c;
        puVar7 = puVar4;
        func_0x00010c0844e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar7 == (undefined *)0x0) goto LAB_10557c25c;
        puVar7 = PTR_PTR_1126bacd0;
        _objc_alloc(PTR_PTR_1126bacd0);
        puVar5 = puVar4;
        func_0x00010c0844e0(puVar4);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar4;
        func_0x00010bf63640(puVar4);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c01ffe0(puVar7);
        _objc_release(puVar3);
LAB_10557c230:
        _objc_release(puVar6);
        _objc_release(puVar5);
        _objc_release(puVar4);
        func_0x00010befa120(param_3);
      }
      _objc_release(puVar7);
      __Block_object_dispose(&uStack_188,8);
      _objc_release(uStack_160);
      __Block_object_dispose(&uStack_158,8);
      _objc_release(uStack_130);
      __Block_object_dispose(&uStack_128,8);
      _objc_release(uStack_100);
      __Block_object_dispose(&uStack_f8,8);
      __Block_object_dispose(&uStack_d8,8);
      __Block_object_dispose(&uStack_b8,8);
      _objc_release(uStack_90);
      _objc_release(puVar1);
      uVar8 = uVar8 + 1;
      uVar2 = param_5;
      func_0x00010bf529e0();
    } while (uVar8 < uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



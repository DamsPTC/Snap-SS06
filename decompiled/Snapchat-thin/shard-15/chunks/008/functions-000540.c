/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10bc84a8c; end: 10bc84bab;  */

void FUN_10bc84a8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf64920(param_3,param_2,4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf15da0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10bc84bac; end: 10bc84bb7;  */

void FUN_10bc84bac(void)

{
  uRam00000001137fd9cc = 0;
  return;
}



/* Entry: 10bc84bb8; end: 10bc84c1b; -[SCCancelableRequest init] */

undefined1 * FUN_10bc84bb8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270e1c0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b33c0;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10bc84c1c; end: 10bc84c23; -[SCCancelableRequest cancel] */

void FUN_10bc84c1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfec290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_increment_1125d8a68);
  return;
}



/* Entry: 10bc84c24; end: 10bc84c43; -[SCCancelableRequest isCancelled] */

bool FUN_10bc84c24(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c296d80(uVar1);
  return 0 < (int)uVar1;
}



/* Entry: 10bc84c44; end: 10bc84c4f; -[SCCancelableRequest .cxx_destruct] */

void FUN_10bc84c44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10bc84c50; end: 10bc84ce3; -[SCCancelableToken initWithCancelBlock:] */

undefined1 * FUN_10bc84c50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_11270e1c8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar4 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar4;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126be4e8;
    _objc_alloc_init();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar4);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10bc84ce4; end: 10bc84d27; -[SCCancelableToken isCancelled] */

void FUN_10bc84ce4(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x10);
  func_0x00010c06e0e0();
  if ((uVar1 & 1) == 0) {
    lVar2 = *(long *)(param_1 + 8);
    (**(code **)(lVar2 + 0x10))();
    if ((int)lVar2 != 0) {
      func_0x00010bf2dba0(*(undefined8 *)(param_1 + 0x10));
    }
  }
  return;
}



/* Entry: 10bc84d28; end: 10bc84d57; -[SCCancelableToken .cxx_destruct] */

void FUN_10bc84d28(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10bc84d58; end: 10bc84d5b; -[SCClock currentMediaTime] */

void FUN_10bc84d58(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdba010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CACurrentMediaTime_110346c38)();
  return;
}



/* Entry: 10bc84d5c; end: 10bc84d5f; +[SCClock currentMediaTime] */

void FUN_10bc84d5c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdba010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CACurrentMediaTime_110346c38)();
  return;
}



/* Entry: 10bc84d60; end: 10bc84daf; -[SCInactiveComparisonChain initWithResult:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bc84d60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270e1d0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_112796398) = param_3;
  }
  return;
}



/* Entry: 10bc84db0; end: 10bc84dcb; +[SCInactiveComparisonChain greater] */

void FUN_10bc84db0(undefined8 param_1,undefined8 param_2)

{
  _objc_alloc();
  func_0x00010c03fc80(param_1,param_2,0xffffffffffffffff);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10bc84dcc; end: 10bc84de7; +[SCInactiveComparisonChain less] */

void FUN_10bc84dcc(undefined8 param_1,undefined8 param_2)

{
  _objc_alloc();
  func_0x00010c03fc80(param_1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10bc84de8; end: 10bc84df7; -[SCInactiveComparisonChain result] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10bc84de8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112796398);
}



/* Entry: 10bc84df8; end: 10bc84dfb; -[SCInactiveComparisonChain trueFirstWithLeft:right:] */

void FUN_10bc84df8(void)

{
  return;
}



/* Entry: 10bc84dfc; end: 10bc84dff; -[SCInactiveComparisonChain falseFirstWithLeft:right:] */

void FUN_10bc84dfc(void)

{
  return;
}



/* Entry: 10bc84e00; end: 10bc84e03; -[SCInactiveComparisonChain compareNumbersWithLeft:right:] */

void FUN_10bc84e00(void)

{
  return;
}



/* Entry: 10bc84e04; end: 10bc84e07; -[SCInactiveComparisonChain compareStringsWithLeft:right:] */

void FUN_10bc84e04(void)

{
  return;
}



/* Entry: 10bc84e08; end: 10bc84e0b; -[SCInactiveComparisonChain compareLeft:right:comparator:] */

void FUN_10bc84e08(void)

{
  return;
}



/* Entry: 10bc84e0c; end: 10bc84e0f; +[SCComparisonChain start] */

void FUN_10bc84e0c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef03f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_active_112599aa0);
  return;
}



/* Entry: 10bc84e10; end: 10bc84e2b; +[SCComparisonChain active] */

void FUN_10bc84e10(void)

{
  _objc_opt_new(PTR_PTR_1126dfa48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10bc84e2c; end: 10bc84ebf; -[SCComparisonChain trueFirstWithLeft:right:] */

void FUN_10bc84e2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf433a0(puVar1,param_2,puVar2);
  func_0x00010bf39d40(param_1,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10bc84ec0; end: 10bc84f4f; -[SCComparisonChain falseFirstWithLeft:right:] */

void FUN_10bc84ec0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf433a0(puVar1,param_2,puVar2);
  func_0x00010bf39d40(param_1,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10bc84f50; end: 10bc84f7f; -[SCComparisonChain compareNumbersWithLeft:right:] */

void FUN_10bc84f50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010bf433a0(param_3,param_2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bf39d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_classify__1125ac0f8,param_3);
  return;
}



/* Entry: 10bc84f80; end: 10bc84faf; -[SCComparisonChain compareStringsWithLeft:right:] */

void FUN_10bc84f80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010bf433a0(param_3,param_2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bf39d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_classify__1125ac0f8,param_3);
  return;
}



/* Entry: 10bc84fb0; end: 10bc84fe7; -[SCComparisonChain compareLeft:right:comparator:] */

void FUN_10bc84fb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  (**(code **)(param_5 + 0x10))(param_5,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bf39d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_classify__1125ac0f8,param_5);
  return;
}



/* Entry: 10bc84fe8; end: 10bc85047; -[SCComparisonChain classify:] */

void FUN_10bc84fe8(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 1) {
    func_0x00010c098900(PTR_PTR_1126e2d90);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_3 == -1) {
    func_0x00010bfce160(PTR_PTR_1126e2d90);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_opt_class();
    func_0x00010bef03e0();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10bc85048; end: 10bc8504f; -[SCComparisonChain result] */

undefined8 FUN_10bc85048(void)

{
  return 0;
}



/* Entry: 10bc85050; end: 10bc85357;  */

undefined8
FUN_10bc85050(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  _CGRectGetMinX();
  _CGRectGetMinY(param_1,param_2,param_3,param_4);
  _CGRectGetHeight(param_1,param_2,param_3,param_4);
  return uVar1;
}



/* Entry: 10bc85358; end: 10bc853d3;  */

void FUN_10bc85358(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0d3c80(param_1);
  func_0x00010c1d0560();
  _objc_release(param_4);
  _objc_release(param_3);
  uVar1 = param_1;
  func_0x00010bf51e00(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10bc853d4; end: 10bc853df;  */

void FUN_10bc853d4(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1d0570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setObject_forKey__112651b80);
    return;
  }
  return;
}



/* Entry: 10bc853e0; end: 10bc854a3;  */

void FUN_10bc853e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10bc854a4;
  puStack_40 = &UNK_110d96508;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c1063a0(puVar1,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfaeb20(param_1,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10bc854a4; end: 10bc854af;  */

void FUN_10bc854a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bc854ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 10bc854b0; end: 10bc8550b;  */

void FUN_10bc854b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010c0d3c80(param_1);
  func_0x00010c0ce860();
  _objc_release(param_3);
  uVar1 = param_1;
  func_0x00010bf51e00(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10bc8550c; end: 10bc85517;  */

void FUN_10bc8550c(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_addObject__11259c1f0);
    return;
  }
  return;
}



/* Entry: 10bc85518; end: 10bc85537;  */

bool FUN_10bc85518(long param_1)

{
  func_0x00010bfece20();
  return param_1 != 0x7fffffffffffffff;
}



/* Entry: 10bc85538; end: 10bc85673;  */

void FUN_10bc85538(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  
  puVar2 = param_1;
  func_0x00010bf529e0();
  if (param_3 < puVar2) {
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_1;
    func_0x00010bf529e0();
    puVar4 = param_1;
    func_0x00010bf529e0();
    if (puVar3 + -(long)param_3 < puVar4) {
      uVar1 = (int)puVar3 - (int)param_3;
      puVar3 = puVar3 + -(long)param_3;
      do {
        uVar1 = uVar1 + 1;
        uVar7 = (ulong)uVar1;
        puVar4 = puVar3 + 1;
        _arc4random_uniform(uVar7);
        puVar5 = param_1;
        func_0x00010c0dfd40(param_1,param_2,(undefined *)(uVar7 & 0xffffffff));
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar2;
        func_0x00010bf4b900(puVar2,param_2,puVar5);
        _objc_release(puVar5);
        if ((int)puVar6 == 0) {
          puVar3 = (undefined *)(uVar7 & 0xffffffff);
        }
        puVar5 = param_1;
        func_0x00010c0dfd40(param_1,param_2,puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2,param_2,puVar5);
        _objc_release(puVar5);
        puVar5 = param_1;
        func_0x00010bf529e0();
        puVar3 = puVar4;
      } while (puVar4 < puVar5);
    }
    param_1 = puVar2;
    func_0x00010bf00560(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  else {
    func_0x00010bf51e00(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10bc85674; end: 10bc85683;  */

void FUN_10bc85674(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bc8567c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 10bc85684; end: 10bc856b3; +[SCLocalizationUtils UIInterfaceLayoutOrientation:] */

void FUN_10bc85684(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x00010c15b1c0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c292b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (puVar1,PTR_s_userInterfaceLayoutDirectionForS_1126824e8,param_3);
  return;
}



/* Entry: 10bc856b4; end: 10bc85717; +[SCLocalizationUtils localizedDecimalStringWithWesternNumerals:layoutDirection:] */

void FUN_10bc856b4(double param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_111026b38;
  if (0.0 <= param_1 || param_4 != 1) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110daf4f8;
  }
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10bc85718; end: 10bc857b7; +[SCLocalizationUtils stringWithDirectionMarkupForString:layoutDirection:] */

void FUN_10bc85718(undefined8 param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010c08fa60();
  if (puVar1 == (undefined *)0x0) {
LAB_10bc85768:
    _objc_retain(param_3);
    puVar1 = param_3;
  }
  else {
    if (param_4 == 1) {
      ppuVar2 = &PTR____CFConstantStringClassReference_110e523d8;
    }
    else {
      if (param_4 != 0) goto LAB_10bc85768;
      ppuVar2 = &PTR____CFConstantStringClassReference_110ecba58;
    }
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,ppuVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10bc857b8; end: 10bc85aaf;  */

void FUN_10bc857b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (puRam00000001137fda28 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSMapTable_1126b4428;
    func_0x00010c2a2be0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puRam00000001137fda28;
    puRam00000001137fda28 = puVar1;
    _objc_release(puVar2);
  }
  puVar2 = puRam00000001137fda28;
  func_0x00010c0dff20(puRam00000001137fda28,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(puRam00000001137fda28,param_2,puVar2,param_1);
  }
  puVar1 = PTR__OBJC_CLASS___NSUUID_1126b0270;
  func_0x00010bdc3540(PTR__OBJC_CLASS___NSUUID_1126b0270);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bdc3580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010befa120(puVar2,param_2,puVar3);
  func_0x00010c14dac0(param_1,param_2,0,0);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10bc85ab0; end: 10bc85adf;  */

void FUN_10bc85ab0(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_111026b58;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_111026b58,
                      &PTR____CFConstantStringClassReference_111026b78,0);
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



/* Entry: 10bc85ae0; end: 10bc85bef;  */

void FUN_10bc85ae0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  uint uStack_54;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c25cd40();
  func_0x00010bf070e0();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_10bc85bf0;
  puStack_68 = &UNK_110d96578;
  lVar2 = param_1;
  puStack_60 = puVar1;
  _objc_opt_class();
  _class_copyIvarList();
  if (uStack_54 != 0) {
    uVar6 = 0;
    do {
      lVar4 = *(long *)(lVar2 + uVar6 * 8);
      lVar3 = lVar4;
      _ivar_getOffset();
      uVar5 = *(undefined8 *)(param_1 + lVar3);
      _ivar_getName(lVar4);
      (*pcStack_70)(&puStack_80,uVar5,lVar4,lVar3);
      uVar6 = uVar6 + 1;
    } while (uVar6 < uStack_54);
  }
  _free(lVar2);
  func_0x00010bf070e0(puVar1);
  func_0x00010bf51e00(puVar1);
  _objc_autorelease();
  return;
}



/* Entry: 10bc85bf0; end: 10bc85c33;  */

void FUN_10bc85bf0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf6e340();
  func_0x00010bf06ba0(uVar1);
  return;
}



/* Entry: 10bc85c34; end: 10bc85e5f;  */

undefined8 *
FUN_10bc85c34(undefined8 *param_1,undefined8 *param_2,byte *param_3,long *param_4,long param_5,
             long param_6)

{
  char *pcVar1;
  undefined8 *puVar2;
  char *pcVar3;
  long lVar4;
  undefined8 *puVar5;
  
  if (param_1 == param_2) {
    return (undefined8 *)0x1;
  }
  _objc_opt_class();
  puVar2 = param_2;
  func_0x00010c077980();
  if ((int)puVar2 != 0) {
    if (param_5 != 0) {
      if ((*param_3 & 1) == 0) {
        puVar2 = param_1;
        _objc_opt_class();
        _class_copyIvarList();
        if (0 < param_5) {
          lVar4 = 0;
          puVar5 = puVar2;
          do {
            pcVar3 = (char *)*puVar5;
            pcVar1 = pcVar3;
            _ivar_getTypeEncoding();
            if (*pcVar1 == '@') {
              _ivar_getOffset();
              param_4[lVar4] = (long)pcVar3;
              lVar4 = lVar4 + 1;
            }
            param_5 = param_5 + -1;
            puVar5 = puVar5 + 1;
          } while (param_5 != 0);
        }
        _free(puVar2);
        DataMemoryBarrier(2,3);
        *param_3 = 1;
      }
      if (0 < param_6) {
        do {
          puVar2 = *(undefined8 **)((long)param_1 + *param_4);
          if ((puVar2 != *(undefined8 **)((long)param_2 + *param_4)) &&
             (func_0x00010c071ae0(), (int)puVar2 == 0)) {
            return puVar2;
          }
          param_6 = param_6 + -1;
          param_4 = param_4 + 1;
        } while (param_6 != 0);
      }
    }
    puVar2 = (undefined8 *)0x1;
  }
  return puVar2;
}



/* Entry: 10bc85e60; end: 10bc85ec3;  */

void FUN_10bc85e60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb5a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSString_1126ae4d0,PTR_s_formatDate_showAgo_maxHours_show_1125cb030,
             param_3,param_4,3,0);
  return;
}



/* Entry: 10bc85ec4; end: 10bc85f3b;  */

void FUN_10bc85ec4(void)

{
  func_0x00010bfb5aa0(0x4024000000000000);
  return;
}



/* Entry: 10bc85f3c; end: 10bc8621f;  */

void FUN_10bc85f3c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,int param_7,ulong param_8,int param_9,
                  uint param_10)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  double dVar7;
  
  dVar7 = param_1;
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c26f380();
  uVar6 = (uint)dVar7;
  if ((double)(int)uVar6 <= param_1) {
    if (param_7 == 0) {
      if (param_9 == 0) {
        if ((param_8 & 1) == 0) {
          func_0x00010bc86418();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          func_0x00010bc86400();
          _objc_retainAutoreleasedReturnValue();
        }
      }
      else if ((param_8 & 1) == 0) {
        func_0x00010bc86448();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010bc86430();
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      func_0x00010bc863e8();
      _objc_retainAutoreleasedReturnValue();
    }
    goto LAB_10bc860dc;
  }
  if (((param_10 & 0x100) == 0) && (0xe0f < (int)uVar6)) {
    if ((ulong)(param_6 * 0xe10) < (ulong)uVar6) {
      if (uVar6 < 0x15181) {
        puVar2 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
        func_0x00010bf5e300();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar2;
        func_0x00010c0702a0();
        _objc_release(puVar2);
        puVar3 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
        if ((int)puVar4 == 0) {
          func_0x00010bf65720(PTR__OBJC_CLASS___NSDateFormatter_1126af778);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          func_0x00010c22d4a0();
          _objc_retainAutoreleasedReturnValue();
        }
LAB_10bc86164:
        puVar2 = puVar3;
        func_0x00010c25d400();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        if (uVar6 < 0x93a81) {
          puVar3 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
          func_0x00010bf657a0(PTR__OBJC_CLASS___NSDateFormatter_1126af778);
          _objc_retainAutoreleasedReturnValue();
          goto LAB_10bc86164;
        }
        puVar3 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
        func_0x00010bf5e300();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar3;
        func_0x00010bf44660();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar2;
        func_0x00010c2bedc0();
        _objc_release(puVar2);
        puVar5 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
        if ((long)puVar4 < 1) {
          func_0x00010c22d3a0(PTR__OBJC_CLASS___NSDateFormatter_1126af778);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          func_0x00010c22d3c0();
          _objc_retainAutoreleasedReturnValue();
        }
        puVar2 = puVar5;
        func_0x00010c25d400();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar5);
      }
      _objc_release(puVar3);
      goto LAB_10bc860dc;
    }
    if ((char)param_10 != '\0') {
      puVar2 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
      func_0x00010bf5e300();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c070360();
      _objc_release(puVar2);
      if ((int)puVar3 != 0) {
        puVar3 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
        func_0x00010c27f160(PTR__OBJC_CLASS___NSDateFormatter_1126af778);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_10bc86164;
      }
    }
  }
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bebc3a0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,uVar6,param_5);
  _objc_retainAutoreleasedReturnValue();
LAB_10bc860dc:
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10bc86220; end: 10bc863cf;  */

void FUN_10bc86220(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  
  puVar3 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x00010bf60460();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c26d3e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = puVar4;
  func_0x00010c0e00e0(puVar4,param_2,&PTR____CFConstantStringClassReference_111026bd8);
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSDateComponentsFormatter_1126c5298;
    _objc_alloc_init();
    puVar5 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
    func_0x00010bf5e300(PTR__OBJC_CLASS___NSCalendar_1126aeec8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c175640(puVar3,param_2,puVar5);
    _objc_release(puVar5);
    func_0x00010c21b9a0(puVar3,param_2,1);
    func_0x00010c1d0640(puVar4,param_2,puVar3,&PTR____CFConstantStringClassReference_111026bd8);
  }
  uVar8 = (uint)param_3;
  uVar1 = 0x10;
  if (0x93a7f < uVar8) {
    uVar1 = 0x1000;
  }
  uVar2 = 0x20;
  if (0x2a2 < ((uint)(param_3 >> 7) & 0x1ffffff)) {
    uVar2 = uVar1;
  }
  uVar1 = 0x40;
  if (0xe0f < uVar8) {
    uVar1 = uVar2;
  }
  uVar2 = 0x80;
  if (0x3b < (int)uVar8) {
    uVar2 = uVar1;
  }
  func_0x00010c167440(puVar3,param_2,uVar2);
  puVar6 = puVar3;
  func_0x00010c25d5a0((double)(int)uVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if ((param_4 & 1) == 0) {
    _objc_retain(puVar6);
    puVar5 = puVar6;
  }
  else {
    puVar7 = puVar6;
    FUN_10bc863d0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar5,param_2,puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
  }
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10bc863d0; end: 10bc8645f;  */

void FUN_10bc863d0(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_111026bf8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_111026bf8,
                      &PTR____CFConstantStringClassReference_111026c18,0);
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



/* Entry: 10bc86460; end: 10bc8646b; -[SCSentinel value] */

undefined4 FUN_10bc86460(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10bc8646c; end: 10bc86483; -[SCSentinel increment] */

void FUN_10bc8646c(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  
  piVar1 = (int *)(param_1 + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return;
}



/* Entry: 10bc86484; end: 10bc8648f; -[SCSentinel reset] */

void FUN_10bc86484(long param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}



/* Entry: 10bc86490; end: 10bc864cb; -[SCUserSessionScopedObjectFuture .cxx_destruct] */

void FUN_10bc86490(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10bc864cc; end: 10bc864fb; -[SCUserSessionAssociatedStorage setUserSessionScopedObjects:] */

void FUN_10bc864cc(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10bc864fc; end: 10bc86503; -[SCUserSessionAssociatedStorage setInvalidated:] */

void FUN_10bc864fc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10bc86504; end: 10bc86533; -[SCUserSessionAssociatedStorage .cxx_destruct] */

void FUN_10bc86504(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10bc86534; end: 10bc86797; -[SCUserSession invalidate] */

undefined1 *
FUN_10bc86534(undefined1 *param_1,undefined8 param_2,undefined1 *param_3,undefined1 param_4,
             undefined8 param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined1 **ppuVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined1 *puStack_170;
  undefined *puStack_168;
  undefined1 *puStack_160;
  undefined1 *puStack_158;
  undefined1 *puStack_150;
  undefined1 *puStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
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
  
  puVar7 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bdcfc60();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = param_1;
  func_0x00010c15b1a0();
  _objc_retainAutoreleasedReturnValue();
  _dispatch_semaphore_wait();
  _objc_release(puVar10);
  puVar10 = param_1;
  func_0x00010c06a280();
  puVar2 = param_1;
  func_0x00010c06a280();
  if (((ulong)puVar2 & 1) == 0) {
    func_0x00010c1ae800(param_1);
    puVar2 = param_1;
    func_0x00010c293880();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar1;
    func_0x00010bf51e00();
    _objc_release(puVar1);
    _objc_release(puVar2);
    param_3 = (undefined1 *)0x0;
    func_0x00010c21f3c0(param_1);
  }
  else {
    puVar8 = (undefined1 *)0x0;
  }
  puVar2 = param_1;
  func_0x00010c15b1a0();
  _objc_retainAutoreleasedReturnValue();
  _dispatch_semaphore_signal();
  _objc_release(puVar2);
  if (((ulong)puVar10 & 1) == 0) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    _objc_retain(puVar8);
    param_4 = SUB81(auStack_f0,0);
    param_5 = 0x10;
    puVar1 = puVar8;
    func_0x00010bf52a60();
    if (puVar1 != (undefined1 *)0x0) {
      lVar9 = *plStack_120;
      do {
        puVar10 = (undefined1 *)0x0;
        do {
          if (*plStack_120 != lVar9) {
            _objc_enumerationMutation(puVar8);
          }
          puVar2 = *(undefined1 **)(lStack_128 + (long)puVar10 * 8);
          func_0x00010c2a1320();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar2;
          func_0x000107c318f8();
          if (puVar2 != (undefined1 *)0x0 && (int)puVar3 != 0) {
            func_0x00010c069d00(puVar2);
          }
          puVar4 = PTR_DAT_1126a5d00;
          _objc_retain(puVar2);
          puVar3 = puVar2;
          func_0x000107c318f8(puVar2,puVar4);
          _objc_release(puVar2);
          if (puVar2 != (undefined1 *)0x0 && (int)puVar3 != 0) {
            puVar4 = PTR_PTR_1126c3a00;
            func_0x00010c22ba80(PTR_PTR_1126c3a00);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c06a180();
            _objc_release(puVar4);
          }
          _objc_release(puVar2);
          puVar10 = puVar10 + 1;
        } while (puVar1 != puVar10);
        param_4 = SUB81(auStack_f0,0);
        param_5 = 0x10;
        puVar1 = puVar8;
        puVar7 = &uStack_130;
        func_0x00010bf52a60();
        puVar10 = (undefined1 *)0x0;
      } while (puVar1 != (undefined1 *)0x0);
    }
    _objc_release(puVar8);
    param_3 = (undefined1 *)puVar7;
  }
  _objc_release(puVar8);
  puVar1 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar1;
  }
  ___stack_chk_fail();
  ppuVar5 = &puStack_170;
  pcStack_138 = FUN_10bc86798;
  puStack_160 = puVar2;
  puStack_158 = puVar10;
  puStack_150 = puVar8;
  puStack_148 = param_1;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(param_5);
  puStack_168 = PTR_PTR_11270e1e8;
  puStack_170 = puVar1;
  _objc_msgSendSuper2(&puStack_170,PTR_s_init_1125d9248);
  if (ppuVar5 != (undefined1 **)0x0) {
    *(undefined1 **)((long)ppuVar5 + 0x18) = param_3;
    *(undefined1 *)((long)ppuVar5 + 8) = param_4;
    _objc_retain(param_5);
    uVar6 = *(undefined8 *)((long)ppuVar5 + 0x10);
    *(undefined8 *)((long)ppuVar5 + 0x10) = param_5;
    _objc_release(uVar6);
  }
  _objc_release(param_5);
  return (undefined1 *)ppuVar5;
}



/* Entry: 10bc86798; end: 10bc86823; -[SCLogout initWithLogoutSource:optInToOneTapLogin:authSessionId:] */

undefined1 *
FUN_10bc86798(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_11270e1e8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    *(undefined1 *)((long)puVar1 + 8) = param_4;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 10bc86824; end: 10bc8682b; -[SCLogout initWithLogoutSource:] */

void FUN_10bc86824(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c027b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithLogoutSource_optInToOneT_1125e78c8,param_3,0);
  return;
}



/* Entry: 10bc8682c; end: 10bc86833; -[SCLogout initWithLogoutSource:optInToOneTapLogin:] */

void FUN_10bc8682c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c027bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithLogoutSource_optInToOneT_1125e78d0,param_3,param_4,0);
  return;
}



/* Entry: 10bc86834; end: 10bc8684f; -[SCLogout isForced] */

uint FUN_10bc86834(long param_1)

{
  return (uint)(*(ulong *)(param_1 + 0x18) < 0xd) &
         0x1feeU >> (ulong)((uint)*(ulong *)(param_1 + 0x18) & 0x1f);
}



/* Entry: 10bc86850; end: 10bc86877; -[SCLogout getAuthSessionId] */

void FUN_10bc86850(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10bc86878; end: 10bc8687f; -[SCLogout shouldUseOneTapLoginLogout] */

undefined1 FUN_10bc86878(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10bc86880; end: 10bc868af; -[SCLogout setAuthSessionId:] */

void FUN_10bc86880(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10bc868b0; end: 10bc868b7; -[SCLogout logoutSource] */

undefined8 FUN_10bc868b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10bc868b8; end: 10bc868c3; -[SCLogout .cxx_destruct] */

void FUN_10bc868b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10bc868c4; end: 10bc86937; +[SCUserSessionContext fromRegistrationWithJanusBootstrapData:registrationInfo:] */

void FUN_10bc868c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(param_1);
  func_0x00010c058bc0();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10bc86938; end: 10bc869ab; +[SCUserSessionContext fromLogInWithJanusBootstrapData:loginInfo:] */

void FUN_10bc86938(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(param_1);
  func_0x00010c058bc0();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10bc869ac; end: 10bc86a37; -[SCUserSessionContext isEqual:] */

long FUN_10bc869ac(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if (param_3 == param_1) {
    param_1 = 1;
  }
  else {
    if (param_3 != 0) {
      lVar1 = param_3;
      _objc_opt_class();
      lVar2 = param_1;
      _objc_opt_class(param_1);
      func_0x00010c071ae0(lVar1,param_2,lVar2);
      if ((int)lVar1 != 0) {
        func_0x00010c071ca0(param_1,param_2,param_3);
        goto LAB_10bc86a1c;
      }
    }
    param_1 = 0;
  }
LAB_10bc86a1c:
  _objc_release(param_3);
  return param_1;
}



/* Entry: 10bc86a38; end: 10bc86aeb; -[SCUserSessionContext isEqualToContext:] */

undefined8 FUN_10bc86a38(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10bc86ac8:
    uVar2 = 1;
  }
  else {
    if (((param_3 != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) &&
       (*(char *)(param_1 + 0x10) == *(char *)(param_3 + 0x10))) {
      lVar1 = *(long *)(param_1 + 0x28);
      if ((lVar1 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar1 != 0)) {
        lVar1 = *(long *)(param_1 + 0x20);
        if ((lVar1 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar1 != 0)) {
          lVar1 = *(long *)(param_1 + 0x18);
          if ((lVar1 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar1 != 0))
          goto LAB_10bc86ac8;
        }
      }
    }
    uVar2 = 0;
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 10bc86aec; end: 10bc86b47; -[SCUserSessionContext hash] */

long FUN_10bc86aec(long param_1)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 8);
  bVar1 = *(byte *)(param_1 + 0x10);
  lVar2 = *(long *)(param_1 + 0x18);
  func_0x00010bfde980(lVar2);
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x00010bfde980(lVar3);
  lVar4 = *(long *)(param_1 + 0x28);
  func_0x00010bfde980(lVar4);
  return lVar4 + (lVar3 + (lVar2 + ((ulong)bVar1 + lVar5 * 0x1f) * 0x1f) * 0x1f) * 0x1f;
}



/* Entry: 10bc86b48; end: 10bc86b83; -[SCUserSessionContext .cxx_destruct] */

void FUN_10bc86b48(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10bc86b84; end: 10bc86bcf; +[SCLogoutReason ageVerification] */

void FUN_10bc86b84(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126e2da8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10bc86bd0; end: 10bc86c37; +[SCLogoutReason authenticationErrorWithRequestPath:] */

void FUN_10bc86bd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126e2da8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 2;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10bc86c38; end: 10bc86c83; +[SCLogoutReason billboard] */

void FUN_10bc86c38(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126e2da8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10bc86c84; end: 10bc86ccf; +[SCLogoutReason noUsername] */

void FUN_10bc86c84(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126e2da8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10bc86cd0; end: 10bc86d1b; +[SCLogoutReason termsOfUse] */

void FUN_10bc86cd0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126e2da8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10bc86d1c; end: 10bc86d63; +[SCLogoutReason userInitiated] */

void FUN_10bc86d1c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126e2da8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10bc86d64; end: 10bc86d87; -[SCLogoutReason copyWithZone:] */

undefined8 FUN_10bc86d64(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10bc86d88; end: 10bc86de7; -[SCLogoutReason hash] */

void FUN_10bc86d88(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  puVar2 = &uStack_28;
  uStack_20 = uVar1;
  func_0x000107c3191c(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_58 = PTR_PTR_11270e1f8;
  puStack_60 = puVar2;
  _objc_msgSendSuper2(&puStack_60,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10bc86de8; end: 10bc86e2b; -[SCLogoutReason internalInit] */

void FUN_10bc86de8(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_11270e1f8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10bc86e2c; end: 10bc86ecb; -[SCLogoutReason isEqual:] */

long FUN_10bc86e2c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10bc86eb0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_10bc86eb0;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10bc86eb0;
    }
  }
  lVar3 = 1;
LAB_10bc86eb0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10bc86ecc; end: 10bc87013; -[SCLogoutReason matchUserInitiated:termsOfUse:authenticationError:noUsername:ageVerification:billboard:] */

void FUN_10bc86ecc(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8)

{
  long lVar1;
  code *pcVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 < 3) {
    if (lVar1 == 0) {
      if (param_3 == 0) goto LAB_10bc86fd0;
      pcVar2 = *(code **)(param_3 + 0x10);
      lVar1 = param_3;
    }
    else {
      if (lVar1 != 1) {
        if ((lVar1 == 2) && (param_5 != 0)) {
          (**(code **)(param_5 + 0x10))(param_5,*(undefined8 *)(param_1 + 0x10));
        }
        goto LAB_10bc86fd0;
      }
      if (param_4 == 0) goto LAB_10bc86fd0;
      pcVar2 = *(code **)(param_4 + 0x10);
      lVar1 = param_4;
    }
  }
  else if (lVar1 == 3) {
    if (param_6 == 0) goto LAB_10bc86fd0;
    pcVar2 = *(code **)(param_6 + 0x10);
    lVar1 = param_6;
  }
  else if (lVar1 == 4) {
    if (param_7 == 0) goto LAB_10bc86fd0;
    pcVar2 = *(code **)(param_7 + 0x10);
    lVar1 = param_7;
  }
  else {
    if ((lVar1 != 5) || (param_8 == 0)) goto LAB_10bc86fd0;
    pcVar2 = *(code **)(param_8 + 0x10);
    lVar1 = param_8;
  }
  (*pcVar2)(lVar1);
LAB_10bc86fd0:
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bc87014; end: 10bc8701f; -[SCLogoutReason .cxx_destruct] */

void FUN_10bc87014(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10bc87020; end: 10bc87043; -[SCUserSession copyWithZone:] */

undefined8 FUN_10bc87020(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10bc87044; end: 10bc870cf; -[SCUserSession hash] */

void FUN_10bc87044(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
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
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar3 + 4,0);
  _objc_storeStrong(puVar3 + 3,0);
  _objc_storeStrong(puVar3 + 2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar3 + 1,0);
  return;
}



/* Entry: 10bc870d0; end: 10bc87117; -[SCUserSession .cxx_destruct] */

void FUN_10bc870d0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10bc87118; end: 10bc87167; -[SCLoginInfo initWithLoginType:wasPasswordAutofilled:] */

void FUN_10bc87118(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270e208;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    *(undefined1 *)((long)puVar1 + 8) = param_4;
  }
  return;
}



/* Entry: 10bc87168; end: 10bc8718b; -[SCLoginInfo copyWithZone:] */

undefined8 FUN_10bc87168(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10bc8718c; end: 10bc871e7; -[SCLoginInfo hash] */

undefined8 * FUN_10bc8718c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = *(undefined8 *)(param_1 + 0x10);
  uStack_20 = (ulong)*(byte *)(param_1 + 8);
  puVar1 = &uStack_28;
  func_0x000107c3191c(puVar1,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == param_3) {
    puVar3 = (undefined8 *)0x1;
  }
  else {
    puVar3 = (undefined8 *)0x0;
    if ((puVar1 != (undefined8 *)0x0) && (param_3 != (undefined8 *)0x0)) {
      puVar3 = puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar3);
      if ((((ulong)puVar2 & 1) == 0) || (puVar1[2] != param_3[2])) {
        puVar3 = (undefined8 *)0x0;
      }
      else {
        puVar3 = (undefined8 *)(ulong)(*(char *)(puVar1 + 1) == *(char *)(param_3 + 1));
      }
    }
  }
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 10bc871e8; end: 10bc8727f; -[SCLoginInfo isEqual:] */

bool FUN_10bc871e8(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if (((uVar3 & 1) == 0) || (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(char *)(param_1 + 8) == *(char *)(param_3 + 8);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10bc87280; end: 10bc87287; -[SCLoginInfo loginType] */

undefined8 FUN_10bc87280(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10bc87288; end: 10bc8728f; -[SCLoginInfo wasPasswordAutofilled] */

undefined1 FUN_10bc87288(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10bc87290; end: 10bc87307; -[SCRegistrationInfo initWithVerificationResult:] */

undefined1 * FUN_10bc87290(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_11270e210;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10bc87308; end: 10bc8732b; -[SCRegistrationInfo copyWithZone:] */

undefined8 FUN_10bc87308(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10bc8732c; end: 10bc87333; -[SCRegistrationInfo hash] */

void FUN_10bc8732c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 10bc87334; end: 10bc873c3; -[SCRegistrationInfo isEqual:] */

long FUN_10bc87334(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10bc873a8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_10bc873a8;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10bc873a8;
    }
  }
  lVar3 = 1;
LAB_10bc873a8:
  _objc_release(param_3);
  return lVar3;
}



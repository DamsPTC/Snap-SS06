/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107dcde9c; end: 107dcdeb3; -[SCOperaShowActionMenuButtonLayer page] */

void FUN_107dcde9c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107dcdeb4; end: 107dcdebb; -[SCOperaShowActionMenuButtonLayer .cxx_destruct] */

void FUN_107dcdeb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 0x20);
  return;
}



/* Entry: 107dcdebc; end: 107dcdf07; +[SCOperaStreamingLoadingLayer layerWithPage:] */

void FUN_107dcdebc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d6968;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c032da0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107dcdf08; end: 107dcdf3b; -[SCOperaStreamingLoadingLayer initWithPage:] */

void FUN_107dcdf08(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126fb210;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 107dcdf3c; end: 107dcdf43; -[SCOperaStreamingLoadingLayer type] */

undefined8 FUN_107dcdf3c(void)

{
  return 0x1c;
}



/* Entry: 107dcdf44; end: 107dcdfa3; -[SCOperaStreamingLoadingLayer isEqual:] */

bool FUN_107dcdf44(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  puVar1 = param_3;
  _objc_opt_class(param_3);
  puVar2 = PTR_PTR_1126d6968;
  _objc_opt_class(PTR_PTR_1126d6968);
  _objc_release(param_3);
  return param_1 == param_3 && puVar1 == puVar2;
}



/* Entry: 107dcdfa4; end: 107dcdfef; +[SCOperaSubscribeButtonLayer layerWithPage:] */

void FUN_107dcdfa4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d6978;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c032da0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107dcdff0; end: 107dce16f; -[SCOperaSubscribeButtonLayer initWithPage:] */

undefined1 * FUN_107dcdff0(float param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar3 = &uStack_60;
  _objc_retain(param_4);
  uVar2 = param_4;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR_PTR_1126fb218;
  uStack_60 = param_2;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar3 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar3 + 0x10),param_4);
    uVar4 = uVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar6 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar5);
    uVar1 = uVar4;
    if ((uVar6 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar4);
    func_0x00010bfb2c80(uVar1);
    _objc_release(uVar1);
    *(double *)((long)puVar3 + 0x18) = (double)param_1;
    uVar4 = uVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar6 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar5);
    uVar1 = uVar4;
    if ((uVar6 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar4);
    uVar4 = uVar1;
    func_0x00010bf1f3c0();
    _objc_release(uVar1);
    *(char *)((long)puVar3 + 9) = (char)uVar4;
    *(bool *)((long)puVar3 + 8) = *(double *)((long)puVar3 + 0x18) != 0.0;
  }
  _objc_release(uVar2);
  _objc_release(param_4);
  return (undefined1 *)puVar3;
}



/* Entry: 107dce170; end: 107dce177; -[SCOperaSubscribeButtonLayer type] */

undefined8 FUN_107dce170(void)

{
  return 0x1d;
}



/* Entry: 107dce178; end: 107dce22b; -[SCOperaSubscribeButtonLayer isEqual:] */

bool FUN_107dce178(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  byte bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  puVar3 = param_3;
  _objc_opt_class();
  puVar4 = PTR_PTR_1126d6978;
  _objc_opt_class();
  if (puVar3 == puVar4) {
    if (param_1 == param_3) {
      bVar2 = true;
    }
    else {
      _objc_retain(param_3);
      bVar1 = param_1[8];
      puVar3 = param_3;
      func_0x00010c07b480();
      if ((uint)bVar1 == (uint)puVar3) {
        bVar1 = param_1[9];
        puVar3 = param_3;
        func_0x00010bf021e0(param_3);
        bVar2 = (uint)bVar1 == (uint)puVar3;
      }
      else {
        bVar2 = false;
      }
      _objc_release(param_3);
    }
  }
  else {
    bVar2 = false;
  }
  _objc_release(param_3);
  return bVar2;
}



/* Entry: 107dce22c; end: 107dce243; -[SCOperaSubscribeButtonLayer page] */

void FUN_107dce22c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107dce244; end: 107dce24f; -[SCOperaSubscribeButtonLayer setPage:] */

void FUN_107dce244(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 107dce250; end: 107dce257; -[SCOperaSubscribeButtonLayer isProgressBarAlignedToTop] */

undefined1 FUN_107dce250(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107dce258; end: 107dce25f; -[SCOperaSubscribeButtonLayer topOffsetWhenOverMediaContent] */

undefined8 FUN_107dce258(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107dce260; end: 107dce267; -[SCOperaSubscribeButtonLayer alwaysUseTopOffset] */

undefined1 FUN_107dce260(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 107dce268; end: 107dce26f; -[SCOperaSubscribeButtonLayer .cxx_destruct] */

void FUN_107dce268(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 0x10);
  return;
}



/* Entry: 107dce270; end: 107dce2bb; +[SCOperaSubscriptionLayer layerWithPage:] */

void FUN_107dce270(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d6910;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c032da0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107dce2bc; end: 107dce433; -[SCOperaSubscriptionLayer initWithPage:] */

undefined1 * FUN_107dce2bc(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126fb220;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 == (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf1c920();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar3 = param_3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
    }
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar4);
    _objc_release(puVar2);
    puVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 == (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf1c920();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar3 = param_3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
    }
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar4);
    _objc_release(puVar2);
    puVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    _objc_release(uVar4);
    *(undefined1 *)((long)puVar1 + 8) = 0;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107dce434; end: 107dce43b; -[SCOperaSubscriptionLayer type] */

undefined8 FUN_107dce434(void)

{
  return 0xb;
}



/* Entry: 107dce43c; end: 107dce6ab; -[SCOperaSubscriptionLayer isEqual:] */

undefined * FUN_107dce43c(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  puVar3 = param_3;
  _objc_opt_class();
  puVar1 = PTR_PTR_1126d6910;
  _objc_opt_class();
  if (puVar3 != puVar1) {
    puVar3 = (undefined *)0x0;
    goto LAB_107dce688;
  }
  if (param_1 == param_3) {
    puVar3 = (undefined *)0x1;
    goto LAB_107dce688;
  }
  _objc_retain(param_3);
  puVar2 = *(undefined **)(param_1 + 0x10);
  puVar1 = param_3;
  func_0x00010bf13d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar2);
  _objc_retain(puVar1);
  if (puVar2 == puVar1) {
    _objc_release(puVar1);
    _objc_release(puVar2);
LAB_107dce514:
    puVar4 = *(undefined **)(param_1 + 0x18);
    puVar2 = param_3;
    func_0x00010bf0b040();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar4);
    _objc_retain(puVar2);
    if (puVar4 == puVar2) {
      _objc_release(puVar2);
      _objc_release(puVar4);
LAB_107dce584:
      puVar5 = *(undefined **)(param_1 + 0x20);
      puVar4 = param_3;
      func_0x00010c2605c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar5);
      _objc_retain(puVar4);
      if (puVar5 == puVar4) {
        _objc_release(puVar4);
        _objc_release(puVar5);
LAB_107dce5f4:
        puVar6 = *(undefined **)(param_1 + 0x28);
        puVar5 = param_3;
        func_0x00010c260780();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(puVar6);
        _objc_retain(puVar5);
        if (puVar6 == puVar5) {
          puVar3 = (undefined *)0x1;
        }
        else if (puVar5 == (undefined *)0x0) {
          puVar3 = (undefined *)0x0;
        }
        else {
          puVar3 = puVar6;
          func_0x00010c071ae0(puVar6,param_2,puVar5);
        }
        _objc_release(puVar5);
        _objc_release(puVar6);
      }
      else {
        if (puVar4 != (undefined *)0x0) {
          puVar3 = puVar5;
          func_0x00010c071ae0(puVar5,param_2,puVar4);
          _objc_release(puVar4);
          _objc_release(puVar5);
          if ((int)puVar3 == 0) goto LAB_107dce5dc;
          goto LAB_107dce5f4;
        }
        puVar3 = (undefined *)0x0;
      }
      _objc_release(puVar5);
    }
    else {
      if (puVar2 != (undefined *)0x0) {
        puVar3 = puVar4;
        func_0x00010c071ae0(puVar4,param_2,puVar2);
        _objc_release(puVar2);
        _objc_release(puVar4);
        if ((int)puVar3 == 0) goto LAB_107dce56c;
        goto LAB_107dce584;
      }
LAB_107dce5dc:
      puVar3 = (undefined *)0x0;
    }
    _objc_release(puVar4);
LAB_107dce670:
    _objc_release(puVar2);
  }
  else {
    if (puVar1 == (undefined *)0x0) {
LAB_107dce56c:
      puVar3 = (undefined *)0x0;
      goto LAB_107dce670;
    }
    puVar3 = puVar2;
    func_0x00010c071ae0(puVar2,param_2,puVar1);
    _objc_release(puVar1);
    _objc_release(puVar2);
    if ((int)puVar3 != 0) goto LAB_107dce514;
    puVar3 = (undefined *)0x0;
  }
  _objc_release(puVar1);
  _objc_release(param_3);
LAB_107dce688:
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 107dce6ac; end: 107dce6b3; -[SCOperaSubscriptionLayer backgroundColor] */

undefined8 FUN_107dce6ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107dce6b4; end: 107dce6bb; -[SCOperaSubscriptionLayer assetColor] */

undefined8 FUN_107dce6b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107dce6bc; end: 107dce6c3; -[SCOperaSubscriptionLayer subscribedText] */

undefined8 FUN_107dce6bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107dce6c4; end: 107dce6cb; -[SCOperaSubscriptionLayer shouldShowSubscribeButton] */

undefined1 FUN_107dce6c4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107dce6cc; end: 107dce6d3; -[SCOperaSubscriptionLayer subscriptionConfiguration] */

undefined8 FUN_107dce6cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107dce6d4; end: 107dce6db; -[SCOperaSubscriptionLayer titleText] */

undefined8 FUN_107dce6d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107dce6dc; end: 107dce72f; -[SCOperaSubscriptionLayer .cxx_destruct] */

void FUN_107dce6dc(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107dce730; end: 107dce77b; +[SCOperaTapToolTipsLayer layerWithPage:] */

void FUN_107dce730(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d6928;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c032da0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107dce77c; end: 107dce7af; -[SCOperaTapToolTipsLayer initWithPage:] */

void FUN_107dce77c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126fb228;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 107dce7b0; end: 107dce7b7; -[SCOperaTapToolTipsLayer type] */

undefined8 FUN_107dce7b0(void)

{
  return 0xe;
}



/* Entry: 107dce7b8; end: 107dce7ef; -[SCOperaTapToolTipsLayer isEqual:] */

bool FUN_107dce7b8(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  
  _objc_opt_class(param_3);
  puVar1 = PTR_PTR_1126d6928;
  _objc_opt_class(PTR_PTR_1126d6928);
  return param_3 == puVar1;
}



/* Entry: 107dce7f0; end: 107dce83b; +[SCOperaTextLayer layerWithPage:] */

void FUN_107dce7f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d68f8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c032da0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107dce83c; end: 107dcecdb; -[SCOperaTextLayer initWithPage:] */

undefined1 * FUN_107dce83c(float param_1,undefined8 param_2,undefined8 param_3,undefined **param_4)

{
  undefined8 *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR_PTR_1126fb230;
  uStack_60 = param_2;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    ppuVar2 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = &PTR____CFConstantStringClassReference_110ddf4b8;
    if (ppuVar2 != (undefined **)0x0) {
      ppuVar4 = ppuVar2;
    }
    _objc_retain(ppuVar4);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined ***)((long)puVar1 + 0x10) = ppuVar4;
    _objc_release(uVar3);
    _objc_release(ppuVar2);
    ppuVar4 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___UIFont_1126aec38;
    if (ppuVar4 == (undefined **)0x0) {
      func_0x00010c266f80(PTR__OBJC_CLASS___UIFont_1126aec38);
      func_0x00010c266f40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
      *(undefined **)((long)puVar1 + 0x18) = puVar5;
    }
    else {
      _objc_retain(ppuVar4);
      uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
      *(undefined ***)((long)puVar1 + 0x18) = ppuVar4;
    }
    _objc_release(uVar3);
    _objc_release(ppuVar4);
    ppuVar4 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar4 == (undefined **)0x0) {
      puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c2a4b20();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
      *(undefined **)((long)puVar1 + 0x20) = puVar5;
    }
    else {
      _objc_retain(ppuVar4);
      uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
      *(undefined ***)((long)puVar1 + 0x20) = ppuVar4;
    }
    _objc_release(uVar3);
    _objc_release(ppuVar4);
    ppuVar4 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar4 == (undefined **)0x0) {
      puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf634a0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
      *(undefined **)((long)puVar1 + 0x28) = puVar5;
    }
    else {
      _objc_retain(ppuVar4);
      uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
      *(undefined ***)((long)puVar1 + 0x28) = ppuVar4;
    }
    _objc_release(uVar3);
    _objc_release(ppuVar4);
    ppuVar2 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = &PTR__OBJC_CLASS___NSConstantFloatNumber_1111864a0;
    if (ppuVar2 != (undefined **)0x0) {
      ppuVar4 = ppuVar2;
    }
    _objc_retain(ppuVar4);
    _objc_release(ppuVar2);
    ppuVar6 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = &PTR__OBJC_CLASS___NSConstantFloatNumber_1111864a0;
    if (ppuVar6 != (undefined **)0x0) {
      ppuVar2 = ppuVar6;
    }
    _objc_retain(ppuVar2);
    _objc_release(ppuVar6);
    func_0x00010bfb2c80(ppuVar4);
    dVar10 = (double)param_1;
    func_0x00010bfb2c80(ppuVar2);
    _objc_release(ppuVar2);
    dVar9 = (double)param_1;
    *(double *)((long)puVar1 + 0x68) = dVar10;
    *(double *)((long)puVar1 + 0x70) = dVar9;
    *(undefined8 *)((long)puVar1 + 0x30) = 0;
    ppuVar6 = param_4;
    func_0x00010c0e00e0();
    fVar8 = SUB84(dVar9,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ccd60;
    if (ppuVar6 != (undefined **)0x0) {
      ppuVar2 = ppuVar6;
    }
    _objc_retain(ppuVar2);
    _objc_release(ppuVar6);
    ppuVar6 = ppuVar2;
    func_0x00010c067fc0();
    _objc_release(ppuVar2);
    *(undefined ***)((long)puVar1 + 0x38) = ppuVar6;
    ppuVar6 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ccd78;
    if (ppuVar6 != (undefined **)0x0) {
      ppuVar2 = ppuVar6;
    }
    _objc_retain(ppuVar2);
    _objc_release(ppuVar6);
    ppuVar6 = ppuVar2;
    func_0x00010c067fc0();
    _objc_release(ppuVar2);
    *(undefined ***)((long)puVar1 + 0x40) = ppuVar6;
    ppuVar6 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = &PTR__OBJC_CLASS___NSConstantFloatNumber_1111864b0;
    if (ppuVar6 != (undefined **)0x0) {
      ppuVar2 = ppuVar6;
    }
    _objc_retain(ppuVar2);
    _objc_release(ppuVar6);
    func_0x00010bfb2c80(ppuVar2);
    dVar9 = (double)fVar8;
    *(double *)((long)puVar1 + 0x48) = dVar9;
    ppuVar7 = param_4;
    func_0x00010c0e00e0();
    fVar8 = SUB84(dVar9,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = &PTR__OBJC_CLASS___NSConstantFloatNumber_1111864b0;
    if (ppuVar7 != (undefined **)0x0) {
      ppuVar6 = ppuVar7;
    }
    _objc_retain(ppuVar6);
    _objc_release(ppuVar7);
    func_0x00010bfb2c80(ppuVar6);
    _objc_release(ppuVar6);
    *(double *)((long)puVar1 + 0x50) = (double)fVar8;
    ppuVar6 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar6;
    func_0x00010c067fc0();
    *(undefined ***)((long)puVar1 + 0x60) = ppuVar7;
    _objc_release(ppuVar6);
    ppuVar6 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar6;
    func_0x00010c067fc0();
    *(undefined ***)((long)puVar1 + 0x58) = ppuVar7;
    _objc_release(ppuVar6);
    ppuVar6 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar6;
    func_0x00010bf1f3c0();
    *(char *)((long)puVar1 + 8) = (char)ppuVar7;
    _objc_release(ppuVar6);
    *(undefined1 *)((long)puVar1 + 9) = 0;
    _objc_release(ppuVar2);
    _objc_release(ppuVar4);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 107dcecdc; end: 107dcece3; -[SCOperaTextLayer type] */

undefined8 FUN_107dcecdc(void)

{
  return 8;
}



/* Entry: 107dcece4; end: 107dceceb; -[SCOperaTextLayer layerContentType] */

undefined8 FUN_107dcece4(void)

{
  return 1;
}



/* Entry: 107dcecec; end: 107dcf04b; -[SCOperaTextLayer isEqual:] */

undefined *
FUN_107dcecec(double param_1,double param_2,undefined *param_3,undefined8 param_4,undefined *param_5
             )

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  double dVar8;
  double dVar9;
  
  _objc_retain(param_5);
  puVar6 = param_5;
  _objc_opt_class();
  puVar2 = PTR_PTR_1126d68f8;
  _objc_opt_class();
  if (puVar6 != puVar2) {
    puVar6 = (undefined *)0x0;
    goto LAB_107dcf024;
  }
  if (param_3 == param_5) {
    puVar6 = (undefined *)0x1;
    goto LAB_107dcf024;
  }
  _objc_retain(param_5);
  puVar3 = *(undefined **)(param_3 + 0x10);
  puVar2 = param_5;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar3);
  _objc_retain(puVar2);
  if (puVar3 == puVar2) {
    _objc_release(puVar2);
    _objc_release(puVar3);
LAB_107dcedc8:
    puVar4 = *(undefined **)(param_3 + 0x18);
    puVar3 = param_5;
    func_0x00010bfb3a80();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar4);
    _objc_retain(puVar3);
    if (puVar4 == puVar3) {
      _objc_release(puVar3);
      _objc_release(puVar4);
LAB_107dcee38:
      puVar5 = *(undefined **)(param_3 + 0x20);
      puVar4 = param_5;
      func_0x00010c26b920();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar5);
      _objc_retain(puVar4);
      if (puVar5 == puVar4) {
        _objc_release(puVar4);
        _objc_release(puVar5);
LAB_107dceeac:
        puVar6 = *(undefined **)(param_3 + 0x28);
        puVar5 = param_5;
        func_0x00010bf8ac20();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(puVar6);
        _objc_retain(puVar5);
        if (puVar6 != puVar5) {
          if (puVar5 == (undefined *)0x0) {
            _objc_release();
          }
          else {
            puVar7 = puVar6;
            func_0x00010c071ae0(puVar6,param_4,puVar5);
            _objc_release(puVar5);
            _objc_release(puVar6);
            if ((int)puVar7 != 0) goto LAB_107dcef18;
          }
          goto LAB_107dceff8;
        }
        _objc_release(puVar5);
        _objc_release(puVar6);
LAB_107dcef18:
        func_0x00010bf8ac40(param_5);
        puVar6 = (undefined *)0x0;
        if ((*(double *)(param_3 + 0x68) == param_1) &&
           (dVar8 = *(double *)(param_3 + 0x70), dVar8 == param_2)) {
          puVar7 = *(undefined **)(param_3 + 0x38);
          puVar6 = param_5;
          func_0x00010c26f100();
          if ((((puVar7 != puVar6) ||
               (((puVar7 = *(undefined **)(param_3 + 0x40), puVar6 = param_5, func_0x00010c26fa80(),
                 puVar7 != puVar6 ||
                 (dVar9 = *(double *)(param_3 + 0x48), func_0x00010bfe42c0(param_5), dVar9 != dVar8)
                 ) || (dVar9 = *(double *)(param_3 + 0x50), func_0x00010c298f20(param_5),
                      dVar9 != dVar8)))) ||
              (((puVar7 = *(undefined **)(param_3 + 0x60), puVar6 = param_5, func_0x00010bfe4140(),
                puVar7 != puVar6 ||
                (puVar7 = *(undefined **)(param_3 + 0x58), puVar6 = param_5, func_0x00010c298ec0(),
                puVar7 != puVar6)) ||
               (bVar1 = param_3[8], puVar6 = param_5, func_0x00010bfebaa0(),
               (uint)bVar1 != (uint)puVar6)))) ||
             (dVar9 = *(double *)(param_3 + 0x30), func_0x00010bf8aa60(param_5), dVar9 != dVar8))
          goto LAB_107dceff8;
          bVar1 = param_3[9];
          puVar6 = param_5;
          func_0x00010c230ea0(param_5);
          puVar6 = (undefined *)(ulong)((uint)bVar1 == (uint)puVar6);
        }
      }
      else {
        if (puVar4 != (undefined *)0x0) {
          puVar6 = puVar5;
          func_0x00010c071ae0(puVar5,param_4,puVar4);
          _objc_release(puVar4);
          _objc_release(puVar5);
          if ((int)puVar6 == 0) goto LAB_107dcf004;
          goto LAB_107dceeac;
        }
LAB_107dceff8:
        puVar6 = (undefined *)0x0;
      }
      _objc_release(puVar5);
    }
    else {
      if (puVar3 != (undefined *)0x0) {
        puVar6 = puVar4;
        func_0x00010c071ae0(puVar4,param_4,puVar3);
        _objc_release(puVar3);
        _objc_release(puVar4);
        if ((int)puVar6 == 0) goto LAB_107dcee20;
        goto LAB_107dcee38;
      }
      puVar6 = (undefined *)0x0;
    }
LAB_107dcf004:
    _objc_release(puVar4);
LAB_107dcf00c:
    _objc_release(puVar3);
  }
  else {
    if (puVar2 == (undefined *)0x0) {
LAB_107dcee20:
      puVar6 = (undefined *)0x0;
      goto LAB_107dcf00c;
    }
    puVar6 = puVar3;
    func_0x00010c071ae0(puVar3,param_4,puVar2);
    _objc_release(puVar2);
    _objc_release(puVar3);
    if ((int)puVar6 != 0) goto LAB_107dcedc8;
    puVar6 = (undefined *)0x0;
  }
  _objc_release(puVar2);
  _objc_release(param_5);
LAB_107dcf024:
  _objc_release(param_5);
  return puVar6;
}



/* Entry: 107dcf04c; end: 107dcf053; -[SCOperaTextLayer text] */

undefined8 FUN_107dcf04c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107dcf054; end: 107dcf05b; -[SCOperaTextLayer font] */

undefined8 FUN_107dcf054(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107dcf05c; end: 107dcf063; -[SCOperaTextLayer textColor] */

undefined8 FUN_107dcf05c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107dcf064; end: 107dcf06b; -[SCOperaTextLayer dropshadowColor] */

undefined8 FUN_107dcf064(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107dcf06c; end: 107dcf073; -[SCOperaTextLayer dropshadowOffset] */

undefined1  [16] FUN_107dcf06c(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x68);
}



/* Entry: 107dcf074; end: 107dcf07b; -[SCOperaTextLayer dropShadowBlurRadius] */

undefined8 FUN_107dcf074(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107dcf07c; end: 107dcf083; -[SCOperaTextLayer timeBeforeFadeoutMs] */

undefined8 FUN_107dcf07c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107dcf084; end: 107dcf08b; -[SCOperaTextLayer timeToFadeoutMs] */

undefined8 FUN_107dcf084(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 107dcf08c; end: 107dcf093; -[SCOperaTextLayer horizontalMargin] */

undefined8 FUN_107dcf08c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 107dcf094; end: 107dcf09b; -[SCOperaTextLayer verticalMargin] */

undefined8 FUN_107dcf094(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 107dcf09c; end: 107dcf0a3; -[SCOperaTextLayer verticalAlignment] */

undefined8 FUN_107dcf09c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 107dcf0a4; end: 107dcf0ab; -[SCOperaTextLayer horizontalAlignment] */

undefined8 FUN_107dcf0a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 107dcf0ac; end: 107dcf0b3; -[SCOperaTextLayer includeBackground] */

undefined1 FUN_107dcf0ac(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107dcf0b4; end: 107dcf0bb; -[SCOperaTextLayer shouldHidelayerViewInFullView] */

undefined1 FUN_107dcf0b4(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 107dcf0bc; end: 107dcf103; -[SCOperaTextLayer .cxx_destruct] */

void FUN_107dcf0bc(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107dcf104; end: 107dcf14f; +[SCOperaTimerLayer layerWithPage:] */

void FUN_107dcf104(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d6930;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c032da0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107dcf150; end: 107dcf39f; -[SCOperaTimerLayer initWithPage:] */

undefined1 * FUN_107dcf150(float param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  bool bVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  double dVar7;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126fb238;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    lVar3 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    if (lVar3 != 0) {
      func_0x00010c2827c0();
    }
    *(long *)((long)puVar2 + 0x10) = lVar4;
    lVar4 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
    dVar7 = (double)param_1;
    *(double *)((long)puVar2 + 0x18) = dVar7;
    _objc_release(lVar4);
    fVar6 = SUB84(dVar7,0);
    lVar4 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
    dVar7 = (double)fVar6;
    *(double *)((long)puVar2 + 0x20) = dVar7;
    _objc_release(lVar4);
    fVar6 = SUB84(dVar7,0);
    lVar4 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
    dVar7 = (double)fVar6;
    *(double *)((long)puVar2 + 0x28) = dVar7;
    _objc_release(lVar4);
    fVar6 = SUB84(dVar7,0);
    lVar4 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf1f3c0();
    *(char *)((long)puVar2 + 9) = (char)lVar5;
    _objc_release(lVar4);
    lVar4 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c067fc0();
    *(long *)((long)puVar2 + 0x38) = lVar5;
    _objc_release(lVar4);
    lVar4 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c067fc0();
    *(long *)((long)puVar2 + 0x40) = lVar5;
    _objc_release(lVar4);
    lVar4 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
    *(double *)((long)puVar2 + 0x30) = (double)fVar6;
    _objc_release(lVar4);
    lVar4 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 == 0) {
      bVar1 = false;
    }
    else {
      lVar5 = lVar4;
      func_0x00010c2827c0();
      bVar1 = lVar5 == 1;
    }
    *(bool *)((long)puVar2 + 8) = bVar1;
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar2;
}



/* Entry: 107dcf3a0; end: 107dcf3a7; -[SCOperaTimerLayer type] */

undefined8 FUN_107dcf3a0(void)

{
  return 0xd;
}



/* Entry: 107dcf3a8; end: 107dcf4c7; -[SCOperaTimerLayer isEqual:] */

bool FUN_107dcf3a8(double param_1,undefined *param_2,undefined8 param_3,undefined *param_4)

{
  byte bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  double dVar5;
  
  _objc_retain(param_4);
  puVar3 = param_4;
  _objc_opt_class();
  puVar4 = PTR_PTR_1126d6930;
  _objc_opt_class();
  if (puVar3 == puVar4) {
    if (param_2 == param_4) {
      bVar2 = true;
    }
    else {
      _objc_retain(param_4);
      puVar4 = *(undefined **)(param_2 + 0x10);
      puVar3 = param_4;
      func_0x00010c22a600();
      if ((((puVar4 == puVar3) &&
           (dVar5 = *(double *)(param_2 + 0x18), func_0x00010bf8b160(param_4), dVar5 == param_1)) &&
          (dVar5 = *(double *)(param_2 + 0x20), func_0x00010c276e60(param_4), dVar5 == param_1)) &&
         (((dVar5 = *(double *)(param_2 + 0x28), func_0x00010c276460(param_4), dVar5 == param_1 &&
           (bVar1 = param_2[9], puVar3 = param_4, func_0x00010c1102a0(), (uint)bVar1 == (uint)puVar3
           )) && (puVar4 = *(undefined **)(param_2 + 0x38), puVar3 = param_4, func_0x00010bf5ff40(),
                 puVar4 == puVar3)))) {
        puVar4 = *(undefined **)(param_2 + 0x40);
        puVar3 = param_4;
        func_0x00010c0de880(param_4);
        bVar2 = puVar4 == puVar3;
      }
      else {
        bVar2 = false;
      }
      _objc_release(param_4);
    }
  }
  else {
    bVar2 = false;
  }
  _objc_release(param_4);
  return bVar2;
}



/* Entry: 107dcf4c8; end: 107dcf4cf; -[SCOperaTimerLayer shape] */

undefined8 FUN_107dcf4c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107dcf4d0; end: 107dcf4d7; -[SCOperaTimerLayer duration] */

undefined8 FUN_107dcf4d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107dcf4d8; end: 107dcf4df; -[SCOperaTimerLayer totalTimeLeft] */

undefined8 FUN_107dcf4d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107dcf4e0; end: 107dcf4e7; -[SCOperaTimerLayer totalDuration] */

undefined8 FUN_107dcf4e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107dcf4e8; end: 107dcf4ef; -[SCOperaTimerLayer mediaStartTime] */

undefined8 FUN_107dcf4e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107dcf4f0; end: 107dcf4f7; -[SCOperaTimerLayer currentSegmentIndex] */

undefined8 FUN_107dcf4f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107dcf4f8; end: 107dcf4ff; -[SCOperaTimerLayer numTotalSegments] */

undefined8 FUN_107dcf4f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 107dcf500; end: 107dcf507; -[SCOperaTimerLayer looping] */

undefined1 FUN_107dcf500(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107dcf508; end: 107dcf50f; -[SCOperaTimerLayer preventDecay] */

undefined1 FUN_107dcf508(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 107dcf510; end: 107dcf55b; +[SCOperaVideoLayer layerWithPage:] */

void FUN_107dcf510(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d7e00;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c032da0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107dcf55c; end: 107dcfbbb; -[SCOperaVideoLayer initWithPage:] */

undefined8 * FUN_107dcf55c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  float fVar10;
  undefined8 uVar11;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR_PTR_1126fb240;
  puVar3 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar3,PTR_s_init_1125d9248);
  if (puVar3 == (undefined8 *)0x0) goto LAB_107dcfb94;
  uVar4 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar4 == 0) {
    uVar5 = 1;
  }
  else {
    uVar5 = uVar4;
    func_0x00010c2827c0();
  }
  puVar3[3] = uVar5;
  uVar5 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  if (uVar5 != 0) {
    func_0x00010c2827c0();
  }
  puVar3[4] = uVar6;
  uVar6 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if ((uVar6 == 0) || (uVar7 = uVar6, func_0x00010c2827c0(), uVar7 == 0)) {
    uStack_88 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
    uStack_90 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
    uStack_78 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
    uStack_80 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
    uStack_68 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
    uStack_70 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  }
  else {
    if (uVar7 == 2) {
      uVar11 = 0x3ff921fb54442d18;
    }
    else {
      if (uVar7 != 1) goto LAB_107dcf698;
      uVar11 = 0xbff921fb54442d18;
    }
    _CGAffineTransformMakeRotation(&uStack_90,uVar11);
  }
LAB_107dcf698:
  _objc_release(uVar6);
  uVar2 = uStack_78;
  uVar1 = uStack_80;
  uVar11 = uStack_90;
  puVar3[0x11] = uStack_88;
  puVar3[0x10] = uVar11;
  puVar3[0x13] = uVar2;
  puVar3[0x12] = uVar1;
  uVar11 = uStack_70;
  puVar3[0x15] = uStack_68;
  puVar3[0x14] = uVar11;
  _objc_release(uVar6);
  fVar10 = (float)uVar11;
  uVar6 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = puVar3[5];
  puVar3[5] = uVar6;
  _objc_release(uVar11);
  uVar6 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = puVar3[6];
  puVar3[6] = uVar6;
  _objc_release(uVar11);
  uVar6 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = puVar3[7];
  puVar3[7] = uVar6;
  _objc_release(uVar11);
  uVar6 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf1f3c0();
  *(char *)((long)puVar3 + 9) = (char)uVar7;
  _objc_release(uVar6);
  uVar6 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  puVar3[8] = (double)fVar10;
  _objc_release(uVar6);
  uVar6 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf1f3c0();
  *(char *)((long)puVar3 + 0xb) = (char)uVar7;
  _objc_release(uVar6);
  uVar6 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf1f3c0();
  *(char *)((long)puVar3 + 0xc) = (char)uVar7;
  _objc_release(uVar6);
  uVar7 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  _objc_opt_class(PTR__OBJC_CLASS___NSValue_1126afdf8);
  uVar9 = uVar7;
  _objc_opt_isKindOfClass(uVar7,puVar8);
  uVar6 = uVar7;
  if ((uVar9 & 1) == 0) {
    uVar6 = 0;
  }
  _objc_retain(uVar6);
  _objc_release(uVar7);
  uVar11 = puVar3[9];
  puVar3[9] = uVar6;
  _objc_release(uVar11);
  uVar7 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar9 = uVar7;
  _objc_opt_isKindOfClass(uVar7,puVar8);
  uVar6 = uVar7;
  if ((uVar9 & 1) == 0) {
    uVar6 = 0;
  }
  _objc_retain(uVar6);
  _objc_release(uVar7);
  uVar11 = puVar3[0xe];
  puVar3[0xe] = uVar6;
  _objc_release(uVar11);
  uVar7 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar9 = uVar7;
  _objc_opt_isKindOfClass(uVar7,puVar8);
  uVar6 = uVar7;
  if ((uVar9 & 1) == 0) {
    uVar6 = 0;
  }
  _objc_retain(uVar6);
  _objc_release(uVar7);
  uVar11 = puVar3[0xf];
  puVar3[0xf] = uVar6;
  _objc_release(uVar11);
  uVar6 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf1f3c0();
  *(char *)((long)puVar3 + 0xd) = (char)uVar7;
  _objc_release(uVar6);
  *(undefined1 *)((long)puVar3 + 0xe) = 0;
  uVar6 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf1f3c0();
  *(char *)((long)puVar3 + 0xf) = (char)uVar7;
  _objc_release(uVar6);
  uVar6 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf1f3c0();
  *(char *)(puVar3 + 2) = (char)uVar7;
  _objc_release(uVar6);
  uVar6 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf1f3c0();
  *(char *)((long)puVar3 + 0x11) = (char)uVar7;
  _objc_release(uVar6);
  uVar6 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = puVar3[10];
  puVar3[10] = uVar6;
  _objc_release(uVar11);
  uVar6 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = puVar3[0xb];
  puVar3[0xb] = uVar6;
  _objc_release(uVar11);
  uVar6 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf1f3c0();
  *(char *)((long)puVar3 + 0x15) = (char)uVar7;
  _objc_release(uVar6);
  uVar6 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = puVar3[0xd];
  puVar3[0xd] = uVar6;
  _objc_release(uVar11);
  uVar6 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf1f3c0();
  *(char *)((long)puVar3 + 0x16) = (char)uVar7;
  _objc_release(uVar6);
  uVar6 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf1f3c0();
  *(char *)((long)puVar3 + 0x13) = (char)uVar7;
  _objc_release(uVar6);
  uVar6 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf1f3c0();
  *(char *)((long)puVar3 + 10) = (char)uVar7;
  _objc_release(uVar6);
  uVar6 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf1f3c0();
  *(char *)((long)puVar3 + 0x14) = (char)uVar7;
  _objc_release(uVar6);
  uVar6 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf1f3c0();
  *(char *)(puVar3 + 1) = (char)uVar7;
  _objc_release(uVar6);
  func_0x00010beb1020(puVar3);
  _objc_release(uVar5);
  _objc_release(uVar4);
LAB_107dcfb94:
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 107dcfbbc; end: 107dcfbc3; -[SCOperaVideoLayer type] */

undefined8 FUN_107dcfbbc(void)

{
  return 6;
}



/* Entry: 107dcfbc4; end: 107dcfbcb; -[SCOperaVideoLayer layerContentType] */

undefined8 FUN_107dcfbc4(void)

{
  return 1;
}



/* Entry: 107dcfbcc; end: 107dcfef3; -[SCOperaVideoLayer _setupVideoControlsViewModelWithProperties:] */

void FUN_107dcfbcc(float param_1,long param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c0e00e0(param_4,param_3,&PTR____CFConstantStringClassReference_110f0c3d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c0e00e0(param_4,param_3,&PTR____CFConstantStringClassReference_110f0c358);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c0e00e0(param_4,param_3,&PTR____CFConstantStringClassReference_110f0c3f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c0e00e0(param_4,param_3,&PTR____CFConstantStringClassReference_110f0c3b8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c067fc0();
  _objc_release(uVar1);
  if (uVar2 == 4 || uVar2 == 1) {
    uVar1 = param_4;
    func_0x00010c0e00e0(param_4,param_3,&PTR____CFConstantStringClassReference_110f0e758);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf9a520();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR_s_observeTime_112615e60;
    _NSStringFromSelector(PTR_s_observeTime_112615e60);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c296f80(uVar2,param_3,puVar11);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar11);
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c0e00e0(param_4,param_3,&PTR____CFConstantStringClassReference_110f0c378);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf1f3c0();
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c0e00e0(param_4,param_3,&PTR____CFConstantStringClassReference_110f0e798);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010bf1f3c0();
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c0e00e0(param_4,param_3,&PTR____CFConstantStringClassReference_110f0e7b8);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010bf1f3c0();
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c0e00e0(param_4,param_3,&PTR____CFConstantStringClassReference_110f0c398);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar2;
    func_0x00010bf1f3c0();
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c0e00e0(param_4,param_3,&PTR____CFConstantStringClassReference_110f0c398);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar2;
    func_0x00010bf1f3c0();
    _objc_release(uVar2);
    puVar11 = PTR_PTR_1126d7e18;
    func_0x00010c0b5580(PTR_PTR_1126d7e18,param_3,uVar3,uVar4 & 0xffffffff,uVar5,uVar6,uVar7,uVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  else {
    puVar11 = (undefined *)0x0;
  }
  puVar9 = PTR_PTR_1126d7e20;
  _objc_alloc();
  func_0x00010c004a00((double)param_1);
  uVar10 = *(undefined8 *)(param_2 + 0x60);
  *(undefined **)(param_2 + 0x60) = puVar9;
  _objc_release(uVar10);
  _objc_release(puVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107dcfef4; end: 107dd0287; -[SCOperaVideoLayer isEqual:] */

undefined8 FUN_107dcfef4(double param_1,undefined *param_2,undefined8 param_3,undefined *param_4)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  int iVar8;
  undefined *puVar9;
  double dVar10;
  
  _objc_retain(param_4);
  puVar2 = param_4;
  _objc_opt_class();
  puVar5 = PTR_PTR_1126d7e00;
  _objc_opt_class();
  if (puVar2 != puVar5) {
    uVar7 = 0;
    goto LAB_107dd0240;
  }
  if (param_2 == param_4) {
    uVar7 = 1;
    goto LAB_107dd0240;
  }
  _objc_retain(param_4);
  puVar5 = *(undefined **)(param_2 + 0x18);
  puVar2 = param_4;
  func_0x00010bf87840();
  if ((puVar5 == puVar2) &&
     (puVar5 = *(undefined **)(param_2 + 0x20), puVar2 = param_4, func_0x00010c0ffbc0(),
     puVar5 == puVar2)) {
    puVar5 = *(undefined **)(param_2 + 0x28);
    puVar2 = param_4;
    func_0x00010c28f340();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar5);
    _objc_retain(puVar2);
    if (puVar5 == puVar2) {
      _objc_release(puVar2);
      _objc_release(puVar5);
LAB_107dd0000:
      puVar6 = *(undefined **)(param_2 + 0x38);
      puVar5 = param_4;
      func_0x00010bf0b380();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar6);
      _objc_retain(puVar5);
      if (puVar6 == puVar5) {
        _objc_release(puVar5);
        _objc_release(puVar6);
LAB_107dd006c:
        bVar1 = param_2[8];
        puVar6 = param_4;
        func_0x00010bf4ffc0();
        if ((uint)bVar1 != (uint)puVar6) goto LAB_107dd0214;
        iVar8 = (int)*(undefined8 *)(param_2 + 0x60);
        puVar6 = param_4;
        func_0x00010bf50060(param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c071ae0();
        if ((((iVar8 == 0) ||
             (bVar1 = param_2[9], puVar3 = param_4, func_0x00010bf0efa0(),
             (uint)bVar1 != (uint)puVar3)) ||
            (dVar10 = *(double *)(param_2 + 0x40), func_0x00010c0c6880(param_4), dVar10 != param_1))
           || (((bVar1 = param_2[0xe], puVar3 = param_4, func_0x00010bf809e0(),
                (uint)bVar1 != (uint)puVar3 ||
                (bVar1 = param_2[0xf], puVar3 = param_4, func_0x00010bf80960(),
                (uint)bVar1 != (uint)puVar3)) ||
               ((bVar1 = param_2[0x16], puVar3 = param_4, func_0x00010bf80a40(),
                (uint)bVar1 != (uint)puVar3 ||
                (bVar1 = param_2[0x10], puVar3 = param_4, func_0x00010bf91f20(),
                (uint)bVar1 != (uint)puVar3)))))) goto LAB_107dd021c;
        puVar9 = *(undefined **)(param_2 + 0x50);
        puVar3 = param_4;
        func_0x00010c2612c0();
        _objc_retainAutoreleasedReturnValue();
        if (((puVar9 == puVar3) &&
            (bVar1 = param_2[0x15], puVar9 = param_4, func_0x00010c117ac0(),
            (uint)bVar1 == (uint)puVar9)) &&
           ((bVar1 = param_2[0xc], puVar9 = param_4, func_0x00010c25c720(),
            (uint)bVar1 == (uint)puVar9 &&
            (bVar1 = param_2[0xb], puVar9 = param_4, func_0x00010c09cfc0(),
            (uint)bVar1 == (uint)puVar9)))) {
          uVar7 = *(undefined8 *)(param_2 + 0x68);
          puVar9 = param_4;
          func_0x00010c117ae0(param_4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bd86de8(uVar7,puVar9);
          if (((((int)uVar7 == 0) ||
               (bVar1 = param_2[0xd], puVar4 = param_4, func_0x00010c10a3c0(),
               (uint)bVar1 != (uint)puVar4)) ||
              (bVar1 = param_2[0x13], puVar4 = param_4, func_0x00010c1397e0(),
              (uint)bVar1 != (uint)puVar4)) ||
             (bVar1 = param_2[0x14], puVar4 = param_4, func_0x00010bfdb420(),
             (uint)bVar1 != (uint)puVar4)) {
            uVar7 = 0;
          }
          else {
            uVar7 = *(undefined8 *)(param_2 + 0x78);
            puVar4 = param_4;
            func_0x00010bf11880(param_4);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bd86de8(uVar7,puVar4);
            _objc_release(puVar4);
          }
          _objc_release(puVar9);
        }
        else {
          uVar7 = 0;
        }
        _objc_release(puVar3);
      }
      else {
        if (puVar5 != (undefined *)0x0) {
          puVar3 = puVar6;
          func_0x00010c071ae0();
          _objc_release(puVar5);
          _objc_release(puVar6);
          if ((int)puVar3 == 0) goto LAB_107dd0214;
          goto LAB_107dd006c;
        }
LAB_107dd021c:
        uVar7 = 0;
      }
      _objc_release(puVar6);
LAB_107dd0228:
      _objc_release(puVar5);
    }
    else {
      if (puVar2 == (undefined *)0x0) {
LAB_107dd0214:
        uVar7 = 0;
        goto LAB_107dd0228;
      }
      puVar6 = puVar5;
      func_0x00010c071ae0();
      _objc_release(puVar2);
      _objc_release(puVar5);
      if ((int)puVar6 != 0) goto LAB_107dd0000;
      uVar7 = 0;
    }
    _objc_release(puVar2);
  }
  else {
    uVar7 = 0;
  }
  _objc_release(param_4);
LAB_107dd0240:
  _objc_release(param_4);
  return uVar7;
}



/* Entry: 107dd0288; end: 107dd028f; -[SCOperaVideoLayer docking] */

undefined8 FUN_107dd0288(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107dd0290; end: 107dd0297; -[SCOperaVideoLayer playbackMode] */

undefined8 FUN_107dd0290(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107dd0298; end: 107dd029f; -[SCOperaVideoLayer url] */

undefined8 FUN_107dd0298(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107dd02a0; end: 107dd02a7; -[SCOperaVideoLayer shareableURL] */

undefined8 FUN_107dd02a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107dd02a8; end: 107dd02af; -[SCOperaVideoLayer assetKey] */

undefined8 FUN_107dd02a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107dd02b0; end: 107dd02b7; -[SCOperaVideoLayer controlsEnabled] */

undefined1 FUN_107dd02b0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107dd02b8; end: 107dd02bf; -[SCOperaVideoLayer audioDisabled] */

undefined1 FUN_107dd02b8(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 107dd02c0; end: 107dd02c7; -[SCOperaVideoLayer shouldPlayFromLastSeekPointOnBackward] */

undefined1 FUN_107dd02c0(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 107dd02c8; end: 107dd02db; -[SCOperaVideoLayer initialRotateTransform] */

void FUN_107dd02c8(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x80);
  uVar3 = *(undefined8 *)(param_2 + 0x98);
  uVar2 = *(undefined8 *)(param_2 + 0x90);
  param_1[1] = *(undefined8 *)(param_2 + 0x88);
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 0xa0);
  param_1[5] = *(undefined8 *)(param_2 + 0xa8);
  param_1[4] = uVar1;
  return;
}



/* Entry: 107dd02dc; end: 107dd02e3; -[SCOperaVideoLayer mediaStartTime] */

undefined8 FUN_107dd02dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 107dd02e4; end: 107dd02eb; -[SCOperaVideoLayer loadingIndicatorEnabled] */

undefined1 FUN_107dd02e4(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 107dd02ec; end: 107dd02f3; -[SCOperaVideoLayer streaming] */

undefined1 FUN_107dd02ec(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 107dd02f4; end: 107dd02fb; -[SCOperaVideoLayer prepareVideoForStreaming] */

undefined1 FUN_107dd02f4(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd);
}



/* Entry: 107dd02fc; end: 107dd0303; -[SCOperaVideoLayer videoSize] */

undefined8 FUN_107dd02fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 107dd0304; end: 107dd030b; -[SCOperaVideoLayer disableSwipeUp] */

undefined1 FUN_107dd0304(long param_1)

{
  return *(undefined1 *)(param_1 + 0xe);
}



/* Entry: 107dd030c; end: 107dd0313; -[SCOperaVideoLayer disableSwipeDown] */

undefined1 FUN_107dd030c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xf);
}



/* Entry: 107dd0314; end: 107dd031b; -[SCOperaVideoLayer enableSubtitleManagement] */

undefined1 FUN_107dd0314(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



/* Entry: 107dd031c; end: 107dd0323; -[SCOperaVideoLayer isSubtitleLayoutOffset] */

undefined1 FUN_107dd031c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x11);
}



/* Entry: 107dd0324; end: 107dd032b; -[SCOperaVideoLayer subtitlesState] */

undefined8 FUN_107dd0324(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 107dd032c; end: 107dd0333; -[SCOperaVideoLayer subtitlesConfiguration] */

undefined8 FUN_107dd032c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 107dd0334; end: 107dd033b; -[SCOperaVideoLayer allowsSeekWhileLoading] */

undefined1 FUN_107dd0334(long param_1)

{
  return *(undefined1 *)(param_1 + 0x12);
}



/* Entry: 107dd033c; end: 107dd0343; -[SCOperaVideoLayer resetStopwatchOnUnpauseForAttachment] */

undefined1 FUN_107dd033c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x13);
}



/* Entry: 107dd0344; end: 107dd034b; -[SCOperaVideoLayer controlsViewModel] */

undefined8 FUN_107dd0344(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 107dd034c; end: 107dd0353; -[SCOperaVideoLayer hasRetryError] */

undefined1 FUN_107dd034c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x14);
}



/* Entry: 107dd0354; end: 107dd035b; -[SCOperaVideoLayer progressViewV2Enabled] */

undefined1 FUN_107dd0354(long param_1)

{
  return *(undefined1 *)(param_1 + 0x15);
}



/* Entry: 107dd035c; end: 107dd0363; -[SCOperaVideoLayer progressViewViewModel] */

undefined8 FUN_107dd035c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 107dd0364; end: 107dd036b; -[SCOperaVideoLayer disableTapLeft] */

undefined1 FUN_107dd0364(long param_1)

{
  return *(undefined1 *)(param_1 + 0x16);
}



/* Entry: 107dd036c; end: 107dd0373; -[SCOperaVideoLayer mediaDurationInSec] */

undefined8 FUN_107dd036c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 107dd0374; end: 107dd037b; -[SCOperaVideoLayer autoLoopDelaySeconds] */

undefined8 FUN_107dd0374(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 107dd037c; end: 107dd040b; -[SCOperaVideoLayer .cxx_destruct] */

void FUN_107dd037c(long param_1)

{
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x28,0);
  return;
}



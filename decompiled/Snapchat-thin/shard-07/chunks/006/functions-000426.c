/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1057d17e8; end: 1057d1877;  */

void FUN_1057d17e8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c068100(param_2);
  func_0x00010c0df840(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar3);
  uVar2 = param_2;
  FUN_1057d1224(param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1057d1878; end: 1057d18eb;  */

void FUN_1057d1878(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  if ((*(byte *)(lVar1 + 0x18) & 1) != 0) {
    return;
  }
  *(undefined1 *)(lVar1 + 0x18) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bfbb710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_fulfillWithSuccessValue__1125cc768,
             PTR____NSArray0__struct_11034ab48);
  return;
}



/* Entry: 1057d18ec; end: 1057d1b17; -[SCComposerChatReactionMetadataProvider fetchSelectableBitmojiReactions] */

void FUN_1057d18ec(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  
  puVar1 = PTR_PTR_1126b1588;
  _objc_opt_new();
  puStack_90 = &uStack_98;
  uStack_98 = 0;
  uStack_88 = 0x2020000000;
  uStack_80 = 0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c159200();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c25ffc0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c1591e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar4;
  func_0x00010bf41860(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c268560();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf87440();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010c25ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_retain(puVar1);
  __Block_object_dispose(&uStack_98,8);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1057d1b18; end: 1057d1d1f;  */

void FUN_1057d1b18(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retain(param_2);
  lVar5 = param_2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar5 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_2);
      }
      uVar3 = *(undefined8 *)(lVar6 * 8);
      FUN_1057d1224(uVar3,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar2);
      _objc_release(uVar3);
      lVar6 = lVar6 + 1;
    } while (lVar5 != lVar6);
    lVar5 = param_2;
    func_0x00010bf52a60();
  }
  _objc_release(param_2);
  _objc_retain(param_3);
  lVar5 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar5 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      uVar3 = *(undefined8 *)(lVar6 * 8);
      FUN_1057d1224(uVar3,1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar2);
      _objc_release(uVar3);
      lVar6 = lVar6 + 1;
    } while (lVar5 != lVar6);
    lVar5 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)(*(long *)(param_2 + 0x28) + 8);
  if ((*(byte *)(lVar5 + 0x18) & 1) != 0) {
    return;
  }
  *(undefined1 *)(lVar5 + 0x18) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bfbb710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_2 + 0x20),PTR_s_fulfillWithSuccessValue__1125cc768,
             PTR____NSArray0__struct_11034ab48);
  return;
}



/* Entry: 1057d1d20; end: 1057d1d93;  */

void FUN_1057d1d20(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  if ((*(byte *)(lVar1 + 0x18) & 1) != 0) {
    return;
  }
  *(undefined1 *)(lVar1 + 0x18) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bfbb710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_fulfillWithSuccessValue__1125cc768,
             PTR____NSArray0__struct_11034ab48);
  return;
}



/* Entry: 1057d1d94; end: 1057d1e07; -[SCComposerChatReactionMetadataProvider fetchSelectableEmojiReactions] */

void FUN_1057d1d94(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puVar1 = PTR_PTR_1126b1588;
  _objc_opt_new();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1057d1e08;
  puStack_30 = &UNK_110842e18;
  puStack_28 = puVar1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x10),param_2,&puStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1057d1e08; end: 1057d2103;  */

void FUN_1057d1e08(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar4 = PTR_PTR_1126b61c0;
  func_0x00010bf61040();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf33060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = puVar5;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar4 != (undefined *)0x0) {
    puVar12 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar5);
      }
      lVar6 = *(long *)((long)puVar12 * 8);
      func_0x00010bf8e2c0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010bf52a60();
      lVar2 = lRam0000000000000000;
      while (lVar7 != 0) {
        lVar14 = 0;
        do {
          if (lRam0000000000000000 != lVar2) {
            _objc_enumerationMutation(lVar6);
          }
          uVar15 = *(undefined8 *)(lVar14 * 8);
          puVar8 = PTR_PTR_1126be660;
          _objc_alloc(PTR_PTR_1126be660);
          uVar13 = uVar15;
          func_0x00010c26b700(uVar15);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c00f540(puVar8);
          _objc_release(uVar13);
          puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          puVar9 = PTR_PTR_1126b61c0;
          func_0x00010bf8e840(PTR_PTR_1126b61c0);
          _objc_retainAutoreleasedReturnValue();
          uVar13 = uVar15;
          func_0x00010c26b700(uVar15);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf4b900(puVar9);
          func_0x00010c0df6e0(puVar10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c210100(puVar8);
          _objc_release(puVar10);
          _objc_release(uVar13);
          _objc_release(puVar9);
          func_0x00010c27fd00(uVar15);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c18c100(puVar8);
          _objc_release(uVar15);
          func_0x00010befa120(puVar3);
          _objc_release(puVar8);
          lVar14 = lVar14 + 1;
        } while (lVar7 != lVar14);
        lVar7 = lVar6;
        func_0x00010bf52a60();
      }
      _objc_release(lVar6);
      puVar12 = puVar12 + 1;
    } while (puVar12 != puVar4);
    puVar4 = puVar5;
    func_0x00010bf52a60();
  }
  _objc_release(puVar5);
  uVar13 = *(undefined8 *)(param_1 + 0x20);
  puVar4 = puVar3;
  func_0x00010bf51e00(puVar3);
  func_0x00010bfbb700(uVar13);
  _objc_release(puVar4);
  _objc_release(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar3 + 0x18,0);
  _objc_storeStrong(puVar3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar3 + 8,0);
  return;
}



/* Entry: 1057d2104; end: 1057d213f; -[SCComposerChatReactionMetadataProvider .cxx_destruct] */

void FUN_1057d2104(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1057d2140; end: 1057d2207; -[SCArroyoChatLoggingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057d2140(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112729cfc);
  _objc_destroyWeak(param_1 + _DAT_112729cf8);
  _objc_destroyWeak(param_1 + _DAT_112729cd4);
  _objc_destroyWeak(param_1 + _DAT_112729cf4);
  _objc_destroyWeak(param_1 + _DAT_112729cec);
  _objc_destroyWeak(param_1 + _DAT_112729ce0);
  _objc_destroyWeak(param_1 + _DAT_112729cdc);
  _objc_destroyWeak(param_1 + _DAT_112729cd0);
  _objc_destroyWeak(param_1 + _DAT_112729ce4);
  _objc_destroyWeak(param_1 + _DAT_112729ce8);
  _objc_destroyWeak(param_1 + _DAT_112729cc8);
  _objc_destroyWeak(param_1 + _DAT_112729cd8);
  _objc_destroyWeak(param_1 + _DAT_112729ccc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112729cf0);
  return;
}



/* Entry: 1057d2208; end: 1057d22ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057d2208(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = PTR_PTR_1126be6a8;
    _objc_alloc(PTR_PTR_1126be6a8);
    lVar1 = param_1 + _DAT_112729d00;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bf523a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + _DAT_112729d04;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010c293740();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c005d40(puVar6,param_2,lVar2,lVar5);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1057d2300; end: 1057d2337; -[SCChatStatusSendingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057d2300(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112729d04);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112729d00);
  return;
}



/* Entry: 1057d2338; end: 1057d23f3;  */

void FUN_1057d2338(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126bc778;
  puVar3 = (undefined *)0x0;
  if (param_1 != 0) {
    _objc_retain(param_1);
    _objc_opt_new(puVar1);
    puVar2 = PTR_PTR_1126b0cd8;
    func_0x00010bdc35c0(PTR_PTR_1126b0cd8,param_2,param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    if (puVar2 == (undefined *)0x0) {
      puVar3 = (undefined *)0x0;
    }
    else {
      puVar3 = puVar2;
      func_0x00010bfe5d80(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a99c0(puVar1,param_2,puVar3);
      _objc_release(puVar3);
      _objc_retain(puVar1);
      puVar3 = puVar1;
    }
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1057d23f4; end: 1057d2793;  */

void FUN_1057d23f4(undefined8 param_1,int param_2,ulong param_3,undefined8 param_4,long param_5,
                  undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  
  _objc_retain();
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126be6c0;
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  puVar2 = PTR_PTR_1126be6e8;
  _objc_opt_new(PTR_PTR_1126be6e8);
  func_0x00010c175980();
  func_0x00010c2827c0(param_4);
  _objc_release(param_4);
  func_0x00010c175760(puVar2);
  if (param_5 != 0) {
    lVar3 = param_5;
    FUN_1057d2338(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c175b60(puVar2);
    _objc_release(lVar3);
  }
  if (param_3 != 0) {
    func_0x00010c1759e0(puVar2);
  }
  uVar4 = param_1;
  FUN_1057d2338(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e620(puVar2);
  _objc_release(uVar4);
  func_0x00010c175cc0(puVar1);
  puVar5 = PTR_PTR_1126ba668;
  _objc_opt_new(PTR_PTR_1126ba668);
  func_0x00010c20a420();
  puVar6 = PTR_PTR_1126b28f8;
  _objc_alloc(PTR_PTR_1126b28f8);
  if (((param_2 == 3) || (param_2 != 4)) || (2 < param_3)) {
    func_0x00010c02b8e0();
    puVar7 = puVar6;
    func_0x00010c2a82e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    if (param_2 == 1) {
      puVar6 = PTR_PTR_1126be6f0;
      _objc_opt_new(PTR_PTR_1126be6f0);
      puVar10 = PTR_PTR_1126be6f8;
      _objc_opt_new(PTR_PTR_1126be6f8);
      func_0x00010c20a440(puVar6);
      _objc_release(puVar10);
      puVar10 = puVar6;
      func_0x00010c253340(puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR_PTR_1126be700;
      _objc_opt_new(PTR_PTR_1126be700);
      func_0x00010c175cc0(puVar10);
      _objc_release(puVar10);
      func_0x00010c1759e0(puVar8);
      func_0x00010c175980(puVar8);
      puVar10 = puVar6;
      func_0x00010bf63640(puVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      _objc_release(puVar6);
      goto LAB_1057d269c;
    }
    if (param_2 != 4) {
      puVar10 = (undefined *)0x0;
      goto LAB_1057d269c;
    }
  }
  else {
    func_0x00010c02b8e0();
    puVar7 = puVar6;
    func_0x00010c2a82e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
  }
  puVar10 = (undefined *)0x0;
LAB_1057d269c:
  puVar6 = PTR_PTR_1126be6d0;
  _objc_alloc(PTR_PTR_1126be6d0);
  puVar8 = puVar5;
  func_0x00010bf63640(puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010bf21f60(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c002bc0(puVar6);
  _objc_release(puVar9);
  _objc_release(puVar8);
  func_0x00010c2adc40(puVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar8 = puVar6;
  func_0x00010bf21f60(puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar10);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1057d2794; end: 1057d2837; -[SCChatStatusSender initWithCoreMessageSender:currentUserId:] */

undefined1 *
FUN_1057d2794(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ea538;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1057d2838; end: 1057d29a7; -[SCChatStatusSender sendJoinedCallStatusMessage:analytics:] */

void FUN_1057d2838(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1057d29a8;
  puStack_60 = &UNK_110855e40;
  uStack_58 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  ppuVar1 = &puStack_78;
  _objc_retainBlock(ppuVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  FUN_1057d23f4(uVar2,3,0,0,0,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_50 = param_3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c280(uVar3);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(ppuVar1);
  _objc_release(uStack_58);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 1057d29a8; end: 1057d29ab;  */

void FUN_1057d29a8(void)

{
  return;
}



/* Entry: 1057d29ac; end: 1057d2b1b; -[SCChatStatusSender sendLeftCallStatusMessage:analytics:] */

void FUN_1057d29ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1057d2b1c;
  puStack_60 = &UNK_110855e40;
  uStack_58 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  ppuVar1 = &puStack_78;
  _objc_retainBlock(ppuVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  FUN_1057d23f4(uVar2,2,0,0,0,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_50 = param_3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c280(uVar3);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(ppuVar1);
  _objc_release(uStack_58);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 1057d2b1c; end: 1057d2b1f;  */

void FUN_1057d2b1c(void)

{
  return;
}



/* Entry: 1057d2b20; end: 1057d2ca7; -[SCChatStatusSender sendMissedCallStatusMessage:callType:callUuid:analytics:] */

void FUN_1057d2b20(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  ppuVar1 = &puStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1057d2ca8;
  puStack_68 = &UNK_110849620;
  uStack_60 = param_3;
  uStack_58 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retainBlock(&puStack_80);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  FUN_1057d23f4(uVar2,4,param_4,0,param_5,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(param_5);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_50 = param_3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c280(uVar3);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(ppuVar1);
  _objc_release(uStack_60);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 1057d2ca8; end: 1057d2cab;  */

void FUN_1057d2ca8(void)

{
  return;
}



/* Entry: 1057d2cac; end: 1057d2e33; -[SCChatStatusSender sendSuccessfulCallStatusMessage:callType:callDuration:analytics:] */

void FUN_1057d2cac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  ppuVar1 = &puStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1057d2e34;
  puStack_68 = &UNK_110849620;
  uStack_60 = param_3;
  uStack_58 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retainBlock(&puStack_80);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  FUN_1057d23f4(uVar2,1,param_4,param_5,0,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(param_5);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_50 = param_3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c280(uVar3);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(ppuVar1);
  _objc_release(uStack_60);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 1057d2e34; end: 1057d2e37;  */

void FUN_1057d2e34(void)

{
  return;
}



/* Entry: 1057d2e38; end: 1057d344f; -[SCChatStatusSender sendSaveToCameraRollStatusMessage:messageId:senderUserId:savedMedias:analytics:] */

void FUN_1057d2e38(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined *puVar16;
  long lVar17;
  long lVar18;
  undefined *puStack_230;
  undefined8 uStack_228;
  code *pcStack_220;
  undefined *puStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_178;
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_230 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_228 = 0xc2000000;
  pcStack_220 = FUN_1057d3450;
  puStack_218 = &UNK_1108529c0;
  uStack_210 = param_3;
  uStack_208 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  ppuVar1 = &puStack_230;
  _objc_retainBlock();
  puVar2 = PTR_PTR_1126be6c0;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_opt_new();
  puVar3 = PTR_PTR_1126be6c8;
  _objc_opt_new();
  uVar12 = param_5;
  FUN_1057d2338(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010c21e620(puVar3,param_2,uVar12);
  _objc_release(uVar12);
  uVar12 = param_4;
  func_0x00010c0b4ca0(param_4);
  _objc_release(param_4);
  func_0x00010c1c6f00(puVar3,param_2,uVar12);
  _objc_retain(param_6);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  plStack_1b0 = (long *)0x0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  _objc_retain(param_6);
  lVar15 = param_6;
  func_0x00010bf52a60(param_6,param_2,&uStack_1c0,auStack_f0,0x10);
  if (lVar15 != 0) {
    lVar18 = *plStack_1b0;
    do {
      lVar17 = 0;
      do {
        if (*plStack_1b0 != lVar18) {
          _objc_enumerationMutation(param_6);
        }
        lVar6 = *(long *)(lStack_1b8 + lVar17 * 8);
        func_0x00010c067fc0();
        if (lVar6 + 1U < 0x17) {
          uVar13 = *(undefined4 *)(&UNK_10ddbe6c8 + (lVar6 + 1U) * 4);
        }
        else {
          uVar13 = 1;
        }
        puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar13);
        _objc_retainAutoreleasedReturnValue();
        puVar16 = puVar5;
        func_0x00010c0e00e0(puVar5,param_2,puVar7);
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        if (puVar16 == (undefined *)0x0) {
          func_0x00010c1d0640(puVar5,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c19d8,
                              puVar7);
        }
        else {
          puVar16 = puVar5;
          func_0x00010c0e00e0(puVar5,param_2,puVar7);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar16;
          func_0x00010c067ec0();
          func_0x00010c0df760(puVar9,param_2,(int)puVar8 + 1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar5,param_2,puVar9,puVar7);
          _objc_release(puVar9);
          _objc_release(puVar16);
        }
        _objc_release(puVar7);
        lVar17 = lVar17 + 1;
      } while (lVar15 != lVar17);
      lVar15 = param_6;
      func_0x00010bf52a60(param_6,param_2,&uStack_1c0,auStack_f0,0x10);
    } while (lVar15 != 0);
  }
  _objc_release(param_6);
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  lStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  plStack_1f0 = (long *)0x0;
  puVar9 = puVar5;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar9;
  func_0x00010bf52a60();
  if (puVar7 != (undefined *)0x0) {
    lVar15 = *plStack_1f0;
    do {
      puVar16 = (undefined *)0x0;
      do {
        if (*plStack_1f0 != lVar15) {
          _objc_enumerationMutation(puVar9);
        }
        uVar14 = *(undefined8 *)(lStack_1f8 + (long)puVar16 * 8);
        puVar8 = PTR_PTR_1126be6b8;
        _objc_opt_new(PTR_PTR_1126be6b8);
        uVar12 = uVar14;
        func_0x00010c067ec0(uVar14);
        func_0x00010c1c5440(puVar8,param_2,uVar12);
        puVar10 = puVar5;
        func_0x00010c0e00e0(puVar5,param_2,uVar14);
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar10;
        func_0x00010c0b4ca0();
        func_0x00010c1846c0(puVar8,param_2,puVar11);
        _objc_release(puVar10);
        func_0x00010befa120(puVar4,param_2,puVar8);
        _objc_release(puVar8);
        puVar16 = puVar16 + 1;
      } while (puVar7 != puVar16);
      puVar7 = puVar9;
      func_0x00010bf52a60(puVar9,param_2,&uStack_200,auStack_170,0x10);
    } while (puVar7 != (undefined *)0x0);
  }
  _objc_release(puVar9);
  _objc_release(puVar5);
  _objc_release(param_6);
  _objc_release(param_6);
  func_0x00010c1c54a0(puVar3,param_2,puVar4);
  _objc_release(puVar4);
  func_0x00010c1f5a80(puVar2,param_2,puVar3);
  puVar4 = PTR_PTR_1126ba668;
  _objc_opt_new(PTR_PTR_1126ba668);
  func_0x00010c20a420();
  puVar5 = PTR_PTR_1126b28f8;
  _objc_alloc(PTR_PTR_1126b28f8);
  func_0x00010c02b8e0();
  puVar9 = puVar5;
  func_0x00010c2a82e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  _objc_release(puVar5);
  puVar5 = PTR_PTR_1126be6d0;
  _objc_alloc(PTR_PTR_1126be6d0);
  puVar7 = puVar4;
  func_0x00010bf63640(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar9;
  func_0x00010bf21f60(puVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c002bc0(puVar5,param_2,puVar7,9,puVar16,1);
  puVar8 = puVar5;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar16);
  _objc_release(puVar7);
  _objc_release(puVar9);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  uVar12 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_178 = param_3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_178,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c280(uVar12,param_2,puVar8,puVar2,0,0,ppuVar1);
  _objc_release(puVar2);
  _objc_release(uVar12);
  _objc_release(puVar8);
  _objc_release(ppuVar1);
  _objc_release(uStack_208);
  _objc_release(uStack_210);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 1057d3450; end: 1057d3453;  */

void FUN_1057d3450(void)

{
  return;
}



/* Entry: 1057d3454; end: 1057d377b; -[SCChatStatusSender sendScreenCaptureStatusMessage:screenCaptureType:screenCaptureSource:capturingUserInfo:analytics:] */

void FUN_1057d3454(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  long param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_1057d377c;
  puStack_90 = &UNK_1108b3038;
  uStack_88 = param_3;
  lStack_80 = param_4;
  lStack_78 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_7);
  ppuVar4 = &puStack_a8;
  _objc_retainBlock();
  iVar3 = 0;
  if (param_5 - 1U < 3) {
    iVar3 = (int)(param_5 - 1U) + 1;
  }
  uVar2 = 2;
  if (param_6 != 2) {
    uVar2 = param_6 == 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126be6c0;
  uVar15 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_7);
  _objc_retain(uVar15);
  _objc_opt_new(puVar6);
  puVar7 = PTR_PTR_1126be6d8;
  _objc_opt_new(PTR_PTR_1126be6d8);
  uVar1 = 10;
  if (param_4 != 0) {
    uVar1 = 0xb;
  }
  func_0x00010c1793a0();
  func_0x00010c1792c0(puVar7,param_2,iVar3);
  func_0x00010c179540(puVar7,param_2,uVar2);
  func_0x00010c1f7000(puVar6,param_2,puVar7);
  uVar8 = uVar15;
  FUN_1057d2338(uVar15);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar15);
  func_0x00010c179520(puVar7,param_2,uVar8);
  _objc_release(uVar8);
  puVar9 = PTR_PTR_1126ba668;
  _objc_opt_new(PTR_PTR_1126ba668);
  func_0x00010c20a420();
  puVar10 = PTR_PTR_1126b28f8;
  _objc_alloc(PTR_PTR_1126b28f8);
  func_0x00010c02b8e0();
  puVar11 = puVar10;
  func_0x00010c2a82e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  _objc_release(puVar10);
  puVar10 = PTR_PTR_1126be6d0;
  _objc_alloc(PTR_PTR_1126be6d0);
  puVar12 = puVar9;
  func_0x00010bf63640(puVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar11;
  func_0x00010bf21f60(puVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c002bc0(puVar10,param_2,puVar12,uVar1,puVar13,1);
  puVar14 = puVar10;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar9);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(param_7);
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = param_3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_70,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c280(uVar5,param_2,puVar14,puVar6,0,0,ppuVar4);
  _objc_release(puVar6);
  _objc_release(puVar14);
  _objc_release(uVar5);
  _objc_release(ppuVar4);
  _objc_release(uStack_88);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 1057d377c; end: 1057d377f;  */

void FUN_1057d377c(void)

{
  return;
}



/* Entry: 1057d3780; end: 1057d3a07; -[SCChatStatusSender sendQuoteReplyShareStatusMessage:analytics:] */

void FUN_1057d3780(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_1057d3a08;
  puStack_80 = &UNK_110855e40;
  uStack_78 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  ppuVar1 = &puStack_98;
  _objc_retainBlock();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126be6c0;
  _objc_retain(param_4);
  _objc_opt_new(puVar3);
  puVar4 = PTR_PTR_1126be6e0;
  _objc_opt_new(PTR_PTR_1126be6e0);
  func_0x00010c1e6c60(puVar3,param_2,puVar4);
  puVar5 = PTR_PTR_1126ba668;
  _objc_opt_new(PTR_PTR_1126ba668);
  func_0x00010c20a420();
  puVar6 = PTR_PTR_1126b28f8;
  _objc_alloc(PTR_PTR_1126b28f8);
  func_0x00010c02b8e0();
  puVar7 = puVar6;
  func_0x00010c2a82e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar6);
  puVar6 = PTR_PTR_1126be6d0;
  _objc_alloc(PTR_PTR_1126be6d0);
  puVar8 = puVar5;
  func_0x00010bf63640(puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010bf21f60(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c002bc0(puVar6,param_2,puVar8,7,puVar9,1);
  puVar10 = puVar6;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(param_4);
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = param_3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_70,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c280(uVar2,param_2,puVar10,puVar3,0,0,ppuVar1);
  _objc_release(puVar3);
  _objc_release(puVar10);
  _objc_release(uVar2);
  _objc_release(ppuVar1);
  _objc_release(uStack_78);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 1057d3a08; end: 1057d3a0b;  */

void FUN_1057d3a08(void)

{
  return;
}



/* Entry: 1057d3a0c; end: 1057d3a3b; -[SCChatStatusSender .cxx_destruct] */

void FUN_1057d3a0c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1057d3a3c; end: 1057d3ad7; -[SCConversationDestinationParser initWithConversationIdResolver:userInfoService:] */

undefined8
FUN_1057d3a3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae790;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c021520();
  func_0x00010c0056a0(param_1,param_2,param_3,param_4,puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 1057d3ad8; end: 1057d3ba3; -[SCConversationDestinationParser initWithConversationIdResolver:userInfoService:performer:] */

undefined1 *
FUN_1057d3ad8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126ea540;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1057d3ba4; end: 1057d3e63; -[SCConversationDestinationParser sortConversations:] */

void FUN_1057d3ba4(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  code *pcStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar4 = puVar3;
  _dispatch_group_create();
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  _objc_retain(param_3);
  lVar5 = param_3;
  func_0x00010bf52a60();
  if (lVar5 != 0) {
    lVar9 = *plStack_130;
    do {
      lVar8 = 0;
      do {
        if (*plStack_130 != lVar9) {
          _objc_enumerationMutation(param_3);
        }
        _dispatch_group_enter(puVar4);
        uVar6 = *(undefined8 *)(param_1 + 0x18);
        func_0x00010c11de00(uVar6);
        _objc_retainAutoreleasedReturnValue();
        puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_170 = 0xc2000000;
        pcStack_168 = FUN_1057d3e64;
        puStack_160 = &UNK_1108b3068;
        _objc_retain(puVar2);
        puStack_158 = puVar2;
        _objc_retain(puVar3);
        puStack_150 = puVar3;
        _objc_retain(puVar4);
        puStack_148 = puVar4;
        func_0x00010bebe000(param_1);
        _objc_release(uVar6);
        _objc_release(puStack_148);
        _objc_release(puStack_150);
        _objc_release(puStack_158);
        lVar8 = lVar8 + 1;
      } while (lVar5 != lVar8);
      lVar5 = param_3;
      func_0x00010bf52a60();
    } while (lVar5 != 0);
  }
  _objc_release(param_3);
  lVar9 = *(long *)(param_1 + 0x18);
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_1b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1a8 = 0xc2000000;
  pcStack_1a0 = FUN_1057d3f48;
  puStack_198 = &UNK_110848ba8;
  puStack_190 = puVar1;
  puStack_188 = puVar2;
  puStack_180 = puVar3;
  _objc_retain(puVar3);
  _objc_retain(puVar2);
  _objc_retain(puVar1);
  lVar5 = lVar9;
  func_0x000100bc0718(puVar4,lVar9,&puStack_1b0);
  _objc_release(lVar9);
  puVar7 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_180);
  _objc_release(puStack_188);
  _objc_release(puStack_190);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar5);
  lVar9 = lVar5;
  func_0x00010bf50b20();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar9;
  func_0x00010bf529e0();
  _objc_release(lVar9);
  if (lVar8 != 0) {
    uVar6 = *(undefined8 *)(param_3 + 0x20);
    lVar9 = lVar5;
    func_0x00010bf50b20(lVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(uVar6);
    _objc_release(lVar9);
  }
  lVar9 = lVar5;
  func_0x00010bf026a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar9;
  func_0x00010bf529e0();
  _objc_release(lVar9);
  if (lVar8 != 0) {
    uVar6 = *(undefined8 *)(param_3 + 0x28);
    lVar9 = lVar5;
    func_0x00010bf026a0(lVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(uVar6);
    _objc_release(lVar9);
  }
  _dispatch_group_leave(*(undefined8 *)(param_3 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 1057d3e64; end: 1057d3f47;  */

void FUN_1057d3e64(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf50b20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    lVar1 = param_2;
    func_0x00010bf50b20(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(uVar3);
    _objc_release(lVar1);
  }
  lVar1 = param_2;
  func_0x00010bf026a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    lVar1 = param_2;
    func_0x00010bf026a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(uVar3);
    _objc_release(lVar1);
  }
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1057d3f48; end: 1057d3f8f;  */

void FUN_1057d3f48(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126be708;
  _objc_alloc(PTR_PTR_1126be708);
  func_0x00010c005980();
  func_0x00010bf43d60(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1057d3f90; end: 1057d40bf; -[SCConversationDestinationParser _sortConversation:completionQueue:completion:] */

void FUN_1057d3f90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1057d40c0;
  puStack_78 = &UNK_1108b3098;
  uStack_70 = param_1;
  uStack_68 = param_3;
  _objc_retain(param_4);
  uStack_60 = param_4;
  _objc_retain(param_5);
  puStack_c8 = puVar1;
  uStack_c0 = 0xc2000000;
  uStack_b8 = 0x1057d40d4;
  puStack_b0 = &UNK_11086c960;
  uStack_a8 = param_1;
  uStack_a0 = param_4;
  uStack_98 = param_5;
  uStack_58 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0c11e0(param_3,param_2,&puStack_90,&puStack_c8);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1057d40c0; end: 1057d40e7;  */

void FUN_1057d40c0(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bebe070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__sortDirectChat_withUserId_compl_11258d1c0,
             *(undefined8 *)(param_1 + 0x28),param_2,*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 1057d40e8; end: 1057d41d7; -[SCConversationDestinationParser _sortGroup:completionQueue:completion:] */

void FUN_1057d40e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1057d41d8;
  puStack_58 = &UNK_110848378;
  _objc_copyWeak(auStack_40,auStack_38);
  uStack_50 = param_3;
  uStack_48 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_5);
  func_0x00010007380c(param_4,&puStack_70);
  _objc_release(param_4);
  _objc_release(uStack_50);
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1057d41d8; end: 1057d431f;  */

void FUN_1057d41d8(long param_1,undefined8 param_2,undefined *param_3,undefined *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  long lStack_b8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = param_1 + 0x30;
  _objc_loadWeakRetained();
  lVar9 = *(long *)(param_1 + 0x28);
  if (lVar8 == 0) {
    (**(code **)(lVar9 + 0x10))(lVar9,0);
  }
  else {
    puVar1 = PTR_PTR_1126be708;
    _objc_alloc();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126be710;
    func_0x00010bfce5a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    param_3 = puVar2;
    param_4 = puVar4;
    func_0x00010c005980();
    (**(code **)(lVar9 + 0x10))(lVar9,puVar1);
    _objc_release(puVar1);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_c8,lVar8);
  uVar10 = *(undefined8 *)(lVar8 + 8);
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_c0 = param_3;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = auStack_c8;
  _objc_copyWeak(auStack_d0);
  _objc_retain(param_6);
  _objc_retain(param_4);
  func_0x00010bf504e0(uVar10);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_6);
  _objc_destroyWeak(auStack_d0);
  _objc_destroyWeak(auStack_c8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_d0);
  _objc_destroyWeak(auStack_c8);
  __Unwind_Resume();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar6);
  puVar1 = param_3 + 0x30;
  _objc_loadWeakRetained();
  if (puVar1 == (undefined *)0x0) {
    (**(code **)(*(long *)(param_3 + 0x28) + 0x10))(*(long *)(param_3 + 0x28),0);
  }
  else {
    puVar5 = puVar6;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    if (puVar5 == (undefined1 *)0x0) {
      (**(code **)(*(long *)(param_3 + 0x28) + 0x10))(*(long *)(param_3 + 0x28),0);
    }
    else {
      puVar2 = PTR_PTR_1126be710;
      func_0x00010c291340();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = *(long *)(param_3 + 0x28);
      puVar3 = PTR_PTR_1126be708;
      _objc_alloc(PTR_PTR_1126be708);
      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c005980(puVar3);
      (**(code **)(lVar7 + 0x10))(lVar7,puVar3);
      _objc_release(puVar3);
      _objc_release(puVar4);
      _objc_release(puVar2);
    }
    _objc_release(puVar5);
  }
  _objc_release(puVar1);
  _objc_release(puVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar6 + 0x18,0);
  _objc_storeStrong(puVar6 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar6 + 8,0);
  return;
}



/* Entry: 1057d4320; end: 1057d44c7; -[SCConversationDestinationParser _sortDirectChat:withUserId:completionQueue:completion:] */

void FUN_1057d4320(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  long lStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_68,param_1);
  uVar9 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_60 = param_3;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = auStack_68;
  _objc_copyWeak(auStack_70);
  _objc_retain(param_6);
  _objc_retain(param_4);
  func_0x00010bf504e0(uVar9);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_6);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  __Unwind_Resume();
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar6);
  lVar2 = param_3 + 0x30;
  _objc_loadWeakRetained();
  if (lVar2 == 0) {
    (**(code **)(*(long *)(param_3 + 0x28) + 0x10))(*(long *)(param_3 + 0x28),0);
  }
  else {
    puVar3 = puVar6;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 == (undefined1 *)0x0) {
      (**(code **)(*(long *)(param_3 + 0x28) + 0x10))(*(long *)(param_3 + 0x28),0);
    }
    else {
      puVar1 = PTR_PTR_1126be710;
      func_0x00010c291340();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = *(long *)(param_3 + 0x28);
      puVar4 = PTR_PTR_1126be708;
      _objc_alloc(PTR_PTR_1126be708);
      puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c005980(puVar4);
      (**(code **)(lVar8 + 0x10))(lVar8,puVar4);
      _objc_release(puVar4);
      _objc_release(puVar5);
      _objc_release(puVar1);
    }
    _objc_release(puVar3);
  }
  _objc_release(lVar2);
  _objc_release(puVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar6 + 0x18,0);
  _objc_storeStrong(puVar6 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar6 + 8,0);
  return;
}



/* Entry: 1057d44c8; end: 1057d4637;  */

void FUN_1057d44c8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0);
  }
  else {
    lVar2 = param_2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0);
    }
    else {
      puVar3 = PTR_PTR_1126be710;
      func_0x00010c291340();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = *(long *)(param_1 + 0x28);
      puVar4 = PTR_PTR_1126be708;
      _objc_alloc(PTR_PTR_1126be708);
      puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c005980(puVar4);
      (**(code **)(lVar7 + 0x10))(lVar7,puVar4);
      _objc_release(puVar4);
      _objc_release(puVar5);
      _objc_release(puVar3);
    }
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_2 + 0x18,0);
  _objc_storeStrong(param_2 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_2 + 8,0);
  return;
}



/* Entry: 1057d4638; end: 1057d46b3; -[SCConversationDestinationParser .cxx_destruct] */

void FUN_1057d4638(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1057d46b4; end: 1057d4773; -[SCConversationDestinationParsingServicesEntryPoint _conversationDestinationParser] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057d46b4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1 + _DAT_112729d24;
    _objc_loadWeakRetained(lVar4);
  }
  lVar1 = lVar4;
  func_0x00010bf50420(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar4);
  lVar4 = 0;
  if (param_1 != 0) {
    lVar4 = param_1 + _DAT_112729d28;
    _objc_loadWeakRetained(lVar4);
  }
  puVar3 = PTR_PTR_1126be720;
  _objc_alloc(PTR_PTR_1126be720);
  func_0x00010c005680();
  _objc_release(lVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1057d4774; end: 1057d47c7; -[SCConversationDestinationParsingServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057d4774(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112729d1c,0);
  _objc_destroyWeak(param_1 + _DAT_112729d28);
  _objc_destroyWeak(param_1 + _DAT_112729d24);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112729d20);
  return;
}



/* Entry: 1057d47c8; end: 1057d48db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057d47c8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar7 = PTR_PTR_1126be728;
    _objc_alloc(PTR_PTR_1126be728);
    lVar1 = param_1 + _DAT_112729d30;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c0d5c60();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + _DAT_112729d34;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010bf87660();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1 + _DAT_112729d38;
    _objc_loadWeakRetained(lVar5);
    lVar6 = lVar5;
    func_0x00010c0b3760();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02e240(puVar7,param_2,lVar2,lVar4,lVar6);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1057d48dc; end: 1057d492b; -[SCCoreMessagingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057d48dc(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112729d38);
  _objc_destroyWeak(param_1 + _DAT_112729d34);
  _objc_destroyWeak(param_1 + _DAT_112729d30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112729d2c);
  return;
}



/* Entry: 1057d492c; end: 1057d49e3;  */

void FUN_1057d492c(long param_1,long param_2,undefined8 param_3)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  _objc_retain(param_2);
  if (param_1 != 0) {
    if (param_2 == 0) {
      (**(code **)(param_1 + 0x10))(param_1,param_3);
    }
    else {
      puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_58 = 0xc2000000;
      pcStack_50 = FUN_1057d49e4;
      puStack_48 = &UNK_110860cf8;
      _objc_retain(param_1);
      lStack_40 = param_1;
      uStack_38 = param_3;
      func_0x00010007380c(param_2,&puStack_60);
      _objc_release(lStack_40);
    }
  }
  _objc_release(param_2);
  _objc_release(param_1);
  return;
}



/* Entry: 1057d49e4; end: 1057d49f3;  */

void FUN_1057d49e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001057d49f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1057d49f4; end: 1057d4abf; -[SCCoreMessageSender initWithNativeSessionManager:docObjectContext:sendObservabilityLogger:] */

undefined1 *
FUN_1057d49f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126ea548;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1057d4ac0; end: 1057d4b07; -[SCCoreMessageSender nativeConversationManager] */

void FUN_1057d4ac0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfc7e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1057d4b08; end: 1057d4d03; -[SCCoreMessageSender sendMessageWithContent:conversations:massSnapRecipients:stories:phoneNumbers:completionQueue:completionHandler:] */

void FUN_1057d4b08(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5,long param_6,long param_7,undefined8 param_8,undefined8 param_9)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  lVar1 = param_4;
  func_0x00010bf529e0();
  if ((((lVar1 != 0) || (lVar1 = param_6, func_0x00010bf529e0(), lVar1 != 0)) ||
      (lVar1 = param_7, func_0x00010bf529e0(), lVar1 != 0)) ||
     (lVar1 = param_5, func_0x00010bf529e0(), lVar1 != 0)) {
    uVar2 = param_1;
    func_0x00010bdfb300(param_1,param_2,param_4,param_5,param_6,param_7,param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c0fe1c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf0d920();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c272380();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_1;
    func_0x00010bdd8ea0(param_1,param_2,param_8,param_9,uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    func_0x00010c0d58a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15c2c0();
    _objc_release(param_1);
    _objc_release(uVar6);
    _objc_release(uVar2);
  }
  _objc_release(param_9);
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



/* Entry: 1057d4d04; end: 1057d4dd3; -[SCCoreMessageSender sendMessageWithContent:conversations:massSnapRecipients:completionQueue:completionHandler:] */

void FUN_1057d4d04(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = param_4;
  func_0x00010bf529e0();
  if ((lVar1 != 0) || (lVar1 = param_5, func_0x00010bf529e0(), lVar1 != 0)) {
    func_0x00010c15c2a0(param_1,param_2,param_3,param_4,param_5,0,0,param_6,param_7);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1057d4dd4; end: 1057d4f37; -[SCCoreMessageSender forwardMessage:conversations:completionQueue:completionHandler:] */

void FUN_1057d4dd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_4;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar2 = param_1;
    func_0x00010bdfb300(param_1,param_2,param_4,0,0,0,0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c0fe1c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf0d920();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c272380();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_1;
    func_0x00010bdd8ea0(param_1,param_2,param_5,param_6,uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    func_0x00010c0d58a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb6360();
    _objc_release(param_1);
    _objc_release(uVar6);
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1057d4f38; end: 1057d56d7; -[SCCoreMessageSender _destinationsFromConversations:massSnapRecipients:stories:phoneNumbers:storyPostContent:] */

/* WARNING: Possible PIC construction at 0x0001057d52d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001057d52dc) */
/* WARNING: Removing unreachable block (ram,0x0001057d5370) */
/* WARNING: Removing unreachable block (ram,0x0001057d5320) */
/* WARNING: Removing unreachable block (ram,0x0001057d5374) */
/* WARNING: Removing unreachable block (ram,0x0001057d5394) */
/* WARNING: Removing unreachable block (ram,0x0001057d53a0) */
/* WARNING: Removing unreachable block (ram,0x0001057d53bc) */
/* WARNING: Removing unreachable block (ram,0x0001057d53fc) */
/* WARNING: Removing unreachable block (ram,0x0001057d5430) */
/* WARNING: Removing unreachable block (ram,0x0001057d5418) */
/* WARNING: Removing unreachable block (ram,0x0001057d5434) */
/* WARNING: Removing unreachable block (ram,0x0001057d53e4) */
/* WARNING: Removing unreachable block (ram,0x0001057d543c) */
/* WARNING: Removing unreachable block (ram,0x0001057d54e8) */
/* WARNING: Removing unreachable block (ram,0x0001057d52bc) */

void FUN_1057d4f38(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined *param_4,
                  long param_5,long param_6,long param_7)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puStack_340;
  undefined *puStack_300;
  undefined *puStack_258;
  undefined8 uStack_250;
  code *pcStack_248;
  undefined *puStack_240;
  long lStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if (param_3 == (undefined *)0x0) {
    puStack_340 = PTR____NSArray0__struct_11034ab48;
  }
  else {
    puStack_340 = param_3;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar2 = param_7;
  func_0x00010bfeba20();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  plStack_220 = (long *)0x0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  lVar3 = lVar2;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar9 = *plStack_220;
    do {
      lVar10 = 0;
      do {
        if (*plStack_220 != lVar9) {
          _objc_enumerationMutation(lVar2);
        }
        puVar4 = PTR_PTR_1126be758;
        _objc_alloc();
        func_0x00010c008360();
        puVar11 = puVar4;
        func_0x00010bf0d0a0();
        if ((int)puVar11 == 4) {
          puVar11 = puVar4;
          func_0x00010c25a920();
          _objc_retainAutoreleasedReturnValue();
          puStack_300 = puVar11;
          func_0x00010c25a520();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar11);
          _objc_release(puVar4);
          goto LAB_1057d50f0;
        }
        _objc_release(puVar4);
        lVar10 = lVar10 + 1;
      } while (lVar3 != lVar10);
      lVar3 = lVar2;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  puStack_300 = (undefined *)0x0;
LAB_1057d50f0:
  _objc_release(lVar2);
  _objc_release(lVar2);
  lVar2 = param_7;
  func_0x00010bfeba20();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  plStack_220 = (long *)0x0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  lVar3 = lVar2;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar9 = *plStack_220;
    do {
      lVar10 = 0;
      do {
        if (*plStack_220 != lVar9) {
          _objc_enumerationMutation(lVar2);
        }
        puVar4 = PTR_PTR_1126be758;
        _objc_alloc();
        func_0x00010c008360();
        puVar11 = puVar4;
        func_0x00010bf0d0a0();
        if ((int)puVar11 == 0xf) {
          puVar11 = puVar4;
          func_0x00010c24c560(puVar4);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar4);
          goto LAB_1057d51e8;
        }
        _objc_release(puVar4);
        lVar10 = lVar10 + 1;
      } while (lVar3 != lVar10);
      lVar3 = lVar2;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  puVar11 = (undefined *)0x0;
LAB_1057d51e8:
  _objc_release(lVar2);
  _objc_release(lVar2);
  lVar2 = param_5;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_258 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_250 = 0xc2000000;
  pcStack_248 = FUN_1057d56e8;
  puStack_240 = &UNK_1108b3148;
  _objc_retain(param_5);
  lVar3 = lVar2;
  ppuVar7 = (undefined **)PTR____kCFBooleanFalse_11034ab60;
  lStack_238 = param_5;
  func_0x00010bd86870(lVar2,PTR____kCFBooleanFalse_11034ab60,&puStack_258);
  _objc_release(lVar2);
  _objc_retain(param_5);
  lVar2 = param_5;
  func_0x00010bf52a60();
  ppuVar8 = ppuRam0000000000000000;
  if (lVar2 == 0) {
    _objc_release(param_5);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retain(param_6);
    lVar2 = param_6;
    func_0x00010bf52a60();
    ppuVar8 = ppuRam0000000000000000;
    while (lVar2 != 0) {
      lVar9 = 0;
      do {
        if (ppuRam0000000000000000 != ppuVar8) {
          _objc_enumerationMutation(param_6);
        }
        puVar5 = PTR_PTR_1126ba340;
        _objc_alloc(PTR_PTR_1126ba340);
        func_0x00010c0304c0();
        func_0x00010befa120(puVar4);
        _objc_release(puVar5);
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      lVar2 = param_6;
      func_0x00010bf52a60();
    }
    _objc_release(param_6);
    puVar5 = PTR____NSArray0__struct_11034ab48;
    if (param_4 != (undefined *)0x0) {
      ppuVar7 = &PTR___NSConcreteGlobalBlock_1108b3198;
      puVar5 = param_4;
      func_0x000100504554(param_4,&PTR___NSConcreteGlobalBlock_1108b3198);
    }
    puVar6 = PTR_PTR_1126be748;
    _objc_alloc(PTR_PTR_1126be748);
    func_0x00010c0059c0();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(lVar3);
    _objc_release(lStack_238);
    _objc_release(puVar11);
    _objc_release(puStack_300);
    _objc_release(puVar1);
    _objc_release(puStack_340);
    _objc_release(param_7);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
      return;
    }
    ___stack_chk_fail();
    ppuVar8 = ppuVar7;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc35d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b0cd8,PTR_s_UUIDWithString__11254e710,ppuVar8);
  return;
}



/* Entry: 1057d56d8; end: 1057d56e7;  */

void FUN_1057d56d8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc35d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b0cd8,PTR_s_UUIDWithString__11254e710,param_2);
  return;
}



/* Entry: 1057d56e8; end: 1057d57af;  */

void FUN_1057d56e8(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf1f3c0();
  if (param_3 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0e00e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6ece0();
    func_0x00010c0df760(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  else {
    func_0x00010c0df760(puVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1057d57b0; end: 1057d57d3;  */

void FUN_1057d57b0(void)

{
  _objc_alloc(PTR_PTR_1126be740);
  func_0x00010c055880();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1057d57d4; end: 1057d598f; -[SCCoreMessageSender _callbackFromCompletionQueue:completionHandler:clientMessageId:] */

void FUN_1057d57d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR_PTR_1126be750;
  _objc_alloc(PTR_PTR_1126be750);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1057d5990;
  puStack_70 = &UNK_11084aaa8;
  _objc_retain(param_4);
  uStack_60 = param_4;
  _objc_retain(param_3);
  uStack_68 = param_3;
  _objc_copyWeak(auStack_90,auStack_58);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c04f4e0(puVar1);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_90);
  _objc_release(uStack_68);
  _objc_release(uStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1057d5990; end: 1057d599f;  */

void FUN_1057d5990(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  lVar1 = *(long *)(param_1 + 0x20);
  lVar2 = *(long *)(param_1 + 0x28);
  _objc_retain();
  _objc_retain(lVar1);
  if (lVar2 != 0) {
    if (lVar1 == 0) {
      (**(code **)(lVar2 + 0x10))(lVar2,0);
    }
    else {
      puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_58 = 0xc2000000;
      pcStack_50 = FUN_1057d49e4;
      puStack_48 = &UNK_110860cf8;
      _objc_retain(lVar2);
      uStack_38 = 0;
      lStack_40 = lVar2;
      func_0x00010007380c(lVar1,&puStack_60);
      _objc_release(lStack_40);
    }
  }
  _objc_release(lVar1);
  _objc_release(lVar2);
  return;
}



/* Entry: 1057d59a0; end: 1057d59d3;  */

void FUN_1057d59a0(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be58640();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1057d59d4; end: 1057d5a07;  */

void FUN_1057d59d4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  lVar1 = *(long *)(param_1 + 0x28);
  lVar2 = *(long *)(param_1 + 0x20);
  if (param_2 - 1U < 6) {
    uVar3 = *(undefined8 *)(&UNK_10ddbe728 + (param_2 - 1U) * 8);
  }
  else {
    uVar3 = 0xc;
  }
  _objc_retain();
  _objc_retain(lVar2);
  if (lVar1 != 0) {
    if (lVar2 == 0) {
      (**(code **)(lVar1 + 0x10))(lVar1,uVar3);
    }
    else {
      puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_58 = 0xc2000000;
      pcStack_50 = FUN_1057d49e4;
      puStack_48 = &UNK_110860cf8;
      _objc_retain(lVar1);
      lStack_40 = lVar1;
      uStack_38 = uVar3;
      func_0x00010007380c(lVar2,&puStack_60);
      _objc_release(lStack_40);
    }
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  return;
}



/* Entry: 1057d5a08; end: 1057d5a87; -[SCCoreMessageSender _logSendPersistedWithClientMessageId:] */

void FUN_1057d5a08(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    lVar1 = param_3;
    func_0x00010c28ed80(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0af240();
    _objc_release(uVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1057d5a88; end: 1057d5ac3; -[SCCoreMessageSender .cxx_destruct] */

void FUN_1057d5a88(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1057d5ac4; end: 1057d5b6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057d5ac4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar1 = param_1 + _DAT_112729d48;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c0d5c60();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bfca700();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 1057d5b6c; end: 1057d5ba3; -[SCNativeConversationServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057d5b6c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112729d4c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112729d48);
  return;
}



/* Entry: 1057d5ba4; end: 1057d5c7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057d5ba4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126be768;
    _objc_alloc(PTR_PTR_1126be768);
    lVar1 = param_1 + _DAT_112729d58;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bf523a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + _DAT_112729d5c;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010c0cb4c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c005de0(puVar5,param_2,lVar2,lVar4);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1057d5c7c; end: 1057d5ccf; -[SCSnapSendingServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057d5c7c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112729d5c);
  _objc_storeStrong(param_1 + _DAT_112729d50,0);
  _objc_destroyWeak(param_1 + _DAT_112729d58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112729d54);
  return;
}



/* Entry: 1057d5cd0; end: 1057d5d2f;  */

bool FUN_1057d5cd0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0fef80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf85640();
  _objc_release(uVar1);
  _objc_release(param_1);
  return (int)uVar2 == 6;
}



/* Entry: 1057d5d30; end: 1057d5dd3; -[SCSnapSender initWithCoreMessageSender:messagingExperimentService:] */

undefined1 *
FUN_1057d5d30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ea550;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1057d5dd4; end: 1057d726f; -[SCSnapSender sendSnapMessageWithSnapDoc:snapDocKey:mediaQualityType:conversations:massSnapRecipients:stories:phoneNumbers:incidentalAttachments:snapSendInfo:messagingLocalMediaReferences:spotlightTileMediaReference:externalContentMetadata:localMessageContentMetadata:localPlatformData:completionQueue:completionHandler:] */

void FUN_1057d5dd4(double param_1,long param_2,undefined8 param_3,undefined *param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,long param_9
                  ,long param_10,undefined8 param_11,undefined8 param_12,long param_13,long param_14
                  ,long param_15,ulong param_16,long param_17,undefined8 param_18,
                  undefined8 param_19)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  long lVar27;
  ulong uVar28;
  undefined8 uVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined8 uVar32;
  undefined *puStack_248;
  
  lVar27 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_16);
  _objc_retain(param_19);
  _objc_retain(param_18);
  _objc_retain(param_17);
  _objc_retain(param_15);
  _objc_retain(param_14);
  _objc_retain(param_13);
  _objc_retain(param_12);
  _objc_retain(param_8);
  puVar1 = param_4;
  func_0x00010c270d80();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c23fb40();
  _objc_release(puVar1);
  if (puVar2 == (undefined *)0x0) {
    puVar1 = param_4;
    func_0x00010bfdd660();
    if (((ulong)puVar1 & 1) == 0) {
      puVar1 = PTR_PTR_1126bcf30;
      _objc_opt_new(PTR_PTR_1126bcf30);
      func_0x00010c216040(param_4);
      _objc_release(puVar1);
    }
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    param_1 = param_1 * 1000.0;
    puVar2 = param_4;
    func_0x00010c270d80(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c203d40();
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_16;
  func_0x00010c242280();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = uVar3;
  func_0x00010c0e8a00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  _objc_release(uVar28);
  FUN_1057d5cd0(param_4);
  puVar2 = PTR_PTR_1126be758;
  _objc_opt_new();
  puVar30 = PTR_PTR_1126be778;
  _objc_opt_new(PTR_PTR_1126be778);
  func_0x00010c205040();
  func_0x00010c205bc0(puVar2);
  _objc_release(puVar30);
  puVar30 = puVar2;
  func_0x00010bf63640(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar1);
  _objc_release(puVar30);
  _objc_retain(param_4);
  puVar30 = param_4;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar30;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c27dd80();
  if ((int)puVar7 == 0) {
    puVar7 = param_4;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c0ff660();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010c0c3fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010c0c4bc0();
    if ((int)puVar11 == 0) {
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      goto LAB_1057d60f0;
    }
    puVar11 = param_4;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010c0ff660();
    _objc_retainAutoreleasedReturnValue();
    puVar31 = puVar12;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar31;
    func_0x00010c0c3fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar13;
    func_0x00010c0c4bc0();
    _objc_release(puVar13);
    _objc_release(puVar31);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar30);
    if ((uint)puVar14 < 1000) {
      puStack_248 = PTR_PTR_1126be758;
      _objc_opt_new();
      puVar30 = PTR_PTR_1126be780;
      _objc_opt_new(PTR_PTR_1126be780);
      func_0x00010c220e60();
      func_0x00010c220e40(puStack_248);
      goto LAB_1057d60f4;
    }
    _objc_release(param_4);
    puStack_248 = (undefined *)0x0;
  }
  else {
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
LAB_1057d60f0:
    puStack_248 = (undefined *)0x0;
LAB_1057d60f4:
    _objc_release(puVar30);
    _objc_release(param_4);
    if (puStack_248 == (undefined *)0x0) {
      puStack_248 = (undefined *)0x0;
    }
    else {
      puVar30 = puStack_248;
      func_0x00010bf63640(puStack_248);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar1);
      _objc_release(puVar30);
    }
  }
  _objc_retain(param_4);
  _objc_retain(uVar3);
  if (uVar3 == 0) {
    puVar30 = (undefined *)0x0;
  }
  else {
    puVar30 = param_4;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar30;
    func_0x00010c0ff660();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c0c3fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c27dd80();
    if ((int)puVar7 == 0) {
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar30);
    }
    else {
      puVar7 = param_4;
      func_0x00010c0fee00();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010c0ff660();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar9;
      func_0x00010c0c3fe0();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar10;
      func_0x00010c27dd80();
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar30);
      if ((int)puVar11 != 1) {
        puVar30 = (undefined *)0x0;
        goto LAB_1057d64f4;
      }
    }
    puVar4 = PTR_PTR_1126be758;
    _objc_opt_new();
    puVar5 = PTR_PTR_1126be780;
    _objc_opt_new(PTR_PTR_1126be780);
    uVar28 = uVar3;
    func_0x00010c0e8a00();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar28;
    func_0x00010bf1f3c0();
    _objc_release(uVar28);
    if ((uVar15 & 1) == 0) {
      uVar28 = uVar3;
      func_0x00010c15aca0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      _objc_release(uVar28);
      if (0.0 < param_1) goto LAB_1057d64b0;
      puVar30 = (undefined *)0x0;
    }
    else {
LAB_1057d64b0:
      func_0x00010c220e60(puVar5);
      func_0x00010c220e40(puVar4);
      _objc_retain(puVar4);
      puVar30 = puVar4;
    }
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
LAB_1057d64f4:
  _objc_release(uVar3);
  _objc_release(param_4);
  if (puVar30 != (undefined *)0x0) {
    puVar4 = puVar30;
    func_0x00010bf63640(puVar30);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1);
    _objc_release(puVar4);
  }
  uVar28 = param_16;
  func_0x00010c11ecc0();
  _objc_retainAutoreleasedReturnValue();
  if (((uVar28 == 0) || (lVar16 = param_7, func_0x00010bf529e0(), lVar16 != 1)) ||
     (lVar16 = param_9, func_0x00010bf529e0(), lVar16 != 0)) {
    _objc_release(uVar28);
LAB_1057d6570:
    uVar28 = 0;
  }
  else {
    lVar16 = param_10;
    func_0x00010bf529e0();
    _objc_release(uVar28);
    if (lVar16 != 0) goto LAB_1057d6570;
    uVar28 = param_16;
    func_0x00010c11ecc0();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar15 = param_16;
  func_0x00010c0cb280();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = param_16;
  func_0x00010c25ada0();
  _objc_retainAutoreleasedReturnValue();
  uVar32 = *(undefined8 *)(param_2 + 0x10);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(puVar1);
  _objc_retain(uVar15);
  _objc_retain(param_17);
  _objc_retain(uVar3);
  _objc_retain(uVar17);
  _objc_retain(uVar28);
  _objc_retain(uVar32);
  _objc_retain(param_14);
  puVar4 = PTR_PTR_1126ba668;
  _objc_alloc_init();
  func_0x00010c206100();
  uVar18 = uVar17;
  func_0x00010c0ed940();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar18;
  func_0x00010c08fa60();
  if (uVar19 == 0) {
    uVar19 = uVar17;
    func_0x00010c105860();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar19;
    func_0x00010c08fa60();
    _objc_release(uVar19);
    _objc_release(uVar18);
    if (uVar20 != 0) goto LAB_1057d6684;
  }
  else {
    _objc_release(uVar18);
LAB_1057d6684:
    puVar5 = PTR_PTR_1126be788;
    _objc_opt_new(PTR_PTR_1126be788);
    uVar18 = uVar17;
    func_0x00010c0ed940();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar18;
    func_0x00010c08fa60();
    _objc_release(uVar18);
    if (uVar19 != 0) {
      uVar18 = uVar17;
      func_0x00010c0ed940(uVar17);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1ba720(puVar5);
      _objc_release(uVar18);
    }
    uVar18 = uVar17;
    func_0x00010c105860();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar18;
    func_0x00010c08fa60();
    _objc_release(uVar18);
    if (uVar19 != 0) {
      uVar18 = uVar17;
      func_0x00010c105860(uVar17);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1df720(puVar5);
      _objc_release(uVar18);
    }
    uVar18 = uVar17;
    func_0x00010c07eb20();
    if ((int)uVar18 != 0) {
      uVar18 = uVar17;
      func_0x00010c105860();
      _objc_retainAutoreleasedReturnValue();
      uVar19 = uVar18;
      func_0x00010c08fa60();
      _objc_release(uVar18);
      if (uVar19 != 0) {
        puVar6 = PTR_PTR_1126b1080;
        _objc_opt_new(PTR_PTR_1126b1080);
        func_0x00010c1843a0();
        uVar18 = uVar17;
        func_0x00010c105860(uVar17);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1a99c0(puVar6);
        _objc_release(uVar18);
        func_0x00010c1805c0(puVar5);
        _objc_release(puVar6);
      }
    }
    puVar6 = PTR_PTR_1126be790;
    _objc_opt_new(PTR_PTR_1126be790);
    func_0x00010c205740();
    puVar7 = puVar4;
    func_0x00010bf676a0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c204da0();
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  puVar5 = param_4;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  func_0x00010c27dd80();
  puVar5 = PTR_PTR_1126b28f8;
  _objc_alloc();
  func_0x00010c02b8e0();
  puVar6 = puVar5;
  func_0x00010c2b9620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar16 = param_13;
  func_0x00010bf529e0();
  puVar7 = puVar5;
  if (lVar16 != 0) {
    puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a0c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
  }
  uVar21 = param_5;
  func_0x000107d6ae7c(param_5,param_4,param_6,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar7);
  if (param_14 != 0) {
    func_0x00010befa120(puVar7);
  }
  puVar5 = PTR_PTR_1126be6d0;
  _objc_alloc();
  puVar9 = puVar4;
  func_0x00010bf63640(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar6;
  func_0x00010bf21f60(puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar7;
  func_0x00010bf51e00(puVar7);
  _objc_retain(param_4);
  _objc_retain(param_12);
  _objc_retain(uVar3);
  puVar12 = param_4;
  func_0x00010bfd84a0();
  if (((ulong)puVar12 & 1) == 0) {
    FUN_1057d5cd0();
    uVar22 = param_12;
    func_0x00010c23f880(param_12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29a680();
    _objc_release(uVar22);
    uVar18 = uVar3;
    func_0x00010c0e8a00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    _objc_release(uVar18);
  }
  _objc_release(uVar3);
  _objc_release(param_12);
  _objc_release(param_4);
  func_0x00010c002b80();
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  puVar9 = param_4;
  func_0x00010bfd84a0();
  if ((int)puVar9 != 0) {
    puVar9 = param_4;
    func_0x00010c08f220(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010bf24a40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    puVar9 = param_4;
    func_0x00010c08f220(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eede0();
    _objc_release(puVar9);
    puVar9 = param_4;
    func_0x00010c08f220(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eebe0();
    _objc_release(puVar9);
    puVar9 = PTR_PTR_1126b0cd8;
    _objc_retain(puVar10);
    puVar11 = puVar10;
    func_0x00010bfe2ee0(puVar10);
    puVar12 = puVar10;
    func_0x00010c0b5940(puVar10);
    _objc_release(puVar10);
    func_0x000100c4a928(puVar11,puVar12);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar11);
    func_0x00010bdc35c0(puVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar12);
    puVar11 = PTR_PTR_1126be798;
    _objc_alloc(PTR_PTR_1126be798);
    func_0x00010bff9a80();
    func_0x00010c2a9a20(puVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar11);
    _objc_release(puVar9);
    _objc_release(puVar10);
  }
  if (param_17 != 0) {
    puVar9 = PTR_PTR_1126be7a0;
    func_0x00010bf6e940();
    _objc_retainAutoreleasedReturnValue();
    if (puVar9 != (undefined *)0x0) {
      puVar11 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      puVar10 = param_4;
      func_0x00010c0fee00();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar10;
      func_0x00010c0ff660();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar10);
      puVar10 = puVar12;
      func_0x00010bf52a60();
      lVar16 = lRam0000000000000000;
      while (puVar10 != (undefined *)0x0) {
        puVar31 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar16) {
            _objc_enumerationMutation(puVar12);
          }
          uVar29 = *(undefined8 *)((long)puVar31 * 8);
          puVar13 = PTR_PTR_1126be7a8;
          _objc_alloc(PTR_PTR_1126be7a8);
          uVar22 = uVar29;
          func_0x00010c0c3fe0(uVar29);
          _objc_retainAutoreleasedReturnValue();
          uVar23 = uVar22;
          func_0x00010bf93e60();
          _objc_retainAutoreleasedReturnValue();
          uVar24 = uVar23;
          func_0x00010c086560();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0c3fe0(uVar29);
          _objc_retainAutoreleasedReturnValue();
          uVar25 = uVar29;
          func_0x00010bf93e60();
          _objc_retainAutoreleasedReturnValue();
          uVar26 = uVar25;
          func_0x00010c085300();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c020b60(puVar13);
          _objc_release(uVar26);
          _objc_release(uVar25);
          _objc_release(uVar29);
          _objc_release(uVar24);
          _objc_release(uVar23);
          _objc_release(uVar22);
          func_0x00010befa120(puVar11);
          _objc_release(puVar13);
          puVar31 = puVar31 + 1;
        } while (puVar10 != puVar31);
        puVar10 = puVar12;
        func_0x00010bf52a60();
      }
      _objc_release(puVar12);
      puVar10 = PTR_PTR_1126be7a0;
      _objc_alloc();
      puVar12 = puVar9;
      func_0x00010c270ec0(puVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c052ba0();
      _objc_release(puVar12);
      puVar12 = puVar10;
      func_0x00010c15e800();
      _objc_retainAutoreleasedReturnValue();
      if (puVar12 != (undefined *)0x0) {
        func_0x00010c2b2fe0(puVar5);
        _objc_unsafeClaimAutoreleasedReturnValue();
      }
      _objc_release(puVar12);
      _objc_release(puVar10);
      _objc_release(puVar11);
    }
    _objc_release(puVar9);
  }
  puVar9 = param_4;
  func_0x00010c1197a0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010bf05f80();
  if ((int)puVar10 == 6) {
    _objc_release(puVar9);
  }
  else {
    puVar10 = param_4;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x000107d612e4();
    _objc_release(puVar10);
    _objc_release(puVar9);
    if ((param_15 == 0) && ((int)puVar11 == 0)) goto LAB_1057d6f00;
  }
  puVar9 = PTR_PTR_1126be7b0;
  _objc_alloc_init(PTR_PTR_1126be7b0);
  func_0x00010c2ad920(puVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar9);
LAB_1057d6f00:
  if (uVar15 != 0) {
    func_0x00010c2b3e20(puVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  if (uVar3 != 0) {
    func_0x00010c2b9500(puVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  if (uVar28 != 0) {
    uVar22 = uVar32;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = uVar22;
    func_0x00010bf8f940();
    _objc_release(uVar22);
    puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if ((int)uVar23 != 0) {
      func_0x00010c067fc0(uVar28);
      func_0x00010c0df780(puVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b66c0(puVar5);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar9);
    }
  }
  puVar9 = puVar5;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(uVar21);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar8);
  _objc_release(puVar4);
  _objc_release(param_14);
  _objc_release(uVar32);
  _objc_release(uVar28);
  _objc_release(uVar17);
  _objc_release(uVar3);
  _objc_release(param_17);
  _objc_release(uVar15);
  _objc_release(puVar1);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_17);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(uVar17);
  _objc_release(uVar15);
  uVar32 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar32);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_19);
  _objc_retain(param_9);
  _objc_retain(param_7);
  _objc_retain(param_5);
  func_0x00010c15c2a0(uVar32);
  _objc_release(param_18);
  _objc_release(param_8);
  _objc_release(uVar32);
  _objc_release(param_19);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_19);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(puVar9);
  _objc_release(uVar28);
  _objc_release(puVar30);
  _objc_release(puStack_248);
  _objc_release(puVar2);
  _objc_release(uVar3);
  _objc_release(puVar1);
  _objc_release(param_16);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar27) {
    ___stack_chk_fail();
    if (*(long *)(param_4 + 0x38) == 0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0001057d727c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_4 + 0x38) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1057d7270; end: 1057d7283;  */

void FUN_1057d7270(long param_1)

{
  if (*(long *)(param_1 + 0x38) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001057d727c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x38) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1057d7284; end: 1057d72b3; -[SCSnapSender .cxx_destruct] */

void FUN_1057d7284(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1057d72b4; end: 1057d73af;  */

void FUN_1057d72b4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bf0dec0();
  if ((int)uVar1 == 2) {
    uVar1 = param_2;
    func_0x00010bfb58c0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010c26c020();
    _objc_release(uVar1);
    if ((uint)uVar4 < 6) {
      puVar2 = PTR_PTR_1126b2950;
      func_0x00010c26c8c0(PTR_PTR_1126b2950);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c2ac460();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar4;
      func_0x00010bf366a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfec2a0();
      _objc_release(uVar1);
      _objc_release(uVar4);
      _objc_release(puVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1057d73b0; end: 1057d7d63;  */

undefined1 * FUN_1057d73b0(long param_1,ulong param_2,undefined8 param_3,undefined *param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  undefined *puVar17;
  undefined *puVar18;
  uint uVar19;
  ulong uVar20;
  long lStack_2c0;
  undefined *puStack_2b8;
  undefined *puStack_2b0;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  long lStack_298;
  undefined1 *puStack_290;
  code *pcStack_288;
  uint uStack_27c;
  undefined *puStack_278;
  ulong uStack_270;
  long lStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  long lStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined8 uStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  ulong uStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar18 = PTR_PTR_1126be7c8;
  _objc_alloc_init();
  lVar15 = param_1;
  func_0x00010c25cd40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar18);
  _objc_release(lVar15);
  uVar11 = param_2;
  func_0x00010c0ca820(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_2;
  func_0x00010bf361a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120(param_2);
  lVar15 = param_1;
  func_0x000106a361c8(param_1,uVar11,uVar14);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar14);
  _objc_release(uVar11);
  func_0x00010c16b820(puVar18);
  _objc_retain(lVar15);
  _objc_retain(param_4);
  lVar1 = lVar15;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126b2950;
    func_0x00010c26c8c0(PTR_PTR_1126b2950);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c2ac460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = param_4;
    func_0x00010c269d40(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar2;
    func_0x00010bf366a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0();
    _objc_release(puVar17);
    _objc_release(puVar2);
  }
  else {
    puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e8 = 0xc2000000;
    pcStack_e0 = FUN_1057d72b4;
    puStack_d8 = &UNK_1108b3218;
    _objc_retain(param_4);
    puStack_d0 = param_4;
    func_0x00010bf97e80(lVar15);
    puVar3 = puStack_d0;
  }
  _objc_release(puVar3);
  _objc_release(param_4);
  lStack_230 = lVar15;
  _objc_release(lVar15);
  puVar2 = PTR_PTR_1126be7d0;
  _objc_opt_new();
  func_0x00010c06e9a0(param_2);
  func_0x00010c1affe0(puVar2);
  uVar11 = param_2;
  func_0x00010bf1fde0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar11;
  func_0x00010bfceb20();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar14;
  func_0x00010c08fa60();
  _objc_release(uVar14);
  _objc_release(uVar11);
  puStack_210 = puVar2;
  if (uVar20 != 0) {
    puVar3 = PTR_PTR_1126bc778;
    _objc_alloc_init(PTR_PTR_1126bc778);
    uVar11 = param_2;
    func_0x00010bf1fde0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar11;
    func_0x00010bfceb20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a99c0(puVar3);
    _objc_release(uVar14);
    _objc_release(uVar11);
    puVar17 = PTR_PTR_1126be7d8;
    _objc_alloc_init(PTR_PTR_1126be7d8);
    func_0x00010c1a4760();
    uVar11 = param_2;
    func_0x00010bf1fde0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c276780();
    func_0x00010c218480(puVar17);
    _objc_release(uVar11);
    uVar11 = param_2;
    func_0x00010bf1fde0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar11;
    func_0x00010bf4f340();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1733c0(puVar17);
    puVar2 = puStack_210;
    _objc_release(uVar14);
    _objc_release(uVar11);
    func_0x00010c1733e0(puVar2);
    _objc_release(puVar17);
    _objc_release(puVar3);
  }
  puVar2 = PTR_PTR_1126be7e0;
  _objc_opt_new();
  func_0x00010c21e040();
  puVar3 = PTR_PTR_1126be7e8;
  _objc_opt_new();
  func_0x00010c15b9c0(param_2);
  func_0x00010c1fc3e0(puVar3);
  puStack_240 = puVar3;
  func_0x00010c1fc0a0(puVar2);
  puVar3 = PTR_PTR_1126ba668;
  _objc_alloc_init();
  func_0x00010c212f20();
  puStack_238 = puVar2;
  puStack_200 = puVar3;
  func_0x00010c18a500(puVar3);
  uVar11 = param_2;
  func_0x00010c11ecc0();
  _objc_retainAutoreleasedReturnValue();
  puStack_248 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (uVar11 == 0) {
    puStack_248 = (undefined *)0x0;
  }
  else {
    uVar14 = param_2;
    func_0x00010c11ecc0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067fc0();
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar14);
  }
  puStack_228 = puVar18;
  puStack_220 = param_4;
  _objc_release(uVar11);
  puVar18 = PTR_PTR_1126b28f8;
  _objc_alloc();
  func_0x00010c02b8e0();
  puVar2 = puVar18;
  uStack_218 = param_3;
  func_0x00010c2a82e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_208 = puVar2;
  _objc_release(puVar18);
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  lStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  plStack_1e0 = (long *)0x0;
  uVar11 = param_2;
  func_0x00010c0ca820();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar11;
  func_0x00010bf52a60();
  if (uVar14 == 0) {
    uVar19 = 0;
  }
  else {
    uVar19 = 0;
    lVar15 = *plStack_1e0;
    do {
      uVar20 = 0;
      do {
        if (*plStack_1e0 != lVar15) {
          _objc_enumerationMutation(uVar11);
        }
        uVar4 = *(undefined8 *)(lStack_1e8 + uVar20 * 8);
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar4;
        func_0x00010c0720c0();
        _objc_release(uVar4);
        uVar19 = (uint)uVar12 | uVar19;
        uVar20 = uVar20 + 1;
      } while (uVar14 != uVar20);
      uVar14 = uVar11;
      func_0x00010bf52a60();
    } while (uVar14 != 0);
  }
  _objc_release(uVar11);
  puVar2 = PTR_PTR_1126be6d0;
  _objc_alloc();
  puVar18 = puStack_200;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puStack_208;
  puStack_250 = puVar18;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_2;
  puStack_258 = puVar3;
  func_0x00010c0ca820();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_2;
  func_0x00010c26aae0();
  puVar18 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(uVar11);
  _objc_opt_new();
  puStack_260 = puVar18;
  _objc_retain(uVar11);
  uVar20 = uVar11;
  func_0x00010bf529e0();
  uStack_1f8 = uVar11;
  if (uVar20 == 0) {
    puVar18 = (undefined *)0x0;
  }
  else {
    uStack_27c = (uint)uVar14;
    puVar3 = PTR_PTR_1126be758;
    puStack_278 = puVar2;
    uStack_270 = param_2;
    lStack_268 = param_1;
    _objc_opt_new();
    puVar18 = PTR_PTR_1126be7b8;
    _objc_opt_new(PTR_PTR_1126be7b8);
    func_0x00010c1c68e0(puVar3);
    _objc_release(puVar18);
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    lStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    plStack_1a0 = (long *)0x0;
    _objc_retain(uVar11);
    uVar14 = uVar11;
    func_0x00010bf52a60();
    if (uVar14 != 0) {
      lVar15 = *plStack_1a0;
      do {
        uVar20 = 0;
        do {
          if (*plStack_1a0 != lVar15) {
            _objc_enumerationMutation(uVar11);
          }
          uVar16 = *(ulong *)(lStack_1a8 + uVar20 * 8);
          uVar5 = uVar16;
          func_0x00010c078d00();
          if ((uVar5 & 1) == 0) {
            puVar2 = PTR_PTR_1126bc778;
            _objc_opt_new(PTR_PTR_1126bc778);
            puVar18 = PTR_PTR_1126b0cd8;
            func_0x00010c2923e0(uVar16);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bdc35c0(puVar18);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar16);
            puVar17 = puVar18;
            func_0x00010bfe5d80(puVar18);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1a99c0(puVar2);
            _objc_release(puVar17);
            puVar17 = puVar3;
            func_0x00010c0ca4c0(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar17;
            func_0x00010c0ca760();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120();
            _objc_release(puVar6);
            _objc_release(puVar17);
            uVar11 = uStack_1f8;
            _objc_release(puVar18);
            _objc_release(puVar2);
          }
          uVar20 = uVar20 + 1;
        } while (uVar14 != uVar20);
        uVar14 = uVar11;
        func_0x00010bf52a60();
      } while (uVar14 != 0);
    }
    _objc_release(uVar11);
    puVar18 = puVar3;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    uVar14 = (ulong)uStack_27c;
    puVar2 = puStack_278;
    param_1 = lStack_268;
    param_2 = uStack_270;
  }
  _objc_release(uVar11);
  _objc_release(uVar11);
  puVar3 = puStack_260;
  if (puVar18 != (undefined *)0x0) {
    func_0x00010befa120(puStack_260);
  }
  if ((uVar14 & 1) == 0) {
    puVar17 = (undefined *)0x0;
  }
  else {
    puVar6 = PTR_PTR_1126be758;
    _objc_opt_new();
    puVar7 = PTR_PTR_1126be7c0;
    _objc_opt_new(PTR_PTR_1126be7c0);
    func_0x00010c18edc0();
    func_0x00010c212a60(puVar6);
    puVar17 = puVar6;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(puVar6);
    if (puVar17 != (undefined *)0x0) {
      func_0x00010befa120(puVar3);
    }
  }
  puVar6 = puVar3;
  func_0x00010bf51e00();
  _objc_release(puVar17);
  _objc_release(puVar18);
  _objc_release(puVar3);
  puVar3 = puStack_250;
  puVar18 = puStack_258;
  uVar12 = 2;
  puVar13 = puStack_258;
  func_0x00010c002be0();
  puVar17 = puStack_248;
  puVar7 = puVar2;
  func_0x00010c2b66c0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = (ulong)(uVar19 & 1);
  puVar8 = puVar7;
  func_0x00010c2a9800();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar2);
  _objc_release(puVar6);
  _objc_release(uStack_1f8);
  _objc_release(puVar18);
  _objc_release(puVar3);
  _objc_release(puStack_208);
  _objc_release(puVar17);
  _objc_release(puStack_200);
  _objc_release(puStack_240);
  _objc_release(puStack_238);
  _objc_release(puStack_210);
  _objc_release(lStack_230);
  _objc_release(puStack_228);
  _objc_release(puStack_220);
  _objc_release(uStack_218);
  _objc_release(param_2);
  lVar15 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    plVar10 = &lStack_2c0;
    puStack_2a0 = puVar17;
    pcStack_288 = FUN_1057d7d64;
    puStack_2b0 = puVar9;
    puStack_2a8 = puVar6;
    lStack_298 = param_1;
    puStack_290 = &stack0xfffffffffffffff0;
    _objc_retain(uVar11);
    _objc_retain(uVar12);
    _objc_retain(puVar13);
    puStack_2b8 = PTR_PTR_1126ea558;
    lStack_2c0 = lVar15;
    _objc_msgSendSuper2(&lStack_2c0,PTR_s_init_1125d9248);
    if (plVar10 != (long *)0x0) {
      _objc_retain(uVar11);
      uVar4 = *(undefined8 *)((long)plVar10 + 8);
      *(ulong *)((long)plVar10 + 8) = uVar11;
      _objc_release(uVar4);
      _objc_retain(uVar12);
      uVar4 = *(undefined8 *)((long)plVar10 + 0x10);
      *(undefined8 *)((long)plVar10 + 0x10) = uVar12;
      _objc_release(uVar4);
      _objc_retain(puVar13);
      uVar4 = *(undefined8 *)((long)plVar10 + 0x18);
      *(undefined **)((long)plVar10 + 0x18) = puVar13;
      _objc_release(uVar4);
    }
    _objc_release(puVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    return (undefined1 *)plVar10;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return puVar9;
}



/* Entry: 1057d7d64; end: 1057d7e2f; -[SCTextSender initWithCoreMessageSender:graphene:nativeSessionManager:] */

undefined1 *
FUN_1057d7d64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126ea558;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1057d7e30; end: 1057d7f5b; -[SCTextSender sendAttributedTextMessage:additionalMetadata:conversations:massSnapRecipients:platformAnalytics:completionHandler:] */

void FUN_1057d7e30(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
                  long param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if ((lVar1 != 0) &&
     ((lVar1 = param_5, func_0x00010bf529e0(), lVar1 != 0 ||
      (lVar1 = param_6, func_0x00010bf529e0(), lVar1 != 0)))) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    FUN_1057d73b0(param_3,param_4,param_7,*(undefined8 *)(param_1 + 0x10));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15c280(uVar2);
    _objc_release(lVar1);
    _objc_release(uVar2);
  }
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



/* Entry: 1057d7f5c; end: 1057d805b; -[SCTextSender sendURLTextMessage:additionalTextMessage:conversations:platformAnalytics:completionHandler:] */

void FUN_1057d7f5c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c04e820();
  _objc_release(param_3);
  puVar2 = puVar1;
  FUN_1057d73b0(puVar1,0,param_6,*(undefined8 *)(param_1 + 0x10));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  func_0x00010c15c260(param_1);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1057d805c; end: 1057d827f; -[SCTextSender sendMessageWithContent:additionalTextMessage:conversations:massSnapRecipients:completionQueue:completionHandler:] */

void FUN_1057d805c(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,undefined8 param_7,undefined1 *param_8)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined1 *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  ppuVar4 = &puStack_b0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  if ((param_3 != 0) &&
     ((lVar1 = param_5, func_0x00010bf529e0(), lVar1 != 0 ||
      (lVar1 = param_6, func_0x00010bf529e0(), lVar1 != 0)))) {
    puVar2 = param_8;
    _objc_retainBlock(param_8);
    lVar1 = param_4;
    func_0x00010c26c420();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c08fa60();
    _objc_release(lVar1);
    if (lVar3 != 0) {
      _objc_initWeak(auStack_68,param_1);
      puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a8 = 0xc2000000;
      pcStack_a0 = FUN_1057d8280;
      puStack_98 = &UNK_1108946a0;
      _objc_copyWeak(auStack_70,auStack_68);
      _objc_retain(param_4);
      lStack_90 = param_4;
      _objc_retain(param_5);
      lStack_88 = param_5;
      _objc_retain(param_6);
      lStack_80 = param_6;
      _objc_retain(param_8);
      puStack_78 = param_8;
      func_0x00010bf51e00(&puStack_b0);
      _objc_release(puVar2);
      _objc_release(puStack_78);
      _objc_release(lStack_80);
      _objc_release(lStack_88);
      _objc_release(lStack_90);
      _objc_destroyWeak(auStack_70);
      _objc_destroyWeak(auStack_68);
      puVar2 = (undefined1 *)ppuVar4;
    }
    uVar5 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15c280();
    _objc_release(uVar5);
    _objc_release(puVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1057d8280; end: 1057d835b;  */

void FUN_1057d8280(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_2 == 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c26c420(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010befd240(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c0fe1c0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c15b620(lVar1);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
    }
    lVar5 = *(long *)(param_1 + 0x38);
    if (lVar5 != 0) {
      (**(code **)(lVar5 + 0x10))(lVar5,param_2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1057d835c; end: 1057d894b; -[SCTextSender submitEditWithConversationId:messageId:attributedText:mentions:chatCommands:scale:completionHandler:] */

void FUN_1057d835c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5,long param_6,long param_7,undefined8 param_8,undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puStack_1f8;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  long lStack_198;
  long lStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  lVar12 = param_4;
  func_0x00010c08fa60();
  if (((lVar12 != 0) && (lVar12 = param_5, func_0x00010c08fa60(), lVar12 != 0)) &&
     (lVar12 = param_6, func_0x00010c08fa60(), lVar12 != 0)) {
    puVar1 = PTR_PTR_1126b0cd8;
    func_0x00010bdc35c0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126be7f8;
    _objc_alloc();
    func_0x00010c0b4ca0(param_5);
    func_0x00010c005160();
    _objc_retain(param_6);
    _objc_retain(param_7);
    _objc_retain(param_8);
    puVar3 = PTR_PTR_1126be7c8;
    _objc_alloc_init();
    lVar12 = param_6;
    func_0x00010c25cd40(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(puVar3);
    _objc_release(lVar12);
    lVar12 = param_6;
    func_0x000106a361c8(param_1,param_6,param_7,param_8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b820(puVar3);
    puVar4 = PTR_PTR_1126ba668;
    _objc_alloc_init();
    func_0x00010c212f20();
    puVar5 = PTR_PTR_1126be7b8;
    _objc_opt_new();
    lVar6 = param_7;
    func_0x00010bf529e0();
    if (lVar6 != 0) {
      puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      _objc_retainAutoreleasedReturnValue();
      lStack_148 = 0;
      uStack_150 = 0;
      uStack_138 = 0;
      plStack_140 = (long *)0x0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      _objc_retain(param_7);
      lVar6 = param_7;
      func_0x00010bf52a60();
      if (lVar6 != 0) {
        lVar14 = *plStack_140;
        do {
          lVar13 = 0;
          do {
            if (*plStack_140 != lVar14) {
              _objc_enumerationMutation(param_7);
            }
            puVar15 = *(undefined **)(lStack_148 + lVar13 * 8);
            puVar8 = puVar15;
            func_0x00010c2923e0();
            _objc_retainAutoreleasedReturnValue();
            puVar9 = puVar8;
            func_0x00010c08fa60();
            if (puVar9 == (undefined *)0x0) {
LAB_1057d864c:
              _objc_release(puVar8);
            }
            else {
              puVar9 = puVar15;
              func_0x00010c078d00();
              _objc_release(puVar8);
              puVar8 = PTR_PTR_1126b0cd8;
              if (((ulong)puVar9 & 1) == 0) {
                func_0x00010c2923e0(puVar15);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bdc35c0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar15);
                if (puVar8 != (undefined *)0x0) {
                  puVar9 = PTR_PTR_1126bc778;
                  _objc_opt_new(PTR_PTR_1126bc778);
                  puVar15 = puVar8;
                  func_0x00010bfe5d80(puVar8);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c1a99c0(puVar9);
                  _objc_release(puVar15);
                  func_0x00010befa120(puVar7);
                  _objc_release(puVar9);
                }
                goto LAB_1057d864c;
              }
            }
            lVar13 = lVar13 + 1;
          } while (lVar6 != lVar13);
          lVar6 = param_7;
          func_0x00010bf52a60();
        } while (lVar6 != 0);
      }
      _objc_release(param_7);
      func_0x00010c1c6a60(puVar5);
      _objc_release(puVar7);
    }
    puStack_1f8 = PTR_PTR_1126be7f0;
    _objc_alloc();
    puVar7 = puVar4;
    func_0x00010bf63640(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar5;
    func_0x00010c0ca760();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010bf529e0();
    if (puVar9 == (undefined *)0x0) {
      func_0x00010c002c80();
    }
    else {
      puVar9 = puVar5;
      func_0x00010bf63640(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c002c80();
      _objc_release(puVar9);
    }
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(lVar12);
    _objc_release(puVar3);
    _objc_release(param_8);
    _objc_release(param_7);
    _objc_release(param_6);
    puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_180 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_178 = 0xc2000000;
    pcStack_170 = FUN_1057d894c;
    puStack_168 = &UNK_11084aaa8;
    puStack_160 = puVar2;
    _objc_retain(param_9);
    uStack_158 = param_9;
    _objc_retain(puVar2);
    ppuVar10 = &puStack_180;
    _objc_retainBlock();
    puStack_1b8 = puVar3;
    uStack_1b0 = 0xc2000000;
    uStack_1a8 = 0x1057d8964;
    puStack_1a0 = &UNK_110875d70;
    _objc_retain(param_5);
    lStack_198 = param_5;
    _objc_retain(param_4);
    lStack_190 = param_4;
    _objc_retain(param_9);
    ppuVar11 = &puStack_1b8;
    uStack_188 = param_9;
    _objc_retainBlock(ppuVar11);
    puVar3 = PTR_PTR_1126b2730;
    _objc_alloc(PTR_PTR_1126b2730);
    func_0x00010c04f4c0();
    func_0x00010c0d58a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8c400();
    _objc_release(param_2);
    _objc_release(puVar3);
    _objc_release(ppuVar11);
    _objc_release(uStack_188);
    _objc_release(lStack_190);
    _objc_release(lStack_198);
    _objc_release(ppuVar10);
    _objc_release(uStack_158);
    _objc_release(puStack_160);
    _objc_release(puVar2);
    _objc_release(puStack_1f8);
    _objc_release(puVar1);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  lVar12 = *(long *)(param_4 + 0x28);
  if (lVar12 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001057d895c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar12 + 0x10))(lVar12,0);
    return;
  }
  return;
}



/* Entry: 1057d894c; end: 1057d897b;  */

void FUN_1057d894c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001057d895c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    return;
  }
  return;
}



/* Entry: 1057d897c; end: 1057d8a3b; -[SCTextSender chatTextMessageForAdditionalText:additionalMetadata:platformAnalytics:] */

void FUN_1057d897c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    param_1 = 0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
    func_0x00010c04e820();
    func_0x00010bf37860(param_1,param_2,puVar2,param_4,param_5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1057d8a3c; end: 1057d8b17; -[SCTextSender chatTextMessageForAdditionalAttributedText:additionalMetadata:platformAnalytics:] */

void FUN_1057d8a3c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c25cd40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126be800;
    _objc_alloc(PTR_PTR_1126be800);
    uVar3 = param_5;
    func_0x000108604db4(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c051920(puVar4,param_2,param_3,param_4,uVar3);
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1057d8b18; end: 1057d8b5f; -[SCTextSender nativeConversationManager] */

void FUN_1057d8b18(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfc7e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1057d8b60; end: 1057d8b9b; -[SCTextSender .cxx_destruct] */

void FUN_1057d8b60(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1057d8b9c; end: 1057d8caf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057d8b9c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar7 = PTR_PTR_1126be808;
    _objc_alloc(PTR_PTR_1126be808);
    lVar1 = param_1 + _DAT_112729d7c;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bf523a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + _DAT_112729d80;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010bfcdfa0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1 + _DAT_112729d84;
    _objc_loadWeakRetained(lVar5);
    lVar6 = lVar5;
    func_0x00010c0d5c60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c005dc0(puVar7,param_2,lVar2,lVar4,lVar6);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1057d8cb0; end: 1057d8d0f; -[SCTextSendingServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057d8cb0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112729d74,0);
  _objc_destroyWeak(param_1 + _DAT_112729d84);
  _objc_destroyWeak(param_1 + _DAT_112729d80);
  _objc_destroyWeak(param_1 + _DAT_112729d7c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112729d78);
  return;
}



/* Entry: 1057d8d10; end: 1057d8d53;  */

undefined8 FUN_1057d8d10(ulong param_1)

{
  if (param_1 < 8) {
    return *(undefined8 *)(&UNK_10ddbe758 + param_1 * 8);
  }
  return 2;
}



/* Entry: 1057d8d54; end: 1057d8e0f;  */

void FUN_1057d8d54(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lStack_38;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110e03918;
  }
  else {
    lStack_38 = 0;
    puVar2 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,param_1,0,&lStack_38
                       );
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 == (undefined *)0x0 || lStack_38 != 0) {
      ppuVar3 = &PTR____CFConstantStringClassReference_110e03918;
    }
    else {
      ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
      func_0x00010c008340();
    }
    _objc_release(puVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 1057d8e10; end: 1057d8f97;  */

void FUN_1057d8e10(ulong param_1)

{
  undefined8 unaff_x19;
  
  if (param_1 < 0xd) {
    unaff_x19 = *(undefined8 *)(&PTR_PTR_1108b32e8)[param_1];
    _objc_retain(unaff_x19);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x19);
  return;
}



/* Entry: 1057d8f98; end: 1057d91cf; -[SCChatDisplayReadyLogger initWithCurrentPageObservable:conversationUpdaterEventPublisher:messagingExperimentService:userTrackedLogger:performerProvider:grapheneCounters:grapheneTimers:] */

undefined1 *
FUN_1057d8f98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126ea560;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    uVar2 = param_7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0f9920();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar3;
    _objc_release(uVar5);
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar4;
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x88);
    *(undefined **)((long)puVar1 + 0x88) = puVar4;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0xb0);
    *(undefined8 *)((long)puVar1 + 0xb0) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0xb8);
    *(undefined8 *)((long)puVar1 + 0xb8) = param_9;
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x98);
    *(undefined **)((long)puVar1 + 0x98) = puVar4;
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0xa0);
    *(undefined **)((long)puVar1 + 0xa0) = puVar4;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf80380();
    *(char *)((long)puVar1 + 0xa9) = (char)uVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1057d91d0; end: 1057d926f; -[SCChatDisplayReadyLogger beginLoggingFlowForChatIdentifier:source:] */

void FUN_1057d91d0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  _CACurrentMediaTime();
  uVar1 = *(undefined8 *)(param_2 + 8);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1057d9270;
  puStack_58 = &UNK_110844fe0;
  lStack_50 = param_2;
  uStack_48 = param_4;
  uStack_40 = param_1;
  uStack_38 = param_5;
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1,param_3,&puStack_70);
  _objc_release(uStack_48);
  _objc_release(param_4);
  return;
}



/* Entry: 1057d9270; end: 1057d9283;  */

void FUN_1057d9270(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd3290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             PTR_s__beginChatDisplayReadyLoggingFlo_112552640,*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 1057d9284; end: 1057d92df; -[SCChatDisplayReadyLogger setIsViewControlledCached:] */

void FUN_1057d9284(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined1 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_1057d92e0;
  puStack_28 = &UNK_110845ce0;
  lStack_20 = param_1;
  uStack_18 = param_3;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 8),param_2,&puStack_40);
  return;
}



/* Entry: 1057d92e0; end: 1057d92ef;  */

void FUN_1057d92e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea4f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__setIsViewControllerCached__112586d80,
             *(undefined1 *)(param_1 + 0x28));
  return;
}



/* Entry: 1057d92f0; end: 1057d935b; -[SCChatDisplayReadyLogger recordChatDisplayReadyStep:] */

void FUN_1057d92f0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _CACurrentMediaTime();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1057d935c;
  puStack_40 = &UNK_110858dc0;
  lStack_38 = param_2;
  uStack_30 = param_4;
  uStack_28 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_2 + 8),param_3,&puStack_58);
  return;
}



/* Entry: 1057d935c; end: 1057d936b;  */

void FUN_1057d935c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be87590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             PTR_s__recordChatDisplayReadyStep_step_11257f700,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1057d936c; end: 1057d93d7; -[SCChatDisplayReadyLogger completeFlowWithFailure:] */

void FUN_1057d936c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _CACurrentMediaTime();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1057d93d8;
  puStack_40 = &UNK_110858dc0;
  lStack_38 = param_2;
  uStack_30 = param_4;
  uStack_28 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_2 + 8),param_3,&puStack_58);
  return;
}



/* Entry: 1057d93d8; end: 1057d93e7;  */

void FUN_1057d93d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde2cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             PTR_s__completeFlowWithFailureReason_e_1125564d0,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1057d93e8; end: 1057d94af; -[SCChatDisplayReadyLogger onConversationEnteredWithConversationId:chatIdentifier:isGroup:] */

void FUN_1057d93e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1057d94b0;
  puStack_68 = &UNK_110858b70;
  lStack_60 = param_1;
  uStack_58 = param_3;
  uStack_50 = param_4;
  uStack_48 = param_5;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_80);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1057d94b0; end: 1057d94c3;  */

void FUN_1057d94b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be687b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__onConversationEnteredWithConver_112577b88,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined1 *)(param_1 + 0x38));
  return;
}



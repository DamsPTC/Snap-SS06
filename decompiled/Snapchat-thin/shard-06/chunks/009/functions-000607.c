/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104fa27f0; end: 104fa2847; -[SCRealTimeScanCodeTrigger end] */

void FUN_104fa27f0(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_104fa2848;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x40),param_2,&puStack_38);
  return;
}



/* Entry: 104fa2848; end: 104fa2853;  */

void FUN_104fa2848(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be09fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__endWithCompletion__112560188,0);
  return;
}



/* Entry: 104fa2854; end: 104fa2887; -[SCRealTimeScanCodeTrigger _createOperationQueue] */

void FUN_104fa2854(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  _objc_alloc_init(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  func_0x00010c1c3080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104fa2888; end: 104fa2a8b; -[SCRealTimeScanCodeTrigger _didReceiveScannableData:] */

void FUN_104fa2888(long param_1,undefined8 param_2,undefined **param_3,undefined *param_4)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined *unaff_x21;
  undefined *unaff_x22;
  undefined *unaff_x23;
  undefined8 unaff_x24;
  undefined **unaff_x25;
  undefined8 unaff_x26;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined8 uStack_d0;
  undefined **ppuStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined **ppuStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar8 = param_3;
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x48);
  func_0x00010c0eb9e0();
  if (lVar1 == 0) {
    if ((*(byte *)(param_1 + 0x60) & 1) == 0) {
      uVar2 = *(ulong *)(param_1 + 0x70);
      func_0x00010bf78d20();
      if ((uVar2 & 1) == 0) {
        unaff_x21 = PTR_PTR_1126b30f0;
        _objc_alloc();
        uVar3 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010c269d40(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1424c0();
        func_0x00010c0419a0();
        _objc_release(uVar3);
        unaff_x22 = PTR_PTR_1126b3108;
        _objc_alloc();
        unaff_x26 = *(undefined8 *)(param_1 + 0x18);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = unaff_x26;
        func_0x00010bf3f0c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c01bda0();
        _objc_release(uVar3);
        _objc_release(unaff_x26);
        unaff_x23 = PTR_PTR_1126b3110;
        _objc_alloc();
        func_0x00010bfff500();
        func_0x00010bef7d60();
        unaff_x24 = *(undefined8 *)(param_1 + 0x48);
        unaff_x25 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_78 = unaff_x21;
        puStack_70 = unaff_x23;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        param_4 = (undefined *)0x0;
        ppuVar8 = unaff_x25;
        func_0x00010befa3e0(unaff_x24);
        _objc_release(unaff_x25);
        uVar3 = *(undefined8 *)(param_1 + 0x70);
        *(undefined **)(param_1 + 0x70) = unaff_x23;
        _objc_release(uVar3);
        _objc_release(unaff_x22);
        _objc_release(unaff_x21);
      }
    }
  }
  else {
    ppuVar8 = &PTR____CFConstantStringClassReference_110dbe6b8;
    func_0x00010c0ab9e0(PTR_PTR_1126b30e8);
  }
  ppuVar4 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_88 = FUN_104fa2a8c;
  uStack_d0 = unaff_x26;
  ppuStack_c8 = unaff_x25;
  uStack_c0 = unaff_x24;
  puStack_b8 = unaff_x23;
  puStack_b0 = unaff_x22;
  puStack_a8 = unaff_x21;
  lStack_a0 = param_1;
  ppuStack_98 = param_3;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar8);
  _objc_retain(param_4);
  if (ppuVar8 == (undefined **)0x0) {
    func_0x00010be09a20(ppuVar4);
  }
  else {
    func_0x00010be09fa0(ppuVar4);
    _objc_retain(param_4);
    puVar5 = ppuVar4[0xb];
    ppuVar4[0xb] = param_4;
    _objc_release(puVar5);
    _objc_retain(ppuVar8);
    puVar5 = ppuVar4[0xd];
    ppuVar4[0xd] = (undefined *)ppuVar8;
    _objc_release(puVar5);
    puVar5 = ppuVar4[1];
    func_0x00010c269d40(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c0660();
    _objc_release(puVar5);
    _objc_initWeak(auStack_d8,ppuVar4);
    ppuVar4 = ppuVar8;
    func_0x00010bf63f60(ppuVar8);
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar4;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_e0,auStack_d8);
    ppuVar7 = ppuVar6;
    func_0x00010c25ff60(ppuVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(ppuVar7);
    _objc_release(ppuVar6);
    _objc_release(ppuVar4);
    _objc_destroyWeak(auStack_e0);
    _objc_destroyWeak(auStack_d8);
  }
  _objc_release(param_4);
  _objc_release(ppuVar8);
  return;
}



/* Entry: 104fa2a8c; end: 104fa2c37; -[SCRealTimeScanCodeTrigger _beginWithContext:resultSubject:] */

void FUN_104fa2a8c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == 0) {
    func_0x00010be09a20(param_1);
  }
  else {
    func_0x00010be09fa0(param_1);
    _objc_retain(param_4);
    uVar1 = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x58) = param_4;
    _objc_release(uVar1);
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x68);
    *(long *)(param_1 + 0x68) = param_3;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c0660();
    _objc_release(uVar1);
    _objc_initWeak(auStack_58,param_1);
    lVar2 = param_3;
    func_0x00010bf63f60(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,auStack_58);
    lVar4 = lVar3;
    func_0x00010c25ff60(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104fa2c38; end: 104fa2c7f;  */

void FUN_104fa2c38(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdff960();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104fa2c80; end: 104fa2cb3; -[SCRealTimeScanCodeTrigger _endForNilContextWithSubject:] */

void FUN_104fa2c80(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf436e0(param_3);
  *(undefined1 *)(param_1 + 0x60) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010be09fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__endWithCompletion__112560188,0);
  return;
}



/* Entry: 104fa2cb4; end: 104fa2d63; -[SCRealTimeScanCodeTrigger _endWithCompletion:] */

void FUN_104fa2cb4(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010bf2dd20(*(undefined8 *)(param_1 + 0x48));
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x50));
  if ((*(byte *)(param_1 + 0x60) & 1) == 0) {
    uVar1 = *(ulong *)(param_1 + 0x70);
    func_0x00010bf78d20();
    if ((uVar1 & 1) == 0) {
      func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x58));
    }
  }
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c0660();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
  _objc_release(uVar2);
  *(undefined1 *)(param_1 + 0x60) = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = 0;
  _objc_release(uVar2);
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104fa2d64; end: 104fa2e17; -[SCRealTimeScanCodeTrigger .cxx_destruct] */

void FUN_104fa2d64(long param_1)

{
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



/* Entry: 104fa2e18; end: 104fa30cb; -[SCRealTimeScanCodeTriggerEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fa2e18(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
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
  undefined8 uVar16;
  long lVar17;
  
  lVar17 = (long)_DAT_112718824;
  lVar1 = param_1 + lVar17;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c121c20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c121ce0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if ((int)lVar4 != 0) {
    puVar5 = PTR_PTR_1126b3118;
    _objc_alloc();
    lVar1 = param_1 + _DAT_112718828;
    _objc_loadWeakRetained();
    lVar6 = lVar1;
    func_0x00010c0d0060();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1 + _DAT_11271882c;
    _objc_loadWeakRetained();
    lVar7 = lVar2;
    func_0x00010bfe5f40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + _DAT_112718830;
    _objc_loadWeakRetained();
    lVar8 = lVar3;
    func_0x00010c0f98e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1 + lVar17;
    _objc_loadWeakRetained();
    lVar9 = lVar4;
    func_0x00010c121c20();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_1 + lVar17;
    _objc_loadWeakRetained();
    lVar11 = lVar10;
    func_0x00010bf68480();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = param_1 + lVar17;
    _objc_loadWeakRetained(lVar17);
    lVar12 = lVar17;
    func_0x00010c0e1500();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = param_1 + _DAT_112718834;
    _objc_loadWeakRetained();
    lVar14 = lVar13;
    func_0x00010c121d20();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar14;
    func_0x00010c0b3760();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02c7a0(puVar5,param_2,lVar6,lVar7,lVar8,lVar9,lVar11,lVar12,lVar15);
    uVar16 = *(undefined8 *)(param_1 + _DAT_112718838);
    *(undefined **)(param_1 + _DAT_112718838) = puVar5;
    _objc_release(uVar16);
    _objc_release(lVar15);
    _objc_release(lVar14);
    _objc_release(lVar13);
    _objc_release(lVar12);
    _objc_release(lVar17);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar4);
    _objc_release(lVar8);
    _objc_release(lVar3);
    _objc_release(lVar7);
    _objc_release(lVar2);
    _objc_release(lVar6);
    _objc_release(lVar1);
    param_1 = param_1 + _DAT_11271883c;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c1018e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c125b60();
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 104fa30cc; end: 104fa3123; -[SCRealTimeScanCodeTriggerEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fa30cc(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf940a0(*(undefined8 *)(param_1 + _DAT_112718838));
  puStack_28 = PTR_PTR_1126e5620;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104fa3124; end: 104fa31a7; -[SCRealTimeScanCodeTriggerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fa3124(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112718840);
  _objc_destroyWeak(param_1 + _DAT_112718830);
  _objc_destroyWeak(param_1 + _DAT_11271882c);
  _objc_destroyWeak(param_1 + _DAT_112718834);
  _objc_destroyWeak(param_1 + _DAT_112718824);
  _objc_destroyWeak(param_1 + _DAT_112718828);
  _objc_destroyWeak(param_1 + _DAT_11271883c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112718838,0);
  return;
}



/* Entry: 104fa31a8; end: 104fa32fb; +[SCRealTimeScanImageProcessingHelpers imageFromPixelBuffer:rotate:] */

void FUN_104fa31a8(undefined8 param_1,undefined8 param_2,long param_3,int param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  if (param_3 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    if (param_4 == 0) {
      if (lRam00000001136b9170 != -1) {
        func_0x00010002a2fc(0x1136b9170,&PTR___NSConcreteGlobalBlock_11085fd98);
      }
      lVar1 = param_3;
      _CVPixelBufferGetWidth(param_3);
      _CVPixelBufferGetHeight(param_3);
      puVar2 = PTR__OBJC_CLASS___CIImage_1126b3128;
      _objc_alloc(PTR__OBJC_CLASS___CIImage_1126b3128);
      func_0x00010bffa600();
      uVar3 = uRam00000001136b9168;
      _CGColorSpaceCreateDeviceRGB();
      func_0x00010bf54e40(0,0,(double)lVar1,(double)param_3,uVar3);
      puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe9260(0x3ff0000000000000,PTR__OBJC_CLASS___UIImage_1126aea68);
      _objc_retainAutoreleasedReturnValue();
      _CGImageRelease(uVar3);
    }
    else {
      puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe96e0(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,param_3,1,0);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      func_0x00010bfe8a60();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104fa32fc; end: 104fa332f;  */

void FUN_104fa32fc(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___CIContext_1126b3120;
  func_0x00010bf4e080();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001136b9168;
  puRam00000001136b9168 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104fa3330; end: 104fa3453; +[SCRealTimeScanLoggingHelpers reportOdinPerfForModel:withLogger:] */

void FUN_104fa3330(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (((param_3 != 0) && (param_4 != 0)) &&
     (lVar1 = param_3, func_0x00010c262f40(), (int)lVar1 != 0)) {
    lVar1 = param_3;
    func_0x00010bfcaa40(param_3,param_2,&PTR____CFConstantStringClassReference_110dbe738);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    func_0x00010c1d0640();
    lVar3 = param_3;
    func_0x00010bfc95e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    func_0x00010c1d0640();
    lVar5 = param_4;
    func_0x00010c269d40(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c257ac0();
    _objc_release(lVar5);
    _objc_release(puVar4);
    _objc_release(lVar3);
    _objc_release(puVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104fa3454; end: 104fa34eb; +[SCRealTimeScanLoggingHelpers logOperationSkippedWithPrefix:] */

void FUN_104fa3454(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b3130;
  _objc_retain(param_3);
  func_0x00010c22bc20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dbe7b8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bf06d40(puVar1,param_2,puVar2,0x20000000000);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104fa34ec; end: 104fa363b; +[SCRealTimeScanLoggingHelpers logMetricsWithPrefix:latency:snapcodeConfidence:qrCodeConfidence:] */

void FUN_104fa34ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b3130;
  _objc_retain(param_3);
  func_0x00010c22bc20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf4b8a0();
  if ((int)puVar2 != 0) {
    func_0x00010bf3b860(puVar1,param_2,0x20000000000);
  }
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dbe7d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06d40(puVar1,param_2,puVar2,0x20000000000);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dbe7f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06d40(puVar1,param_2,puVar2,0x20000000000);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dbe818);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bf06d40(puVar1,param_2,puVar2,0x20000000000);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104fa363c; end: 104fa36c3; -[SCRealTimeScanBaseOperation init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104fa363c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e5628;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + (long)_DAT_112718844) = 0;
    *(undefined1 *)((long)puVar1 + (long)_DAT_112718848) = 0;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11271884c) = 0;
    puVar2 = PTR__OBJC_CLASS___NSRecursiveLock_1126b3138;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112718850);
    *(undefined **)((long)puVar1 + (long)_DAT_112718850) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104fa36c4; end: 104fa377b; -[SCRealTimeScanBaseOperation start] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fa36c4(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = param_1;
  func_0x00010c06e0e0();
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bfafa30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finishOperation_1125c9830);
    return;
  }
  uVar1 = param_1;
  func_0x00010c07bc40();
  if ((((int)uVar1 != 0) && (uVar1 = param_1, func_0x00010c072300(), (uVar1 & 1) == 0)) &&
     (uVar1 = param_1, func_0x00010c072f20(), (uVar1 & 1) == 0)) {
    lVar2 = (long)_DAT_112718850;
    func_0x00010c09faa0(*(undefined8 *)(param_1 + lVar2));
    func_0x00010c2a5c20(param_1);
    *(undefined1 *)(param_1 + (long)_DAT_112718844) = 1;
    func_0x00010bf73800(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c280b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + lVar2),PTR_s_unlock_11267dcf8);
    return;
  }
  return;
}



/* Entry: 104fa377c; end: 104fa37c7; -[SCRealTimeScanBaseOperation isExecuting] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104fa377c(long param_1)

{
  undefined1 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112718850;
  func_0x00010c09faa0(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined1 *)(param_1 + _DAT_112718844);
  func_0x00010c280b40(*(undefined8 *)(param_1 + lVar2));
  return uVar1;
}



/* Entry: 104fa37c8; end: 104fa3813; -[SCRealTimeScanBaseOperation isFinished] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104fa37c8(long param_1)

{
  undefined1 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112718850;
  func_0x00010c09faa0(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined1 *)(param_1 + _DAT_112718848);
  func_0x00010c280b40(*(undefined8 *)(param_1 + lVar2));
  return uVar1;
}



/* Entry: 104fa3814; end: 104fa385f; -[SCRealTimeScanBaseOperation isCancelled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104fa3814(long param_1)

{
  undefined1 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112718850;
  func_0x00010c09faa0(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined1 *)(param_1 + _DAT_11271884c);
  func_0x00010c280b40(*(undefined8 *)(param_1 + lVar2));
  return uVar1;
}



/* Entry: 104fa3860; end: 104fa3917; -[SCRealTimeScanBaseOperation finishOperation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fa3860(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = param_1;
  func_0x00010c072f20();
  if ((uVar1 & 1) != 0) {
    return;
  }
  lVar2 = (long)_DAT_112718850;
  func_0x00010c09faa0(*(undefined8 *)(param_1 + lVar2));
  lVar3 = (long)_DAT_112718844;
  if (*(char *)(param_1 + lVar3) == '\x01') {
    func_0x00010c2a5c20(param_1);
    *(undefined1 *)(param_1 + lVar3) = 0;
    func_0x00010bf73800(param_1);
  }
  func_0x00010c2a5c20(param_1);
  *(undefined1 *)(param_1 + (long)_DAT_112718848) = 1;
  func_0x00010bf73800(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c280b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + lVar2),PTR_s_unlock_11267dcf8);
  return;
}



/* Entry: 104fa3918; end: 104fa39d7; -[SCRealTimeScanBaseOperation cancel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fa3918(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uStack_40;
  undefined *puStack_38;
  
  uVar1 = param_1;
  func_0x00010c06e0e0();
  if ((uVar1 & 1) == 0) {
    puStack_38 = PTR_PTR_1126e5628;
    uStack_40 = param_1;
    _objc_msgSendSuper2(&uStack_40,PTR_s_cancel_1125a9090);
    lVar2 = (long)_DAT_112718850;
    func_0x00010c09faa0(*(undefined8 *)(param_1 + lVar2));
    func_0x00010c2a5c20(param_1);
    *(undefined1 *)(param_1 + (long)_DAT_112718844) = 0;
    func_0x00010bf73800(param_1);
    func_0x00010c2a5c20(param_1);
    *(undefined1 *)(param_1 + (long)_DAT_112718848) = 1;
    func_0x00010bf73800(param_1);
    func_0x00010c280b40(*(undefined8 *)(param_1 + lVar2));
  }
  return;
}



/* Entry: 104fa39d8; end: 104fa39eb; -[SCRealTimeScanBaseOperation .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fa39d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112718850,0);
  return;
}



/* Entry: 104fa39ec; end: 104fa3aab;  */

undefined1 * FUN_104fa39ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 uVar9;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_38;
  undefined **ppuStack_30;
  long lStack_28;
  
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  ppuStack_30 = &PTR____CFConstantStringClassReference_110dbe938;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_30,&uStack_38,1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = &PTR____CFConstantStringClassReference_110dbe918;
  uVar7 = 0xffffffffffffffff;
  puVar8 = puVar1;
  func_0x00010bf99240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return puVar2;
  }
  ___stack_chk_fail();
  ppuVar3 = &puStack_b0;
  _objc_retain(ppuVar6);
  _objc_retain(uVar7);
  _objc_retain(puVar8);
  _objc_retain(in_x5);
  _objc_retain(in_x6);
  _objc_retain(in_x7);
  puStack_a8 = PTR_PTR_1126e5630;
  puStack_b0 = puVar1;
  _objc_msgSendSuper2(&puStack_b0,PTR_s_init_1125d9248);
  if (ppuVar3 != (undefined **)0x0) {
    _objc_retain(ppuVar6);
    uVar4 = *(undefined8 *)((long)ppuVar3 + 8);
    *(undefined ***)((long)ppuVar3 + 8) = ppuVar6;
    _objc_release(uVar4);
    _objc_retain(puVar8);
    uVar4 = *(undefined8 *)((long)ppuVar3 + 0x10);
    *(undefined **)((long)ppuVar3 + 0x10) = puVar8;
    _objc_release(uVar4);
    _objc_retain(in_x5);
    uVar4 = *(undefined8 *)((long)ppuVar3 + 0x28);
    *(undefined8 *)((long)ppuVar3 + 0x28) = in_x5;
    _objc_release(uVar4);
    _objc_retain(in_x6);
    uVar4 = *(undefined8 *)((long)ppuVar3 + 0x18);
    *(undefined8 *)((long)ppuVar3 + 0x18) = in_x6;
    _objc_release(uVar4);
    _objc_retain(in_x7);
    uVar4 = *(undefined8 *)((long)ppuVar3 + 0x20);
    *(undefined8 *)((long)ppuVar3 + 0x20) = in_x7;
    _objc_release(uVar4);
    uVar4 = uVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0f9920();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)((long)ppuVar3 + 0x38);
    *(undefined8 *)((long)ppuVar3 + 0x38) = uVar5;
    _objc_release(uVar9);
    _objc_release(uVar4);
    uVar4 = uVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0f9920();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)((long)ppuVar3 + 0x40);
    *(undefined8 *)((long)ppuVar3 + 0x40) = uVar5;
    _objc_release(uVar9);
    _objc_release(uVar4);
  }
  _objc_release(in_x7);
  _objc_release(in_x6);
  _objc_release(in_x5);
  _objc_release(puVar8);
  _objc_release(uVar7);
  _objc_release(ppuVar6);
  return (undefined1 *)ppuVar3;
}



/* Entry: 104fa3aac; end: 104fa3c8b; -[SCRealTimeScanCodeDecoder initWithIdentifierProvider:performerProvider:modelProvider:modelKey:deepScanConfiguration:realTimeScanLogger:] */

undefined1 *
FUN_104fa3aac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126e5630;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_8;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0f9920();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0f9920();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar3;
    _objc_release(uVar4);
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



/* Entry: 104fa3c8c; end: 104fa4213; -[SCRealTimeScanCodeDecoder decodeForCodeTypes:fromImage:withId:] */

void FUN_104fa3c8c(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined1 auStack_258 [8];
  undefined *puStack_250;
  undefined8 uStack_248;
  code *pcStack_240;
  undefined *puStack_238;
  long lStack_230;
  long lStack_228;
  undefined8 *puStack_220;
  undefined1 auStack_218 [8];
  undefined8 uStack_210;
  long lStack_208;
  long *plStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined1 auStack_1c8 [8];
  undefined8 uStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 uStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  undefined1 uStack_148;
  undefined8 uStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  undefined1 uStack_128;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined1 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar5 = param_3;
  func_0x00010bf529e0();
  puVar4 = PTR_PTR_1126ae558;
  if (((param_5 == 0) || (param_4 == 0)) || (lVar5 == 0)) {
    FUN_104fa39ec();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe9c80(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
  }
  else {
    puVar2 = PTR_PTR_1126ae560;
    _objc_alloc_init();
    puStack_118 = &uStack_120;
    uStack_120 = 0;
    uStack_110 = 0x2020000000;
    uStack_108 = 0;
    puStack_138 = &uStack_140;
    uStack_140 = 0;
    uStack_130 = 0x2020000000;
    uStack_128 = 1;
    puStack_158 = &uStack_160;
    uStack_160 = 0;
    uStack_150 = 0x2020000000;
    uStack_148 = 1;
    puStack_188 = &uStack_190;
    uStack_190 = 0;
    uStack_180 = 0x3032000000;
    pcStack_178 = FUN_104fa4214;
    uStack_170 = 0x104fa4224;
    uStack_168 = 0;
    puStack_1b8 = &uStack_1c0;
    uStack_1c0 = 0;
    uStack_1b0 = 0x3032000000;
    pcStack_1a8 = FUN_104fa4214;
    uStack_1a0 = 0x104fa4224;
    uStack_198 = 0;
    _objc_initWeak(auStack_1c8,param_1);
    uStack_1e8 = 0;
    uStack_1f0 = 0;
    uStack_1d8 = 0;
    uStack_1e0 = 0;
    lStack_208 = 0;
    uStack_210 = 0;
    uStack_1f8 = 0;
    plStack_200 = (long *)0x0;
    _objc_retain(param_3);
    lVar5 = param_3;
    func_0x00010bf52a60();
    if (lVar5 != 0) {
      lVar7 = *plStack_200;
      do {
        lVar8 = 0;
        do {
          if (*plStack_200 != lVar7) {
            _objc_enumerationMutation(param_3);
          }
          iVar1 = (int)*(undefined8 *)(lStack_208 + lVar8 * 8);
          func_0x00010c282760();
          if (iVar1 == 1) {
            *(undefined1 *)(puStack_158 + 3) = 0;
            puVar4 = PTR_PTR_1126ae560;
            _objc_alloc_init();
            uVar6 = puStack_188[5];
            puStack_188[5] = puVar4;
            _objc_release(uVar6);
            uVar6 = *(undefined8 *)(param_1 + 0x38);
            puStack_250 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_248 = 0xc2000000;
            pcStack_240 = FUN_104fa422c;
            puStack_238 = &UNK_110843420;
            _objc_copyWeak(auStack_218,auStack_1c8);
            _objc_retain(param_4);
            lStack_230 = param_4;
            _objc_retain(param_5);
            puStack_220 = &uStack_190;
            lStack_228 = param_5;
            func_0x00010c0f7fc0(uVar6);
            _objc_release(lStack_228);
            lVar3 = lStack_230;
            puVar9 = auStack_218;
LAB_104fa3f4c:
            _objc_release(lVar3);
            _objc_destroyWeak(puVar9);
          }
          else if (iVar1 == 2) {
            *(undefined1 *)(puStack_138 + 3) = 0;
            puVar4 = PTR_PTR_1126ae560;
            _objc_alloc_init();
            uVar6 = puStack_1b8[5];
            puStack_1b8[5] = puVar4;
            _objc_release(uVar6);
            uVar6 = *(undefined8 *)(param_1 + 0x38);
            _objc_copyWeak(auStack_258,auStack_1c8);
            _objc_retain(param_4);
            _objc_retain(param_5);
            func_0x00010c0f7fc0(uVar6);
            _objc_release(param_5);
            lVar3 = param_4;
            puVar9 = auStack_258;
            goto LAB_104fa3f4c;
          }
          lVar8 = lVar8 + 1;
        } while (lVar5 != lVar8);
        lVar5 = param_3;
        func_0x00010bf52a60();
      } while (lVar5 != 0);
    }
    _objc_release(param_3);
    uVar6 = puStack_188[5];
    func_0x00010bfbc3e0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar2);
    func_0x00010c297260(uVar6);
    _objc_release(uVar6);
    uVar6 = puStack_1b8[5];
    func_0x00010bfbc3e0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar2);
    func_0x00010c297260(uVar6);
    _objc_release(uVar6);
    puVar4 = puVar2;
    func_0x00010bfbc3e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_1c8);
    __Block_object_dispose(&uStack_1c0,8);
    _objc_release(uStack_198);
    __Block_object_dispose(&uStack_190,8);
    _objc_release(uStack_168);
    __Block_object_dispose(&uStack_160,8);
    __Block_object_dispose(&uStack_140,8);
    __Block_object_dispose(&uStack_120,8);
    _objc_release(puVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_1c8);
  __Block_object_dispose(&uStack_1c0,8);
  __Block_object_dispose(&uStack_190,8);
  __Block_object_dispose(&uStack_160,8);
  __Block_object_dispose(&uStack_140,8);
  lVar5 = 8;
  __Block_object_dispose(&uStack_120);
  __Unwind_Resume();
  *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x28) = 0;
  return;
}



/* Entry: 104fa4214; end: 104fa422b;  */

void FUN_104fa4214(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104fa422c; end: 104fa42ab;  */

void FUN_104fa422c(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be308c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104fa42ac; end: 104fa4403;  */

void FUN_104fa42ac(long param_1,long param_2,undefined8 param_3)

{
  _objc_retain(param_2);
  _objc_retain(param_3);
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) & 1) == 0) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 1;
    if (param_2 == 0) {
      if (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) != '\x01') goto LAB_104fa433c;
      func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x20));
    }
    else {
      func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x20));
    }
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
  }
LAB_104fa433c:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104fa4404; end: 104fa4607; -[SCRealTimeScanCodeDecoder _handleSnapcodeDecodeWithImage:imageId:snapcodeResultPromise:] */

void FUN_104fa4404(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [8];
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c121dc0();
  _objc_release(uVar1);
  lVar2 = param_1;
  func_0x00010bdf88c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c121cc0();
  _objc_release(uVar1);
  _objc_initWeak(auStack_58,param_1);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_104fa4608;
  puStack_70 = &UNK_11084ceb8;
  _objc_copyWeak(auStack_68,auStack_58);
  pcVar4 = "APPSTORE";
  uStack_60 = lVar3 != 0;
  func_0x000100162d98("APPSTORE",&puStack_88);
  if (lVar3 == 0) {
    FUN_104fa39ec();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(param_5);
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c121d40();
    _objc_release(uVar1);
    pcVar4 = PTR_PTR_1126b3140;
    func_0x00010c245060(PTR_PTR_1126b3140);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43d60(param_5);
  }
  _objc_release(pcVar4);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(lVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104fa4608; end: 104fa4643;  */

void FUN_104fa4608(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be52300();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104fa4644; end: 104fa485f; -[SCRealTimeScanCodeDecoder _handleQRCodeDecodeWithImage:imageId:qrCodeResultPromise:] */

void FUN_104fa4644(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [8];
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c121dc0();
  _objc_release(uVar2);
  lVar3 = param_1;
  func_0x00010bdf8780();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    bVar1 = false;
  }
  else {
    lVar4 = lVar3;
    func_0x00010c265b00();
    bVar1 = lVar4 == 0x10;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c121cc0();
  _objc_release(uVar2);
  _objc_initWeak(auStack_58,param_1);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_104fa4860;
  puStack_70 = &UNK_11084ceb8;
  _objc_copyWeak(auStack_68,auStack_58);
  pcVar5 = "APPSTORE";
  uStack_60 = bVar1;
  func_0x000100162d98("APPSTORE",&puStack_88);
  if (bVar1 == false) {
    FUN_104fa39ec();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(param_5);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c121d40();
    _objc_release(uVar2);
    pcVar5 = PTR_PTR_1126b3140;
    func_0x00010bf15c20(PTR_PTR_1126b3140);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43d60(param_5);
  }
  _objc_release(pcVar5);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(lVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104fa4860; end: 104fa489b;  */

void FUN_104fa4860(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be52300();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104fa489c; end: 104fa4b47; -[SCRealTimeScanCodeDecoder _decodeBarcodeFromImage:withId:modelKey:] */

void FUN_104fa489c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
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
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010c0d0160();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar4;
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar3;
  func_0x00010bf04b00();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010bf15b60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar3);
  _objc_release(lVar4);
  _objc_release(lVar1);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_70 = param_3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar8;
  func_0x00010bf6f920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  if (lVar4 == 0) {
    uVar9 = 0;
  }
  else {
    puStack_98 = &uStack_a0;
    uStack_a0 = 0;
    uStack_90 = 0x3032000000;
    pcStack_88 = FUN_104fa4214;
    uStack_80 = 0x104fa4224;
    uStack_78 = 0;
    puStack_c8 = &uStack_d0;
    uStack_d0 = 0;
    uStack_c0 = 0x3032000000;
    pcStack_b8 = FUN_104fa4214;
    uStack_b0 = 0x104fa4224;
    uStack_a8 = 0;
    func_0x00010c0bf0a0(lVar4);
    lVar3 = puStack_98[5];
    if ((lVar3 == 0) || (func_0x00010c265b00(), lVar3 == 0)) {
      uVar9 = 0;
    }
    else {
      uVar9 = puStack_98[5];
    }
    _objc_retain(uVar9);
    __Block_object_dispose(&uStack_d0,8);
    _objc_release(uStack_a8);
    __Block_object_dispose(&uStack_a0,8);
    _objc_release(uStack_78);
  }
  _objc_release(lVar4);
  _objc_release(lVar8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar9);
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_d0,8);
  lVar3 = 8;
  __Block_object_dispose(&uStack_a0);
  __Unwind_Resume();
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = param_3;
  if (lVar3 != 0) {
    lVar4 = *(long *)(param_3 + 0x20);
    _objc_opt_class();
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = *(long *)(*(long *)(param_3 + 0x28) + 8);
    uVar9 = *(undefined8 *)(lVar8 + 0x28);
    *(undefined **)(lVar8 + 0x28) = puVar2;
    _objc_release(uVar9);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(lVar4 + 0x20) + 8);
  uVar9 = *(undefined8 *)(lVar4 + 0x28);
  *(long *)(lVar4 + 0x28) = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar9);
  return;
}



/* Entry: 104fa4b48; end: 104fa4c6f;  */

void FUN_104fa4b48(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  if (param_2 != 0) {
    lVar1 = *(long *)(param_1 + 0x20);
    _objc_opt_class();
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    uVar6 = *(undefined8 *)(lVar7 + 0x28);
    *(undefined **)(lVar7 + 0x28) = puVar4;
    _objc_release(uVar6);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = *(long *)(*(long *)(lVar1 + 0x20) + 8);
  uVar6 = *(undefined8 *)(lVar1 + 0x28);
  *(long *)(lVar1 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return;
}



/* Entry: 104fa4c70; end: 104fa4caf;  */

void FUN_104fa4c70(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104fa4cb0; end: 104fa4f0b; -[SCRealTimeScanCodeDecoder _decodeSnapcodeWithDeepScan:] */

void FUN_104fa4cb0(double param_1,long param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  long lVar13;
  double dVar14;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  ulong uStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  long lStack_88;
  ulong uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar12 = param_4;
  _objc_retain(param_4);
  if (param_4 == 0) {
    lVar13 = 0;
  }
  else {
    _CACurrentMediaTime();
    uVar1 = *(ulong *)(param_2 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(ulong *)(param_2 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0cff80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    lStack_88 = param_2;
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf3f1e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar1;
    uVar12 = uVar3;
    func_0x00010c0d0160();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c0ec5e0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010bf04b00();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010bfe70c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar9 == 0) ||
       (uVar3 = uVar9,
       _objc_opt_respondsToSelector(uVar9,PTR_s_runDeepScanWithBatchImages_image_11262e408),
       (uVar3 & 1) == 0)) {
      lVar13 = 0;
    }
    else {
      puVar10 = PTR_PTR_1126b30e0;
      _objc_alloc(PTR_PTR_1126b30e0);
      dVar14 = 0.0;
      func_0x00010bff3e00();
      puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_80 = param_4;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar9;
      func_0x00010c1427a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar11);
      _CACurrentMediaTime();
      *(double *)(lStack_88 + 0x48) = (dVar14 - param_1) * 1000.0;
      lVar13 = lStack_88;
      uVar12 = uVar3;
      func_0x00010be81420();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      _objc_release(puVar10);
    }
    _objc_release(uVar9);
  }
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    ___stack_chk_fail();
    pcStack_98 = FUN_104fa4f0c;
    lStack_b0 = lVar13;
    uStack_a8 = param_4;
    puStack_a0 = &stack0xfffffffffffffff0;
    _objc_retain(uVar12);
    if (uVar12 == 0) {
      lVar13 = 0;
    }
    else {
      puStack_d8 = &uStack_e0;
      uStack_e0 = 0;
      uStack_d0 = 0x3032000000;
      pcStack_c8 = FUN_104fa4214;
      uStack_c0 = 0x104fa4224;
      uStack_b8 = 0;
      func_0x00010c0bf0a0(uVar12);
      lVar13 = puStack_d8[5];
      _objc_retain(lVar13);
      __Block_object_dispose(&uStack_e0,8);
      _objc_release(uStack_b8);
    }
    _objc_release(uVar12);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar13);
  return;
}



/* Entry: 104fa4f0c; end: 104fa4ffb; -[SCRealTimeScanCodeDecoder _processIdentifiersOptional:] */

void FUN_104fa4f0c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    puStack_48 = &uStack_50;
    uStack_50 = 0;
    uStack_40 = 0x3032000000;
    pcStack_38 = FUN_104fa4214;
    uStack_30 = 0x104fa4224;
    uStack_28 = 0;
    func_0x00010c0bf0a0(param_3);
    uVar1 = puStack_48[5];
    _objc_retain(uVar1);
    __Block_object_dispose(&uStack_50,8);
    _objc_release(uStack_28);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104fa4ffc; end: 104fa5033;  */

void FUN_104fa4ffc(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_2);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 104fa5034; end: 104fa509b;  */

void FUN_104fa5034(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    lVar1 = param_2;
    func_0x00010bfb2660();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    uVar2 = *(undefined8 *)(lVar3 + 0x28);
    *(long *)(lVar3 + 0x28) = lVar1;
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104fa509c; end: 104fa512f;  */

void FUN_104fa509c(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c294d60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) == 0) {
    _objc_retain(param_2);
    uVar1 = param_2;
  }
  else {
    uVar1 = 0;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104fa5130; end: 104fa5243; -[SCRealTimeScanCodeDecoder _logDecoderSuccessForCodeType:successs:] */

void FUN_104fa5130(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_3);
  ppuVar1 = &PTR____CFConstantStringClassReference_110dbe978;
  if (param_4 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dbe998;
  }
  func_0x00010c14de00(puVar2,param_2,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b3130;
  func_0x00010c22bc20(PTR_PTR_1126b3130);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06d40();
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dbe8b8);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dbe9b8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bf06d40(puVar3,param_2,puVar4,0x20000000000);
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104fa5244; end: 104fa52bb; -[SCRealTimeScanCodeDecoder .cxx_destruct] */

void FUN_104fa5244(long param_1)

{
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



/* Entry: 104fa52bc; end: 104fa5443; -[SCScanFromLensHTTPSUpdateProvider initWithUserNetworkServices:endpointConfiguration:snapTokenProvider:] */

undefined1 *
FUN_104fa52bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126e5638;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104fa5444; end: 104fa549b; -[SCScanFromLensHTTPSUpdateProvider performAnalysisForImage:contexts:isFrontFacing:lensId:] */

void FUN_104fa5444(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010beb19e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be72700(param_1,param_2,uVar1);
  uVar2 = uVar1;
  func_0x00010bfe5ea0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104fa549c; end: 104fa54ff; -[SCScanFromLensHTTPSUpdateProvider performAnalysisForLensTexture:contexts:lensId:] */

void FUN_104fa549c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010beb1a00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be72700(param_1,param_2,uVar1);
  uVar2 = uVar1;
  func_0x00010bfe5ea0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104fa5500; end: 104fa5527; -[SCScanFromLensHTTPSUpdateProvider scanFromLensNetworkUpdateObservable] */

void FUN_104fa5500(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104fa5528; end: 104fa562f; -[SCScanFromLensHTTPSUpdateProvider _setupTimeoutForSFLRequest:] */

void FUN_104fa5528(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = param_3;
  func_0x00010bfe5ea0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar2);
  _objc_release(uVar1);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fe0(0x4014000000000000,uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 104fa5630; end: 104fa5737;  */

void FUN_104fa5630(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0x28);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfe5ea0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900(uVar3,param_2,uVar2);
    _objc_release(uVar2);
    if ((int)uVar3 != 0) {
      uVar3 = *(undefined8 *)(lVar1 + 0x28);
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bfe5ea0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12d360(uVar3,param_2,uVar2);
      _objc_release(uVar2);
      uVar3 = *(undefined8 *)(lVar1 + 0x30);
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bfe5ea0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0(uVar3,param_2,uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf2dba0();
      _objc_release(uVar3);
      _objc_release(uVar2);
      uVar3 = *(undefined8 *)(lVar1 + 0x30);
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bfe5ea0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12d3e0(uVar3,param_2,uVar2);
      _objc_release(uVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104fa5738; end: 104fa593b; -[SCScanFromLensHTTPSUpdateProvider _handleSnapTokenSuccessWithRequest:token:] */

void FUN_104fa5738(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  iVar6 = (int)*(undefined8 *)(param_1 + 0x28);
  uVar1 = param_3;
  func_0x00010bfe5ea0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900();
  _objc_release(uVar1);
  if (iVar6 != 0) {
    lVar2 = param_1;
    func_0x00010be91080(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_68,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bfe4c00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c11de00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(param_3);
    uVar5 = uVar1;
    func_0x00010c25f600(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar1);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    uVar1 = param_3;
    func_0x00010bfe5ea0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar3);
    _objc_release(uVar1);
    _objc_release(uVar5);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
    _objc_release(lVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104fa593c; end: 104fa5aab;  */

/* WARNING: Removing unreachable block (ram,0x000104fa5a10) */

void FUN_104fa593c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_6 == 0) {
    puVar1 = PTR_PTR_1126b3148;
    _objc_alloc();
    func_0x00010c008360();
    lVar4 = 0;
    _objc_retain(0);
    if ((param_4 == 0) || (puVar1 == (undefined *)0x0)) {
      puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                          &PTR____CFConstantStringClassReference_110dbe9d8,0xffffffffffffffff,0);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = (undefined *)(param_1 + 0x28);
      _objc_loadWeakRetained(puVar3);
      func_0x00010be29440();
    }
    else {
      puVar2 = (undefined *)(param_1 + 0x28);
      _objc_loadWeakRetained(puVar2);
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      puVar3 = puVar1;
      func_0x00010c085fc0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be31600(puVar2,param_2,uVar5,puVar3);
    }
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  else {
    lVar4 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar4);
    func_0x00010be29440();
  }
  _objc_release(lVar4);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 104fa5aac; end: 104fa5b9f; -[SCScanFromLensHTTPSUpdateProvider _handleSuccessForSFLRequest:jsonResponse:] */

void FUN_104fa5aac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfe5ea0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d360(uVar4,param_2,uVar1);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b3150;
  func_0x00010c261960(PTR_PTR_1126b3150,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar3 = PTR_PTR_1126b3158;
  _objc_alloc(PTR_PTR_1126b3158);
  uVar1 = param_3;
  func_0x00010bfe5ea0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c03fb80(puVar3,param_2,puVar2,uVar1);
  _objc_release(uVar1);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20),param_2,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104fa5ba0; end: 104fa5c93; -[SCScanFromLensHTTPSUpdateProvider _handleFailureForSFLRequest:error:] */

void FUN_104fa5ba0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfe5ea0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d360(uVar4,param_2,uVar1);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b3150;
  func_0x00010bfa01c0(PTR_PTR_1126b3150,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar3 = PTR_PTR_1126b3158;
  _objc_alloc(PTR_PTR_1126b3158);
  uVar1 = param_3;
  func_0x00010bfe5ea0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c03fb80(puVar3,param_2,puVar2,uVar1);
  _objc_release(uVar1);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20),param_2,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104fa5c94; end: 104fa5d3b; -[SCScanFromLensHTTPSUpdateProvider _sflRequestForImage:contexts:isFrontFacing:lensId:] */

void FUN_104fa5c94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  _objc_retain(param_6);
  _objc_retain(param_4);
  _UIImageJPEGRepresentation(0x3fe8000000000000,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beb1a00(param_1,param_2,param_3,param_4,param_5,param_6,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104fa5d3c; end: 104fa5e57; -[SCScanFromLensHTTPSUpdateProvider _sflRequestForImageData:contexts:isFrontFacing:lensId:isLensTexture:] */

void FUN_104fa5d3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b3160;
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  puVar2 = puVar1;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a99c0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c1a9f00(puVar1,param_2,param_3);
  _objc_release(param_3);
  func_0x00010c1b15e0(puVar1,param_2,param_5);
  uVar3 = param_4;
  func_0x00010bf00560(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar4 = uVar3;
  func_0x00010c0d3c80(uVar3);
  func_0x00010c1fd820(puVar1,param_2,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  func_0x00010c1bbd60(puVar1,param_2,param_6);
  _objc_release(param_6);
  func_0x00010c1b2340(puVar1,param_2,param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104fa5e58; end: 104fa5ee7; -[SCScanFromLensHTTPSUpdateProvider _performScanFromLensRequest:] */

void FUN_104fa5e58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_104fa5ee8;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 104fa5ee8; end: 104fa60cb;  */

void FUN_104fa5ee8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  func_0x00010beb0900(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_initWeak(auStack_78,*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c243820();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
  func_0x00010c11de00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_104fa60cc;
  puStack_90 = &UNK_110859c28;
  _objc_copyWeak(auStack_80,auStack_78);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar5);
  uStack_88 = uVar5;
  _objc_copyWeak(auStack_b0,auStack_78);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar5);
  func_0x00010bfa48e0(uVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar5);
  _objc_destroyWeak(auStack_b0);
  _objc_release(uStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  return;
}



/* Entry: 104fa60cc; end: 104fa6173;  */

void FUN_104fa60cc(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be307a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104fa6174; end: 104fa646b; -[SCScanFromLensHTTPSUpdateProvider _requestForSFLRequest:token:] */

void FUN_104fa6174(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  uVar13 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar13;
  func_0x00010bf16280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar13);
  puVar2 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
  _objc_alloc();
  func_0x00010c04e820();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar3 = puVar2;
  func_0x00010c0f5800();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar4,param_2,&PTR____CFConstantStringClassReference_110dae518);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d9820(puVar2,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar4 = puVar2;
  func_0x00010bdc2b80(puVar2);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_98 = &PTR____CFConstantStringClassReference_110dbea38;
  ppuStack_90 = &PTR____CFConstantStringClassReference_110dbea58;
  ppuStack_80 = &PTR____CFConstantStringClassReference_110dbea18;
  ppuStack_78 = &PTR____CFConstantStringClassReference_110dbea18;
  ppuStack_88 = &PTR____CFConstantStringClassReference_110dad998;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_70 = param_4;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_80,&ppuStack_98,3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c1421a0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c08fa60();
  _objc_release(lVar6);
  _objc_release(lVar5);
  puVar10 = puVar3;
  if (lVar7 != 0) {
    puVar8 = puVar3;
    func_0x00010c0d3c80(puVar3);
    uVar9 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar9;
    func_0x00010c1421a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar8,param_2,uVar13,&PTR____CFConstantStringClassReference_110dadcb8);
    _objc_release(uVar13);
    _objc_release(uVar9);
    puVar10 = puVar8;
    func_0x00010bf51e00(puVar8);
    _objc_release(puVar3);
    _objc_release(puVar8);
  }
  uVar11 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfe4d40(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar11;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar12 = uVar13;
  func_0x00010bf225e0(uVar13,param_2,1,puVar4,puVar10,uVar9,&PTR___NSConcreteGlobalBlock_11085fee8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  _objc_release(uVar13);
  _objc_release(uVar11);
  _objc_release(puVar10);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar12);
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 104fa646c; end: 104fa646f;  */

void FUN_104fa646c(void)

{
  return;
}



/* Entry: 104fa6470; end: 104fa64db; -[SCScanFromLensHTTPSUpdateProvider .cxx_destruct] */

void FUN_104fa6470(long param_1)

{
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



/* Entry: 104fa64dc; end: 104fa65ab; -[SCSFLSessionMetadata initWithURIRequest:callback:scanToken:] */

undefined1 *
FUN_104fa64dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e5640;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
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



/* Entry: 104fa65ac; end: 104fa65b3; -[SCSFLSessionMetadata uriRequest] */

undefined8 FUN_104fa65ac(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104fa65b4; end: 104fa65bb; -[SCSFLSessionMetadata callback] */

undefined8 FUN_104fa65b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104fa65bc; end: 104fa65c3; -[SCSFLSessionMetadata scanToken] */

undefined8 FUN_104fa65bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104fa65c4; end: 104fa65ff; -[SCSFLSessionMetadata .cxx_destruct] */

void FUN_104fa65c4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104fa6600; end: 104fa683f; -[SCScanFromLensURIRouteHandler initWithWorkflow:ftue:selectedLensIdObservable:] */

undefined8 *
FUN_104fa6600(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_68 = PTR_PTR_1126e5648;
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
    *(undefined1 *)(puVar1 + 6) = 0;
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar2 = puVar1[5];
    puVar1[5] = puVar3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_78,puVar1);
    uVar4 = puVar1[1];
    func_0x00010c14ec60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_104fa6840;
    puStack_88 = &UNK_11085ff08;
    _objc_copyWeak(auStack_80,auStack_78);
    uVar2 = uVar4;
    func_0x00010c25ff60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar2);
    _objc_release(uVar4);
    _objc_copyWeak(auStack_a8,auStack_78);
    uVar2 = param_5;
    func_0x00010c25ff60(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_a8);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104fa6840; end: 104fa68cf;  */

void FUN_104fa6840(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdffb80();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104fa68d0; end: 104fa6b53; -[SCScanFromLensURIRouteHandler handleWithRequest:completion:] */

void FUN_104fa68d0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  int iVar7;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) goto LAB_104fa6b2c;
  iVar7 = (int)*(undefined8 *)(param_1 + 0x38);
  lVar1 = param_3;
  func_0x00010c094540(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4bb00();
  _objc_release(lVar1);
  if (iVar7 == 0) goto LAB_104fa6b2c;
  lVar1 = param_3;
  func_0x00010c135e00();
  lVar5 = param_3;
  if (lVar1 == 1) {
    lVar1 = param_3;
    func_0x00010c28f280();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0f5800();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0720c0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if ((int)lVar3 != 0) {
      *(undefined1 *)(param_1 + 0x30) = 1;
      puVar4 = PTR_PTR_1126b1ce0;
      _objc_alloc(PTR_PTR_1126b1ce0);
      func_0x00010c28f280(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      _objc_opt_new(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      goto LAB_104fa6af4;
    }
    lVar1 = param_3;
    func_0x00010c28f280();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0f5800();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0720c0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if ((int)lVar3 == 0) goto LAB_104fa6aac;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_104fa6b54;
    puStack_60 = &UNK_11084a9e8;
    lStack_58 = param_1;
    _objc_retain(param_3);
    lStack_50 = param_3;
    _objc_retain(param_4);
    lStack_48 = param_4;
    func_0x000100162d98("APPSTORE",&puStack_78);
    _objc_release(lStack_48);
    lVar5 = lStack_50;
  }
  else {
LAB_104fa6aac:
    puVar4 = PTR_PTR_1126b1ce0;
    _objc_alloc(PTR_PTR_1126b1ce0);
    func_0x00010c28f280(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_opt_new(PTR__OBJC_CLASS___NSDictionary_1126ae670);
LAB_104fa6af4:
    func_0x00010c059e80(puVar4);
    (**(code **)(param_4 + 0x10))(param_4,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar6);
  }
  _objc_release(lVar5);
LAB_104fa6b2c:
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104fa6b54; end: 104fa6b63;  */

void FUN_104fa6b54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be259b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__handleAnalyzeFrameWithRequest_c_112567008,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 104fa6b64; end: 104fa6b6f; -[SCScanFromLensURIRouteHandler reset] */

void FUN_104fa6b64(long param_1)

{
  *(undefined1 *)(param_1 + 0x30) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bfb4b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_forceEndAllActiveSessions_1125cac68);
  return;
}



/* Entry: 104fa6b70; end: 104fa6e23; -[SCScanFromLensURIRouteHandler _handleAnalyzeFrameWithRequest:completion:] */

void FUN_104fa6b70(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x10);
    func_0x00010bfd9a60();
    uVar4 = *(ulong *)(param_1 + 0x10);
    if ((uVar3 & 1) == 0) {
      func_0x00010c10d480();
    }
    else {
      func_0x00010bfd6bc0();
      if ((uVar4 & 1) != 0) goto LAB_104fa6bb0;
      func_0x00010c10e760(*(undefined8 *)(param_1 + 0x10));
    }
    lVar5 = param_3;
    func_0x00010bf98ee0(param_3);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_4 + 0x10))(param_4,lVar5);
    goto LAB_104fa6df4;
  }
LAB_104fa6bb0:
  lVar5 = param_1;
  func_0x00010bde86c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010bf1e9c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar6 = (undefined *)0x0;
  if (lVar1 == 0) {
LAB_104fa6d64:
    uVar8 = *(undefined8 *)(param_1 + 8);
    puVar7 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf028c0(uVar8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = PTR_PTR_1126b3168;
    _objc_alloc();
    lVar1 = param_3;
    func_0x00010bf1e9c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c008360();
    _objc_retain(0);
    _objc_release(lVar1);
    if (puVar2 == (undefined *)0x0) {
      _objc_release(0);
      _objc_release(0);
      puVar6 = (undefined *)0x0;
      goto LAB_104fa6d64;
    }
    puVar6 = puVar2;
    func_0x00010bfd7d40();
    if ((int)puVar6 == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar6 = puVar2;
      func_0x00010bfe6ac0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010bf64c80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
    }
    puVar6 = puVar2;
    func_0x00010c094540(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    if (puVar7 == (undefined *)0x0) goto LAB_104fa6d64;
    uVar8 = *(undefined8 *)(param_1 + 8);
    puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf028a0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  _objc_release(puVar7);
  puVar2 = PTR_PTR_1126b3170;
  _objc_alloc(PTR_PTR_1126b3170);
  func_0x00010c057800();
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x20));
  _objc_release(puVar2);
  _objc_release(uVar8);
  _objc_release(puVar6);
LAB_104fa6df4:
  _objc_release(lVar5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104fa6e24; end: 104fa6fff; -[SCScanFromLensURIRouteHandler _contextsForRequest:] */

void FUN_104fa6e24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  long lVar13;
  undefined **ppuVar14;
  long lVar15;
  undefined *puVar16;
  long lVar17;
  undefined *puVar18;
  undefined *puStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  puVar1 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
  ppuVar11 = &puStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c28f280(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf44780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  puStack_130 = (undefined *)0x0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puVar3 = puVar1;
  func_0x00010c11d4e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf52a60();
  if (puVar4 != (undefined *)0x0) {
    lVar17 = *plStack_120;
    do {
      puVar18 = (undefined *)0x0;
      do {
        if (*plStack_120 != lVar17) {
          _objc_enumerationMutation(puVar3);
        }
        puVar16 = *(undefined **)(lStack_128 + (long)puVar18 * 8);
        puVar5 = puVar16;
        func_0x00010c0d4f60();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        func_0x00010c0720c0();
        _objc_release(puVar5);
        if ((int)puVar6 != 0) {
          func_0x00010c296d80();
          _objc_retainAutoreleasedReturnValue();
          ppuVar11 = &PTR____CFConstantStringClassReference_110db3ed8;
          puVar4 = puVar16;
          func_0x00010bf44740();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar2);
          _objc_release(puVar16);
          puVar2 = puVar4;
          goto LAB_104fa6fb0;
        }
        puVar18 = puVar18 + 1;
      } while (puVar4 != puVar18);
      puVar4 = puVar3;
      ppuVar11 = &puStack_130;
      func_0x00010bf52a60();
    } while (puVar4 != (undefined *)0x0);
  }
LAB_104fa6fb0:
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(ppuVar11);
  ppuVar7 = ppuVar11;
  func_0x00010c160600();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = ppuVar7;
  func_0x00010bf52a60();
  lVar17 = lRam0000000000000000;
  do {
    if (ppuVar8 == (undefined **)0x0) {
      _objc_release(ppuVar7);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
        return;
      }
      ___stack_chk_fail();
      func_0x00010bf87dc0();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = param_2;
      func_0x00010c0720c0();
      _objc_release(param_2);
      if ((int)uVar12 != 0) {
        uVar12 = *(undefined8 *)(ppuVar11[4] + 0x18);
        *(undefined8 *)(ppuVar11[4] + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(uVar12);
        return;
      }
      return;
    }
    ppuVar14 = (undefined **)0x0;
    do {
      if (lRam0000000000000000 != lVar17) {
        _objc_enumerationMutation(ppuVar7);
      }
      uVar9 = *(undefined8 *)(puVar1 + 0x18);
      func_0x00010c14f500();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar9;
      func_0x00010c071ae0();
      _objc_release(uVar9);
      if ((int)uVar12 == 0) {
        lVar15 = *(long *)(puVar1 + 0x20);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar15 != 0) {
          lVar15 = *(long *)(puVar1 + 0x20);
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c12d3e0(*(undefined8 *)(puVar1 + 0x20));
          goto joined_r0x000104fa718c;
        }
      }
      else {
        lVar15 = *(long *)(puVar1 + 0x18);
        _objc_retain(lVar15);
        ppuVar10 = ppuVar11;
        func_0x00010c13b720(ppuVar11);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0c0800();
        _objc_release(ppuVar10);
joined_r0x000104fa718c:
        if (lVar15 != 0) {
          ppuVar10 = ppuVar11;
          func_0x00010c13b720(ppuVar11);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(lVar15);
          _objc_retain(lVar15);
          func_0x00010c0c0800(ppuVar10);
          _objc_release(ppuVar10);
          _objc_release(lVar15);
          _objc_release(lVar15);
          _objc_release(lVar15);
        }
      }
      ppuVar14 = (undefined **)((long)ppuVar14 + 1);
    } while (ppuVar8 != ppuVar14);
    ppuVar8 = ppuVar7;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 104fa7000; end: 104fa7293; -[SCScanFromLensURIRouteHandler _didReceiveUpdate:] */

void FUN_104fa7000(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c160600();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar3 == 0) {
      _objc_release(lVar2);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
        return;
      }
      ___stack_chk_fail();
      func_0x00010bf87dc0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = param_2;
      func_0x00010c0720c0();
      _objc_release(param_2);
      if ((int)uVar6 != 0) {
        uVar6 = *(undefined8 *)(*(long *)(param_3 + 0x20) + 0x18);
        *(undefined8 *)(*(long *)(param_3 + 0x20) + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(uVar6);
        return;
      }
      return;
    }
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      uVar4 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c14f500();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar4;
      func_0x00010c071ae0();
      _objc_release(uVar4);
      if ((int)uVar6 == 0) {
        lVar9 = *(long *)(param_1 + 0x20);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar9 != 0) {
          lVar9 = *(long *)(param_1 + 0x20);
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x20));
          goto joined_r0x000104fa718c;
        }
      }
      else {
        lVar9 = *(long *)(param_1 + 0x18);
        _objc_retain(lVar9);
        lVar5 = param_3;
        func_0x00010c13b720(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0c0800();
        _objc_release(lVar5);
joined_r0x000104fa718c:
        if (lVar9 != 0) {
          lVar5 = param_3;
          func_0x00010c13b720(param_3);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(lVar9);
          _objc_retain(lVar9);
          func_0x00010c0c0800(lVar5);
          _objc_release(lVar5);
          _objc_release(lVar9);
          _objc_release(lVar9);
          _objc_release(lVar9);
        }
      }
      lVar8 = lVar8 + 1;
    } while (lVar3 != lVar8);
    lVar3 = lVar2;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 104fa7294; end: 104fa7307;  */

void FUN_104fa7294(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf87dc0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  if ((int)uVar1 != 0) {
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
    *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 104fa7308; end: 104fa74d7;  */

void FUN_104fa7308(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bf285c0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b1ce0;
  _objc_alloc(PTR_PTR_1126b1ce0);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c28f2e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c28f280();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_opt_new(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  func_0x00010c059e80(puVar1);
  _objc_release(param_2);
  (**(code **)(lVar5 + 0x10))(lVar5,puVar1);
  _objc_release(puVar1);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 104fa74d8; end: 104fa7533; -[SCScanFromLensURIRouteHandler _didReceiveSelectedLensId:] */

void FUN_104fa74d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  *(undefined1 *)(param_1 + 0x30) = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010c1bbd60(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104fa7534; end: 104fa7593; -[SCScanFromLensURIRouteHandler .cxx_destruct] */

void FUN_104fa7534(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104fa7594; end: 104fa78d3; -[SCScanFromLensURIRouteHandlerV2EntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fa7594(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  
  puVar1 = PTR_PTR_1126b3178;
  _objc_alloc();
  lVar2 = param_1 + _DAT_1127188c0;
  _objc_loadWeakRetained(lVar2);
  lVar3 = param_1 + _DAT_1127188c4;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010bf95e00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_1127188c8;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010c273160();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_1 + _DAT_1127188e4;
    _objc_loadWeakRetained(lVar11);
  }
  lVar7 = lVar11;
  func_0x00010bf299a0(lVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05c780(puVar1,param_2,lVar2,lVar4,lVar6,lVar7);
  _objc_release(lVar7);
  _objc_release(lVar11);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar8 = PTR_PTR_1126b3180;
  _objc_alloc(PTR_PTR_1126b3180);
  lVar2 = param_1 + _DAT_1127188cc;
  _objc_loadWeakRetained(lVar2);
  lVar5 = lVar2;
  func_0x00010c14ec20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + _DAT_1127188d0;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010bf2b640();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar6;
  func_0x00010bf4b340();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar11;
  func_0x00010bf2b240();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0417c0(puVar8,param_2,lVar5,lVar7,*(undefined8 *)(param_1 + _DAT_1127188d4));
  _objc_release(lVar7);
  _objc_release(lVar11);
  _objc_release(lVar6);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar5);
  _objc_release(lVar2);
  lVar11 = (long)_DAT_1127188d8;
  lVar2 = param_1 + lVar11;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bf07dc0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar5;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e0ea0(lVar5,param_2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar9 = PTR_PTR_1126b3188;
  _objc_alloc();
  func_0x00010c0634c0();
  uVar10 = *(undefined8 *)(param_1 + _DAT_1127188dc);
  *(undefined **)(param_1 + _DAT_1127188dc) = puVar9;
  _objc_release(uVar10);
  puVar9 = PTR_PTR_1126b1cb0;
  _objc_alloc(PTR_PTR_1126b1cb0);
  func_0x00010c0199e0();
  param_1 = param_1 + lVar11;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c28f2a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar2);
  _objc_release(param_1);
  _objc_release(puVar9);
  _objc_release(lVar6);
  _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104fa78d4; end: 104fa78eb;  */

void FUN_104fa78d4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c124d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_reduce_withInitialValue__112626d68,&PTR___NSConcreteGlobalBlock_11085ff98
             ,&PTR____CFConstantStringClassReference_110daafd8);
  return;
}



/* Entry: 104fa78ec; end: 104fa795b;  */

void FUN_104fa78ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  func_0x00010c094540(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c25ce40(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104fa795c; end: 104fa79fb; -[SCScanFromLensURIRouteHandlerV2EntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fa795c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127188d4,0);
  _objc_destroyWeak(param_1 + _DAT_1127188cc);
  _objc_destroyWeak(param_1 + _DAT_1127188c4);
  _objc_destroyWeak(param_1 + _DAT_1127188d0);
  _objc_destroyWeak(param_1 + _DAT_1127188c0);
  _objc_destroyWeak(param_1 + _DAT_1127188e4);
  _objc_destroyWeak(param_1 + _DAT_1127188c8);
  _objc_destroyWeak(param_1 + _DAT_1127188d8);
  _objc_destroyWeak(param_1 + _DAT_1127188e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127188dc,0);
  return;
}



/* Entry: 104fa79fc; end: 104fa7aa3; -[SCSFLTokenMetadata initWithContexts:lensId:] */

undefined1 *
FUN_104fa79fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e5650;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104fa7aa4; end: 104fa7aab; -[SCSFLTokenMetadata contexts] */

undefined8 FUN_104fa7aa4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104fa7aac; end: 104fa7ab3; -[SCSFLTokenMetadata lensId] */

undefined8 FUN_104fa7aac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104fa7ab4; end: 104fa7ae3; -[SCSFLTokenMetadata .cxx_destruct] */

void FUN_104fa7ab4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104fa7ae4; end: 104fa7e07; -[SCScanFromLensWorkflow initWithUserNetworkServices:endpointConfiguration:snapTokenProvider:cameraHardwareServicesAPI:] */

undefined8 *
FUN_104fa7ae4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_78 = PTR_PTR_1126e5658;
  puVar1 = &uStack_80;
  uStack_80 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b3190;
    _objc_alloc_init();
    uVar3 = puVar1[3];
    puVar1[3] = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[4];
    puVar1[4] = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[9];
    puVar1[9] = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[10];
    puVar1[10] = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[5];
    puVar1[5] = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae568;
    _objc_alloc_init();
    uVar3 = puVar1[7];
    puVar1[7] = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar3 = puVar1[8];
    puVar1[8] = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = puVar1[0xb];
    puVar1[0xb] = param_6;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar3);
    _objc_initWeak(auStack_88,puVar1);
    puVar2 = PTR_PTR_1126ae720;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    uStack_a0 = 0x104fa7e78;
    puStack_98 = &UNK_11085fff8;
    _objc_copyWeak(auStack_90,auStack_88);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[2];
    puVar1[2] = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_b8,auStack_88);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_5);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[6];
    puVar1[6] = puVar2;
    _objc_release(uVar3);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_b8);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_88);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104fa7e08; end: 104fa7f03;  */

void FUN_104fa7e08(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae790;
  _objc_alloc(PTR_PTR_1126ae790);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      "com.snapchat.scan-from-lens-queue");
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021520(puVar1,param_2,puVar2,0x11,0,0x14);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104fa7f04; end: 104fa801f; -[SCScanFromLensWorkflow beginScanningWithContexts:lensId:] */

void FUN_104fa7f04(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___NSUUID_1126b0270;
  func_0x00010bdc3540();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_104fa8020;
  puStack_68 = &UNK_11084c4a0;
  lStack_60 = param_1;
  uStack_58 = param_3;
  uStack_50 = param_4;
  _objc_retain(puVar2);
  puStack_48 = puVar2;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar3,param_2,&puStack_80);
  _objc_release(uVar3);
  puVar1 = puStack_48;
  _objc_retain(puVar2);
  _objc_release(puVar1);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104fa8020; end: 104fa80cf;  */

void FUN_104fa8020(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x20);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126b3198;
    _objc_alloc_init(PTR_PTR_1126b3198);
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf18960();
    _objc_release(uVar3);
    _objc_release(puVar2);
  }
  puVar2 = PTR_PTR_1126b31a0;
  _objc_alloc(PTR_PTR_1126b31a0);
  func_0x00010c004840();
  func_0x00010c1d0640(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20),param_2,puVar2,
                      *(undefined8 *)(param_1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104fa80d0; end: 104fa8177; -[SCScanFromLensWorkflow endScanningForToken:] */

void FUN_104fa80d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_104fa8178;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 104fa8178; end: 104fa81db;  */

void FUN_104fa8178(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010c12d3e0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20),param_2,
                      *(undefined8 *)(param_1 + 0x28));
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x20);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    return;
  }
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf952c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104fa81dc; end: 104fa829b; -[SCScanFromLensWorkflow analyzeSingleFrameWithContexts:lensId:] */

void FUN_104fa81dc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x00010bf18940();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_104fa829c;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  _objc_retain(lVar2);
  lStack_38 = lVar2;
  func_0x00010c0f7fc0(uVar3,param_2,&puStack_60);
  _objc_release(uVar3);
  lVar1 = lStack_38;
  _objc_retain(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 104fa829c; end: 104fa82a7;  */

void FUN_104fa829c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28),PTR_s_addObject__11259c1f0,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 104fa82a8; end: 104fa83ff; -[SCScanFromLensWorkflow analyzeLensTextureWithContexts:imageData:lensId:] */

void FUN_104fa82a8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = param_3;
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSUUID_1126b0270;
    func_0x00010bdc3540();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_104fa8400;
    puStack_70 = &UNK_1108475b0;
    _objc_retain(param_4);
    uStack_68 = param_4;
    lStack_60 = param_1;
    _objc_retain(param_3);
    lStack_58 = param_3;
    _objc_retain(param_5);
    uStack_50 = param_5;
    _objc_retain(puVar4);
    puStack_48 = puVar4;
    func_0x00010c0f7fc0(uVar3,param_2,&puStack_88);
    _objc_release(uVar3);
    puVar1 = puStack_48;
    _objc_retain(puVar4);
    _objc_release(puVar1);
    _objc_release(uStack_50);
    _objc_release(lStack_58);
    _objc_release(uStack_68);
    _objc_release(puVar4);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104fa8400; end: 104fa858f;  */

void FUN_104fa8400(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b31a8;
  _objc_alloc_init();
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010c14d040(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c0d04a0(puVar1,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar4 = puVar3;
  _UIImageJPEGRepresentation(0x3fe8000000000000,puVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x30);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010c0f8200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  uStack_60 = *(undefined8 *)(param_1 + 0x40);
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_60,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20(puVar2,param_2,puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x50),param_2,puVar2,uVar7);
  _objc_release(puVar2);
  _objc_release(puVar6);
  _objc_release(uVar7);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  uVar7 = *(undefined8 *)(puVar1 + 8);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f7fc0();
  _objc_release(uVar7);
  return;
}



/* Entry: 104fa8590; end: 104fa8607; -[SCScanFromLensWorkflow forceEndAllActiveSessions] */

void FUN_104fa8590(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f7fc0();
  _objc_release(uVar1);
  return;
}



/* Entry: 104fa8608; end: 104fa8763;  */

void FUN_104fa8608(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  func_0x00010bf002e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c12adc0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20));
  func_0x00010c12adc0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28));
  func_0x00010c12adc0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48));
  func_0x00010c12adc0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50));
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf952c0();
  _objc_release(uVar1);
  puVar3 = puVar2;
  func_0x00010bf529e0();
  if (puVar3 != (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                        &PTR____CFConstantStringClassReference_110dbeb58,0xc00,0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b3150;
    func_0x00010bfa01c0(PTR_PTR_1126b3150,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126b31b0;
    _objc_alloc(PTR_PTR_1126b31b0);
    func_0x00010c03fba0();
    func_0x00010c0d9840(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38),param_2,puVar5);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



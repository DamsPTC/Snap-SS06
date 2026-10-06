/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10696a1d8; end: 10696a257;  */

void FUN_10696a1d8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf1f440(uVar2,param_2,&PTR____CFConstantStringClassReference_110e66038,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010c0df6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithBool__1126157d0,uVar2);
  return;
}



/* Entry: 10696a258; end: 10696a4cb; -[SCMyStoriesSyncer attemptToSyncWithTriggerType:externalCallback:callback:callbackQueue:] */

void FUN_10696a258(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_b0 [8];
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  long lStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if ((param_3 == 1) || (param_3 == 3)) {
    func_0x00010c251cc0(*(undefined8 *)(param_1 + 0x30));
  }
  _objc_initWeak(auStack_58,param_1);
  func_0x00010c0b0a00(*(undefined8 *)(param_1 + 0x30));
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  if ((int)uVar3 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c11de00(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = auStack_b0;
    _objc_copyWeak(puVar2,auStack_58);
    lStack_a8 = param_3;
    _objc_retain(param_4);
    _objc_retain(param_5);
    _objc_retain(param_6);
    func_0x00010bf625a0(uVar3);
    _objc_release(uVar1);
    _objc_release(uVar3);
    _objc_release(param_6);
    _objc_release(param_5);
    uVar3 = param_4;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_10696a4cc;
    puStack_88 = &UNK_11094da00;
    puVar2 = auStack_68;
    _objc_copyWeak(puVar2,auStack_58);
    lStack_60 = param_3;
    _objc_retain(param_4);
    uStack_78 = param_4;
    _objc_retain(param_5);
    uStack_70 = param_5;
    _objc_retain(param_6);
    uStack_80 = param_6;
    func_0x00010c0f7fc0(uVar3);
    _objc_release(uStack_80);
    _objc_release(uStack_70);
    uVar3 = uStack_78;
  }
  _objc_release(uVar3);
  _objc_destroyWeak(puVar2);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10696a4cc; end: 10696a507;  */

void FUN_10696a4cc(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdd0f00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10696a508; end: 10696a583;  */

void FUN_10696a508(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010bf00d20(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bdd0ee0(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10696a584; end: 10696a70b; -[SCMyStoriesSyncer _attemptToSyncWithTriggerType:externalCallback:callback:callbackQueue:] */

void FUN_10696a584(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_90 [8];
  long lStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_3 == 10) {
    iVar1 = (int)*(undefined8 *)(param_1 + 8);
    func_0x0001084da42c();
    if (iVar1 != 0) {
      func_0x00010c0aaaa0(*(undefined8 *)(param_1 + 0x28));
    }
    func_0x00010c251cc0(*(undefined8 *)(param_1 + 0x30));
  }
  _objc_initWeak(auStack_58,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_10696a70c;
  puStack_68 = &UNK_110857398;
  _objc_retain(param_4);
  uStack_60 = param_4;
  _objc_copyWeak(auStack_90,auStack_58);
  lStack_88 = param_3;
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010bf0dac0(uVar2);
  _objc_release(param_5);
  _objc_release(param_6);
  _objc_destroyWeak(auStack_90);
  _objc_release(uStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10696a70c; end: 10696a74b;  */

void FUN_10696a70c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    func_0x00010bf1f3c0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010696a73c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_2);
    return;
  }
  return;
}



/* Entry: 10696a74c; end: 10696a7f3;  */

void FUN_10696a74c(long param_1,byte param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  byte bStack_38;
  
  if ((param_2 & 1) == 0) {
    lVar3 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar3);
    func_0x00010be54f60();
    _objc_release(lVar3);
  }
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10696a7f4;
  puStack_48 = &UNK_11084a9b8;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uStack_40 = uVar2;
  bStack_38 = param_2 ^ 1;
  func_0x00010007380c(uVar1,&puStack_60);
  _objc_release(uStack_40);
  return;
}



/* Entry: 10696a7f4; end: 10696a807;  */

void FUN_10696a7f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010696a804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x28));
  return;
}



/* Entry: 10696a808; end: 10696acf7; -[SCMyStoriesSyncer _attemptToSyncWithCustomStoriesMetadata:triggerType:externalCallback:callback:callbackQueue:] */

void FUN_10696a808(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,undefined8 param_7)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined **ppuVar9;
  long lVar10;
  undefined **ppuVar11;
  long lVar12;
  undefined **ppuVar13;
  long lVar14;
  undefined **ppuStack_360;
  undefined *puStack_338;
  undefined8 uStack_330;
  code *pcStack_328;
  undefined *puStack_320;
  undefined8 uStack_318;
  long lStack_310;
  undefined1 auStack_308 [8];
  long lStack_300;
  undefined *puStack_2f8;
  undefined8 uStack_2f0;
  code *pcStack_2e8;
  undefined *puStack_2e0;
  long lStack_2d8;
  undefined8 uStack_2d0;
  long lStack_2c8;
  long *plStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  long lStack_288;
  long *plStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  long lStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined1 auStack_108 [128];
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if (param_4 == 10) {
    uVar2 = *(ulong *)(param_1 + 8);
    func_0x0001084da42c();
    if ((int)uVar2 != 0) {
      func_0x00010c0aaaa0(*(undefined8 *)(param_1 + 0x28));
    }
    uStack_2a8 = 0;
    uStack_2b0 = 0;
    uStack_298 = 0;
    uStack_2a0 = 0;
    lStack_2c8 = 0;
    uStack_2d0 = 0;
    uStack_2b8 = 0;
    plStack_2c0 = (long *)0x0;
    _objc_retain(param_3);
    lVar8 = param_3;
    func_0x00010bf52a60();
    if (lVar8 != 0) {
      lVar12 = *plStack_2c0;
      do {
        lVar10 = 0;
        do {
          if (*plStack_2c0 != lVar12) {
            _objc_enumerationMutation(param_3);
          }
          lVar14 = *(long *)(lStack_2c8 + lVar10 * 8);
          lVar6 = lVar14;
          func_0x00010c27dd80();
          if (((lVar6 == 6) || (lVar6 = lVar14, func_0x00010c27dd80(), lVar6 == 10)) ||
             (func_0x00010c27dd80(), lVar14 == 7)) {
            _objc_release(param_3);
            goto LAB_10696ab64;
          }
          lVar10 = lVar10 + 1;
        } while (lVar8 != lVar10);
        lVar8 = param_3;
        func_0x00010bf52a60();
      } while (lVar8 != 0);
    }
    _objc_release(param_3);
    if ((uVar2 & 1) == 0) {
      ppuVar13 = *(undefined ***)(param_1 + 0x18);
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain();
      func_0x00010bfa94c0();
      _objc_retainAutoreleasedReturnValue();
      uStack_228 = 0;
      uStack_230 = 0;
      uStack_218 = 0;
      uStack_220 = 0;
      lStack_248 = 0;
      uStack_250 = 0;
      uStack_238 = 0;
      plStack_240 = (long *)0x0;
      _objc_retain(ppuVar13);
      ppuStack_360 = ppuVar13;
      func_0x00010bf52a60();
      ppuVar11 = ppuVar13;
      if (ppuStack_360 != (undefined **)0x0) {
        lVar8 = *plStack_240;
        do {
          ppuVar9 = (undefined **)0x0;
          do {
            if (*plStack_240 != lVar8) {
              _objc_enumerationMutation(ppuVar13);
              ppuVar11 = ppuVar9;
            }
            ppuVar4 = *(undefined ***)(lStack_248 + (long)ppuVar9 * 8);
            lStack_288 = 0;
            uStack_290 = 0;
            uStack_278 = 0;
            plStack_280 = (long *)0x0;
            uStack_268 = 0;
            uStack_270 = 0;
            uStack_258 = 0;
            uStack_260 = 0;
            func_0x00010c25b340();
            _objc_retainAutoreleasedReturnValue();
            ppuVar5 = ppuVar4;
            func_0x00010bf52a60();
            if (ppuVar5 != (undefined **)0x0) {
              lVar12 = *plStack_280;
              do {
                ppuVar11 = (undefined **)0x0;
                do {
                  if (*plStack_280 != lVar12) {
                    _objc_enumerationMutation(ppuVar4);
                  }
                  lVar6 = *(long *)(lStack_288 + (long)ppuVar11 * 8);
                  func_0x00010bf0e700();
                  _objc_retainAutoreleasedReturnValue();
                  lVar10 = lVar6;
                  func_0x00010bf0a8c0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(lVar6);
                  lVar6 = lVar10;
                  func_0x00010c07f5e0();
                  if (((int)lVar6 != 0) && (lVar6 = lVar10, func_0x00010c24c380(), lVar6 != 2)) {
                    func_0x00010c0aaac0(uVar3);
                    _objc_release(lVar10);
                    _objc_release(ppuVar4);
                    _objc_release(ppuVar13);
                    _objc_release(ppuVar13);
                    _objc_release(uVar3);
                    goto LAB_10696ab64;
                  }
                  _objc_release(lVar10);
                  ppuVar11 = (undefined **)((long)ppuVar11 + 1);
                } while (ppuVar5 != ppuVar11);
                ppuVar5 = ppuVar4;
                func_0x00010bf52a60();
              } while (ppuVar5 != (undefined **)0x0);
            }
            _objc_release(ppuVar4);
            ppuVar9 = (undefined **)((long)ppuVar9 + 1);
          } while (ppuVar9 != ppuStack_360);
          ppuStack_360 = ppuVar13;
          func_0x00010bf52a60();
        } while (ppuStack_360 != (undefined **)0x0);
      }
      _objc_release(ppuVar13);
      _objc_release(ppuVar13);
      _objc_release(uVar3);
      if (param_5 != 0) {
        (**(code **)(param_5 + 0x10))(param_5,1);
      }
      puVar7 = (undefined1 *)0x0;
      (**(code **)(param_6 + 0x10))(param_6,0);
      goto LAB_10696ac40;
    }
LAB_10696ab64:
    func_0x00010c251cc0(*(undefined8 *)(param_1 + 0x30));
  }
  _objc_initWeak(auStack_108,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  puStack_2f8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_2f0 = 0xc2000000;
  pcStack_2e8 = FUN_10696acf8;
  puStack_2e0 = &UNK_110857398;
  _objc_retain(param_5);
  puStack_338 = puVar1;
  uStack_330 = 0xc2000000;
  pcStack_328 = FUN_10696ad38;
  puStack_320 = &UNK_1108aeb50;
  ppuVar11 = &puStack_338;
  puVar7 = auStack_108;
  lStack_2d8 = param_5;
  _objc_copyWeak(auStack_308,puVar7);
  lStack_300 = param_4;
  _objc_retain(param_7);
  uStack_318 = param_7;
  _objc_retain(param_6);
  lStack_310 = param_6;
  func_0x00010bf0dac0(uVar3);
  _objc_release(lStack_310);
  _objc_release(uStack_318);
  _objc_destroyWeak(auStack_308);
  _objc_release(lStack_2d8);
  _objc_destroyWeak(auStack_108);
LAB_10696ac40:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar11 + 6);
  _objc_destroyWeak(auStack_108);
  __Unwind_Resume();
  lVar8 = *(long *)(param_3 + 0x20);
  if (lVar8 != 0) {
    func_0x00010bf1f3c0(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010696ad28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar8 + 0x10))(lVar8,puVar7);
    return;
  }
  return;
}



/* Entry: 10696acf8; end: 10696ad37;  */

void FUN_10696acf8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    func_0x00010bf1f3c0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010696ad28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_2);
    return;
  }
  return;
}



/* Entry: 10696ad38; end: 10696addf;  */

void FUN_10696ad38(long param_1,byte param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  byte bStack_38;
  
  if ((param_2 & 1) == 0) {
    lVar3 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar3);
    func_0x00010be54f60();
    _objc_release(lVar3);
  }
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10696ade0;
  puStack_48 = &UNK_11084a9b8;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uStack_40 = uVar2;
  bStack_38 = param_2 ^ 1;
  func_0x00010007380c(uVar1,&puStack_60);
  _objc_release(uStack_40);
  return;
}



/* Entry: 10696ade0; end: 10696adf3;  */

void FUN_10696ade0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010696adf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x28));
  return;
}



/* Entry: 10696adf4; end: 10696ae33; -[SCMyStoriesSyncer _logIssuingMyStoriesSyncRequestWithTriggerType:] */

void FUN_10696adf4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000108f13b9c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0aaa80(uVar1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10696ae34; end: 10696aeb7; -[SCMyStoriesSyncer fetchDeltaInfoWithCompletion:completionQueue:] */

void FUN_10696ae34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10696aeb8;
  puStack_30 = &UNK_110849530;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010007380c(param_4,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 10696aeb8; end: 10696aecb;  */

void FUN_10696aeb8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010696aec8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0);
  return;
}



/* Entry: 10696aecc; end: 10696aed7; -[SCMyStoriesSyncer receivedBatchStoriesResponse:] */

void FUN_10696aecc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b0970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x30),PTR_s_logStep__112609c68,2)
  ;
  return;
}



/* Entry: 10696aed8; end: 10696af9b; -[SCMyStoriesSyncer finishedProcessingResponseWithSuccess:] */

void FUN_10696aed8(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  func_0x00010c0b0960(*(undefined8 *)(param_1 + 0x30),param_2,3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10696af9c; end: 10696afcf;  */

void FUN_10696af9c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be3db40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10696afd0; end: 10696b3af; -[SCMyStoriesSyncer handleStoriesResponse:triggerType:extraData:completion:] */

void FUN_10696afd0(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined *puStack_190;
  ulong uStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined1 auStack_170 [8];
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined1 *puStack_148;
  undefined8 *puStack_140;
  undefined1 auStack_138 [8];
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  undefined1 *puStack_110;
  undefined8 *puStack_108;
  undefined1 auStack_100 [8];
  undefined1 auStack_f8 [8];
  undefined8 uStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 auStack_88 [3];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar4 = param_3;
  func_0x000107b191c4(param_3,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110e66018);
  if ((uVar4 & 1) == 0) {
    func_0x00010bfaffc0(param_1);
    func_0x00010c0b0a00(*(undefined8 *)(param_1 + 0x30));
  }
  else {
    func_0x00010c0b0a00(*(undefined8 *)(param_1 + 0x30));
    lStack_90 = 0;
    auStack_88[0] = 0;
    func_0x000107b133a0(param_3,0,auStack_88,&lStack_90,0,0,0,0,6);
    uVar3 = auStack_88[0];
    _objc_retain(auStack_88[0]);
    lVar2 = lStack_90;
    _objc_retain(lStack_90);
    puStack_b8 = &uStack_c0;
    uStack_c0 = 0;
    uStack_b0 = 0x3032000000;
    pcStack_a8 = FUN_10696b3b0;
    uStack_a0 = 0x10696b3c0;
    uStack_98 = 0;
    puStack_e8 = &uStack_f0;
    uStack_f0 = 0;
    uStack_e0 = 0x3032000000;
    pcStack_d8 = FUN_10696b3b0;
    uStack_d0 = 0x10696b3c0;
    uStack_c8 = 0;
    puVar5 = auStack_f8;
    _objc_initWeak(puVar5,param_1);
    _dispatch_group_create();
    lVar6 = lVar2;
    func_0x00010bf529e0();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    if (lVar6 != 0) {
      func_0x00010c0b0a00(*(undefined8 *)(param_1 + 0x30));
      _dispatch_group_enter(puVar5);
      uVar7 = *(undefined8 *)(param_1 + 0x60);
      func_0x00010c269d40(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c11de00(uVar8);
      _objc_retainAutoreleasedReturnValue();
      puStack_130 = puVar1;
      uStack_128 = 0xc2000000;
      pcStack_120 = FUN_10696b3c8;
      puStack_118 = &UNK_1108b2d48;
      _objc_copyWeak(auStack_100,auStack_f8);
      puStack_108 = &uStack_f0;
      _objc_retain(puVar5);
      puStack_110 = puVar5;
      func_0x00010bf62520(uVar7);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(puStack_110);
      _objc_destroyWeak(auStack_100);
    }
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    func_0x00010c0b0a00(*(undefined8 *)(param_1 + 0x30));
    _dispatch_group_enter(puVar5);
    puStack_168 = puVar1;
    uStack_160 = 0xc2000000;
    uStack_158 = 0x10696b448;
    puStack_150 = &UNK_1108b2d48;
    _objc_copyWeak(auStack_138,auStack_f8);
    puStack_140 = &uStack_c0;
    _objc_retain(puVar5);
    puStack_148 = puVar5;
    func_0x00010be15400(param_1);
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c11de00(uVar7);
    _objc_retainAutoreleasedReturnValue();
    puStack_1a8 = puVar1;
    uStack_1a0 = 0xc2000000;
    pcStack_198 = FUN_10696b4c8;
    puStack_190 = &UNK_1108661c8;
    _objc_copyWeak(auStack_170,auStack_f8);
    _objc_retain(param_3);
    puStack_180 = &uStack_c0;
    puStack_178 = &uStack_f0;
    uStack_188 = param_3;
    func_0x000100bc0718(puVar5,uVar7,&puStack_1a8);
    _objc_release(uVar7);
    _objc_release(uStack_188);
    _objc_destroyWeak(auStack_170);
    _objc_release(puStack_148);
    _objc_destroyWeak(auStack_138);
    _objc_release(puVar5);
    _objc_destroyWeak(auStack_f8);
    __Block_object_dispose(&uStack_f0,8);
    _objc_release(uStack_c8);
    __Block_object_dispose(&uStack_c0,8);
    _objc_release(uStack_98);
    _objc_release(lVar2);
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 10696b3b0; end: 10696b3c7;  */

void FUN_10696b3b0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10696b3c8; end: 10696b4c7;  */

void FUN_10696b3c8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = param_2;
  _objc_release(uVar2);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
  if (lVar1 != 0) {
    func_0x00010c0b0a00(*(undefined8 *)(lVar1 + 0x30));
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10696b4c8; end: 10696b50f;  */

void FUN_10696b4c8(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcebe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10696b510; end: 10696b877; -[SCMyStoriesSyncer _applyStoriesResponse:userIdToUsername:customStoryIdToCustomStory:] */

void FUN_10696b510(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_f8 [8];
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c0b0a00(*(undefined8 *)(param_1 + 0x30));
  _objc_initWeak(auStack_80,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c116a20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uVar5 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar6;
  func_0x00010c0f7940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 8);
  puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e8 = 0xc2000000;
  pcStack_e0 = FUN_10696b878;
  puStack_d8 = &UNK_11094da60;
  _objc_retain(param_3);
  uStack_d0 = param_3;
  lStack_c8 = param_1;
  _objc_retain(uVar1);
  uStack_c0 = uVar1;
  _objc_retain(param_4);
  uStack_b8 = param_4;
  _objc_retain(param_5);
  uStack_b0 = param_5;
  _objc_retain(uVar5);
  uStack_a8 = uVar5;
  _objc_retain(puVar3);
  puStack_a0 = puVar3;
  _objc_retain(puVar4);
  puStack_98 = puVar4;
  uStack_90 = uVar6;
  _objc_retain(uVar2);
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  uStack_88 = uVar2;
  func_0x00010c11de00(uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_f8,auStack_80);
  _objc_retain(param_3);
  _objc_retain(puVar3);
  _objc_retain(puVar4);
  func_0x00010c0f8500(uVar8);
  _objc_release(uVar7);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_f8);
  _objc_release(uStack_88);
  _objc_release(puStack_98);
  _objc_release(puStack_a0);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  _objc_release(uStack_c0);
  _objc_release(uStack_d0);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10696b878; end: 10696b8cf;  */

void FUN_10696b878(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  FUN_10696822c(param_2,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(lVar1 + 0x50),
                *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(lVar1 + 0x48),
                *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),
                *(undefined8 *)(param_1 + 0x58),*(undefined8 *)(lVar1 + 0x28),
                *(undefined8 *)(param_1 + 0x60),*(undefined8 *)(lVar1 + 0x18),
                *(undefined8 *)(lVar1 + 0x80),*(undefined8 *)(param_1 + 0x68));
  return;
}



/* Entry: 10696b8d0; end: 10696b917;  */

void FUN_10696b8d0(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be25c60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10696b918; end: 10696bf17; -[SCMyStoriesSyncer _handleAppliedStoriesResponse:success:confirmedStoryPosts:failedStoryPosts:] */

void FUN_10696b918(double param_1,long param_2,undefined8 param_3,long param_4,ulong param_5,
                  undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  undefined1 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  double dVar20;
  undefined **ppuStack_270;
  undefined **ppuStack_260;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined *puStack_1a8;
  long lStack_1a0;
  undefined1 uStack_198;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  func_0x00010c0b0960(*(undefined8 *)(param_2 + 0x30));
  func_0x00010be3db40(param_2);
  if ((param_5 & 1) == 0) {
    func_0x00010c0b0a00(*(undefined8 *)(param_2 + 0x30));
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar3 = *(undefined8 *)(param_2 + 0x38);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfcace0();
    _objc_release(uVar3);
    lVar4 = param_4;
    func_0x00010c0ece40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf32220();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    lVar6 = lVar5;
    func_0x00010bf52a60();
    lVar4 = lRam0000000000000000;
    if (lVar6 == 0) {
      dVar20 = 0.0;
    }
    else {
      ppuStack_270 = &PTR____CFConstantStringClassReference_110e17798;
      ppuStack_260 = &PTR____CFConstantStringClassReference_110e75918;
      dVar20 = 0.0;
      do {
        lVar18 = 0;
        do {
          if (lRam0000000000000000 != lVar4) {
            _objc_enumerationMutation(lVar5);
          }
          lVar19 = *(long *)(lVar18 * 8);
          lVar7 = lVar19;
          func_0x00010c293b00();
          _objc_retainAutoreleasedReturnValue();
          if (lVar7 != 0) {
            lVar8 = lVar7;
            func_0x0001069681e0(lVar7);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa160(puVar1);
            lVar9 = lVar19;
            func_0x00010bf454e0();
            _objc_retainAutoreleasedReturnValue();
            lVar10 = lVar9;
            func_0x00010bf52680();
            _objc_release(lVar9);
            if ((int)lVar10 == 0x1a) {
              _objc_retain(&PTR____CFConstantStringClassReference_110e75918);
              uVar15 = 1;
              ppuVar14 = ppuStack_260;
            }
            else {
              lVar9 = lVar19;
              func_0x00010bf454e0();
              _objc_retainAutoreleasedReturnValue();
              lVar10 = lVar9;
              func_0x00010bf52680();
              _objc_release(lVar9);
              ppuVar14 = ppuStack_270;
              if ((int)lVar10 != 0x1e) {
                lVar9 = lVar19;
                func_0x00010bf454e0();
                _objc_retainAutoreleasedReturnValue();
                lVar10 = lVar9;
                func_0x00010bf52680();
                _objc_release(lVar9);
                if ((int)lVar10 == 0x1f) {
                  _objc_retain(&PTR____CFConstantStringClassReference_110ee02d8);
                  lVar11 = lVar7;
                  func_0x00010c2456a0();
                  _objc_retainAutoreleasedReturnValue();
                  lVar9 = lVar11;
                  func_0x00010bf52a60();
                  lVar10 = lRam0000000000000000;
                  while (lVar9 != 0) {
                    lVar17 = 0;
                    do {
                      if (lRam0000000000000000 != lVar10) {
                        _objc_enumerationMutation(lVar11);
                      }
                      lVar16 = *(long *)(lVar17 * 8);
                      lVar12 = lVar16;
                      func_0x000108f06550();
                      if (((int)lVar12 != 0) &&
                         (lVar12 = lVar16, func_0x00010bf5ab80(), dVar20 < (double)lVar12 / 1000.0))
                      {
                        func_0x00010bf5ab80();
                        dVar20 = (double)lVar16 / 1000.0;
                      }
                      lVar17 = lVar17 + 1;
                    } while (lVar9 != lVar17);
                    lVar9 = lVar11;
                    func_0x00010bf52a60();
                  }
                  _objc_release(lVar11);
                  uVar15 = 1;
                  ppuVar14 = &PTR____CFConstantStringClassReference_110ee02d8;
                  goto LAB_10696bc94;
                }
                ppuVar14 = &PTR____CFConstantStringClassReference_110daf6b8;
              }
              _objc_retain(ppuVar14);
              uVar15 = 0;
            }
LAB_10696bc94:
            func_0x00010bf454e0();
            _objc_retainAutoreleasedReturnValue();
            lVar9 = lVar19;
            func_0x00010bfe5ea0();
            _objc_retainAutoreleasedReturnValue();
            puStack_1c0 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_1b8 = 0xc2000000;
            uStack_1b0 = 0x10696c420;
            puStack_1a8 = &UNK_11094da90;
            lStack_1a0 = lVar9;
            uStack_198 = uVar15;
            _objc_retain();
            lVar10 = lVar8;
            func_0x000100504554(lVar8,&puStack_1c0);
            _objc_release(lStack_1a0);
            _objc_release(lVar9);
            _objc_release(lVar19);
            func_0x00010befa160(puVar2);
            _objc_release(lVar10);
            _objc_release(ppuVar14);
            _objc_release(lVar8);
          }
          _objc_release(lVar7);
          lVar18 = lVar18 + 1;
        } while (lVar18 != lVar6);
        lVar6 = lVar5;
        func_0x00010bf52a60();
      } while (lVar6 != 0);
    }
    _objc_release(lVar5);
    uVar3 = *(undefined8 *)(param_2 + 0x40);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar2;
    func_0x00010bf51e00(puVar2);
    func_0x00010bf3c240(uVar3);
    _objc_release(puVar13);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_2 + 0x38);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar1;
    func_0x00010bf00560(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c288b00(uVar3);
    _objc_release(puVar13);
    _objc_release(uVar3);
    if (param_1 < dVar20) {
      uVar3 = *(undefined8 *)(param_2 + 0x38);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c28a5e0(dVar20);
      _objc_release(uVar3);
    }
    uVar3 = *(undefined8 *)(param_2 + 0x28);
    func_0x00010bf529e0(param_6);
    func_0x00010bf529e0(param_7);
    func_0x00010c0aaa60(uVar3);
    uVar3 = *(undefined8 *)(param_2 + 0x38);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28c460();
    _objc_release(uVar3);
    func_0x00010c0b0a00(*(undefined8 *)(param_2 + 0x30));
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return;
  }
  ___stack_chk_fail();
  uVar3 = *(undefined8 *)(param_4 + 0x68);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13bba0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10696bf18; end: 10696bf5b; -[SCMyStoriesSyncer _invokeAllCompletionBlocksWithSuccess:] */

void FUN_10696bf18(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13bba0(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10696bf5c; end: 10696c29f; -[SCMyStoriesSyncer _fetchUsernamesWithUserIds:completion:] */

void FUN_10696bf5c(long param_1,undefined8 param_2,undefined *param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = param_3;
  func_0x00010bf529e0();
  if (puVar1 == (undefined *)0x0) {
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_10696c2a0;
    puStack_70 = &UNK_110849530;
    _objc_retain(param_4);
    puStack_68 = param_4;
    func_0x00010c0f7fc0(uVar6,param_2,&puStack_88);
    puVar1 = puStack_68;
  }
  else {
    puVar2 = *(undefined **)(param_1 + 0x58);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    lVar3 = *(long *)(param_1 + 0x50);
    func_0x00010c08fa60();
    if ((lVar3 != 0) && (puVar4 = puVar1, func_0x00010c08fa60(), puVar4 != (undefined *)0x0)) {
      func_0x00010c1d0640(puVar2,param_2,puVar1,*(undefined8 *)(param_1 + 0x50));
    }
    puVar4 = puVar2;
    func_0x00010bf529e0();
    if (puVar4 == (undefined *)0x0) {
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c11de00(uVar7);
      _objc_retainAutoreleasedReturnValue();
      puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_108 = 0xc2000000;
      pcStack_100 = FUN_10696c330;
      puStack_f8 = &UNK_1108ce788;
      _objc_retain(param_4);
      puStack_f0 = param_4;
      func_0x00010bfab440(uVar6,param_2,param_3,&PTR____CFConstantStringClassReference_110e661b8,
                          uVar7,&puStack_110);
      _objc_release(uVar7);
      _objc_release(uVar6);
      puVar4 = puStack_f0;
    }
    else {
      puVar4 = param_3;
      func_0x00010c0d3c80();
      puVar5 = puVar2;
      func_0x00010bf002e0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12d500(puVar4,param_2,puVar5);
      _objc_release(puVar5);
      puVar5 = puVar4;
      func_0x00010bf529e0();
      if (puVar5 == (undefined *)0x0) {
        uVar6 = *(undefined8 *)(param_1 + 0x10);
        puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_e0 = 0xc2000000;
        uStack_d8 = 0x10696c2f8;
        puStack_d0 = &UNK_11084aaa8;
        _objc_retain(param_4);
        puStack_c0 = param_4;
        _objc_retain(puVar2);
        puStack_c8 = puVar2;
        func_0x00010c0f7fc0(uVar6,param_2,&puStack_e8);
        _objc_release(puStack_c8);
        puVar5 = puStack_c0;
      }
      else {
        uVar6 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010c269d40(uVar6);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010bf51e00(puVar4);
        uVar7 = *(undefined8 *)(param_1 + 0x10);
        func_0x00010c11de00(uVar7);
        _objc_retainAutoreleasedReturnValue();
        puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_b0 = 0xc2000000;
        pcStack_a8 = FUN_10696c2b0;
        puStack_a0 = &UNK_1108ce7b8;
        _objc_retain(puVar2);
        puStack_98 = puVar2;
        _objc_retain(param_4);
        puStack_90 = param_4;
        func_0x00010bfab440(uVar6,param_2,puVar5,&PTR____CFConstantStringClassReference_110e661b8,
                            uVar7,&puStack_b8);
        _objc_release(uVar7);
        _objc_release(puVar5);
        _objc_release(uVar6);
        _objc_release(puStack_90);
        puVar5 = puStack_98;
      }
      _objc_release(puVar5);
    }
    _objc_release(puVar4);
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10696c2a0; end: 10696c2af;  */

void FUN_10696c2a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010696c2ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 10696c2b0; end: 10696c32f;  */

void FUN_10696c2b0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010bef7f60(*(undefined8 *)(param_1 + 0x20),param_2,param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010bf51e00(uVar2);
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10696c330; end: 10696c33b;  */

void FUN_10696c330(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010696c338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 10696c33c; end: 10696c4b7; -[SCMyStoriesSyncer .cxx_destruct] */

void FUN_10696c33c(long param_1)

{
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
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



/* Entry: 10696c4b8; end: 10696c52b;  */

void FUN_10696c4b8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bdf0520(lVar1,param_2,uVar2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10696c52c; end: 10696c68b;  */

void FUN_10696c52c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf40a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10696c68c; end: 10696c76b; -[SCLegacyStoriesServicesEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10696c68c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puVar1 = PTR_PTR_1126afc98;
  func_0x00010bf0c040();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = (long)_DAT_1127542cc;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x10696c72c;
  puStack_30 = &UNK_110842e18;
  lStack_28 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_48);
  func_0x00010c117720(*(undefined8 *)(param_1 + lVar3));
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10696c76c; end: 10696c96b; -[SCLegacyStoriesServicesEntryPoint _createOurStoriesProfileDataSourceWithMyStoriesCoordinator:userSession:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10696c76c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  puVar1 = PTR_PTR_1126cf470;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  lVar2 = param_1 + _DAT_1127542a0;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c243de0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_1127542bc;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010c08d900();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_1127542d0;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010c0ee220();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_1127542b0;
  _objc_loadWeakRetained();
  lVar9 = lVar8;
  func_0x00010bfcdf20();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_4;
  func_0x00010c2923e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  lVar11 = param_1 + _DAT_1127542d4;
  _objc_loadWeakRetained();
  lVar12 = lVar11;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = 0;
  if (param_1 != 0) {
    lVar13 = param_1 + _DAT_112754368;
    _objc_loadWeakRetained();
  }
  lVar14 = lVar13;
  func_0x00010c131960();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02d240(puVar1,param_2,param_3,lVar3,lVar5,lVar7,lVar9,uVar10,lVar12,0,lVar14);
  _objc_release(param_3);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(uVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10696c96c; end: 10696c9eb; -[SCLegacyStoriesServicesEntryPoint _createStorySendManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10696c96c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + _DAT_1127542dc;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0d5c60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfc7e40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10696c9ec; end: 10696cd37; -[SCLegacyStoriesServicesEntryPoint _createStoryMentionMessageSender] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10696c9ec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
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
  
  puVar1 = PTR_PTR_1126cf480;
  _objc_alloc();
  lVar18 = (long)_DAT_11275429c;
  lVar2 = param_1 + lVar18;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = (long)_DAT_1127542a0;
  lVar4 = param_1 + lVar15;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010bf62060();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = (long)_DAT_1127542e0;
  lVar19 = param_1 + lVar16;
  _objc_loadWeakRetained(lVar19);
  lVar6 = lVar19;
  func_0x00010bf501a0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = (long)_DAT_1127542e4;
  lVar7 = param_1 + lVar17;
  _objc_loadWeakRetained(lVar7);
  lVar8 = lVar7;
  func_0x00010c25b0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05d5a0(puVar1,param_2,lVar3,lVar5,lVar6,lVar8);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar19);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar9 = PTR_PTR_1126cf488;
  _objc_alloc();
  lVar18 = param_1 + lVar18;
  _objc_loadWeakRetained();
  lVar3 = lVar18;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1 + lVar15;
  _objc_loadWeakRetained();
  lVar5 = lVar15;
  func_0x00010bf62060();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1 + lVar16;
  _objc_loadWeakRetained();
  lVar6 = lVar16;
  func_0x00010bf501a0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1 + lVar17;
  _objc_loadWeakRetained();
  lVar8 = lVar17;
  func_0x00010c25b0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + _DAT_1127542e8;
  _objc_loadWeakRetained();
  lVar10 = lVar2;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = (long)_DAT_1127542ec;
  lVar4 = param_1 + lVar19;
  _objc_loadWeakRetained();
  lVar11 = lVar4;
  func_0x00010bfcf8a0();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1 + lVar19;
  _objc_loadWeakRetained();
  lVar12 = lVar19;
  func_0x00010bfcf8c0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + _DAT_1127542f0;
  _objc_loadWeakRetained();
  lVar13 = lVar7;
  func_0x00010bf4e6e0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_1127542d4;
  _objc_loadWeakRetained();
  lVar14 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05f040(puVar9,param_2,puVar1,lVar3,lVar5,lVar6,lVar8,lVar10,lVar11,lVar12,lVar13,
                      lVar14);
  _objc_release(lVar14);
  _objc_release(param_1);
  _objc_release(lVar13);
  _objc_release(lVar7);
  _objc_release(lVar12);
  _objc_release(lVar19);
  _objc_release(lVar11);
  _objc_release(lVar4);
  _objc_release(lVar10);
  _objc_release(lVar2);
  _objc_release(lVar8);
  _objc_release(lVar17);
  _objc_release(lVar6);
  _objc_release(lVar16);
  _objc_release(lVar5);
  _objc_release(lVar15);
  _objc_release(lVar3);
  _objc_release(lVar18);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 10696cd38; end: 10696cdcf; -[SCLegacyStoriesServicesEntryPoint _createStoriesAppLifeCyclePerformer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10696cd38(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + _DAT_1127542f4;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
  lVar1 = lVar2;
  func_0x00010c0f9920(lVar2,param_2,&PTR____CFConstantStringClassReference_110e661f8,2,0,0x15);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10696cdd0; end: 10696ce17;  */

void FUN_10696cdd0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf1b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10696ce18; end: 10696cfcf; -[SCLegacyStoriesServicesEntryPoint _createPollerManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10696ce18(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  
  lVar7 = (long)_DAT_1127542d4;
  _objc_retain(param_3);
  lVar7 = param_1 + lVar7;
  _objc_loadWeakRetained(lVar7);
  lVar1 = lVar7;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  lVar7 = param_1 + _DAT_112754308;
  _objc_loadWeakRetained(lVar7);
  lVar2 = lVar7;
  func_0x00010bf25180();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar7);
  lVar7 = param_1 + _DAT_11275430c;
  _objc_loadWeakRetained(lVar7);
  lVar2 = lVar7;
  func_0x00010bf0c120();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c11e0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar7);
  lVar7 = lVar3;
  func_0x00010c142320(lVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126cf498;
  _objc_alloc(PTR_PTR_1126cf498);
  param_1 = param_1 + _DAT_112754304;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bf53fa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c000520(puVar6,param_2,param_3,lVar5,lVar1,lVar2,lVar7);
  _objc_release(param_3);
  _objc_release(lVar2);
  _objc_release(param_1);
  _objc_release(lVar7);
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10696cfd0; end: 10696d00f;  */

void FUN_10696cfd0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf4240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10696d010; end: 10696d347; -[SCLegacyStoriesServicesEntryPoint _createMyStoriesSyncerWithPerformer:snapPostCoordinator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10696d010(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  
  lVar14 = (long)_DAT_112754314;
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar14 = param_1 + lVar14;
  _objc_loadWeakRetained();
  lVar15 = lVar14;
  func_0x00010bf87660();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar15;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar15);
  _objc_release(lVar14);
  puVar2 = PTR_PTR_1126b0e28;
  _objc_alloc();
  func_0x00010c00d820();
  lVar14 = param_1 + _DAT_1127542b8;
  _objc_loadWeakRetained();
  lVar3 = lVar14;
  func_0x00010c244420();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar14);
  lVar14 = param_1 + _DAT_1127542d4;
  _objc_loadWeakRetained();
  lVar4 = lVar14;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar14);
  lVar15 = (long)_DAT_1127542b0;
  lVar14 = param_1 + lVar15;
  _objc_loadWeakRetained();
  lVar5 = lVar14;
  func_0x00010bfcdf20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar14);
  lVar14 = param_1 + lVar15;
  _objc_loadWeakRetained();
  lVar6 = lVar14;
  func_0x00010bfcc7e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar14);
  lVar15 = param_1 + lVar15;
  _objc_loadWeakRetained();
  lVar7 = lVar15;
  func_0x00010c105900();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar15);
  lVar14 = param_1 + _DAT_11275429c;
  _objc_loadWeakRetained();
  lVar15 = lVar14;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar15;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar15);
  _objc_release(lVar14);
  lVar14 = param_1 + _DAT_112754310;
  _objc_loadWeakRetained();
  lVar9 = lVar14;
  func_0x00010c2946e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar14);
  puVar10 = PTR_PTR_1126cf4b8;
  _objc_alloc();
  lVar14 = param_1 + _DAT_1127542f8;
  _objc_loadWeakRetained();
  lVar11 = lVar14;
  func_0x00010c2932e0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1 + _DAT_1127542a0;
  _objc_loadWeakRetained();
  lVar12 = lVar15;
  func_0x00010bf62060();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112754344;
  _objc_loadWeakRetained();
  lVar13 = param_1;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00df00(0x4000000000000000,puVar10,param_2,lVar1,param_3,puVar2,lVar3,lVar4,param_4,
                      lVar5,lVar6,lVar7,lVar8,lVar9,lVar11,lVar12,lVar13);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(lVar13);
  _objc_release(param_1);
  _objc_release(lVar12);
  _objc_release(lVar15);
  _objc_release(lVar11);
  _objc_release(lVar14);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(puVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 10696d348; end: 10696d487; -[SCLegacyStoriesServicesEntryPoint _createStoriesSyncNetworkRequesterWithMyStoriesSyncer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10696d348(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar1 = param_1 + _DAT_1127542d8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0cf020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar6 = (long)_DAT_1127542a0;
  lVar1 = param_1 + lVar6;
  _objc_loadWeakRetained();
  lVar3 = lVar1;
  func_0x00010bfb8d60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  param_1 = param_1 + lVar6;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c258240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  if (lVar3 != 0) {
    func_0x00010c1d0640(puVar4,param_2,lVar3,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c7a68);
  }
  if (param_3 != 0) {
    func_0x00010c1d0640(puVar4,param_2,param_3,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c7a80)
    ;
  }
  puVar5 = PTR_PTR_1126cf138;
  _objc_alloc(PTR_PTR_1126cf138);
  func_0x00010c02c3e0();
  _objc_release(puVar4);
  _objc_release(lVar1);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10696d488; end: 10696d6cb; -[SCLegacyStoriesServicesEntryPoint _playbackManagementDataProviderWithMyStoriesCoordinator:snapProPendingSnapManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10696d488(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  _objc_retain(param_4);
  lVar9 = (long)_DAT_1127542a0;
  _objc_retain(param_3);
  lVar1 = param_1 + lVar9;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c258580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_112754348;
  _objc_loadWeakRetained(lVar1);
  lVar3 = lVar1;
  func_0x00010bfb8c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar9 = param_1 + lVar9;
  _objc_loadWeakRetained(lVar9);
  lVar4 = lVar9;
  func_0x00010c243de0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  lVar1 = param_1 + _DAT_1127542bc;
  _objc_loadWeakRetained();
  lVar9 = lVar1;
  func_0x00010c08d320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_11275429c;
  _objc_loadWeakRetained();
  lVar5 = lVar1;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar1);
  param_1 = param_1 + _DAT_1127542d4;
  _objc_loadWeakRetained();
  lVar1 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar7 = PTR_PTR_1126ae720;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_10696d6cc;
  puStack_88 = &UNK_11094dcd0;
  lStack_80 = lVar9;
  lStack_78 = lVar6;
  uStack_70 = param_4;
  lStack_68 = lVar1;
  _objc_retain(param_4);
  func_0x00010bf11fe0(puVar7,param_2,&puStack_a0);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126cf4c8;
  _objc_alloc(PTR_PTR_1126cf4c8);
  func_0x00010c04cfe0();
  _objc_release(param_3);
  _objc_release(puVar7);
  _objc_release(uStack_70);
  _objc_release(param_4);
  _objc_release(lVar1);
  _objc_release(lVar6);
  _objc_release(lVar9);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 10696d6cc; end: 10696d6ff;  */

void FUN_10696d6cc(void)

{
  _objc_alloc(PTR_PTR_1126cf4c0);
  func_0x00010bffaa60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10696d700; end: 10696d817; -[SCLegacyStoriesServicesEntryPoint _cachedSummaryInfoProviderWithMyStoriesCoordinator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10696d700(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_1127542a0;
  _objc_retain(param_3);
  lVar5 = param_1 + lVar5;
  _objc_loadWeakRetained(lVar5);
  lVar1 = lVar5;
  func_0x00010c258580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  lVar5 = param_1 + _DAT_1127542bc;
  _objc_loadWeakRetained(lVar5);
  lVar2 = lVar5;
  func_0x00010c08d900();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  param_1 = param_1 + _DAT_11275429c;
  _objc_loadWeakRetained(param_1);
  lVar5 = param_1;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar5;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(param_1);
  puVar4 = PTR_PTR_1126cf4d0;
  _objc_alloc(PTR_PTR_1126cf4d0);
  func_0x00010c04d000();
  _objc_release(param_3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10696d818; end: 10696dad3; -[SCLegacyStoriesServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10696d818(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112754370);
  _objc_destroyWeak(param_1 + _DAT_112754328);
  _objc_destroyWeak(param_1 + _DAT_11275436c);
  _objc_destroyWeak(param_1 + _DAT_1127542c4);
  _objc_destroyWeak(param_1 + _DAT_112754308);
  _objc_destroyWeak(param_1 + _DAT_11275430c);
  _objc_destroyWeak(param_1 + _DAT_1127542f4);
  _objc_storeStrong(param_1 + _DAT_1127542ac,0);
  _objc_storeStrong(param_1 + _DAT_1127542a8,0);
  _objc_destroyWeak(param_1 + _DAT_1127542c0);
  _objc_destroyWeak(param_1 + _DAT_1127542f0);
  _objc_destroyWeak(param_1 + _DAT_112754330);
  _objc_destroyWeak(param_1 + _DAT_11275432c);
  _objc_destroyWeak(param_1 + _DAT_112754368);
  _objc_destroyWeak(param_1 + _DAT_1127542ec);
  _objc_destroyWeak(param_1 + _DAT_112754334);
  _objc_destroyWeak(param_1 + _DAT_112754300);
  _objc_destroyWeak(param_1 + _DAT_112754304);
  _objc_destroyWeak(param_1 + _DAT_112754364);
  _objc_destroyWeak(param_1 + _DAT_112754340);
  _objc_destroyWeak(param_1 + _DAT_112754344);
  _objc_destroyWeak(param_1 + _DAT_1127542d0);
  _objc_destroyWeak(param_1 + _DAT_112754320);
  _objc_destroyWeak(param_1 + _DAT_1127542fc);
  _objc_destroyWeak(param_1 + _DAT_1127542f8);
  _objc_destroyWeak(param_1 + _DAT_112754348);
  _objc_destroyWeak(param_1 + _DAT_11275431c);
  _objc_destroyWeak(param_1 + _DAT_112754318);
  _objc_destroyWeak(param_1 + _DAT_1127542e4);
  _objc_destroyWeak(param_1 + _DAT_1127542e0);
  _objc_destroyWeak(param_1 + _DAT_112754338);
  _objc_destroyWeak(param_1 + _DAT_1127542dc);
  _objc_destroyWeak(param_1 + _DAT_1127542b4);
  _objc_destroyWeak(param_1 + _DAT_112754360);
  _objc_destroyWeak(param_1 + _DAT_1127542d4);
  _objc_destroyWeak(param_1 + _DAT_1127542d8);
  _objc_destroyWeak(param_1 + _DAT_1127542b0);
  _objc_destroyWeak(param_1 + _DAT_112754324);
  _objc_destroyWeak(param_1 + _DAT_1127542e8);
  _objc_destroyWeak(param_1 + _DAT_1127542b8);
  _objc_destroyWeak(param_1 + _DAT_1127542bc);
  _objc_destroyWeak(param_1 + _DAT_1127542a0);
  _objc_destroyWeak(param_1 + _DAT_112754310);
  _objc_destroyWeak(param_1 + _DAT_112754314);
  _objc_destroyWeak(param_1 + _DAT_11275429c);
  _objc_destroyWeak(param_1 + _DAT_11275433c);
  _objc_destroyWeak(param_1 + _DAT_11275435c);
  _objc_destroyWeak(param_1 + _DAT_112754358);
  _objc_destroyWeak(param_1 + _DAT_112754354);
  _objc_destroyWeak(param_1 + _DAT_112754350);
  _objc_destroyWeak(param_1 + _DAT_11275434c);
  _objc_storeStrong(param_1 + _DAT_1127542c8,0);
  _objc_storeStrong(param_1 + _DAT_1127542a4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127542cc,0);
  return;
}



/* Entry: 10696dad4; end: 10696db8b; -[SCLegacyStoriesWarmupEntryPoint begin] */

void FUN_10696dad4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_10696db8c;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010007380c(uVar1,&puStack_50);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10696db8c; end: 10696dbb7;  */

void FUN_10696db8c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010beea6e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10696dbb8; end: 10696dc23; -[SCLegacyStoriesWarmupEntryPoint _warmup] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10696dbb8(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + _DAT_112754374;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf27540();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a1c40();
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10696dc24; end: 10696dc5b; -[SCLegacyStoriesWarmupEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10696dc24(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112754374);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112754378);
  return;
}



/* Entry: 10696dc5c; end: 10696ddb3; -[SCUserTaggingStoryShareMessageSender initWithUserSession:customStoriesDataFetcher:conversationDestinationParser:storyShareSender:] */

undefined1 *
FUN_10696dc5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126f3e58;
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
    puVar3 = PTR_PTR_1126cf4d8;
    _objc_alloc();
    func_0x00010c004b00();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10696ddb4; end: 10696e057; -[SCUserTaggingStoryShareMessageSender notifyTaggedUserWithStoryType:mediaType:storyIdToStorySnapId:notifiedUserIds:businessId:storyTypeVariant:] */

void FUN_10696ddb4(undefined8 param_1,undefined8 param_2,long param_3,undefined1 *param_4,
                  undefined1 *param_5,undefined1 *param_6,undefined8 param_7)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if (param_3 < 2) {
    if (param_3 == 0) {
      param_4 = param_5;
      puVar4 = param_6;
      func_0x00010be64dc0(param_1);
    }
    else if (param_3 == 1) {
      param_4 = auStack_f0;
      puVar4 = (undefined1 *)0x10;
      puVar2 = param_5;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (puVar2 != (undefined1 *)0x0) {
        puVar4 = (undefined1 *)0x0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(param_5);
          }
          puVar3 = param_5;
          func_0x00010c0e00e0(param_5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010be646c0(param_1);
          _objc_release(puVar3);
          puVar4 = puVar4 + 1;
        } while (puVar2 != puVar4);
        param_4 = auStack_f0;
        puVar4 = (undefined1 *)0x10;
        puVar2 = param_5;
        func_0x00010bf52a60();
      }
    }
  }
  else if (param_3 == 2) {
    func_0x00010be64dc0(param_1);
    _objc_retain(param_5);
    param_4 = auStack_170;
    puVar4 = (undefined1 *)0x10;
    puVar2 = param_5;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (puVar2 != (undefined1 *)0x0) {
      puVar4 = (undefined1 *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_5);
        }
        puVar3 = param_5;
        func_0x00010c0e00e0(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be646c0(param_1);
        _objc_release(puVar3);
        puVar4 = puVar4 + 1;
      } while (puVar2 != puVar4);
      param_4 = auStack_170;
      puVar4 = (undefined1 *)0x10;
      puVar2 = param_5;
      func_0x00010bf52a60();
    }
    _objc_release(param_5);
  }
  else if (param_3 == 3) {
    param_4 = param_5;
    puVar4 = param_6;
    func_0x00010be64ee0(param_1);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar4);
  uVar5 = *(undefined8 *)(param_5 + 8);
  _objc_retain(param_4);
  func_0x00010c2923e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(uVar5);
  if (puVar2 != (undefined1 *)0x0) {
    puVar3 = puVar4;
    func_0x000100504554(puVar4,&PTR___NSConcreteGlobalBlock_11094dd20);
    func_0x00010c15cd60(*(undefined8 *)(param_5 + 0x28));
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 10696e058; end: 10696e123; -[SCUserTaggingStoryShareMessageSender _notifyMyStoryTaggedUserWithMediaType:storyIdToStorySnapId:notifiedUserIds:] */

void FUN_10696e058(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_5);
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_4);
  func_0x00010c2923e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(uVar2);
  if (lVar1 != 0) {
    uVar2 = param_5;
    func_0x000100504554(param_5,&PTR___NSConcreteGlobalBlock_11094dd20);
    func_0x00010c15cd60(*(undefined8 *)(param_1 + 0x28));
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10696e124; end: 10696e133;  */

void FUN_10696e124(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c294270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b01c0,PTR_s_userWithId__112682ac0,param_2);
  return;
}



/* Entry: 10696e134; end: 10696e20b; -[SCUserTaggingStoryShareMessageSender _notifyPublicStoryTaggedUserWithMediaType:storyIdToStorySnapId:notifiedUserIds:businessId:storyTypeVariant:] */

void FUN_10696e134(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,int param_7)

{
  undefined8 uVar1;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_4 != 0) {
    uVar1 = param_5;
    func_0x000100504554(param_5,&PTR___NSConcreteGlobalBlock_11094dd40);
    if (param_7 == 1) {
      func_0x00010c15ca80();
    }
    else {
      func_0x00010c15cd60(*(undefined8 *)(param_1 + 0x28));
    }
    _objc_release(uVar1);
  }
  _objc_release(param_4);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10696e20c; end: 10696e21b;  */

void FUN_10696e20c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c294270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b01c0,PTR_s_userWithId__112682ac0,param_2);
  return;
}



/* Entry: 10696e21c; end: 10696e3ab; -[SCUserTaggingStoryShareMessageSender _notifyCustomStoryTaggedUserWithMediaType:storySnapId:storyId:notifiedUserIds:] */

void FUN_10696e21c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  ppuVar1 = &puStack_a0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar4);
  _objc_initWeak(auStack_58,param_1);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_10696e3ac;
  puStack_88 = &UNK_11094dd60;
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(param_4);
  uStack_80 = param_4;
  uStack_60 = param_3;
  _objc_retain(param_6);
  uStack_78 = param_6;
  uStack_70 = uVar4;
  _objc_retainBlock(&puStack_a0);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf62500(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(ppuVar1);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar4);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10696e3ac; end: 10696e417;  */

void FUN_10696e3ac(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c27dd80();
  if (lVar1 == 1) {
    param_1 = param_1 + 0x38;
    _objc_loadWeakRetained(param_1);
    func_0x00010be9b280();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10696e418; end: 10696e53b; -[SCUserTaggingStoryShareMessageSender _scheduleMessageWithCustomStoryMetadata:storySnapId:mediaType:mentionedUserIds:performer:] */

void FUN_10696e418(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_retain(param_7);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c225c20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
  uVar2 = param_3;
  func_0x00010c29ef80(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c225c20(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  func_0x00010c069840(puVar1);
  puVar4 = puVar1;
  func_0x000100504554(puVar1,&PTR___NSConcreteGlobalBlock_11094dd90);
  func_0x00010c15cd60(*(undefined8 *)(param_1 + 0x28));
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10696e53c; end: 10696e54b;  */

void FUN_10696e53c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c294270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b01c0,PTR_s_userWithId__112682ac0,param_2);
  return;
}



/* Entry: 10696e54c; end: 10696e5ab; -[SCUserTaggingStoryShareMessageSender .cxx_destruct] */

void FUN_10696e54c(long param_1)

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



/* Entry: 10696e5ac; end: 10696e5f7; -[SCStoriesAsyncPostingTimestamps initWithStartPostingTime:postedTime:] */

void FUN_10696e5ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f3e60;
  uStack_30 = param_3;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    *(undefined8 *)((long)puVar1 + 0x10) = param_2;
  }
  return;
}



/* Entry: 10696e5f8; end: 10696e61b; -[SCStoriesAsyncPostingTimestamps copyWithZone:] */

undefined8 FUN_10696e5f8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10696e61c; end: 10696e6af; -[SCStoriesAsyncPostingTimestamps hash] */

ulong * FUN_10696e61c(long param_1,undefined8 param_2,ulong *param_3)

{
  ulong uVar1;
  bool bVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  double dVar7;
  double dVar8;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = ~*(ulong *)(param_1 + 8) + *(ulong *)(param_1 + 8) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_28 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_28 = uStack_28 ^ uStack_28 >> 0x16;
  uVar5 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_20 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_20 = uStack_20 ^ uStack_20 >> 0x16;
  puVar3 = &uStack_28;
  func_0x000100505190(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
    puVar6 = (ulong *)0x1;
  }
  else {
    puVar6 = (ulong *)0x0;
    if ((puVar3 != (ulong *)0x0) && (param_3 != (ulong *)0x0)) {
      puVar6 = puVar3;
      _objc_opt_class(puVar3);
      puVar4 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar6);
      if (((ulong)puVar4 & 1) != 0) {
        dVar8 = ABS((double)puVar3[1] - (double)param_3[1]);
        dVar7 = ABS((double)puVar3[1] + (double)param_3[1]) * 2.220446049250313e-16;
        bVar2 = true;
        if ((2.2250738585072014e-308 <= dVar8) && (bVar2 = false, !NAN(dVar8) && !NAN(dVar7))) {
          bVar2 = dVar8 < dVar7;
        }
        if (bVar2) {
          dVar7 = ABS((double)puVar3[2] + (double)param_3[2]) * 2.220446049250313e-16;
          if (dVar7 <= 2.2250738585072014e-308) {
            dVar7 = 2.2250738585072014e-308;
          }
          puVar6 = (ulong *)(ulong)(ABS((double)puVar3[2] - (double)param_3[2]) < dVar7);
          goto LAB_10696e774;
        }
      }
      puVar6 = (ulong *)0x0;
    }
  }
LAB_10696e774:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10696e6b0; end: 10696e78f; -[SCStoriesAsyncPostingTimestamps isEqual:] */

bool FUN_10696e6b0(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  double dVar4;
  double dVar5;
  
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
      if ((uVar3 & 1) != 0) {
        dVar5 = ABS(*(double *)(param_1 + 8) - *(double *)(param_3 + 8));
        dVar4 = ABS(*(double *)(param_1 + 8) + *(double *)(param_3 + 8)) * 2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar5) && (bVar1 = false, !NAN(dVar5) && !NAN(dVar4))) {
          bVar1 = dVar5 < dVar4;
        }
        if (bVar1) {
          dVar4 = ABS(*(double *)(param_1 + 0x10) + *(double *)(param_3 + 0x10)) *
                  2.220446049250313e-16;
          if (dVar4 <= 2.2250738585072014e-308) {
            dVar4 = 2.2250738585072014e-308;
          }
          bVar1 = ABS(*(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10)) < dVar4;
          goto LAB_10696e774;
        }
      }
      bVar1 = false;
    }
  }
LAB_10696e774:
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10696e790; end: 10696e797; -[SCStoriesAsyncPostingTimestamps startPostingTime] */

undefined8 FUN_10696e790(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10696e798; end: 10696e79f; -[SCStoriesAsyncPostingTimestamps postedTime] */

undefined8 FUN_10696e798(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10696e7a0; end: 10696e84b; -[SCStoriesAppUserLifecycleObserver onUserLoggedIn] */

void FUN_10696e7a0(long param_1)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010be0f400(param_1);
  *(undefined1 *)(param_1 + 0x40) = 0;
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10696e84c; end: 10696e87f;  */

void FUN_10696e84c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be15560();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10696e880; end: 10696e8c3; -[SCStoriesAppUserLifecycleObserver onUserRegistered] */

void FUN_10696e880(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa6ca0();
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + 0x40) = 0;
  return;
}



/* Entry: 10696e8c4; end: 10696eb3b; -[SCStoriesAppUserLifecycleObserver onAppWillEnterForeground] */

void FUN_10696e8c4(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  if (*(char *)(param_1 + 0x40) == '\x01') {
    func_0x00010be14800(param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf81460();
    _objc_release(uVar1);
    if ((int)uVar3 != 0) {
      func_0x00010be76640(param_1);
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126c2320;
    func_0x00010bfa6c80(PTR_PTR_1126c2320);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf1f360();
    _objc_release(puVar2);
    _objc_release(uVar1);
    if ((int)uVar3 == 0) {
      uVar3 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa6ca0();
      _objc_release(uVar3);
    }
    else {
      func_0x00010be11500(param_1);
    }
    uVar1 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf81480();
    _objc_release(uVar1);
    if ((int)uVar3 != 0) {
      func_0x00010be76640(param_1);
    }
    _objc_initWeak(auStack_58,param_1);
    puVar4 = PTR_PTR_1126b6ae8;
    func_0x00010c22ba80(PTR_PTR_1126b6ae8);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126ae960;
    puVar5 = PTR_PTR_1126c2300;
    func_0x00010bf06640(PTR_PTR_1126c2300);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c258080(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126ae970;
    func_0x00010c0c7320(PTR_PTR_1126ae970);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(PTR___dispatch_main_q_11034be20);
    _objc_copyWeak(auStack_60,auStack_58);
    func_0x00010c2a1620(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(puVar6);
    _objc_release(puVar2);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  *(undefined1 *)(param_1 + 0x40) = 0;
  return;
}



/* Entry: 10696eb3c; end: 10696eba7;  */

void FUN_10696eb3c(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6bc40();
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6bc60();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10696eba8; end: 10696ecb3; -[SCStoriesAppUserLifecycleObserver onAppDidEnterBackground] */

void FUN_10696eba8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6bc40();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6bc40();
  _objc_release(uVar1);
  func_0x00010bf3ace0(*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6bc60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6bcc0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb3240();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf39e80();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c340();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdda950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cancelGhostToStoriesLogging_1125543f0);
  return;
}



/* Entry: 10696ecb4; end: 10696ecb7; -[SCStoriesAppUserLifecycleObserver onAppWillResignActive] */

void FUN_10696ecb4(void)

{
  return;
}



/* Entry: 10696ecb8; end: 10696ecbb; -[SCStoriesAppUserLifecycleObserver onAppWillTerminate] */

void FUN_10696ecb8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdda950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cancelGhostToStoriesLogging_1125543f0);
  return;
}



/* Entry: 10696ecbc; end: 10696ed73; -[SCStoriesAppUserLifecycleObserver _cancelGhostToStoriesLogging] */

/* WARNING: Possible PIC construction at 0x00010696ecd0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010696ecd4) */

void FUN_10696ecbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beec550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x48),PTR_s_abortLogging_112598af8);
  return;
}



/* Entry: 10696ed74; end: 10696ed83;  */

void FUN_10696ed74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be0f410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__fetchAllStoriesWithTriggerType__1125616a0,3,0);
  return;
}



/* Entry: 10696ed84; end: 10696eee7; -[SCStoriesAppUserLifecycleObserver _fetchFriendStoriesOnWarmStart] */

void FUN_10696ed84(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  puVar3 = PTR_PTR_1126be840;
  puVar1 = PTR_PTR_1126aeec0;
  puVar4 = PTR_PTR_1126ae960;
  puVar2 = PTR_PTR_1126be848;
  func_0x00010bfaa760(PTR_PTR_1126be848);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c258080(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4bc80(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126ae970;
  func_0x00010c292920(PTR_PTR_1126ae970);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010bf0caa0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 10696eee8; end: 10696efb3;  */

void FUN_10696eee8(long param_1,uint param_2)

{
  undefined8 uVar1;
  
  if ((param_2 & 1) == 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    if (param_1 != 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x60);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f7fc0();
      _objc_release(uVar1);
    }
    _objc_release(param_1);
  }
  return;
}



/* Entry: 10696efb4; end: 10696f047; -[SCStoriesAppUserLifecycleObserver _fetchAllStoriesWithTriggerType:myStoriesCallback:] */

void FUN_10696efb4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  _objc_retain(param_4);
  func_0x00010c07f880(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa8d40();
  _objc_release(param_4);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa6ca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10696f048; end: 10696f097; -[SCStoriesAppUserLifecycleObserver _fetchViewerInfoWithFetchSource:] */

void FUN_10696f048(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfab5e0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10696f098; end: 10696f197; -[SCStoriesAppUserLifecycleObserver _postNotificationForForceBadgeShown] */

void FUN_10696f098(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c2238;
  func_0x00010bf153a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c2238;
  func_0x00010bfb49a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1049a0(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar1 + 0x68,0);
  _objc_storeStrong(puVar1 + 0x60,0);
  _objc_storeStrong(puVar1 + 0x58,0);
  _objc_storeStrong(puVar1 + 0x50,0);
  _objc_storeStrong(puVar1 + 0x48,0);
  _objc_storeStrong(puVar1 + 0x38,0);
  _objc_storeStrong(puVar1 + 0x30,0);
  _objc_storeStrong(puVar1 + 0x28,0);
  _objc_storeStrong(puVar1 + 0x20,0);
  _objc_storeStrong(puVar1 + 0x18,0);
  _objc_storeStrong(puVar1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar1 + 8,0);
  return;
}



/* Entry: 10696f198; end: 10696f23f; -[SCStoriesAppUserLifecycleObserver .cxx_destruct] */

void FUN_10696f198(long param_1)

{
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
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



/* Entry: 10696f240; end: 10696f3c3;  */

/* WARNING: Removing unreachable block (ram,0x00010696fc38) */
/* WARNING: Removing unreachable block (ram,0x00010696fe5c) */
/* WARNING: Type propagation algorithm not settling */

char **** FUN_10696f240(long param_1,undefined *param_2,char ****param_3,char ****param_4,
                       char ****param_5)

{
  char cVar1;
  bool bVar2;
  char ****ppppcVar3;
  char ****ppppcVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  char ****ppppcVar8;
  undefined8 *puVar9;
  char ****ppppcVar10;
  long lVar11;
  long *plVar12;
  char ***pppcVar13;
  char ****unaff_x21;
  char *pcVar14;
  char *unaff_x22;
  undefined8 *puVar15;
  undefined8 *puVar16;
  char *unaff_x23;
  undefined1 *unaff_x24;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined1 *puStack_488;
  undefined1 auStack_480 [24];
  undefined1 auStack_468 [24];
  undefined8 auStack_450 [2];
  char cStack_439;
  long lStack_438;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined1 *puStack_3c8;
  undefined1 auStack_3c0 [24];
  undefined1 auStack_3a8 [24];
  undefined8 auStack_390 [2];
  char cStack_379;
  long lStack_378;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 *puStack_300;
  undefined8 auStack_2f8 [2];
  char cStack_2e1;
  undefined8 auStack_2e0 [2];
  char cStack_2c9;
  long lStack_2c8;
  undefined1 *puStack_2c0;
  char *pcStack_2b8;
  char *pcStack_2b0;
  char *pcStack_2a8;
  long lStack_2a0;
  char ****ppppcStack_298;
  undefined1 ****ppppuStack_290;
  code *pcStack_288;
  char ***pppcStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  char ****ppppcStack_260;
  undefined1 auStack_258 [24];
  long alStack_240 [2];
  char cStack_229;
  long lStack_228;
  undefined1 *puStack_220;
  char *pcStack_218;
  char *pcStack_210;
  char ****ppppcStack_208;
  long lStack_200;
  char ****ppppcStack_1f8;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  char ***pppcStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  char ****ppppcStack_1c0;
  undefined1 auStack_1b8 [24];
  long alStack_1a0 [2];
  undefined1 uStack_189;
  long lStack_188;
  undefined1 *puStack_180;
  char *pcStack_178;
  char *pcStack_170;
  char ****ppppcStack_168;
  long lStack_160;
  char ****ppppcStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  char ***pppcStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  char ****ppppcStack_120;
  undefined1 auStack_118 [24];
  long alStack_100 [2];
  undefined1 uStack_e9;
  long lStack_e8;
  undefined1 *puStack_e0;
  char *pcStack_d8;
  char *pcStack_d0;
  char ****ppppcStack_c8;
  long lStack_c0;
  char ****ppppcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char ***pppcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  char ****ppppcStack_80;
  undefined1 auStack_78 [24];
  long alStack_60 [2];
  undefined1 uStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppcVar3 = (char ****)0x0;
  if (param_1 != 0) {
    plVar12 = *(long **)(param_1 + 8);
    unaff_x22 = "false";
    unaff_x23 = "true";
    pcVar5 = unaff_x23;
    if ((int)param_2 == 0) {
      pcVar5 = unaff_x22;
    }
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,pcVar5);
    pcVar5 = unaff_x23;
    if ((int)param_3 == 0) {
      pcVar5 = unaff_x22;
    }
    func_0x00010002b838(alStack_60,pcVar5);
    pppcStack_98 = (char ***)0x0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&pppcStack_98,auStack_78,&lStack_48,2);
    param_2 = &UNK_11094ddb0;
    unaff_x21 = &pppcStack_98;
    param_3 = &pppcStack_98;
    (**(code **)(*plVar12 + 0x18))(plVar12);
    ppppcVar3 = (char ****)&ppppcStack_80;
    ppppcStack_80 = unaff_x21;
    func_0x00010007e5dc();
    lVar11 = 0;
    do {
      if ((char)(&uStack_49)[lVar11] < '\0') {
        ppppcVar3 = *(char *****)((long)alStack_60 + lVar11);
        __ZdlPv();
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return ppppcVar3;
  }
  ___stack_chk_fail();
  ppppcStack_80 = unaff_x21;
  func_0x00010007e5dc(&ppppcStack_80);
  lVar11 = -0x30;
  ppppcVar4 = (char ****)&uStack_49;
  do {
    ppppcVar8 = ppppcVar4 + -3;
    if (*(char *)ppppcVar4 < '\0') {
      __ZdlPv(*(undefined8 *)((long)ppppcVar4 + -0x17));
    }
    lVar11 = lVar11 + 0x18;
    ppppcVar4 = ppppcVar8;
  } while (lVar11 != 0);
  ppppcVar4 = ppppcVar3;
  __Unwind_Resume();
  puStack_e0 = unaff_x24;
  pcStack_d8 = unaff_x23;
  pcStack_d0 = unaff_x22;
  ppppcStack_c8 = ppppcVar8;
  lStack_c0 = lVar11;
  ppppcStack_b8 = ppppcVar3;
  puStack_b0 = &stack0xfffffffffffffff0;
  pcStack_a8 = FUN_10696f3c4;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppcVar3 = (char ****)0x0;
  if (ppppcVar4 != (char ****)0x0) {
    pppcVar13 = ppppcVar4[1];
    unaff_x22 = "false";
    unaff_x23 = "true";
    pcVar5 = unaff_x23;
    if ((int)param_2 == 0) {
      pcVar5 = unaff_x22;
    }
    unaff_x24 = auStack_118;
    func_0x00010002b838(auStack_118,pcVar5);
    pcVar5 = unaff_x23;
    if ((int)param_3 == 0) {
      pcVar5 = unaff_x22;
    }
    func_0x00010002b838(alStack_100,pcVar5);
    pppcStack_138 = (char ***)0x0;
    uStack_130 = 0;
    uStack_128 = 0;
    func_0x00010007e1e8(&pppcStack_138,auStack_118,&lStack_e8,2);
    param_2 = &UNK_11094de00;
    ppppcVar8 = &pppcStack_138;
    param_3 = &pppcStack_138;
    (*(code *)(*pppcVar13)[3])(pppcVar13);
    ppppcVar3 = (char ****)&ppppcStack_120;
    ppppcStack_120 = ppppcVar8;
    func_0x00010007e5dc();
    lVar11 = 0;
    do {
      if ((char)(&uStack_e9)[lVar11] < '\0') {
        ppppcVar3 = *(char *****)((long)alStack_100 + lVar11);
        __ZdlPv();
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return ppppcVar3;
  }
  ___stack_chk_fail();
  ppppcStack_120 = ppppcVar8;
  func_0x00010007e5dc(&ppppcStack_120);
  lVar11 = -0x30;
  ppppcVar4 = (char ****)&uStack_e9;
  do {
    ppppcVar8 = ppppcVar4 + -3;
    if (*(char *)ppppcVar4 < '\0') {
      __ZdlPv(*(undefined8 *)((long)ppppcVar4 + -0x17));
    }
    lVar11 = lVar11 + 0x18;
    ppppcVar4 = ppppcVar8;
  } while (lVar11 != 0);
  ppppcVar4 = ppppcVar3;
  __Unwind_Resume();
  puStack_180 = unaff_x24;
  pcStack_178 = unaff_x23;
  pcStack_170 = unaff_x22;
  ppppcStack_168 = ppppcVar8;
  lStack_160 = lVar11;
  ppppcStack_158 = ppppcVar3;
  ppuStack_150 = &puStack_b0;
  pcStack_148 = FUN_10696f548;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppcVar3 = (char ****)0x0;
  if (ppppcVar4 != (char ****)0x0) {
    pppcVar13 = ppppcVar4[1];
    unaff_x22 = "false";
    unaff_x23 = "true";
    pcVar5 = unaff_x23;
    if ((int)param_2 == 0) {
      pcVar5 = unaff_x22;
    }
    unaff_x24 = auStack_1b8;
    func_0x00010002b838(auStack_1b8,pcVar5);
    pcVar5 = unaff_x23;
    if ((int)param_3 == 0) {
      pcVar5 = unaff_x22;
    }
    func_0x00010002b838(alStack_1a0,pcVar5);
    pppcStack_1d8 = (char ***)0x0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    func_0x00010007e1e8(&pppcStack_1d8,auStack_1b8,&lStack_188,2);
    param_2 = &UNK_11094de50;
    ppppcVar8 = &pppcStack_1d8;
    param_3 = &pppcStack_1d8;
    (*(code *)(*pppcVar13)[3])(pppcVar13);
    ppppcVar3 = (char ****)&ppppcStack_1c0;
    ppppcStack_1c0 = ppppcVar8;
    func_0x00010007e5dc();
    lVar11 = 0;
    do {
      if ((char)(&uStack_189)[lVar11] < '\0') {
        ppppcVar3 = *(char *****)((long)alStack_1a0 + lVar11);
        __ZdlPv();
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return ppppcVar3;
  }
  ___stack_chk_fail();
  ppppcStack_1c0 = ppppcVar8;
  func_0x00010007e5dc(&ppppcStack_1c0);
  lVar11 = -0x30;
  ppppcVar4 = (char ****)&uStack_189;
  do {
    ppppcVar8 = ppppcVar4 + -3;
    if (*(char *)ppppcVar4 < '\0') {
      __ZdlPv(*(undefined8 *)((long)ppppcVar4 + -0x17));
    }
    lVar11 = lVar11 + 0x18;
    ppppcVar4 = ppppcVar8;
  } while (lVar11 != 0);
  ppppcVar4 = ppppcVar3;
  __Unwind_Resume();
  puStack_220 = unaff_x24;
  pcStack_218 = unaff_x23;
  pcStack_210 = unaff_x22;
  ppppcStack_208 = ppppcVar8;
  lStack_200 = lVar11;
  ppppcStack_1f8 = ppppcVar3;
  pppuStack_1f0 = &ppuStack_150;
  pcStack_1e8 = FUN_10696f6cc;
  lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppcVar3 = (char ****)0x0;
  if (ppppcVar4 != (char ****)0x0) {
    pppcVar13 = ppppcVar4[1];
    unaff_x22 = "false";
    unaff_x23 = "true";
    pcVar5 = unaff_x23;
    if ((int)param_2 == 0) {
      pcVar5 = unaff_x22;
    }
    unaff_x24 = auStack_258;
    func_0x00010002b838(auStack_258,pcVar5);
    pcVar5 = unaff_x23;
    if ((int)param_3 == 0) {
      pcVar5 = unaff_x22;
    }
    func_0x00010002b838(alStack_240,pcVar5);
    pppcStack_278 = (char ***)0x0;
    uStack_270 = 0;
    uStack_268 = 0;
    func_0x00010007e1e8(&pppcStack_278,auStack_258,&lStack_228,2);
    param_2 = &UNK_11094dea0;
    ppppcVar8 = &pppcStack_278;
    param_3 = &pppcStack_278;
    (*(code *)(*pppcVar13)[3])(pppcVar13);
    ppppcVar3 = (char ****)&ppppcStack_260;
    ppppcStack_260 = ppppcVar8;
    func_0x00010007e5dc();
    lVar11 = 0;
    do {
      if ((&cStack_229)[lVar11] < '\0') {
        ppppcVar3 = *(char *****)((long)alStack_240 + lVar11);
        __ZdlPv();
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_228) {
    return ppppcVar3;
  }
  ___stack_chk_fail();
  ppppcStack_260 = ppppcVar8;
  func_0x00010007e5dc(&ppppcStack_260);
  lVar11 = -0x30;
  pcVar5 = &cStack_229;
  do {
    pcVar14 = pcVar5 + -0x18;
    if (*pcVar5 < '\0') {
      __ZdlPv(*(undefined8 *)(pcVar5 + -0x17));
    }
    lVar11 = lVar11 + 0x18;
    pcVar5 = pcVar14;
  } while (lVar11 != 0);
  ppppcVar4 = ppppcVar3;
  __Unwind_Resume();
  pcStack_288 = FUN_10696f850;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar15 = (undefined8 *)param_2;
  ppppcVar8 = param_3;
  ppppcVar10 = param_4;
  puStack_2c0 = unaff_x24;
  pcStack_2b8 = unaff_x23;
  pcStack_2b0 = unaff_x22;
  pcStack_2a8 = pcVar14;
  lStack_2a0 = lVar11;
  ppppcStack_298 = ppppcVar3;
  ppppuStack_290 = &pppuStack_1f0;
  _objc_retain(param_3);
  iVar6 = (int)ppppcVar8;
  if (ppppcVar4 != (char ****)0x0) {
    pppcVar13 = ppppcVar4[1];
    pcVar5 = "true";
    if ((int)param_2 == 0) {
      pcVar5 = "false";
    }
    func_0x00010002b838(auStack_2f8,pcVar5);
    _objc_retain(param_3);
    if (param_3 == (char ****)0x0) {
      pcVar5 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar5 = (char *)param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_2e0,pcVar5);
    uStack_318 = 0;
    uStack_310 = 0;
    uStack_308 = 0;
    func_0x00010007e1e8(&uStack_318,auStack_2f8,&lStack_2c8,2);
    puVar15 = (undefined8 *)&UNK_11094def0;
    puVar16 = &uStack_318;
    (*(code *)(*pppcVar13)[3])(pppcVar13);
    puStack_300 = &uStack_318;
    func_0x00010007e5dc(&puStack_300);
    lVar11 = 0;
    ppppcVar10 = param_4;
    do {
      if ((&cStack_2c9)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2e0 + lVar11));
      }
      iVar6 = (int)puVar16;
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  ppppcVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
    return ppppcVar3;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_2e1 < '\0') {
    __ZdlPv(auStack_2f8[0]);
  }
  _objc_release(param_3);
  __Unwind_Resume();
  puVar9 = &uStack_3e0;
  lStack_378 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar16 = puVar15;
  ppppcVar4 = ppppcVar10;
  ppppcVar8 = param_5;
  iVar7 = iVar6;
  _objc_retain(ppppcVar10);
  if (ppppcVar3 != (char ****)0x0) {
    pppcVar13 = ppppcVar3[1];
    pcVar5 = "true";
    if ((int)puVar15 == 0) {
      pcVar5 = "false";
    }
    func_0x00010002b838(auStack_3c0,pcVar5);
    pcVar5 = "true";
    if (iVar6 == 0) {
      pcVar5 = "false";
    }
    func_0x00010002b838(auStack_3a8,pcVar5);
    _objc_retain(ppppcVar10);
    if (ppppcVar10 == (char ****)0x0) {
      pcVar5 = "";
    }
    else {
      _objc_retainAutorelease(ppppcVar10);
      pcVar5 = (char *)ppppcVar10;
      func_0x00010bdc3520();
    }
    _objc_release(ppppcVar10);
    func_0x00010002b838(auStack_390,pcVar5);
    uStack_3e0 = 0;
    uStack_3d8 = 0;
    uStack_3d0 = 0;
    func_0x00010007e1e8(&uStack_3e0,auStack_3c0,&lStack_378,3);
    puVar16 = (undefined8 *)&UNK_11094df40;
    (*(code *)(*pppcVar13)[3])(pppcVar13);
    puStack_3c8 = (undefined1 *)&uStack_3e0;
    func_0x00010007e5dc(&puStack_3c8);
    lVar11 = 0;
    ppppcVar4 = param_5;
    do {
      if ((&cStack_379)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_390 + lVar11));
      }
      iVar7 = (int)puVar9;
      lVar11 = lVar11 + -0x18;
      puVar15 = &uStack_3e0;
    } while (lVar11 != -0x48);
  }
  ppppcVar3 = ppppcVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_378) {
    return ppppcVar3;
  }
  ___stack_chk_fail();
  _objc_release(ppppcVar10);
  do {
    puVar15 = (undefined8 *)((long)puVar15 + -0x18);
  } while (puVar15 != (undefined8 *)auStack_3c0);
  _objc_release(ppppcVar10);
  __Unwind_Resume();
  lStack_438 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(ppppcVar4);
  if (ppppcVar3 != (char ****)0x0) {
    pppcVar13 = ppppcVar3[1];
    pcVar5 = "true";
    if ((int)puVar16 == 0) {
      pcVar5 = "false";
    }
    func_0x00010002b838(auStack_480,pcVar5);
    pcVar5 = "true";
    if (iVar7 == 0) {
      pcVar5 = "false";
    }
    func_0x00010002b838(auStack_468,pcVar5);
    _objc_retain(ppppcVar4);
    if (ppppcVar4 == (char ****)0x0) {
      pcVar5 = "";
    }
    else {
      _objc_retainAutorelease(ppppcVar4);
      pcVar5 = (char *)ppppcVar4;
      func_0x00010bdc3520(ppppcVar4);
    }
    _objc_release(ppppcVar4);
    func_0x00010002b838(auStack_450,pcVar5);
    uStack_4a0 = 0;
    uStack_498 = 0;
    uStack_490 = 0;
    func_0x00010007e1e8(&uStack_4a0,auStack_480,&lStack_438,3);
    (*(code *)(*pppcVar13)[3])(pppcVar13,&UNK_11094df90,&uStack_4a0,ppppcVar8);
    puStack_488 = (undefined1 *)&uStack_4a0;
    func_0x00010007e5dc(&puStack_488);
    lVar11 = 0;
    do {
      if ((&cStack_439)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_450 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
      puVar16 = &uStack_4a0;
    } while (lVar11 != -0x48);
  }
  ppppcVar3 = ppppcVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_438) {
    ___stack_chk_fail();
    _objc_release(ppppcVar4);
    do {
      puVar16 = (undefined8 *)((long)puVar16 + -0x18);
    } while (puVar16 != (undefined8 *)auStack_480);
    _objc_release(ppppcVar4);
    __Unwind_Resume(ppppcVar3);
    if (ppppcRam00000001136c47e0 == (char ****)0x0) {
      ppppcVar3 = (char ****)PTR_PTR_1126ae980;
      func_0x00010bf00e00();
      do {
        if (ppppcRam00000001136c47e0 != (char ****)0x0) {
          ClearExclusiveLocal();
          _objc_release();
          return ppppcRam00000001136c47e0;
        }
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(0x1136c47e0,0x10);
        if (bVar2) {
          cVar1 = ExclusiveMonitorsStatus();
          ppppcRam00000001136c47e0 = ppppcVar3;
        }
      } while (cVar1 != '\0');
    }
    return ppppcRam00000001136c47e0;
  }
  return ppppcVar3;
}



/* Entry: 10696f3c4; end: 10696f547;  */

/* WARNING: Removing unreachable block (ram,0x00010696fc38) */
/* WARNING: Removing unreachable block (ram,0x00010696fe5c) */
/* WARNING: Type propagation algorithm not settling */

char **** FUN_10696f3c4(long param_1,undefined *param_2,char ****param_3,char ****param_4,
                       char ****param_5)

{
  char cVar1;
  bool bVar2;
  char ****ppppcVar3;
  char ****ppppcVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  char ****ppppcVar8;
  undefined8 *puVar9;
  char ****ppppcVar10;
  long lVar11;
  long *plVar12;
  char ***pppcVar13;
  char ****unaff_x21;
  char *pcVar14;
  char *unaff_x22;
  undefined8 *puVar15;
  undefined8 *puVar16;
  char *unaff_x23;
  undefined1 *unaff_x24;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined1 *puStack_3e8;
  undefined1 auStack_3e0 [24];
  undefined1 auStack_3c8 [24];
  undefined8 auStack_3b0 [2];
  char cStack_399;
  long lStack_398;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined1 *puStack_328;
  undefined1 auStack_320 [24];
  undefined1 auStack_308 [24];
  undefined8 auStack_2f0 [2];
  char cStack_2d9;
  long lStack_2d8;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 *puStack_260;
  undefined8 auStack_258 [2];
  char cStack_241;
  undefined8 auStack_240 [2];
  char cStack_229;
  long lStack_228;
  undefined1 *puStack_220;
  char *pcStack_218;
  char *pcStack_210;
  char *pcStack_208;
  long lStack_200;
  char ****ppppcStack_1f8;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  char ***pppcStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  char ****ppppcStack_1c0;
  undefined1 auStack_1b8 [24];
  long alStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined1 *puStack_180;
  char *pcStack_178;
  char *pcStack_170;
  char ****ppppcStack_168;
  long lStack_160;
  char ****ppppcStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  char ***pppcStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  char ****ppppcStack_120;
  undefined1 auStack_118 [24];
  long alStack_100 [2];
  undefined1 uStack_e9;
  long lStack_e8;
  undefined1 *puStack_e0;
  char *pcStack_d8;
  char *pcStack_d0;
  char ****ppppcStack_c8;
  long lStack_c0;
  char ****ppppcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char ***pppcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  char ****ppppcStack_80;
  undefined1 auStack_78 [24];
  long alStack_60 [2];
  undefined1 uStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppcVar3 = (char ****)0x0;
  if (param_1 != 0) {
    plVar12 = *(long **)(param_1 + 8);
    unaff_x22 = "false";
    unaff_x23 = "true";
    pcVar5 = unaff_x23;
    if ((int)param_2 == 0) {
      pcVar5 = unaff_x22;
    }
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,pcVar5);
    pcVar5 = unaff_x23;
    if ((int)param_3 == 0) {
      pcVar5 = unaff_x22;
    }
    func_0x00010002b838(alStack_60,pcVar5);
    pppcStack_98 = (char ***)0x0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&pppcStack_98,auStack_78,&lStack_48,2);
    param_2 = &UNK_11094de00;
    unaff_x21 = &pppcStack_98;
    param_3 = &pppcStack_98;
    (**(code **)(*plVar12 + 0x18))(plVar12);
    ppppcVar3 = (char ****)&ppppcStack_80;
    ppppcStack_80 = unaff_x21;
    func_0x00010007e5dc();
    lVar11 = 0;
    do {
      if ((char)(&uStack_49)[lVar11] < '\0') {
        ppppcVar3 = *(char *****)((long)alStack_60 + lVar11);
        __ZdlPv();
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return ppppcVar3;
  }
  ___stack_chk_fail();
  ppppcStack_80 = unaff_x21;
  func_0x00010007e5dc(&ppppcStack_80);
  lVar11 = -0x30;
  ppppcVar4 = (char ****)&uStack_49;
  do {
    ppppcVar8 = ppppcVar4 + -3;
    if (*(char *)ppppcVar4 < '\0') {
      __ZdlPv(*(undefined8 *)((long)ppppcVar4 + -0x17));
    }
    lVar11 = lVar11 + 0x18;
    ppppcVar4 = ppppcVar8;
  } while (lVar11 != 0);
  ppppcVar4 = ppppcVar3;
  __Unwind_Resume();
  puStack_e0 = unaff_x24;
  pcStack_d8 = unaff_x23;
  pcStack_d0 = unaff_x22;
  ppppcStack_c8 = ppppcVar8;
  lStack_c0 = lVar11;
  ppppcStack_b8 = ppppcVar3;
  puStack_b0 = &stack0xfffffffffffffff0;
  pcStack_a8 = FUN_10696f548;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppcVar3 = (char ****)0x0;
  if (ppppcVar4 != (char ****)0x0) {
    pppcVar13 = ppppcVar4[1];
    unaff_x22 = "false";
    unaff_x23 = "true";
    pcVar5 = unaff_x23;
    if ((int)param_2 == 0) {
      pcVar5 = unaff_x22;
    }
    unaff_x24 = auStack_118;
    func_0x00010002b838(auStack_118,pcVar5);
    pcVar5 = unaff_x23;
    if ((int)param_3 == 0) {
      pcVar5 = unaff_x22;
    }
    func_0x00010002b838(alStack_100,pcVar5);
    pppcStack_138 = (char ***)0x0;
    uStack_130 = 0;
    uStack_128 = 0;
    func_0x00010007e1e8(&pppcStack_138,auStack_118,&lStack_e8,2);
    param_2 = &UNK_11094de50;
    ppppcVar8 = &pppcStack_138;
    param_3 = &pppcStack_138;
    (*(code *)(*pppcVar13)[3])(pppcVar13);
    ppppcVar3 = (char ****)&ppppcStack_120;
    ppppcStack_120 = ppppcVar8;
    func_0x00010007e5dc();
    lVar11 = 0;
    do {
      if ((char)(&uStack_e9)[lVar11] < '\0') {
        ppppcVar3 = *(char *****)((long)alStack_100 + lVar11);
        __ZdlPv();
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return ppppcVar3;
  }
  ___stack_chk_fail();
  ppppcStack_120 = ppppcVar8;
  func_0x00010007e5dc(&ppppcStack_120);
  lVar11 = -0x30;
  ppppcVar4 = (char ****)&uStack_e9;
  do {
    ppppcVar8 = ppppcVar4 + -3;
    if (*(char *)ppppcVar4 < '\0') {
      __ZdlPv(*(undefined8 *)((long)ppppcVar4 + -0x17));
    }
    lVar11 = lVar11 + 0x18;
    ppppcVar4 = ppppcVar8;
  } while (lVar11 != 0);
  ppppcVar4 = ppppcVar3;
  __Unwind_Resume();
  puStack_180 = unaff_x24;
  pcStack_178 = unaff_x23;
  pcStack_170 = unaff_x22;
  ppppcStack_168 = ppppcVar8;
  lStack_160 = lVar11;
  ppppcStack_158 = ppppcVar3;
  ppuStack_150 = &puStack_b0;
  pcStack_148 = FUN_10696f6cc;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppcVar3 = (char ****)0x0;
  if (ppppcVar4 != (char ****)0x0) {
    pppcVar13 = ppppcVar4[1];
    unaff_x22 = "false";
    unaff_x23 = "true";
    pcVar5 = unaff_x23;
    if ((int)param_2 == 0) {
      pcVar5 = unaff_x22;
    }
    unaff_x24 = auStack_1b8;
    func_0x00010002b838(auStack_1b8,pcVar5);
    pcVar5 = unaff_x23;
    if ((int)param_3 == 0) {
      pcVar5 = unaff_x22;
    }
    func_0x00010002b838(alStack_1a0,pcVar5);
    pppcStack_1d8 = (char ***)0x0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    func_0x00010007e1e8(&pppcStack_1d8,auStack_1b8,&lStack_188,2);
    param_2 = &UNK_11094dea0;
    ppppcVar8 = &pppcStack_1d8;
    param_3 = &pppcStack_1d8;
    (*(code *)(*pppcVar13)[3])(pppcVar13);
    ppppcVar3 = (char ****)&ppppcStack_1c0;
    ppppcStack_1c0 = ppppcVar8;
    func_0x00010007e5dc();
    lVar11 = 0;
    do {
      if ((&cStack_189)[lVar11] < '\0') {
        ppppcVar3 = *(char *****)((long)alStack_1a0 + lVar11);
        __ZdlPv();
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return ppppcVar3;
  }
  ___stack_chk_fail();
  ppppcStack_1c0 = ppppcVar8;
  func_0x00010007e5dc(&ppppcStack_1c0);
  lVar11 = -0x30;
  pcVar5 = &cStack_189;
  do {
    pcVar14 = pcVar5 + -0x18;
    if (*pcVar5 < '\0') {
      __ZdlPv(*(undefined8 *)(pcVar5 + -0x17));
    }
    lVar11 = lVar11 + 0x18;
    pcVar5 = pcVar14;
  } while (lVar11 != 0);
  ppppcVar4 = ppppcVar3;
  __Unwind_Resume();
  pcStack_1e8 = FUN_10696f850;
  lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar15 = (undefined8 *)param_2;
  ppppcVar8 = param_3;
  ppppcVar10 = param_4;
  puStack_220 = unaff_x24;
  pcStack_218 = unaff_x23;
  pcStack_210 = unaff_x22;
  pcStack_208 = pcVar14;
  lStack_200 = lVar11;
  ppppcStack_1f8 = ppppcVar3;
  pppuStack_1f0 = &ppuStack_150;
  _objc_retain(param_3);
  iVar6 = (int)ppppcVar8;
  if (ppppcVar4 != (char ****)0x0) {
    pppcVar13 = ppppcVar4[1];
    pcVar5 = "true";
    if ((int)param_2 == 0) {
      pcVar5 = "false";
    }
    func_0x00010002b838(auStack_258,pcVar5);
    _objc_retain(param_3);
    if (param_3 == (char ****)0x0) {
      pcVar5 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar5 = (char *)param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_240,pcVar5);
    uStack_278 = 0;
    uStack_270 = 0;
    uStack_268 = 0;
    func_0x00010007e1e8(&uStack_278,auStack_258,&lStack_228,2);
    puVar15 = (undefined8 *)&UNK_11094def0;
    puVar16 = &uStack_278;
    (*(code *)(*pppcVar13)[3])(pppcVar13);
    puStack_260 = &uStack_278;
    func_0x00010007e5dc(&puStack_260);
    lVar11 = 0;
    ppppcVar10 = param_4;
    do {
      if ((&cStack_229)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_240 + lVar11));
      }
      iVar6 = (int)puVar16;
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  ppppcVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_228) {
    return ppppcVar3;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_241 < '\0') {
    __ZdlPv(auStack_258[0]);
  }
  _objc_release(param_3);
  __Unwind_Resume();
  puVar9 = &uStack_340;
  lStack_2d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar16 = puVar15;
  ppppcVar4 = ppppcVar10;
  ppppcVar8 = param_5;
  iVar7 = iVar6;
  _objc_retain(ppppcVar10);
  if (ppppcVar3 != (char ****)0x0) {
    pppcVar13 = ppppcVar3[1];
    pcVar5 = "true";
    if ((int)puVar15 == 0) {
      pcVar5 = "false";
    }
    func_0x00010002b838(auStack_320,pcVar5);
    pcVar5 = "true";
    if (iVar6 == 0) {
      pcVar5 = "false";
    }
    func_0x00010002b838(auStack_308,pcVar5);
    _objc_retain(ppppcVar10);
    if (ppppcVar10 == (char ****)0x0) {
      pcVar5 = "";
    }
    else {
      _objc_retainAutorelease(ppppcVar10);
      pcVar5 = (char *)ppppcVar10;
      func_0x00010bdc3520();
    }
    _objc_release(ppppcVar10);
    func_0x00010002b838(auStack_2f0,pcVar5);
    uStack_340 = 0;
    uStack_338 = 0;
    uStack_330 = 0;
    func_0x00010007e1e8(&uStack_340,auStack_320,&lStack_2d8,3);
    puVar16 = (undefined8 *)&UNK_11094df40;
    (*(code *)(*pppcVar13)[3])(pppcVar13);
    puStack_328 = (undefined1 *)&uStack_340;
    func_0x00010007e5dc(&puStack_328);
    lVar11 = 0;
    ppppcVar4 = param_5;
    do {
      if ((&cStack_2d9)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2f0 + lVar11));
      }
      iVar7 = (int)puVar9;
      lVar11 = lVar11 + -0x18;
      puVar15 = &uStack_340;
    } while (lVar11 != -0x48);
  }
  ppppcVar3 = ppppcVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2d8) {
    return ppppcVar3;
  }
  ___stack_chk_fail();
  _objc_release(ppppcVar10);
  do {
    puVar15 = (undefined8 *)((long)puVar15 + -0x18);
  } while (puVar15 != (undefined8 *)auStack_320);
  _objc_release(ppppcVar10);
  __Unwind_Resume();
  lStack_398 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(ppppcVar4);
  if (ppppcVar3 != (char ****)0x0) {
    pppcVar13 = ppppcVar3[1];
    pcVar5 = "true";
    if ((int)puVar16 == 0) {
      pcVar5 = "false";
    }
    func_0x00010002b838(auStack_3e0,pcVar5);
    pcVar5 = "true";
    if (iVar7 == 0) {
      pcVar5 = "false";
    }
    func_0x00010002b838(auStack_3c8,pcVar5);
    _objc_retain(ppppcVar4);
    if (ppppcVar4 == (char ****)0x0) {
      pcVar5 = "";
    }
    else {
      _objc_retainAutorelease(ppppcVar4);
      pcVar5 = (char *)ppppcVar4;
      func_0x00010bdc3520(ppppcVar4);
    }
    _objc_release(ppppcVar4);
    func_0x00010002b838(auStack_3b0,pcVar5);
    uStack_400 = 0;
    uStack_3f8 = 0;
    uStack_3f0 = 0;
    func_0x00010007e1e8(&uStack_400,auStack_3e0,&lStack_398,3);
    (*(code *)(*pppcVar13)[3])(pppcVar13,&UNK_11094df90,&uStack_400,ppppcVar8);
    puStack_3e8 = (undefined1 *)&uStack_400;
    func_0x00010007e5dc(&puStack_3e8);
    lVar11 = 0;
    do {
      if ((&cStack_399)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_3b0 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
      puVar16 = &uStack_400;
    } while (lVar11 != -0x48);
  }
  ppppcVar3 = ppppcVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_398) {
    ___stack_chk_fail();
    _objc_release(ppppcVar4);
    do {
      puVar16 = (undefined8 *)((long)puVar16 + -0x18);
    } while (puVar16 != (undefined8 *)auStack_3e0);
    _objc_release(ppppcVar4);
    __Unwind_Resume(ppppcVar3);
    if (ppppcRam00000001136c47e0 == (char ****)0x0) {
      ppppcVar3 = (char ****)PTR_PTR_1126ae980;
      func_0x00010bf00e00();
      do {
        if (ppppcRam00000001136c47e0 != (char ****)0x0) {
          ClearExclusiveLocal();
          _objc_release();
          return ppppcRam00000001136c47e0;
        }
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(0x1136c47e0,0x10);
        if (bVar2) {
          cVar1 = ExclusiveMonitorsStatus();
          ppppcRam00000001136c47e0 = ppppcVar3;
        }
      } while (cVar1 != '\0');
    }
    return ppppcRam00000001136c47e0;
  }
  return ppppcVar3;
}



/* Entry: 10696f548; end: 10696f6cb;  */

/* WARNING: Removing unreachable block (ram,0x00010696fc38) */
/* WARNING: Removing unreachable block (ram,0x00010696fe5c) */
/* WARNING: Type propagation algorithm not settling */

char **** FUN_10696f548(long param_1,undefined *param_2,char ****param_3,char ****param_4,
                       char ****param_5)

{
  char cVar1;
  bool bVar2;
  char ****ppppcVar3;
  char ****ppppcVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  char ****ppppcVar8;
  undefined8 *puVar9;
  char ****ppppcVar10;
  long lVar11;
  long *plVar12;
  char ***pppcVar13;
  char ****unaff_x21;
  char *pcVar14;
  char *unaff_x22;
  undefined8 *puVar15;
  undefined8 *puVar16;
  char *unaff_x23;
  undefined1 *unaff_x24;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined1 *puStack_348;
  undefined1 auStack_340 [24];
  undefined1 auStack_328 [24];
  undefined8 auStack_310 [2];
  char cStack_2f9;
  long lStack_2f8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined1 *puStack_288;
  undefined1 auStack_280 [24];
  undefined1 auStack_268 [24];
  undefined8 auStack_250 [2];
  char cStack_239;
  long lStack_238;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 auStack_1b8 [2];
  char cStack_1a1;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined1 *puStack_180;
  char *pcStack_178;
  char *pcStack_170;
  char *pcStack_168;
  long lStack_160;
  char ****ppppcStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  char ***pppcStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  char ****ppppcStack_120;
  undefined1 auStack_118 [24];
  long alStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined1 *puStack_e0;
  char *pcStack_d8;
  char *pcStack_d0;
  char ****ppppcStack_c8;
  long lStack_c0;
  char ****ppppcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char ***pppcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  char ****ppppcStack_80;
  undefined1 auStack_78 [24];
  long alStack_60 [2];
  undefined1 uStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppcVar3 = (char ****)0x0;
  if (param_1 != 0) {
    plVar12 = *(long **)(param_1 + 8);
    unaff_x22 = "false";
    unaff_x23 = "true";
    pcVar5 = unaff_x23;
    if ((int)param_2 == 0) {
      pcVar5 = unaff_x22;
    }
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,pcVar5);
    pcVar5 = unaff_x23;
    if ((int)param_3 == 0) {
      pcVar5 = unaff_x22;
    }
    func_0x00010002b838(alStack_60,pcVar5);
    pppcStack_98 = (char ***)0x0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&pppcStack_98,auStack_78,&lStack_48,2);
    param_2 = &UNK_11094de50;
    unaff_x21 = &pppcStack_98;
    param_3 = &pppcStack_98;
    (**(code **)(*plVar12 + 0x18))(plVar12);
    ppppcVar3 = (char ****)&ppppcStack_80;
    ppppcStack_80 = unaff_x21;
    func_0x00010007e5dc();
    lVar11 = 0;
    do {
      if ((char)(&uStack_49)[lVar11] < '\0') {
        ppppcVar3 = *(char *****)((long)alStack_60 + lVar11);
        __ZdlPv();
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return ppppcVar3;
  }
  ___stack_chk_fail();
  ppppcStack_80 = unaff_x21;
  func_0x00010007e5dc(&ppppcStack_80);
  lVar11 = -0x30;
  ppppcVar4 = (char ****)&uStack_49;
  do {
    ppppcVar8 = ppppcVar4 + -3;
    if (*(char *)ppppcVar4 < '\0') {
      __ZdlPv(*(undefined8 *)((long)ppppcVar4 + -0x17));
    }
    lVar11 = lVar11 + 0x18;
    ppppcVar4 = ppppcVar8;
  } while (lVar11 != 0);
  ppppcVar4 = ppppcVar3;
  __Unwind_Resume();
  puStack_e0 = unaff_x24;
  pcStack_d8 = unaff_x23;
  pcStack_d0 = unaff_x22;
  ppppcStack_c8 = ppppcVar8;
  lStack_c0 = lVar11;
  ppppcStack_b8 = ppppcVar3;
  puStack_b0 = &stack0xfffffffffffffff0;
  pcStack_a8 = FUN_10696f6cc;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppcVar3 = (char ****)0x0;
  if (ppppcVar4 != (char ****)0x0) {
    pppcVar13 = ppppcVar4[1];
    unaff_x22 = "false";
    unaff_x23 = "true";
    pcVar5 = unaff_x23;
    if ((int)param_2 == 0) {
      pcVar5 = unaff_x22;
    }
    unaff_x24 = auStack_118;
    func_0x00010002b838(auStack_118,pcVar5);
    pcVar5 = unaff_x23;
    if ((int)param_3 == 0) {
      pcVar5 = unaff_x22;
    }
    func_0x00010002b838(alStack_100,pcVar5);
    pppcStack_138 = (char ***)0x0;
    uStack_130 = 0;
    uStack_128 = 0;
    func_0x00010007e1e8(&pppcStack_138,auStack_118,&lStack_e8,2);
    param_2 = &UNK_11094dea0;
    ppppcVar8 = &pppcStack_138;
    param_3 = &pppcStack_138;
    (*(code *)(*pppcVar13)[3])(pppcVar13);
    ppppcVar3 = (char ****)&ppppcStack_120;
    ppppcStack_120 = ppppcVar8;
    func_0x00010007e5dc();
    lVar11 = 0;
    do {
      if ((&cStack_e9)[lVar11] < '\0') {
        ppppcVar3 = *(char *****)((long)alStack_100 + lVar11);
        __ZdlPv();
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return ppppcVar3;
  }
  ___stack_chk_fail();
  ppppcStack_120 = ppppcVar8;
  func_0x00010007e5dc(&ppppcStack_120);
  lVar11 = -0x30;
  pcVar5 = &cStack_e9;
  do {
    pcVar14 = pcVar5 + -0x18;
    if (*pcVar5 < '\0') {
      __ZdlPv(*(undefined8 *)(pcVar5 + -0x17));
    }
    lVar11 = lVar11 + 0x18;
    pcVar5 = pcVar14;
  } while (lVar11 != 0);
  ppppcVar4 = ppppcVar3;
  __Unwind_Resume();
  pcStack_148 = FUN_10696f850;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar15 = (undefined8 *)param_2;
  ppppcVar8 = param_3;
  ppppcVar10 = param_4;
  puStack_180 = unaff_x24;
  pcStack_178 = unaff_x23;
  pcStack_170 = unaff_x22;
  pcStack_168 = pcVar14;
  lStack_160 = lVar11;
  ppppcStack_158 = ppppcVar3;
  ppuStack_150 = &puStack_b0;
  _objc_retain(param_3);
  iVar6 = (int)ppppcVar8;
  if (ppppcVar4 != (char ****)0x0) {
    pppcVar13 = ppppcVar4[1];
    pcVar5 = "true";
    if ((int)param_2 == 0) {
      pcVar5 = "false";
    }
    func_0x00010002b838(auStack_1b8,pcVar5);
    _objc_retain(param_3);
    if (param_3 == (char ****)0x0) {
      pcVar5 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar5 = (char *)param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_1a0,pcVar5);
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    func_0x00010007e1e8(&uStack_1d8,auStack_1b8,&lStack_188,2);
    puVar15 = (undefined8 *)&UNK_11094def0;
    puVar16 = &uStack_1d8;
    (*(code *)(*pppcVar13)[3])(pppcVar13);
    puStack_1c0 = &uStack_1d8;
    func_0x00010007e5dc(&puStack_1c0);
    lVar11 = 0;
    ppppcVar10 = param_4;
    do {
      if ((&cStack_189)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1a0 + lVar11));
      }
      iVar6 = (int)puVar16;
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  ppppcVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return ppppcVar3;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_1a1 < '\0') {
    __ZdlPv(auStack_1b8[0]);
  }
  _objc_release(param_3);
  __Unwind_Resume();
  puVar9 = &uStack_2a0;
  lStack_238 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar16 = puVar15;
  ppppcVar4 = ppppcVar10;
  ppppcVar8 = param_5;
  iVar7 = iVar6;
  _objc_retain(ppppcVar10);
  if (ppppcVar3 != (char ****)0x0) {
    pppcVar13 = ppppcVar3[1];
    pcVar5 = "true";
    if ((int)puVar15 == 0) {
      pcVar5 = "false";
    }
    func_0x00010002b838(auStack_280,pcVar5);
    pcVar5 = "true";
    if (iVar6 == 0) {
      pcVar5 = "false";
    }
    func_0x00010002b838(auStack_268,pcVar5);
    _objc_retain(ppppcVar10);
    if (ppppcVar10 == (char ****)0x0) {
      pcVar5 = "";
    }
    else {
      _objc_retainAutorelease(ppppcVar10);
      pcVar5 = (char *)ppppcVar10;
      func_0x00010bdc3520();
    }
    _objc_release(ppppcVar10);
    func_0x00010002b838(auStack_250,pcVar5);
    uStack_2a0 = 0;
    uStack_298 = 0;
    uStack_290 = 0;
    func_0x00010007e1e8(&uStack_2a0,auStack_280,&lStack_238,3);
    puVar16 = (undefined8 *)&UNK_11094df40;
    (*(code *)(*pppcVar13)[3])(pppcVar13);
    puStack_288 = (undefined1 *)&uStack_2a0;
    func_0x00010007e5dc(&puStack_288);
    lVar11 = 0;
    ppppcVar4 = param_5;
    do {
      if ((&cStack_239)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_250 + lVar11));
      }
      iVar7 = (int)puVar9;
      lVar11 = lVar11 + -0x18;
      puVar15 = &uStack_2a0;
    } while (lVar11 != -0x48);
  }
  ppppcVar3 = ppppcVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_238) {
    ___stack_chk_fail();
    _objc_release(ppppcVar10);
    do {
      puVar15 = (undefined8 *)((long)puVar15 + -0x18);
    } while (puVar15 != (undefined8 *)auStack_280);
    _objc_release(ppppcVar10);
    __Unwind_Resume();
    lStack_2f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(ppppcVar4);
    if (ppppcVar3 != (char ****)0x0) {
      pppcVar13 = ppppcVar3[1];
      pcVar5 = "true";
      if ((int)puVar16 == 0) {
        pcVar5 = "false";
      }
      func_0x00010002b838(auStack_340,pcVar5);
      pcVar5 = "true";
      if (iVar7 == 0) {
        pcVar5 = "false";
      }
      func_0x00010002b838(auStack_328,pcVar5);
      _objc_retain(ppppcVar4);
      if (ppppcVar4 == (char ****)0x0) {
        pcVar5 = "";
      }
      else {
        _objc_retainAutorelease(ppppcVar4);
        pcVar5 = (char *)ppppcVar4;
        func_0x00010bdc3520(ppppcVar4);
      }
      _objc_release(ppppcVar4);
      func_0x00010002b838(auStack_310,pcVar5);
      uStack_360 = 0;
      uStack_358 = 0;
      uStack_350 = 0;
      func_0x00010007e1e8(&uStack_360,auStack_340,&lStack_2f8,3);
      (*(code *)(*pppcVar13)[3])(pppcVar13,&UNK_11094df90,&uStack_360,ppppcVar8);
      puStack_348 = (undefined1 *)&uStack_360;
      func_0x00010007e5dc(&puStack_348);
      lVar11 = 0;
      do {
        if ((&cStack_2f9)[lVar11] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_310 + lVar11));
        }
        lVar11 = lVar11 + -0x18;
        puVar16 = &uStack_360;
      } while (lVar11 != -0x48);
    }
    ppppcVar3 = ppppcVar4;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2f8) {
      ___stack_chk_fail();
      _objc_release(ppppcVar4);
      do {
        puVar16 = (undefined8 *)((long)puVar16 + -0x18);
      } while (puVar16 != (undefined8 *)auStack_340);
      _objc_release(ppppcVar4);
      __Unwind_Resume(ppppcVar3);
      if (ppppcRam00000001136c47e0 == (char ****)0x0) {
        ppppcVar3 = (char ****)PTR_PTR_1126ae980;
        func_0x00010bf00e00();
        do {
          if (ppppcRam00000001136c47e0 != (char ****)0x0) {
            ClearExclusiveLocal();
            _objc_release();
            return ppppcRam00000001136c47e0;
          }
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(0x1136c47e0,0x10);
          if (bVar2) {
            cVar1 = ExclusiveMonitorsStatus();
            ppppcRam00000001136c47e0 = ppppcVar3;
          }
        } while (cVar1 != '\0');
      }
      return ppppcRam00000001136c47e0;
    }
    return ppppcVar3;
  }
  return ppppcVar3;
}



/* Entry: 10696f6cc; end: 10696f84f;  */

/* WARNING: Removing unreachable block (ram,0x00010696fc38) */
/* WARNING: Removing unreachable block (ram,0x00010696fe5c) */

undefined8 ****
FUN_10696f6cc(long param_1,undefined *param_2,undefined8 ****param_3,undefined8 ****param_4,
             undefined8 ****param_5)

{
  char cVar1;
  bool bVar2;
  undefined8 ****ppppuVar3;
  undefined8 ****ppppuVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  undefined8 ****ppppuVar8;
  undefined8 *puVar9;
  undefined8 ****ppppuVar10;
  long lVar11;
  long *plVar12;
  undefined8 ****unaff_x21;
  char *pcVar13;
  undefined8 ***pppuVar14;
  char *unaff_x22;
  undefined8 *puVar15;
  undefined8 *puVar16;
  char *unaff_x23;
  undefined1 *unaff_x24;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined1 *puStack_2a8;
  undefined1 auStack_2a0 [24];
  undefined1 auStack_288 [24];
  undefined8 auStack_270 [2];
  char cStack_259;
  long lStack_258;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined1 auStack_1e0 [24];
  undefined1 auStack_1c8 [24];
  undefined8 auStack_1b0 [2];
  char cStack_199;
  long lStack_198;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined1 *puStack_e0;
  char *pcStack_d8;
  char *pcStack_d0;
  char *pcStack_c8;
  long lStack_c0;
  undefined8 ****ppppuStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 ***pppuStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 ***pppuStack_80;
  undefined1 auStack_78 [24];
  long alStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppuVar3 = (undefined8 ****)0x0;
  if (param_1 != 0) {
    plVar12 = *(long **)(param_1 + 8);
    unaff_x22 = "false";
    unaff_x23 = "true";
    pcVar5 = unaff_x23;
    if ((int)param_2 == 0) {
      pcVar5 = unaff_x22;
    }
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,pcVar5);
    pcVar5 = unaff_x23;
    if ((int)param_3 == 0) {
      pcVar5 = unaff_x22;
    }
    func_0x00010002b838(alStack_60,pcVar5);
    pppuStack_98 = (undefined8 ***)0x0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&pppuStack_98,auStack_78,&lStack_48,2);
    param_2 = &UNK_11094dea0;
    unaff_x21 = &pppuStack_98;
    param_3 = &pppuStack_98;
    (**(code **)(*plVar12 + 0x18))(plVar12);
    ppppuVar3 = &pppuStack_80;
    pppuStack_80 = unaff_x21;
    func_0x00010007e5dc();
    lVar11 = 0;
    do {
      if ((&cStack_49)[lVar11] < '\0') {
        ppppuVar3 = *(undefined8 *****)((long)alStack_60 + lVar11);
        __ZdlPv();
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return ppppuVar3;
  }
  ___stack_chk_fail();
  pppuStack_80 = unaff_x21;
  func_0x00010007e5dc(&pppuStack_80);
  lVar11 = -0x30;
  pcVar5 = &cStack_49;
  do {
    pcVar13 = pcVar5 + -0x18;
    if (*pcVar5 < '\0') {
      __ZdlPv(*(undefined8 *)(pcVar5 + -0x17));
    }
    lVar11 = lVar11 + 0x18;
    pcVar5 = pcVar13;
  } while (lVar11 != 0);
  ppppuVar4 = ppppuVar3;
  __Unwind_Resume();
  pcStack_a8 = FUN_10696f850;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar15 = (undefined8 *)param_2;
  ppppuVar8 = param_3;
  ppppuVar10 = param_4;
  puStack_e0 = unaff_x24;
  pcStack_d8 = unaff_x23;
  pcStack_d0 = unaff_x22;
  pcStack_c8 = pcVar13;
  lStack_c0 = lVar11;
  ppppuStack_b8 = ppppuVar3;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(param_3);
  iVar6 = (int)ppppuVar8;
  if (ppppuVar4 != (undefined8 ****)0x0) {
    pppuVar14 = ppppuVar4[1];
    pcVar5 = "true";
    if ((int)param_2 == 0) {
      pcVar5 = "false";
    }
    func_0x00010002b838(auStack_118,pcVar5);
    _objc_retain(param_3);
    if (param_3 == (undefined8 ****)0x0) {
      pcVar5 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar5 = (char *)param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_100,pcVar5);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    func_0x00010007e1e8(&uStack_138,auStack_118,&lStack_e8,2);
    puVar15 = (undefined8 *)&UNK_11094def0;
    puVar16 = &uStack_138;
    (*(code *)(*pppuVar14)[3])(pppuVar14);
    puStack_120 = &uStack_138;
    func_0x00010007e5dc(&puStack_120);
    lVar11 = 0;
    ppppuVar10 = param_4;
    do {
      if ((&cStack_e9)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar11));
      }
      iVar6 = (int)puVar16;
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  ppppuVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_e8) {
    ___stack_chk_fail();
    _objc_release(param_3);
    if (cStack_101 < '\0') {
      __ZdlPv(auStack_118[0]);
    }
    _objc_release(param_3);
    __Unwind_Resume();
    puVar9 = &uStack_200;
    lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar16 = puVar15;
    ppppuVar4 = ppppuVar10;
    ppppuVar8 = param_5;
    iVar7 = iVar6;
    _objc_retain(ppppuVar10);
    if (ppppuVar3 != (undefined8 ****)0x0) {
      pppuVar14 = ppppuVar3[1];
      pcVar5 = "true";
      if ((int)puVar15 == 0) {
        pcVar5 = "false";
      }
      func_0x00010002b838(auStack_1e0,pcVar5);
      pcVar5 = "true";
      if (iVar6 == 0) {
        pcVar5 = "false";
      }
      func_0x00010002b838(auStack_1c8,pcVar5);
      _objc_retain(ppppuVar10);
      if (ppppuVar10 == (undefined8 ****)0x0) {
        pcVar5 = "";
      }
      else {
        _objc_retainAutorelease(ppppuVar10);
        pcVar5 = (char *)ppppuVar10;
        func_0x00010bdc3520();
      }
      _objc_release(ppppuVar10);
      func_0x00010002b838(auStack_1b0,pcVar5);
      uStack_200 = 0;
      uStack_1f8 = 0;
      uStack_1f0 = 0;
      func_0x00010007e1e8(&uStack_200,auStack_1e0,&lStack_198,3);
      puVar16 = (undefined8 *)&UNK_11094df40;
      (*(code *)(*pppuVar14)[3])(pppuVar14);
      puStack_1e8 = (undefined1 *)&uStack_200;
      func_0x00010007e5dc(&puStack_1e8);
      lVar11 = 0;
      ppppuVar4 = param_5;
      do {
        if ((&cStack_199)[lVar11] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_1b0 + lVar11));
        }
        iVar7 = (int)puVar9;
        lVar11 = lVar11 + -0x18;
        puVar15 = &uStack_200;
      } while (lVar11 != -0x48);
    }
    ppppuVar3 = ppppuVar10;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_198) {
      ___stack_chk_fail();
      _objc_release(ppppuVar10);
      do {
        puVar15 = (undefined8 *)((long)puVar15 + -0x18);
      } while (puVar15 != (undefined8 *)auStack_1e0);
      _objc_release(ppppuVar10);
      __Unwind_Resume();
      lStack_258 = *(long *)PTR____stack_chk_guard_11034bdc0;
      _objc_retain(ppppuVar4);
      if (ppppuVar3 != (undefined8 ****)0x0) {
        pppuVar14 = ppppuVar3[1];
        pcVar5 = "true";
        if ((int)puVar16 == 0) {
          pcVar5 = "false";
        }
        func_0x00010002b838(auStack_2a0,pcVar5);
        pcVar5 = "true";
        if (iVar7 == 0) {
          pcVar5 = "false";
        }
        func_0x00010002b838(auStack_288,pcVar5);
        _objc_retain(ppppuVar4);
        if (ppppuVar4 == (undefined8 ****)0x0) {
          pcVar5 = "";
        }
        else {
          _objc_retainAutorelease(ppppuVar4);
          pcVar5 = (char *)ppppuVar4;
          func_0x00010bdc3520(ppppuVar4);
        }
        _objc_release(ppppuVar4);
        func_0x00010002b838(auStack_270,pcVar5);
        uStack_2c0 = 0;
        uStack_2b8 = 0;
        uStack_2b0 = 0;
        func_0x00010007e1e8(&uStack_2c0,auStack_2a0,&lStack_258,3);
        (*(code *)(*pppuVar14)[3])(pppuVar14,&UNK_11094df90,&uStack_2c0,ppppuVar8);
        puStack_2a8 = (undefined1 *)&uStack_2c0;
        func_0x00010007e5dc(&puStack_2a8);
        lVar11 = 0;
        do {
          if ((&cStack_259)[lVar11] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_270 + lVar11));
          }
          lVar11 = lVar11 + -0x18;
          puVar16 = &uStack_2c0;
        } while (lVar11 != -0x48);
      }
      ppppuVar3 = ppppuVar4;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_258) {
        ___stack_chk_fail();
        _objc_release(ppppuVar4);
        do {
          puVar16 = (undefined8 *)((long)puVar16 + -0x18);
        } while (puVar16 != (undefined8 *)auStack_2a0);
        _objc_release(ppppuVar4);
        __Unwind_Resume(ppppuVar3);
        if (ppppuRam00000001136c47e0 == (undefined8 ****)0x0) {
          ppppuVar3 = (undefined8 ****)PTR_PTR_1126ae980;
          func_0x00010bf00e00();
          do {
            if (ppppuRam00000001136c47e0 != (undefined8 ****)0x0) {
              ClearExclusiveLocal();
              _objc_release();
              return ppppuRam00000001136c47e0;
            }
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(0x1136c47e0,0x10);
            if (bVar2) {
              cVar1 = ExclusiveMonitorsStatus();
              ppppuRam00000001136c47e0 = ppppuVar3;
            }
          } while (cVar1 != '\0');
        }
        return ppppuRam00000001136c47e0;
      }
      return ppppuVar3;
    }
    return ppppuVar3;
  }
  return ppppuVar3;
}



/* Entry: 10696f850; end: 10696fa3b;  */

/* WARNING: Removing unreachable block (ram,0x00010696fc38) */
/* WARNING: Removing unreachable block (ram,0x00010696fe5c) */

char * FUN_10696f850(long param_1,undefined *param_2,char *param_3,char *param_4,char *param_5)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 *puStack_208;
  undefined1 auStack_200 [24];
  undefined1 auStack_1e8 [24];
  undefined8 auStack_1d0 [2];
  char cStack_1b9;
  long lStack_1b8;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 *puStack_148;
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined8 auStack_110 [2];
  char cStack_f9;
  long lStack_f8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar12 = (undefined8 *)param_2;
  pcVar3 = param_3;
  pcVar7 = param_4;
  _objc_retain(param_3);
  iVar4 = (int)pcVar3;
  if (param_1 != 0) {
    plVar11 = *(long **)(param_1 + 8);
    pcVar3 = "true";
    if ((int)param_2 == 0) {
      pcVar3 = "false";
    }
    func_0x00010002b838(auStack_78,pcVar3);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar3 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar3);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar12 = (undefined8 *)&UNK_11094def0;
    puVar13 = &uStack_98;
    (**(code **)(*plVar11 + 0x18))(plVar11);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar10 = 0;
    pcVar7 = param_4;
    do {
      if ((&cStack_49)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar10));
      }
      iVar4 = (int)puVar13;
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  pcVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar3;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  __Unwind_Resume();
  puVar6 = &uStack_160;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar13 = puVar12;
  pcVar8 = pcVar7;
  pcVar9 = param_5;
  iVar5 = iVar4;
  _objc_retain(pcVar7);
  if (pcVar3 != (char *)0x0) {
    plVar11 = *(long **)(pcVar3 + 8);
    pcVar3 = "true";
    if ((int)puVar12 == 0) {
      pcVar3 = "false";
    }
    func_0x00010002b838(auStack_140,pcVar3);
    pcVar3 = "true";
    if (iVar4 == 0) {
      pcVar3 = "false";
    }
    func_0x00010002b838(auStack_128,pcVar3);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      _objc_retainAutorelease(pcVar7);
      pcVar3 = pcVar7;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar7);
    func_0x00010002b838(auStack_110,pcVar3);
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    func_0x00010007e1e8(&uStack_160,auStack_140,&lStack_f8,3);
    puVar13 = (undefined8 *)&UNK_11094df40;
    (**(code **)(*plVar11 + 0x18))(plVar11);
    puStack_148 = (undefined1 *)&uStack_160;
    func_0x00010007e5dc(&puStack_148);
    lVar10 = 0;
    pcVar8 = param_5;
    do {
      if ((&cStack_f9)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_110 + lVar10));
      }
      iVar5 = (int)puVar6;
      lVar10 = lVar10 + -0x18;
      puVar12 = &uStack_160;
    } while (lVar10 != -0x48);
  }
  pcVar3 = pcVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_f8) {
    ___stack_chk_fail();
    _objc_release(pcVar7);
    do {
      puVar12 = (undefined8 *)((long)puVar12 + -0x18);
    } while (puVar12 != (undefined8 *)auStack_140);
    _objc_release(pcVar7);
    __Unwind_Resume();
    lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(pcVar8);
    if (pcVar3 != (char *)0x0) {
      plVar11 = *(long **)(pcVar3 + 8);
      pcVar3 = "true";
      if ((int)puVar13 == 0) {
        pcVar3 = "false";
      }
      func_0x00010002b838(auStack_200,pcVar3);
      pcVar3 = "true";
      if (iVar5 == 0) {
        pcVar3 = "false";
      }
      func_0x00010002b838(auStack_1e8,pcVar3);
      _objc_retain(pcVar8);
      if (pcVar8 == (char *)0x0) {
        pcVar3 = "";
      }
      else {
        _objc_retainAutorelease(pcVar8);
        pcVar3 = pcVar8;
        func_0x00010bdc3520(pcVar8);
      }
      _objc_release(pcVar8);
      func_0x00010002b838(auStack_1d0,pcVar3);
      uStack_220 = 0;
      uStack_218 = 0;
      uStack_210 = 0;
      func_0x00010007e1e8(&uStack_220,auStack_200,&lStack_1b8,3);
      (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_11094df90,&uStack_220,pcVar9);
      puStack_208 = (undefined1 *)&uStack_220;
      func_0x00010007e5dc(&puStack_208);
      lVar10 = 0;
      do {
        if ((&cStack_1b9)[lVar10] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_1d0 + lVar10));
        }
        lVar10 = lVar10 + -0x18;
        puVar13 = &uStack_220;
      } while (lVar10 != -0x48);
    }
    pcVar3 = pcVar8;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1b8) {
      ___stack_chk_fail();
      _objc_release(pcVar8);
      do {
        puVar13 = (undefined8 *)((long)puVar13 + -0x18);
      } while (puVar13 != (undefined8 *)auStack_200);
      _objc_release(pcVar8);
      __Unwind_Resume(pcVar3);
      if (pcRam00000001136c47e0 == (char *)0x0) {
        pcVar3 = PTR_PTR_1126ae980;
        func_0x00010bf00e00();
        do {
          if (pcRam00000001136c47e0 != (char *)0x0) {
            ClearExclusiveLocal();
            _objc_release();
            return pcRam00000001136c47e0;
          }
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(0x1136c47e0,0x10);
          if (bVar2) {
            cVar1 = ExclusiveMonitorsStatus();
            pcRam00000001136c47e0 = pcVar3;
          }
        } while (cVar1 != '\0');
      }
      return pcRam00000001136c47e0;
    }
    return pcVar3;
  }
  return pcVar3;
}



/* Entry: 10696fa3c; end: 10696fc5f;  */

/* WARNING: Removing unreachable block (ram,0x00010696fc38) */
/* WARNING: Removing unreachable block (ram,0x00010696fe5c) */

char * FUN_10696fa3c(long param_1,undefined8 *param_2,int param_3,char *param_4,char *param_5)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  puVar7 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = param_2;
  pcVar3 = param_4;
  pcVar5 = param_5;
  iVar6 = param_3;
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar9 = *(long **)(param_1 + 8);
    pcVar3 = "true";
    if ((int)param_2 == 0) {
      pcVar3 = "false";
    }
    func_0x00010002b838(auStack_a0,pcVar3);
    pcVar3 = "true";
    if (param_3 == 0) {
      pcVar3 = "false";
    }
    func_0x00010002b838(auStack_88,pcVar3);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar3 = param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_70,pcVar3);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
    puVar10 = (undefined8 *)&UNK_11094df40;
    (**(code **)(*plVar9 + 0x18))(plVar9);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar8 = 0;
    pcVar3 = param_5;
    do {
      if ((&cStack_59)[lVar8] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar8));
      }
      iVar6 = (int)puVar7;
      lVar8 = lVar8 + -0x18;
      param_2 = &uStack_c0;
    } while (lVar8 != -0x48);
  }
  pcVar4 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(param_4);
    do {
      param_2 = (undefined8 *)((long)param_2 + -0x18);
    } while (param_2 != (undefined8 *)auStack_a0);
    _objc_release(param_4);
    __Unwind_Resume();
    lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(pcVar3);
    if (pcVar4 != (char *)0x0) {
      plVar9 = *(long **)(pcVar4 + 8);
      pcVar4 = "true";
      if ((int)puVar10 == 0) {
        pcVar4 = "false";
      }
      func_0x00010002b838(auStack_160,pcVar4);
      pcVar4 = "true";
      if (iVar6 == 0) {
        pcVar4 = "false";
      }
      func_0x00010002b838(auStack_148,pcVar4);
      _objc_retain(pcVar3);
      if (pcVar3 == (char *)0x0) {
        pcVar4 = "";
      }
      else {
        _objc_retainAutorelease(pcVar3);
        pcVar4 = pcVar3;
        func_0x00010bdc3520(pcVar3);
      }
      _objc_release(pcVar3);
      func_0x00010002b838(auStack_130,pcVar4);
      uStack_180 = 0;
      uStack_178 = 0;
      uStack_170 = 0;
      func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_118,3);
      (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_11094df90,&uStack_180,pcVar5);
      puStack_168 = (undefined1 *)&uStack_180;
      func_0x00010007e5dc(&puStack_168);
      lVar8 = 0;
      do {
        if ((&cStack_119)[lVar8] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar8));
        }
        lVar8 = lVar8 + -0x18;
        puVar10 = &uStack_180;
      } while (lVar8 != -0x48);
    }
    pcVar5 = pcVar3;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_118) {
      ___stack_chk_fail();
      _objc_release(pcVar3);
      do {
        puVar10 = (undefined8 *)((long)puVar10 + -0x18);
      } while (puVar10 != (undefined8 *)auStack_160);
      _objc_release(pcVar3);
      __Unwind_Resume(pcVar5);
      if (pcRam00000001136c47e0 == (char *)0x0) {
        pcVar3 = PTR_PTR_1126ae980;
        func_0x00010bf00e00();
        do {
          if (pcRam00000001136c47e0 != (char *)0x0) {
            ClearExclusiveLocal();
            _objc_release();
            return pcRam00000001136c47e0;
          }
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(0x1136c47e0,0x10);
          if (bVar2) {
            cVar1 = ExclusiveMonitorsStatus();
            pcRam00000001136c47e0 = pcVar3;
          }
        } while (cVar1 != '\0');
      }
      return pcRam00000001136c47e0;
    }
    return pcVar5;
  }
  return pcVar4;
}



/* Entry: 10696fc60; end: 10696fe83;  */

/* WARNING: Removing unreachable block (ram,0x00010696fe5c) */

char * FUN_10696fc60(long param_1,undefined8 *param_2,int param_3,char *param_4,undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  long lVar4;
  long *plVar5;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar5 = *(long **)(param_1 + 8);
    pcVar3 = "true";
    if ((int)param_2 == 0) {
      pcVar3 = "false";
    }
    func_0x00010002b838(auStack_a0,pcVar3);
    pcVar3 = "true";
    if (param_3 == 0) {
      pcVar3 = "false";
    }
    func_0x00010002b838(auStack_88,pcVar3);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar3 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_70,pcVar3);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_11094df90,&uStack_c0,param_5);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar4 = 0;
    do {
      if ((&cStack_59)[lVar4] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar4));
      }
      lVar4 = lVar4 + -0x18;
      param_2 = &uStack_c0;
    } while (lVar4 != -0x48);
  }
  pcVar3 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(param_4);
    do {
      param_2 = (undefined8 *)((long)param_2 + -0x18);
    } while (param_2 != (undefined8 *)auStack_a0);
    _objc_release(param_4);
    __Unwind_Resume(pcVar3);
    if (pcRam00000001136c47e0 == (char *)0x0) {
      pcVar3 = PTR_PTR_1126ae980;
      func_0x00010bf00e00();
      do {
        if (pcRam00000001136c47e0 != (char *)0x0) {
          ClearExclusiveLocal();
          _objc_release();
          return pcRam00000001136c47e0;
        }
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(0x1136c47e0,0x10);
        if (bVar2) {
          cVar1 = ExclusiveMonitorsStatus();
          pcRam00000001136c47e0 = pcVar3;
        }
      } while (cVar1 != '\0');
    }
    return pcRam00000001136c47e0;
  }
  return pcVar3;
}



/* Entry: 10696fe84; end: 10696feff;  */

undefined * FUN_10696fe84(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c47e0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e66238,
                        &UNK_10dde3120,&UNK_10dde31b4,9,FUN_10696ff00,0);
    do {
      if (puRam00000001136c47e0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c47e0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c47e0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c47e0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c47e0;
}



/* Entry: 10696ff00; end: 10696ff0b;  */

bool FUN_10696ff00(uint param_1)

{
  return param_1 < 9;
}



/* Entry: 10696ff0c; end: 10696ff73; +[SCPieExternalContentMetadata descriptor] */

void FUN_10696ff0c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c47e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b07ba0,
                        &PTR____CFConstantStringClassReference_110e66258,&PTR_DAT_11316ac70,
                        &PTR_DAT_11316aca8,2,0x18,0x1c);
    puRam00000001136c47e8 = puVar1;
  }
  return;
}



/* Entry: 10696ff74; end: 10696ffdb; +[SCPieExternalContentReference descriptor] */

void FUN_10696ff74(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c47f0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b07bf0,
                        &PTR____CFConstantStringClassReference_110e66278,&PTR_DAT_11316ac70,
                        &PTR_DAT_11316ad28,4,0x20,0x1c);
    puRam00000001136c47f0 = puVar1;
  }
  return;
}



/* Entry: 10696ffdc; end: 106970043; +[SCPieMediaEncryptionInfoList descriptor] */

void FUN_10696ffdc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c47f8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b07c40,
                        &PTR____CFConstantStringClassReference_110e66298,&PTR_DAT_11316ac70,
                        &PTR_DAT_11316ac88,1,0x10,0x1c);
    puRam00000001136c47f8 = puVar1;
  }
  return;
}



/* Entry: 106970044; end: 1069700ab; +[SCPieMediaEncryptionInfo descriptor] */

void FUN_106970044(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4800 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b07c90,
                        &PTR____CFConstantStringClassReference_110e662b8,&PTR_DAT_11316ac70,
                        &PTR_s_key_11316ace8,2,0x18,0x1c);
    puRam00000001136c4800 = puVar1;
  }
  return;
}



/* Entry: 1069700ac; end: 1069702f7; -[SCSelectionSpotlightStoryObservableRepositoryImpl initWithCircumstanceEngine:myStoriesDataCoordinator:selectionStoryObservableRepository:querySorter:] */

undefined8 *
FUN_1069700ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126f3e78;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
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
    uVar2 = param_6;
    _objc_retainBlock();
    uVar5 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[7];
    puVar1[7] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 5,param_5);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    _objc_initWeak(auStack_68,puVar1);
    puVar3 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_70,auStack_68);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0xb];
    puVar1[0xb] = puVar3;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1069702f8; end: 106970337;  */

void FUN_1069702f8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf3040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



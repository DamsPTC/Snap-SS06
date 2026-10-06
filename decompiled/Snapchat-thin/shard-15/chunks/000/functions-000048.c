/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b7b8d3c; end: 10b7b8e67; -[SCBaseAlertView incrementAlertViewSizeHeightForActions:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10b7b8d3c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  func_0x00010beef480();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar3 = *plStack_110;
    do {
      lVar4 = 0;
      do {
        if (*plStack_110 != lVar3) {
          _objc_enumerationMutation(param_1);
        }
        uVar2 = *(undefined8 *)(lStack_118 + lVar4 * 8);
        func_0x00010beef240(uVar2);
        func_0x00010bf8c020(uVar2);
        func_0x00010bf8c020(uVar2);
        lVar4 = lVar4 + 1;
      } while (lVar1 != lVar4);
      lVar1 = param_1;
      func_0x00010bf52a60(param_1,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    return *(long *)(param_1 + _DAT_1127936d0);
  }
  return param_1;
}



/* Entry: 10b7b8e68; end: 10b7b8e77; -[SCBaseAlertView contentItems] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b7b8e68(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127936d0);
}



/* Entry: 10b7b8e78; end: 10b7b8e87; -[SCBaseAlertView actions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b7b8e78(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127936d4);
}



/* Entry: 10b7b8e88; end: 10b7b8e97; -[SCBaseAlertView accessoryView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b7b8e88(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127936ec);
}



/* Entry: 10b7b8e98; end: 10b7b8ea7; -[SCBaseAlertView rightAccessoryView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b7b8e98(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127936f0);
}



/* Entry: 10b7b8ea8; end: 10b7b8ebf; -[SCBaseAlertView rightAccessoryViewInsets] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b7b8ea8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127936f4);
}



/* Entry: 10b7b8ec0; end: 10b7b8ed7; -[SCBaseAlertView setRightAccessoryViewInsets:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b7b8ec0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_5 + _DAT_1127936f4);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  return;
}



/* Entry: 10b7b8ed8; end: 10b7b8ee7; -[SCBaseAlertView accessoryViewOverlapRatio] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b7b8ed8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127936e4);
}



/* Entry: 10b7b8ee8; end: 10b7b8ef7; -[SCBaseAlertView setAccessoryViewOverlapRatio:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b7b8ee8(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_1127936e4) = param_1;
  return;
}



/* Entry: 10b7b8ef8; end: 10b7b8f07; -[SCBaseAlertView configuration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b7b8ef8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127936e8);
}



/* Entry: 10b7b8f08; end: 10b7b8f27; -[SCBaseAlertView alertViewFlow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b7b8f08(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127936f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b7b8f28; end: 10b7b8f3b; -[SCBaseAlertView setAlertViewFlow:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b7b8f28(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127936f8,param_3);
  return;
}



/* Entry: 10b7b8f3c; end: 10b7b8f4b; -[SCBaseAlertView dismissHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b7b8f3c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127936d8);
}



/* Entry: 10b7b8f4c; end: 10b7b8ff7; -[SCBaseAlertView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b7b8f4c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127936d8,0);
  _objc_destroyWeak(param_1 + _DAT_1127936f8);
  _objc_storeStrong(param_1 + _DAT_1127936f0,0);
  _objc_storeStrong(param_1 + _DAT_1127936ec,0);
  _objc_storeStrong(param_1 + _DAT_1127936d4,0);
  _objc_storeStrong(param_1 + _DAT_1127936e8,0);
  _objc_storeStrong(param_1 + _DAT_1127936d0,0);
  _objc_storeStrong(param_1 + _DAT_1127936e0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127936dc,0);
  return;
}



/* Entry: 10b7b8ff8; end: 10b7b9063; -[SCAsyncBlockOperationWeakFinisher initWithAsyncOperation:] */

undefined1 * FUN_10b7b8ff8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_11270aea0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b7b9064; end: 10b7b909b; -[SCAsyncBlockOperationWeakFinisher isCancelled] */

long FUN_10b7b9064(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c06e0e0();
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 10b7b909c; end: 10b7b90c7; -[SCAsyncBlockOperationWeakFinisher finish] */

void FUN_10b7b909c(long param_1)

{
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfaf680();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b7b90c8; end: 10b7b90cf; -[SCAsyncBlockOperationWeakFinisher .cxx_destruct] */

void FUN_10b7b90c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10b7b90d0; end: 10b7b911b; +[SCAsyncBlockOperation asyncOperationWithBlock:] */

void FUN_10b7b90d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b99e8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010bff8d00();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b7b911c; end: 10b7b91c7; -[SCAsyncBlockOperation initWithBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10b7b911c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_11270aea8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar4 = param_3;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112793700);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112793700) = uVar4;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSRecursiveLock_1126b3138;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112793704);
    *(undefined **)((long)puVar1 + (long)_DAT_112793704) = puVar2;
    _objc_release(uVar4);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b7b91c8; end: 10b7b922f; -[SCAsyncBlockOperation cancel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b7b91c8(long param_1)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112793704;
  func_0x00010c09faa0(*(undefined8 *)(param_1 + lVar1));
  func_0x00010c2a5c20(param_1);
  *(undefined1 *)(param_1 + _DAT_112793708) = 1;
  func_0x00010bf73800(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c280b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + lVar1),PTR_s_unlock_11267dcf8);
  return;
}



/* Entry: 10b7b9230; end: 10b7b92e3; -[SCAsyncBlockOperation finish] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b7b9230(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = (long)_DAT_112793704;
  func_0x00010c09faa0(*(undefined8 *)(param_1 + lVar2));
  lVar3 = (long)_DAT_11279370c;
  if (*(char *)(param_1 + lVar3) == '\x01') {
    func_0x00010c2a5c20(param_1);
    *(undefined1 *)(param_1 + lVar3) = 0;
    func_0x00010bf73800(param_1);
  }
  func_0x00010c2a5c20(param_1);
  *(undefined1 *)(param_1 + _DAT_112793710) = 1;
  func_0x00010bf73800(param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112793700);
  *(undefined8 *)(param_1 + _DAT_112793700) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c280b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + lVar2),PTR_s_unlock_11267dcf8);
  return;
}



/* Entry: 10b7b92e4; end: 10b7b9337; -[SCAsyncBlockOperation main] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b7b92e4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + _DAT_112793700);
  puVar1 = PTR_PTR_1126e13a0;
  _objc_alloc(PTR_PTR_1126e13a0);
  func_0x00010bff4800();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b7b9338; end: 10b7b93c7; -[SCAsyncBlockOperation start] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b7b9338(long param_1)

{
  char cVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112793704;
  func_0x00010c09faa0(*(undefined8 *)(param_1 + lVar2));
  func_0x00010c2a5c20(param_1);
  *(undefined1 *)(param_1 + _DAT_11279370c) = 1;
  func_0x00010bf73800(param_1);
  cVar1 = *(char *)(param_1 + _DAT_112793708);
  func_0x00010c280b40(*(undefined8 *)(param_1 + lVar2));
  if (cVar1 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0b6590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_main_11260b378);
  return;
}



/* Entry: 10b7b93c8; end: 10b7b93cf; -[SCAsyncBlockOperation isAsynchronous] */

undefined8 FUN_10b7b93c8(void)

{
  return 1;
}



/* Entry: 10b7b93d0; end: 10b7b93d7; -[SCAsyncBlockOperation isConcurrent] */

undefined8 FUN_10b7b93d0(void)

{
  return 1;
}



/* Entry: 10b7b93d8; end: 10b7b9423; -[SCAsyncBlockOperation isCancelled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b7b93d8(long param_1)

{
  undefined1 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112793704;
  func_0x00010c09faa0(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined1 *)(param_1 + _DAT_112793708);
  func_0x00010c280b40(*(undefined8 *)(param_1 + lVar2));
  return uVar1;
}



/* Entry: 10b7b9424; end: 10b7b946f; -[SCAsyncBlockOperation isExecuting] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b7b9424(long param_1)

{
  undefined1 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112793704;
  func_0x00010c09faa0(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined1 *)(param_1 + _DAT_11279370c);
  func_0x00010c280b40(*(undefined8 *)(param_1 + lVar2));
  return uVar1;
}



/* Entry: 10b7b9470; end: 10b7b94bb; -[SCAsyncBlockOperation isFinished] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b7b9470(long param_1)

{
  undefined1 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112793704;
  func_0x00010c09faa0(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined1 *)(param_1 + _DAT_112793710);
  func_0x00010c280b40(*(undefined8 *)(param_1 + lVar2));
  return uVar1;
}



/* Entry: 10b7b94bc; end: 10b7b94fb; -[SCAsyncBlockOperation .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b7b94bc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112793704,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112793700,0);
  return;
}



/* Entry: 10b7b94fc; end: 10b7b9503; +[SCLabelMaker attributedStringWithText:textSize:shading:format:] */

void FUN_10b7b94fc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0e4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_attributedStringWithText_textSiz_1125a12d0);
  return;
}



/* Entry: 10b7b9504; end: 10b7b959f; +[SCLabelMaker attributedStringWithText:textSize:shading:format:additionalAttributes:] */

void FUN_10b7b9504(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  func_0x00010bf0e940(param_1,param_2,param_4,param_5,param_6,param_7);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
  func_0x00010c04e840();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b7b95a0; end: 10b7b95a7; +[SCLabelMaker attributesWithTextSize:shading:format:] */

void FUN_10b7b95a0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0e950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_attributesWithTextSize_shading_f_1125a13f8);
  return;
}



/* Entry: 10b7b95a8; end: 10b7b96db; +[SCLabelMaker attributesWithTextSize:shading:format:additionalAttributes:] */

void FUN_10b7b95a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_6);
  uStack_68 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  uVar1 = param_1;
  func_0x00010bfb4200(param_1,param_2,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  uStack_60 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
  uStack_58 = uVar1;
  func_0x00010bde2040(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = &uStack_58;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_50 = param_1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,puVar5,&uStack_68,2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0d3c80();
  _objc_release(puVar2);
  _objc_release(param_1);
  _objc_release(uVar1);
  if (param_6 != (undefined8 *)0x0) {
    puVar5 = param_6;
    func_0x00010c2203a0(puVar3,param_2,param_6);
  }
  _objc_release(param_6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
    puVar4 = param_6;
    func_0x00010be185e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bebc580(param_6,param_2,puVar5);
    func_0x00010bfb41a0(puVar3,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10b7b96dc; end: 10b7b974f; +[SCLabelMaker fontWithTextSize:format:] */

void FUN_10b7b96dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  uVar1 = param_1;
  func_0x00010be185e0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bebc580(param_1,param_2,param_3);
  func_0x00010bfb41a0(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b7b9750; end: 10b7b9773; +[SCLabelMaker _sizeWithTextSize:] */

double FUN_10b7b9750(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 - 1 < 6) {
    return *(double *)(&UNK_10e5db8c0 + (param_3 - 1) * 8);
  }
  return (double)param_3;
}



/* Entry: 10b7b9774; end: 10b7b979b; +[SCLabelMaker _fontNameWithAttribute:] */

undefined ** FUN_10b7b9774(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 2U < 3) {
    return (undefined **)(&PTR_PTR_110d60788)[param_3 - 2U];
  }
  return &PTR____CFConstantStringClassReference_110f82938;
}



/* Entry: 10b7b979c; end: 10b7b97d7; +[SCLabelMaker _colorWithShading:] */

void FUN_10b7b979c(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 4) {
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,
                        *(undefined8 *)(&UNK_10e5db8f0 + (param_3 - 1U) * 8));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b7b97d8; end: 10b7b9877; -[MASCompositeConstraint constraint:shouldBeReplacedWithConstraint:] */

void FUN_10b7b97d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf38d60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfecde0();
  _objc_release(param_3);
  _objc_release(uVar1);
  func_0x00010bf38d60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c130f40();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b7b9878; end: 10b7b98ff; -[MASCompositeConstraint constraint:addConstraintWithLayoutAttribute:] */

void FUN_10b7b9878(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf49360();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  func_0x00010bf38d60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10b7b9900; end: 10b7b994f; -[MASCompositeConstraint multipliedBy] */

void FUN_10b7b9900(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10b7b9950;
  puStack_20 = &UNK_110cd1590;
  uStack_18 = param_1;
  _objc_retainBlock(&puStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b7b9950; end: 10b7b9a93;  */

void FUN_10b7b9950(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
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
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar1 = *(long *)(param_2 + 0x20);
  func_0x00010bf38d60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar5 = *plStack_120;
    do {
      lVar6 = 0;
      do {
        if (*plStack_120 != lVar5) {
          _objc_enumerationMutation(lVar1);
        }
        lVar3 = *(long *)(lStack_128 + lVar6 * 8);
        func_0x00010c0d2840();
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(lVar3 + 0x10))(param_1);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(lVar3);
        lVar6 = lVar6 + 1;
      } while (lVar2 != lVar6);
      lVar2 = lVar1;
      func_0x00010bf52a60(lVar1,param_3,&uStack_130,auStack_e8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(lVar1);
  uVar4 = *(undefined8 *)(param_2 + 0x20);
  _objc_retain();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    pcStack_138 = FUN_10b7b9a94;
    puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_160 = 0xc2000000;
    pcStack_158 = FUN_10b7b9ae4;
    puStack_150 = &UNK_110cd1590;
    uStack_148 = uVar4;
    puStack_140 = &stack0xfffffffffffffff0;
    _objc_retainBlock(&puStack_168);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b7b9a94; end: 10b7b9ae3; -[MASCompositeConstraint dividedBy] */

void FUN_10b7b9a94(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10b7b9ae4;
  puStack_20 = &UNK_110cd1590;
  uStack_18 = param_1;
  _objc_retainBlock(&puStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b7b9ae4; end: 10b7b9c27;  */

void FUN_10b7b9ae4(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
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
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar1 = *(long *)(param_2 + 0x20);
  func_0x00010bf38d60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar5 = *plStack_120;
    do {
      lVar6 = 0;
      do {
        if (*plStack_120 != lVar5) {
          _objc_enumerationMutation(lVar1);
        }
        lVar3 = *(long *)(lStack_128 + lVar6 * 8);
        func_0x00010bf87140();
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(lVar3 + 0x10))(param_1);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(lVar3);
        lVar6 = lVar6 + 1;
      } while (lVar2 != lVar6);
      lVar2 = lVar1;
      func_0x00010bf52a60(lVar1,param_3,&uStack_130,auStack_e8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(lVar1);
  uVar4 = *(undefined8 *)(param_2 + 0x20);
  _objc_retain();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    pcStack_138 = FUN_10b7b9c28;
    puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_160 = 0xc2000000;
    pcStack_158 = FUN_10b7b9c78;
    puStack_150 = &UNK_110d607a0;
    uStack_148 = uVar4;
    puStack_140 = &stack0xfffffffffffffff0;
    _objc_retainBlock(&puStack_168);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b7b9c28; end: 10b7b9c77; -[MASCompositeConstraint priority] */

void FUN_10b7b9c28(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10b7b9c78;
  puStack_20 = &UNK_110d607a0;
  uStack_18 = param_1;
  _objc_retainBlock(&puStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b7b9c78; end: 10b7b9dbb;  */

undefined8 FUN_10b7b9c78(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar1 = *(long *)(param_2 + 0x20);
  func_0x00010bf38d60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar6 = *plStack_120;
    do {
      lVar7 = 0;
      do {
        if (*plStack_120 != lVar6) {
          _objc_enumerationMutation(lVar1);
        }
        lVar3 = *(long *)(lStack_128 + lVar7 * 8);
        func_0x00010c113c80();
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(lVar3 + 0x10))(param_1);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(lVar3);
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      lVar2 = lVar1;
      func_0x00010bf52a60(lVar1,param_3,&uStack_130,auStack_e8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(lVar1);
  uVar5 = *(undefined8 *)(param_2 + 0x20);
  uVar4 = uVar5;
  _objc_retain(uVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
    return uVar5;
  }
  ___stack_chk_fail();
  func_0x00010bf49360();
  _objc_unsafeClaimAutoreleasedReturnValue();
  return uVar4;
}



/* Entry: 10b7b9dbc; end: 10b7b9def; -[MASCompositeConstraint addConstraintWithLayoutAttribute:] */

undefined8 FUN_10b7b9dbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf49360(param_1,param_2,param_1,param_3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return param_1;
}



/* Entry: 10b7b9df0; end: 10b7b9e3f; -[MASCompositeConstraint key] */

void FUN_10b7b9df0(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10b7b9e40;
  puStack_20 = &UNK_1109057d0;
  uStack_18 = param_1;
  _objc_retainBlock(&puStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b7b9e40; end: 10b7b9feb;  */

/* WARNING: Heritage AFTER dead removal. Example location: r0x00000000 : 0x00010b7ba064 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

long FUN_10b7b9e40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_6);
  func_0x00010c1c2bc0(*(undefined8 *)(param_5 + 0x20));
  uVar8 = 0;
  lVar2 = *(long *)(param_5 + 0x20);
  func_0x00010bf38d60();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar7 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      lVar3 = *(long *)(lVar6 * 8);
      func_0x00010c086560();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar3 + 0x10))(lVar3,puVar4);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(lVar3);
      lVar6 = lVar6 + 1;
    } while (lVar7 != lVar6);
    lVar7 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release(lVar2);
  lVar7 = *(long *)(param_5 + 0x20);
  _objc_retain(lVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar7);
    return lVar7;
  }
  ___stack_chk_fail();
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar9 = 0;
  uVar10 = param_2;
  func_0x00010bf38d60();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_6;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar7 != 0) {
    lVar5 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_6);
      }
      uVar9 = uVar8;
      uVar10 = param_2;
      func_0x00010c1ad980(uVar8,param_2,param_3,param_4,*(undefined8 *)(lVar5 * 8));
      lVar5 = lVar5 + 1;
    } while (lVar7 != lVar5);
    lVar7 = param_6;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar2) {
    return param_6;
  }
  ___stack_chk_fail();
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar8 = 0;
  func_0x00010bf38d60();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_6;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar7 != 0) {
    lVar5 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_6);
      }
      uVar8 = uVar9;
      func_0x00010c1d0bc0(uVar9,*(undefined8 *)(lVar5 * 8));
      lVar5 = lVar5 + 1;
    } while (lVar7 != lVar5);
    lVar7 = param_6;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar2) {
    return param_6;
  }
  ___stack_chk_fail();
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf38d60();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_6;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar7 != 0) {
    lVar5 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_6);
      }
      func_0x00010c17a800(uVar8,uVar10,*(undefined8 *)(lVar5 * 8));
      lVar5 = lVar5 + 1;
    } while (lVar7 != lVar5);
    lVar7 = param_6;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar2) {
    return param_6;
  }
  ___stack_chk_fail();
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf38d60();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_6;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar7 != 0) {
    lVar5 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_6);
      }
      func_0x00010c2803c0(*(undefined8 *)(lVar5 * 8));
      lVar5 = lVar5 + 1;
    } while (lVar7 != lVar5);
    lVar7 = param_6;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar2) {
    return param_6;
  }
  ___stack_chk_fail();
  return *(long *)(param_6 + _DAT_112793718);
}



/* Entry: 10b7b9fec; end: 10b7ba10b; -[MASCompositeConstraint setInsets:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10b7b9fec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_480;
  long lStack_478;
  long *plStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined1 auStack_438 [128];
  long lStack_3b8;
  undefined8 uStack_370;
  long lStack_368;
  long *plStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined1 auStack_328 [128];
  long lStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_250;
  long lStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined1 auStack_208 [128];
  long lStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uVar6 = param_2;
  func_0x00010bf38d60();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_5;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar2 = *plStack_120;
    do {
      lVar3 = 0;
      do {
        if (*plStack_120 != lVar2) {
          _objc_enumerationMutation(param_5);
        }
        uVar4 = param_1;
        uVar6 = param_2;
        func_0x00010c1ad980(param_1,param_2,param_3,param_4,*(undefined8 *)(lStack_128 + lVar3 * 8))
        ;
        lVar3 = lVar3 + 1;
      } while (lVar1 != lVar3);
      lVar1 = param_5;
      func_0x00010bf52a60(param_5,param_6,&uStack_130,auStack_e8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_5;
  }
  ___stack_chk_fail();
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = 0;
  lStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  plStack_240 = (long *)0x0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_180 = param_3;
  uStack_178 = param_4;
  func_0x00010bf38d60();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_5;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar2 = *plStack_240;
    do {
      lVar3 = 0;
      do {
        if (*plStack_240 != lVar2) {
          _objc_enumerationMutation(param_5);
        }
        uVar5 = uVar4;
        func_0x00010c1d0bc0(uVar4,*(undefined8 *)(lStack_248 + lVar3 * 8));
        lVar3 = lVar3 + 1;
      } while (lVar1 != lVar3);
      lVar1 = param_5;
      func_0x00010bf52a60(param_5,param_6,&uStack_250,auStack_208,0x10);
    } while (lVar1 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return param_5;
  }
  ___stack_chk_fail();
  lStack_2a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_368 = 0;
  uStack_370 = 0;
  uStack_358 = 0;
  plStack_360 = (long *)0x0;
  uStack_348 = 0;
  uStack_350 = 0;
  uStack_338 = 0;
  uStack_340 = 0;
  uStack_2a0 = param_3;
  uStack_298 = uVar4;
  func_0x00010bf38d60();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_5;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar2 = *plStack_360;
    do {
      lVar3 = 0;
      do {
        if (*plStack_360 != lVar2) {
          _objc_enumerationMutation(param_5);
        }
        func_0x00010c17a800(uVar5,uVar6,*(undefined8 *)(lStack_368 + lVar3 * 8));
        lVar3 = lVar3 + 1;
      } while (lVar1 != lVar3);
      lVar1 = param_5;
      func_0x00010bf52a60(param_5,param_6,&uStack_370,auStack_328,0x10);
    } while (lVar1 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2a8) {
    return param_5;
  }
  ___stack_chk_fail();
  lStack_3b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_478 = 0;
  uStack_480 = 0;
  uStack_468 = 0;
  plStack_470 = (long *)0x0;
  uStack_458 = 0;
  uStack_460 = 0;
  uStack_448 = 0;
  uStack_450 = 0;
  func_0x00010bf38d60();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_5;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar2 = *plStack_470;
    do {
      lVar3 = 0;
      do {
        if (*plStack_470 != lVar2) {
          _objc_enumerationMutation(param_5);
        }
        func_0x00010c2803c0(*(undefined8 *)(lStack_478 + lVar3 * 8));
        lVar3 = lVar3 + 1;
      } while (lVar1 != lVar3);
      lVar1 = param_5;
      func_0x00010bf52a60(param_5,param_6,&uStack_480,auStack_438,0x10);
    } while (lVar1 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3b8) {
    return param_5;
  }
  ___stack_chk_fail();
  return *(long *)(param_5 + _DAT_112793718);
}



/* Entry: 10b7ba10c; end: 10b7ba20b; -[MASCompositeConstraint setOffset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10b7ba10c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uStack_350;
  long lStack_348;
  long *plStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined1 auStack_308 [128];
  long lStack_288;
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined1 auStack_1f8 [128];
  long lStack_178;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  func_0x00010bf38d60();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar2 = *plStack_110;
    do {
      lVar3 = 0;
      do {
        if (*plStack_110 != lVar2) {
          _objc_enumerationMutation(param_3);
        }
        uVar4 = param_1;
        func_0x00010c1d0bc0(param_1,*(undefined8 *)(lStack_118 + lVar3 * 8));
        lVar3 = lVar3 + 1;
      } while (lVar1 != lVar3);
      lVar1 = param_3;
      func_0x00010bf52a60(param_3,param_4,&uStack_120,auStack_d8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_3;
  }
  ___stack_chk_fail();
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  plStack_230 = (long *)0x0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  func_0x00010bf38d60();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar2 = *plStack_230;
    do {
      lVar3 = 0;
      do {
        if (*plStack_230 != lVar2) {
          _objc_enumerationMutation(param_3);
        }
        func_0x00010c17a800(uVar4,param_2,*(undefined8 *)(lStack_238 + lVar3 * 8));
        lVar3 = lVar3 + 1;
      } while (lVar1 != lVar3);
      lVar1 = param_3;
      func_0x00010bf52a60(param_3,param_4,&uStack_240,auStack_1f8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
    return param_3;
  }
  ___stack_chk_fail();
  lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_348 = 0;
  uStack_350 = 0;
  uStack_338 = 0;
  plStack_340 = (long *)0x0;
  uStack_328 = 0;
  uStack_330 = 0;
  uStack_318 = 0;
  uStack_320 = 0;
  func_0x00010bf38d60();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar2 = *plStack_340;
    do {
      lVar3 = 0;
      do {
        if (*plStack_340 != lVar2) {
          _objc_enumerationMutation(param_3);
        }
        func_0x00010c2803c0(*(undefined8 *)(lStack_348 + lVar3 * 8));
        lVar3 = lVar3 + 1;
      } while (lVar1 != lVar3);
      lVar1 = param_3;
      func_0x00010bf52a60(param_3,param_4,&uStack_350,auStack_308,0x10);
    } while (lVar1 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_288) {
    return param_3;
  }
  ___stack_chk_fail();
  return *(long *)(param_3 + _DAT_112793718);
}



/* Entry: 10b7ba20c; end: 10b7ba313; -[MASCompositeConstraint setCenterOffset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10b7ba20c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_230;
  long lStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 auStack_1e8 [128];
  long lStack_168;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  func_0x00010bf38d60();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar2 = *plStack_110;
    do {
      lVar3 = 0;
      do {
        if (*plStack_110 != lVar2) {
          _objc_enumerationMutation(param_3);
        }
        func_0x00010c17a800(param_1,param_2,*(undefined8 *)(lStack_118 + lVar3 * 8));
        lVar3 = lVar3 + 1;
      } while (lVar1 != lVar3);
      lVar1 = param_3;
      func_0x00010bf52a60(param_3,param_4,&uStack_120,auStack_d8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_3;
  }
  ___stack_chk_fail();
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  plStack_220 = (long *)0x0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  func_0x00010bf38d60();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar2 = *plStack_220;
    do {
      lVar3 = 0;
      do {
        if (*plStack_220 != lVar2) {
          _objc_enumerationMutation(param_3);
        }
        func_0x00010c2803c0(*(undefined8 *)(lStack_228 + lVar3 * 8));
        lVar3 = lVar3 + 1;
      } while (lVar1 != lVar3);
      lVar1 = param_3;
      func_0x00010bf52a60(param_3,param_4,&uStack_230,auStack_1e8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return param_3;
  }
  ___stack_chk_fail();
  return *(long *)(param_3 + _DAT_112793718);
}



/* Entry: 10b7ba314; end: 10b7ba403; -[MASCompositeConstraint uninstall] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10b7ba314(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  func_0x00010bf38d60();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar2 = *plStack_100;
    do {
      lVar3 = 0;
      do {
        if (*plStack_100 != lVar2) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c2803c0(*(undefined8 *)(lStack_108 + lVar3 * 8));
        lVar3 = lVar3 + 1;
      } while (lVar1 != lVar3);
      lVar1 = param_1;
      func_0x00010bf52a60(param_1,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_1;
  }
  ___stack_chk_fail();
  return *(long *)(param_1 + _DAT_112793718);
}



/* Entry: 10b7ba404; end: 10b7ba413; -[MASCompositeConstraint mas_key] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b7ba404(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112793718);
}



/* Entry: 10b7ba414; end: 10b7ba453; -[MASCompositeConstraint setMas_key:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b7ba414(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112793718;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b7ba454; end: 10b7ba493; -[MASCompositeConstraint setChildConstraints:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b7ba454(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112793714;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b7ba494; end: 10b7ba4e3; -[MASConstraint mas_equalTo] */

void FUN_10b7ba494(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10b7ba4e4;
  puStack_20 = &UNK_1109057d0;
  uStack_18 = param_1;
  _objc_retainBlock(&puStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b7ba4e4; end: 10b7ba557;  */

void FUN_10b7ba4e4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bf98600();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10b7ba558; end: 10b7ba5a7; -[MASConstraint greaterThanOrEqualTo] */

void FUN_10b7ba558(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10b7ba5a8;
  puStack_20 = &UNK_1109057d0;
  uStack_18 = param_1;
  _objc_retainBlock(&puStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b7ba5a8; end: 10b7ba61b;  */

void FUN_10b7ba5a8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bf98600();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10b7ba61c; end: 10b7ba66b; -[MASConstraint mas_greaterThanOrEqualTo] */

void FUN_10b7ba61c(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10b7ba66c;
  puStack_20 = &UNK_1109057d0;
  uStack_18 = param_1;
  _objc_retainBlock(&puStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b7ba66c; end: 10b7ba6df;  */

void FUN_10b7ba66c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bf98600();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10b7ba6e0; end: 10b7ba72f; -[MASConstraint lessThanOrEqualTo] */

void FUN_10b7ba6e0(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10b7ba730;
  puStack_20 = &UNK_1109057d0;
  uStack_18 = param_1;
  _objc_retainBlock(&puStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b7ba730; end: 10b7ba7a3;  */

void FUN_10b7ba730(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bf98600();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10b7ba7a4; end: 10b7ba7f3; -[MASConstraint mas_lessThanOrEqualTo] */

void FUN_10b7ba7a4(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10b7ba7f4;
  puStack_20 = &UNK_1109057d0;
  uStack_18 = param_1;
  _objc_retainBlock(&puStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b7ba7f4; end: 10b7ba867;  */

void FUN_10b7ba7f4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bf98600();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10b7ba868; end: 10b7ba8b7; -[MASConstraint priorityLow] */

void FUN_10b7ba868(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10b7ba8b8;
  puStack_20 = &UNK_110855710;
  uStack_18 = param_1;
  _objc_retainBlock(&puStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b7ba8b8; end: 10b7ba917;  */

void FUN_10b7ba8b8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c113c80();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(0x437a0000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10b7ba918; end: 10b7ba967; -[MASConstraint priorityMedium] */

void FUN_10b7ba918(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10b7ba968;
  puStack_20 = &UNK_110855710;
  uStack_18 = param_1;
  _objc_retainBlock(&puStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b7ba968; end: 10b7ba9c7;  */

void FUN_10b7ba968(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c113c80();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(0x43fa0000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10b7ba9c8; end: 10b7baa17; -[MASConstraint priorityHigh] */

void FUN_10b7ba9c8(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10b7baa18;
  puStack_20 = &UNK_110855710;
  uStack_18 = param_1;
  _objc_retainBlock(&puStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b7baa18; end: 10b7baa77;  */

void FUN_10b7baa18(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c113c80();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(0x443b8000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10b7baa78; end: 10b7baac7; -[MASConstraint insets] */

void FUN_10b7baa78(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10b7baac8;
  puStack_20 = &UNK_110d60800;
  uStack_18 = param_1;
  _objc_retainBlock(&puStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b7baac8; end: 10b7baafb;  */

void FUN_10b7baac8(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c1ad980(*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b7baafc; end: 10b7bab4b; -[MASConstraint centerOffset] */

void FUN_10b7baafc(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10b7bab4c;
  puStack_20 = &UNK_110d60860;
  uStack_18 = param_1;
  _objc_retainBlock(&puStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b7bab4c; end: 10b7bab7f;  */

void FUN_10b7bab4c(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c17a800(*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b7bab80; end: 10b7babcf; -[MASConstraint offset] */

void FUN_10b7bab80(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10b7babd0;
  puStack_20 = &UNK_110cd1590;
  uStack_18 = param_1;
  _objc_retainBlock(&puStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b7babd0; end: 10b7bac03;  */

void FUN_10b7babd0(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c1d0bc0(*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b7bac04; end: 10b7bac53; -[MASConstraint valueOffset] */

void FUN_10b7bac04(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10b7bac54;
  puStack_20 = &UNK_110d60890;
  uStack_18 = param_1;
  _objc_retainBlock(&puStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b7bac54; end: 10b7bac8b;  */

void FUN_10b7bac54(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c1b9aa0(*(undefined8 *)(param_1 + 0x20),param_2,param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b7bac8c; end: 10b7bac93; -[MASConstraint mas_offset] */

undefined8 FUN_10b7bac8c(void)

{
  return 0;
}



/* Entry: 10b7bac94; end: 10b7bada3; -[MASConstraint setLayoutConstantWithValue:] */

void FUN_10b7bac94(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  if ((uVar3 & 1) == 0) {
    uVar3 = param_3;
    _objc_retainAutorelease();
    iVar1 = (int)uVar3;
    func_0x00010c0dfba0();
    _strcmp();
    if (iVar1 == 0) {
      func_0x00010bfcbfc0(param_3);
      func_0x00010c17a800(uStack_40,uStack_38,param_1);
    }
    else {
      uVar3 = param_3;
      _objc_retainAutorelease();
      iVar1 = (int)uVar3;
      func_0x00010c0dfba0();
      _strcmp();
      if (iVar1 == 0) {
        func_0x00010bfcbfc0(param_3);
        func_0x00010c202d00(uStack_40,uStack_38,param_1);
      }
      else {
        uVar3 = param_3;
        _objc_retainAutorelease();
        iVar1 = (int)uVar3;
        func_0x00010c0dfba0();
        _strcmp();
        if (iVar1 == 0) {
          func_0x00010bfcbfc0(param_3);
          func_0x00010c1ad980(uStack_40,uStack_38,uStack_30,uStack_28,param_1);
        }
      }
    }
  }
  else {
    func_0x00010bf885a0(param_3);
    func_0x00010c1d0bc0(param_1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10b7bada4; end: 10b7bada7; -[MASConstraint with] */

void FUN_10b7bada4(void)

{
  return;
}



/* Entry: 10b7bada8; end: 10b7badab; -[MASConstraint and] */

void FUN_10b7bada8(void)

{
  return;
}



/* Entry: 10b7badac; end: 10b7bae4b; -[MASConstraint addConstraintWithLayoutAttribute:] */

void FUN_10b7badac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9aa60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar1);
  _objc_release(param_2);
  _objc_exception_throw(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bef79d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b7bae4c; end: 10b7bae53; -[MASConstraint left] */

void FUN_10b7bae4c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef79d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_addConstraintWithLayoutAttribute_11259b818,1)
  ;
  return;
}



/* Entry: 10b7bae54; end: 10b7bae5b; -[MASConstraint top] */

void FUN_10b7bae54(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef79d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_addConstraintWithLayoutAttribute_11259b818,3)
  ;
  return;
}



/* Entry: 10b7bae5c; end: 10b7bae63; -[MASConstraint right] */

void FUN_10b7bae5c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef79d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_addConstraintWithLayoutAttribute_11259b818,2)
  ;
  return;
}



/* Entry: 10b7bae64; end: 10b7bae6b; -[MASConstraint bottom] */

void FUN_10b7bae64(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef79d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_addConstraintWithLayoutAttribute_11259b818,4)
  ;
  return;
}



/* Entry: 10b7bae6c; end: 10b7bae73; -[MASConstraint leading] */

void FUN_10b7bae6c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef79d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_addConstraintWithLayoutAttribute_11259b818,5)
  ;
  return;
}



/* Entry: 10b7bae74; end: 10b7bae7b; -[MASConstraint trailing] */

void FUN_10b7bae74(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef79d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_addConstraintWithLayoutAttribute_11259b818,6)
  ;
  return;
}



/* Entry: 10b7bae7c; end: 10b7bae83; -[MASConstraint width] */

void FUN_10b7bae7c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef79d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_addConstraintWithLayoutAttribute_11259b818,7)
  ;
  return;
}



/* Entry: 10b7bae84; end: 10b7bae8b; -[MASConstraint height] */

void FUN_10b7bae84(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef79d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_addConstraintWithLayoutAttribute_11259b818,8)
  ;
  return;
}



/* Entry: 10b7bae8c; end: 10b7bae93; -[MASConstraint centerX] */

void FUN_10b7bae8c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef79d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_addConstraintWithLayoutAttribute_11259b818,9)
  ;
  return;
}



/* Entry: 10b7bae94; end: 10b7bae9b; -[MASConstraint centerY] */

void FUN_10b7bae94(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef79d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_addConstraintWithLayoutAttribute_11259b818,10);
  return;
}



/* Entry: 10b7bae9c; end: 10b7baea3; -[MASConstraint baseline] */

void FUN_10b7bae9c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef79d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_addConstraintWithLayoutAttribute_11259b818,0xb);
  return;
}



/* Entry: 10b7baea4; end: 10b7baf43; -[MASConstraint multipliedBy] */

void FUN_10b7baea4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar3 = param_2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9aa60();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar1);
  _objc_release(param_2);
  _objc_exception_throw(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar4 = uVar3;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9aa60();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar1);
  _objc_release(uVar3);
  _objc_exception_throw(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar3 = uVar4;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9aa60();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar1);
  _objc_release(uVar4);
  _objc_exception_throw(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar4 = uVar3;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9aa60();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar1);
  _objc_release(uVar3);
  _objc_exception_throw(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar3 = uVar4;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9aa60();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar1);
  _objc_release(uVar4);
  _objc_exception_throw(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar4 = uVar3;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9aa60();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar1);
  _objc_release(uVar3);
  _objc_exception_throw(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar3 = uVar4;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9aa60();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar1);
  _objc_release(uVar4);
  _objc_exception_throw(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar4 = uVar3;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9aa60();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar1);
  _objc_release(uVar3);
  _objc_exception_throw(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar5 = uVar4;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9aa60();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar1);
  _objc_release(uVar4);
  _objc_exception_throw(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar3 = uVar5;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9aa60();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar1);
  _objc_release(uVar5);
  _objc_exception_throw(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9aa60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar1);
  _objc_release(uVar3);
  _objc_exception_throw(puVar2);
  _objc_loadWeakRetained(puVar2 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b7baf44; end: 10b7bafe3; -[MASConstraint dividedBy] */

void FUN_10b7baf44(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar3 = param_2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9aa60();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar1);
  _objc_release(param_2);
  _objc_exception_throw(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar4 = uVar3;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9aa60();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar1);
  _objc_release(uVar3);
  _objc_exception_throw(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar3 = uVar4;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9aa60();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar1);
  _objc_release(uVar4);
  _objc_exception_throw(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar4 = uVar3;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9aa60();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar1);
  _objc_release(uVar3);
  _objc_exception_throw(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar3 = uVar4;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9aa60();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar1);
  _objc_release(uVar4);
  _objc_exception_throw(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar4 = uVar3;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9aa60();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar1);
  _objc_release(uVar3);
  _objc_exception_throw(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar3 = uVar4;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9aa60();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar1);
  _objc_release(uVar4);
  _objc_exception_throw(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar4 = uVar3;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9aa60();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar1);
  _objc_release(uVar3);
  _objc_exception_throw(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar3 = uVar4;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9aa60();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar1);
  _objc_release(uVar4);
  _objc_exception_throw(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9aa60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar1);
  _objc_release(uVar3);
  _objc_exception_throw(puVar2);
  _objc_loadWeakRetained(puVar2 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b7bafe4; end: 10b7bb083; -[MASConstraint priority] */

void FUN_10b7bafe4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar3 = param_2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9aa60();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar1);
  _objc_release(param_2);
  _objc_exception_throw(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar4 = uVar3;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9aa60();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar1);
  _objc_release(uVar3);
  _objc_exception_throw(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar3 = uVar4;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9aa60();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar1);
  _objc_release(uVar4);
  _objc_exception_throw(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar4 = uVar3;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9aa60();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar1);
  _objc_release(uVar3);
  _objc_exception_throw(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar3 = uVar4;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9aa60();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar1);
  _objc_release(uVar4);
  _objc_exception_throw(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar4 = uVar3;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9aa60();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar1);
  _objc_release(uVar3);
  _objc_exception_throw(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar3 = uVar4;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9aa60();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar1);
  _objc_release(uVar4);
  _objc_exception_throw(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar4 = uVar3;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9aa60();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar1);
  _objc_release(uVar3);
  _objc_exception_throw(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9aa60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar1);
  _objc_release(uVar4);
  _objc_exception_throw(puVar2);
  _objc_loadWeakRetained(puVar2 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b7bb084; end: 10b7bb123; -[MASConstraint equalToWithRelation] */

void FUN_10b7bb084(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar3 = param_2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9aa60();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar1);
  _objc_release(param_2);
  _objc_exception_throw(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar4 = uVar3;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9aa60();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar1);
  _objc_release(uVar3);
  _objc_exception_throw(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar3 = uVar4;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9aa60();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar1);
  _objc_release(uVar4);
  _objc_exception_throw(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar4 = uVar3;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9aa60();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar1);
  _objc_release(uVar3);
  _objc_exception_throw(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar3 = uVar4;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9aa60();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar1);
  _objc_release(uVar4);
  _objc_exception_throw(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar4 = uVar3;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9aa60();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar1);
  _objc_release(uVar3);
  _objc_exception_throw(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar3 = uVar4;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9aa60();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar1);
  _objc_release(uVar4);
  _objc_exception_throw(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9aa60();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar1);
  _objc_release(uVar3);
  _objc_exception_throw();
  _objc_loadWeakRetained(puVar2 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



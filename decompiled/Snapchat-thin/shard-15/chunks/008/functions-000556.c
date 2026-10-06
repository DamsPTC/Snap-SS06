/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10bcb777c; end: 10bcb782f; +[SCDiskUtility freeNodes:] */

undefined * FUN_10bcb777c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x000107c31290();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf0e860(puVar1,param_2,puVar2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = puVar3;
  func_0x00010c0dff20(puVar3,param_2,*(undefined8 *)PTR__NSFileSystemFreeNodes_110345450);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c282800();
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar1);
  return puVar4;
}



/* Entry: 10bcb7830; end: 10bcb78e3; +[SCDiskUtility totalNodes:] */

undefined * FUN_10bcb7830(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x000107c31290();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf0e860(puVar1,param_2,puVar2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = puVar3;
  func_0x00010c0dff20(puVar3,param_2,*(undefined8 *)PTR__NSFileSystemNodes_110345460);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c282800();
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar1);
  return puVar4;
}



/* Entry: 10bcb78e4; end: 10bcb794f; +[SCDiskUtility totalStorageUsageWithCancelationToken:] */

undefined * FUN_10bcb78e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b24e8;
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x000107c31290();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf278a0(puVar2,param_2,uVar1,param_3);
  _objc_release(param_3);
  _objc_release(uVar1);
  return puVar2;
}



/* Entry: 10bcb7950; end: 10bcb79a7; +[SCDiskUtility totalDiskSpaceInMiBString] */

void FUN_10bcb7950(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lStack_28;
  
  lStack_28 = 0;
  uVar1 = param_1;
  func_0x00010c2763c0(param_1,param_2,&lStack_28);
  if (lStack_28 == 0) {
    func_0x00010be18b20(param_1,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10bcb79a8; end: 10bcb7a03; +[SCDiskUtility freeNodesString] */

void FUN_10bcb79a8(undefined8 param_1,undefined8 param_2)

{
  long lStack_18;
  
  lStack_18 = 0;
  func_0x00010bfb7500(param_1,param_2,&lStack_18);
  if (lStack_18 == 0) {
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110db1798);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10bcb7a04; end: 10bcb7a5f; +[SCDiskUtility totalNodesString] */

void FUN_10bcb7a04(undefined8 param_1,undefined8 param_2)

{
  long lStack_18;
  
  lStack_18 = 0;
  func_0x00010c2768a0(param_1,param_2,&lStack_18);
  if (lStack_18 == 0) {
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110db1798);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10bcb7a60; end: 10bcb7c5b; +[SCDiskUtility currentOpenedFiles] */

int * FUN_10bcb7a60(void)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  undefined *puVar4;
  long lVar5;
  int *piVar6;
  int *piVar7;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  piVar2 = (int *)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  piVar7 = (int *)0x0;
  piVar6 = piVar2;
  do {
    ___error();
    *piVar6 = 0;
    piVar6 = piVar7;
    _fcntl(piVar7,1);
    if (((int)piVar6 == -1) && (___error(), *piVar6 != 0)) {
      ___error();
      if (*piVar6 != 9) break;
    }
    else {
      _fcntl(piVar7,0x32);
      piVar6 = (int *)PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25d8e0();
      _objc_retainAutoreleasedReturnValue();
      piVar3 = piVar2;
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if (piVar3 == (int *)0x0) {
        func_0x00010c1d0560(piVar2);
      }
      else {
        piVar3 = piVar2;
        func_0x00010c0e00e0(piVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067ec0();
        func_0x00010c0df760(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(piVar2);
        _objc_release(puVar4);
        _objc_release(piVar3);
      }
      _objc_release();
    }
    uVar1 = (int)piVar7 + 1;
    piVar7 = (int *)(ulong)uVar1;
  } while (uVar1 != 0x400);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(piVar2);
  _objc_release(puVar4);
  piVar6 = piVar2;
  func_0x00010bf51e00();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(piVar6);
    return piVar6;
  }
  ___stack_chk_fail();
  piVar6 = (int *)0x0;
  piVar7 = (int *)0x0;
  do {
    ___error();
    *piVar2 = 0;
    piVar2 = piVar7;
    _fcntl(piVar7,1);
    if (((int)piVar2 == -1) && (___error(), *piVar2 != 0)) {
      ___error();
      if (*piVar2 != 9) {
        return piVar6;
      }
    }
    else {
      piVar6 = (int *)(ulong)((int)piVar6 + 1);
    }
    uVar1 = (int)piVar7 + 1;
    piVar7 = (int *)(ulong)uVar1;
  } while (uVar1 != 0x400);
  return piVar6;
}



/* Entry: 10bcb7c5c; end: 10bcb7cd7; +[SCDiskUtility numberOfOpenFiles] */

int FUN_10bcb7c5c(int *param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  piVar3 = (int *)0x0;
  do {
    ___error();
    *param_1 = 0;
    param_1 = piVar3;
    _fcntl(piVar3,1);
    if (((int)param_1 == -1) && (___error(), *param_1 != 0)) {
      ___error();
      if (*param_1 != 9) {
        return iVar2;
      }
    }
    else {
      iVar2 = iVar2 + 1;
    }
    uVar1 = (int)piVar3 + 1;
    piVar3 = (int *)(ulong)uVar1;
  } while (uVar1 != 0x400);
  return iVar2;
}



/* Entry: 10bcb7cd8; end: 10bcb7e7f; +[SCDiskUtility topOpenedFiles:] */

void FUN_10bcb7cd8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_PTR_1126b24e8;
  func_0x00010bf5f640();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x10bcb7dec;
  puStack_40 = &UNK_1108eb540;
  puStack_38 = puVar1;
  _objc_retain(puVar1);
  puVar3 = puVar2;
  func_0x00010c246ca0(puVar2,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = puVar3;
  func_0x00010bf529e0();
  if ((undefined *)(param_3 + 1U) < puVar2) {
    puVar2 = (undefined *)(param_3 + 1);
  }
  puVar4 = puVar3;
  func_0x00010c25e980(puVar3,param_2,0,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar2 = puVar1;
  func_0x00010bf720e0(puVar1,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puStack_38);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10bcb7e80; end: 10bcb7ed7; -[SCContextAwareQueuePerformerThrottler resetForNextAppStart] */

void FUN_10bcb7e80(long param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10bcb7ed8;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x000107c27d8c(*(undefined8 *)(param_1 + 0x18),&puStack_38);
  return;
}



/* Entry: 10bcb7ed8; end: 10bcb7ee3;  */

void FUN_10bcb7ed8(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x28) = 0;
  return;
}



/* Entry: 10bcb7ee4; end: 10bcb7f3b; -[SCContextAwareQueuePerformerThrottler clearCurrentRequest:] */

void FUN_10bcb7ee4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_10bcb7f3c;
  puStack_28 = &UNK_110848c48;
  lStack_20 = param_1;
  uStack_18 = param_3;
  func_0x000107c27d8c(*(undefined8 *)(param_1 + 0x18),&puStack_40);
  return;
}



/* Entry: 10bcb7f3c; end: 10bcb7f87;  */

void FUN_10bcb7f3c(long param_1)

{
  if (*(long *)(*(long *)(param_1 + 0x20) + 8) != 0) {
    *(undefined8 *)(*(long *)(param_1 + 0x20) + 8) = 0;
    _objc_release();
    func_0x00010c12adc0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010be2ce70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s__handleNextRequest_112568d38);
    return;
  }
  return;
}



/* Entry: 10bcb7f88; end: 10bcb7fdf; -[SCContextAwareQueuePerformerThrottler _isAppStartupThrottleRequest:] */

ulong FUN_10bcb7f88(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  _objc_opt_respondsToSelector(param_3,PTR_s_isAppStartupThrottleRequest_1125f8b40);
  if ((uVar1 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = param_3;
    func_0x00010c06c4c0(param_3);
  }
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 10bcb7fe0; end: 10bcb8197; -[SCContextAwareQueuePerformerThrottler .cxx_destruct] */

void FUN_10bcb7fe0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10bcb8198; end: 10bcb81cf;  */

void FUN_10bcb8198(void)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_11112ef20;
  func_0x00010c067fc0();
  func_0x00010bcb8068();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = ppuRam00000001137fdf90;
  ppuRam00000001137fdf90 = ppuVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10bcb81d0; end: 10bcb8223;  */

void FUN_10bcb81d0(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137fdfa8 != -1) {
    func_0x000107c27d9c(0x1137fdfa8,&PTR___NSConcreteGlobalBlock_110d989a8);
  }
  uVar1 = uRam00000001137fdfa0;
  _objc_retain(uRam00000001137fdfa0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10bcb8224; end: 10bcb825b;  */

void FUN_10bcb8224(void)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_11112ef38;
  func_0x00010c067fc0();
  func_0x00010bcb8068();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = ppuRam00000001137fdfa0;
  ppuRam00000001137fdfa0 = ppuVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10bcb825c; end: 10bcb82af;  */

void FUN_10bcb825c(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137fdfb8 != -1) {
    func_0x000107c27d9c(0x1137fdfb8,&PTR___NSConcreteGlobalBlock_110d989c8);
  }
  uVar1 = uRam00000001137fdfb0;
  _objc_retain(uRam00000001137fdfb0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10bcb82b0; end: 10bcb82e7;  */

void FUN_10bcb82b0(void)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_11112ef38;
  func_0x00010c067fc0();
  func_0x00010bcb8068();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = ppuRam00000001137fdfb0;
  ppuRam00000001137fdfb0 = ppuVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10bcb82e8; end: 10bcb833b;  */

void FUN_10bcb82e8(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137fdfc8 != -1) {
    func_0x000107c27d9c(0x1137fdfc8,&PTR___NSConcreteGlobalBlock_110d989e8);
  }
  uVar1 = uRam00000001137fdfc0;
  _objc_retain(uRam00000001137fdfc0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10bcb833c; end: 10bcb8373;  */

void FUN_10bcb833c(void)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_11112ef38;
  func_0x00010c067fc0();
  func_0x00010bcb8068();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = ppuRam00000001137fdfc0;
  ppuRam00000001137fdfc0 = ppuVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10bcb8374; end: 10bcb83c7;  */

void FUN_10bcb8374(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137fdfd8 != -1) {
    func_0x000107c27d9c(0x1137fdfd8,&PTR___NSConcreteGlobalBlock_110d98a08);
  }
  uVar1 = uRam00000001137fdfd0;
  _objc_retain(uRam00000001137fdfd0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10bcb83c8; end: 10bcb83ff;  */

void FUN_10bcb83c8(void)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_11112ef38;
  func_0x00010c067fc0();
  func_0x00010bcb8068();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = ppuRam00000001137fdfd0;
  ppuRam00000001137fdfd0 = ppuVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10bcb8400; end: 10bcb8453;  */

void FUN_10bcb8400(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137fdfe8 != -1) {
    func_0x000107c27d9c(0x1137fdfe8,&PTR___NSConcreteGlobalBlock_110d98a28);
  }
  uVar1 = uRam00000001137fdfe0;
  _objc_retain(uRam00000001137fdfe0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10bcb8454; end: 10bcb857f;  */

void FUN_10bcb8454(void)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_11112ef38;
  func_0x00010c067fc0();
  func_0x00010bcb8068();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = ppuRam00000001137fdfe0;
  ppuRam00000001137fdfe0 = ppuVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10bcb8580; end: 10bcb8583;  */

void FUN_10bcb8580(void)

{
  return;
}



/* Entry: 10bcb8584; end: 10bcb858b; -[SCContextStateHandler currentContextState] */

undefined8 FUN_10bcb8584(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10bcb858c; end: 10bcb8593; -[SCContextStateHandler previousContextState] */

undefined8 FUN_10bcb858c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10bcb8594; end: 10bcb85c3; -[SCContextStateHandler .cxx_destruct] */

void FUN_10bcb8594(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 10bcb85c4; end: 10bcb8603; -[SCQueuePerformer performWithEnforcedInheritedQoS:] */

void FUN_10bcb85c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  _qos_class_self();
  func_0x00010c0f95c0(param_1,param_2,uVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bcb8604; end: 10bcb8683; -[SCQueuePerformer performWithEnforcedBlockQoS:] */

void FUN_10bcb8604(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be5b8e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  FUN_10bcbdbac(param_3,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar1);
  func_0x00010be71640(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10bcb8684; end: 10bcb86bf;  */

void FUN_10bcb8684(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c0f7fc0(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10bcb86c0; end: 10bcb8753; -[SCQueuePerformer performOnGroupNotification_DEPRECATED:block:] */

void FUN_10bcb86c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c11de00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be5b8e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x000107c27d98(param_3,uVar1,param_1);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10bcb8754; end: 10bcb8757; -[SCQueuePerformer assertNotQueue] */

void FUN_10bcb8754(void)

{
  return;
}



/* Entry: 10bcb8758; end: 10bcb875f; -[SCQueuePerformer qualityOfService] */

undefined4 FUN_10bcb8758(long param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}



/* Entry: 10bcb8760; end: 10bcb8767; -[SCQueuePerformer context] */

undefined8 FUN_10bcb8760(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10bcb8768; end: 10bcb878f; -[SCQueuePerformer queue_FOR_UNIT_TESTING] */

void FUN_10bcb8768(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10bcb8790; end: 10bcb87e3; +[SCQueuePerformer _backgroundPerformer] */

void FUN_10bcb8790(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137fe040 != -1) {
    func_0x000107c27d9c(0x1137fe040,&PTR___NSConcreteGlobalBlock_110d98b08);
  }
  uVar1 = uRam00000001137fe038;
  _objc_retain(uRam00000001137fe038);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10bcb87e4; end: 10bcb8817;  */

void FUN_10bcb87e4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126ae790;
  _objc_alloc();
  func_0x00010c017d80();
  uVar1 = puRam00000001137fe038;
  puRam00000001137fe038 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10bcb8818; end: 10bcb8917;  */

void FUN_10bcb8818(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bcb881c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))();
  return;
}



/* Entry: 10bcb8918; end: 10bcb891b; +[SCOptional optionalWithValue:errorMessage:] */

void FUN_10bcb8918(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdf0d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__createOptionalWithValue_errorMe_112559cf8);
  return;
}



/* Entry: 10bcb891c; end: 10bcb89e7; -[SCOptional forceUnwrap] */

void FUN_10bcb891c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10bcb89e8;
  uStack_30 = 0x10bcb89f8;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10bcb8a04;
  puStack_60 = &UNK_1108639e8;
  puStack_48 = puStack_58;
  func_0x00010c0bf0a0(param_1,param_2,&PTR___NSConcreteGlobalBlock_110d98b68,&puStack_78);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10bcb89e8; end: 10bcb8a03;  */

void FUN_10bcb89e8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10bcb8a04; end: 10bcb8a3b;  */

void FUN_10bcb8a04(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10bcb8a3c; end: 10bcb8a8f; +[SCOptional errorWithMessage:] */

void FUN_10bcb8a3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae750;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010be3d480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10bcb8a90; end: 10bcb8ab3; -[SCOptional copyWithZone:] */

undefined8 FUN_10bcb8a90(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10bcb8ab4; end: 10bcb8b17; -[SCOptional hash] */

void FUN_10bcb8ab4(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  puVar2 = &uStack_28;
  uStack_20 = uVar1;
  func_0x000107c3191c(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  _objc_sync_enter(puVar2);
  lVar3 = puVar2[1];
  _objc_retainBlock();
  uVar1 = puVar2[1];
  puVar2[1] = 0;
  _objc_release(uVar1);
  _objc_sync_exit(puVar2);
  _objc_release(puVar2);
  if (lVar3 != 0) {
    (**(code **)(lVar3 + 0x10))(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 10bcb8b18; end: 10bcb8b7b; -[SCCallbackCancelable cancel] */

void FUN_10bcb8b18(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  lVar1 = *(long *)(param_1 + 8);
  _objc_retainBlock();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  _objc_release(uVar2);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10bcb8b7c; end: 10bcb8bdf; -[SCCancelableGroup addCancelableWithBlock:] */

void FUN_10bcb8b7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126afd78;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010bffae00();
  _objc_release(param_3);
  func_0x00010bef7460(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bcb8be0; end: 10bcb8c4f; -[SCCancelableGroup init] */

undefined1 * FUN_10bcb8be0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270e410;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 0x18) = 0;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10bcb8c50; end: 10bcb8c83; -[SCCancelableGroup isCancelled] */

undefined1 FUN_10bcb8c50(long param_1)

{
  undefined1 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0x18);
  uVar1 = *(undefined1 *)(param_1 + 8);
  _os_unfair_lock_unlock(param_1 + 0x18);
  return uVar1;
}



/* Entry: 10bcb8c84; end: 10bcb8dc7; -[SCCancelableGroup cancel] */

void FUN_10bcb8c84(long param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  puVar2 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _os_unfair_lock_lock(param_1 + 0x18);
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    *(undefined1 *)(param_1 + 8) = 1;
    lStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    plStack_100 = (long *)0x0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    lVar3 = *(long *)(param_1 + 0x10);
    _objc_retain(lVar3);
    lVar1 = lVar3;
    func_0x00010bf52a60();
    if (lVar1 != 0) {
      lVar4 = *plStack_100;
      do {
        lVar5 = 0;
        do {
          if (*plStack_100 != lVar4) {
            _objc_enumerationMutation(lVar3);
          }
          func_0x00010bf2dba0(*(undefined8 *)(lStack_108 + lVar5 * 8));
          lVar5 = lVar5 + 1;
        } while (lVar1 != lVar5);
        lVar1 = lVar3;
        puVar2 = &uStack_110;
        func_0x00010bf52a60();
      } while (lVar1 != 0);
    }
    _objc_release(lVar3);
    func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x10));
    param_3 = (undefined1 *)puVar2;
  }
  lVar1 = param_1 + 0x18;
  _os_unfair_lock_unlock();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(param_1 + 0x18);
  __Unwind_Resume();
  _objc_retain(param_3);
  if (param_3 != (undefined1 *)0x0) {
    _os_unfair_lock_lock(lVar1 + 0x18);
    if ((*(byte *)(lVar1 + 8) & 1) == 0) {
      func_0x00010befa120(*(undefined8 *)(lVar1 + 0x10),param_2,param_3);
    }
    else {
      func_0x00010bf2dba0(param_3);
    }
    _os_unfair_lock_unlock(lVar1 + 0x18);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bcb8dc8; end: 10bcb8e3b; -[SCCancelableGroup addCancelable:] */

void FUN_10bcb8dc8(long param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_3);
  if (param_3 != 0) {
    _os_unfair_lock_lock(param_1 + 0x18);
    if ((*(byte *)(param_1 + 8) & 1) == 0) {
      func_0x00010befa120(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
    }
    else {
      func_0x00010bf2dba0(param_3);
    }
    _os_unfair_lock_unlock(param_1 + 0x18);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bcb8e3c; end: 10bcb8e47; -[SCCancelableGroup .cxx_destruct] */

void FUN_10bcb8e3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10bcb8e48; end: 10bcb8e5f; -[SCAsyncQueueTracer initWithQueue:context:type:] */

undefined8 FUN_10bcb8e48(void)

{
  _objc_release();
  return 0;
}



/* Entry: 10bcb8e60; end: 10bcb8e63; -[SCAsyncQueueTracer updateQueue:] */

void FUN_10bcb8e60(void)

{
  return;
}



/* Entry: 10bcb8e64; end: 10bcb8e7b; -[SCAsyncQueueTracer traceBlock:] */

void FUN_10bcb8e64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retainBlock(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10bcb8e7c; end: 10bcb8e7f; +[SCAsyncQueueTracer setGrapheneLogger:] */

void FUN_10bcb8e7c(void)

{
  return;
}



/* Entry: 10bcb8e80; end: 10bcb8e97; -[SCMainThreadTracer traceBlock:caller:] */

void FUN_10bcb8e80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retainBlock(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10bcb8e98; end: 10bcb8e9b; -[SCMainThreadTracer subscribeOnCurrentPageEvent:disposableObserverLifecycle:] */

void FUN_10bcb8e98(void)

{
  return;
}



/* Entry: 10bcb8e9c; end: 10bcb8e9f; -[SCMainThreadTracer setMainThreadGrapheneLogger:] */

void FUN_10bcb8e9c(void)

{
  return;
}



/* Entry: 10bcb8ea0; end: 10bcb8ea3; -[SCGraphene addTimer:durationMs:] */

void FUN_10bcb8ea0(void)

{
  return;
}



/* Entry: 10bcb8ea4; end: 10bcb8ea7; -[SCGraphene addTimer:durationSec:] */

void FUN_10bcb8ea4(void)

{
  return;
}



/* Entry: 10bcb8ea8; end: 10bcb8eab; -[SCGraphene addHistogram:value:] */

void FUN_10bcb8ea8(void)

{
  return;
}



/* Entry: 10bcb8eac; end: 10bcb8eaf; -[SCGraphene increment:value:] */

void FUN_10bcb8eac(void)

{
  return;
}



/* Entry: 10bcb8eb0; end: 10bcb8eb3; -[SCGraphene increment:] */

void FUN_10bcb8eb0(void)

{
  return;
}



/* Entry: 10bcb8eb4; end: 10bcb8eb7; -[SCGraphenePerformanceLogger logTimeMetricsStart:uniqueId:] */

void FUN_10bcb8eb4(void)

{
  return;
}



/* Entry: 10bcb8eb8; end: 10bcb8ebb; -[SCGraphenePerformanceLogger updateMetricWithUniqueId:dimensionNameToValue:] */

void FUN_10bcb8eb8(void)

{
  return;
}



/* Entry: 10bcb8ebc; end: 10bcb8ebf; -[SCGraphenePerformanceLogger incrementCounterWithUniqueId:] */

void FUN_10bcb8ebc(void)

{
  return;
}



/* Entry: 10bcb8ec0; end: 10bcb8ec3; -[SCGraphenePerformanceLogger logHistogramWithUniqueId:value:] */

void FUN_10bcb8ec0(void)

{
  return;
}



/* Entry: 10bcb8ec4; end: 10bcb8ec7; -[SCGraphenePerformanceLogger logTimeMetricEndWithUniqueId:] */

void FUN_10bcb8ec4(void)

{
  return;
}



/* Entry: 10bcb8ec8; end: 10bcb8ecf; -[SCGraphenePerformanceLoggerServices graphenePerformanceLoggerProvider] */

undefined8 FUN_10bcb8ec8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10bcb8ed0; end: 10bcb8edb; -[SCGraphenePerformanceLoggerServices .cxx_destruct] */

void FUN_10bcb8ed0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10bcb8edc; end: 10bcb8ee3; -[SCGrapheneRegistry registerPartitionWithName:overrideNameForUpload:metricNames:] */

undefined8 FUN_10bcb8edc(void)

{
  return 0;
}



/* Entry: 10bcb8ee4; end: 10bcb8eeb; -[SCGrapheneServices grapheneFlusher] */

undefined8 FUN_10bcb8ee4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10bcb8eec; end: 10bcb8f1b; -[SCGrapheneServices .cxx_destruct] */

void FUN_10bcb8eec(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10bcb8f1c; end: 10bcb901f; -[SCAsyncObserver complete] */

void FUN_10bcb8f1c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  if (*(char *)(param_1 + 0x20) == '\x01') {
    puVar1 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    func_0x00010bf5fce0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c071ae0();
    _objc_release(puVar1);
    if ((int)puVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_1 + 0x10),PTR_s_complete_1125ae760);
      return;
    }
  }
  _objc_initWeak(auStack_38,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010befa3a0(uVar3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10bcb9020; end: 10bcb9053;  */

void FUN_10bcb9020(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x10));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bcb9054; end: 10bcb908b; -[SCAsyncObserver .cxx_destruct] */

void FUN_10bcb9054(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10bcb908c; end: 10bcb9093; -[SCCompactMappedObserver complete] */

void FUN_10bcb908c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_complete_1125ae760);
  return;
}



/* Entry: 10bcb9094; end: 10bcb90ff; -[SCCompactMappedObserver .cxx_destruct] */

void FUN_10bcb9094(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10bcb9100; end: 10bcb913b; -[SCDebounceObserver complete] */

void FUN_10bcb9100(long param_1)

{
  _os_unfair_lock_lock(param_1 + 0x28);
  if (*(long *)(param_1 + 0x20) != 0) {
    _dispatch_block_cancel();
  }
  _os_unfair_lock_unlock(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_complete_1125ae760);
  return;
}



/* Entry: 10bcb913c; end: 10bcb9177; -[SCDebounceObserver .cxx_destruct] */

void FUN_10bcb913c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10bcb9178; end: 10bcb91db; -[SCObservable distinctUntilChangedWithKeySelector:] */

void FUN_10bcb9178(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e2e90;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c033aa0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10bcb91dc; end: 10bcb91e3;  */

void FUN_10bcb91dc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c071af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_isEqual__1125fa0c8);
  return;
}



/* Entry: 10bcb91e4; end: 10bcb9247; -[SCObservable distinctUntilChangedWithComparer:] */

void FUN_10bcb91e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e2e90;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c033aa0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10bcb9248; end: 10bcb926f;  */

void FUN_10bcb9248(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 10bcb9270; end: 10bcb9333; -[SCDoObservable initWithParentObservable:onNext:onComplete:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10bcb9270(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_11270e470;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithParentObservable__1125ea888,param_3);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11279668c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11279668c) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112796690);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112796690) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10bcb9334; end: 10bcb93d7; -[SCDoObservable subscribe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bcb9334(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126e2e98;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c030e80();
  _objc_release(param_3);
  func_0x00010c0f3c20(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c25fd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10bcb93d8; end: 10bcb9417; -[SCDoObservable .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bcb93d8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112796690,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11279668c,0);
  return;
}



/* Entry: 10bcb9418; end: 10bcb94eb; -[SCDoObserver initWithObserver:onNext:onComplete:] */

undefined1 *
FUN_10bcb9418(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_11270e478;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10bcb94ec; end: 10bcb9537; -[SCDoObserver next:] */

void FUN_10bcb94ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_3);
  }
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bcb9538; end: 10bcb9567; -[SCDoObserver complete] */

void FUN_10bcb9538(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    (**(code **)(*(long *)(param_1 + 0x18) + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_complete_1125ae760);
  return;
}



/* Entry: 10bcb9568; end: 10bcb95a3; -[SCDoObserver .cxx_destruct] */

void FUN_10bcb9568(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10bcb95a4; end: 10bcb95ab; -[SCObservable doOnNext:] */

void FUN_10bcb95a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be05650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__doOnNext_onComplete__11255ef30,param_3,0);
  return;
}



/* Entry: 10bcb95ac; end: 10bcb95b7; -[SCObservable doOnComplete:] */

void FUN_10bcb95ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be05650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__doOnNext_onComplete__11255ef30,0,param_3);
  return;
}



/* Entry: 10bcb95b8; end: 10bcb962b; -[SCObservable _doOnNext:onComplete:] */

void FUN_10bcb95b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e2ea0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c033b00();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10bcb962c; end: 10bcb96bb; -[SCDoOnDisposeObservable initWithParentObservable:onDispose:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10bcb962c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_11270e480;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithParentObservable__1125ea888,param_3);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127966a0);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127966a0) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10bcb96bc; end: 10bcb978b; -[SCDoOnDisposeObservable subscribe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bcb96bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126e2ea8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418,param_2,*(undefined8 *)(param_1 + _DAT_1127966a0));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f3c20(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c25fd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0469c0(puVar1,param_2,puVar2,lVar3);
  _objc_release(lVar3);
  _objc_release(param_1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



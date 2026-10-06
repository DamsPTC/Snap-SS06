/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10adde6d4; end: 10adde6ff; +[LSAUnsafeBlockInfo renderLooperError] */

void FUN_10adde6d4(void)

{
  _objc_alloc(PTR_PTR_1126db570);
  func_0x00010c010860();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10adde700; end: 10adde727; -[LSAUnsafeBlockInfo recordCurrentThreadAsRenderThread] */

void FUN_10adde700(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)param_1;
  _pthread_self();
  _pthread_mach_thread_np();
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



/* Entry: 10adde728; end: 10adde79f; -[LSAUnsafeBlockInfo captureRenderThreadBacktrace:] */

void FUN_10adde728(double param_1,long param_2)

{
  int iVar1;
  undefined1 auStack_128 [256];
  int iStack_28;
  
  if (*(int *)(param_2 + 8) != 0) {
    iVar1 = (int)(param_1 * 1000.0);
    if (param_1 <= 0.0) {
      iVar1 = 0;
    }
    FUN_10a101da4(auStack_128,*(int *)(param_2 + 8),iVar1);
    if (iStack_28 != 0) {
      func_0x00010bfb58e0(PTR_PTR_1126de210);
      _objc_retainAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10adde7a0; end: 10adde7a7; -[LSAUnsafeBlockInfo errorDomain] */

undefined8 FUN_10adde7a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10adde7a8; end: 10adde7af; -[LSAUnsafeBlockInfo errorCode] */

undefined8 FUN_10adde7a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10adde7b0; end: 10adde7cb; -[LSAUnsafeBlockInfo .cxx_destruct] */

void FUN_10adde7b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10adde7cc; end: 10adde863; -[LSADefaultLogger init] */

undefined1 * FUN_10adde7cc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1127014d8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = 0x50;
    __Znwm();
    FUN_10a109650();
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10adde864; end: 10adde893; -[LSADefaultLogger logAsynchronous:flag:file:function:line:format:args:] */

void FUN_10adde864(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
                    /* WARNING: Could not recover jumptable at 0x00010adde890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_1 + 8))
            (*(undefined8 **)(param_1 + 8),param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  return;
}



/* Entry: 10adde894; end: 10adde8d3;  */

void FUN_10adde894(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  func_0x00010c0a1200(*(undefined8 *)(param_1 + 8),param_2,param_2,param_3,param_4,param_5,param_6,
                      param_7,param_8);
  return;
}



/* Entry: 10adde8d4; end: 10adde923;  */

long FUN_10adde8d4(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 8));
  return param_1;
}



/* Entry: 10adde924; end: 10addeb4b;  */

void FUN_10adde924(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 auStack_170 [2];
  char cStack_159;
  undefined8 auStack_158 [2];
  char cStack_141;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 uStack_f9;
  undefined1 *apuStack_f8 [17];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lVar1 = param_2;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar9 = *plStack_130;
    do {
      lVar10 = 0;
      do {
        if (*plStack_130 != lVar9) {
          _objc_enumerationMutation(lVar1);
        }
        uVar8 = *(undefined8 *)(lStack_138 + lVar10 * 8);
        lVar3 = param_2;
        func_0x00010c0e00e0(param_2);
        _objc_retainAutoreleasedReturnValue();
        FUN_10addec2c(auStack_158);
        _objc_release(lVar3);
        FUN_10addec2c(auStack_170,uVar8);
        puVar4 = param_1;
        apuStack_f8[0] = (undefined1 *)auStack_170;
        FUN_109cf993c(param_1,auStack_170,&UNK_10dd5b8f9,apuStack_f8,&uStack_f9);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (puVar4 + 5,auStack_158);
        if (cStack_159 < '\0') {
          __ZdlPv(auStack_170[0]);
        }
        if (cStack_141 < '\0') {
          __ZdlPv(auStack_158[0]);
        }
        lVar10 = lVar10 + 1;
      } while (lVar2 != lVar10);
      lVar2 = lVar1;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar1);
  lVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_release(lVar1);
    func_0x000104c4f944(param_1);
    _objc_release(param_2);
    __Unwind_Resume();
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    for (plVar7 = *(long **)(lVar2 + 0x10); plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
      lVar1 = (long)(plVar7 + 2);
      FUN_10addec90(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = (long)(plVar7 + 5);
      FUN_10addec90(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar5);
      _objc_release(lVar2);
      _objc_release(lVar1);
    }
    puVar6 = puVar5;
    func_0x00010bf51e00(puVar5);
    _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  return;
}



/* Entry: 10addeb4c; end: 10addec2b;  */

void FUN_10addeb4c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  for (plVar5 = *(long **)(param_1 + 0x10); plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
    lVar2 = (long)(plVar5 + 2);
    FUN_10addec90(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = (long)(plVar5 + 5);
    FUN_10addec90(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_2,lVar3,lVar2);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  puVar4 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10addec2c; end: 10addec8f;  */

void FUN_10addec2c(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  
  _objc_retain();
  if (param_2 == (undefined *)0x0) {
    puVar1 = &UNK_10f6ae69d;
  }
  else {
    puVar1 = param_2;
    _objc_retainAutorelease(param_2);
    func_0x00010bdc3520();
  }
  func_0x000107c31940(param_1,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10addec90; end: 10addecfb;  */

void FUN_10addec90(long *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  
  plVar1 = (long *)*param_1;
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    plVar1 = param_1;
  }
  ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,plVar1,4);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar3 != (undefined **)0x0) {
    ppuVar2 = ppuVar3;
  }
  _objc_retain(ppuVar2);
  _objc_release(ppuVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 10addecfc; end: 10addee1b;  */

void FUN_10addecfc(undefined8 param_1,ulong param_2)

{
  undefined **ppuVar1;
  undefined8 ****ppppuVar2;
  code *pcVar3;
  undefined8 ****ppppuVar4;
  undefined **ppuVar5;
  undefined8 ***pppuStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (0x7ffffffffffffff7 < param_2) {
    func_0x000104c4f6b8();
    if ((long)uStack_48 < 0) {
      __ZdlPv(pppuStack_58);
    }
    __Unwind_Resume(param_1);
    func_0x00010bf9aa60(PTR__OBJC_CLASS___NSException_1126af520);
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    _objc_exception_throw();
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10addee64);
    (*pcVar3)();
  }
  if (param_2 < 0x17) {
    uStack_48 = CONCAT17((char)param_2,(undefined7)uStack_48);
    ppppuVar4 = &pppuStack_58;
    if (param_2 == 0) goto LAB_10added80;
  }
  else {
    ppppuVar2 = (undefined8 ****)0x19;
    if ((param_2 | 7) != 0x17) {
      ppppuVar2 = (undefined8 ****)((param_2 | 7) + 1);
    }
    ppppuVar4 = ppppuVar2;
    __Znwm();
    uStack_48 = (ulong)ppppuVar2 | 0x8000000000000000;
    pppuStack_58 = ppppuVar4;
    uStack_50 = param_2;
  }
  _memmove(ppppuVar4,param_1,param_2);
LAB_10added80:
  *(undefined1 *)((long)ppppuVar4 + param_2) = 0;
  func_0x00010c25d8e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar5 != (undefined **)0x0) {
    ppuVar1 = ppuVar5;
  }
  _objc_retain(ppuVar1);
  _objc_release(ppuVar5);
  if ((long)uStack_48 < 0) {
    __ZdlPv(pppuStack_58);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10addee1c; end: 10addee77; -[LSAComponentManager init] */

void FUN_10addee1c(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  
  func_0x00010bf9aa60(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                      *(undefined8 *)PTR__NSGenericException_11034aa40,
                      &PTR____CFConstantStringClassReference_110f2e178,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_exception_throw();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10addee64);
  (*pcVar1)();
}



/* Entry: 10addee78; end: 10addf34f; -[LSAComponentManager initWithContext:performer:trackerAvailability:enableAudioPlayback:configurationProvider:componentClasses:cacheParams:resourcesInitMode:configurationsToPreload:] */

undefined8 *
FUN_10addee78(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined4 param_10,undefined4 param_11,undefined8 param_12)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_12);
  puStack_80 = PTR_PTR_1127014e0;
  puVar3 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar3,PTR_s_init_1125d9248);
  if (puVar3 != (undefined8 *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar7 = puVar3[1];
    puVar3[1] = puVar4;
    _objc_release(uVar7);
    _objc_initWeak(auStack_90,puVar3);
    *(bool *)(puVar3 + 0xe) = param_4 != 0;
    if (param_4 == 0) {
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(0x1137ed388,0x10);
        if (bVar2) {
          cVar1 = ExclusiveMonitorsStatus();
          iRam00000001137ed388 = iRam00000001137ed388 + 1;
        }
      } while (cVar1 != '\0');
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25d9e0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126de0d0;
      _objc_alloc();
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
      _objc_copyWeak(auStack_98,auStack_90);
      func_0x00010c021460();
      uVar7 = puVar3[3];
      puVar3[3] = puVar6;
      _objc_release(uVar7);
      uVar7 = puVar3[3];
      _objc_retain(puVar3);
      _objc_retain(param_9);
      _objc_retain(param_3);
      _objc_retain(param_7);
      _objc_retain(param_12);
      _objc_retain(param_5);
      func_0x00010c0f7fc0(uVar7);
      func_0x00010c18c7e0(puVar3);
      _objc_release(param_5);
      _objc_release(param_12);
      _objc_release(param_7);
      _objc_release(param_3);
      _objc_release(param_9);
      _objc_release(puVar3);
      _objc_destroyWeak(auStack_98);
      _objc_release(puVar4);
    }
    else {
      uVar5 = param_4;
      func_0x00010c06fc80();
      if ((uVar5 & 1) == 0) {
        puVar4 = PTR__OBJC_CLASS___NSAssertionHandler_1126ddfe8;
        func_0x00010bf5eec0(PTR__OBJC_CLASS___NSAssertionHandler_1126ddfe8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfd11c0();
        _objc_release(puVar4);
      }
      _objc_retain(param_4);
      uVar7 = puVar3[3];
      puVar3[3] = param_4;
      _objc_release(uVar7);
      func_0x00010bf55840(puVar3);
      func_0x00010c18b5e0(puVar3[3]);
    }
    puVar4 = PTR_PTR_1126de218;
    _objc_alloc(PTR_PTR_1126de218);
    func_0x00010c054f00();
    func_0x00010c109140(puVar3);
    puVar6 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_destroyWeak(auStack_90);
  }
  _objc_release(param_12);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 10addf350; end: 10addf453;  */

void FUN_10addf350(long param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_b8 [128];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    if (*(undefined8 **)(param_1 + 0x60) == (undefined8 *)0x0) {
      (**(code **)(param_2 + 0x10))(param_2);
    }
    else {
      FUN_10a219de8(auStack_b8,**(undefined8 **)(param_1 + 0x60));
      (**(code **)(param_2 + 0x10))(param_2);
      FUN_10a22afb0(auStack_b8);
    }
  }
  _objc_release(param_1);
  lVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_1);
  _objc_release(param_2);
  __Unwind_Resume();
                    /* WARNING: Could not recover jumptable at 0x00010bf55850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(lVar1 + 0x20),PTR_s_createCoreManagerWithCacheParams_1125b2fb8,
             *(undefined8 *)(lVar1 + 0x28),*(undefined8 *)(lVar1 + 0x30),
             *(undefined8 *)(lVar1 + 0x38),*(undefined8 *)(lVar1 + 0x40),
             *(undefined8 *)(lVar1 + 0x48),*(undefined8 *)(lVar1 + 0x50));
  return;
}



/* Entry: 10addf454; end: 10addf46b;  */

void FUN_10addf454(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf55850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_createCoreManagerWithCacheParams_1125b2fb8,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
             *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50));
  return;
}



/* Entry: 10addf46c; end: 10addf4ab; -[LSAComponentManager initWithContext:trackerAvailability:enableAudioPlayback:configurationProvider:componentClasses:cacheParams:resourcesInitMode:] */

void FUN_10addf46c(void)

{
  func_0x00010c004300();
  return;
}



/* Entry: 10addf4ac; end: 10addf4cf; -[LSAComponentManager initWithContext:trackerAvailability:enableAudioPlayback:configurationProvider:componentClasses:cacheParams:] */

void FUN_10addf4ac(void)

{
  func_0x00010c004420();
  return;
}



/* Entry: 10addf4d0; end: 10addf4fb; -[LSAComponentManager initWithContext:performer:trackerAvailability:enableAudioPlayback:configurationProvider:componentClasses:cacheParams:configurationsToPreload:] */

void FUN_10addf4d0(void)

{
  func_0x00010c004300();
  return;
}



/* Entry: 10addf4fc; end: 10addf50f; -[LSAComponentManager initWithContext:trackerAvailability:configurationProvider:componentClasses:cacheParams:] */

void FUN_10addf4fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
                    /* WARNING: Could not recover jumptable at 0x00010c004410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithContext_trackerAvailabil_1125deac8,param_3,param_4,1,param_5,
             param_6,param_7);
  return;
}



/* Entry: 10addf510; end: 10addf6b7; -[LSAComponentManager dealloc] */

void FUN_10addf510(long param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined *puStack_c0;
  undefined1 auStack_b8 [128];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = (undefined8 *)(param_1 + 0x60);
  puVar5 = (undefined8 *)*puVar7;
  if (puVar5 != (undefined8 *)0x0) {
    if ((bRam000000011330a9e8 & 1) != 0) {
      func_0x00010ae06f08(0,1,&UNK_10f6ae719,&UNK_10f6ae7b1,0xc3,&UNK_10f6ae7d0);
      puVar5 = (undefined8 *)*puVar7;
    }
    FUN_10a219de8(auStack_b8,*puVar5);
    func_0x00010bf3bf00(param_1);
    func_0x00010c12adc0(*(undefined8 *)(param_1 + 8));
    FUN_10addf6b8(puVar7);
    FUN_10a22afb0(auStack_b8);
  }
  lVar3 = *(long *)(param_1 + 8);
  func_0x00010bf529e0();
  if (lVar3 != 0) {
    puVar7 = (undefined8 *)PTR__OBJC_CLASS___NSAssertionHandler_1126ddfe8;
    func_0x00010bf5eec0(PTR__OBJC_CLASS___NSAssertionHandler_1126ddfe8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd11c0();
    _objc_release(puVar7);
  }
  puStack_c0 = PTR_PTR_1127014e0;
  plVar4 = &lStack_c8;
  lStack_c8 = param_1;
  _objc_msgSendSuper2(plVar4,PTR_s_dealloc_112525b20);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  puStack_d0 = PTR_PTR_1127014e0;
  lStack_d8 = param_1;
  _objc_msgSendSuper2(&lStack_d8,PTR_s_dealloc_112525b20);
  __Unwind_Resume(plVar4);
  func_0x000104bd46a0();
  plVar6 = (long *)plVar4[1];
  *plVar4 = 0;
  plVar4[1] = 0;
  if (plVar6 != (long *)0x0) {
    plVar4 = plVar6 + 1;
    do {
      lVar3 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar3 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar3 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar6);
      return;
    }
  }
  return;
}



/* Entry: 10addf6b8; end: 10addf713;  */

void FUN_10addf6b8(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
      return;
    }
  }
  return;
}



/* Entry: 10addf714; end: 10addf81f; -[LSAComponentManager invalidateWithCompletion:] */

void FUN_10addf714(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puVar1 = PTR_PTR_1126db570;
  func_0x00010bf44440(PTR_PTR_1126db570,param_2,3);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10addf820;
  puStack_40 = &UNK_11087bb00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_10addf858;
  puStack_70 = &UNK_110c758d0;
  lStack_68 = param_1;
  lStack_38 = param_1;
  _objc_retain(param_3);
  uStack_60 = param_3;
  func_0x00010c0f91a0(uVar2,param_2,puVar1,&puStack_58,&puStack_88);
  _objc_release(puVar1);
  _objc_release(uStack_60);
  _objc_release(param_3);
  return;
}



/* Entry: 10addf820; end: 10addf857;  */

void FUN_10addf820(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  func_0x00010bf3bf00(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c12adc0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 8));
  lVar4 = *(long *)(param_1 + 0x20);
  plVar5 = *(long **)(lVar4 + 0x68);
  *(undefined8 *)(lVar4 + 0x60) = 0;
  *(undefined8 *)(lVar4 + 0x68) = 0;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
      return;
    }
  }
  return;
}



/* Entry: 10addf858; end: 10addf933;  */

void FUN_10addf858(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 in_x6;
  undefined8 in_x7;
  
  _objc_retain(param_2);
  if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
    uVar1 = param_2;
    func_0x00010bf6e340();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    _objc_retainAutorelease();
    func_0x00010bdc3520();
    func_0x00010ae06f08(1,4,&UNK_10f6ae719,&UNK_10f6ae85a,0xdc,&UNK_10f6ae898,in_x6,in_x7,uVar2);
    _objc_release(uVar1);
  }
  func_0x00010c069d00(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18));
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 != 0) {
    (**(code **)(lVar3 + 0x10))(lVar3,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10addf934; end: 10ade0057; -[LSAComponentManager createCoreManagerWithCacheParams:context:configurationProvider:configurationsToPreload:trackerAvailability:resourcesInitMode:] */

/* WARNING: Removing unreachable block (ram,0x00010addfda0) */
/* WARNING: Removing unreachable block (ram,0x00010addfda4) */
/* WARNING: Removing unreachable block (ram,0x00010addfdac) */
/* WARNING: Removing unreachable block (ram,0x00010addfdb4) */
/* WARNING: Removing unreachable block (ram,0x00010addfdb8) */
/* WARNING: Removing unreachable block (ram,0x00010addfd68) */
/* WARNING: Removing unreachable block (ram,0x00010addfd6c) */
/* WARNING: Removing unreachable block (ram,0x00010addfd74) */
/* WARNING: Removing unreachable block (ram,0x00010addfd7c) */
/* WARNING: Removing unreachable block (ram,0x00010addfd80) */
/* WARNING: Removing unreachable block (ram,0x00010addfdd8) */
/* WARNING: Removing unreachable block (ram,0x00010addfddc) */
/* WARNING: Removing unreachable block (ram,0x00010addfde4) */
/* WARNING: Removing unreachable block (ram,0x00010addfdec) */
/* WARNING: Removing unreachable block (ram,0x00010addfdf0) */

void FUN_10addf934(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,ulong param_7,undefined4 param_8)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  undefined3 uStack_133;
  undefined5 uStack_100;
  undefined3 uStack_fb;
  undefined5 uStack_f8;
  undefined3 uStack_f3;
  long *plStack_f0;
  long *plStack_e8;
  undefined8 uStack_e0;
  long *plStack_d8;
  undefined4 uStack_d0;
  undefined8 uStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined8 uStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar9 = param_3;
  func_0x00010c13b400(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea6d40(param_1);
  _objc_release(uVar9);
  uVar9 = param_3;
  func_0x00010c291980(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea9e80(param_1);
  _objc_release(uVar9);
  puVar4 = PTR_PTR_1126de220;
  _objc_opt_new();
  uVar9 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar4;
  _objc_release(uVar9);
  uVar5 = param_7;
  func_0x00010bf12ae0();
  plVar6 = (long *)0x48;
  __Znwm();
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&PTR_FUN_110c73ec8;
  plVar11 = plVar6 + 3;
  FUN_10ad91fc0(plVar11,param_6,param_5);
  plStack_a0 = plVar11;
  plStack_98 = plVar6;
  FUN_10adb00a4(&plStack_a0,plVar6 + 4,plVar11);
  plVar1 = plStack_98;
  plVar6 = plStack_a0;
  plVar7 = (long *)0x180;
  __Znwm();
  plVar7[1] = 0;
  plVar7[2] = 0;
  *plVar7 = (long)&PTR_FUN_110bb5498;
  plVar11 = plVar7 + 3;
  uStack_f8 = SUB85(plVar1,0);
  uStack_f3 = (undefined3)((ulong)plVar1 >> 0x28);
  uStack_100 = SUB85(plVar6,0);
  uStack_fb = (undefined3)((ulong)plVar6 >> 0x28);
  if (plVar1 != (long *)0x0) {
    plVar6 = plVar1 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_10a08e6f8(plVar11,&uStack_100,param_4);
  if (plVar1 != (long *)0x0) {
    plVar6 = plVar1 + 1;
    do {
      lVar10 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  plVar6 = plStack_a0;
  uStack_c0 = 0;
  plStack_b8 = (long *)0x0;
  plStack_b0 = plVar11;
  plStack_a8 = plVar7;
  if (plStack_a0 != (long *)0x0) {
    puVar8 = (undefined8 *)0x30;
    __Znwm();
    uStack_100 = SUB85(puVar8,0);
    uStack_fb = (undefined3)((ulong)puVar8 >> 0x28);
    plStack_f0 = (long *)0x8000000000000030;
    uStack_f8 = 0x28;
    uStack_f3 = 0;
    puVar8[4] = 0x44454c42414e455f;
    puVar8[1] = 0x544e45525255435f;
    *puVar8 = 0x45524f43534e454c;
    puVar8[3] = 0x524f545543455845;
    puVar8[2] = 0x5f5245504f4f4c5f;
    *(undefined1 *)(puVar8 + 5) = 0;
    (**(code **)(*plVar6 + 0x50))(plVar6,&uStack_100,0);
    if ((long)plStack_f0 < 0) {
      __ZdlPv(CONCAT35(uStack_fb,uStack_100));
    }
    if ((int)plVar6 != 0) {
      FUN_10adde0bc(&uStack_100,*(undefined8 *)(param_1 + 0x18));
      uStack_88 = CONCAT35(uStack_fb,uStack_100);
      plStack_80 = (long *)CONCAT35(uStack_f3,uStack_f8);
      uStack_c0 = uStack_88;
      plStack_b8 = plStack_80;
      goto LAB_10addfb80;
    }
  }
  plStack_80 = (long *)0x0;
  uStack_88 = 0;
LAB_10addfb80:
  plVar6 = plStack_98;
  uStack_133 = (undefined3)(~uVar5 >> 0x28);
  if (plStack_98 != (long *)0x0) {
    plVar1 = plStack_98 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_100 = (undefined5)~uVar5;
  uStack_fb = uStack_133;
  uStack_f8 = 0;
  plStack_f0 = plStack_a0;
  plStack_e8 = plStack_98;
  if (plStack_98 != (long *)0x0) {
    plVar1 = plStack_98 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_e0 = 0;
  plStack_d8 = (long *)0x0;
  puVar8 = (undefined8 *)0x20;
  uStack_d0 = param_8;
  __Znwm();
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = &PTR_FUN_110c75910;
  plStack_b0 = (long *)0x0;
  plStack_a8 = (long *)0x0;
  uStack_c0 = 0;
  plStack_b8 = (long *)0x0;
  plStack_78 = plVar11;
  plStack_70 = plVar7;
  FUN_10a219e90(puVar8 + 3,&plStack_78,&uStack_88,&uStack_100);
  plVar11 = plStack_80;
  if (plStack_80 != (long *)0x0) {
    plVar1 = plStack_80 + 1;
    do {
      lVar10 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_80 + 0x10))(plStack_80);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  plVar11 = plStack_70;
  if (plStack_70 != (long *)0x0) {
    plVar1 = plStack_70 + 1;
    do {
      lVar10 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_70 + 0x10))(plStack_70);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  plVar11 = *(long **)(param_1 + 0x68);
  *(undefined8 **)(param_1 + 0x60) = puVar8 + 3;
  *(undefined8 **)(param_1 + 0x68) = puVar8;
  if (plVar11 != (long *)0x0) {
    plVar1 = plVar11 + 1;
    do {
      lVar10 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  plVar11 = plStack_d8;
  if (plStack_d8 != (long *)0x0) {
    plVar1 = plStack_d8 + 1;
    do {
      lVar10 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  plVar11 = plStack_e8;
  if (plStack_e8 != (long *)0x0) {
    plVar1 = plStack_e8 + 1;
    do {
      lVar10 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  if (plVar6 != (long *)0x0) {
    plVar11 = plVar6 + 1;
    do {
      lVar10 = *plVar11;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  plVar11 = plStack_b8;
  if (plStack_b8 != (long *)0x0) {
    plVar6 = plStack_b8 + 1;
    do {
      lVar10 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  plVar11 = plStack_a8;
  if (plStack_a8 != (long *)0x0) {
    plVar6 = plStack_a8 + 1;
    do {
      lVar10 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  plVar11 = plStack_98;
  if (plStack_98 != (long *)0x0) {
    plVar6 = plStack_98 + 1;
    do {
      lVar10 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10ade0058; end: 10ade011b; -[LSAComponentManager performWithCoreContext:] */

void FUN_10ade0058(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_a8 [128];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = param_3;
  _objc_retain(param_3);
  FUN_10a219de8(auStack_a8,**(undefined8 **)(param_1 + 0x60));
  (**(code **)(param_3 + 0x10))(param_3);
  FUN_10a22afb0(auStack_a8);
  lVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    FUN_10a22afb0(auStack_a8);
    _objc_release(param_3);
    __Unwind_Resume(lVar1);
    if (lVar3 < 3) {
      uVar5 = 4;
      if (lVar3 != 2) {
        uVar5 = 0;
      }
      uVar4 = 3;
      if (lVar3 != 2) {
        uVar4 = 0;
      }
      uVar2 = 3;
      if (lVar3 != 1) {
        uVar2 = uVar5;
      }
      uVar5 = 1;
      if (lVar3 != 1) {
        uVar5 = uVar4;
      }
    }
    else if (lVar3 == 3) {
      uVar2 = 6;
      uVar5 = 7;
    }
    else if ((lVar3 == 4) || (lVar3 == 100)) {
      uVar2 = 7;
      uVar5 = 0xf;
    }
    else {
      uVar2 = 0;
      uVar5 = 0;
    }
    FUN_10ae0751c(&DAT_113308480,uVar2);
    uRam000000011330a9e8 = uVar5;
    return;
  }
  return;
}



/* Entry: 10ade011c; end: 10ade01b3; +[LSAComponentManager setLogLevel:] */

void FUN_10ade011c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_3 < 3) {
    uVar3 = 4;
    if (param_3 != 2) {
      uVar3 = 0;
    }
    uVar2 = 3;
    if (param_3 != 2) {
      uVar2 = 0;
    }
    uVar1 = 3;
    if (param_3 != 1) {
      uVar1 = uVar3;
    }
    uVar3 = 1;
    if (param_3 != 1) {
      uVar3 = uVar2;
    }
  }
  else if (param_3 == 3) {
    uVar1 = 6;
    uVar3 = 7;
  }
  else if ((param_3 == 4) || (param_3 == 100)) {
    uVar1 = 7;
    uVar3 = 0xf;
  }
  else {
    uVar1 = 0;
    uVar3 = 0;
  }
  FUN_10ae0751c(&DAT_113308480,uVar1);
  uRam000000011330a9e8 = uVar3;
  return;
}



/* Entry: 10ade01b4; end: 10ade02cb; +[LSAComponentManager setLogger:] */

/* WARNING: Removing unreachable block (ram,0x00010ade0258) */
/* WARNING: Removing unreachable block (ram,0x00010ade025c) */
/* WARNING: Removing unreachable block (ram,0x00010ade0264) */
/* WARNING: Removing unreachable block (ram,0x00010ade026c) */
/* WARNING: Removing unreachable block (ram,0x00010ade0270) */

void FUN_10ade01b4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plStack_30;
  long *plStack_28;
  
  _objc_retain(param_3);
  plVar4 = (long *)0x28;
  __Znwm();
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_DAT_110c75960;
  _objc_retain(param_3);
  plStack_30 = plVar4 + 3;
  *plStack_30 = (long)&PTR_FUN_110c75840;
  plVar4[4] = param_3;
  plStack_28 = plVar4;
  FUN_10ae07194(&plStack_30);
  plVar4 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10ade02cc; end: 10ade02d3; -[LSAComponentManager setShouldCatchExceptions:] */

void FUN_10ade02cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c200210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_setShouldCatchExceptions__11265daa8);
  return;
}



/* Entry: 10ade02d4; end: 10ade03e7; -[LSAComponentManager setDeviceClass:completion:] */

void FUN_10ade02d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puVar1 = PTR_PTR_1126db570;
  func_0x00010bf44440(PTR_PTR_1126db570,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10ade03e8;
  puStack_58 = &UNK_1108a8598;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_10ade03fc;
  puStack_80 = &UNK_110c72a10;
  lStack_50 = param_1;
  uStack_48 = param_3;
  _objc_retain(param_4);
  uStack_78 = param_4;
  func_0x00010c0f9180(uVar2,param_2,puVar1,&puStack_70,&puStack_98);
  _objc_release(puVar1);
  _objc_release(uStack_78);
  _objc_release(param_4);
  return;
}



/* Entry: 10ade03e8; end: 10ade03fb;  */

void FUN_10ade03e8(long param_1)

{
  uRam00000001132ffd98 = *(undefined4 *)(param_1 + 0x28);
  return;
}



/* Entry: 10ade03fc; end: 10ade044f;  */

void FUN_10ade03fc(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10ade0450; end: 10ade064f; -[LSAComponentManager componentWithClass:] */

void FUN_10ade0450(long param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined **ppuStack_58;
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  __ZNSt3__15mutex4lockEv(param_1 + 0x20);
  puVar6 = PTR__OBJC_CLASS___NSException_1126af520;
  if (param_3 == 0) {
    _objc_opt_class(param_1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9aa60(puVar6,param_2,param_1,&PTR____CFConstantStringClassReference_110f2ec58,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    _objc_exception_throw();
  }
  else {
    lVar9 = *(long *)(param_1 + 8);
    lVar2 = param_3;
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    puVar6 = PTR__OBJC_CLASS___NSException_1126af520;
    if (lVar9 != 0) {
      lVar3 = param_1 + 0x20;
      __ZNSt3__15mutex6unlockEv();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar9);
        return;
      }
      ___stack_chk_fail();
      _objc_release();
      _objc_release(lVar9);
      _objc_release(lVar2);
      __ZNSt3__15mutex6unlockEv(param_1 + 0x20);
      lVar5 = lVar3;
      __Unwind_Resume();
      pcStack_68 = FUN_10ade0650;
      lStack_90 = lVar9;
      lStack_88 = lVar3;
      lStack_80 = lVar2;
      lStack_78 = param_1;
      puStack_70 = &stack0xfffffffffffffff0;
      _objc_retain(lVar7);
      uVar8 = *(undefined8 *)(lVar5 + 0x18);
      puVar6 = PTR_PTR_1126db570;
      func_0x00010bf44440(PTR_PTR_1126db570,param_2,2);
      _objc_retainAutoreleasedReturnValue();
      puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b0 = 0xc2000000;
      pcStack_a8 = FUN_10ade0758;
      puStack_a0 = &UNK_11087bb00;
      puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_d8 = 0xc2000000;
      pcStack_d0 = FUN_10ade0760;
      puStack_c8 = &UNK_110c72a10;
      lStack_98 = lVar5;
      _objc_retain(lVar7);
      lStack_c0 = lVar7;
      func_0x00010c0f9180(uVar8,param_2,puVar6,&puStack_b8,&puStack_e0);
      _objc_release(puVar6);
      _objc_release(lStack_c0);
      _objc_release(lVar7);
      return;
    }
    _objc_opt_class(param_1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_58 = &PTR____CFConstantStringClassReference_110f2ec98;
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    lStack_50 = param_3;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&lStack_50,&ppuStack_58,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9aa60(puVar6,param_2,param_1,&PTR____CFConstantStringClassReference_110f2ec78,
                        puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    _objc_exception_throw();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10ade05e4);
  (*pcVar1)();
}



/* Entry: 10ade0650; end: 10ade0757; -[LSAComponentManager clearAllResourcesWithCompletion:] */

void FUN_10ade0650(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puVar1 = PTR_PTR_1126db570;
  func_0x00010bf44440(PTR_PTR_1126db570,param_2,2);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10ade0758;
  puStack_40 = &UNK_11087bb00;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_10ade0760;
  puStack_68 = &UNK_110c72a10;
  lStack_38 = param_1;
  _objc_retain(param_3);
  uStack_60 = param_3;
  func_0x00010c0f9180(uVar2,param_2,puVar1,&puStack_58,&puStack_80);
  _objc_release(puVar1);
  _objc_release(uStack_60);
  _objc_release(param_3);
  return;
}



/* Entry: 10ade0758; end: 10ade075f;  */

void FUN_10ade0758(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf3bf10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_clearResources_1125ac968);
  return;
}



/* Entry: 10ade0760; end: 10ade07b3;  */

void FUN_10ade0760(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10ade07b4; end: 10ade085f; -[LSAComponentManager clearAllResourcesAndFinishContext] */

void FUN_10ade07b4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puVar1 = PTR_PTR_1126db570;
  func_0x00010bf44440(PTR_PTR_1126db570,param_2,2);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10ade0860;
  puStack_40 = &UNK_11087bb00;
  lStack_38 = param_1;
  func_0x00010c0f9140(uVar2,param_2,puVar1,&puStack_58,0);
  _objc_release(puVar1);
  return;
}



/* Entry: 10ade0860; end: 10ade0877;  */

void FUN_10ade0860(long param_1)

{
  func_0x00010bf3bf00(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbe7d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__glFinish_11034b588)();
  return;
}



/* Entry: 10ade0878; end: 10ade087f; -[LSAComponentManager setShouldCatchLensJSExceptions:] */

void FUN_10ade0878(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c200230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_setShouldCatchLensJSExceptions__11265dab0);
  return;
}



/* Entry: 10ade0880; end: 10ade088b; -[LSAComponentManager setShouldSyncCleanupOnAppBackground:] */

undefined8 FUN_10ade0880(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x71) = param_3;
  return 0;
}



/* Entry: 10ade088c; end: 10ade089b; -[LSAComponentManager applicationDidEnterBackground] */

void FUN_10ade088c(long param_1)

{
  if ((*(byte *)(param_1 + 0x71) & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf3a8b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_clearAllResourcesAndFinishContex_1125ac3d0);
  return;
}



/* Entry: 10ade089c; end: 10ade09c7; -[LSAComponentManager _setResourceCachePath:] */

void FUN_10ade089c(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 auStack_50 [2];
  char cStack_39;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uStack_38 = 0;
  func_0x00010be781e0();
  uVar1 = uStack_38;
  _objc_retain(uStack_38);
  if (param_1 == 0) {
    if ((bRam000000011330a9e8 & 1) != 0) {
      uVar2 = param_3;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
      func_0x00010ae06f08(0,1,&UNK_10f6ae719,&UNK_10f6ae92b,0x19c,&UNK_10f6ae959,in_x6,in_x7,uVar2);
    }
  }
  else {
    uVar2 = param_3;
    _objc_retainAutorelease(param_3);
    func_0x00010bdc3520();
    func_0x000107c31940(auStack_50,uVar2);
    FUN_10ad0338c(0x113835df8,0x113835d70,auStack_50);
    if (cStack_39 < '\0') {
      __ZdlPv(auStack_50[0]);
    }
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 10ade09c8; end: 10ade0af3; -[LSAComponentManager _setUserDataCachePath:] */

void FUN_10ade09c8(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 auStack_50 [2];
  char cStack_39;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uStack_38 = 0;
  func_0x00010be781e0();
  uVar1 = uStack_38;
  _objc_retain(uStack_38);
  if (param_1 == 0) {
    if ((bRam000000011330a9e8 & 1) != 0) {
      uVar2 = param_3;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
      func_0x00010ae06f08(0,1,&UNK_10f6ae719,&UNK_10f6ae980,0x1a7,&UNK_10f6ae959,in_x6,in_x7,uVar2);
    }
  }
  else {
    uVar2 = param_3;
    _objc_retainAutorelease(param_3);
    func_0x00010bdc3520();
    func_0x000107c31940(auStack_50,uVar2);
    FUN_10ad0338c(0x113835e00,0x113835dd0,auStack_50);
    if (cStack_39 < '\0') {
      __ZdlPv(auStack_50[0]);
    }
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 10ade0af4; end: 10ade0c0b; -[LSAComponentManager _prepareDirectoryAtPath:error:] */

undefined *
FUN_10ade0af4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf55d80();
  uVar1 = (uint)puVar3;
  if (param_4 == (undefined8 *)0x0) {
    uVar1 = 1;
  }
  if (((uVar1 & 1) == 0) && ((bRam000000011330a9e8 & 1) != 0)) {
    uVar4 = *param_4;
    func_0x00010bf6e340();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    _objc_retainAutorelease();
    func_0x00010bdc3520();
    func_0x00010ae06f08(0,1,&UNK_10f6ae719,&UNK_10f6ae9ae,0x1b1,&UNK_10f6ae9e4,param_7,param_8,uVar5
                       );
    _objc_release(uVar4);
  }
  _objc_release(puVar2);
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 10ade0c0c; end: 10ade12d7; -[LSAComponentManager prepareComponentsWithClasses:configuration:] */

void FUN_10ade0c0c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined *unaff_x23;
  undefined *puVar12;
  undefined8 uVar13;
  long lVar14;
  undefined1 auStack_108 [128];
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  __ZNSt3__15mutex4lockEv(param_1 + 0x20);
  if (*(char *)(param_1 + 0x70) == '\x01') {
    puVar8 = *(undefined8 **)(param_1 + 0x60);
    if (puVar8 == (undefined8 *)0x0) {
      unaff_x23 = PTR__OBJC_CLASS___NSAssertionHandler_1126ddfe8;
      func_0x00010bf5eec0(PTR__OBJC_CLASS___NSAssertionHandler_1126ddfe8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfd11c0();
      _objc_release(unaff_x23);
      puVar8 = *(undefined8 **)(param_1 + 0x60);
    }
    FUN_10a219de8(auStack_108,*puVar8);
    uRam00000001132ffd98 = 3;
    _objc_retain(param_3);
    lVar10 = param_3;
    func_0x00010bf52a60();
    lVar4 = lRam0000000000000000;
    while (lVar10 != 0) {
      lVar14 = 0;
      do {
        if (lRam0000000000000000 != lVar4) {
          _objc_enumerationMutation(param_3);
        }
        puVar12 = *(undefined **)(lVar14 * 8);
        _objc_opt_class(PTR_PTR_1126de228);
        puVar6 = puVar12;
        func_0x00010c080080();
        puVar7 = PTR__OBJC_CLASS___NSException_1126af520;
        if (((ulong)puVar6 & 1) == 0) {
          _NSStringFromClass(puVar12);
          _objc_retainAutoreleasedReturnValue();
          _NSStringFromClass();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf9aa60(puVar7);
          _objc_retainAutoreleasedReturnValue();
          _objc_autorelease();
          _objc_exception_throw();
LAB_10ade111c:
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10ade1120);
          (*pcVar5)();
        }
        unaff_x23 = puVar12;
        _objc_alloc(puVar12);
        func_0x00010c0349a0();
        func_0x00010c1da9e0();
        plVar11 = *(long **)(param_1 + 0x68);
        if (*(long *)(param_1 + 0x68) != 0) {
          plVar1 = (long *)(*(long *)(param_1 + 0x68) + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = *plVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        func_0x00010c1841a0(unaff_x23);
        if (plVar11 != (long *)0x0) {
          plVar1 = plVar11 + 1;
          do {
            lVar9 = *plVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar9 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
          }
        }
        uVar13 = *(undefined8 *)(param_1 + 8);
        _NSStringFromClass(puVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(uVar13);
        _objc_release(puVar12);
        _objc_release(unaff_x23);
        lVar14 = lVar14 + 1;
      } while (lVar14 != lVar10);
      lVar10 = param_3;
      func_0x00010bf52a60();
    }
    _objc_release(param_3);
    FUN_10a22afb0(auStack_108);
  }
  else {
    _objc_retain(param_3);
    lVar10 = param_3;
    func_0x00010bf52a60();
    lVar4 = lRam0000000000000000;
    while (lVar10 != 0) {
      lVar14 = 0;
      do {
        if (lRam0000000000000000 != lVar4) {
          _objc_enumerationMutation(param_3);
        }
        puVar12 = *(undefined **)(lVar14 * 8);
        _objc_opt_class(PTR_PTR_1126de228);
        puVar6 = puVar12;
        func_0x00010c080080();
        puVar7 = PTR__OBJC_CLASS___NSException_1126af520;
        if (((ulong)puVar6 & 1) == 0) {
          _NSStringFromClass(puVar12);
          _objc_retainAutoreleasedReturnValue();
          _NSStringFromClass();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf9aa60(puVar7);
          _objc_retainAutoreleasedReturnValue();
          _objc_autorelease();
          _objc_exception_throw();
          goto LAB_10ade111c;
        }
        unaff_x23 = puVar12;
        _objc_alloc();
        puVar7 = PTR_PTR_1126de0d0;
        func_0x00010c0b6bc0(PTR_PTR_1126de0d0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0349a0();
        _objc_release(puVar7);
        uVar13 = *(undefined8 *)(param_1 + 0x18);
        _objc_retain(unaff_x23);
        _objc_retain(param_4);
        func_0x00010c0f7fc0(uVar13);
        uVar13 = *(undefined8 *)(param_1 + 8);
        _NSStringFromClass(puVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(uVar13);
        _objc_release(puVar12);
        _objc_release(param_4);
        _objc_release(unaff_x23);
        _objc_release(unaff_x23);
        lVar14 = lVar14 + 1;
      } while (lVar10 != lVar14);
      lVar10 = param_3;
      func_0x00010bf52a60();
    }
    _objc_release(param_3);
  }
  __ZNSt3__15mutex6unlockEv(param_1 + 0x20);
  _objc_release(param_4);
  lVar10 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(unaff_x23);
  __ZNSt3__15mutex6unlockEv(param_1 + 0x20);
  _objc_release(param_4);
  _objc_release(param_3);
  __Unwind_Resume();
  if (*(long *)(*(long *)(lVar10 + 0x20) + 0x60) != 0) {
    uVar13 = *(undefined8 *)(lVar10 + 0x28);
    plVar11 = *(long **)(*(long *)(lVar10 + 0x20) + 0x68);
    if (plVar11 != (long *)0x0) {
      plVar1 = plVar11 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    func_0x00010c1841a0(uVar13);
    if (plVar11 != (long *)0x0) {
      plVar1 = plVar11 + 1;
      do {
        lVar10 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
      }
    }
  }
  return;
}



/* Entry: 10ade12d8; end: 10ade138b;  */

void FUN_10ade12d8(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  long lStack_30;
  long *plStack_28;
  
  lVar6 = *(long *)(param_1 + 0x20);
  lStack_30 = *(long *)(lVar6 + 0x60);
  if (lStack_30 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    plStack_28 = *(long **)(lVar6 + 0x68);
    if (plStack_28 != (long *)0x0) {
      plVar1 = plStack_28 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      lVar6 = *(long *)(param_1 + 0x20);
    }
    func_0x00010c1841a0(uVar5,param_2,&lStack_30,*(undefined8 *)(lVar6 + 0x10),
                        *(undefined8 *)(param_1 + 0x30));
    plVar1 = plStack_28;
    if (plStack_28 != (long *)0x0) {
      plVar2 = plStack_28 + 1;
      do {
        lVar6 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_28 + 0x10))(plStack_28);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
  }
  return;
}



/* Entry: 10ade138c; end: 10ade14bf; -[LSAComponentManager clearResources] */

void FUN_10ade138c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined *puStack_138;
  long lStack_130;
  undefined1 uStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  __ZNSt3__15mutex4lockEv(param_1 + 0x20);
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  uStack_128 = (char)&uStack_110;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar3 = *plStack_100;
    do {
      lVar4 = 0;
      do {
        if (*plStack_100 != lVar3) {
          _objc_enumerationMutation(lVar1);
        }
        func_0x00010bf3bf00(*(undefined8 *)(lStack_108 + lVar4 * 8));
        lVar4 = lVar4 + 1;
      } while (lVar2 != lVar4);
      lVar2 = lVar1;
      uStack_128 = (char)&uStack_110;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar1);
  __ZNSt3__15mutex6unlockEv(param_1 + 0x20);
  lVar2 = *(long *)(param_1 + 0x60);
  FUN_10a21e1b8();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(lVar1);
  __Unwind_Resume();
  pcStack_118 = FUN_10ade14c0;
  puStack_150 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_148 = 0xc2000000;
  pcStack_140 = FUN_10ade1520;
  puStack_138 = &UNK_110ad8878;
  lStack_130 = lVar2;
  puStack_120 = &stack0xfffffffffffffff0;
  func_0x00010c0f7fc0(*(undefined8 *)(lVar2 + 0x18),param_2,&puStack_150);
  return;
}



/* Entry: 10ade14c0; end: 10ade151f; -[LSAComponentManager enableOutputTexturesCaching:] */

void FUN_10ade14c0(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined1 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_10ade1520;
  puStack_28 = &UNK_110ad8878;
  lStack_20 = param_1;
  uStack_18 = param_3;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x18),param_2,&puStack_40);
  return;
}



/* Entry: 10ade1520; end: 10ade154b;  */

void FUN_10ade1520(long param_1)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  plVar3 = *(long **)(*(long *)(param_1 + 0x20) + 0x60);
  if (plVar3 != (long *)0x0) {
    bVar1 = *(byte *)(param_1 + 0x28);
    lVar4 = *(long *)(*plVar3 + 0x180);
    *(byte *)(lVar4 + 0x61) = bVar1;
    if ((bVar1 & 1) == 0) {
      if (*(long *)(lVar4 + 0x50) != 0) {
        func_0x00010ad4616c((long *)(lVar4 + 0x38),*(undefined8 *)(lVar4 + 0x48));
        *(undefined8 *)(lVar4 + 0x48) = 0;
        lVar2 = *(long *)(lVar4 + 0x40);
        if (lVar2 != 0) {
          lVar5 = 0;
          do {
            *(undefined8 *)(*(long *)(lVar4 + 0x38) + lVar5 * 8) = 0;
            lVar5 = lVar5 + 1;
          } while (lVar2 != lVar5);
        }
        *(undefined8 *)(lVar4 + 0x50) = 0;
      }
      return;
    }
  }
  return;
}



/* Entry: 10ade154c; end: 10ade1597; -[LSAComponentManager .cxx_destruct] */

void FUN_10ade154c(long param_1)

{
  FUN_10ad8b754(param_1 + 0x60);
  __ZNSt3__15mutexD1Ev(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10ade1598; end: 10ade15bf; -[LSAComponentManager .cxx_construct] */

void FUN_10ade1598(long param_1)

{
  *(undefined8 *)(param_1 + 0x20) = 0x32aaaba7;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  return;
}



/* Entry: 10ade15c0; end: 10ade166f;  */

long FUN_10ade15c0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10ade1670; end: 10ade167f;  */

void FUN_10ade1670(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c75910;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10ade1680; end: 10ade169f;  */

void FUN_10ade1680(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c75910;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ade16a0; end: 10ade16bb;  */

long * FUN_10ade16a0(long param_1)

{
  long *plVar1;
  ulong *puVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  int iVar7;
  long ****pppplVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  long ***ppplVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  long lStack_100;
  long *plStack_f8;
  long ***ppplStack_f0;
  long ***ppplStack_e8;
  long ***ppplStack_e0;
  long ***ppplStack_d8;
  long ***ppplStack_d0;
  long ***ppplStack_c8;
  undefined8 *puStack_c0;
  long lStack_b8;
  long lStack_48;
  undefined **ppuVar8;
  
  plVar3 = (long *)(param_1 + 0x18);
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar8 = &PTR_PTR_113300970;
  FUN_10ae079a0(0);
  FUN_10ae07cd4(ppuVar8,&PTR_PTR_113300970);
  iVar7 = (int)ppuVar8;
  ppplStack_e0 = (long ***)0x0;
  ppplStack_d8 = (long ***)0x0;
  ppplStack_d0 = (long ***)0x0;
  FUN_10ad055a0();
  lVar12 = *plVar3;
  if ((iVar7 != 0) && (*(long **)(lVar12 + 0x30) != (long *)0x0)) {
    (**(code **)(**(long **)(lVar12 + 0x30) + 0x50))(&ppplStack_c8);
    if (ppplStack_d8 < ppplStack_d0) {
      *ppplStack_d8 = (long **)ppplStack_c8;
      ppplStack_d8 = ppplStack_d8 + 1;
    }
    else {
      pppplVar9 = &ppplStack_e0;
      func_0x0001098b74c4(pppplVar9,&ppplStack_c8);
      ppplStack_d8 = (long ***)pppplVar9;
      if ((long ****)ppplStack_c8 != (long ****)0x0) {
        pppplVar9 = (long ****)(ppplStack_c8 + 1);
        do {
          ppplVar15 = *pppplVar9;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pppplVar9,0x10);
          if (bVar5) {
            *pppplVar9 = (long ***)((long)ppplVar15 + -4);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (((ulong)ppplVar15 & 0x1fffffffc) == 4) {
          do {
            ppplVar15 = *pppplVar9;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(pppplVar9,0x10);
            if (bVar5) {
              *pppplVar9 = (long ***)((long)ppplVar15 + -1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((long ***)((long)ppplVar15 + -1) == (long ***)0x0) {
            (*(code *)(*ppplStack_c8)[1])();
          }
        }
      }
    }
    lVar12 = *plVar3;
  }
  if (*(undefined8 **)(lVar12 + 0x10) != (undefined8 *)0x0) {
    func_0x00010a094208(&ppplStack_c8,**(undefined8 **)(lVar12 + 0x10));
    if (ppplStack_d8 < ppplStack_d0) {
      *ppplStack_d8 = (long **)ppplStack_c8;
      ppplStack_d8 = ppplStack_d8 + 1;
    }
    else {
      pppplVar9 = &ppplStack_e0;
      func_0x0001098b74c4(pppplVar9,&ppplStack_c8);
      ppplStack_d8 = (long ***)pppplVar9;
      if ((long ****)ppplStack_c8 != (long ****)0x0) {
        pppplVar9 = (long ****)(ppplStack_c8 + 1);
        do {
          ppplVar15 = *pppplVar9;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pppplVar9,0x10);
          if (bVar5) {
            *pppplVar9 = (long ***)((long)ppplVar15 + -4);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (((ulong)ppplVar15 & 0x1fffffffc) == 4) {
          do {
            ppplVar15 = *pppplVar9;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(pppplVar9,0x10);
            if (bVar5) {
              *pppplVar9 = (long ***)((long)ppplVar15 + -1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((long ***)((long)ppplVar15 + -1) == (long ***)0x0) {
            (*(code *)(*ppplStack_c8)[1])();
          }
        }
      }
    }
    lVar12 = *plVar3;
  }
  FUN_10a219de8(&ppplStack_c8,lVar12);
  FUN_10a21e1b8(plVar3);
  lVar12 = *plVar3;
  plVar17 = *(long **)(lVar12 + 0x8a8);
  *(undefined8 *)(lVar12 + 0x8a8) = 0;
  *(undefined8 *)(lVar12 + 0x8a0) = 0;
  if (plVar17 != (long *)0x0) {
    plVar13 = plVar17 + 1;
    do {
      lVar12 = *plVar13;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar5) {
        *plVar13 = lVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
    }
  }
  lVar12 = *plVar3;
  plVar17 = *(long **)(lVar12 + 0x8b8);
  *(undefined8 *)(lVar12 + 0x8b8) = 0;
  *(undefined8 *)(lVar12 + 0x8b0) = 0;
  if (plVar17 != (long *)0x0) {
    plVar13 = plVar17 + 1;
    do {
      lVar12 = *plVar13;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar5) {
        *plVar13 = lVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
    }
  }
  lVar12 = *plVar3;
  plVar17 = *(long **)(lVar12 + 0x208);
  *(undefined8 *)(lVar12 + 0x208) = 0;
  if (plVar17 != (long *)0x0) {
    (**(code **)(*plVar17 + 8))();
    lVar12 = *plVar3;
  }
  lStack_100 = 0;
  plStack_f8 = (long *)0x0;
  func_0x00010a21badc(lVar12 + 0x830,&lStack_100);
  plVar17 = plStack_f8;
  if (plStack_f8 != (long *)0x0) {
    plVar13 = plStack_f8 + 1;
    do {
      lVar12 = *plVar13;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar5) {
        *plVar13 = lVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
    }
  }
  FUN_10a22afb0(&ppplStack_c8);
  plVar17 = (long *)*plVar3;
  if ((long *)plVar17[4] != (long *)0x0) {
    (**(code **)(*(long *)plVar17[4] + 0x38))(&ppplStack_c8);
    if (ppplStack_d8 < ppplStack_d0) {
      *ppplStack_d8 = (long **)ppplStack_c8;
      ppplStack_d8 = ppplStack_d8 + 1;
    }
    else {
      pppplVar9 = &ppplStack_e0;
      func_0x0001098b74c4(pppplVar9,&ppplStack_c8);
      ppplStack_d8 = (long ***)pppplVar9;
      if ((long ****)ppplStack_c8 != (long ****)0x0) {
        pppplVar9 = (long ****)(ppplStack_c8 + 1);
        do {
          ppplVar15 = *pppplVar9;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pppplVar9,0x10);
          if (bVar5) {
            *pppplVar9 = (long ***)((long)ppplVar15 + -4);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (((ulong)ppplVar15 & 0x1fffffffc) == 4) {
          do {
            ppplVar15 = *pppplVar9;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(pppplVar9,0x10);
            if (bVar5) {
              *pppplVar9 = (long ***)((long)ppplVar15 + -1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((long ***)((long)ppplVar15 + -1) == (long ***)0x0) {
            (*(code *)(*ppplStack_c8)[1])();
          }
        }
      }
    }
    plVar17 = (long *)*plVar3;
  }
  plVar17 = (long *)*plVar17;
  if (plVar17 != (long *)0x0) {
    (**(code **)(*plVar17 + 0x38))(&ppplStack_e8);
    FUN_109d1a80c();
    pppplVar9 = (long ****)ppplStack_e8;
    lVar18 = *plVar17;
    plVar13 = (long *)*plVar3;
    plVar17 = (long *)plVar13[1];
    lVar12 = *plVar13;
    *plVar13 = 0;
    plVar13[1] = 0;
    ppplStack_f0 = ppplStack_e8;
    ppplStack_e8 = (long ***)0x0;
    puVar10 = (undefined8 *)0x80;
    lStack_100 = lVar12;
    plStack_f8 = plVar17;
    __Znwm();
    *puVar10 = FUN_10a23d388;
    puVar10[1] = FUN_10a23d65c;
    func_0x0001092ba17c(puVar10 + 2);
    plVar13 = (long *)puVar10[7];
    if (plVar13 != (long *)0x0) {
      plVar1 = plVar13 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
        pppplVar9 = (long ****)ppplStack_f0;
        lVar12 = lStack_100;
        plVar17 = plStack_f8;
      } while (cVar4 != '\0');
    }
    puVar10[10] = plVar17;
    puVar10[9] = lVar12;
    plStack_f8 = (long *)0x0;
    ppplStack_f0 = (long ***)0x0;
    lStack_100 = 0;
    puVar10[0xb] = pppplVar9;
    puVar10[0xc] = lVar18;
    *(undefined1 *)(puVar10 + 0xd) = 0;
    *(undefined1 *)(puVar10 + 0xf) = 0;
    puVar11 = puVar10 + 0xc;
    func_0x0001092ba064(puVar11,puVar10);
    if (((ulong)puVar11 & 1) == 0) {
      FUN_10a23239c(puVar10 + 0xe,puVar10 + 9);
      puVar10[0xc] = puVar10[0xe];
      plVar17 = (long *)(puVar10[0xe] + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar5) {
          *plVar17 = *plVar17 + 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (((uint)*(undefined8 *)(puVar10[0xc] + 0x10) >> 1 & 1) == 0) {
        *(undefined1 *)(puVar10 + 0xf) = 1;
        lVar18 = puVar10[0xc];
        plVar17 = (long *)(lVar18 + 0x10);
        lVar12 = puVar10[3];
        do {
          lVar16 = *plVar17;
          if (lVar16 == 0) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar5) {
              *plVar17 = 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') {
              ppplStack_c8 = (long ***)0x0;
              puStack_c0 = puVar10;
              lStack_b8 = lVar12;
              func_0x000109d1b588(lVar18 + 0x18,&ppplStack_c8);
              *(undefined8 *)(lVar18 + 0x10) = 0;
              goto joined_r0x00010a225618;
            }
          }
          else {
            ClearExclusiveLocal();
          }
        } while (((uint)lVar16 >> 1 & 1) == 0);
      }
      plVar17 = (long *)puVar10[0xc];
      if (((uint)*(undefined8 *)(puVar10[0xc] + 0x10) >> 5 & 1) != 0) goto LAB_10a2258ec;
      if (plVar17 != (long *)0x0) {
        puVar2 = (ulong *)(plVar17 + 1);
        do {
          uVar14 = *puVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar5) {
            *puVar2 = uVar14 - 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((uVar14 & 0x1fffffffc) == 4) {
          do {
            uVar14 = *puVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar5) {
              *puVar2 = uVar14 - 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (uVar14 - 1 == 0) {
            (**(code **)(*plVar17 + 8))();
          }
        }
      }
      plVar17 = (long *)puVar10[0xe];
      if (plVar17 != (long *)0x0) {
        puVar2 = (ulong *)(plVar17 + 1);
        do {
          uVar14 = *puVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar5) {
            *puVar2 = uVar14 - 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((uVar14 & 0x1fffffffc) == 4) {
          do {
            uVar14 = *puVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar5) {
              *puVar2 = uVar14 - 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (uVar14 - 1 == 0) {
            (**(code **)(*plVar17 + 8))();
          }
        }
      }
      func_0x0001092ba100(puVar10 + 2);
      plVar17 = (long *)puVar10[0xb];
      if (plVar17 != (long *)0x0) {
        puVar2 = (ulong *)(plVar17 + 1);
        do {
          uVar14 = *puVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar5) {
            *puVar2 = uVar14 - 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((uVar14 & 0x1fffffffc) == 4) {
          do {
            uVar14 = *puVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar5) {
              *puVar2 = uVar14 - 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (uVar14 - 1 == 0) {
            (**(code **)(*plVar17 + 8))();
          }
        }
      }
      plVar17 = (long *)puVar10[10];
      if (plVar17 != (long *)0x0) {
        plVar1 = plVar17 + 1;
        do {
          lVar12 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
        }
      }
      func_0x000109d1a1d0(puVar10 + 2);
      __ZdlPv(puVar10);
    }
joined_r0x00010a225618:
    if (plVar13 != (long *)0x0) {
      puVar2 = (ulong *)(plVar13 + 1);
      do {
        uVar14 = *puVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar5) {
          *puVar2 = uVar14 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar14 & 0x1fffffffc) == 4) {
        do {
          uVar14 = *puVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar5) {
            *puVar2 = uVar14 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar14 - 1 == 0) {
          (**(code **)(*plVar13 + 8))(plVar13);
        }
      }
    }
    if (ppplStack_f0 != (long ***)0x0) {
      puVar2 = (ulong *)(ppplStack_f0 + 1);
      do {
        uVar14 = *puVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar5) {
          *puVar2 = uVar14 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar14 & 0x1fffffffc) == 4) {
        do {
          uVar14 = *puVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar5) {
            *puVar2 = uVar14 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar14 - 1 == 0) {
          (**(code **)((long)*ppplStack_f0 + 8))();
        }
      }
    }
    plVar17 = plStack_f8;
    if (plStack_f8 != (long *)0x0) {
      plVar13 = plStack_f8 + 1;
      do {
        lVar12 = *plVar13;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar5) {
          *plVar13 = lVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
      }
    }
    if ((long ****)ppplStack_e8 != (long ****)0x0) {
      pppplVar9 = (long ****)(ppplStack_e8 + 1);
      do {
        ppplVar15 = *pppplVar9;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pppplVar9,0x10);
        if (bVar5) {
          *pppplVar9 = (long ***)((long)ppplVar15 + -4);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (((ulong)ppplVar15 & 0x1fffffffc) == 4) {
        do {
          ppplVar15 = *pppplVar9;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pppplVar9,0x10);
          if (bVar5) {
            *pppplVar9 = (long ***)((long)ppplVar15 + -1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((long ***)((long)ppplVar15 + -1) == (long ***)0x0) {
          (*(code *)(*ppplStack_e8)[1])();
        }
      }
    }
  }
  ppplVar15 = ppplStack_d8;
  pppplVar9 = (long ****)ppplStack_e0;
  if (ppplStack_e0 == ppplStack_d8) {
    FUN_109d1b124(&ppplStack_e8);
  }
  else {
    lStack_100 = (long)ppplStack_d8 - (long)ppplStack_e0 >> 3;
    func_0x0001098b7954(&ppplStack_c8,&lStack_100);
    plVar17 = (long *)(lStack_b8 + 8);
    if (*plVar17 != 0) {
      func_0x0001092b4274(plVar17);
    }
    *plVar17 = (long)puStack_c0;
    puStack_c0 = (undefined8 *)0x0;
    lVar12 = 0;
    do {
      func_0x0001098b799c(lStack_b8,lVar12,pppplVar9);
      pppplVar9 = pppplVar9 + 1;
      lVar12 = lVar12 + 1;
    } while (pppplVar9 != (long ****)ppplVar15);
    ppplStack_e8 = ppplStack_c8;
    ppplStack_c8 = (long ***)0x0;
    if ((puStack_c0 != (undefined8 *)0x0) &&
       (func_0x0001092b4274(&puStack_c0), (long ****)ppplStack_c8 != (long ****)0x0)) {
      pppplVar9 = (long ****)(ppplStack_c8 + 1);
      do {
        ppplVar15 = *pppplVar9;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pppplVar9,0x10);
        if (bVar5) {
          *pppplVar9 = (long ***)((long)ppplVar15 + -4);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (((ulong)ppplVar15 & 0x1fffffffc) == 4) {
        do {
          ppplVar15 = *pppplVar9;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pppplVar9,0x10);
          if (bVar5) {
            *pppplVar9 = (long ***)((long)ppplVar15 + -1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((long ***)((long)ppplVar15 + -1) == (long ***)0x0) {
          (*(code *)(*ppplStack_c8)[1])();
        }
      }
    }
  }
  FUN_109d1a244(&ppplStack_e8);
  if ((long ****)ppplStack_e8 != (long ****)0x0) {
    pppplVar9 = (long ****)(ppplStack_e8 + 1);
    do {
      ppplVar15 = *pppplVar9;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pppplVar9,0x10);
      if (bVar5) {
        *pppplVar9 = (long ***)((long)ppplVar15 + -4);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (((ulong)ppplVar15 & 0x1fffffffc) == 4) {
      do {
        ppplVar15 = *pppplVar9;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pppplVar9,0x10);
        if (bVar5) {
          *pppplVar9 = (long ***)((long)ppplVar15 + -1);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((long ***)((long)ppplVar15 + -1) == (long ***)0x0) {
        (*(code *)(*ppplStack_e8)[1])();
      }
    }
  }
  lVar12 = *plVar3;
  plVar17 = *(long **)(lVar12 + 0x38);
  *(undefined8 *)(lVar12 + 0x30) = 0;
  *(undefined8 *)(lVar12 + 0x38) = 0;
  if (plVar17 != (long *)0x0) {
    plVar13 = plVar17 + 1;
    do {
      lVar12 = *plVar13;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar5) {
        *plVar13 = lVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
    }
  }
  func_0x00010a225c4c(*plVar3 + 0x20);
  lVar12 = *plVar3;
  plVar17 = *(long **)(lVar12 + 0x18);
  *(undefined8 *)(lVar12 + 0x10) = 0;
  *(undefined8 *)(lVar12 + 0x18) = 0;
  if (plVar17 != (long *)0x0) {
    plVar13 = plVar17 + 1;
    do {
      lVar12 = *plVar13;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar5) {
        *plVar13 = lVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
    }
  }
  ppplStack_c8 = (long ***)&ppplStack_e0;
  FUN_10a2325bc(&ppplStack_c8);
  plVar17 = plVar3;
  func_0x00010a235084(plVar3,0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return plVar3;
  }
  ___stack_chk_fail();
LAB_10a2258ec:
  func_0x0001092af97c(plVar17 + 0x12);
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a2258f8);
  (*pcVar6)();
}



/* Entry: 10ade16bc; end: 10ade16db;  */

void FUN_10ade16bc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c75960;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ade16dc; end: 10ade16eb;  */

void FUN_10ade16dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010ade16e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 8))();
  return;
}



/* Entry: 10ade16ec; end: 10ade179b;  */

long FUN_10ade16ec(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10ade179c; end: 10ade1a7b; +[LSAComponentManager defaultComponentManagerWithContext:performer:trackerAvailability:enableAudioPlayback:configurationProvider:cacheParams:configurationsToPreload:] */

void FUN_10ade179c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_alloc(param_1);
  puVar1 = PTR_PTR_1126db530;
  _objc_opt_class();
  puVar2 = PTR_PTR_1126dd070;
  puStack_108 = puVar1;
  _objc_opt_class();
  puVar1 = PTR_PTR_1126de230;
  puStack_100 = puVar2;
  _objc_opt_class();
  puVar2 = PTR_PTR_1126db508;
  puStack_f8 = puVar1;
  _objc_opt_class();
  puVar1 = PTR_PTR_1126db500;
  puStack_f0 = puVar2;
  _objc_opt_class();
  puVar2 = PTR_PTR_1126db510;
  puStack_e8 = puVar1;
  _objc_opt_class();
  puVar1 = PTR_PTR_1126dd078;
  puStack_e0 = puVar2;
  _objc_opt_class();
  puVar2 = PTR_PTR_1126de238;
  puStack_d8 = puVar1;
  _objc_opt_class();
  puVar1 = PTR_PTR_1126db518;
  puStack_d0 = puVar2;
  _objc_opt_class();
  puVar2 = PTR_PTR_1126db4f0;
  puStack_c8 = puVar1;
  _objc_opt_class();
  puVar1 = PTR_PTR_1126db548;
  puStack_c0 = puVar2;
  _objc_opt_class();
  puVar2 = PTR_PTR_1126db550;
  puStack_b8 = puVar1;
  _objc_opt_class();
  puVar1 = PTR_PTR_1126db540;
  puStack_b0 = puVar2;
  _objc_opt_class();
  puVar2 = PTR_PTR_1126db4f8;
  puStack_a8 = puVar1;
  _objc_opt_class();
  puVar1 = PTR_PTR_1126db558;
  puStack_a0 = puVar2;
  _objc_opt_class();
  puVar2 = PTR_PTR_1126db528;
  puStack_98 = puVar1;
  _objc_opt_class();
  puVar1 = PTR_PTR_1126db538;
  puStack_90 = puVar2;
  _objc_opt_class();
  puVar2 = PTR_PTR_1126de240;
  puStack_88 = puVar1;
  _objc_opt_class();
  puVar1 = PTR_PTR_1126db520;
  puStack_80 = puVar2;
  _objc_opt_class();
  puVar2 = PTR_PTR_1126dd080;
  puStack_78 = puVar1;
  _objc_opt_class();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_108,0x14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0042e0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,puVar1);
  _objc_release(puVar1);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  uVar3 = param_3;
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_release(puVar1);
    _objc_release(param_9);
    _objc_release(param_8);
    _objc_release(param_7);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    __Unwind_Resume(uVar3);
    func_0x00010bf69080();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10ade1a7c; end: 10ade1aa3; +[LSAComponentManager defaultComponentManagerWithContext:performer:trackerAvailability:enableAudioPlayback:configurationProvider:cacheParams:] */

void FUN_10ade1a7c(void)

{
  func_0x00010bf69080();
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10ade1aa4; end: 10ade1ad7; +[LSAComponentManager defaultComponentManagerWithContext:performer:trackerAvailability:configurationProvider:cacheParams:] */

void FUN_10ade1aa4(void)

{
  func_0x00010bf69080();
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10ade1ad8; end: 10ade1b0f; +[LSAComponentManager defaultComponentManagerWithContext:performer:trackerAvailability:configurationProvider:cacheParams:configurationsToPreload:] */

void FUN_10ade1ad8(void)

{
  func_0x00010bf69080();
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10ade1b10; end: 10ade1b3f; -[LSAComponentManager analyticsComponent] */

void FUN_10ade1b10(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126db530;
  _objc_opt_class(PTR_PTR_1126db530);
                    /* WARNING: Could not recover jumptable at 0x00010bf44610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_componentWithClass__1125aeb28,puVar1);
  return;
}



/* Entry: 10ade1b40; end: 10ade1b6f; -[LSAComponentManager audioProcessingComponent] */

void FUN_10ade1b40(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126dd070;
  _objc_opt_class(PTR_PTR_1126dd070);
                    /* WARNING: Could not recover jumptable at 0x00010bf44610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_componentWithClass__1125aeb28,puVar1);
  return;
}



/* Entry: 10ade1b70; end: 10ade1b9f; -[LSAComponentManager bitmojiComponent] */

void FUN_10ade1b70(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126dd078;
  _objc_opt_class(PTR_PTR_1126dd078);
                    /* WARNING: Could not recover jumptable at 0x00010bf44610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_componentWithClass__1125aeb28,puVar1);
  return;
}



/* Entry: 10ade1ba0; end: 10ade1bcf; -[LSAComponentManager deviceMotionComponent] */

void FUN_10ade1ba0(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126de230;
  _objc_opt_class(PTR_PTR_1126de230);
                    /* WARNING: Could not recover jumptable at 0x00010bf44610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_componentWithClass__1125aeb28,puVar1);
  return;
}



/* Entry: 10ade1bd0; end: 10ade1bff; -[LSAComponentManager lensComponent] */

void FUN_10ade1bd0(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126db508;
  _objc_opt_class(PTR_PTR_1126db508);
                    /* WARNING: Could not recover jumptable at 0x00010bf44610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_componentWithClass__1125aeb28,puVar1);
  return;
}



/* Entry: 10ade1c00; end: 10ade1c2f; -[LSAComponentManager lensFilterFactoryComponent] */

void FUN_10ade1c00(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126db508;
  _objc_opt_class(PTR_PTR_1126db508);
                    /* WARNING: Could not recover jumptable at 0x00010bf44610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_componentWithClass__1125aeb28,puVar1);
  return;
}



/* Entry: 10ade1c30; end: 10ade1c5f; -[LSAComponentManager externalImageComponent] */

void FUN_10ade1c30(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126db500;
  _objc_opt_class(PTR_PTR_1126db500);
                    /* WARNING: Could not recover jumptable at 0x00010bf44610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_componentWithClass__1125aeb28,puVar1);
  return;
}



/* Entry: 10ade1c60; end: 10ade1c8f; -[LSAComponentManager presetsComponent] */

void FUN_10ade1c60(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126de248;
  _objc_opt_class(PTR_PTR_1126de248);
                    /* WARNING: Could not recover jumptable at 0x00010bf44610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_componentWithClass__1125aeb28,puVar1);
  return;
}



/* Entry: 10ade1c90; end: 10ade1cbf; -[LSAComponentManager touchProcessingComponent] */

void FUN_10ade1c90(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126de238;
  _objc_opt_class(PTR_PTR_1126de238);
                    /* WARNING: Could not recover jumptable at 0x00010bf44610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_componentWithClass__1125aeb28,puVar1);
  return;
}



/* Entry: 10ade1cc0; end: 10ade1cef; -[LSAComponentManager trackingComponent] */

void FUN_10ade1cc0(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126db510;
  _objc_opt_class(PTR_PTR_1126db510);
                    /* WARNING: Could not recover jumptable at 0x00010bf44610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_componentWithClass__1125aeb28,puVar1);
  return;
}



/* Entry: 10ade1cf0; end: 10ade1d1f; -[LSAComponentManager trackingSerializationComponent] */

void FUN_10ade1cf0(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126db518;
  _objc_opt_class(PTR_PTR_1126db518);
                    /* WARNING: Could not recover jumptable at 0x00010bf44610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_componentWithClass__1125aeb28,puVar1);
  return;
}



/* Entry: 10ade1d20; end: 10ade1d4f; -[LSAComponentManager videoProcessingComponent] */

void FUN_10ade1d20(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126db4f0;
  _objc_opt_class(PTR_PTR_1126db4f0);
                    /* WARNING: Could not recover jumptable at 0x00010bf44610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_componentWithClass__1125aeb28,puVar1);
  return;
}



/* Entry: 10ade1d50; end: 10ade1d7f; -[LSAComponentManager locationComponent] */

void FUN_10ade1d50(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126db548;
  _objc_opt_class(PTR_PTR_1126db548);
                    /* WARNING: Could not recover jumptable at 0x00010bf44610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_componentWithClass__1125aeb28,puVar1);
  return;
}



/* Entry: 10ade1d80; end: 10ade1daf; -[LSAComponentManager compassComponent] */

void FUN_10ade1d80(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126db550;
  _objc_opt_class(PTR_PTR_1126db550);
                    /* WARNING: Could not recover jumptable at 0x00010bf44610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_componentWithClass__1125aeb28,puVar1);
  return;
}



/* Entry: 10ade1db0; end: 10ade1ddf; -[LSAComponentManager remoteAssetsComponent] */

void FUN_10ade1db0(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126db540;
  _objc_opt_class(PTR_PTR_1126db540);
                    /* WARNING: Could not recover jumptable at 0x00010bf44610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_componentWithClass__1125aeb28,puVar1);
  return;
}



/* Entry: 10ade1de0; end: 10ade1e0f; -[LSAComponentManager uriServiceComponent] */

void FUN_10ade1de0(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126db4f8;
  _objc_opt_class(PTR_PTR_1126db4f8);
                    /* WARNING: Could not recover jumptable at 0x00010bf44610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_componentWithClass__1125aeb28,puVar1);
  return;
}



/* Entry: 10ade1e10; end: 10ade1e3f; -[LSAComponentManager geoDataComponent] */

void FUN_10ade1e10(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126db558;
  _objc_opt_class(PTR_PTR_1126db558);
                    /* WARNING: Could not recover jumptable at 0x00010bf44610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_componentWithClass__1125aeb28,puVar1);
  return;
}



/* Entry: 10ade1e40; end: 10ade1e6f; -[LSAComponentManager metricsComponent] */

void FUN_10ade1e40(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126db538;
  _objc_opt_class(PTR_PTR_1126db538);
                    /* WARNING: Could not recover jumptable at 0x00010bf44610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_componentWithClass__1125aeb28,puVar1);
  return;
}



/* Entry: 10ade1e70; end: 10ade1e9f; -[LSAComponentManager snapRecordingComponent] */

void FUN_10ade1e70(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126db528;
  _objc_opt_class(PTR_PTR_1126db528);
                    /* WARNING: Could not recover jumptable at 0x00010bf44610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_componentWithClass__1125aeb28,puVar1);
  return;
}



/* Entry: 10ade1ea0; end: 10ade1ecf; -[LSAComponentManager serializationComponent] */

void FUN_10ade1ea0(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126de250;
  _objc_opt_class(PTR_PTR_1126de250);
                    /* WARNING: Could not recover jumptable at 0x00010bf44610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_componentWithClass__1125aeb28,puVar1);
  return;
}



/* Entry: 10ade1ed0; end: 10ade1eff; -[LSAComponentManager metadataRecordingComponent] */

void FUN_10ade1ed0(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126de240;
  _objc_opt_class(PTR_PTR_1126de240);
                    /* WARNING: Could not recover jumptable at 0x00010bf44610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_componentWithClass__1125aeb28,puVar1);
  return;
}



/* Entry: 10ade1f00; end: 10ade1f2f; -[LSAComponentManager connectedLensComponent] */

void FUN_10ade1f00(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126db520;
  _objc_opt_class(PTR_PTR_1126db520);
                    /* WARNING: Could not recover jumptable at 0x00010bf44610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_componentWithClass__1125aeb28,puVar1);
  return;
}



/* Entry: 10ade1f30; end: 10ade1f5f; -[LSAComponentManager externalStreamComponent] */

void FUN_10ade1f30(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126dd080;
  _objc_opt_class(PTR_PTR_1126dd080);
                    /* WARNING: Could not recover jumptable at 0x00010bf44610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_componentWithClass__1125aeb28,puVar1);
  return;
}



/* Entry: 10ade1f60; end: 10ade2003; -[LSAProcessingOutput initWithRGBATexture:YUVTexture:] */

undefined1 *
FUN_10ade1f60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1127014e8;
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



/* Entry: 10ade2004; end: 10ade200b; -[LSAProcessingOutput rgbaTexture] */

undefined8 FUN_10ade2004(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10ade200c; end: 10ade2013; -[LSAProcessingOutput yuvTexture] */

undefined8 FUN_10ade200c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10ade2014; end: 10ade2043; -[LSAProcessingOutput .cxx_destruct] */

void FUN_10ade2014(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10ade2044; end: 10ade2123; +[LSATexture textureWithCoreTextureWithTransform:context:deallocPerformer:enableMetalExperiment:] */

void FUN_10ade2044(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  _objc_retain(param_5);
  _objc_alloc(param_1);
  plVar5 = (long *)param_3[1];
  *param_3 = 0;
  param_3[1] = 0;
  func_0x00010c005e80();
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10ade2124; end: 10ade229f; +[LSATexture textureWithCoreTexture:context:deallocPerformer:enableMetalExperiment:] */

void FUN_10ade2124(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  undefined8 uStack_60;
  long *plStack_58;
  
  _objc_retain(param_5);
  _objc_opt_class(param_1);
  plVar5 = (long *)0x30;
  __Znwm();
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_DAT_110ba0c30;
  plStack_58 = (long *)param_3[1];
  uStack_60 = *param_3;
  *param_3 = 0;
  param_3[1] = 0;
  FUN_10a098498(plVar5 + 3,&uStack_60);
  plVar2 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  func_0x00010c26cf80(param_1);
  _objc_retainAutoreleasedReturnValue();
  if (plVar5 != (long *)0x0) {
    plVar2 = plVar5 + 1;
    do {
      lVar6 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10ade22a0; end: 10ade255b; -[LSATexture initWithCoreTextureWithTransform:context:deallocPerformer:enableMetalExperiment:] */

undefined8 *
FUN_10ade22a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4,
             undefined8 param_5,int param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  long *plStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1127014f0;
  puVar4 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar4,PTR_s_init_1125d9248);
  if (puVar4 != (undefined8 *)0x0) {
    uVar5 = puVar4[7];
    puVar4[7] = 0;
    _objc_release(uVar5);
    FUN_10add5798(puVar4 + 1,param_3);
    FUN_10ade255c(puVar4 + 3);
    if (*(long *)(param_4[2] + 8) == 0) {
      plVar6 = (long *)0x0;
    }
    else {
      plVar6 = *(long **)(*(long *)(param_4[2] + 8) + 0x40);
      (**(code **)(*plVar6 + 0x38))();
    }
    _objc_retain(plVar6);
    uVar5 = puVar4[5];
    puVar4[5] = plVar6;
    _objc_release(uVar5);
    lVar9 = 0;
    if ((char)param_4[0x2c] == '\0') {
      lVar9 = 8;
    }
    puVar8 = *(undefined8 **)(*param_4 + lVar9);
    uVar7 = puVar8[1];
    uVar5 = *puVar8;
    if (puVar8[1] != 0) {
      plVar6 = (long *)(puVar8[1] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = *plVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar6 = (long *)puVar4[9];
    puVar4[9] = uVar7;
    puVar4[8] = uVar5;
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      do {
        lVar9 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    if (param_6 != 0) {
      lVar9 = *(long *)(puVar4[1] + 8);
      if (lVar9 == 0) {
        plVar6 = (long *)(*(long *)(puVar4[1] + 0x10) + 0x10);
      }
      else {
        plVar6 = (long *)(lVar9 + 8);
      }
      if (*plVar6 != 0) {
        FUN_10a0997e4(&plStack_60,puVar4 + 1,1,1);
        if (((plStack_60 != (long *)0x0) &&
            (___dynamic_cast(plStack_60,&PTR_DAT_110bc45d8,&PTR_DAT_110c70c38,0xfffffffffffffffe),
            plStack_60 != (long *)0x0)) &&
           (plVar6 = plStack_60, (**(code **)(*plStack_60 + 0x18))(), plVar6 != (long *)0x0)) {
          (**(code **)(*plStack_60 + 0x20))(plStack_60,1);
          lVar9 = *plStack_60;
          _objc_retain(lVar9);
          uVar5 = puVar4[7];
          puVar4[7] = lVar9;
          _objc_release(uVar5);
        }
        if (plStack_58 != (long *)0x0) {
          plVar6 = plStack_58 + 1;
          do {
            lVar9 = *plVar6;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *plVar6 = lVar9 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*plStack_58 + 0x10))(plStack_58);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
          }
        }
      }
      lVar9 = *(long *)(*(long *)*param_4 + 0x10);
      uVar5 = *(undefined8 *)(*(long *)*param_4 + 0x18);
      __ZNSt3__115recursive_mutex4lockEv(uVar5);
      uVar10 = *(undefined8 *)(lVar9 + 0x28);
      _objc_retain(uVar10);
      uVar7 = puVar4[6];
      puVar4[6] = uVar10;
      _objc_release(uVar7);
      __ZNSt3__115recursive_mutex6unlockEv(uVar5);
    }
    _objc_retain(param_5);
    uVar5 = puVar4[10];
    puVar4[10] = param_5;
    _objc_release(uVar5);
  }
  _objc_release(param_5);
  return puVar4;
}



/* Entry: 10ade255c; end: 10ade25b7;  */

void FUN_10ade255c(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
      return;
    }
  }
  return;
}



/* Entry: 10ade25b8; end: 10ade28ab; -[LSATexture dealloc] */

void FUN_10ade25b8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  undefined8 uStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  char *pcStack_e8;
  undefined8 uStack_e0;
  long *plStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  char *pcStack_a8;
  undefined8 uStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  char *pcStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  
  uStack_90 = 0;
  uStack_80 = 0x4012000000;
  pcStack_78 = FUN_10ade28ac;
  uStack_70 = 0x10ade28bc;
  pcStack_68 = "";
  plStack_58 = *(long **)(param_1 + 0x20);
  uStack_60 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  uStack_d0 = 0;
  uStack_c0 = 0x4012000000;
  uStack_b8 = 0x10ade28c4;
  uStack_b0 = 0x10ade28d4;
  pcStack_a8 = "";
  plStack_98 = *(long **)(param_1 + 0x10);
  uStack_a0 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  uStack_110 = 0;
  uStack_100 = 0x4012000000;
  uStack_f8 = 0x10ade28dc;
  uStack_f0 = 0x10ade28ec;
  pcStack_e8 = "";
  plStack_d8 = *(long **)(param_1 + 0x48);
  uStack_e0 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  uStack_140 = 0;
  uStack_130 = 0x3032000000;
  uStack_128 = 0x10ade28f4;
  uStack_120 = 0x10ade2904;
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  puStack_138 = &uStack_140;
  puStack_108 = &uStack_110;
  puStack_c8 = &uStack_d0;
  puStack_88 = &uStack_90;
  _objc_retain(uVar7);
  uVar5 = *(undefined8 *)(param_1 + 0x50);
  uStack_118 = uVar7;
  func_0x00010c11de00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puStack_180 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_178 = 0xc2000000;
  pcStack_170 = FUN_10ade290c;
  puStack_168 = &UNK_110c759a0;
  puStack_160 = &uStack_140;
  puStack_158 = &uStack_90;
  puStack_150 = &uStack_d0;
  puStack_148 = &uStack_110;
  func_0x000107c27d8c();
  _objc_release(uVar5);
  __Block_object_dispose(&uStack_140,8);
  _objc_release(uStack_118);
  __Block_object_dispose(&uStack_110,8);
  plVar4 = plStack_d8;
  if (plStack_d8 != (long *)0x0) {
    plVar1 = plStack_d8 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  __Block_object_dispose(&uStack_d0,8);
  plVar4 = plStack_98;
  if (plStack_98 != (long *)0x0) {
    plVar1 = plStack_98 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  __Block_object_dispose(&uStack_90,8);
  plVar4 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  puStack_188 = PTR_PTR_1127014f0;
  lStack_190 = param_1;
  _objc_msgSendSuper2(&lStack_190,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10ade28ac; end: 10ade290b;  */

void FUN_10ade28ac(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  return;
}



/* Entry: 10ade290c; end: 10ade2a17;  */

void FUN_10ade290c(long param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  
  puVar4 = PTR__OBJC_CLASS___EAGLContext_1126d34e8;
  func_0x00010bf5e500(PTR__OBJC_CLASS___EAGLContext_1126d34e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c187140(PTR__OBJC_CLASS___EAGLContext_1126d34e8,param_2,
                      *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28));
  FUN_10ade255c(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x30);
  lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  plVar6 = *(long **)(lVar5 + 0x38);
  *(undefined8 *)(lVar5 + 0x30) = 0;
  *(undefined8 *)(lVar5 + 0x38) = 0;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  lVar5 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  plVar6 = *(long **)(lVar5 + 0x38);
  *(undefined8 *)(lVar5 + 0x30) = 0;
  *(undefined8 *)(lVar5 + 0x38) = 0;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  func_0x00010c187140(PTR__OBJC_CLASS___EAGLContext_1126d34e8,param_2,puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



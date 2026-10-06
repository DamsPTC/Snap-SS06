/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10599e2a8; end: 10599e32f;  */

long FUN_10599e2a8(long param_1)

{
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 10599e330; end: 10599e397;  */

undefined8 * FUN_10599e330(undefined8 *param_1,undefined8 param_2,long param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_1108c9350;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  param_3 = param_3 + 0x10;
  func_0x0001002a0e60(param_3,param_2);
  param_1[2] = param_3;
  *(undefined4 *)(param_1 + 3) = 0;
  return param_1;
}



/* Entry: 10599e398; end: 10599e3c7;  */

long FUN_10599e398(long param_1)

{
  func_0x0001001a3db4(param_1 + 8);
  func_0x000100067de0(param_1 + 0x10);
  return param_1;
}



/* Entry: 10599e3c8; end: 10599e3cb;  */

long FUN_10599e3c8(long param_1)

{
  func_0x0001001a3db4(param_1 + 8);
  func_0x000100067de0(param_1 + 0x10);
  return param_1;
}



/* Entry: 10599e3cc; end: 10599e3df;  */

void FUN_10599e3cc(void)

{
  FUN_10599e398();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10599e3e0; end: 10599e3eb;  */

undefined ** FUN_10599e3e0(void)

{
  return &PTR_DAT_1108c9390;
}



/* Entry: 10599e3ec; end: 10599e50b;  */

void FUN_10599e3ec(long param_1)

{
  ulong *puVar1;
  
  func_0x00010029b2d4(param_1 + 0x10);
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 10599e50c; end: 10599e50f;  */

void FUN_10599e50c(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x0001001a53d4(param_1 + 0x10,uVar1,uVar2);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10599e510; end: 10599e5b7;  */

void FUN_10599e510(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x0001001a53d4(param_1 + 0x10,uVar1,uVar2);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10599e5b8; end: 10599e5c7;  */

void FUN_10599e5b8(undefined8 param_1,long param_2)

{
  undefined8 extraout_x8;
  
  if (param_2 == 0) {
    param_2 = 0x20;
    __Znwm();
  }
  else {
    func_0x000105980108();
  }
  func_0x0001059800c8(&UNK_1108c9340);
  *(undefined8 *)(param_2 + 0x10) = extraout_x8;
  *(undefined4 *)(param_2 + 0x18) = 0;
  return;
}



/* Entry: 10599e5c8; end: 10599e6b3;  */

void FUN_10599e5c8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf05fe0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001008fe838();
  func_0x00010c0df6e0(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10599e6b4; end: 10599e70f;  */

long FUN_10599e6b4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdddc40();
  _objc_release(param_2);
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 10599e710; end: 10599e7c7;  */

void FUN_10599e710(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010c292820(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c247520(param_2);
  func_0x00010bf3d300(param_2);
  uVar2 = param_2;
  func_0x00010bf440c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bec08a0(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10599e7c8; end: 10599ea53; -[SCNotificationPluginWorkflow _processNotificationPostNativeProcessing:] */

void FUN_10599e7c8(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  uVar3 = param_3;
  func_0x00010c0dbb80(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be90100(param_1,param_2,uVar3);
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010c0dbb80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c247520();
  if (uVar1 == 3) {
    uVar2 = *(ulong *)(param_1 + 0x78);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010bf1f3c0();
    _objc_release(uVar2);
    _objc_release(uVar3);
    if ((uVar1 & 1) == 0) {
      uVar3 = *(ulong *)(param_1 + 0x40);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = param_3;
      func_0x00010c0dbb80(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_3;
      func_0x00010c0d5840(param_3);
      func_0x00010beedb60(uVar3,param_2,uVar1,uVar2);
      _objc_release(uVar1);
      goto LAB_10599e8ac;
    }
  }
  else {
LAB_10599e8ac:
    _objc_release(uVar3);
  }
  uVar3 = param_3;
  func_0x00010c0dbb80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c247520();
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010c0dbb80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c247520();
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010bf43fe0(param_3);
  _objc_retainAutoreleasedReturnValue();
  if ((uVar1 == 7) || (uVar2 == 8)) {
    _objc_release(uVar3);
    uVar3 = 0;
  }
  uVar1 = param_3;
  func_0x00010c13ca20();
  puVar5 = PTR_PTR_1126c0860;
  uVar2 = param_3;
  if (7 < uVar1) {
LAB_10599ea2c:
    func_0x00010c0dbb80(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be01f40(param_1,param_2,uVar2,uVar3);
    goto LAB_10599e9d8;
  }
  if ((1L << (uVar1 & 0x3f) & 0x72U) == 0) {
    if ((1L << (uVar1 & 0x3f) & 0x88U) == 0) {
      if (uVar1 != 2) goto LAB_10599ea2c;
      func_0x00010c0dbb80(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = 2;
      goto LAB_10599e970;
    }
    uVar1 = param_3;
    func_0x00010c13ca20(param_3);
    func_0x00010c2723a0(puVar5,param_2,uVar1);
    func_0x00010c0dbb80(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0;
  }
  else {
    func_0x00010c0dbb80(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 1;
LAB_10599e970:
    puVar5 = (undefined *)0x0;
  }
  func_0x00010be2ca40(param_1,param_2,uVar2,uVar4,puVar5,uVar3);
LAB_10599e9d8:
  _objc_release(uVar2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10599ea54; end: 10599eb07; -[SCNotificationPluginWorkflow _handleNativeNotification:displayTypeFromNative:nativeSuppressionReason:completion:] */

void FUN_10599ea54(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_6);
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c247520();
  uVar1 = param_6;
  if (1 < uVar2) {
    uVar1 = 0;
  }
  uVar2 = param_3;
  func_0x00010c292820(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c247520(param_3);
  _objc_release(param_3);
  func_0x00010be81a80(param_1,param_2,uVar2,uVar3,param_4,param_5,uVar1);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10599eb08; end: 10599ec0b; -[SCNotificationPluginWorkflow _discardNativeNotification:completion:] */

void FUN_10599eb08(undefined8 param_1,undefined8 param_2,undefined **param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  ppuVar2 = param_3;
  func_0x00010c247520();
  uVar1 = param_4;
  if ((undefined **)0x1 < ppuVar2) {
    uVar1 = 0;
  }
  ppuVar3 = param_3;
  func_0x00010c11c460();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = &PTR____CFConstantStringClassReference_110db54d8;
  if (ppuVar3 != (undefined **)0x0) {
    ppuVar2 = ppuVar3;
  }
  ppuVar4 = param_3;
  func_0x00010c0dc140(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be3d0e0(param_1,param_2,1,ppuVar2,ppuVar4,uVar1);
  _objc_release(param_4);
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  ppuVar2 = param_3;
  func_0x00010c292820(param_3);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = param_3;
  func_0x00010c247520(param_3);
  _objc_release(param_3);
  func_0x00010bec9060(param_1,param_2,ppuVar2,ppuVar3,0xd);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar2);
  return;
}



/* Entry: 10599ec0c; end: 10599ed4f; -[SCNotificationPluginWorkflow _checkIfUserIdMatches:] */

ulong FUN_10599ec0c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  _objc_release(uVar1);
  uVar1 = 0;
  if (uVar2 != 0) {
    uVar1 = param_3;
    func_0x00010c292820();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c293740(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    uVar1 = uVar2;
    func_0x00010c0720c0(uVar2,param_2,uVar4);
    if ((uVar1 & 1) == 0) {
      uVar5 = param_3;
      func_0x00010c292820(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be90660(param_1,param_2,uVar6);
      _objc_release(uVar6);
      _objc_release(uVar5);
    }
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 10599ed50; end: 10599ef2f; -[SCNotificationPluginWorkflow _startNotificationProcessing:source:clientReceiveTimestampMs:systemCompletionHandler:] */

void FUN_10599ed50(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c133980(*(undefined8 *)(param_1 + 0x58));
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf79700();
  _objc_release(uVar3);
  uVar4 = *(ulong *)(param_1 + 0x78);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf1f3c0();
  _objc_release(uVar4);
  if ((uVar5 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beedb80();
    _objc_release(uVar3);
  }
  uVar5 = param_1;
  func_0x00010be42280();
  if ((uVar5 & 1) == 0) {
    puVar7 = PTR_PTR_1126c0868;
    _objc_alloc(PTR_PTR_1126c0868);
    func_0x00010c0003e0();
    func_0x00010be3d0e0(param_1);
  }
  else {
    puVar7 = PTR_PTR_1126b1370;
    _objc_alloc(PTR_PTR_1126b1370);
    func_0x00010c030320();
    func_0x00010c0dc880(*(undefined8 *)(param_1 + 0x60));
    uVar3 = *(undefined8 *)(param_1 + 0x70);
    puVar6 = puVar7;
    func_0x00010c11c420(puVar7);
    func_0x0001070c2188(uVar3,puVar6);
    if ((int)uVar3 != 0) {
      func_0x00010c26a060(puVar7);
      func_0x00010bebf880(param_1);
    }
  }
  _objc_release(puVar7);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10599ef30; end: 10599f0df; -[SCNotificationPluginWorkflow _processNotificationWithPluginForNotification:source:displayTypeFromNative:nativeSuppressionReason:completion:] */

void FUN_10599ef30(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_7);
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60();
  _objc_release(uVar1);
  _objc_initWeak(auStack_68,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_88,auStack_68);
  _objc_retain(param_3);
  uStack_80 = param_4;
  uStack_78 = param_5;
  uStack_70 = param_6;
  _objc_retain(param_7);
  func_0x00010c101c00(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(param_7);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_7);
  _objc_release(param_3);
  return;
}



/* Entry: 10599f0e0; end: 10599f13b;  */

void FUN_10599f0e0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2cfe0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10599f13c; end: 10599f223; -[SCNotificationPluginWorkflow _instrumentWrappedSystemCompletionHandler:notificationType:notificationId:completion:] */

void FUN_10599f13c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_6);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10599f224;
  puStack_58 = &UNK_110848c48;
  uStack_50 = param_6;
  uStack_48 = param_3;
  _objc_retain(param_6);
  func_0x00010bf73ec0(uVar1,param_2,param_5,param_4,&puStack_70);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(uVar1);
  _objc_release(uStack_50);
  _objc_release(param_6);
  return;
}



/* Entry: 10599f224; end: 10599f23b;  */

void FUN_10599f224(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + 0x20),PTR_s_complete__1125ae770,*(undefined8 *)(param_1 + 0x28));
    return;
  }
  return;
}



/* Entry: 10599f23c; end: 10599f69f; -[SCNotificationPluginWorkflow _handleNotificationWithPlugin:userInfo:source:displayTypeFromNative:nativeSuppressionReason:completion:] */

void FUN_10599f23c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined1 auStack_190 [8];
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 auStack_140 [8];
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined8 *puStack_f8;
  undefined1 auStack_f0 [8];
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_8);
  uVar2 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    func_0x00010be8fd20(param_1);
    func_0x00010be3d0e0(param_1);
  }
  else {
    puVar4 = PTR_PTR_1126c0870;
    _objc_alloc();
    uVar5 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bc60();
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0;
    uStack_88 = 0x2020000000;
    uStack_80 = 1;
    puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e0 = 0xc2000000;
    pcStack_d8 = FUN_10599f6a0;
    puStack_d0 = &UNK_1108c94e8;
    puStack_90 = &uStack_98;
    _objc_retain(puVar4);
    puStack_c8 = puVar4;
    uStack_c0 = param_1;
    puStack_a0 = &uStack_98;
    _objc_retain(uVar2);
    uStack_b8 = uVar2;
    _objc_retain(uVar3);
    uStack_b0 = uVar3;
    _objc_retain(param_8);
    ppuVar9 = &puStack_e8;
    uStack_a8 = param_8;
    _objc_retainBlock(ppuVar9);
    puVar10 = PTR_PTR_1126c0878;
    _objc_alloc();
    func_0x00010c000460(0x403db33333333333);
    func_0x00010c24d960();
    _objc_initWeak(auStack_f0,param_1);
    puStack_120 = puVar1;
    uStack_118 = 0xc2000000;
    uStack_110 = 0x10599f6bc;
    puStack_108 = &UNK_110881c40;
    puStack_f8 = &uStack_98;
    _objc_retain(puVar10);
    puVar11 = PTR_PTR_1126c0880;
    puStack_100 = puVar10;
    _objc_alloc(PTR_PTR_1126c0880);
    puStack_170 = puVar1;
    uStack_168 = 0xc2000000;
    pcStack_160 = FUN_10599f6d0;
    puStack_158 = &UNK_1108c9518;
    _objc_copyWeak(auStack_140,auStack_f0);
    _objc_retain(uVar3);
    uStack_150 = uVar3;
    _objc_retain(param_4);
    uStack_188 = param_6;
    uStack_180 = param_7;
    uStack_148 = param_4;
    uStack_138 = param_5;
    uStack_130 = param_6;
    uStack_128 = param_7;
    _objc_copyWeak(auStack_190,auStack_f0);
    _objc_retain(param_4);
    uStack_178 = param_5;
    func_0x00010c00d240(puVar11);
    func_0x00010bf793a0(param_3);
    _objc_release(puVar11);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_190);
    _objc_release(uStack_148);
    _objc_release(uStack_150);
    _objc_destroyWeak(auStack_140);
    _objc_release(puStack_100);
    _objc_destroyWeak(auStack_f0);
    _objc_release(puVar10);
    _objc_release(ppuVar9);
    _objc_release(uStack_a8);
    _objc_release(uStack_b0);
    _objc_release(uStack_b8);
    _objc_release(puStack_c8);
    __Block_object_dispose(&uStack_98,8);
    _objc_release(puVar4);
  }
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_8);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10599f6a0; end: 10599f6cf;  */

void FUN_10599f6a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s__instrumentWrappedSystemCompleti_11256cdd8,
             *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x18),
             *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
             *(undefined8 *)(param_1 + 0x40));
  return;
}



/* Entry: 10599f6d0; end: 10599f77f;  */

void FUN_10599f6d0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be04aa0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10599f780; end: 10599f8ab; -[SCNotificationPluginWorkflow _displayNotificationMaybe:notificationId:userInfo:source:displayTypeFromNative:nativeSuppressionReason:] */

void FUN_10599f780(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_7 != 0) {
    uVar2 = param_5;
    func_0x00010c0e00e0(param_5,param_2,&PTR____CFConstantStringClassReference_110f9ea98);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010be424c0(param_1,param_2,param_4,uVar2,param_6);
    _objc_release(uVar2);
    if ((int)lVar1 == 0) {
      func_0x00010c1339e0(*(undefined8 *)(param_1 + 0x58),param_2,param_5,param_6);
      uVar2 = *(undefined8 *)(param_1 + 0x48);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25ed80();
      _objc_release(uVar2);
      goto LAB_10599f880;
    }
    param_8 = 2;
  }
  func_0x00010bec9060(param_1,param_2,param_5,param_6,param_8);
LAB_10599f880:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10599f8ac; end: 10599f937; -[SCNotificationPluginWorkflow _suppressNotification:source:platformSuppressingReason:] */

void FUN_10599f8ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(param_3);
  func_0x00010c133900(uVar2,param_2,param_3,param_4);
  puVar1 = PTR_PTR_1126b1370;
  _objc_alloc(PTR_PTR_1126b1370);
  func_0x00010c030320();
  _objc_release(param_3);
  func_0x00010be07fe0(param_1,param_2,puVar1,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10599f938; end: 10599f9ef; -[SCNotificationPluginWorkflow _isNotificationAlreadyProcessed:forUserId:pushSource:] */

undefined8
FUN_10599f938(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_5 == 8) {
    uVar3 = 0;
    goto LAB_10599f9cc;
  }
  uVar3 = 0;
  if ((param_3 == 0) || (param_4 == 0)) goto LAB_10599f9cc;
  puVar1 = PTR_PTR_1126c0888;
  _objc_alloc();
  func_0x00010c05ac00();
  if (puVar1 == (undefined *)0x0) {
LAB_10599f9c0:
    uVar3 = 0;
  }
  else {
    puVar2 = puVar1;
    func_0x00010c0dc6a0(puVar1,param_2,param_3);
    if (((ulong)puVar2 & 1) == 0) {
      func_0x00010c14abc0(puVar1,param_2,param_3);
      goto LAB_10599f9c0;
    }
    uVar3 = 1;
  }
  _objc_release(puVar1);
LAB_10599f9cc:
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 10599f9f0; end: 10599fa0f; -[SCNotificationPluginWorkflow _isNativeHandlerInitialized] */

bool FUN_10599f9f0(long param_1)

{
  if (*(long *)(param_1 + 0x60) != 0) {
    return *(long *)(param_1 + 0x68) != 0;
  }
  return false;
}



/* Entry: 10599fa10; end: 10599faa3; -[SCNotificationPluginWorkflow _emitNotificationIsSuppressedEvent:suppressionReason:] */

void FUN_10599fa10(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126b6b90;
  if (param_3 != 0) {
    lVar2 = *(long *)(param_1 + 0x10);
    _objc_retain(param_3);
    func_0x00010bf07b60(lVar2);
    func_0x00010c0dc1e0(puVar1,param_2,param_3,lVar2 == 0,param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x18),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 10599faa4; end: 10599fbab; -[SCNotificationPluginWorkflow _startBackgroundTaskForNotificationProcessing:] */

void FUN_10599faa4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  ppuVar3 = &puStack_70;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf17d00();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10599fbac;
  puStack_58 = &UNK_1108c9578;
  uStack_50 = uVar1;
  uStack_48 = uVar2;
  _objc_retain(uVar1);
  _objc_retainBlock(&puStack_70);
  puVar4 = PTR_PTR_1126c0890;
  _objc_alloc(PTR_PTR_1126c0890);
  func_0x00010c050c20();
  puVar5 = PTR_PTR_1126b6b48;
  func_0x00010c26a940(PTR_PTR_1126b6b48,param_2,puVar4,ppuVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x28),param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(ppuVar3);
  _objc_release(uStack_50);
  _objc_release(uVar1);
  return;
}



/* Entry: 10599fbac; end: 10599fbb7;  */

void FUN_10599fbac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf94270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_endBackgroundTask__1125c2a40,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10599fbb8; end: 10599fc7b; -[SCNotificationPluginWorkflow _reportMissingPluginWithNotificationType:] */

void FUN_10599fbb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b7a20;
  _objc_retain(param_3);
  func_0x00010c0cec00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0dcc40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10599fc7c; end: 10599fd3f; -[SCNotificationPluginWorkflow _reportWrongUser:] */

void FUN_10599fc7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b7a20;
  _objc_retain(param_3);
  func_0x00010c2be7e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0dcc40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10599fd40; end: 10599fe4f; -[SCNotificationPluginWorkflow _reportProcessingPathGraphene:] */

void FUN_10599fd40(long param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar2 = PTR_PTR_1126b7a20;
  _objc_retain(param_3);
  func_0x00010c115960(puVar2);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = param_3;
  func_0x00010c11c460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  ppuVar1 = &PTR____CFConstantStringClassReference_110e0a478;
  if (ppuVar3 != (undefined **)0x0) {
    ppuVar1 = ppuVar3;
  }
  puVar4 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110dad058,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar3);
  puVar2 = puVar4;
  func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110dbfab8,
                      &PTR____CFConstantStringClassReference_110e12598);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c0dcc40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar6);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10599fe50; end: 10599ff5b; -[SCNotificationPluginWorkflow .cxx_destruct] */

void FUN_10599fe50(long param_1)

{
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



/* Entry: 10599ff5c; end: 1059a005b; -[SCNotificationPluginWorkflowEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10599ff5c(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lStack_40;
  undefined *puStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272ca4c);
  *(undefined8 *)(param_1 + _DAT_11272ca4c) = 0;
  _objc_release(uVar1);
  uVar2 = param_1 + _DAT_11272ca24;
  _objc_loadWeakRetained();
  uVar3 = uVar2;
  func_0x00010c11c220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126ae820;
  _objc_opt_class(PTR_PTR_1126ae820);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar2 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar3);
  puVar4 = PTR_PTR_1126c08a0;
  _objc_alloc(PTR_PTR_1126c08a0);
  func_0x00010c05c460();
  func_0x00010c0d9840(uVar2);
  _objc_release(uVar2);
  _objc_release(puVar4);
  puStack_38 = PTR_PTR_1126eb1c0;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1059a005c; end: 1059a013b; -[SCNotificationPluginWorkflowEntryPoint _pluginManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1059a005c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  uVar4 = *(undefined8 *)(param_1 + _DAT_11272ca50);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1059a0188;
  puStack_40 = &UNK_110846660;
  puStack_38 = puVar1;
  _objc_retain();
  func_0x00010bf9d5c0(uVar4,param_2,&PTR___NSConcreteGlobalBlock_1108c95f8,&puStack_58);
  puVar2 = PTR_PTR_1126c08b0;
  _objc_alloc(PTR_PTR_1126c08b0);
  puVar3 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c037660(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puStack_38);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1059a013c; end: 1059a0187;  */

void FUN_1059a013c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c08a8;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c037380();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1059a0188; end: 1059a0193;  */

void FUN_1059a0188(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,param_2);
  return;
}



/* Entry: 1059a0194; end: 1059a025b; -[SCNotificationPluginWorkflowEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1059a0194(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272ca50,0);
  _objc_destroyWeak(param_1 + _DAT_11272ca40);
  _objc_destroyWeak(param_1 + _DAT_11272ca48);
  _objc_destroyWeak(param_1 + _DAT_11272ca44);
  _objc_destroyWeak(param_1 + _DAT_11272ca3c);
  _objc_destroyWeak(param_1 + _DAT_11272ca38);
  _objc_destroyWeak(param_1 + _DAT_11272ca30);
  _objc_destroyWeak(param_1 + _DAT_11272ca28);
  _objc_destroyWeak(param_1 + _DAT_11272ca34);
  _objc_destroyWeak(param_1 + _DAT_11272ca24);
  _objc_destroyWeak(param_1 + _DAT_11272ca2c);
  _objc_storeStrong(param_1 + _DAT_11272ca20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272ca4c,0);
  return;
}



/* Entry: 1059a025c; end: 1059a0383; -[SCNotificationTypeProcessingPluginManager initWithPlugins:] */

undefined8 * FUN_1059a025c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_1126eb1c8;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_58,puVar1);
    uVar2 = puVar1[1];
    puVar3 = auStack_60;
    _objc_copyWeak(puVar3,auStack_58);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297280(uVar2);
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1059a0384; end: 1059a03cb;  */

void FUN_1059a0384(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be81d60();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059a03cc; end: 1059a04fb; -[SCNotificationTypeProcessingPluginManager pluginForNotificationType:isSDN:completion:] */

void FUN_1059a03cc(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_3);
  uVar1 = param_5;
  uStack_50 = param_4;
  _objc_retain(param_5);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297280(uVar2);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1059a04fc; end: 1059a0533;  */

void FUN_1059a04fc(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be75480();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059a0534; end: 1059a058b; -[SCNotificationTypeProcessingPluginManager _processPlugins:] */

void FUN_1059a0534(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010050471c();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1059a058c; end: 1059a0593;  */

void FUN_1059a058c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe5ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_identifier_1125d7178);
  return;
}



/* Entry: 1059a0594; end: 1059a05bb;  */

void FUN_1059a0594(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1059a05bc; end: 1059a0773; -[SCNotificationTypeProcessingPluginManager _pluginForNotificationType:isSDN:completion:] */

void FUN_1059a05bc(long param_1,undefined8 param_2,ulong param_3,ulong param_4,long param_5)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (param_5 == 0) goto LAB_1059a0748;
  if ((param_4 & 1) == 0) {
    puVar4 = PTR_PTR_1126b1370;
    func_0x00010c25d500(PTR_PTR_1126b1370);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x00010c0720c0();
    if ((int)uVar1 != 0) {
      _objc_release(puVar4);
      ppuVar5 = &PTR_PTR_1108c96c8;
      goto LAB_1059a0704;
    }
    puVar2 = PTR_PTR_1126b1370;
    func_0x00010c25d500(PTR_PTR_1126b1370);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x00010c0720c0();
    _objc_release(puVar2);
    _objc_release(puVar4);
    ppuVar5 = &PTR_PTR_1108c96c8;
    if ((uVar1 & 1) != 0) goto LAB_1059a0704;
    puVar4 = PTR_PTR_1126b1370;
    func_0x00010c25d500(PTR_PTR_1126b1370);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x00010c0720c0();
    _objc_release(puVar4);
    if ((uVar1 & 1) != 0) {
      ppuVar5 = &PTR_PTR_1108c96d8;
      goto LAB_1059a0704;
    }
    puVar4 = PTR_PTR_1126b1370;
    func_0x00010c25d500(PTR_PTR_1126b1370);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x00010c0720c0();
    _objc_release(puVar4);
    if ((int)uVar1 != 0) {
      ppuVar5 = &PTR_PTR_1108c96e0;
      goto LAB_1059a0704;
    }
    puVar4 = (undefined *)0x0;
  }
  else {
    ppuVar5 = &PTR_PTR_1108c96d0;
LAB_1059a0704:
    puVar4 = *ppuVar5;
    _objc_retain(puVar4);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0e00e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_5 + 0x10))(param_5,uVar3);
  _objc_release(uVar3);
  _objc_release(puVar4);
LAB_1059a0748:
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1059a0774; end: 1059a07a3; -[SCNotificationTypeProcessingPluginManager .cxx_destruct] */

void FUN_1059a0774(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1059a07a4; end: 1059a0817; -[SCNotificationTypeProcessingPluginScope initWithPlugInRegistry:] */

undefined1 * FUN_1059a07a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126eb1d0;
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



/* Entry: 1059a0818; end: 1059a081f; -[SCNotificationTypeProcessingPluginScope plugInRegistry] */

undefined8 FUN_1059a0818(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1059a0820; end: 1059a082b; -[SCNotificationTypeProcessingPluginScope .cxx_destruct] */

void FUN_1059a0820(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1059a082c; end: 1059a08d7; -[SCNotificationTypeProcessingCallback initWithDisplayCallback:suppressCallback:] */

undefined1 *
FUN_1059a082c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126eb1d8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1059a08d8; end: 1059a08e7; -[SCNotificationTypeProcessingCallback onDisplay:] */

void FUN_1059a08d8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001059a08e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(*(long *)(param_1 + 8),param_3);
  return;
}



/* Entry: 1059a08e8; end: 1059a08f7; -[SCNotificationTypeProcessingCallback onSuppressNotification:] */

void FUN_1059a08e8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001059a08f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x10) + 0x10))(*(long *)(param_1 + 0x10),param_3);
  return;
}



/* Entry: 1059a08f8; end: 1059a0927; -[SCNotificationTypeProcessingCallback .cxx_destruct] */

void FUN_1059a08f8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1059a0928; end: 1059a0a6f; -[SCIncomingNotification initWithIdentifier:type:title:subTitle:notificationSource:userInfo:] */

undefined1 *
FUN_1059a0928(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126eb1e0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
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
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1059a0a70; end: 1059a0a93; -[SCIncomingNotification copyWithZone:] */

undefined8 FUN_1059a0a70(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1059a0a94; end: 1059a0b2f; -[SCIncomingNotification hash] */

undefined8 * FUN_1059a0a94(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uStack_38 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  puVar3 = &uStack_58;
  uStack_30 = uVar1;
  func_0x000100505190(puVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_1059a0c08:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_1059a0c14;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (puVar3[5] == param_3[5])) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[3];
          if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = puVar3[4];
            if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              puVar6 = (undefined8 *)puVar3[6];
              if (puVar6 != (undefined8 *)param_3[6]) {
                func_0x00010c071ae0();
                goto LAB_1059a0c14;
              }
              goto LAB_1059a0c08;
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_1059a0c14:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 1059a0b30; end: 1059a0c2f; -[SCIncomingNotification isEqual:] */

long FUN_1059a0b30(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1059a0c08:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1059a0c14;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if (lVar3 != *(long *)(param_3 + 0x30)) {
                func_0x00010c071ae0();
                goto LAB_1059a0c14;
              }
              goto LAB_1059a0c08;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_1059a0c14:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1059a0c30; end: 1059a0c37; -[SCIncomingNotification identifier] */

undefined8 FUN_1059a0c30(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1059a0c38; end: 1059a0c3f; -[SCIncomingNotification type] */

undefined8 FUN_1059a0c38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1059a0c40; end: 1059a0c47; -[SCIncomingNotification title] */

undefined8 FUN_1059a0c40(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1059a0c48; end: 1059a0c4f; -[SCIncomingNotification subTitle] */

undefined8 FUN_1059a0c48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1059a0c50; end: 1059a0c57; -[SCIncomingNotification notificationSource] */

undefined8 FUN_1059a0c50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1059a0c58; end: 1059a0c5f; -[SCIncomingNotification userInfo] */

undefined8 FUN_1059a0c58(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1059a0c60; end: 1059a0cb3; -[SCIncomingNotification .cxx_destruct] */

void FUN_1059a0c60(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1059a0cb4; end: 1059a0d27; -[SCIncomingNotificationReporter reportPushReceived:] */

void FUN_1059a0cb4(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be90740(param_1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    puVar2 = PTR_PTR_1126b7a20;
    func_0x00010c11c2c0(PTR_PTR_1126b7a20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c132a00(param_1,param_2,param_3,puVar2);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1059a0d28; end: 1059a0d93; -[SCIncomingNotificationReporter reportPushReceived:source:] */

void FUN_1059a0d28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b1370;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c030320();
  _objc_release(param_3);
  func_0x00010c133960(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1059a0d94; end: 1059a0dfb; -[SCIncomingNotificationReporter reportQueuedToDisplay:] */

void FUN_1059a0d94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b7a20;
  _objc_retain(param_3);
  func_0x00010c11e180(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c132a00(param_1,param_2,param_3,puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1059a0dfc; end: 1059a0e67; -[SCIncomingNotificationReporter reportQueuedToDisplay:source:] */

void FUN_1059a0dfc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b1370;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c030320();
  _objc_release(param_3);
  func_0x00010c1339c0(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1059a0e68; end: 1059a0ecf; -[SCIncomingNotificationReporter reportPushDisplayed:] */

void FUN_1059a0e68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b7a20;
  _objc_retain(param_3);
  func_0x00010bf868a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c132a00(param_1,param_2,param_3,puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1059a0ed0; end: 1059a102b; -[SCIncomingNotificationReporter detectAndReportWatchStatusAsync:] */

void FUN_1059a0ed0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf07b60();
  lVar2 = param_1;
  func_0x00010be40900();
  _objc_release(lVar1);
  if ((int)lVar2 != 0) {
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc(PTR_PTR_1126ae790);
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520(puVar3);
    _objc_release(puVar4);
    _objc_initWeak(auStack_38,param_1);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    func_0x00010c0f7fc0(puVar3);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
    _objc_release(puVar3);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1059a102c; end: 1059a10a7;  */

void FUN_1059a102c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c13f080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be90620(lVar2,param_2,uVar1,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1059a10a8; end: 1059a110f; -[SCIncomingNotificationReporter reportPushDisplayDropped:] */

void FUN_1059a10a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b7a20;
  _objc_retain(param_3);
  func_0x00010bf85620(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c132a00(param_1,param_2,param_3,puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1059a1110; end: 1059a117b; -[SCIncomingNotificationReporter reportPushDisplayDropped:source:] */

void FUN_1059a1110(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b1370;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c030320();
  _objc_release(param_3);
  func_0x00010c1338e0(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1059a117c; end: 1059a1273; -[SCIncomingNotificationReporter reportPushNotificationDisplayedWithoutNseExecution:] */

void FUN_1059a117c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126b7a20;
  _objc_retain(param_3);
  func_0x00010c11c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b1370;
  uVar2 = param_3;
  func_0x00010c11c420(param_3);
  _objc_release(param_3);
  func_0x00010c25d500(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dad058,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010c0dcc40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 1059a1274; end: 1059a12db; -[SCIncomingNotificationReporter reportMainAppDecryptionNotAttemptedForNotification:] */

void FUN_1059a1274(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b7a20;
  _objc_retain(param_3);
  func_0x00010bf678e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c132a00(param_1,param_2,param_3,puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1059a12dc; end: 1059a138f; -[SCIncomingNotificationReporter reportMainAppDecryptionSuccessWithLatencyInMs:forNotification:] */

void FUN_1059a12dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b7a20;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf67940(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c132a00(param_1,param_2,param_4,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126b7a20;
  func_0x00010bf67960(PTR_PTR_1126b7a20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be90500(param_1,param_2,param_4,param_3,puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1059a1390; end: 1059a1483; -[SCIncomingNotificationReporter reportMainAppDecryptionFailureWithErrorMessage:latencyInMs:forNotification:] */

void FUN_1059a1390(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b7a20;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf67840(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  func_0x00010c132a00(param_1,param_2,param_5,puVar2);
  puVar1 = PTR_PTR_1126b7a20;
  func_0x00010bf67860(PTR_PTR_1126b7a20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be90500(param_1,param_2,param_5,param_4,puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1059a1484; end: 1059a1547; -[SCIncomingNotificationReporter reportNotifClearedOnAppOpen:] */

void FUN_1059a1484(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b7a20;
  _objc_retain(param_3);
  func_0x00010bf05c40(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0dcc40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1059a1548; end: 1059a1637; -[SCIncomingNotificationReporter reportCounter:withMetricId:] */

void FUN_1059a1548(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010be57b60(param_1,param_2,param_3,param_4);
  lVar1 = param_3;
  func_0x00010c247520();
  if (lVar1 != 2) {
    lVar1 = param_1;
    func_0x00010bdc7920(param_1,param_2,param_4,param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bdc5e00(param_1,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0dcc40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(lVar2);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1059a1638; end: 1059a170b; -[SCIncomingNotificationReporter _reportTimer:durationInMs:withMetric:] */

void FUN_1059a1638(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010be57b60(param_1,param_2,param_3,param_5);
  lVar1 = param_3;
  func_0x00010c247520();
  _objc_release(param_3);
  if (lVar1 != 2) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0dcc40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_4;
    func_0x00010c0b4ca0(param_4);
    func_0x00010befbfe0(uVar3,param_2,param_5,uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1059a170c; end: 1059a1773; -[SCIncomingNotificationReporter _reportWatchStatus:watchStatus:] */

void FUN_1059a170c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c133fc0(param_1,param_2,param_3,param_4);
  func_0x00010c133fa0(param_1,param_2,param_3,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1059a1774; end: 1059a188b; -[SCIncomingNotificationReporter reportWatchPairStatus:watchStatus:] */

void FUN_1059a1774(undefined *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b7a20;
  func_0x00010c2a27e0(PTR_PTR_1126b7a20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be57b80(param_1,param_2,param_3,puVar1,param_4);
  lVar2 = param_3;
  func_0x00010c247520();
  if (lVar2 != 2) {
    puVar3 = param_1;
    func_0x00010bdc7920(param_1,param_2,puVar1,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = param_1;
    func_0x00010bdc9060(param_1,param_2,puVar3,param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0dcc40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0();
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1059a188c; end: 1059a19a3; -[SCIncomingNotificationReporter reportWatchAppInstallStatus:watchStatus:] */

void FUN_1059a188c(undefined *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b7a20;
  func_0x00010c2a2700(PTR_PTR_1126b7a20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be57b80(param_1,param_2,param_3,puVar1,param_4);
  lVar2 = param_3;
  func_0x00010c247520();
  if (lVar2 != 2) {
    puVar3 = param_1;
    func_0x00010bdc7920(param_1,param_2,puVar1,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = param_1;
    func_0x00010bdc9040(param_1,param_2,puVar3,param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0dcc40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0();
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1059a19a4; end: 1059a19a7; -[SCIncomingNotificationReporter _logReporterEvent:withMetricId:] */

void FUN_1059a19a4(void)

{
  return;
}



/* Entry: 1059a19a8; end: 1059a19ab; -[SCIncomingNotificationReporter _logReporterEvent:withMetricId:withWatchStatus:] */

void FUN_1059a19a8(void)

{
  return;
}



/* Entry: 1059a19ac; end: 1059a1a37; -[SCIncomingNotificationReporter _addNotificationTypeDimension:forNotification:] */

void FUN_1059a19ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b1370;
  _objc_retain(param_3);
  func_0x00010c11c420(param_4);
  func_0x00010c25d500(puVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c2ac460(param_3,param_2,&PTR____CFConstantStringClassReference_110dad058,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1059a1a38; end: 1059a1af3; -[SCIncomingNotificationReporter _addApplicationStateDimension:] */

void FUN_1059a1a38(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar2 = param_1 + 0x18;
  _objc_loadWeakRetained();
  _objc_release();
  uVar4 = param_3;
  if (lVar2 == 0) {
    _objc_retain(param_3);
  }
  else {
    lVar2 = param_1 + 0x18;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010bf07b60();
    _objc_release(lVar2);
    func_0x00010be40900(param_1,param_2,lVar3);
    ppuVar1 = &PTR____CFConstantStringClassReference_110e12638;
    if ((int)param_1 == 0) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110df09d8;
    }
    func_0x00010c2ac460(param_3,param_2,&PTR____CFConstantStringClassReference_110dd6d58,ppuVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1059a1af4; end: 1059a1b73; -[SCIncomingNotificationReporter _addWatchPairStatusDimension:withWatchStatus:] */

void FUN_1059a1af4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010be23e80(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c2ac460(param_3,param_2,&PTR____CFConstantStringClassReference_110e12658,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1059a1b74; end: 1059a1bf3; -[SCIncomingNotificationReporter _addWatchAppStatusDimension:withWatchStatus:] */

void FUN_1059a1b74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010be23e60(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c2ac460(param_3,param_2,&PTR____CFConstantStringClassReference_110e12678,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1059a1bf4; end: 1059a1bff; -[SCIncomingNotificationReporter _isForeground:] */

bool FUN_1059a1bf4(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 == 0;
}



/* Entry: 1059a1c00; end: 1059a1c57; -[SCIncomingNotificationReporter _repostedNotification:] */

undefined8 FUN_1059a1c00(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c07c5e0();
  if ((uVar1 & 1) == 0) {
    func_0x00010bdca460(param_1,param_2,param_3);
  }
  else {
    param_1 = 1;
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 1059a1c58; end: 1059a1cbf; -[SCIncomingNotificationReporter _alreadyProcessedByChat:] */

undefined8 FUN_1059a1c58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c292820(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 1059a1cc0; end: 1059a1d13; -[SCIncomingNotificationReporter _getWatchPairStatusStr:] */

void FUN_1059a1cc0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110db8b78;
  }
  else {
    func_0x00010c083a00();
    ppuVar1 = &PTR____CFConstantStringClassReference_110db6ad8;
    if ((int)param_3 == 0) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110db6af8;
    }
    _objc_retain(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 1059a1d14; end: 1059a1d67; -[SCIncomingNotificationReporter _getWatchAppStatusStr:] */

void FUN_1059a1d14(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110db8b78;
  }
  else {
    func_0x00010c0839e0();
    ppuVar1 = &PTR____CFConstantStringClassReference_110db6ad8;
    if ((int)param_3 == 0) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110db6af8;
    }
    _objc_retain(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 1059a1d68; end: 1059a1d9f; -[SCIncomingNotificationReporter .cxx_destruct] */

void FUN_1059a1d68(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1059a1da0; end: 1059a1fab; -[SCProcessedNotificationPersister initWithUserId:] */

undefined * FUN_1059a1da0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  
  puVar1 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
  if (param_3 == 0) {
    puVar11 = (undefined *)0x0;
  }
  else {
    _objc_retain(param_3);
    _objc_alloc_init(puVar1);
    func_0x00010c189b60();
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf65600(0xc0f5180000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c25d400(puVar1,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010c25d400(puVar1,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = &PTR____CFConstantStringClassReference_110e126b8;
    ppuVar6 = ppuVar7;
    func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110e126b8,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110e126b8,param_2,puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126b7490;
    _objc_alloc(PTR_PTR_1126b7490);
    func_0x00010bfef900();
    puVar9 = PTR_PTR_1126b7490;
    _objc_alloc(PTR_PTR_1126b7490);
    func_0x00010bfef900();
    puVar11 = PTR_PTR_1126c0888;
    _objc_alloc(PTR_PTR_1126c0888);
    puVar10 = PTR_PTR_1126ba528;
    _objc_alloc(PTR_PTR_1126ba528);
    func_0x00010bfef8c0();
    func_0x00010c05ba80(puVar11,param_2,param_3,puVar10,ppuVar6,ppuVar7,puVar8,puVar9);
    _objc_release(param_3);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(ppuVar7);
    _objc_release(ppuVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_1);
  return puVar11;
}



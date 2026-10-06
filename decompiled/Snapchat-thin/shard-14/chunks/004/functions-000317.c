/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b271b14; end: 10b271b23;  */

void FUN_10b271b14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc6650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__addContext_toRequestWithKey__11254f330,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 10b271b24; end: 10b271c1b; -[SCRequestScheduler _addContext:toRequestWithKey:] */

void FUN_10b271b24(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c142d80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bf00bc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c26a7e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(lVar1);
  lVar1 = lVar3;
  if (lVar2 != 0) {
    lVar1 = lVar2;
  }
  _objc_retain(lVar1);
  func_0x00010bdc6620(param_1,param_2,param_3,lVar1);
  func_0x00010bdc6620(param_1,param_2,param_3,lVar3);
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10b271c1c; end: 10b271dd3; -[SCRequestScheduler _addContext:toRequestTask:] */

void FUN_10b271c1c(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126dff90;
  if (param_4 != 0) {
    uVar2 = param_4;
    func_0x00010c134680(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1139c0(puVar1,param_2,uVar2,&PTR____CFConstantStringClassReference_110f60638);
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c134680();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf854e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf4f6c0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf4b900();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((uVar5 & 1) == 0) {
      func_0x00010bef7b00(*(undefined8 *)(param_1 + 0x78),param_2,param_3,param_4);
      uVar2 = param_4;
      func_0x00010c134680(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf854e0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf4f6c0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf09f60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bee1ca0(param_1,param_2,param_4,uVar5);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
      puVar1 = PTR_PTR_1126dff90;
      uVar2 = param_4;
      func_0x00010c134680(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1139c0(puVar1,param_2,uVar2,&PTR____CFConstantStringClassReference_110f60658);
      _objc_release(uVar2);
      func_0x00010bedc060(param_1,param_2,param_4);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b271dd4; end: 10b271edb; -[SCRequestScheduler _updateTask:withContexts:] */

void FUN_10b271dd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126dfeb8;
  _objc_retain(param_3);
  func_0x00010bf85500(puVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c134680(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18fa20();
  _objc_release(uVar2);
  _objc_release(puVar1);
  uVar2 = param_3;
  func_0x00010c134680(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf00bc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12e9a0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  func_0x00010bf00bc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbda0();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10b271edc; end: 10b271f4f; -[SCRequestScheduler enableCriticalMode] */

void FUN_10b271edc(undefined8 param_1)

{
  func_0x00010c11dfc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f7fc0();
  _objc_release(param_1);
  return;
}



/* Entry: 10b271f50; end: 10b271f73;  */

void FUN_10b271f50(long param_1)

{
  if ((*(byte *)(*(long *)(param_1 + 0x20) + 0x49) & 1) != 0) {
    return;
  }
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x49) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010c284c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28),
             PTR_s_updateCurrentReachability_11267ed28);
  return;
}



/* Entry: 10b271f74; end: 10b271fe7; -[SCRequestScheduler disableCriticalMode] */

void FUN_10b271f74(undefined8 param_1)

{
  func_0x00010c11dfc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f7fc0();
  _objc_release(param_1);
  return;
}



/* Entry: 10b271fe8; end: 10b27200b;  */

void FUN_10b271fe8(long param_1)

{
  if (*(char *)(*(long *)(param_1 + 0x20) + 0x49) == '\x01') {
    *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x49) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010c284c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28),
               PTR_s_updateCurrentReachability_11267ed28);
    return;
  }
  return;
}



/* Entry: 10b27200c; end: 10b27215b; -[SCRequestScheduler _runTaskUsingNSURLSession:] */

void FUN_10b27200c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  func_0x00010beeb280(param_1);
  _objc_initWeak(auStack_48,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c142b20(param_3);
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126dff90;
  uVar2 = param_3;
  func_0x00010c134680(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be5aaa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7a2a0(puVar1);
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 10b27215c; end: 10b2721fb;  */

void FUN_10b27215c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6bf40();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b2721fc; end: 10b27236b; -[SCRequestScheduler _onTaskComplete:response:data:error:] */

void FUN_10b2721fc(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = param_3;
  func_0x00010c134680();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0cc940();
  if (uVar2 == 1) {
    puVar3 = PTR_PTR_1126b39d0;
    func_0x00010c22ba80(PTR_PTR_1126b39d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c265ca0();
    _objc_release(puVar3);
  }
  uVar2 = uVar1;
  func_0x00010c150440();
  if ((uVar2 != 4) && (uVar2 = uVar1, func_0x00010c150440(), uVar2 != 5)) {
    uVar2 = uVar1;
    func_0x00010c086560(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be00060(param_1);
    _objc_release(uVar2);
  }
  uVar2 = param_3;
  func_0x00010c232be0();
  if ((uVar2 & 1) == 0) {
    uVar2 = param_3;
    func_0x00010bf43b80();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(uVar2 + 0x10))();
    _objc_release(uVar2);
  }
  else {
    func_0x00010be0a260(param_1);
  }
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b27236c; end: 10b272477; -[SCRequestScheduler _calculateSessionPriorityForTask:] */

void FUN_10b27236c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined4 uVar6;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c134680();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  uVar2 = uVar1;
  func_0x00010c136d60();
  if (uVar2 == 0) {
    uVar2 = uVar1;
    func_0x00010c081c40();
    _objc_release(uVar1);
    if (((uVar2 & 1) != 0) || ((*(byte *)(param_1 + 0x18) & 1) == 0)) goto LAB_10b27244c;
    uVar2 = param_3;
    func_0x00010c134680();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf854e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf4f6c0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf4b900();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar6 = 0x3f800000;
    if ((uVar5 & 1) != 0) goto LAB_10b272458;
  }
  else {
    _objc_release(uVar1);
LAB_10b27244c:
    _objc_release(uVar1);
  }
  uVar6 = 0x3f000000;
LAB_10b272458:
  func_0x00010c28aca0(uVar6,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b272478; end: 10b272577; -[SCRequestScheduler _willRunTaskUsingNSURLSession:] */

void FUN_10b272478(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  func_0x00010bdd8920(param_1,param_2,param_3);
  lVar1 = param_1;
  func_0x00010c142d80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c134680(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(lVar1,param_2,param_3,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(lVar1);
  func_0x00010c250560(*(undefined8 *)(param_1 + 0x78),param_2,param_3);
  uVar2 = param_3;
  func_0x00010c134680(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar2;
  func_0x00010c086560(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be8d960(param_1,param_2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10b272578; end: 10b272653; -[SCRequestScheduler _didRunNSURLSessionTaskWithKey:data:] */

void FUN_10b272578(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010c142d80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    func_0x00010be8d1a0(param_1);
    lVar1 = lVar2;
    func_0x00010c134680();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c136d60();
    _objc_release(lVar1);
    if ((param_4 != 0) && (lVar3 == 0)) {
      puVar4 = PTR__OBJC_CLASS___NSData_1126ae778;
      _objc_opt_class(PTR__OBJC_CLASS___NSData_1126ae778);
      _objc_opt_isKindOfClass(param_4,puVar4);
    }
  }
  _objc_release(lVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b272654; end: 10b27272b; -[SCRequestScheduler _removeRunningNSURLSessionTaskWithKey:] */

void FUN_10b272654(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c142d80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar1);
  if (lVar2 != 0) {
    func_0x00010bfafb60(*(undefined8 *)(param_1 + 0x78),param_2,lVar2);
    func_0x00010c142d80(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c134680(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c086560();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d3e0(param_1,param_2,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10b27272c; end: 10b272837; -[SCRequestScheduler contextsWithBlock:] */

void FUN_10b27272c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c11dfc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x10b2727d4;
  puStack_48 = &UNK_11084aaa8;
  uStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10b272838; end: 10b272843; -[SCRequestScheduler setContexts:withRequestManagerMode:] */

void FUN_10b272838(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setContexts_withQueuePerformer__1125865b0,param_3,1,param_4);
  return;
}



/* Entry: 10b272844; end: 10b2729af; -[SCRequestScheduler _setCurrentContextsForRunningNSURLSessionTasks] */

void FUN_10b272844(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  long unaff_x22;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  long lStack_170;
  undefined1 *puStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
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
  long lStack_68;
  
  puVar3 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar1 = param_1;
  func_0x00010c142d80();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010bf52a60();
  if (lVar5 != 0) {
    lVar4 = *plStack_120;
    unaff_x21 = lVar5;
    do {
      lVar5 = 0;
      do {
        if (*plStack_120 != lVar4) {
          _objc_enumerationMutation(lVar1);
        }
        puVar3 = *(undefined8 **)(lStack_128 + lVar5 * 8);
        lVar2 = param_1;
        func_0x00010c142d80();
        _objc_retainAutoreleasedReturnValue();
        unaff_x22 = lVar2;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar2);
        if (unaff_x22 == 0) goto LAB_10b27296c;
        lVar2 = unaff_x22;
        func_0x00010c134680(unaff_x22);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c187260();
        _objc_release(lVar2);
        func_0x00010c28bae0(unaff_x22);
        _objc_release(unaff_x22);
        lVar5 = lVar5 + 1;
      } while (unaff_x21 != lVar5);
      unaff_x21 = lVar1;
      puVar3 = &uStack_130;
      func_0x00010bf52a60();
    } while (unaff_x21 != 0);
  }
LAB_10b27296c:
  lVar5 = lVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_10b2729b0;
  lStack_160 = unaff_x22;
  lStack_158 = unaff_x21;
  lStack_150 = lVar1;
  lStack_148 = param_1;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(puVar3);
  lVar1 = lVar5;
  func_0x00010c11dfc0(lVar5);
  _objc_retainAutoreleasedReturnValue();
  puStack_190 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_188 = 0xc2000000;
  uStack_180 = 0x10b272a58;
  puStack_178 = &UNK_110841f80;
  lStack_170 = lVar5;
  puStack_168 = (undefined1 *)puVar3;
  _objc_retain(puVar3);
  func_0x00010c0f7fc0(lVar1,param_2,&puStack_190);
  _objc_release(lVar1);
  _objc_release(puStack_168);
  _objc_release(puVar3);
  return;
}



/* Entry: 10b2729b0; end: 10b272ac3; -[SCRequestScheduler addContext:] */

void FUN_10b2729b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c11dfc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x10b272a58;
  puStack_48 = &UNK_110841f80;
  uStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10b272ac4; end: 10b272acf; -[SCRequestScheduler removeContext:] */

void FUN_10b272ac4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be8bc50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__removeContext_withChilds_disabl_1125808b0,param_3,0,0);
  return;
}



/* Entry: 10b272ad0; end: 10b272be3; -[SCRequestScheduler removeContexts:] */

void FUN_10b272ad0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c11dfc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x10b272b78;
  puStack_48 = &UNK_110841f80;
  uStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10b272be4; end: 10b272bef; -[SCRequestScheduler removeContext:disableContextOnlyModeIfRemoved:] */

void FUN_10b272be4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be8bc50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__removeContext_withChilds_disabl_1125808b0,param_3,0,param_4);
  return;
}



/* Entry: 10b272bf0; end: 10b272bfb; -[SCRequestScheduler removeWithChildsParentContext:disableContextOnlyModeIfRemoved:] */

void FUN_10b272bf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be8bc50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__removeContext_withChilds_disabl_1125808b0,param_3,1,param_4);
  return;
}



/* Entry: 10b272bfc; end: 10b272c6f; -[SCRequestScheduler pauseBackgroundDownloads] */

void FUN_10b272bfc(undefined8 param_1)

{
  func_0x00010c11dfc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f7fc0();
  _objc_release(param_1);
  return;
}



/* Entry: 10b272c70; end: 10b272c87;  */

void FUN_10b272c70(long param_1)

{
  if ((*(byte *)(*(long *)(param_1 + 0x20) + 0x4a) & 1) == 0) {
    *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x4a) = 1;
  }
  return;
}



/* Entry: 10b272c88; end: 10b272cfb; -[SCRequestScheduler resumeBackgroundDownloads] */

void FUN_10b272c88(undefined8 param_1)

{
  func_0x00010c11dfc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f7fc0();
  _objc_release(param_1);
  return;
}



/* Entry: 10b272cfc; end: 10b272d13;  */

void FUN_10b272cfc(long param_1)

{
  if (*(char *)(*(long *)(param_1 + 0x20) + 0x4a) == '\x01') {
    *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x4a) = 0;
  }
  return;
}



/* Entry: 10b272d14; end: 10b272e0f; -[SCRequestScheduler startToMonitorProgressWithRequestKey:queue:progressHandler:] */

void FUN_10b272d14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_1;
  func_0x00010c11dfc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_10b272e10;
  puStack_68 = &UNK_1108465d0;
  uStack_60 = param_1;
  uStack_58 = param_3;
  uStack_50 = param_4;
  uStack_48 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_80);
  _objc_release(uVar1);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b272e10; end: 10b272fbb;  */

void FUN_10b272e10(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar1 = *(undefined **)(param_1 + 0x20);
  func_0x00010c142d80();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    puVar3 = *(undefined **)(param_1 + 0x20);
    func_0x00010bf00bc0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    func_0x00010c26a7e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar1);
    if (puVar2 != (undefined *)0x0) goto LAB_10b272e9c;
    uVar4 = 0;
    func_0x00010c134680(0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a7de0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    _objc_alloc();
    func_0x00010c00e2e0();
    puVar1 = *(undefined **)(param_1 + 0x38);
    if (puVar1 == (undefined *)0x0) goto LAB_10b272ec0;
    lVar5 = *(long *)(param_1 + 0x30);
    if (lVar5 == 0) {
      (**(code **)(puVar1 + 0x10))(puVar1,0,puVar2);
      goto LAB_10b272ec0;
    }
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_10b272fbc;
    puStack_48 = &UNK_11084aaa8;
    _objc_retain(puVar1);
    puStack_38 = puVar1;
    _objc_retain(puVar2);
    puStack_40 = puVar2;
    func_0x000107c27d8c(lVar5,&puStack_60);
    _objc_release(puStack_40);
    puVar1 = puStack_38;
  }
  else {
    _objc_release(puVar1);
LAB_10b272e9c:
    puVar1 = puVar2;
    func_0x00010c134680(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d0c60();
  }
  _objc_release(puVar1);
LAB_10b272ec0:
  _objc_release(puVar2);
  return;
}



/* Entry: 10b272fbc; end: 10b272fcf;  */

void FUN_10b272fbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b272fcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10b272fd0; end: 10b273143; -[SCRequestScheduler stopToMonitorProgressWithRequestKey:] */

void FUN_10b272fd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c11dfc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x10b273078;
  puStack_48 = &UNK_110841f80;
  uStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10b273144; end: 10b273347; -[SCRequestScheduler startToMonitorUploadProgressWithRequestKey:progressHandler:] */

void FUN_10b273144(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010c11dfc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x10b273214;
  puStack_50 = &UNK_11084a9e8;
  uStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b273348; end: 10b2733ef; -[SCRequestScheduler resetWithAuthenticator:] */

void FUN_10b273348(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c11dfc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10b2733f0;
  puStack_48 = &UNK_110841f80;
  uStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10b2733f0; end: 10b2736eb;  */

void FUN_10b2733f0(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  long *plStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long *plStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined1 auStack_1d8 [384];
  long lStack_58;
  
  puVar5 = &uStack_2a0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  plStack_210 = (long *)0x0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010c142d80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar8 = *plStack_210;
    do {
      lVar9 = 0;
      do {
        if (*plStack_210 != lVar8) {
          _objc_enumerationMutation(lVar2);
        }
        uVar4 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010c142d80(uVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar4;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar4);
        iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
        func_0x00010beb2be0();
        if (iVar1 != 0) {
          func_0x00010bddab00(*(undefined8 *)(param_1 + 0x20));
          func_0x00010bf2dba0(uVar7);
        }
        _objc_release(uVar7);
        lVar9 = lVar9 + 1;
      } while (lVar3 != lVar9);
      lVar3 = lVar2;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(lVar2);
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  lStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  plStack_250 = (long *)0x0;
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010bf00bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf00bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar3;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar8 = *plStack_250;
    do {
      lVar9 = 0;
      do {
        if (*plStack_250 != lVar8) {
          _objc_enumerationMutation(lVar3);
        }
        uVar7 = *(undefined8 *)(lStack_258 + lVar9 * 8);
        iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
        func_0x00010beb2be0();
        if (iVar1 != 0) {
          func_0x00010bf2dba0(uVar7);
        }
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      lVar2 = lVar3;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar3);
  uStack_278 = 0;
  uStack_280 = 0;
  uStack_268 = 0;
  uStack_270 = 0;
  uStack_298 = 0;
  uStack_2a0 = 0;
  uStack_288 = 0;
  plStack_290 = (long *)0x0;
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010bf00bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf00bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  puVar6 = auStack_1d8;
  lVar2 = lVar3;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar8 = *plStack_290;
    do {
      lVar9 = 0;
      do {
        if (*plStack_290 != lVar8) {
          _objc_enumerationMutation(lVar3);
        }
        iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
        func_0x00010beb2be0();
        if (iVar1 != 0) {
          func_0x00010bddab00(*(undefined8 *)(param_1 + 0x20));
        }
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      puVar6 = auStack_1d8;
      lVar2 = lVar3;
      puVar5 = &uStack_2a0;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar3);
  func_0x00010be94000(*(undefined8 *)(param_1 + 0x20));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c072050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (puVar5,PTR_s_isEqualToSessionScopeWithAuthent_1125fa220,puVar6);
  return;
}



/* Entry: 10b2736ec; end: 10b2736f7; -[SCRequestScheduler _shouldCancelTask:withAuthenticator:] */

void FUN_10b2736ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c072050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_isEqualToSessionScopeWithAuthent_1125fa220,param_4);
  return;
}



/* Entry: 10b2736f8; end: 10b273807; -[SCRequestScheduler _removeContext:withChilds:disableContextOnlyModeIfRemoved:] */

void FUN_10b2736f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 uStack_4f;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  func_0x00010c11dfc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_3);
  uStack_50 = param_4;
  uStack_4f = param_5;
  func_0x00010c0f7fc0(param_1);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 10b273808; end: 10b2738ff;  */

void FUN_10b273808(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 8);
    func_0x00010bf4f6c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf4b900();
    _objc_release(uVar2);
    if ((int)uVar3 != 0) {
      lVar4 = *(long *)(lVar1 + 8);
      func_0x00010bf4f6c0(lVar4);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c0d3c80();
      _objc_release(lVar4);
      if (*(char *)(param_1 + 0x30) == '\x01') {
        lVar4 = lVar5;
        func_0x00010bfecde0();
        lVar6 = lVar5;
        func_0x00010bf529e0(lVar5);
        func_0x00010c12d520(lVar5,param_2,lVar4,lVar6 - lVar4);
      }
      else {
        func_0x00010c12d360(lVar5,param_2,*(undefined8 *)(param_1 + 0x20));
      }
      if (*(char *)(param_1 + 0x31) == '\x01') {
        func_0x00010bea3020();
      }
      else {
        func_0x00010bea3000(lVar1,param_2,lVar5,0);
      }
      _objc_release(lVar5);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b273900; end: 10b2739af; -[SCRequestScheduler _hasIntersetContext:] */

undefined * FUN_10b273900(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  uVar4 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf4f6c0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20(puVar1,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = puVar1;
  func_0x00010c069880(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(uVar4);
  return puVar3;
}



/* Entry: 10b2739b0; end: 10b273a27; -[SCRequestScheduler _shouldEnterContextOnlyMode:withContexts:] */

undefined8 FUN_10b2739b0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  if (param_3 == 2) {
    param_1 = 1;
  }
  else if ((param_3 == 0) && (uVar1 = param_1, func_0x00010c06f540(), (int)uVar1 != 0)) {
    func_0x00010be33fc0(param_1,param_2,param_4);
  }
  else {
    param_1 = 0;
  }
  _objc_release(param_4);
  return param_1;
}



/* Entry: 10b273a28; end: 10b273a9f; -[SCRequestScheduler _shouldLeaveContextOnlyMode:withContexts:] */

uint FUN_10b273a28(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  uint uVar2;
  
  _objc_retain(param_4);
  if (param_3 == 1) {
    uVar2 = 1;
  }
  else if ((param_3 == 0) && (uVar1 = param_1, func_0x00010c06f540(), (int)uVar1 != 0)) {
    func_0x00010be33fc0(param_1,param_2,param_4);
    uVar2 = (uint)param_1 ^ 1;
  }
  else {
    uVar2 = 0;
  }
  _objc_release(param_4);
  return uVar2;
}



/* Entry: 10b273aa0; end: 10b273b9b; -[SCRequestScheduler downloadStateForRequestWithKey:completionQueue:completion:] */

void FUN_10b273aa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_1;
  func_0x00010c11dfc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_10b273b9c;
  puStack_68 = &UNK_1108465d0;
  uStack_60 = param_1;
  uStack_58 = param_3;
  uStack_50 = param_4;
  uStack_48 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_80);
  _objc_release(uVar1);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b273b9c; end: 10b273c97;  */

void FUN_10b273b9c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x00010c142d80();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar3);
  if (lVar4 == 0) {
    lVar3 = *(long *)(param_1 + 0x20);
    func_0x00010bf00bc0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c26a7e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar3);
    uStack_38 = 2;
    if (lVar4 == 0) {
      uStack_38 = 3;
    }
  }
  else {
    uStack_38 = 1;
  }
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10b273c98;
  puStack_48 = &UNK_110860cf8;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar2);
  uStack_40 = uVar2;
  func_0x000107c27d8c(uVar1,&puStack_60);
  _objc_release(uStack_40);
  return;
}



/* Entry: 10b273c98; end: 10b273ca7;  */

void FUN_10b273c98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b273ca4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10b273ca8; end: 10b273caf; -[SCRequestScheduler numOfLargeDLTasks] */

void FUN_10b273ca8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0de130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x78),PTR_s_numOfLargeDLTasks_112615260);
  return;
}



/* Entry: 10b273cb0; end: 10b273cb7; -[SCRequestScheduler numOfUploadTasks] */

void FUN_10b273cb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0de470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x78),PTR_s_numOfUploadTasks_112615330);
  return;
}



/* Entry: 10b273cb8; end: 10b273cbf; -[SCRequestScheduler totalRequestConcurrencyReceivingData] */

void FUN_10b273cb8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c276a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x78),PTR_s_totalRequestConcurrencyReceiving_11267b4b8);
  return;
}



/* Entry: 10b273cc0; end: 10b273cc7; -[SCRequestScheduler downloadRequestConcurrency] */

void FUN_10b273cc0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf88f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x78),PTR_s_downloadRequestConcurrency_1125bfd70);
  return;
}



/* Entry: 10b273cc8; end: 10b273ccf; -[SCRequestScheduler metadataRequestConcurrency] */

void FUN_10b273cc8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0cc690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x78),PTR_s_metadataRequestConcurrency_112610bb8);
  return;
}



/* Entry: 10b273cd0; end: 10b273e3b; -[SCRequestScheduler _cancelNativeHttpRequestWithRequestTask:cancelReason:] */

void FUN_10b273cd0(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c08d780();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar3 = param_3;
    func_0x00010c0d5980();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar3 == -1) goto LAB_10b273e20;
    lVar1 = param_3;
    func_0x00010c134680(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c086560();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar3 = param_3;
    func_0x00010c0d5980(param_3);
    func_0x00010c0df7c0(puVar4,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010c134680(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a7de0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar3);
    _objc_release(puVar4);
    _objc_release(lVar2);
    _objc_release(lVar1);
    func_0x00010c1780a0(param_3,param_2,param_4);
    func_0x00010c08d780(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2ee00();
    _objc_release(lVar1);
    lVar1 = param_1;
  }
  _objc_release(lVar1);
LAB_10b273e20:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b273e3c; end: 10b273f4f; -[SCRequestScheduler _updateNativeHttpRequestWithRequestTask:] */

void FUN_10b273e3c(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010c08d780();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if ((param_3 != 0) && (lVar3 != 0)) {
    uVar4 = param_3;
    func_0x00010c134680();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c2a71c0();
    _objc_release(uVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    puVar1 = PTR_PTR_1126dff90;
    if ((uVar5 & 1) != 0) goto LAB_10b273f38;
    uVar4 = param_3;
    func_0x00010c134680(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1139c0(puVar1,param_2,uVar4,&PTR____CFConstantStringClassReference_110f60698);
    _objc_release(uVar4);
    func_0x00010c08d780(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2890e0();
    lVar2 = param_1;
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
LAB_10b273f38:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b273f50; end: 10b273f57; -[SCRequestScheduler isCriticalMode] */

undefined1 FUN_10b273f50(long param_1)

{
  return *(undefined1 *)(param_1 + 0x49);
}



/* Entry: 10b273f58; end: 10b273f5f; -[SCRequestScheduler setIsCriticalMode:] */

void FUN_10b273f58(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x49) = param_3;
  return;
}



/* Entry: 10b273f60; end: 10b273f8f; -[SCRequestScheduler setNonFatalReporter:] */

void FUN_10b273f60(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b273f90; end: 10b273f97; -[SCRequestScheduler runningTaskState] */

undefined8 FUN_10b273f90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 10b273f98; end: 10b273fc7; -[SCRequestScheduler setRunningTaskState:] */

void FUN_10b273f98(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b273fc8; end: 10b273fcf; -[SCRequestScheduler networkManagerLogger] */

undefined8 FUN_10b273fc8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 10b273fd0; end: 10b273fd7; -[SCRequestScheduler setNetworkManagerLogger:] */

void FUN_10b273fd0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b273fd8; end: 10b273fdf; -[SCRequestScheduler isBackgroundDownloadPaused] */

undefined1 FUN_10b273fd8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x4a);
}



/* Entry: 10b273fe0; end: 10b273fe7; -[SCRequestScheduler setIsBackgroundDownloadPaused:] */

void FUN_10b273fe0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x4a) = param_3;
  return;
}



/* Entry: 10b273fe8; end: 10b273fef; -[SCRequestScheduler isAllDownloadPaused] */

undefined1 FUN_10b273fe8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x4b);
}



/* Entry: 10b273ff0; end: 10b273ff7; -[SCRequestScheduler setIsAllDownloadPaused:] */

void FUN_10b273ff0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x4b) = param_3;
  return;
}



/* Entry: 10b273ff8; end: 10b274027; -[SCRequestScheduler setQueuePerformer:] */

void FUN_10b273ff8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b274028; end: 10b27402f; -[SCRequestScheduler isContextOnlyModeForCurrentContextSession] */

undefined1 FUN_10b274028(long param_1)

{
  return *(undefined1 *)(param_1 + 0x4c);
}



/* Entry: 10b274030; end: 10b274037; -[SCRequestScheduler setIsContextOnlyModeForCurrentContextSession:] */

void FUN_10b274030(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x4c) = param_3;
  return;
}



/* Entry: 10b274038; end: 10b274067; -[SCRequestScheduler setLazyNetworkApiRouter:] */

void FUN_10b274038(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b274068; end: 10b27413b; -[SCRequestScheduler .cxx_destruct] */

void FUN_10b274068(long param_1)

{
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_destroyWeak(param_1 + 0x60);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b27413c; end: 10b27418b; -[SCSessionRequestManager dealloc] */

void FUN_10b27413c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010bfeb980(PTR_PTR_1126bc0e8,param_2,param_1);
  puStack_28 = PTR_PTR_112706038;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10b27418c; end: 10b274227; -[SCSessionRequestManager submitRequest:progressiveUpdateQueue:progressiveUpdateBlock:] */

void FUN_10b27418c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b7f68;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c22b6a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f580();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b274228; end: 10b27427b; -[SCSessionRequestManager cancelRequestWithKey:] */

void FUN_10b274228(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b7f68;
  _objc_retain(param_3);
  func_0x00010c22b6a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2ee60();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b27427c; end: 10b2742df; -[SCSessionRequestManager cancelRequestWithKey:cancelReason:] */

void FUN_10b27427c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b7f68;
  _objc_retain(param_3);
  func_0x00010c22b6a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2ee80();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b2742e0; end: 10b274343; -[SCSessionRequestManager boostRequestWithKey:toHigherConnectivity:] */

void FUN_10b2742e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b7f68;
  _objc_retain(param_3);
  func_0x00010c22b6a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f7e0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b274344; end: 10b2743a7; -[SCSessionRequestManager boostRequestWithKey:toHigherPriority:] */

void FUN_10b274344(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b7f68;
  _objc_retain(param_3);
  func_0x00010c22b6a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f800();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b2743a8; end: 10b274423; -[SCSessionRequestManager updateRequestWithKey:toPriority:importance:connectivity:] */

void FUN_10b2743a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b7f68;
  _objc_retain(param_3);
  func_0x00010c22b6a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c289460();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b274424; end: 10b2744a7; -[SCSessionRequestManager updateRequestWithKey:toPriority:importance:connectivity:pageId:] */

void FUN_10b274424(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b7f68;
  _objc_retain(param_3);
  func_0x00010c22b6a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c289480();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b2744a8; end: 10b27451b; -[SCSessionRequestManager addContext:toRequestWithKey:] */

void FUN_10b2744a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b7f68;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c22b6a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7ae0();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b27451c; end: 10b27457f; -[SCSessionRequestManager setContexts:withRequestManagerMode:] */

void FUN_10b27451c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b7f68;
  _objc_retain(param_3);
  func_0x00010c22b6a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c183600();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b274580; end: 10b2745d3; -[SCSessionRequestManager cancelRequestsWithContext:] */

void FUN_10b274580(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b7f68;
  _objc_retain(param_3);
  func_0x00010c22b6a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2ef20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b2745d4; end: 10b274637; -[SCSessionRequestManager cancelRequestsWithContext:cancelReason:] */

void FUN_10b2745d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b7f68;
  _objc_retain(param_3);
  func_0x00010c22b6a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2ef40();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b274638; end: 10b27463b; -[SCSessionRequestManager consumeContentWithKey:] */

void FUN_10b274638(void)

{
  return;
}



/* Entry: 10b27463c; end: 10b27468f; -[SCSessionRequestManager setContexts:] */

void FUN_10b27463c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b7f68;
  _objc_retain(param_3);
  func_0x00010c22b6a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1835e0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b274690; end: 10b2746e3; -[SCSessionRequestManager addContext:] */

void FUN_10b274690(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b7f68;
  _objc_retain(param_3);
  func_0x00010c22b6a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7ac0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b2746e4; end: 10b274737; -[SCSessionRequestManager removeContext:] */

void FUN_10b2746e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b7f68;
  _objc_retain(param_3);
  func_0x00010c22b6a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12ba20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b274738; end: 10b27476f; -[SCSessionRequestManager pauseBackgroundDownloads] */

void FUN_10b274738(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b7f68;
  func_0x00010c22b6a0(PTR_PTR_1126b7f68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f5c60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b274770; end: 10b2747a7; -[SCSessionRequestManager resumeBackgroundDownloads] */

void FUN_10b274770(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b7f68;
  func_0x00010c22b6a0(PTR_PTR_1126b7f68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13d320();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b2747a8; end: 10b2747df; -[SCSessionRequestManager enableCriticalMode] */

void FUN_10b2747a8(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b7f68;
  func_0x00010c22b6a0(PTR_PTR_1126b7f68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8fd40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b2747e0; end: 10b274817; -[SCSessionRequestManager disableCriticalMode] */

void FUN_10b2747e0(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b7f68;
  func_0x00010c22b6a0(PTR_PTR_1126b7f68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7fd20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b274818; end: 10b2748a3; -[SCSessionRequestManager startToMonitorProgressWithRequestKey:queue:progressHandler:] */

void FUN_10b274818(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b7f68;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c22b6a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2512a0();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b2748a4; end: 10b2748f7; -[SCSessionRequestManager stopToMonitorProgressWithRequestKey:] */

void FUN_10b2748a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b7f68;
  _objc_retain(param_3);
  func_0x00010c22b6a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c256c60();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b2748f8; end: 10b27496b; -[SCSessionRequestManager startToMonitorUploadProgressWithRequestKey:progressHandler:] */

void FUN_10b2748f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b7f68;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c22b6a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2512c0();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b27496c; end: 10b274b4f; -[SCSessionRequestManager submitRequestToEndpoint:relativeToURL:parameters:uploadData:key:additionalHeaders:contexts:requestParser:requestType:priority:connectivity:method:authenticated:useGzipRequestCompression:successQueue:failureQueue:successBlock:failureBlock:] */

void FUN_10b27496c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined1 param_15,undefined4 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  _objc_retain(param_20);
  _objc_retain(param_19);
  _objc_retain(param_18);
  _objc_retain(param_17);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010bdc34c0(puVar1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b4960;
  func_0x00010bf58740(PTR_PTR_1126b4960,param_2,puVar1,param_5,param_6,param_8,param_7,param_9,
                      param_12,param_13,param_10,param_11,param_14,param_15);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  func_0x00010c25f660(param_1,param_2,puVar2,param_17,param_18,param_19,param_20);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b274b50; end: 10b274ccf; -[SCSessionRequestManager submitRequestToEndpoint:parameters:uploadData:key:contexts:requestParser:requestType:priority:method:authenticated:successQueue:failureQueue:successBlock:failureBlock:] */

void FUN_10b274b50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined1 param_12,
                  undefined4 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17)

{
  undefined8 uVar1;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_15);
  _objc_retain(param_14);
  uVar1 = param_1;
  func_0x00010be91b20(param_1,param_2,param_3,param_4,param_5,0,param_6,param_7,param_8,param_9,
                      param_10,param_11,param_12);
  _objc_retainAutoreleasedReturnValue();
  uStack_98 = param_17;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_10b274cd0;
  puStack_78 = &UNK_1108ab730;
  uStack_70 = param_16;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  uStack_a8 = 0x10b274cec;
  puStack_a0 = &UNK_1108a0d30;
  _objc_retain(param_17);
  _objc_retain(param_16);
  func_0x00010c25f660(param_1,param_2,uVar1,param_14,param_15,&puStack_90,&puStack_b8);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(uStack_98);
  _objc_release(uStack_70);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(uVar1);
  return;
}



/* Entry: 10b274cd0; end: 10b274d07;  */

void FUN_10b274cd0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b274ce4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3,param_4);
    return;
  }
  return;
}



/* Entry: 10b274d08; end: 10b274d4b; -[SCSessionRequestManager submitImmediateRequestToEndpoint:parameters:uploadData:key:contexts:requestParser:requestType:method:authenticated:successQueue:failureQueue:successBlock:failureBlock:] */

void FUN_10b274d08(void)

{
  func_0x00010c25f6e0();
  return;
}



/* Entry: 10b274d4c; end: 10b274d9b; -[SCSessionRequestManager submitRequestToEndpoint:parameters:uploadData:key:contexts:requestParser:requestType:priority:method:authenticated:completionQueue:completionBlock:] */

void FUN_10b274d4c(void)

{
  func_0x00010c25f6c0();
  return;
}



/* Entry: 10b274d9c; end: 10b274ebf; -[SCSessionRequestManager submitRequestToEndpoint:parameters:uploadData:additionalHttpHeaders:key:contexts:requestParser:requestType:priority:method:authenticated:completionQueue:completionBlock:] */

void FUN_10b274d9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined1 param_13,undefined4 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 uVar1;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  
  _objc_retain(param_16);
  _objc_retain(param_15);
  uVar1 = param_1;
  func_0x00010be91b20(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                      param_10,param_11,param_12,param_13);
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_10b274ec0;
  puStack_78 = &UNK_1108bc7f0;
  uStack_70 = param_16;
  _objc_retain(param_16);
  func_0x00010c25f5e0(param_1,param_2,uVar1,param_15,&puStack_90);
  _objc_release(param_15);
  _objc_release(uStack_70);
  _objc_release(param_16);
  _objc_release(uVar1);
  return;
}



/* Entry: 10b274ec0; end: 10b274edf;  */

void FUN_10b274ec0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b274ed8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3,param_4,param_5);
    return;
  }
  return;
}



/* Entry: 10b274ee0; end: 10b275007; -[SCSessionRequestManager submitRequestToEndpoint:parameters:uploadData:additionalHttpHeaders:key:contexts:requestParser:requestType:priority:method:authenticated:useGzipRequestCompression:completionQueue:completionBlock:] */

void FUN_10b274ee0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined1 param_13,undefined4 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 uVar1;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  
  _objc_retain(param_16);
  _objc_retain(param_15);
  uVar1 = param_1;
  func_0x00010be91b20(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                      param_10,param_11,param_12,param_13);
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_10b275008;
  puStack_78 = &UNK_1108bc7f0;
  uStack_70 = param_16;
  _objc_retain(param_16);
  func_0x00010c25f5e0(param_1,param_2,uVar1,param_15,&puStack_90);
  _objc_release(param_15);
  _objc_release(uStack_70);
  _objc_release(param_16);
  _objc_release(uVar1);
  return;
}



/* Entry: 10b275008; end: 10b275027;  */

void FUN_10b275008(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b275020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3,param_4,param_5);
    return;
  }
  return;
}



/* Entry: 10b275028; end: 10b2751c7; -[SCSessionRequestManager _requestToEndpoint:parameters:uploadData:additionalHttpHeaders:key:contexts:requestParser:requestType:priority:method:authenticated:useGzipRequestCompression:] */

void FUN_10b275028(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined *param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined1 param_13)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puVar1 = param_7;
  func_0x00010c08fa60();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (puVar1 == (undefined *)0x0) {
    func_0x000107c31920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110dd4898);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_7);
    _objc_release(puVar1);
    param_7 = puVar2;
  }
  puVar2 = PTR_PTR_1126b4960;
  func_0x00010bf58660(PTR_PTR_1126b4960,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                      param_9,param_11,1,param_10,param_12,param_13);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b2751c8; end: 10b2751cf; -[SCSessionRequestManager authToken] */

undefined8 FUN_10b2751c8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



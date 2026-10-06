/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00620318; end: 00620397;  */

void FUN_00620318(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_00999f30;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_00620398;
  puStack_30 = &UNK_00a0b338;
  uStack_28 = param_1;
  _objc_retain(param_1);
  ppuVar1 = &puStack_48;
  _objc_retainBlock(ppuVar1);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(ppuVar1);
  return;
}



/* Entry: 00620398; end: 006203a3;  */

void FUN_00620398(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x006203a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 006203a4; end: 00620423;  */

void FUN_006203a4(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_00999f30;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_00620424;
  puStack_30 = &UNK_00a0b338;
  uStack_28 = param_1;
  _objc_retain(param_1);
  ppuVar1 = &puStack_48;
  _objc_retainBlock(ppuVar1);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(ppuVar1);
  return;
}



/* Entry: 00620424; end: 0062042f;  */

void FUN_00620424(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0062042c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 00620430; end: 0062051f;  */

void __runOnMainThreadAsynchronouslyIfNecessary(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puVar1 = PTR__OBJC_CLASS___NSThread_00ac30f8;
  _objc_retain(param_2);
  func_0x00787a60();
  if ((int)puVar1 != 0) {
    lVar2 = param_2;
    FUN_00620318();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    (**(code **)(lVar2 + 0x10))(lVar2);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_0099ada0)(lVar2);
    return;
  }
  lVar2 = param_2;
  FUN_006203a4();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  puStack_48 = PTR___NSConcreteStackBlock_00999f30;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_00620520;
  puStack_30 = &UNK_00a0b338;
  lStack_28 = lVar2;
  _objc_retain(lVar2);
  _dispatch_async(PTR___dispatch_main_q_00999fc0,&puStack_48);
  _objc_release(lStack_28);
  _objc_release(lVar2);
  return;
}



/* Entry: 00620520; end: 0062052b;  */

void FUN_00620520(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00620528. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 0062052c; end: 006205b3;  */

void __runOnMainThreadAsynchronously(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  FUN_006203a4();
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = PTR___NSConcreteStackBlock_00999f30;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_006205b4;
  puStack_30 = &UNK_00a0b338;
  uStack_28 = param_2;
  _objc_retain();
  _dispatch_async(PTR___dispatch_main_q_00999fc0,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_2);
  return;
}



/* Entry: 006205b4; end: 006205bf;  */

void FUN_006205b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x006205bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 006205c0; end: 006205fb; -[SCFuture _init] */

void FUN_006205c0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puVar1 = &uStack_20;
  puStack_18 = PTR__OBJC_CLASS___SCFuture_00ac4400;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 0x28) = 0;
  }
  return;
}



/* Entry: 006205fc; end: 0062072b; -[SCFuture _completeWithItem:tag:assertIfAlreadyCompleted:] */

void FUN_006205fc(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  lStack_58 = 0;
  lStack_50 = 0;
  uStack_48 = 0;
  _os_unfair_lock_lock(param_1 + 0x28);
  if (*(byte *)(param_1 + 0x2c) - 1 < 2) {
    _os_unfair_lock_unlock(param_1 + 0x28);
  }
  else {
    lVar3 = *(long *)(param_1 + 8);
    uStack_48 = *(undefined8 *)(param_1 + 0x18);
    lVar4 = *(long *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    lStack_58 = lVar3;
    lStack_50 = lVar4;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = param_3;
    _objc_release(uVar2);
    *(char *)(param_1 + 0x2c) = (char)param_4;
    _os_unfair_lock_unlock(param_1 + 0x28);
    _objc_retain(param_3);
    uVar2 = param_3;
    if (param_4 != 1) {
      uVar2 = 0;
    }
    uVar1 = 0;
    if (param_4 != 1) {
      uVar1 = param_3;
    }
    for (; lVar3 != lVar4; lVar3 = lVar3 + 0x18) {
      FUN_0062072c(lVar3,uVar2,uVar1);
    }
    _objc_release(uVar1);
    _objc_release(uVar2);
  }
  FUN_00620e08(&lStack_58);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 0062072c; end: 0062090f;  */

void FUN_0062072c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = *param_1;
  _objc_retainBlock();
  lVar2 = param_1[1];
  if (lVar2 == 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_2,param_3);
  }
  else {
    if ((char)param_1[2] == '\x01') {
      _objc_retain(lVar1);
      _objc_retain(param_2);
      _objc_retain(param_3);
      func_0x0078a5c0(lVar2);
      _objc_release(param_3);
      _objc_release(param_2);
    }
    else {
      _objc_retain(lVar1);
      _objc_retain(param_2);
      _objc_retain(param_3);
      func_0x0078a560(lVar2);
      _objc_release(param_3);
      _objc_release(param_2);
    }
    _objc_release(lVar1);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 00620910; end: 0062091b; -[SCFuture _completeWithValue:] */

void FUN_00620910(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0077c450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s__completeWithItem_tag_assertIfAl_00ab9e08,param_3,1,1);
  return;
}



/* Entry: 0062091c; end: 00620927; -[SCFuture _completeWithValue:ignoreRedundantCompletions:] */

void FUN_0062091c(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
                    /* WARNING: Could not recover jumptable at 0x0077c450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s__completeWithItem_tag_assertIfAl_00ab9e08,param_3,1,param_4 ^ 1);
  return;
}



/* Entry: 00620928; end: 00620933; -[SCFuture _completeWithError:] */

void FUN_00620928(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0077c450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s__completeWithItem_tag_assertIfAl_00ab9e08,param_3,2,1);
  return;
}



/* Entry: 00620934; end: 0062093f; -[SCFuture _completeWithError:ignoreRedundantCompletions:] */

void FUN_00620934(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
                    /* WARNING: Could not recover jumptable at 0x0077c450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s__completeWithItem_tag_assertIfAl_00ab9e08,param_3,2,param_4 ^ 1);
  return;
}



/* Entry: 00620940; end: 006209af; -[SCFuture _failIfIncomplete] */

void FUN_00620940(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSError_00ac2b00;
  func_0x00782e40(PTR__OBJC_CLASS___NSError_00ac2b00,param_2,
                  &PTR____CFConstantStringClassReference_00a47880,0xffffffffffffffff,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x0077c440(param_1,param_2,puVar1,2,0);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 006209b0; end: 006209d3; -[SCFuture copyWithZone:] */

undefined8 FUN_006209b0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 006209d4; end: 00620a4b; +[SCFuture immediateFutureWithValue:] */

void FUN_006209d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___SCFuture_00ac3590;
  _objc_alloc(PTR__OBJC_CLASS___SCFuture_00ac3590);
  func_0x0077ce20();
  func_0x0077c460();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 00620a4c; end: 00620ac3; +[SCFuture immediateFutureWithError:] */

void FUN_00620a4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___SCFuture_00ac3590;
  _objc_alloc(PTR__OBJC_CLASS___SCFuture_00ac3590);
  func_0x0077ce20();
  func_0x0077c400();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 00620ac4; end: 00620acb; -[SCFuture valueWithCompletion:performer:] */

void FUN_00620ac4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00793730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_valueWithCompletion_performer_pr_00abfad8,param_3,param_4,0);
  return;
}



/* Entry: 00620acc; end: 00620da7; -[SCFuture valueWithCompletion:performer:preferSynchronous:] */

void FUN_00620acc(long param_1,undefined8 param_2,long param_3,long param_4,undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  long *plVar15;
  long lStack_78;
  long lStack_70;
  undefined1 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == 0) {
    lVar11 = 0;
    goto LAB_00620d14;
  }
  lVar11 = param_3;
  func_0x00780e20();
  _objc_release(param_3);
  _os_unfair_lock_lock(param_1 + 0x28);
  cVar3 = *(char *)(param_1 + 0x2c);
  if (cVar3 == '\0') {
    plVar15 = *(long **)(param_1 + 0x10);
    if (plVar15 < *(long **)(param_1 + 0x18)) {
      _objc_retain(param_4);
      lVar14 = lVar11;
      _objc_retainBlock();
      *plVar15 = lVar14;
      plVar15[1] = param_4;
      *(undefined1 *)(plVar15 + 2) = param_5;
      plVar15 = plVar15 + 3;
    }
    else {
      lVar14 = (long)plVar15 - *(long *)(param_1 + 8);
      uVar10 = (lVar14 >> 3) * -0x5555555555555555 + 1;
      if (0xaaaaaaaaaaaaaaa < uVar10) {
        FUN_00620e74();
LAB_00620d4c:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x620d50);
        (*pcVar4)();
      }
      lVar7 = (long)*(long **)(param_1 + 0x18) - *(long *)(param_1 + 8) >> 3;
      uVar9 = lVar7 * 0x5555555555555556;
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        uVar9 = uVar10;
      }
      if (0x555555555555554 < (ulong)(lVar7 * -0x5555555555555555)) {
        uVar9 = 0xaaaaaaaaaaaaaaa;
      }
      if (uVar9 == 0) {
        lVar7 = 0;
      }
      else {
        if (0xaaaaaaaaaaaaaaa < uVar9) {
          FUN_0040cee8();
          goto LAB_00620d4c;
        }
        lVar7 = uVar9 * 0x18;
        __Znwm();
      }
      plVar15 = (long *)(lVar7 + lVar14);
      _objc_retain(param_4);
      lVar14 = lVar11;
      _objc_retainBlock();
      *plVar15 = lVar14;
      plVar15[1] = param_4;
      *(undefined1 *)(plVar15 + 2) = param_5;
      puVar12 = *(undefined8 **)(param_1 + 8);
      puVar2 = *(undefined8 **)(param_1 + 0x10);
      puVar1 = (undefined8 *)((long)plVar15 + ((long)puVar12 - (long)puVar2));
      puVar6 = puVar12;
      puVar8 = puVar1;
      if ((long)puVar12 - (long)puVar2 != 0) {
        do {
          uVar13 = puVar6[1];
          uVar5 = *puVar6;
          *puVar6 = 0;
          puVar6[1] = 0;
          puVar8[1] = uVar13;
          *puVar8 = uVar5;
          *(undefined1 *)(puVar8 + 2) = *(undefined1 *)(puVar6 + 2);
          puVar6 = puVar6 + 3;
          puVar8 = puVar8 + 3;
        } while (puVar6 != puVar2);
        do {
          _objc_release(puVar12[1]);
          puVar6 = puVar12 + 3;
          _objc_release(*puVar12);
          puVar12 = puVar6;
        } while (puVar6 != puVar2);
        puVar12 = *(undefined8 **)(param_1 + 8);
      }
      plVar15 = plVar15 + 3;
      *(undefined8 **)(param_1 + 8) = puVar1;
      *(long **)(param_1 + 0x10) = plVar15;
      *(ulong *)(param_1 + 0x18) = lVar7 + uVar9 * 0x18;
      if (puVar12 != (undefined8 *)0x0) {
        __ZdlPv(puVar12);
      }
    }
    *(long **)(param_1 + 0x10) = plVar15;
    _os_unfair_lock_unlock(param_1 + 0x28);
    goto LAB_00620d14;
  }
  if (cVar3 == '\x01') {
    uVar5 = 0;
    uVar13 = *(undefined8 *)(param_1 + 0x20);
LAB_00620b68:
    _objc_retain();
  }
  else {
    if (cVar3 == '\x02') {
      uVar13 = 0;
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      goto LAB_00620b68;
    }
    uVar13 = 0;
    uVar5 = 0;
  }
  _os_unfair_lock_unlock(param_1 + 0x28);
  _objc_retain(param_4);
  lVar14 = lVar11;
  _objc_retainBlock();
  lStack_78 = lVar14;
  lStack_70 = param_4;
  uStack_68 = param_5;
  FUN_0062072c(&lStack_78,uVar13,uVar5);
  _objc_release(param_4);
  _objc_release(lVar14);
  _objc_release(uVar5);
  _objc_release(uVar13);
LAB_00620d14:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(lVar11);
  return;
}



/* Entry: 00620da8; end: 00620dd3; -[SCFuture .cxx_destruct] */

void FUN_00620da8(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  _objc_storeStrong(param_1 + 0x20,0);
  puVar2 = *(undefined8 **)(param_1 + 8);
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_1 + 0x10);
    puVar1 = puVar2;
    if (puVar2 != puVar3) {
      do {
        _objc_release(puVar3[-2]);
        puVar3 = puVar3 + -3;
        _objc_release(*puVar3);
      } while (puVar3 != puVar2);
      puVar1 = *(undefined8 **)(param_1 + 8);
    }
    *(undefined8 **)(param_1 + 0x10) = puVar2;
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(puVar1);
    return;
  }
  return;
}



/* Entry: 00620dd4; end: 00620e07; -[SCFuture .cxx_construct] */

void FUN_00620dd4(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 00620e08; end: 00620e73;  */

void FUN_00620e08(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)param_1[1];
    puVar1 = puVar2;
    if (puVar2 != puVar3) {
      do {
        _objc_release(puVar3[-2]);
        puVar3 = puVar3 + -3;
        _objc_release(*puVar3);
      } while (puVar3 != puVar2);
      puVar1 = (undefined8 *)*param_1;
    }
    param_1[1] = puVar2;
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(puVar1);
    return;
  }
  return;
}



/* Entry: 00620e74; end: 00620e87;  */

void FUN_00620e74(void)

{
  FUN_0040d774("vector");
                    /* WARNING: Could not recover jumptable at 0x0078a5d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)();
  return;
}



/* Entry: 00620e88; end: 00620e93;  */

void FUN_00620e88(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0078a5d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_performImmediatelyIfCurrentPerfo_00abd680,param_2);
  return;
}



/* Entry: 00620e94; end: 00620eab; -[sc_async_queue init] */

undefined8 FUN_00620e94(void)

{
  _objc_release();
  return 0;
}



/* Entry: 00620eac; end: 00620eb3; -[sc_async_queue isEqual:] */

undefined8 FUN_00620eac(void)

{
  return 0;
}



/* Entry: 00620eb4; end: 00620ebb; -[sc_async_queue hash] */

undefined8 FUN_00620eb4(void)

{
  return 0;
}



/* Entry: 00620ebc; end: 00620ec3; -[sc_async_queue copyWithZone:] */

undefined8 FUN_00620ebc(void)

{
  return 0;
}



/* Entry: 00620ec4; end: 00620ef7; -[sc_async_queue _init] */

void FUN_00620ec4(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR__OBJC_CLASS___sc_async_queue_00ac4408;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_00abbf70);
  return;
}



/* Entry: 00620ef8; end: 00620f13;  */

void _sc_async_assert(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077f2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_assertQueue_00aba9a8);
  return;
}



/* Entry: 00620f14; end: 00620f17; -[sc_async_queue perform:] */

void FUN_00620f14(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077e0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s__withoutOverridingQoSAsync__00aba530);
  return;
}



/* Entry: 00620f18; end: 00620f1b; -[sc_async_queue perform:after:] */

void FUN_00620f18(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077bf50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s__afterDelay_async__00ab9cc8);
  return;
}



/* Entry: 00620f1c; end: 00620f1f; -[sc_async_queue assertQueue] */

void FUN_00620f1c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077c050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s__assertIsCurrentQueue_00ab9d08);
  return;
}



/* Entry: 00620f20; end: 00620f23; -[sc_async_queue assertNotQueue] */

void FUN_00620f20(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077c070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s__assertIsNotCurrentQueue_00ab9d10);
  return;
}



/* Entry: 00620f24; end: 00620f27; -[sc_async_queue queue] */

void FUN_00620f24(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077de90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s__unsafeRawQueue_00aba498);
  return;
}



/* Entry: 00620f28; end: 00620f2b; -[sc_async_queue performImmediatelyIfCurrentPerformer:] */

void FUN_00620f28(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s__ifCurrentQueueInvokeOtherwiseAs_00aba068);
  return;
}



/* Entry: 00620f2c; end: 00620f2f; -[sc_async_queue isCurrentPerformer] */

void FUN_00620f2c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s__isCurrentQueue_00aba0d8);
  return;
}



/* Entry: 00620f30; end: 00620f37; +[SCMainThreadTracer sharedInstance] */

undefined8 FUN_00620f30(void)

{
  return 0;
}



/* Entry: 00620f38; end: 00620f4f; -[SCMainThreadTracer init] */

undefined8 FUN_00620f38(void)

{
  _objc_release();
  return 0;
}



/* Entry: 00620f50; end: 00620f57; -[SCMainThreadTracer grapheneLogger] */

undefined8 FUN_00620f50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 00620f58; end: 00620f5f; -[SCMainThreadTracer setGrapheneLogger:] */

void FUN_00620f58(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 00620f60; end: 00620f67; -[SCMainThreadTracer concurrency] */

undefined4 FUN_00620f60(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 00620f68; end: 00620f6f; -[SCMainThreadTracer setConcurrency:] */

void FUN_00620f68(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0xc) = param_3;
  return;
}



/* Entry: 00620f70; end: 00620f77; -[SCMainThreadTracer inTransition] */

undefined1 FUN_00620f70(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 00620f78; end: 00620f7f; -[SCMainThreadTracer setInTransition:] */

void FUN_00620f78(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 00620f80; end: 00620f8b; -[SCMainThreadTracer loggingQueue] */

void FUN_00620f80(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0077a9d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_0099ad38)(param_1,param_2,0x18,1);
  return;
}



/* Entry: 00620f8c; end: 00620f97; -[SCMainThreadTracer .cxx_destruct] */

void FUN_00620f8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 0x18,0);
  return;
}



/* Entry: 00620f98; end: 00620fe3; +[SCResult failureWithError:] */

void FUN_00620f98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___SCResult_00ac2c10;
  _objc_alloc_init();
  *(undefined8 *)(puVar1 + 8) = 1;
  uVar2 = *(undefined8 *)(puVar1 + 0x18);
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 00620fe4; end: 00621027; +[SCResult successWithObject:] */

void FUN_00620fe4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___SCResult_00ac2c10;
  _objc_alloc_init();
  uVar2 = *(undefined8 *)(puVar1 + 0x10);
  *(undefined8 *)(puVar1 + 8) = 0;
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 00621028; end: 0062104b; -[SCResult copyWithZone:] */

undefined8 FUN_00621028(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 0062104c; end: 006210c3; -[SCResult hash] */

undefined8 * FUN_0062104c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_40 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x007843a0();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar1;
  func_0x007843a0();
  uStack_30 = uVar2;
  func_0x0076fd30(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_00621154:
    puVar6 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_00621160;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(long *)((long)puVar3 + 8) == *(long *)(param_3 + 8))) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x007877e0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
        if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x007877e0();
          goto LAB_00621160;
        }
        goto LAB_00621154;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_00621160:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 006210c4; end: 0062117b; -[SCResult isEqual:] */

long FUN_006210c4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_00621154:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_00621160;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x007877e0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x007877e0();
          goto LAB_00621160;
        }
        goto LAB_00621154;
      }
    }
    lVar3 = 0;
  }
LAB_00621160:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 0062117c; end: 006211ff; -[SCResult matchSuccess:failure:] */

void FUN_0062117c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 == 0) goto LAB_006211e4;
    lVar2 = 0x18;
    lVar1 = param_4;
  }
  else {
    if (*(long *)(param_1 + 8) != 0 || param_3 == 0) goto LAB_006211e4;
    lVar2 = 0x10;
    lVar1 = param_3;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + lVar2));
LAB_006211e4:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 00621200; end: 006212b3; -[SCResult map:] */

void FUN_00621200(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long unaff_x21;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 8) == 1) {
    _objc_opt_class(param_1);
    func_0x007830c0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x21 = param_1;
  }
  else if (*(long *)(param_1 + 8) == 0) {
    unaff_x21 = param_1;
    _objc_opt_class(param_1);
    lVar1 = param_3;
    (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(param_1 + 0x10));
    _objc_retainAutoreleasedReturnValue();
    func_0x00792500(unaff_x21);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(unaff_x21);
  return;
}



/* Entry: 006212b4; end: 00621337; -[SCResult flatMap:] */

void FUN_006212b4(long param_1,undefined8 param_2,long param_3)

{
  long unaff_x21;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 8) == 1) {
    _objc_opt_class(param_1);
    func_0x007830c0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x21 = param_1;
  }
  else if (*(long *)(param_1 + 8) == 0) {
    unaff_x21 = param_3;
    (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(param_1 + 0x10));
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(unaff_x21);
  return;
}



/* Entry: 00621338; end: 00621367; -[SCResult .cxx_destruct] */

void FUN_00621338(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 0x10,0);
  return;
}



/* Entry: 00621368; end: 006213df; -[FCAdHocFasterDecodable initWithClassName:] */

undefined1 * FUN_00621368(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_00ac4410;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
    func_0x00782040();
    *(undefined **)((long)puVar1 + 8) = puVar2;
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
    _objc_opt_new();
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 006213e0; end: 0062140f; -[FCAdHocFasterDecodable asDictionary] */

undefined8 FUN_006213e0(long param_1,undefined8 param_2)

{
  func_0x0078f4e0(*(undefined8 *)(param_1 + 8),param_2,*(undefined8 *)(param_1 + 0x10),
                  &PTR____CFConstantStringClassReference_00a478e0);
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 00621410; end: 00621417; -[FCAdHocFasterDecodable setObject:forUInt64Key:] */

void FUN_00621410(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077e730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 0x10),PTR_s_addObject__00aba6c0);
  return;
}



/* Entry: 00621418; end: 00621447; -[FCAdHocFasterDecodable setBool:forUInt64Key:] */

void FUN_00621418(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789be0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
                    /* WARNING: Could not recover jumptable at 0x0077e730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(uVar2,PTR_s_addObject__00aba6c0,puVar1);
  return;
}



/* Entry: 00621448; end: 00621477; -[FCAdHocFasterDecodable setSInt8:forUInt64Key:] */

void FUN_00621448(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789c00(PTR__OBJC_CLASS___NSNumber_00ac29d8);
                    /* WARNING: Could not recover jumptable at 0x0077e730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(uVar2,PTR_s_addObject__00aba6c0,puVar1);
  return;
}



/* Entry: 00621478; end: 006214a7; -[FCAdHocFasterDecodable setSInt16:forUInt64Key:] */

void FUN_00621478(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789ce0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
                    /* WARNING: Could not recover jumptable at 0x0077e730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(uVar2,PTR_s_addObject__00aba6c0,puVar1);
  return;
}



/* Entry: 006214a8; end: 006214d7; -[FCAdHocFasterDecodable setSInt32:forUInt64Key:] */

void FUN_006214a8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789c60(PTR__OBJC_CLASS___NSNumber_00ac29d8);
                    /* WARNING: Could not recover jumptable at 0x0077e730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(uVar2,PTR_s_addObject__00aba6c0,puVar1);
  return;
}



/* Entry: 006214d8; end: 00621507; -[FCAdHocFasterDecodable setSInt64:forUInt64Key:] */

void FUN_006214d8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789cc0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
                    /* WARNING: Could not recover jumptable at 0x0077e730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(uVar2,PTR_s_addObject__00aba6c0,puVar1);
  return;
}



/* Entry: 00621508; end: 00621537; -[FCAdHocFasterDecodable setUInt8:forUInt64Key:] */

void FUN_00621508(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789d00(PTR__OBJC_CLASS___NSNumber_00ac29d8);
                    /* WARNING: Could not recover jumptable at 0x0077e730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(uVar2,PTR_s_addObject__00aba6c0,puVar1);
  return;
}



/* Entry: 00621538; end: 00621567; -[FCAdHocFasterDecodable setUInt16:forUInt64Key:] */

void FUN_00621538(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789d80(PTR__OBJC_CLASS___NSNumber_00ac29d8);
                    /* WARNING: Could not recover jumptable at 0x0077e730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(uVar2,PTR_s_addObject__00aba6c0,puVar1);
  return;
}



/* Entry: 00621568; end: 00621597; -[FCAdHocFasterDecodable setUInt32:forUInt64Key:] */

void FUN_00621568(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789d20(PTR__OBJC_CLASS___NSNumber_00ac29d8);
                    /* WARNING: Could not recover jumptable at 0x0077e730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(uVar2,PTR_s_addObject__00aba6c0,puVar1);
  return;
}



/* Entry: 00621598; end: 006215c7; -[FCAdHocFasterDecodable setUInt64:forUInt64Key:] */

void FUN_00621598(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789d60(PTR__OBJC_CLASS___NSNumber_00ac29d8);
                    /* WARNING: Could not recover jumptable at 0x0077e730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(uVar2,PTR_s_addObject__00aba6c0,puVar1);
  return;
}



/* Entry: 006215c8; end: 006215f7; -[FCAdHocFasterDecodable setFloat:forUInt64Key:] */

void FUN_006215c8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789c40(PTR__OBJC_CLASS___NSNumber_00ac29d8);
                    /* WARNING: Could not recover jumptable at 0x0077e730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(uVar2,PTR_s_addObject__00aba6c0,puVar1);
  return;
}



/* Entry: 006215f8; end: 00621627; -[FCAdHocFasterDecodable setDouble:forUInt64Key:] */

void FUN_006215f8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789c20(PTR__OBJC_CLASS___NSNumber_00ac29d8);
                    /* WARNING: Could not recover jumptable at 0x0077e730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(uVar2,PTR_s_addObject__00aba6c0,puVar1);
  return;
}



/* Entry: 00621628; end: 00621673; -[FCAdHocFasterDecodable setPoint:forUInt64Key:] */

void FUN_00621628(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSValue_00ac32b0;
  uStack_30 = param_1;
  uStack_28 = param_2;
  func_0x00793620(PTR__OBJC_CLASS___NSValue_00ac32b0,param_4,&uStack_30,&UNK_0090e29f);
  func_0x0077e720(uVar2,param_4,puVar1);
  return;
}



/* Entry: 00621674; end: 006216bf; -[FCAdHocFasterDecodable setSize:forUInt64Key:] */

void FUN_00621674(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSValue_00ac32b0;
  uStack_30 = param_1;
  uStack_28 = param_2;
  func_0x00793620(PTR__OBJC_CLASS___NSValue_00ac32b0,param_4,&uStack_30,&UNK_0090e2ac);
  func_0x0077e720(uVar2,param_4,puVar1);
  return;
}



/* Entry: 006216c0; end: 0062170f; -[FCAdHocFasterDecodable setRect:forUInt64Key:] */

void FUN_006216c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = *(undefined8 *)(param_5 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSValue_00ac32b0;
  uStack_40 = param_1;
  uStack_38 = param_2;
  uStack_30 = param_3;
  uStack_28 = param_4;
  func_0x00793620(PTR__OBJC_CLASS___NSValue_00ac32b0,param_6,&uStack_40,&UNK_0090e2b8);
  func_0x0077e720(uVar2,param_6,puVar1);
  return;
}



/* Entry: 00621710; end: 0062173f; -[FCAdHocFasterDecodable setRange:forUInt64Key:] */

void FUN_00621710(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSValue_00ac32b0;
  func_0x00793760(PTR__OBJC_CLASS___NSValue_00ac32b0);
                    /* WARNING: Could not recover jumptable at 0x0077e730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(uVar2,PTR_s_addObject__00aba6c0,puVar1);
  return;
}



/* Entry: 00621740; end: 0062178b; -[FCAdHocFasterDecodable setVector:forUInt64Key:] */

void FUN_00621740(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSValue_00ac32b0;
  uStack_30 = param_1;
  uStack_28 = param_2;
  func_0x00793620(PTR__OBJC_CLASS___NSValue_00ac32b0,param_4,&uStack_30,&UNK_0090e2d9);
  func_0x0077e720(uVar2,param_4,puVar1);
  return;
}



/* Entry: 0062178c; end: 006217db; -[FCAdHocFasterDecodable setAffineTransform:forUInt64Key:] */

void FUN_0062178c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_48 = param_3[1];
  uStack_50 = *param_3;
  uStack_38 = param_3[3];
  uStack_40 = param_3[2];
  uStack_28 = param_3[5];
  uStack_30 = param_3[4];
  puVar1 = PTR__OBJC_CLASS___NSValue_00ac32b0;
  func_0x00793660(PTR__OBJC_CLASS___NSValue_00ac32b0,param_2,&uStack_50);
  func_0x0077e720(uVar2,param_2,puVar1);
  return;
}



/* Entry: 006217dc; end: 0062183b; -[FCAdHocFasterDecodable set3DTransform:forUInt64Key:] */

void FUN_006217dc(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_58 = param_3[9];
  uStack_60 = param_3[8];
  uStack_48 = param_3[0xb];
  uStack_50 = param_3[10];
  uStack_38 = param_3[0xd];
  uStack_40 = param_3[0xc];
  uStack_28 = param_3[0xf];
  uStack_30 = param_3[0xe];
  uStack_98 = param_3[1];
  uStack_a0 = *param_3;
  uStack_88 = param_3[3];
  uStack_90 = param_3[2];
  uStack_78 = param_3[5];
  uStack_80 = param_3[4];
  uStack_68 = param_3[7];
  uStack_70 = param_3[6];
  puVar1 = PTR__OBJC_CLASS___NSValue_00ac32b0;
  func_0x00793640(PTR__OBJC_CLASS___NSValue_00ac32b0,param_2,&uStack_a0);
  func_0x0077e720(uVar2,param_2,puVar1);
  return;
}



/* Entry: 0062183c; end: 0062188b; -[FCAdHocFasterDecodable setCMTime:forUInt64Key:] */

void FUN_0062183c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = param_3[1];
  uStack_40 = *param_3;
  uStack_30 = param_3[2];
  puVar1 = PTR__OBJC_CLASS___NSValue_00ac32b0;
  func_0x007936a0(PTR__OBJC_CLASS___NSValue_00ac32b0,param_2,&uStack_40);
  func_0x0077e720(uVar2,param_2,puVar1);
  return;
}



/* Entry: 0062188c; end: 006218db; -[FCAdHocFasterDecodable setCMTimeRange:forUInt64Key:] */

void FUN_0062188c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_48 = param_3[1];
  uStack_50 = *param_3;
  uStack_38 = param_3[3];
  uStack_40 = param_3[2];
  uStack_28 = param_3[5];
  uStack_30 = param_3[4];
  puVar1 = PTR__OBJC_CLASS___NSValue_00ac32b0;
  func_0x007936e0(PTR__OBJC_CLASS___NSValue_00ac32b0,param_2,&uStack_50);
  func_0x0077e720(uVar2,param_2,puVar1);
  return;
}



/* Entry: 006218dc; end: 00621933; -[FCAdHocFasterDecodable setCMTimeMapping:forUInt64Key:] */

void FUN_006218dc(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_58 = param_3[5];
  uStack_60 = param_3[4];
  uStack_48 = param_3[7];
  uStack_50 = param_3[6];
  uStack_38 = param_3[9];
  uStack_40 = param_3[8];
  uStack_28 = param_3[0xb];
  uStack_30 = param_3[10];
  uStack_78 = param_3[1];
  uStack_80 = *param_3;
  uStack_68 = param_3[3];
  uStack_70 = param_3[2];
  puVar1 = PTR__OBJC_CLASS___NSValue_00ac32b0;
  func_0x007936c0(PTR__OBJC_CLASS___NSValue_00ac32b0,param_2,&uStack_80);
  func_0x0077e720(uVar2,param_2,puVar1);
  return;
}



/* Entry: 00621934; end: 00621963; -[FCAdHocFasterDecodable setUIEdgeInsets:forUInt64Key:] */

void FUN_00621934(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSValue_00ac32b0;
  func_0x00793780(PTR__OBJC_CLASS___NSValue_00ac32b0);
                    /* WARNING: Could not recover jumptable at 0x0077e730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(uVar2,PTR_s_addObject__00aba6c0,puVar1);
  return;
}



/* Entry: 00621964; end: 00621d5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00621964(int *param_1,undefined8 param_2)

{
  byte bVar1;
  bool bVar2;
  int *piVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong *puVar10;
  code *pcVar11;
  int *piVar12;
  undefined *puVar13;
  ulong uVar14;
  ulong uStack_58;
  
  piVar3 = param_1;
  func_0x007882e0();
  if (((int *)((long)&MACH_HEADER.cputype + 3) < piVar3) &&
     (func_0x0077fde0(), *param_1 == 0x46415354)) {
    bVar2 = (short)param_1[1] == 3;
    if ((bVar2 && 2 < *(ushort *)((long)param_1 + 6)) &&
        (!bVar2 || *(ushort *)((long)param_1 + 6) != 3)) {
      uStack_58 = 8;
      puVar13 = PTR_PTR_00ac3598;
      _objc_opt_new();
      _objc_autorelease();
      *(undefined8 *)(puVar13 + _DAT_00ac5b84) = param_2;
      *(int **)(puVar13 + _DAT_00ac5b88) = param_1;
      puVar10 = &uStack_58;
      *(ulong **)(puVar13 + _DAT_00ac5b8c) = puVar10;
      *(int **)(puVar13 + _DAT_00ac5b90) = piVar3;
      puVar4 = PTR__OBJC_CLASS___NSMutableData_00ac2cc8;
      piVar12 = (int *)(uStack_58 + 4);
      if (piVar3 < piVar12) {
        func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
        puVar10 = *(ulong **)(puVar13 + _DAT_00ac5b8c);
        piVar12 = (int *)(*puVar10 + 4);
      }
      *puVar10 = (ulong)piVar12;
      func_0x00781640();
      *(undefined **)(puVar13 + _DAT_00ac5b94) = puVar4;
      puVar4 = PTR__OBJC_CLASS___NSMutableData_00ac2cc8;
      puVar10 = *(ulong **)(puVar13 + _DAT_00ac5b8c);
      uVar14 = *puVar10 + 4;
      if (*(ulong *)(puVar13 + _DAT_00ac5b90) < uVar14) {
        func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
        puVar10 = *(ulong **)(puVar13 + _DAT_00ac5b8c);
        uVar14 = *puVar10 + 4;
      }
      *puVar10 = uVar14;
      func_0x00781640();
      puVar8 = PTR__OBJC_CLASS___NSMutableData_00ac2cc8;
      puVar10 = *(ulong **)(puVar13 + _DAT_00ac5b8c);
      uVar14 = *puVar10 + 4;
      if (*(ulong *)(puVar13 + _DAT_00ac5b90) < uVar14) {
        func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
        puVar10 = *(ulong **)(puVar13 + _DAT_00ac5b8c);
        uVar14 = *puVar10 + 4;
      }
      *puVar10 = uVar14;
      func_0x00781640();
      uVar5 = 0;
      _CFArrayCreateMutable(0,0,0);
      _objc_autorelease();
      *(undefined **)(puVar13 + _DAT_00ac5b98) = puVar4;
      *(undefined **)(puVar13 + _DAT_00ac5b9c) = puVar8;
      *(undefined8 *)(puVar13 + _DAT_00ac5ba0) = uVar5;
      puVar10 = *(ulong **)(puVar13 + _DAT_00ac5b8c);
      uVar9 = *puVar10;
      uVar14 = uVar9 + 1;
      if (*(ulong *)(puVar13 + _DAT_00ac5b90) < uVar14) {
        func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
        puVar10 = *(ulong **)(puVar13 + _DAT_00ac5b8c);
        uVar9 = *puVar10;
        uVar14 = uVar9 + 1;
      }
      bVar1 = *(byte *)(*(long *)(puVar13 + _DAT_00ac5b88) + uVar9);
      *puVar10 = uVar14;
      if ((bVar1 < 0x35) &&
         (pcVar11 = *(code **)(*(long *)(puVar13 + _DAT_00ac5b84) + (ulong)bVar1 * 8),
         pcVar11 != (code *)0x0)) {
        (*pcVar11)(puVar13);
      }
      else {
        func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
        puVar13 = (undefined *)0x0;
      }
      puVar6 = puVar4;
      _CFDataGetLength();
      if (puVar6 <= (undefined1 *)((long)&MACH_HEADER.cputype + 3)) {
        return puVar13;
      }
      uVar14 = 0;
      do {
        puVar7 = puVar4;
        _CFDataGetLength();
        if (uVar14 < (ulong)puVar7 >> 3) {
          puVar7 = puVar4;
          _CFDataGetBytePtr();
          puVar8 = *(undefined **)(puVar7 + uVar14 * 8);
        }
        else {
          func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
          puVar8 = PTR__OBJC_CLASS___NSNull_00ac2f90;
          func_0x00789b20();
        }
        if (*(long *)(puVar8 + 0x28) != 0) {
          _free();
        }
        uVar14 = uVar14 + 1;
      } while ((ulong)puVar6 >> 3 != uVar14);
      return puVar13;
    }
    _NSLog(&PTR____CFConstantStringClassReference_00a47900);
  }
  return (undefined *)0x0;
}



/* Entry: 00621d5c; end: 00621e2b;  */

void FUN_00621d5c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  
  uVar1 = param_1;
  _CFDataGetLength();
  if (7 < uVar1) {
    uVar5 = 0;
    do {
      uVar2 = param_1;
      _CFDataGetLength();
      if (uVar5 < uVar2 >> 3) {
        uVar2 = param_1;
        _CFDataGetBytePtr();
        lVar3 = *(long *)(*(long *)(uVar2 + uVar5 * 8) + 0x28);
      }
      else {
        func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                        &PTR____CFConstantStringClassReference_00a478a0,
                        &PTR____CFConstantStringClassReference_00a479e0);
        puVar4 = PTR__OBJC_CLASS___NSNull_00ac2f90;
        func_0x00789b20();
        lVar3 = *(long *)(puVar4 + 0x28);
      }
      if (lVar3 != 0) {
        _free();
      }
      uVar5 = uVar5 + 1;
    } while (uVar1 >> 3 != uVar5);
  }
  return;
}



/* Entry: 00621e2c; end: 00621e33; +[FastCoder objectWithData:] */

void FUN_00621e2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00789f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_objectWithData_adHocDeserializat_00abd4e8,param_3,0);
  return;
}



/* Entry: 00621e34; end: 00621e63; +[FastCoder objectWithData:adHocDeserialization:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00621e34(undefined8 param_1,undefined8 param_2,int *param_3,int param_4)

{
  undefined **ppuVar1;
  byte bVar2;
  bool bVar3;
  int *piVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong *puVar11;
  code *pcVar12;
  int *piVar13;
  undefined *puVar14;
  ulong uVar15;
  ulong uStack_58;
  
  ppuVar1 = &PTR_DAT_00b238f8;
  if (param_4 == 0) {
    ppuVar1 = &PTR_DAT_00b23aa0;
  }
  piVar4 = param_3;
  func_0x007882e0();
  if (((int *)((long)&MACH_HEADER.cputype + 3) < piVar4) &&
     (func_0x0077fde0(), *param_3 == 0x46415354)) {
    bVar3 = (short)param_3[1] == 3;
    if ((bVar3 && 2 < *(ushort *)((long)param_3 + 6)) &&
        (!bVar3 || *(ushort *)((long)param_3 + 6) != 3)) {
      uStack_58 = 8;
      puVar14 = PTR_PTR_00ac3598;
      _objc_opt_new();
      _objc_autorelease();
      *(undefined ***)(puVar14 + _DAT_00ac5b84) = ppuVar1;
      *(int **)(puVar14 + _DAT_00ac5b88) = param_3;
      puVar11 = &uStack_58;
      *(ulong **)(puVar14 + _DAT_00ac5b8c) = puVar11;
      *(int **)(puVar14 + _DAT_00ac5b90) = piVar4;
      puVar5 = PTR__OBJC_CLASS___NSMutableData_00ac2cc8;
      piVar13 = (int *)(uStack_58 + 4);
      if (piVar4 < piVar13) {
        func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
        puVar11 = *(ulong **)(puVar14 + _DAT_00ac5b8c);
        piVar13 = (int *)(*puVar11 + 4);
      }
      *puVar11 = (ulong)piVar13;
      func_0x00781640();
      *(undefined **)(puVar14 + _DAT_00ac5b94) = puVar5;
      puVar5 = PTR__OBJC_CLASS___NSMutableData_00ac2cc8;
      puVar11 = *(ulong **)(puVar14 + _DAT_00ac5b8c);
      uVar15 = *puVar11 + 4;
      if (*(ulong *)(puVar14 + _DAT_00ac5b90) < uVar15) {
        func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
        puVar11 = *(ulong **)(puVar14 + _DAT_00ac5b8c);
        uVar15 = *puVar11 + 4;
      }
      *puVar11 = uVar15;
      func_0x00781640();
      puVar9 = PTR__OBJC_CLASS___NSMutableData_00ac2cc8;
      puVar11 = *(ulong **)(puVar14 + _DAT_00ac5b8c);
      uVar15 = *puVar11 + 4;
      if (*(ulong *)(puVar14 + _DAT_00ac5b90) < uVar15) {
        func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
        puVar11 = *(ulong **)(puVar14 + _DAT_00ac5b8c);
        uVar15 = *puVar11 + 4;
      }
      *puVar11 = uVar15;
      func_0x00781640();
      uVar6 = 0;
      _CFArrayCreateMutable(0,0,0);
      _objc_autorelease();
      *(undefined **)(puVar14 + _DAT_00ac5b98) = puVar5;
      *(undefined **)(puVar14 + _DAT_00ac5b9c) = puVar9;
      *(undefined8 *)(puVar14 + _DAT_00ac5ba0) = uVar6;
      puVar11 = *(ulong **)(puVar14 + _DAT_00ac5b8c);
      uVar10 = *puVar11;
      uVar15 = uVar10 + 1;
      if (*(ulong *)(puVar14 + _DAT_00ac5b90) < uVar15) {
        func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
        puVar11 = *(ulong **)(puVar14 + _DAT_00ac5b8c);
        uVar10 = *puVar11;
        uVar15 = uVar10 + 1;
      }
      bVar2 = *(byte *)(*(long *)(puVar14 + _DAT_00ac5b88) + uVar10);
      *puVar11 = uVar15;
      if ((bVar2 < 0x35) &&
         (pcVar12 = *(code **)(*(long *)(puVar14 + _DAT_00ac5b84) + (ulong)bVar2 * 8),
         pcVar12 != (code *)0x0)) {
        (*pcVar12)(puVar14);
      }
      else {
        func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
        puVar14 = (undefined *)0x0;
      }
      puVar7 = puVar5;
      _CFDataGetLength();
      if (puVar7 <= (undefined1 *)((long)&MACH_HEADER.cputype + 3)) {
        return puVar14;
      }
      uVar15 = 0;
      do {
        puVar8 = puVar5;
        _CFDataGetLength();
        if (uVar15 < (ulong)puVar8 >> 3) {
          puVar8 = puVar5;
          _CFDataGetBytePtr();
          puVar9 = *(undefined **)(puVar8 + uVar15 * 8);
        }
        else {
          func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
          puVar9 = PTR__OBJC_CLASS___NSNull_00ac2f90;
          func_0x00789b20();
        }
        if (*(long *)(puVar9 + 0x28) != 0) {
          _free();
        }
        uVar15 = uVar15 + 1;
      } while ((ulong)puVar7 >> 3 != uVar15);
      return puVar14;
    }
    _NSLog(&PTR____CFConstantStringClassReference_00a47900);
  }
  return (undefined *)0x0;
}



/* Entry: 00621e64; end: 0062248b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00621e64(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  
  puVar4 = *(ulong **)(param_1 + _DAT_00ac5b8c);
  uVar3 = *puVar4;
  uVar1 = uVar3 + 1;
  if (*(ulong *)(param_1 + _DAT_00ac5b90) < uVar1) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                    &PTR____CFConstantStringClassReference_00a478a0,
                    &PTR____CFConstantStringClassReference_00a479a0);
    puVar4 = *(ulong **)(param_1 + _DAT_00ac5b8c);
    uVar3 = *puVar4;
    uVar1 = uVar3 + 1;
  }
  uVar5 = (ulong)*(byte *)(*(long *)(param_1 + _DAT_00ac5b88) + uVar3);
  *puVar4 = uVar1;
  uVar3 = *(ulong *)(param_1 + _DAT_00ac5b94);
  uVar1 = uVar3;
  _CFDataGetLength();
  if (uVar5 < uVar1 >> 3) {
    _CFDataGetBytePtr();
    return *(undefined **)(uVar3 + uVar5 * 8);
  }
  func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
  puVar2 = PTR__OBJC_CLASS___NSNull_00ac2f90;
                    /* WARNING: Could not recover jumptable at 0x00789b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(PTR__OBJC_CLASS___NSNull_00ac2f90,PTR_s_null_00abd3d8);
  return puVar2;
}



/* Entry: 0062248c; end: 006224e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_0062248c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_28;
  
  lVar1 = param_1;
  FUN_0062ccc0();
  uVar2 = *(undefined8 *)(param_1 + _DAT_00ac5b9c);
  lStack_28 = lVar1;
  _CFDataGetLength(uVar2);
  _CFDataAppendBytes(uVar2,&lStack_28,8);
  return lVar1;
}



/* Entry: 006224e4; end: 00622ecb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_006224e4(undefined *param_1,undefined8 param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  code *pcVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  int iVar12;
  undefined *puStack_68;
  
  puVar7 = *(ulong **)(param_1 + _DAT_00ac5b8c);
  uVar5 = *puVar7;
  if ((uVar5 & 3) != 0) {
    uVar5 = (uVar5 & 0xfffffffffffffffc) + 4;
    *puVar7 = uVar5;
  }
  uVar6 = uVar5 + 4;
  puVar2 = param_1;
  if (*(ulong *)(param_1 + _DAT_00ac5b90) < uVar6) {
    puVar2 = PTR__OBJC_CLASS___NSException_00ac2f30;
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                    &PTR____CFConstantStringClassReference_00a478a0,
                    &PTR____CFConstantStringClassReference_00a479a0);
    puVar7 = *(ulong **)(param_1 + _DAT_00ac5b8c);
    uVar5 = *puVar7;
    uVar6 = uVar5 + 4;
  }
  iVar12 = *(int *)(*(long *)(param_1 + _DAT_00ac5b88) + uVar5);
  *puVar7 = uVar6;
  puVar3 = PTR____NSDictionary0__struct_00999d18;
  if (iVar12 != 0) {
    _CFAllocatorGetDefault();
    _CFAllocatorAllocate();
    puVar3 = puVar2;
    _CFAllocatorGetDefault();
    _CFAllocatorAllocate();
    if (puVar3 == (undefined *)0x0) {
      func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
    }
    lVar10 = 0;
    do {
      puVar7 = *(ulong **)(param_1 + _DAT_00ac5b8c);
      uVar6 = *puVar7;
      uVar5 = uVar6 + 1;
      if (*(ulong *)(param_1 + _DAT_00ac5b90) < uVar5) {
        func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
        puVar7 = *(ulong **)(param_1 + _DAT_00ac5b8c);
        uVar6 = *puVar7;
        uVar5 = uVar6 + 1;
      }
      bVar1 = *(byte *)(*(long *)(param_1 + _DAT_00ac5b88) + uVar6);
      *puVar7 = uVar5;
      if ((bVar1 < 0x35) &&
         (pcVar8 = *(code **)(*(long *)(param_1 + _DAT_00ac5b84) + (ulong)bVar1 * 8),
         pcVar8 != (code *)0x0)) {
        puVar11 = param_1;
        (*pcVar8)();
      }
      else {
        func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
        puVar11 = (undefined *)0x0;
      }
      puVar7 = *(ulong **)(param_1 + _DAT_00ac5b8c);
      uVar6 = *puVar7;
      uVar5 = uVar6 + 1;
      if (*(ulong *)(param_1 + _DAT_00ac5b90) < uVar5) {
        func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
        puVar7 = *(ulong **)(param_1 + _DAT_00ac5b8c);
        uVar6 = *puVar7;
        uVar5 = uVar6 + 1;
      }
      bVar1 = *(byte *)(*(long *)(param_1 + _DAT_00ac5b88) + uVar6);
      *puVar7 = uVar5;
      if ((bVar1 < 0x35) &&
         (pcVar8 = *(code **)(*(long *)(param_1 + _DAT_00ac5b84) + (ulong)bVar1 * 8),
         pcVar8 != (code *)0x0)) {
        puVar4 = param_1;
        (*pcVar8)();
        if ((puVar11 != (undefined *)0x0) && (puVar4 != (undefined *)0x0)) {
          *(undefined **)(puVar3 + lVar10 * 8) = puVar11;
          *(undefined **)(puVar2 + lVar10 * 8) = puVar4;
          lVar10 = lVar10 + 1;
        }
      }
      else {
        func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
      }
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
    puVar3 = PTR____NSDictionary0__struct_00999d18;
    if (lVar10 != 0) {
      puVar3 = PTR__OBJC_CLASS___NSDictionary_00ac29e8;
      func_0x00782080();
    }
    _CFAllocatorGetDefault();
    _CFAllocatorDeallocate();
    _CFAllocatorGetDefault();
    _CFAllocatorDeallocate();
  }
  uVar9 = *(undefined8 *)(param_1 + _DAT_00ac5b94);
  puStack_68 = puVar3;
  _CFDataGetLength(uVar9);
  _CFDataAppendBytes(uVar9,&puStack_68,8);
  return puVar3;
}



/* Entry: 00622ecc; end: 00622ee3;  */

undefined * FUN_00622ecc(void)

{
  return PTR____kCFBooleanTrue_00999d28;
}



/* Entry: 00622ee4; end: 006232cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00622ee4(long param_1,undefined8 param_2)

{
  char cVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  
  puVar3 = *(ulong **)(param_1 + _DAT_00ac5b8c);
  uVar2 = *puVar3;
  uVar4 = uVar2 + 1;
  if (*(ulong *)(param_1 + _DAT_00ac5b90) < uVar4) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                    &PTR____CFConstantStringClassReference_00a478a0,
                    &PTR____CFConstantStringClassReference_00a479a0);
    puVar3 = *(ulong **)(param_1 + _DAT_00ac5b8c);
    uVar2 = *puVar3;
    uVar4 = uVar2 + 1;
  }
  cVar1 = *(char *)(*(long *)(param_1 + _DAT_00ac5b88) + uVar2);
  *puVar3 = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00789c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (PTR__OBJC_CLASS___NSNumber_00ac29d8,PTR_s_numberWithChar__00abd410,(long)cVar1);
  return;
}



/* Entry: 006232d0; end: 0062343f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_006232d0(long param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puStack_48;
  
  puVar4 = *(ulong **)(param_1 + _DAT_00ac5b8c);
  uVar6 = *puVar4;
  if ((uVar6 & 3) != 0) {
    uVar6 = (uVar6 & 0xfffffffffffffffc) + 4;
    *puVar4 = uVar6;
  }
  uVar5 = uVar6 + 4;
  lVar7 = (long)_DAT_00ac5b90;
  if (*(ulong *)(param_1 + lVar7) < uVar5) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                    &PTR____CFConstantStringClassReference_00a478a0,
                    &PTR____CFConstantStringClassReference_00a479a0);
    lVar7 = (long)_DAT_00ac5b90;
    puVar4 = *(ulong **)(param_1 + _DAT_00ac5b8c);
    uVar6 = *puVar4;
    uVar5 = uVar6 + 4;
  }
  uVar2 = *(uint *)(*(long *)(param_1 + _DAT_00ac5b88) + uVar6);
  *puVar4 = uVar5;
  iVar1 = 0;
  if ((uVar2 & 3) != 0) {
    iVar1 = 4 - (uVar2 & 3);
  }
  if (*(ulong *)(param_1 + lVar7) < uVar5 + (iVar1 + uVar2)) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
  }
  puVar3 = PTR__OBJC_CLASS___NSData_00ac2b10;
  func_0x007815e0();
  **(long **)(param_1 + _DAT_00ac5b8c) =
       **(long **)(param_1 + _DAT_00ac5b8c) + (ulong)(iVar1 + uVar2);
  uVar8 = *(undefined8 *)(param_1 + _DAT_00ac5b94);
  puStack_48 = puVar3;
  _CFDataGetLength(uVar8);
  _CFDataAppendBytes(uVar8,&puStack_48,8);
  return puVar3;
}



/* Entry: 00623440; end: 00623527;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00623440(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puStack_38;
  
  puVar3 = *(ulong **)(param_1 + _DAT_00ac5b8c);
  uVar2 = *puVar3;
  if ((uVar2 & 7) != 0) {
    uVar2 = (uVar2 & 0xfffffffffffffff8) + 8;
    *puVar3 = uVar2;
  }
  uVar4 = uVar2 + 8;
  if (*(ulong *)(param_1 + _DAT_00ac5b90) < uVar4) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                    &PTR____CFConstantStringClassReference_00a478a0,
                    &PTR____CFConstantStringClassReference_00a479a0);
    puVar3 = *(ulong **)(param_1 + _DAT_00ac5b8c);
    uVar2 = *puVar3;
    uVar4 = uVar2 + 8;
  }
  uVar5 = *(undefined8 *)(*(long *)(param_1 + _DAT_00ac5b88) + uVar2);
  *puVar3 = uVar4;
  puVar1 = PTR__OBJC_CLASS___NSDate_00ac2c88;
  func_0x00781920(uVar5);
  uVar5 = *(undefined8 *)(param_1 + _DAT_00ac5b94);
  puStack_38 = puVar1;
  _CFDataGetLength(uVar5);
  _CFDataAppendBytes(uVar5,&puStack_38,8);
  return puVar1;
}



/* Entry: 00623528; end: 0062390b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00623528(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puStack_88;
  
  puVar2 = *(ulong **)(param_1 + _DAT_00ac5b8c);
  uVar4 = *puVar2;
  if ((uVar4 & 7) != 0) {
    uVar4 = (uVar4 & 0xfffffffffffffff8) + 8;
    *puVar2 = uVar4;
  }
  uVar3 = uVar4 + 8;
  lVar5 = (long)_DAT_00ac5b90;
  if (*(ulong *)(param_1 + lVar5) < uVar3) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                    &PTR____CFConstantStringClassReference_00a478a0,
                    &PTR____CFConstantStringClassReference_00a479a0);
    lVar5 = (long)_DAT_00ac5b90;
    puVar2 = *(ulong **)(param_1 + _DAT_00ac5b8c);
    uVar4 = *puVar2;
    uVar3 = uVar4 + 8;
  }
  lVar6 = *(long *)(param_1 + _DAT_00ac5b88);
  uVar9 = *(undefined8 *)(lVar6 + uVar4);
  *puVar2 = uVar3;
  uVar4 = uVar3 + 8;
  if (*(ulong *)(param_1 + lVar5) < uVar4) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
    puVar2 = *(ulong **)(param_1 + _DAT_00ac5b8c);
    uVar3 = *puVar2;
    uVar4 = uVar3 + 8;
    lVar6 = *(long *)(param_1 + _DAT_00ac5b88);
  }
  uVar8 = *(undefined8 *)(lVar6 + uVar3);
  *puVar2 = uVar4;
  _CLLocationCoordinate2DMake(uVar9,uVar8);
  lVar5 = (long)_DAT_00ac5b90;
  puVar2 = *(ulong **)(param_1 + _DAT_00ac5b8c);
  uVar3 = *puVar2;
  uVar4 = uVar3 + 8;
  if (*(ulong *)(param_1 + lVar5) < uVar4) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
    lVar5 = (long)_DAT_00ac5b90;
    puVar2 = *(ulong **)(param_1 + _DAT_00ac5b8c);
    uVar3 = *puVar2;
    uVar4 = uVar3 + 8;
  }
  lVar6 = *(long *)(param_1 + _DAT_00ac5b88);
  uVar10 = *(undefined8 *)(lVar6 + uVar3);
  *puVar2 = uVar4;
  uVar3 = uVar4 + 8;
  if (*(ulong *)(param_1 + lVar5) < uVar3) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
    puVar2 = *(ulong **)(param_1 + _DAT_00ac5b8c);
    uVar4 = *puVar2;
    uVar3 = uVar4 + 8;
    lVar6 = *(long *)(param_1 + _DAT_00ac5b88);
    lVar5 = (long)_DAT_00ac5b90;
    uVar11 = *(undefined8 *)(lVar6 + uVar4);
    *puVar2 = uVar3;
    uVar4 = uVar4 + 0x10;
    if (uVar4 <= *(ulong *)(param_1 + lVar5)) goto LAB_006236bc;
LAB_00623824:
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
    puVar2 = *(ulong **)(param_1 + _DAT_00ac5b8c);
    uVar3 = *puVar2;
    uVar4 = uVar3 + 8;
    lVar6 = *(long *)(param_1 + _DAT_00ac5b88);
    lVar5 = (long)_DAT_00ac5b90;
    uVar12 = *(undefined8 *)(lVar6 + uVar3);
    *puVar2 = uVar4;
    uVar3 = uVar3 + 0x10;
    if (uVar3 <= *(ulong *)(param_1 + lVar5)) goto LAB_006236d4;
LAB_00623870:
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
    puVar2 = *(ulong **)(param_1 + _DAT_00ac5b8c);
    uVar4 = *puVar2;
    uVar3 = uVar4 + 8;
    lVar6 = *(long *)(param_1 + _DAT_00ac5b88);
    lVar5 = (long)_DAT_00ac5b90;
    uVar13 = *(undefined8 *)(lVar6 + uVar4);
    *puVar2 = uVar3;
    uVar4 = uVar4 + 0x10;
    if (uVar4 <= *(ulong *)(param_1 + lVar5)) goto LAB_006236ec;
LAB_006238bc:
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
    puVar2 = *(ulong **)(param_1 + _DAT_00ac5b8c);
    uVar3 = *puVar2;
    uVar4 = uVar3 + 8;
    lVar6 = *(long *)(param_1 + _DAT_00ac5b88);
    lVar5 = (long)_DAT_00ac5b90;
    uVar14 = *(undefined8 *)(lVar6 + uVar3);
    *puVar2 = uVar4;
    uVar3 = uVar3 + 0x10;
    if (uVar3 <= *(ulong *)(param_1 + lVar5)) goto LAB_00623734;
  }
  else {
    uVar11 = *(undefined8 *)(lVar6 + uVar4);
    *puVar2 = uVar3;
    uVar4 = uVar4 + 0x10;
    if (*(ulong *)(param_1 + lVar5) < uVar4) goto LAB_00623824;
LAB_006236bc:
    uVar12 = *(undefined8 *)(lVar6 + uVar3);
    *puVar2 = uVar4;
    uVar3 = uVar4 + 8;
    if (*(ulong *)(param_1 + lVar5) < uVar3) goto LAB_00623870;
LAB_006236d4:
    uVar13 = *(undefined8 *)(lVar6 + uVar4);
    *puVar2 = uVar3;
    uVar4 = uVar3 + 8;
    if (*(ulong *)(param_1 + lVar5) < uVar4) goto LAB_006238bc;
LAB_006236ec:
    uVar14 = *(undefined8 *)(lVar6 + uVar3);
    *puVar2 = uVar4;
    uVar3 = uVar4 + 8;
    if (uVar3 <= *(ulong *)(param_1 + lVar5)) goto LAB_00623734;
  }
  func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
  puVar2 = *(ulong **)(param_1 + _DAT_00ac5b8c);
  uVar4 = *puVar2;
  uVar3 = uVar4 + 8;
  lVar6 = *(long *)(param_1 + _DAT_00ac5b88);
LAB_00623734:
  uVar7 = *(undefined8 *)(lVar6 + uVar4);
  *puVar2 = uVar3;
  func_0x00781920(uVar7,PTR__OBJC_CLASS___NSDate_00ac2c88);
  puVar1 = PTR__OBJC_CLASS___CLLocation_00ac35c0;
  _objc_alloc();
  func_0x00785100(uVar9,uVar8,uVar10,uVar11,uVar12,uVar13,uVar14);
  _objc_autorelease();
  uVar9 = *(undefined8 *)(param_1 + _DAT_00ac5b94);
  puStack_88 = puVar1;
  _CFDataGetLength(uVar9);
  _CFDataAppendBytes(uVar9,&puStack_88,8);
  return puVar1;
}



/* Entry: 0062390c; end: 00623a23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_0062390c(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puStack_48;
  
  lVar5 = **(long **)(param_1 + _DAT_00ac5b8c);
  lVar2 = *(long *)(param_1 + _DAT_00ac5b88) + lVar5;
  _strlen();
  uVar1 = lVar2 + 1;
  if (*(ulong *)(param_1 + _DAT_00ac5b90) < uVar1 + lVar5) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
  }
  puVar3 = PTR__OBJC_CLASS___NSMutableString_00ac2cc0;
  if (uVar1 < 2) {
    func_0x00791e20();
  }
  else {
    _objc_alloc();
    func_0x00784e20();
    _objc_autorelease();
  }
  **(long **)(param_1 + _DAT_00ac5b8c) = **(long **)(param_1 + _DAT_00ac5b8c) + uVar1;
  uVar4 = *(undefined8 *)(param_1 + _DAT_00ac5b94);
  puStack_48 = puVar3;
  _CFDataGetLength(uVar4);
  _CFDataAppendBytes(uVar4,&puStack_48,8);
  return puVar3;
}



/* Entry: 00623a24; end: 00624283;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00623a24(long param_1,undefined8 param_2)

{
  int iVar1;
  byte bVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  code *pcVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  
  uStack_c0 = *(undefined8 *)PTR__kCFTypeDictionaryKeyCallBacks_00999d80;
  uStack_b8 = *(undefined8 *)(PTR__kCFTypeDictionaryKeyCallBacks_00999d80 + 8);
  uStack_b0 = *(undefined8 *)(PTR__kCFTypeDictionaryKeyCallBacks_00999d80 + 0x10);
  uStack_a8 = *(undefined8 *)(PTR__kCFTypeDictionaryKeyCallBacks_00999d80 + 0x18);
  pcStack_78 = FUN_0062cdb0;
  pcStack_70 = FUN_0062cdc8;
  pcStack_a0 = FUN_0062cdb0;
  puVar7 = *(ulong **)(param_1 + _DAT_00ac5b8c);
  uVar5 = *puVar7;
  if ((uVar5 & 3) != 0) {
    uVar5 = (uVar5 & 0xfffffffffffffffc) + 4;
    *puVar7 = uVar5;
  }
  uVar6 = uVar5 + 4;
  uStack_98 = uStack_c0;
  uStack_90 = uStack_b8;
  uStack_88 = uStack_b0;
  uStack_80 = uStack_a8;
  if (*(ulong *)(param_1 + _DAT_00ac5b90) < uVar6) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                    &PTR____CFConstantStringClassReference_00a478a0,
                    &PTR____CFConstantStringClassReference_00a479a0);
    puVar7 = *(ulong **)(param_1 + _DAT_00ac5b8c);
    uVar5 = *puVar7;
    uVar6 = uVar5 + 4;
  }
  iVar1 = *(int *)(*(long *)(param_1 + _DAT_00ac5b88) + uVar5);
  *puVar7 = uVar6;
  uVar3 = 0;
  _CFDictionaryCreateMutable(0,iVar1,&uStack_98,&uStack_c0);
  _objc_autorelease();
  uVar9 = *(undefined8 *)(param_1 + _DAT_00ac5b94);
  uStack_68 = uVar3;
  _CFDataGetLength(uVar9);
  _CFDataAppendBytes(uVar9,&uStack_68,8);
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
    puVar7 = *(ulong **)(param_1 + _DAT_00ac5b8c);
    uVar6 = *puVar7;
    uVar5 = uVar6 + 1;
    if (*(ulong *)(param_1 + _DAT_00ac5b90) < uVar5) {
      func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
      puVar7 = *(ulong **)(param_1 + _DAT_00ac5b8c);
      uVar6 = *puVar7;
      uVar5 = uVar6 + 1;
    }
    bVar2 = *(byte *)(*(long *)(param_1 + _DAT_00ac5b88) + uVar6);
    *puVar7 = uVar5;
    if ((bVar2 < 0x35) &&
       (pcVar8 = *(code **)(*(long *)(param_1 + _DAT_00ac5b84) + (ulong)bVar2 * 8),
       pcVar8 != (code *)0x0)) {
      lVar10 = param_1;
      (*pcVar8)();
    }
    else {
      func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
      lVar10 = 0;
    }
    puVar7 = *(ulong **)(param_1 + _DAT_00ac5b8c);
    uVar6 = *puVar7;
    uVar5 = uVar6 + 1;
    if (*(ulong *)(param_1 + _DAT_00ac5b90) < uVar5) {
      func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
      puVar7 = *(ulong **)(param_1 + _DAT_00ac5b8c);
      uVar6 = *puVar7;
      uVar5 = uVar6 + 1;
    }
    bVar2 = *(byte *)(*(long *)(param_1 + _DAT_00ac5b88) + uVar6);
    *puVar7 = uVar5;
    if ((bVar2 < 0x35) &&
       (pcVar8 = *(code **)(*(long *)(param_1 + _DAT_00ac5b84) + (ulong)bVar2 * 8),
       pcVar8 != (code *)0x0)) {
      lVar4 = param_1;
      (*pcVar8)();
      if (lVar4 != 0 && lVar10 != 0) {
        _CFDictionarySetValue(uVar3,lVar4,lVar10);
      }
    }
    else {
      func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
    }
  }
  return uVar3;
}



/* Entry: 00624284; end: 006243f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00624284(long param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puStack_48;
  
  puVar4 = *(ulong **)(param_1 + _DAT_00ac5b8c);
  uVar6 = *puVar4;
  if ((uVar6 & 3) != 0) {
    uVar6 = (uVar6 & 0xfffffffffffffffc) + 4;
    *puVar4 = uVar6;
  }
  uVar5 = uVar6 + 4;
  lVar7 = (long)_DAT_00ac5b90;
  if (*(ulong *)(param_1 + lVar7) < uVar5) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                    &PTR____CFConstantStringClassReference_00a478a0,
                    &PTR____CFConstantStringClassReference_00a479a0);
    lVar7 = (long)_DAT_00ac5b90;
    puVar4 = *(ulong **)(param_1 + _DAT_00ac5b8c);
    uVar6 = *puVar4;
    uVar5 = uVar6 + 4;
  }
  uVar2 = *(uint *)(*(long *)(param_1 + _DAT_00ac5b88) + uVar6);
  *puVar4 = uVar5;
  iVar1 = 0;
  if ((uVar2 & 3) != 0) {
    iVar1 = 4 - (uVar2 & 3);
  }
  if (*(ulong *)(param_1 + lVar7) < uVar5 + (iVar1 + uVar2)) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
  }
  puVar3 = PTR__OBJC_CLASS___NSMutableData_00ac2cc8;
  func_0x007815e0();
  **(long **)(param_1 + _DAT_00ac5b8c) =
       **(long **)(param_1 + _DAT_00ac5b8c) + (ulong)(iVar1 + uVar2);
  uVar8 = *(undefined8 *)(param_1 + _DAT_00ac5b94);
  puStack_48 = puVar3;
  _CFDataGetLength(uVar8);
  _CFDataAppendBytes(uVar8,&puStack_48,8);
  return puVar3;
}



/* Entry: 006243f4; end: 00624753;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006243f4(undefined8 *param_1)

{
  uint uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  ulong *puVar7;
  ulong uVar8;
  int iVar9;
  code *pcVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  int iVar16;
  undefined *puStack_68;
  
  puVar3 = PTR_PTR_00ac35a8;
  _objc_alloc_init();
  _objc_autorelease();
  uVar15 = *(undefined8 *)((long)param_1 + (long)_DAT_00ac5b98);
  puStack_68 = puVar3;
  _CFDataGetLength(uVar15);
  _CFDataAppendBytes(uVar15,&puStack_68,8);
  puVar4 = param_1;
  FUN_0062ccc0();
  *(undefined8 **)(puVar3 + 8) = puVar4;
  puVar7 = *(ulong **)((long)param_1 + (long)(int)_DAT_00ac5b8c);
  uVar13 = *puVar7;
  if ((uVar13 & 3) != 0) {
    uVar13 = (uVar13 & 0xfffffffffffffffc) + 4;
    *puVar7 = uVar13;
  }
  uVar8 = uVar13 + 4;
  if (*(ulong *)((long)param_1 + (long)_DAT_00ac5b90) < uVar8) {
    puVar4 = (undefined8 *)PTR__OBJC_CLASS___NSException_00ac2f30;
    func_0x0078ad40();
    puVar7 = *(ulong **)((long)param_1 + (long)(int)_DAT_00ac5b8c);
    uVar13 = *puVar7;
    uVar8 = uVar13 + 4;
  }
  lVar11 = *(long *)((long)param_1 + (long)_DAT_00ac5b88);
  uVar1 = *(uint *)(lVar11 + uVar13);
  *puVar7 = uVar8;
  if (uVar1 != 0) {
    if ((int)uVar1 < 0) {
      if ((uVar8 & 7) != 0) {
        uVar8 = (uVar8 & 0xfffffffffffffff8) + 8;
        *puVar7 = uVar8;
      }
      uVar13 = uVar8 + 8;
      if (*(ulong *)((long)param_1 + (long)_DAT_00ac5b90) < uVar13) {
        puVar4 = (undefined8 *)PTR__OBJC_CLASS___NSException_00ac2f30;
        func_0x0078ad40();
        puVar7 = *(ulong **)((long)param_1 + (long)(int)_DAT_00ac5b8c);
        uVar8 = *puVar7;
        uVar13 = uVar8 + 8;
        lVar11 = *(long *)((long)param_1 + (long)_DAT_00ac5b88);
      }
      uVar15 = *(undefined8 *)(lVar11 + uVar8);
      *puVar7 = uVar13;
      *(undefined8 *)(puVar3 + 0x20) = uVar15;
      uVar13 = (ulong)uVar1 & 0x7fffffff;
      _CFAllocatorGetDefault();
      _CFAllocatorAllocate();
      iVar16 = (int)uVar13;
      if (iVar16 != 0) {
        uVar8 = (ulong)_DAT_00ac5b8c;
        puVar5 = puVar4;
        iVar9 = _DAT_00ac5b90;
        do {
          puVar7 = *(ulong **)((long)param_1 + (long)(int)uVar8);
          uVar12 = *puVar7;
          uVar14 = uVar12 + 8;
          if (*(ulong *)((long)param_1 + (long)iVar9) < uVar14) {
            func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
            uVar8 = (ulong)(int)_DAT_00ac5b8c;
            puVar7 = *(ulong **)((long)param_1 + uVar8);
            uVar12 = *puVar7;
            uVar14 = uVar12 + 8;
            iVar9 = _DAT_00ac5b90;
          }
          uVar15 = *(undefined8 *)(*(long *)((long)param_1 + (long)_DAT_00ac5b88) + uVar12);
          *puVar7 = uVar14;
          *puVar5 = uVar15;
          uVar13 = uVar13 - 1;
          puVar5 = puVar5 + 1;
        } while (uVar13 != 0);
      }
      *(undefined8 **)(puVar3 + 0x28) = puVar4;
      puVar3[0x18] = 1;
      *(int *)(puVar3 + 0x1c) = iVar16;
    }
    else {
      _CFAllocatorGetDefault();
      _CFAllocatorAllocate();
      if (puVar4 == (undefined8 *)0x0) {
        func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
      }
      uVar13 = 0;
      do {
        puVar5 = param_1;
        FUN_0062ccc0();
        puVar4[uVar13] = puVar5;
        uVar13 = uVar13 + 1;
      } while (uVar1 != uVar13);
      puVar6 = PTR__OBJC_CLASS___NSArray_00ac2c28;
      func_0x0077f200();
      *(undefined **)(puVar3 + 0x10) = puVar6;
      _CFAllocatorGetDefault();
      _CFAllocatorDeallocate();
    }
  }
  puVar7 = *(ulong **)((long)param_1 + (long)(int)_DAT_00ac5b8c);
  uVar8 = *puVar7;
  uVar13 = uVar8 + 1;
  if (*(ulong *)((long)param_1 + (long)_DAT_00ac5b90) < uVar13) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
    puVar7 = *(ulong **)((long)param_1 + (long)(int)_DAT_00ac5b8c);
    uVar8 = *puVar7;
    uVar13 = uVar8 + 1;
  }
  bVar2 = *(byte *)(*(long *)((long)param_1 + (long)_DAT_00ac5b88) + uVar8);
  *puVar7 = uVar13;
  if ((bVar2 < 0x35) &&
     (pcVar10 = *(code **)(*(long *)((long)param_1 + (long)_DAT_00ac5b84) + (ulong)bVar2 * 8),
     pcVar10 != (code *)0x0)) {
    (*pcVar10)(param_1);
  }
  else {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
  }
  return;
}



/* Entry: 00624754; end: 00624947;  */

/* WARNING: Removing unreachable block (ram,0x0062d168) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00624754(dword *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  char cVar5;
  short sVar6;
  long lVar7;
  dword *pdVar8;
  dword *pdVar9;
  dword *pdVar10;
  undefined **ppuVar11;
  ulong *puVar12;
  ulong uVar13;
  code *pcVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined *puVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  undefined4 uVar22;
  undefined8 uVar23;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  dword *apdStack_178 [33];
  long lStack_70;
  
  puVar12 = *(ulong **)((long)param_1 + (long)_DAT_00ac5b8c);
  uVar13 = *puVar12;
  uVar19 = uVar13 + 1;
  if (*(ulong *)((long)param_1 + (long)_DAT_00ac5b90) < uVar19) {
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                    &PTR____CFConstantStringClassReference_00a478a0,
                    &PTR____CFConstantStringClassReference_00a479a0);
    puVar12 = *(ulong **)((long)param_1 + (long)_DAT_00ac5b8c);
    uVar13 = *puVar12;
    uVar19 = uVar13 + 1;
  }
  pdVar9 = (dword *)(ulong)*(byte *)(*(long *)((long)param_1 + (long)_DAT_00ac5b88) + uVar13);
  *puVar12 = uVar19;
  ppuVar11 = (undefined **)((long)&MACH_HEADER.magic + 1);
  lStack_70 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar13 = *(ulong *)((long)param_1 + (long)_DAT_00ac5b98);
  uVar19 = uVar13;
  pdVar10 = pdVar9;
  _CFDataGetLength();
  if (pdVar9 < (undefined **)(uVar19 >> 3)) {
    _CFDataGetBytePtr();
    puVar18 = *(undefined **)(uVar13 + (long)pdVar9 * 8);
    pdVar9 = *(dword **)(puVar18 + 8);
    _NSClassFromString();
    pdVar8 = (dword *)PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
  }
  else {
    ppuVar11 = &PTR____CFConstantStringClassReference_00a478a0;
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
    puVar18 = PTR__OBJC_CLASS___NSNull_00ac2f90;
    func_0x00789b20();
    pdVar9 = *(dword **)(puVar18 + 8);
    _NSClassFromString();
    pdVar8 = (dword *)PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
  }
  PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8 = (undefined *)pdVar8;
  if (pdVar9 == (dword *)0x0) {
    if (puVar18[0x18] == '\x01') {
      func_0x00781fe0();
      uVar17 = *(undefined8 *)((long)param_1 + (long)_DAT_00ac5b94);
      apdStack_178[0] = pdVar8;
      _CFDataGetLength(uVar17);
      pdVar10 = (dword *)apdStack_178;
      _CFDataAppendBytes(uVar17,pdVar10,8);
      ppuVar11 = (undefined **)PTR_PTR_00ac35c8;
      _objc_alloc();
      func_0x00784fc0();
      _objc_autorelease();
      if (*(int *)(puVar18 + 0x1c) != 0) {
        uVar19 = 0;
        do {
          pdVar10 = (dword *)ppuVar11;
          FUN_0062d480(param_1,ppuVar11,*(undefined8 *)(*(long *)(puVar18 + 0x28) + uVar19 * 8));
          uVar19 = uVar19 + 1;
        } while (uVar19 < *(uint *)(puVar18 + 0x1c));
      }
      func_0x0077f240();
      func_0x0077e4e0(pdVar8);
    }
    else {
      func_0x00782040();
      uVar17 = *(undefined8 *)((long)param_1 + (long)_DAT_00ac5b94);
      apdStack_178[0] = pdVar8;
      _CFDataGetLength(uVar17);
      pdVar10 = (dword *)apdStack_178;
      _CFDataAppendBytes(uVar17,pdVar10,8);
      uStack_1d8 = 0;
      uStack_1e0 = 0;
      uStack_1c8 = 0;
      uStack_1d0 = 0;
      uStack_1f8 = 0;
      uStack_200 = 0;
      uStack_1e8 = 0;
      plStack_1f0 = (long *)0x0;
      lVar7 = *(long *)(puVar18 + 0x10);
      ppuVar11 = (undefined **)&uStack_200;
      lVar16 = lVar7;
      func_0x00780ea0();
      if (lVar16 != 0) {
        lVar21 = *plStack_1f0;
        do {
          lVar20 = 0;
          do {
            while( true ) {
              if (*plStack_1f0 != lVar21) {
                _objc_enumerationMutation(lVar7);
              }
              puVar12 = *(ulong **)((long)param_1 + (long)_DAT_00ac5b8c);
              uVar13 = *puVar12;
              uVar19 = uVar13 + 1;
              if (*(ulong *)((long)param_1 + (long)_DAT_00ac5b90) < uVar19) {
                func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
                puVar12 = *(ulong **)((long)param_1 + (long)_DAT_00ac5b8c);
                uVar13 = *puVar12;
                uVar19 = uVar13 + 1;
              }
              bVar2 = *(byte *)(*(long *)((long)param_1 + (long)_DAT_00ac5b88) + uVar13);
              *puVar12 = uVar19;
              if ((0x34 < bVar2) ||
                 (pcVar14 = *(code **)(*(long *)((long)param_1 + (long)_DAT_00ac5b84) +
                                      (ulong)bVar2 * 8), pcVar14 == (code *)0x0)) break;
              (*pcVar14)(param_1);
              func_0x00791180(pdVar8);
              lVar20 = lVar20 + 1;
              if (lVar16 == lVar20) goto LAB_0062d284;
            }
            func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
            func_0x00791180(pdVar8);
            lVar20 = lVar20 + 1;
          } while (lVar16 != lVar20);
LAB_0062d284:
          ppuVar11 = (undefined **)&uStack_200;
          lVar16 = lVar7;
          func_0x00780ea0();
        } while (lVar16 != 0);
      }
    }
  }
  else if (puVar18[0x18] == '\x01') {
    pdVar8 = pdVar9;
    func_0x00783120();
    if (pdVar8 == (dword *)0x0 || *(undefined ***)(puVar18 + 0x20) != (undefined **)pdVar8) {
      if (pdVar8 == (dword *)0x0 || *(undefined ***)(puVar18 + 0x20) == (undefined **)pdVar8) {
        if (pdVar8 == (dword *)0x0) {
          uVar17 = *(undefined8 *)((long)param_1 + (long)_DAT_00ac5b94);
          apdStack_178[0] = (dword *)0x0;
          _CFDataGetLength(uVar17);
          pdVar10 = (dword *)apdStack_178;
          ppuVar11 = (undefined **)&MACH_HEADER.cpusubtype;
          _CFDataAppendBytes(uVar17,pdVar10);
          if (*(int *)(puVar18 + 0x1c) != 0) {
            uVar19 = 0;
            do {
              ppuVar11 = *(undefined ***)(*(long *)(puVar18 + 0x28) + uVar19 * 8);
              pdVar10 = (dword *)0x0;
              FUN_0062d480(param_1,0);
              uVar19 = uVar19 + 1;
              pdVar8 = (dword *)0x0;
            } while (uVar19 < *(uint *)(puVar18 + 0x1c));
            goto LAB_0062d39c;
          }
        }
        pdVar8 = (dword *)0x0;
      }
      else {
        _objc_opt_new();
        _objc_autorelease();
        uVar17 = *(undefined8 *)((long)param_1 + (long)_DAT_00ac5b94);
        apdStack_178[0] = pdVar9;
        _CFDataGetLength(uVar17);
        pdVar10 = (dword *)apdStack_178;
        ppuVar11 = (undefined **)&MACH_HEADER.cpusubtype;
        _CFDataAppendBytes(uVar17,pdVar10);
        pdVar8 = pdVar9;
        if (*(int *)(puVar18 + 0x1c) != 0) {
          uVar19 = 0;
          do {
            ppuVar11 = *(undefined ***)(*(long *)(puVar18 + 0x28) + uVar19 * 8);
            pdVar10 = pdVar9;
            FUN_0062d480(param_1,pdVar9);
            uVar19 = uVar19 + 1;
          } while (uVar19 < *(uint *)(puVar18 + 0x1c));
        }
      }
    }
    else {
      _objc_opt_new();
      _objc_autorelease();
      uVar17 = *(undefined8 *)((long)param_1 + (long)_DAT_00ac5b94);
      apdStack_178[0] = pdVar9;
      _CFDataGetLength(uVar17);
      pdVar10 = (dword *)apdStack_178;
      _CFDataAppendBytes(uVar17,pdVar10,8);
      func_0x00781b40(pdVar9);
      ppuVar11 = (undefined **)param_1;
      pdVar8 = pdVar9;
    }
  }
  else {
    _objc_opt_new();
    _objc_autorelease();
    uVar17 = *(undefined8 *)((long)param_1 + (long)_DAT_00ac5b94);
    apdStack_178[0] = pdVar9;
    _CFDataGetLength(uVar17);
    pdVar10 = (dword *)apdStack_178;
    _CFDataAppendBytes(uVar17,pdVar10,8);
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1a8 = 0;
    plStack_1b0 = (long *)0x0;
    lVar7 = *(long *)(puVar18 + 0x10);
    ppuVar11 = (undefined **)&uStack_1c0;
    lVar16 = lVar7;
    func_0x00780ea0();
    pdVar8 = pdVar9;
    if (lVar16 != 0) {
      lVar21 = *plStack_1b0;
      do {
        lVar20 = 0;
        do {
          while( true ) {
            if (*plStack_1b0 != lVar21) {
              _objc_enumerationMutation(lVar7);
            }
            puVar12 = *(ulong **)((long)param_1 + (long)_DAT_00ac5b8c);
            uVar13 = *puVar12;
            uVar19 = uVar13 + 1;
            if (*(ulong *)((long)param_1 + (long)_DAT_00ac5b90) < uVar19) {
              func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
              puVar12 = *(ulong **)((long)param_1 + (long)_DAT_00ac5b8c);
              uVar13 = *puVar12;
              uVar19 = uVar13 + 1;
            }
            bVar2 = *(byte *)(*(long *)((long)param_1 + (long)_DAT_00ac5b88) + uVar13);
            *puVar12 = uVar19;
            if ((0x34 < bVar2) ||
               (pcVar14 = *(code **)(*(long *)((long)param_1 + (long)_DAT_00ac5b84) +
                                    (ulong)bVar2 * 8), pcVar14 == (code *)0x0)) break;
            (*pcVar14)(param_1);
            func_0x00791180(pdVar9);
            lVar20 = lVar20 + 1;
            if (lVar16 == lVar20) goto LAB_0062d054;
          }
          func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
          func_0x00791180(pdVar9);
          lVar20 = lVar20 + 1;
        } while (lVar16 != lVar20);
LAB_0062d054:
        ppuVar11 = (undefined **)&uStack_1c0;
        lVar16 = lVar7;
        func_0x00780ea0();
      } while (lVar16 != 0);
    }
  }
LAB_0062d39c:
  func_0x007820e0(pdVar8);
  pdVar9 = pdVar8;
  func_0x0077f680();
  if (pdVar9 != pdVar8) {
    ppuVar11 = &PTR____CFConstantStringClassReference_00a478a0;
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  if (((uint)ppuVar11 & 0xff) < 0x17) {
    uVar19 = (ulong)ppuVar11 >> 8;
    switch((ulong)ppuVar11 & 0xff) {
    case 0:
      puVar12 = *(ulong **)((long)pdVar9 + (long)_DAT_00ac5b8c);
      uVar15 = *puVar12;
      uVar13 = uVar15 + 1;
      if (*(ulong *)((long)pdVar9 + (long)_DAT_00ac5b90) < uVar13) {
        func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
        puVar12 = *(ulong **)((long)pdVar9 + (long)_DAT_00ac5b8c);
        uVar15 = *puVar12;
        uVar13 = uVar15 + 1;
      }
      bVar2 = *(byte *)(*(long *)((long)pdVar9 + (long)_DAT_00ac5b88) + uVar15);
      *puVar12 = uVar13;
      if ((bVar2 < 0x35) &&
         (pcVar14 = *(code **)(*(long *)((long)pdVar9 + (long)_DAT_00ac5b84) + (ulong)bVar2 * 8),
         pcVar14 != (code *)0x0)) {
        (*pcVar14)(pdVar9);
      }
      else {
        func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
        pdVar9 = (dword *)0x0;
      }
                    /* WARNING: Could not recover jumptable at 0x0078f510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (pdVar10,PTR_s_setObject_forUInt64Key__00abea50,pdVar9,uVar19);
      return;
    case 1:
      puVar12 = *(ulong **)((long)pdVar9 + (long)_DAT_00ac5b8c);
      uVar15 = *puVar12;
      uVar13 = uVar15 + 1;
      if (*(ulong *)((long)pdVar9 + (long)_DAT_00ac5b90) < uVar13) {
        func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
        puVar12 = *(ulong **)((long)pdVar9 + (long)_DAT_00ac5b8c);
        uVar15 = *puVar12;
        uVar13 = uVar15 + 1;
      }
      cVar5 = *(char *)(*(long *)((long)pdVar9 + (long)_DAT_00ac5b88) + uVar15);
      *puVar12 = uVar13;
                    /* WARNING: Could not recover jumptable at 0x0078d070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (pdVar10,PTR_s_setBool_forUInt64Key__00abe128,cVar5 == '\r',uVar19);
      return;
    case 2:
      puVar12 = *(ulong **)((long)pdVar9 + (long)_DAT_00ac5b8c);
      uVar15 = *puVar12;
      uVar13 = uVar15 + 1;
      if (*(ulong *)((long)pdVar9 + (long)_DAT_00ac5b90) < uVar13) {
        func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
        puVar12 = *(ulong **)((long)pdVar9 + (long)_DAT_00ac5b8c);
        uVar15 = *puVar12;
        uVar13 = uVar15 + 1;
      }
      cVar5 = *(char *)(*(long *)((long)pdVar9 + (long)_DAT_00ac5b88) + uVar15);
      *puVar12 = uVar13;
                    /* WARNING: Could not recover jumptable at 0x00790210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (pdVar10,PTR_s_setSInt8_forUInt64Key__00abed90,(long)cVar5,uVar19);
      return;
    case 3:
      puVar12 = *(ulong **)((long)pdVar9 + (long)_DAT_00ac5b8c);
      uVar13 = *puVar12;
      if ((uVar13 & 1) != 0) {
        uVar13 = uVar13 + 1;
        *puVar12 = uVar13;
      }
      uVar15 = uVar13 + 2;
      if (*(ulong *)((long)pdVar9 + (long)_DAT_00ac5b90) < uVar15) {
        func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
        puVar12 = *(ulong **)((long)pdVar9 + (long)_DAT_00ac5b8c);
        uVar13 = *puVar12;
        uVar15 = uVar13 + 2;
      }
      sVar6 = *(short *)(*(long *)((long)pdVar9 + (long)_DAT_00ac5b88) + uVar13);
      *puVar12 = uVar15;
                    /* WARNING: Could not recover jumptable at 0x007901b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (pdVar10,PTR_s_setSInt16_forUInt64Key__00abed78,(long)sVar6,uVar19);
      return;
    case 4:
      puVar12 = *(ulong **)((long)pdVar9 + (long)_DAT_00ac5b8c);
      uVar13 = *puVar12;
      if ((uVar13 & 3) != 0) {
        uVar13 = (uVar13 & 0xfffffffffffffffc) + 4;
        *puVar12 = uVar13;
      }
      uVar15 = uVar13 + 4;
      if (*(ulong *)((long)pdVar9 + (long)_DAT_00ac5b90) < uVar15) {
        func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
        puVar12 = *(ulong **)((long)pdVar9 + (long)_DAT_00ac5b8c);
        uVar13 = *puVar12;
        uVar15 = uVar13 + 4;
      }
      uVar22 = *(undefined4 *)(*(long *)((long)pdVar9 + (long)_DAT_00ac5b88) + uVar13);
      *puVar12 = uVar15;
                    /* WARNING: Could not recover jumptable at 0x007901d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (pdVar10,PTR_s_setSInt32_forUInt64Key__00abed80,uVar22,uVar19);
      return;
    case 5:
      puVar12 = *(ulong **)((long)pdVar9 + (long)_DAT_00ac5b8c);
      uVar13 = *puVar12;
      if ((uVar13 & 7) != 0) {
        uVar13 = (uVar13 & 0xfffffffffffffff8) + 8;
        *puVar12 = uVar13;
      }
      uVar15 = uVar13 + 8;
      if (*(ulong *)((long)pdVar9 + (long)_DAT_00ac5b90) < uVar15) {
        func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
        puVar12 = *(ulong **)((long)pdVar9 + (long)_DAT_00ac5b8c);
        uVar13 = *puVar12;
        uVar15 = uVar13 + 8;
      }
      uVar17 = *(undefined8 *)(*(long *)((long)pdVar9 + (long)_DAT_00ac5b88) + uVar13);
      *puVar12 = uVar15;
                    /* WARNING: Could not recover jumptable at 0x007901f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (pdVar10,PTR_s_setSInt64_forUInt64Key__00abed88,uVar17,uVar19);
      return;
    case 6:
      puVar12 = *(ulong **)((long)pdVar9 + (long)_DAT_00ac5b8c);
      uVar15 = *puVar12;
      uVar13 = uVar15 + 1;
      if (*(ulong *)((long)pdVar9 + (long)_DAT_00ac5b90) < uVar13) {
        func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
        puVar12 = *(ulong **)((long)pdVar9 + (long)_DAT_00ac5b8c);
        uVar15 = *puVar12;
        uVar13 = uVar15 + 1;
      }
      uVar3 = *(undefined1 *)(*(long *)((long)pdVar9 + (long)_DAT_00ac5b88) + uVar15);
      *puVar12 = uVar13;
                    /* WARNING: Could not recover jumptable at 0x00790df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (pdVar10,PTR_s_setUInt8_forUInt64Key__00abf088,uVar3,uVar19);
      return;
    case 7:
      puVar12 = *(ulong **)((long)pdVar9 + (long)_DAT_00ac5b8c);
      uVar13 = *puVar12;
      if ((uVar13 & 1) != 0) {
        uVar13 = uVar13 + 1;
        *puVar12 = uVar13;
      }
      uVar15 = uVar13 + 2;
      if (*(ulong *)((long)pdVar9 + (long)_DAT_00ac5b90) < uVar15) {
        func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
        puVar12 = *(ulong **)((long)pdVar9 + (long)_DAT_00ac5b8c);
        uVar13 = *puVar12;
        uVar15 = uVar13 + 2;
      }
      uVar4 = *(undefined2 *)(*(long *)((long)pdVar9 + (long)_DAT_00ac5b88) + uVar13);
      *puVar12 = uVar15;
                    /* WARNING: Could not recover jumptable at 0x00790d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (pdVar10,PTR_s_setUInt16_forUInt64Key__00abf070,uVar4,uVar19);
      return;
    case 8:
      puVar12 = *(ulong **)((long)pdVar9 + (long)_DAT_00ac5b8c);
      uVar13 = *puVar12;
      if ((uVar13 & 3) != 0) {
        uVar13 = (uVar13 & 0xfffffffffffffffc) + 4;
        *puVar12 = uVar13;
      }
      uVar15 = uVar13 + 4;
      if (*(ulong *)((long)pdVar9 + (long)_DAT_00ac5b90) < uVar15) {
        func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
        puVar12 = *(ulong **)((long)pdVar9 + (long)_DAT_00ac5b8c);
        uVar13 = *puVar12;
        uVar15 = uVar13 + 4;
      }
      uVar22 = *(undefined4 *)(*(long *)((long)pdVar9 + (long)_DAT_00ac5b88) + uVar13);
      *puVar12 = uVar15;
                    /* WARNING: Could not recover jumptable at 0x00790db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (pdVar10,PTR_s_setUInt32_forUInt64Key__00abf078,uVar22,uVar19);
      return;
    case 9:
      puVar12 = *(ulong **)((long)pdVar9 + (long)_DAT_00ac5b8c);
      uVar13 = *puVar12;
      if ((uVar13 & 7) != 0) {
        uVar13 = (uVar13 & 0xfffffffffffffff8) + 8;
        *puVar12 = uVar13;
      }
      uVar15 = uVar13 + 8;
      if (*(ulong *)((long)pdVar9 + (long)_DAT_00ac5b90) < uVar15) {
        func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
        puVar12 = *(ulong **)((long)pdVar9 + (long)_DAT_00ac5b8c);
        uVar13 = *puVar12;
        uVar15 = uVar13 + 8;
      }
      uVar17 = *(undefined8 *)(*(long *)((long)pdVar9 + (long)_DAT_00ac5b88) + uVar13);
      *puVar12 = uVar15;
                    /* WARNING: Could not recover jumptable at 0x00790dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (pdVar10,PTR_s_setUInt64_forUInt64Key__00abf080,uVar17,uVar19);
      return;
    case 10:
      puVar12 = *(ulong **)((long)pdVar9 + (long)_DAT_00ac5b8c);
      uVar13 = *puVar12;
      if ((uVar13 & 3) != 0) {
        uVar13 = (uVar13 & 0xfffffffffffffffc) + 4;
        *puVar12 = uVar13;
      }
      uVar15 = uVar13 + 4;
      if (*(ulong *)((long)pdVar9 + (long)_DAT_00ac5b90) < uVar15) {
        func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
        puVar12 = *(ulong **)((long)pdVar9 + (long)_DAT_00ac5b8c);
        uVar13 = *puVar12;
        uVar15 = uVar13 + 4;
      }
      uVar22 = *(undefined4 *)(*(long *)((long)pdVar9 + (long)_DAT_00ac5b88) + uVar13);
      *puVar12 = uVar15;
                    /* WARNING: Could not recover jumptable at 0x0078e1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (uVar22,pdVar10,PTR_s_setFloat_forUInt64Key__00abe580,uVar19);
      return;
    case 0xb:
      puVar12 = *(ulong **)((long)pdVar9 + (long)_DAT_00ac5b8c);
      uVar13 = *puVar12;
      if ((uVar13 & 7) != 0) {
        uVar13 = (uVar13 & 0xfffffffffffffff8) + 8;
        *puVar12 = uVar13;
      }
      uVar15 = uVar13 + 8;
      if (*(ulong *)((long)pdVar9 + (long)_DAT_00ac5b90) < uVar15) {
        func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
        puVar12 = *(ulong **)((long)pdVar9 + (long)_DAT_00ac5b8c);
        uVar13 = *puVar12;
        uVar15 = uVar13 + 8;
      }
      uVar17 = *(undefined8 *)(*(long *)((long)pdVar9 + (long)_DAT_00ac5b88) + uVar13);
      *puVar12 = uVar15;
                    /* WARNING: Could not recover jumptable at 0x0078db70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (uVar17,pdVar10,PTR_s_setDouble_forUInt64Key__00abe3e8,uVar19);
      return;
    case 0xc:
      puVar12 = *(ulong **)((long)pdVar9 + (long)_DAT_00ac5b8c);
      uVar13 = *puVar12;
      if ((uVar13 & 7) != 0) {
        uVar13 = (uVar13 & 0xfffffffffffffff8) + 8;
        *puVar12 = uVar13;
      }
      uVar15 = uVar13 + 8;
      lVar16 = (long)_DAT_00ac5b90;
      if (*(ulong *)((long)pdVar9 + lVar16) < uVar15) {
        func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
        lVar16 = (long)_DAT_00ac5b90;
        puVar12 = *(ulong **)((long)pdVar9 + (long)_DAT_00ac5b8c);
        uVar13 = *puVar12;
        uVar15 = uVar13 + 8;
      }
      lVar7 = *(long *)((long)pdVar9 + (long)_DAT_00ac5b88);
      uVar17 = *(undefined8 *)(lVar7 + uVar13);
      *puVar12 = uVar15;
      uVar13 = uVar15 + 8;
      if (*(ulong *)((long)pdVar9 + lVar16) < uVar13) {
        func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
        puVar12 = *(ulong **)((long)pdVar9 + (long)_DAT_00ac5b8c);
        uVar15 = *puVar12;
        uVar13 = uVar15 + 8;
        lVar7 = *(long *)((long)pdVar9 + (long)_DAT_00ac5b88);
      }
      uVar23 = *(undefined8 *)(lVar7 + uVar15);
      *puVar12 = uVar13;
                    /* WARNING: Could not recover jumptable at 0x0078f710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (uVar17,uVar23,pdVar10,PTR_s_setPoint_forUInt64Key__00abead0,uVar19);
      return;
    case 0xd:
      puVar12 = *(ulong **)((long)pdVar9 + (long)_DAT_00ac5b8c);
      uVar13 = *puVar12;
      if ((uVar13 & 7) != 0) {
        uVar13 = (uVar13 & 0xfffffffffffffff8) + 8;
        *puVar12 = uVar13;
      }
      uVar15 = uVar13 + 8;
      lVar16 = (long)_DAT_00ac5b90;
      if (*(ulong *)((long)pdVar9 + lVar16) < uVar15) {
        func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
        lVar16 = (long)_DAT_00ac5b90;
        puVar12 = *(ulong **)((long)pdVar9 + (long)_DAT_00ac5b8c);
        uVar13 = *puVar12;
        uVar15 = uVar13 + 8;
      }
      lVar7 = *(long *)((long)pdVar9 + (long)_DAT_00ac5b88);
      uVar17 = *(undefined8 *)(lVar7 + uVar13);
      *puVar12 = uVar15;
      uVar13 = uVar15 + 8;
      if (*(ulong *)((long)pdVar9 + lVar16) < uVar13) {
        func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
        puVar12 = *(ulong **)((long)pdVar9 + (long)_DAT_00ac5b8c);
        uVar15 = *puVar12;
        uVar13 = uVar15 + 8;
        lVar7 = *(long *)((long)pdVar9 + (long)_DAT_00ac5b88);
      }
      uVar23 = *(undefined8 *)(lVar7 + uVar15);
      *puVar12 = uVar13;
                    /* WARNING: Could not recover jumptable at 0x007905b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (uVar17,uVar23,pdVar10,PTR_s_setSize_forUInt64Key__00abee78,uVar19);
      return;
    case 0xe:
      uVar13 = **(ulong **)((long)pdVar9 + (long)_DAT_00ac5b8c);
      if ((uVar13 & 7) != 0) {
        **(ulong **)((long)pdVar9 + (long)_DAT_00ac5b8c) = (uVar13 & 0xfffffffffffffff8) + 8;
      }
      FUN_006286e0(pdVar9);
                    /* WARNING: Could not recover jumptable at 0x0078fb50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)(pdVar10,PTR_s_setRect_forUInt64Key__00abebe0,uVar19);
      return;
    case 0xf:
      puVar12 = *(ulong **)((long)pdVar9 + (long)_DAT_00ac5b8c);
      uVar13 = *puVar12;
      if ((uVar13 & 3) != 0) {
        uVar13 = (uVar13 & 0xfffffffffffffffc) + 4;
        *puVar12 = uVar13;
      }
      uVar15 = uVar13 + 4;
      lVar16 = (long)_DAT_00ac5b90;
      if (*(ulong *)((long)pdVar9 + lVar16) < uVar15) {
        func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
        lVar16 = (long)_DAT_00ac5b90;
        puVar12 = *(ulong **)((long)pdVar9 + (long)_DAT_00ac5b8c);
        uVar13 = *puVar12;
        uVar15 = uVar13 + 4;
      }
      lVar7 = *(long *)((long)pdVar9 + (long)_DAT_00ac5b88);
      uVar22 = *(undefined4 *)(lVar7 + uVar13);
      *puVar12 = uVar15;
      uVar13 = uVar15 + 4;
      if (*(ulong *)((long)pdVar9 + lVar16) < uVar13) {
        func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
        puVar12 = *(ulong **)((long)pdVar9 + (long)_DAT_00ac5b8c);
        uVar15 = *puVar12;
        uVar13 = uVar15 + 4;
        lVar7 = *(long *)((long)pdVar9 + (long)_DAT_00ac5b88);
      }
      uVar1 = *(undefined4 *)(lVar7 + uVar15);
      *puVar12 = uVar13;
                    /* WARNING: Could not recover jumptable at 0x0078fab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (pdVar10,PTR_s_setRange_forUInt64Key__00abebb8,uVar22,uVar1,uVar19);
      return;
    case 0x10:
      puVar12 = *(ulong **)((long)pdVar9 + (long)_DAT_00ac5b8c);
      uVar13 = *puVar12;
      if ((uVar13 & 7) != 0) {
        uVar13 = (uVar13 & 0xfffffffffffffff8) + 8;
        *puVar12 = uVar13;
      }
      uVar15 = uVar13 + 8;
      lVar16 = (long)_DAT_00ac5b90;
      if (*(ulong *)((long)pdVar9 + lVar16) < uVar15) {
        func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
        lVar16 = (long)_DAT_00ac5b90;
        puVar12 = *(ulong **)((long)pdVar9 + (long)_DAT_00ac5b8c);
        uVar13 = *puVar12;
        uVar15 = uVar13 + 8;
      }
      lVar7 = *(long *)((long)pdVar9 + (long)_DAT_00ac5b88);
      uVar17 = *(undefined8 *)(lVar7 + uVar13);
      *puVar12 = uVar15;
      uVar13 = uVar15 + 8;
      if (*(ulong *)((long)pdVar9 + lVar16) < uVar13) {
        func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
        puVar12 = *(ulong **)((long)pdVar9 + (long)_DAT_00ac5b8c);
        uVar15 = *puVar12;
        uVar13 = uVar15 + 8;
        lVar7 = *(long *)((long)pdVar9 + (long)_DAT_00ac5b88);
      }
      uVar23 = *(undefined8 *)(lVar7 + uVar15);
      *puVar12 = uVar13;
                    /* WARNING: Could not recover jumptable at 0x00791210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (uVar17,uVar23,pdVar10,PTR_s_setVector_forUInt64Key__00abf190,uVar19);
      return;
    case 0x11:
      uVar19 = **(ulong **)((long)pdVar9 + (long)_DAT_00ac5b8c);
      if ((uVar19 & 7) != 0) {
        **(ulong **)((long)pdVar9 + (long)_DAT_00ac5b8c) = (uVar19 & 0xfffffffffffffff8) + 8;
      }
      FUN_00628adc(&uStack_320,pdVar9);
      func_0x0078cac0(pdVar10);
      break;
    case 0x12:
      uVar19 = **(ulong **)((long)pdVar9 + (long)_DAT_00ac5b8c);
      if ((uVar19 & 7) != 0) {
        **(ulong **)((long)pdVar9 + (long)_DAT_00ac5b8c) = (uVar19 & 0xfffffffffffffff8) + 8;
      }
      FUN_00628d3c(&uStack_320,pdVar9);
      func_0x0078c960(pdVar10);
      break;
    case 0x13:
      FUN_00629298(&uStack_320,pdVar9);
      func_0x0078d1a0(pdVar10);
      break;
    case 0x14:
      FUN_00629298(&uStack_320,pdVar9);
      FUN_00629298(&uStack_308,pdVar9);
      func_0x0078d1e0(pdVar10);
      break;
    case 0x15:
      FUN_00629298(&uStack_2a0,pdVar9);
      FUN_00629298(&uStack_288,pdVar9);
      uStack_318 = uStack_298;
      uStack_320 = uStack_2a0;
      uStack_308 = uStack_288;
      uStack_310 = uStack_290;
      uStack_2f8 = uStack_278;
      uStack_300 = uStack_280;
      FUN_00629298(&uStack_2a0,pdVar9);
      FUN_00629298(&uStack_288,pdVar9);
      uStack_2e8 = uStack_298;
      uStack_2f0 = uStack_2a0;
      uStack_2d8 = uStack_288;
      uStack_2e0 = uStack_290;
      uStack_2c8 = uStack_278;
      uStack_2d0 = uStack_280;
      func_0x0078d1c0(pdVar10);
      break;
    case 0x16:
      uVar13 = **(ulong **)((long)pdVar9 + (long)_DAT_00ac5b8c);
      if ((uVar13 & 7) != 0) {
        **(ulong **)((long)pdVar9 + (long)_DAT_00ac5b8c) = (uVar13 & 0xfffffffffffffff8) + 8;
      }
      FUN_00629528(pdVar9);
                    /* WARNING: Could not recover jumptable at 0x00790d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)
                (pdVar10,PTR_s_setUIEdgeInsets_forUInt64Key__00abf068,uVar19);
      return;
    }
  }
  return;
}



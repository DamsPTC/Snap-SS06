/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00612700; end: 00612707; -[SCContextStateHandler previousContextState] */

undefined8 FUN_00612700(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 00612708; end: 00612713; -[SCContextStateHandler _handleStateTransitionFrom:to:] */

void FUN_00612708(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_4;
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  return;
}



/* Entry: 00612714; end: 0061275b; -[SCContextStateHandler _transitionToContextState:] */

void FUN_00612714(long param_1,undefined8 param_2,long param_3)

{
  if (*(long *)(param_1 + 8) == param_3) {
    return;
  }
  if (*(long *)(param_1 + 8) != -1) {
    func_0x0077d920(param_1);
  }
  *(long *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x0077dcb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s__startTimer_00aba420);
  return;
}



/* Entry: 0061275c; end: 006127a7; -[SCContextStateHandler _transitToPendingState] */

void FUN_0061275c(long param_1)

{
  if ((*(long *)(param_1 + 8) != -1) && (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 8))) {
    func_0x0077cd20(param_1);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 8);
  }
  *(undefined8 *)(param_1 + 8) = 0xffffffffffffffff;
  return;
}



/* Entry: 006127a8; end: 006128a3; -[SCContextStateHandler _startTimer] */

void FUN_006127a8(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x0078ace0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR___dispatch_source_type_timer_00999fd0;
  _dispatch_source_create(PTR___dispatch_source_type_timer_00999fd0,0,0,uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  *(undefined **)(param_1 + 0x28) = puVar2;
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = 0;
  _dispatch_time(0,200000000);
  _dispatch_source_set_timer(uVar3,uVar1,0xffffffffffffffff,0);
  puStack_48 = PTR___NSConcreteStackBlock_00999f30;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x61287c;
  puStack_30 = &UNK_009e3fc0;
  lStack_28 = param_1;
  _dispatch_source_set_event_handler(*(undefined8 *)(param_1 + 0x28),&puStack_48);
  _dispatch_resume(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 006128a4; end: 006128df; -[SCContextStateHandler _resetTimer] */

void FUN_006128a4(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    _dispatch_source_cancel();
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_0099ada0)(uVar1);
    return;
  }
  return;
}



/* Entry: 006128e0; end: 006129eb; -[SCContextStateHandler .cxx_destruct] */

void FUN_006128e0(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 0x20,0);
  return;
}



/* Entry: 006129ec; end: 00612aef; +[SCQueuePerformer globalQueuePerformer:contextState:] */

void FUN_006129ec(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  if (param_3 < 9) {
    if (param_3 < 0) {
      if (param_3 == -0x8000) goto LAB_00612aac;
      if (param_3 == -2) goto LAB_00612a84;
    }
    else if ((param_3 != 0) && (param_3 == 2)) {
LAB_00612a60:
      func_0x0077e020(param_1);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_00612ad0;
    }
  }
  else if (param_3 < 0x15) {
    if (param_3 == 9) {
LAB_00612aac:
      func_0x0077c140(param_1);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_00612ad0;
    }
    if (param_3 == 0x11) {
LAB_00612a84:
      func_0x0077e060(param_1);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_00612ad0;
    }
  }
  else if (param_3 != 0x15) {
    if (param_3 == 0x19) {
      func_0x0077e000(param_1);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_00612ad0;
    }
    if (param_3 == 0x21) goto LAB_00612a60;
  }
  func_0x0077c6a0(param_1);
  _objc_retainAutoreleasedReturnValue();
LAB_00612ad0:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_1);
  return;
}



/* Entry: 00612af0; end: 00612c8f; -[SCQueuePerformer initWithGlobalQueue:] */

undefined1 * FUN_00612af0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar3 = &uStack_30;
  puStack_28 = PTR__OBJC_CLASS___SCQueuePerformer_00ac41b8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar3 != (undefined8 *)0x0) {
    puVar4 = (undefined1 *)puVar3;
    FUN_00611f14();
    uVar7 = (uint)param_3;
    if (((ulong)puVar4 & 0xfffffffffffffffe) == 2) {
      *(uint *)((long)puVar3 + 0x28) = uVar7;
      func_0x0061239c();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      uVar1 = 0x15;
      if (uVar7 != 0) {
        uVar1 = uVar7;
      }
      param_3 = (ulong)uVar1;
      *(uint *)((long)puVar3 + 0x28) = uVar1;
      _dispatch_get_global_queue(param_3,0);
      _objc_retainAutoreleasedReturnValue();
    }
    uVar6 = *(undefined8 *)((long)puVar3 + 0x10);
    *(ulong *)((long)puVar3 + 0x10) = param_3;
    _objc_release(uVar6);
    puVar5 = PTR__OBJC_CLASS___NSString_00ac2988;
    _dispatch_queue_get_label(*(undefined8 *)((long)puVar3 + 0x10));
    func_0x00792220();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar3 + 8);
    *(undefined **)((long)puVar3 + 8) = puVar5;
    _objc_release(uVar6);
    uVar2 = (undefined4)*(undefined8 *)((long)puVar3 + 0x10);
    func_0x00612be4();
    *(undefined4 *)((long)puVar3 + 0x18) = uVar2;
    *(undefined8 *)((long)puVar3 + 0x30) = 1;
    *(undefined1 *)((long)puVar3 + 0x40) = 0;
    *(undefined4 *)((long)puVar3 + 0x44) = 0;
  }
  return (undefined1 *)puVar3;
}



/* Entry: 00612c90; end: 00612d0f; -[SCQueuePerformer initWithLabelName:qualityOfService:queueType:context:] */

undefined8
FUN_00612c90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6)

{
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00785a60(param_1,param_2,param_3,param_4,param_5,param_6,1);
  _objc_release(param_5);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 00612d10; end: 00612d17; -[SCQueuePerformer initQoSFixedPerformerWithLabelName:qualityOfService:queueType:context:reason:] */

void FUN_00612d10(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00785a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_initWithLabelName_qualityOfServi_00abc3a0);
  return;
}



/* Entry: 00612d18; end: 00612f0f; -[SCQueuePerformer initWithLabelName:qualityOfService:queueType:context:adjustableQoS:] */

undefined1 *
FUN_00612d18(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5
            ,ulong param_6,undefined1 param_7)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar5 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_48 = PTR__OBJC_CLASS___SCQueuePerformer_00ac41b8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_00abbf70);
  if (puVar5 != (undefined8 *)0x0) {
    uVar11 = 0;
    if (param_6 < 0x3c) {
      uVar11 = param_6;
    }
    uVar6 = param_3;
    func_0x00780e20();
    uVar8 = *(undefined8 *)((long)puVar5 + 8);
    *(undefined8 *)((long)puVar5 + 8) = uVar6;
    _objc_release(uVar8);
    _objc_retain(param_5);
    uVar6 = *(undefined8 *)((long)puVar5 + 0x20);
    *(undefined8 *)((long)puVar5 + 0x20) = param_5;
    _objc_release(uVar6);
    *(ulong *)((long)puVar5 + 0x30) = uVar11;
    FUN_00611d60();
    *(ulong *)((long)puVar5 + 0x38) = uVar11;
    *(undefined4 *)((long)puVar5 + 0x44) = 0;
    iVar2 = 0x15;
    if (param_4 != 0) {
      iVar2 = param_4;
    }
    *(int *)((long)puVar5 + 0x28) = iVar2;
    FUN_00611ec8();
    lVar9 = 0;
    uVar3 = iVar2 - 9U >> 2 | (iVar2 - 9U) * 0x40000000;
    if (uVar3 < 5) {
      lVar9 = *(long *)(&UNK_0081cf70 + (ulong)uVar3 * 8);
    }
    uVar11 = lVar9 + uVar11;
    if (3 < uVar11) {
      uVar11 = 4;
    }
    iVar2 = *(int *)(&UNK_0081cd68 + uVar11 * 4);
    *(int *)((long)puVar5 + 0x2c) = iVar2;
    uVar1 = 0;
    if (iVar2 != *(int *)((long)puVar5 + 0x28)) {
      uVar1 = param_7;
    }
    *(undefined1 *)((long)puVar5 + 0x40) = uVar1;
    uVar6 = param_3;
    _objc_retainAutorelease();
    func_0x0077bcc0();
    uVar11 = (ulong)*(uint *)((long)puVar5 + 0x28);
    uVar8 = param_5;
    _dispatch_queue_attr_make_with_qos_class(param_5,uVar11,0);
    _objc_retainAutoreleasedReturnValue();
    _dispatch_get_global_queue(uVar11,0);
    _objc_retainAutoreleasedReturnValue();
    _dispatch_queue_create_with_target_V2(uVar6,uVar8,uVar11);
    uVar10 = *(undefined8 *)((long)puVar5 + 0x10);
    *(undefined8 *)((long)puVar5 + 0x10) = uVar6;
    _objc_release(uVar10);
    _objc_release(uVar11);
    _objc_release(uVar8);
    uVar4 = (undefined4)*(undefined8 *)((long)puVar5 + 0x10);
    func_0x00612be4();
    *(undefined4 *)((long)puVar5 + 0x18) = uVar4;
    *(undefined1 *)((long)puVar5 + 0x50) = 0;
    if (*(char *)((long)puVar5 + 0x40) == '\x01') {
      puVar7 = PTR_PTR_00ac3378;
      func_0x007914e0(PTR_PTR_00ac3378);
      _objc_retainAutoreleasedReturnValue();
      func_0x0078b180();
      _objc_release(puVar7);
    }
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar5;
}



/* Entry: 00612f10; end: 00612fd3; -[SCQueuePerformer _makeDispatchBlock:] */

void FUN_00612f10(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined **ppuVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  ppuVar2 = &puStack_60;
  _objc_retain(param_3);
  if ((*(char *)(param_1 + 0x50) == '\x01') && (lVar1 = *(long *)(param_1 + 0x48), lVar1 != 0)) {
    func_0x00792bc0(lVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    param_3 = lVar1;
  }
  puStack_60 = PTR___NSConcreteStackBlock_00999f30;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_00612fd4;
  puStack_48 = &UNK_009e3670;
  lStack_40 = param_1;
  lStack_38 = param_3;
  _objc_retain(param_3);
  _objc_retainBlock(&puStack_60);
  _objc_release(lStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(ppuVar2);
  return;
}



/* Entry: 00612fd4; end: 0061302b;  */

void FUN_00612fd4(long param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  int iVar8;
  
  lVar7 = param_1;
  _qos_class_self();
  FUN_006111a0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30),lVar7);
  (*(code *)(&PTR_DAT_00b23320)[*(long *)(*(long *)(param_1 + 0x20) + 0x30)])
            (*(undefined8 *)(param_1 + 0x28));
  iVar8 = (int)lVar7;
  uVar2 = 2;
  if (iVar8 != 0x15) {
    uVar2 = (uint)(iVar8 == 0x19);
  }
  uVar4 = 3;
  if (iVar8 != 0x11) {
    uVar4 = uVar2;
  }
  uVar2 = 4;
  if (iVar8 != 9) {
    uVar2 = 0;
  }
  uVar3 = 5;
  if (iVar8 != 0) {
    uVar3 = uVar2;
  }
  if (iVar8 < 0x11) {
    uVar4 = uVar3;
  }
  piVar1 = (int *)((long)(int)(uVar4 + (int)*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30) * 6) *
                   4 + 0xb6c058);
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar6) {
      *piVar1 = *piVar1 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  return;
}



/* Entry: 0061302c; end: 00613067; -[SCQueuePerformer perform:] */

void FUN_0061302c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x0077d2c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x0077d540(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 00613068; end: 0061306f; -[SCQueuePerformer performWithQoS:block:] */

void FUN_00613068(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x0077d570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s__performWithQoS_block_relativePr_00aba250,param_3,param_4,0);
  return;
}



/* Entry: 00613070; end: 006130af; -[SCQueuePerformer performWithEnforcedInheritedQoS:] */

void FUN_00613070(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  _qos_class_self();
  func_0x0078a620(param_1,param_2,uVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 006130b0; end: 0061312f; -[SCQueuePerformer performWithEnforcedBlockQoS:] */

void FUN_006130b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x0077d2c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  _SCBlockCreateByCopyingAttributes(param_3,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar1);
  func_0x0077d540(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar2);
  return;
}



/* Entry: 00613130; end: 006131a7; -[SCQueuePerformer performImmediatelyIfCurrentPerformer:] */

void FUN_00613130(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x007875c0();
  if ((int)lVar1 == 0) {
    func_0x0078a560(param_1,param_2,param_3);
  }
  else {
    func_0x0077d2c0(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    (**(code **)(param_1 + 0x10))(param_1);
    param_3 = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 006131a8; end: 006132ab; -[SCQueuePerformer perform:after:] */

void FUN_006131a8(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_2);
  uVar1 = 0;
  _dispatch_time(0,(long)(param_1 * 1000000000.0));
  uVar2 = (ulong)*(uint *)(param_2 + 0x28);
  _dispatch_get_global_queue(uVar2,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_00999f30;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_006132ac;
  puStack_60 = &UNK_00a0ae48;
  _objc_copyWeak(auStack_50,auStack_48);
  uStack_58 = param_4;
  _objc_retain(param_4);
  _dispatch_after(uVar1,uVar2,&puStack_78);
  _objc_release(uVar2);
  _objc_release(uStack_58);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 006132ac; end: 006132e7;  */

void FUN_006132ac(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x0078a560(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(lVar1);
  return;
}



/* Entry: 006132e8; end: 0061337b; -[SCQueuePerformer performOnGroupNotification_DEPRECATED:block:] */

void FUN_006132e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x0078ace0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0077d2c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _dispatch_group_notify(param_3,uVar1,param_1);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 0061337c; end: 00613433; -[SCQueuePerformer performAndWait:] */

void FUN_0061337c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x007875c0();
  if (((int)lVar1 == 0) || (*(char *)(param_1 + 0x42) != '\x01')) {
    lVar1 = param_1;
    func_0x0078ace0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x0077d2c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _dispatch_sync(lVar1,param_1);
    _objc_release(param_1);
  }
  else {
    func_0x0077d2c0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_1 + 0x10))();
    lVar1 = param_1;
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 00613434; end: 0061349b; -[SCQueuePerformer performWithBarrier:] */

void FUN_00613434(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar1 = param_1;
    func_0x0077d2c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _os_unfair_lock_lock(param_1 + 0x44);
    _dispatch_barrier_async(*(undefined8 *)(param_1 + 0x10),lVar1);
    _os_unfair_lock_unlock(param_1 + 0x44);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_0099ada0)(lVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0078a570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_perform__00abd668);
  return;
}



/* Entry: 0061349c; end: 006134e7; -[SCQueuePerformer isCurrentPerformer] */

undefined * FUN_0061349c(long param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (*(char *)(param_1 + 0x42) == '\x01') {
    puVar2 = PTR__OBJC_CLASS___NSThread_00ac30f8;
                    /* WARNING: Could not recover jumptable at 0x00787a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)
              (PTR__OBJC_CLASS___NSThread_00ac30f8,PTR_s_isMainThread_00abcba0);
    return puVar2;
  }
  iVar1 = 0x81cf68;
  _dispatch_get_specific(&UNK_0081cf68);
  return (undefined *)(ulong)(*(int *)(param_1 + 0x18) == iVar1);
}



/* Entry: 006134e8; end: 006134eb; -[SCQueuePerformer assertQueue] */

void FUN_006134e8(void)

{
  return;
}



/* Entry: 006134ec; end: 006134ef; -[SCQueuePerformer assertNotQueue] */

void FUN_006134ec(void)

{
  return;
}



/* Entry: 006134f0; end: 006134f7; -[SCQueuePerformer qualityOfService] */

undefined4 FUN_006134f0(long param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}



/* Entry: 006134f8; end: 006134ff; -[SCQueuePerformer context] */

undefined8 FUN_006134f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 00613500; end: 00613507; -[SCQueuePerformer applicationContext] */

undefined8 FUN_00613500(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 00613508; end: 00613587; -[SCQueuePerformer stopThrottling] */

void FUN_00613508(long param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = param_1 + 0x44;
  _os_unfair_lock_lock();
  if ((*(char *)(param_1 + 0x40) == '\x01') && (*(char *)(param_1 + 0x41) == '\x01')) {
    FUN_00612494();
    iVar1 = (int)uVar2;
    if ((uVar2 & 1) == 0) {
      func_0x00612454();
      if (iVar1 == 0) {
        func_0x0077db20(param_1,param_2,*(undefined4 *)(param_1 + 0x28));
      }
      else {
        _dispatch_resume(*(undefined8 *)(param_1 + 0x10));
      }
      *(undefined1 *)(param_1 + 0x41) = 0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0077aba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_0099a4a0)(param_1 + 0x44);
  return;
}



/* Entry: 00613588; end: 006135ff; -[SCQueuePerformer startThrottling] */

void FUN_00613588(long param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1 + 0x44;
  _os_unfair_lock_lock();
  if ((*(char *)(param_1 + 0x40) == '\x01') && ((*(byte *)(param_1 + 0x41) & 1) == 0)) {
    func_0x00612454();
    if (iVar1 == 0) {
      func_0x0077db20(param_1,param_2,*(undefined4 *)(param_1 + 0x2c));
    }
    else {
      _dispatch_suspend(*(undefined8 *)(param_1 + 0x10));
    }
    *(undefined1 *)(param_1 + 0x41) = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x0077aba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_0099a4a0)(param_1 + 0x44);
  return;
}



/* Entry: 00613600; end: 0061369f; -[SCQueuePerformer queue] */

void FUN_00613600(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_00ac3378;
  func_0x007914e0(PTR_PTR_00ac3378);
  _objc_retainAutoreleasedReturnValue();
  func_0x007930c0();
  _objc_release(puVar1);
  _os_unfair_lock_lock(param_1 + 0x44);
  *(undefined1 *)(param_1 + 0x40) = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _dispatch_queue_get_qos_class(uVar2,0);
  if ((int)uVar2 != *(int *)(param_1 + 0x28)) {
    func_0x0077db20(param_1);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar2);
  _os_unfair_lock_unlock(param_1 + 0x44);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar2);
  return;
}



/* Entry: 006136a0; end: 006136c7; -[SCQueuePerformer queue_FOR_UNIT_TESTING] */

void FUN_006136a0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 006136c8; end: 0061371b; +[SCQueuePerformer _userInteractivePerformer] */

void FUN_006136c8(void)

{
  undefined8 uVar1;
  
  if (lRam0000000000b63478 != -1) {
    _dispatch_once(0xb63478,&PTR___NSConcreteGlobalBlock_00a0ae78);
  }
  uVar1 = uRam0000000000b63470;
  _objc_retain(uRam0000000000b63470);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 0061371c; end: 0061374f;  */

void FUN_0061371c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___SCQueuePerformer_00ac2cb0;
  _objc_alloc();
  func_0x00785760();
  uVar1 = puRam0000000000b63470;
  puRam0000000000b63470 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 00613750; end: 006137a3; +[SCQueuePerformer _userInitiatedPerformer] */

void FUN_00613750(void)

{
  undefined8 uVar1;
  
  if (lRam0000000000b63488 != -1) {
    _dispatch_once(0xb63488,&PTR___NSConcreteGlobalBlock_00a0ae98);
  }
  uVar1 = uRam0000000000b63480;
  _objc_retain(uRam0000000000b63480);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 006137a4; end: 006137d7;  */

void FUN_006137a4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___SCQueuePerformer_00ac2cb0;
  _objc_alloc();
  func_0x00785760();
  uVar1 = puRam0000000000b63480;
  puRam0000000000b63480 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 006137d8; end: 0061382b; +[SCQueuePerformer _utilityPerformer] */

void FUN_006137d8(void)

{
  undefined8 uVar1;
  
  if (lRam0000000000b63498 != -1) {
    _dispatch_once(0xb63498,&PTR___NSConcreteGlobalBlock_00a0aeb8);
  }
  uVar1 = uRam0000000000b63490;
  _objc_retain(uRam0000000000b63490);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 0061382c; end: 0061385f;  */

void FUN_0061382c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___SCQueuePerformer_00ac2cb0;
  _objc_alloc();
  func_0x00785760();
  uVar1 = puRam0000000000b63490;
  puRam0000000000b63490 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 00613860; end: 006138b3; +[SCQueuePerformer _backgroundPerformer] */

void FUN_00613860(void)

{
  undefined8 uVar1;
  
  if (lRam0000000000b634a8 != -1) {
    _dispatch_once(0xb634a8,&PTR___NSConcreteGlobalBlock_00a0aed8);
  }
  uVar1 = uRam0000000000b634a0;
  _objc_retain(uRam0000000000b634a0);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 006138b4; end: 006138e7;  */

void FUN_006138b4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___SCQueuePerformer_00ac2cb0;
  _objc_alloc();
  func_0x00785760();
  uVar1 = puRam0000000000b634a0;
  puRam0000000000b634a0 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 006138e8; end: 0061393b; +[SCQueuePerformer _defaultPerformer] */

void FUN_006138e8(void)

{
  undefined8 uVar1;
  
  if (lRam0000000000b634b8 != -1) {
    _dispatch_once(0xb634b8,&PTR___NSConcreteGlobalBlock_00a0aef8);
  }
  uVar1 = uRam0000000000b634b0;
  _objc_retain(uRam0000000000b634b0);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 0061393c; end: 0061396f;  */

void FUN_0061393c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___SCQueuePerformer_00ac2cb0;
  _objc_alloc();
  func_0x00785760();
  uVar1 = puRam0000000000b634b0;
  puRam0000000000b634b0 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 00613970; end: 00613ac7; -[SCQueuePerformer _setNewQueueWithFixedQoS:] */

void FUN_00613970(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _os_unfair_lock_assert_owner(param_1 + 0x44);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x0077bcc0();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _dispatch_queue_attr_make_with_qos_class(uVar2,param_3,0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3 & 0xffffffff;
  _dispatch_get_global_queue(uVar3,0);
  _objc_retainAutoreleasedReturnValue();
  _dispatch_queue_create_with_target_V2(uVar1,uVar2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _dispatch_queue_set_specific(uVar1,&UNK_0081cf68,*(undefined4 *)(param_1 + 0x18),0);
  puStack_68 = PTR___NSConcreteStackBlock_00999f30;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_00613ac8;
  puStack_50 = &UNK_009e3fc0;
  _objc_retain(uVar1);
  uVar2 = 0x20;
  uStack_48 = uVar1;
  _dispatch_block_create_with_qos_class(0x20,param_3,0,&puStack_68);
  if (*(long *)(param_1 + 0x20) == 0) {
    _dispatch_suspend(uVar1);
    _dispatch_async(*(undefined8 *)(param_1 + 0x10),uVar2);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  _objc_retain(uVar1);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uStack_48);
  _objc_release(uVar1);
  return;
}



/* Entry: 00613ac8; end: 00613acf;  */

void FUN_00613ac8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077a4c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_resume_0099a190)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 00613ad0; end: 00613b17; -[SCQueuePerformer _performBlock:] */

void FUN_00613ad0(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x44);
  _dispatch_async(*(undefined8 *)(param_1 + 0x10),param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_0099a4a0)(param_1 + 0x44);
  return;
}



/* Entry: 00613b18; end: 00613b87; -[SCQueuePerformer _performWithQoS:block:relativePriority:] */

void FUN_00613b18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x0077d2c0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = 0x20;
  _dispatch_block_create_with_qos_class(0x20,param_3,param_5,uVar1);
  _objc_release(uVar1);
  func_0x0077d540(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar2);
  return;
}



/* Entry: 00613b88; end: 00613bcf; -[SCQueuePerformer .cxx_destruct] */

void FUN_00613b88(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 00613bd0; end: 00613dbb;  */

void FUN_00613bd0(void)

{
  uRam0000000000b63468 = 0;
  return;
}



/* Entry: 00613dbc; end: 00613dbf; +[SCOptional optionalWithValue:errorMessage:] */

void FUN_00613dbc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077c5d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s__createOptionalWithValue_errorMe_00ab9e68);
  return;
}



/* Entry: 00613dc0; end: 00613dc7; +[SCOptional optionalWithValue:] */

void FUN_00613dc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0077c5d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s__createOptionalWithValue_errorMe_00ab9e68,param_3,0);
  return;
}



/* Entry: 00613dc8; end: 00613e93; -[SCOptional forceUnwrap] */

void FUN_00613dc8(undefined8 param_1,undefined8 param_2)

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
  pcStack_38 = FUN_00613e94;
  uStack_30 = 0x613ea4;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_00999f30;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_00613eb0;
  puStack_60 = &UNK_00a0af78;
  puStack_48 = puStack_58;
  func_0x00788f20(param_1,param_2,&PTR___NSConcreteGlobalBlock_00a0af58,&puStack_78);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 00613e94; end: 00613eaf;  */

void FUN_00613e94(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 00613eb0; end: 00613ee7;  */

void FUN_00613eb0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 00613ee8; end: 00613faf; -[SCOptional optional] */

void FUN_00613ee8(undefined8 param_1,undefined8 param_2)

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
  pcStack_38 = FUN_00613e94;
  uStack_30 = 0x613ea4;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_00999f30;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_00613fb0;
  puStack_60 = &UNK_00a0af78;
  puStack_48 = puStack_58;
  func_0x00788f20(param_1,param_2,0,&puStack_78);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 00613fb0; end: 00613fe7;  */

void FUN_00613fb0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 00613fe8; end: 0061406b; +[SCOptional _createOptionalWithValue:errorMessage:] */

void FUN_00613fe8(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  _objc_retain(param_3);
  if (param_3 == 0) {
    if (param_4 == 0) {
      func_0x007899e0(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00782e80(param_1,param_2,param_4);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    func_0x007919c0(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_1);
  return;
}



/* Entry: 0061406c; end: 006140bf; +[SCOptional errorWithMessage:] */

void FUN_0061406c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___SCOptional_00ac3380;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x0077cf40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar2);
  return;
}



/* Entry: 006140c0; end: 00614107; +[SCOptional none] */

void FUN_006140c0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___SCOptional_00ac3380;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x0077cf40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar2);
  return;
}



/* Entry: 00614108; end: 00614173; +[SCOptional someWithValue:] */

void FUN_00614108(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___SCOptional_00ac3380;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x0077cf40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar2);
  return;
}



/* Entry: 00614174; end: 00614197; -[SCOptional copyWithZone:] */

undefined8 FUN_00614174(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 00614198; end: 006141fb; -[SCOptional hash] */

undefined8 * FUN_00614198(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_28 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x007843a0();
  puVar2 = &uStack_28;
  uStack_20 = uVar1;
  func_0x0076fd30(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_18) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar4 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_00614280;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) || (puVar2[1] != param_3[1])) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_00614280;
    }
    puVar4 = (undefined8 *)puVar2[3];
    if (puVar4 != (undefined8 *)param_3[3]) {
      func_0x007877e0();
      goto LAB_00614280;
    }
  }
  puVar4 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
LAB_00614280:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 006141fc; end: 0061429b; -[SCOptional isEqual:] */

long FUN_006141fc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_00614280;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_00614280;
    }
    lVar3 = *(long *)(param_1 + 0x18);
    if (lVar3 != *(long *)(param_3 + 0x18)) {
      func_0x007877e0();
      goto LAB_00614280;
    }
  }
  lVar3 = 1;
LAB_00614280:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 0061429c; end: 006142df; -[SCOptional _internalInit] */

void FUN_0061429c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR__OBJC_CLASS___SCOptional_00ac41c0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 006142e0; end: 00614363; -[SCOptional matchNone:some:] */

void FUN_006142e0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 == 0) goto LAB_00614348;
    lVar2 = 0x18;
    lVar1 = param_4;
  }
  else {
    if (*(long *)(param_1 + 8) != 0 || param_3 == 0) goto LAB_00614348;
    lVar2 = 0x10;
    lVar1 = param_3;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + lVar2));
LAB_00614348:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 00614364; end: 0061436f; -[SCOptional .cxx_destruct] */

void FUN_00614364(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 0x18,0);
  return;
}



/* Entry: 00614370; end: 00614387; -[SCAsyncQueueTracer initWithQueue:context:type:] */

undefined8 FUN_00614370(void)

{
  _objc_release();
  return 0;
}



/* Entry: 00614388; end: 0061438b; -[SCAsyncQueueTracer updateQueue:] */

void FUN_00614388(void)

{
  return;
}



/* Entry: 0061438c; end: 006143a3; -[SCAsyncQueueTracer traceBlock:] */

void FUN_0061438c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retainBlock(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 006143a4; end: 006143a7; +[SCAsyncQueueTracer setGrapheneLogger:] */

void FUN_006143a4(void)

{
  return;
}



/* Entry: 006143a8; end: 006143bf; -[SCMainThreadTracer traceBlock:caller:] */

void FUN_006143a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retainBlock(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 006143c0; end: 006143c3; -[SCMainThreadTracer subscribeOnCurrentPageEvent:disposableObserverLifecycle:] */

void FUN_006143c0(void)

{
  return;
}



/* Entry: 006143c4; end: 006143c7; -[SCMainThreadTracer setMainThreadGrapheneLogger:] */

void FUN_006143c4(void)

{
  return;
}



/* Entry: 006143c8; end: 006143db;  */

void _SCMainThreadTracingBlock(void)

{
  _objc_retainBlock();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 006143dc; end: 006143df; -[SCGraphene addTimer:durationMs:] */

void FUN_006143dc(void)

{
  return;
}



/* Entry: 006143e0; end: 006143e3; -[SCGraphene addTimer:durationSec:] */

void FUN_006143e0(void)

{
  return;
}



/* Entry: 006143e4; end: 006143e7; -[SCGraphene addHistogram:value:] */

void FUN_006143e4(void)

{
  return;
}



/* Entry: 006143e8; end: 006143eb; -[SCGraphene increment:value:] */

void FUN_006143e8(void)

{
  return;
}



/* Entry: 006143ec; end: 006143ef; -[SCGraphene increment:] */

void FUN_006143ec(void)

{
  return;
}



/* Entry: 006143f0; end: 006143f3; -[SCGraphenePerformanceLogger logTimeMetricsStart:uniqueId:] */

void FUN_006143f0(void)

{
  return;
}



/* Entry: 006143f4; end: 006143f7; -[SCGraphenePerformanceLogger updateMetricWithUniqueId:dimensionNameToValue:] */

void FUN_006143f4(void)

{
  return;
}



/* Entry: 006143f8; end: 006143fb; -[SCGraphenePerformanceLogger incrementCounterWithUniqueId:] */

void FUN_006143f8(void)

{
  return;
}



/* Entry: 006143fc; end: 006143ff; -[SCGraphenePerformanceLogger logHistogramWithUniqueId:value:] */

void FUN_006143fc(void)

{
  return;
}



/* Entry: 00614400; end: 00614403; -[SCGraphenePerformanceLogger logTimeMetricEndWithUniqueId:] */

void FUN_00614400(void)

{
  return;
}



/* Entry: 00614404; end: 00614477; -[SCGraphenePerformanceLoggerServices initWithGraphenePerformanceLoggerProvider:] */

undefined1 * FUN_00614404(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_00ac41c8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 00614478; end: 0061447f; -[SCGraphenePerformanceLoggerServices graphenePerformanceLoggerProvider] */

undefined8 FUN_00614478(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 00614480; end: 0061448b; -[SCGraphenePerformanceLoggerServices .cxx_destruct] */

void FUN_00614480(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 0061448c; end: 00614493; -[SCGrapheneRegistry registerPartitionWithName:overrideNameForUpload:metricNames:] */

undefined8 FUN_0061448c(void)

{
  return 0;
}



/* Entry: 00614494; end: 00614537; -[SCGrapheneServices initWithGrapheneFlusher:grapheneRegistry:] */

undefined1 *
FUN_00614494(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_00ac41d0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
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



/* Entry: 00614538; end: 0061453f; -[SCGrapheneServices grapheneFlusher] */

undefined8 FUN_00614538(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 00614540; end: 00614547; -[SCGrapheneServices grapheneRegistry] */

undefined8 FUN_00614540(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 00614548; end: 00614577; -[SCGrapheneServices .cxx_destruct] */

void FUN_00614548(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 00614578; end: 0061461b; -[SCAsyncObservable initWithParentObservable:queue:preferSynchronous:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_00614578(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_00ac41d8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithParentObservable__00abc578,param_3);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_00ac5824;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_00ac5828) = param_5;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 0061461c; end: 006146c3; -[SCAsyncObservable subscribe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0061461c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x0078a2e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_00ac3388;
  _objc_alloc(PTR_PTR_00ac3388);
  func_0x00785ec0();
  _objc_release(param_3);
  uVar2 = param_1;
  func_0x007923c0(param_1,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar2);
  return;
}



/* Entry: 006146c4; end: 006146d7; -[SCAsyncObservable .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006146c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + _DAT_00ac5824,0);
  return;
}



/* Entry: 006146d8; end: 006147ab; -[SCAsyncObserver initWithObservable:observer:queue:preferSynchronous:] */

undefined1 *
FUN_006146d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_00ac41e0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x20) = param_6;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 006147ac; end: 006148cf; -[SCAsyncObserver next:] */

void FUN_006147ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (*(char *)(param_1 + 0x20) == '\x01') {
    puVar1 = PTR__OBJC_CLASS___NSOperationQueue_00ac3070;
    func_0x007813a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x007877e0();
    _objc_release(puVar1);
    if ((int)puVar2 != 0) {
      func_0x00789920(*(undefined8 *)(param_1 + 0x10));
      goto LAB_00614898;
    }
  }
  _objc_initWeak(auStack_38,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x0077e7e0(uVar3);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
LAB_00614898:
  _objc_release(param_3);
  return;
}



/* Entry: 006148d0; end: 0061493b;  */

void FUN_006148d0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00789920(*(undefined8 *)(lVar1 + 0x10),param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(lVar1);
  return;
}



/* Entry: 0061493c; end: 00614a3f; -[SCAsyncObserver complete] */

void FUN_0061493c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  if (*(char *)(param_1 + 0x20) == '\x01') {
    puVar1 = PTR__OBJC_CLASS___NSOperationQueue_00ac3070;
    func_0x007813a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x007877e0();
    _objc_release(puVar1);
    if ((int)puVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x007806f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 0x10),PTR_s_complete_00abaeb0)
      ;
      return;
    }
  }
  _objc_initWeak(auStack_38,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x0077e7e0(uVar3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



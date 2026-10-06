/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1069806e8; end: 106980853; -[SCAdAttachmentHandlerEventTracker trackAttachmentPresentFailed:] */

void FUN_1069806e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar11 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf4e080();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0ed1e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf0cb60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf0d600();
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf0cb60(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf42940();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf0cb60(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf67c80();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bfa03e0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010bfa0600();
  func_0x00010c0a1300(uVar11,param_2,uVar2,uVar4,param_3,uVar6,uVar10);
  _objc_release(param_3);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar11);
  return;
}



/* Entry: 106980854; end: 1069808a7; -[SCAdAttachmentHandlerEventTracker trackAttachmentDidAppear] */

void FUN_106980854(double param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010beec800(*(undefined8 *)(param_2 + 0x10));
  func_0x00010c0df720(param_1 * 1000.0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  *(undefined **)(param_2 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1069808a8; end: 106980a2b; -[SCAdAttachmentHandlerEventTracker trackAttachmentDidDismiss] */

void FUN_1069808a8(double param_1,long param_2,undefined8 param_3)

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
  undefined8 uVar11;
  undefined8 uVar12;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010beec800(*(undefined8 *)(param_2 + 0x10));
  func_0x00010c0df720(param_1 * 1000.0);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_2 + 0x30);
  *(undefined **)(param_2 + 0x30) = puVar1;
  _objc_release(uVar12);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_2 + 8);
  func_0x00010bf4e080(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar3;
  func_0x00010c0ed1e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_2 + 8);
  func_0x00010bf0cb60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf0d600();
  uVar6 = *(undefined8 *)(param_2 + 8);
  func_0x00010bf0cb60(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf42940();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_2 + 8);
  func_0x00010bf0cb60(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf67c80();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010bfa03e0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010bfa0600();
  func_0x00010c0a1280(uVar2,param_3,uVar12,uVar5,uVar7,uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar12);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106980a2c; end: 106980b73; -[SCAdAttachmentHandlerEventTracker trackAttachmentWillDismiss] */

void FUN_106980a2c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf4e080(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0ed1e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf0cb60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf0d600();
  uVar6 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf0cb60(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf42940();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf0cb60(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf67c80();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010bfa03e0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010bfa0600();
  func_0x00010c0a12c0(uVar1,param_2,uVar3,uVar5,uVar7,uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106980b74; end: 106980bd3; -[SCAdAttachmentHandlerEventTracker .cxx_destruct] */

void FUN_106980b74(long param_1)

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



/* Entry: 106980bd4; end: 106980d37; -[SCAdAttachmentHandlerWorkflow initWithScope:plugInScopeExposer:eventTracker:adCrashLogger:eventStreamsRepository:useSwiftPresenters:adAttachmentPresenterPluginScopeServices:completionDedupEnabled:] */

undefined1 *
FUN_106980bd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
             undefined8 param_9,undefined1 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126f3ed8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 0x40) = param_10;
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
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x30) = param_8;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106980d38; end: 106980ecf; -[SCAdAttachmentHandlerWorkflow begin] */

void FUN_106980d38(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 *puStack_88;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c277a80();
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf0cb60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef1f60(uVar2);
  _objc_release(uVar1);
  _objc_initWeak(auStack_48,param_1);
  uStack_78 = 0;
  uStack_68 = 0x3032000000;
  pcStack_60 = FUN_106980ed0;
  uStack_58 = 0x106980ee0;
  uStack_50 = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_98 = FUN_106980ee8;
  puStack_90 = &UNK_11094ea40;
  uStack_a0 = 0xc2000000;
  puStack_70 = &uStack_78;
  _objc_copyWeak(auStack_80,auStack_48);
  puStack_88 = &uStack_78;
  _objc_copyWeak(auStack_b0,auStack_48);
  func_0x00010bf9d5c0(uVar1);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_80);
  __Block_object_dispose(&uStack_78,8);
  _objc_release(uStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 106980ed0; end: 106980ee7;  */

void FUN_106980ed0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106980ee8; end: 106980fcf;  */

void FUN_106980ee8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bdd0b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(long *)(lVar4 + 0x28) = lVar1;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 106980fd0; end: 10698103b; -[SCAdAttachmentHandlerWorkflow endWorkflowWithCompletion:] */

void FUN_106980fd0(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x48);
  func_0x00010c07ab40();
  if (iVar1 == 0) {
    if (param_3 != 0) {
      (**(code **)(param_3 + 0x10))(param_3);
    }
  }
  else {
    lVar2 = param_3;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)(param_1 + 0x50);
    *(long *)(param_1 + 0x50) = lVar2;
    _objc_release(uVar3);
    func_0x00010bf83200(*(undefined8 *)(param_1 + 0x48));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10698103c; end: 106981043; -[SCAdAttachmentHandlerWorkflow adAttachmentPresenterTriggerAttempt:] */

void FUN_10698103c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef1f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_adAttachmentPresenterTriggerAtte_11259a180);
  return;
}



/* Entry: 106981044; end: 10698104b; -[SCAdAttachmentHandlerWorkflow adAttachmentPresenterDidTrigger:] */

void FUN_106981044(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef1ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_adAttachmentPresenterDidTrigger__11259a160);
  return;
}



/* Entry: 10698104c; end: 106981053; -[SCAdAttachmentHandlerWorkflow adAttachmentPresenterDidLoad:metrics:] */

void FUN_10698104c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef1eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_adAttachmentPresenterDidLoad_met_11259a150);
  return;
}



/* Entry: 106981054; end: 1069810f3; -[SCAdAttachmentHandlerWorkflow adAttachmentPresenterDidPresent:attachmentMetadata:] */

void FUN_106981054(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c277a60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf6b020(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef1d40();
  _objc_release(uVar1);
  func_0x00010bef1ec0(*(undefined8 *)(param_1 + 0x28),param_2,param_3,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1069810f4; end: 1069812cf; -[SCAdAttachmentHandlerWorkflow adAttachmentPresenterDidComplete:result:attachmentMetadata:] */

void FUN_1069810f4(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (*(char *)(param_1 + 0x40) == '\x01') {
    if (*(char *)(param_1 + 0x58) != '\x01') {
      *(undefined1 *)(param_1 + 0x58) = 1;
      goto LAB_106981180;
    }
    lVar2 = *(long *)(param_1 + 0x50);
    _objc_retainBlock();
    uVar3 = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x50) = 0;
    _objc_release(uVar3);
    lVar4 = lVar2;
    if (lVar2 == 0) goto LAB_106981298;
    pcVar5 = *(code **)(lVar2 + 0x10);
  }
  else {
LAB_106981180:
    func_0x00010bef1e80(*(undefined8 *)(param_1 + 0x28),param_2,param_3,param_4,param_5);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_1069812d0;
    puStack_60 = &UNK_11094e830;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    uStack_90 = 0x106981308;
    puStack_88 = &UNK_110849810;
    lStack_80 = param_1;
    lStack_58 = param_1;
    func_0x00010c0c0800(param_4,param_2,&puStack_78,&puStack_a0);
    puStack_c8 = puVar1;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_10698135c;
    puStack_b0 = &UNK_11094ea70;
    lVar4 = param_4;
    lStack_a8 = param_1;
    func_0x00010bfb2660(param_4,param_2,&puStack_c8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf6b020(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef1d20();
    _objc_release(uVar3);
    lVar2 = *(long *)(param_1 + 0x50);
    if ((*(byte *)(param_1 + 0x40) & 1) != 0) {
      _objc_retainBlock();
      uVar3 = *(undefined8 *)(param_1 + 0x50);
      *(undefined8 *)(param_1 + 0x50) = 0;
      _objc_release(uVar3);
      if (lVar2 != 0) {
        (**(code **)(lVar2 + 0x10))(lVar2);
      }
      _objc_release(lVar2);
      goto LAB_106981298;
    }
    if (lVar2 == 0) goto LAB_106981298;
    pcVar5 = *(code **)(lVar2 + 0x10);
  }
  (*pcVar5)(lVar2);
LAB_106981298:
  _objc_release(lVar4);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1069812d0; end: 10698135b;  */

void FUN_1069812d0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c277a20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10698135c; end: 1069813ef;  */

void FUN_10698135c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  _objc_retain(param_2);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bf83680();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126af5d0;
  func_0x00010c2619e0(PTR_PTR_1126af5d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1069813f0; end: 1069814f7; -[SCAdAttachmentHandlerWorkflow _attachmentPresenterScopeWithPluginRegistry:] */

void FUN_1069813f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar2 = PTR_PTR_1126cf588;
  _objc_retain(param_3);
  _objc_alloc(puVar2);
  func_0x00010c041d80();
  puVar3 = PTR_PTR_1126cf590;
  _objc_alloc(PTR_PTR_1126cf590);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf0cb60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf4e080(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf801a0(uVar6);
  uVar1 = *(undefined1 *)(param_1 + 0x30);
  func_0x00010bf122c0();
  func_0x00010bff49e0(puVar3,param_2,uVar4,puVar2,uVar5,param_3,param_1,uVar6,uVar1);
  _objc_release(param_3);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1069814f8; end: 10698168f; -[SCAdAttachmentHandlerWorkflow _handleAttachmentPluginsRegistered:uiContainer:] */

void FUN_1069814f8(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_5);
  func_0x00010c0d3c80();
  uVar3 = *(undefined8 *)(param_2 + 0x38);
  uVar1 = *(undefined8 *)(param_2 + 8);
  func_0x00010bf0cb60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_2 + 8);
  func_0x00010bf4e080(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf801a0(*(undefined8 *)(param_2 + 8));
  func_0x00010bf122c0();
  func_0x00010bf22a00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010befa160(param_4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010bf0d0c0(PTR_PTR_1126cf598);
  if (param_1 <= 0.0) {
    func_0x00010be7a2e0(param_2);
  }
  else {
    uVar1 = 0;
    _dispatch_time(0,(long)(param_1 * 1000000000.0));
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_106981690;
    puStack_68 = &UNK_110841f80;
    lStack_60 = param_2;
    _objc_retain(param_4);
    uStack_58 = param_4;
    func_0x00010058c530(uVar1,PTR___dispatch_main_q_11034be20,&puStack_80);
    _objc_release(uStack_58);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 106981690; end: 10698169b;  */

void FUN_106981690(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be7a2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__presentAttachmentWithAttachment_11257c258,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10698169c; end: 106981827; -[SCAdAttachmentHandlerWorkflow _presentAttachmentWithAttachmentPresenters:] */

void FUN_10698169c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  lVar1 = param_1;
  func_0x00010bdf6700();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x48);
  *(long *)(param_1 + 0x48) = lVar1;
  _objc_release(uVar7);
  if (*(long *)(param_1 + 0x48) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c10b290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + 0x48),PTR_s_presentAttachment_1126206c0);
    return;
  }
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf0d280(PTR__OBJC_CLASS___NSError_1126ae858);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf0cb60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar4;
  func_0x00010bf42940();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar7;
  func_0x00010bef2c20();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b3e90;
  func_0x00010befdec0(PTR_PTR_1126b3e90);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0ad80(uVar3);
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(uVar7);
  _objc_release(uVar4);
  _objc_release(uVar3);
  puVar6 = PTR_PTR_1126af5d0;
  func_0x00010bfa01c0(PTR_PTR_1126af5d0);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf6b020(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef1d20();
  _objc_release(uVar7);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106981828; end: 1069818d3; -[SCAdAttachmentHandlerWorkflow _currentAttachmentPresenterWithAttachmentPresenters:] */

void FUN_106981828(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf00560(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bfaea20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bf529e0(uVar1);
  uVar2 = uVar1;
  func_0x00010bfb1920(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1069818d4; end: 10698193f;  */

undefined8 FUN_1069818d4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  _objc_retain(param_2);
  func_0x00010bf0cb60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf2cb00(param_2);
  _objc_release(param_2);
  _objc_release(uVar2);
  return uVar1;
}



/* Entry: 106981940; end: 1069819b7; -[SCAdAttachmentHandlerWorkflow .cxx_destruct] */

void FUN_106981940(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
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



/* Entry: 1069819b8; end: 106981a5b; -[SCAdAttachmentPresenterUIContainer initWithScope:eventTracker:] */

undefined1 *
FUN_1069819b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f3ee0;
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



/* Entry: 106981a5c; end: 106981a63; -[SCAdAttachmentPresenterUIContainer attachUI:] */

void FUN_106981a5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0c9b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_attachUI_completion__1125a0c10,param_3,0);
  return;
}



/* Entry: 106981a64; end: 106981c0f; -[SCAdAttachmentPresenterUIContainer attachUI:completion:] */

void FUN_106981a64(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf6b020(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef1e00();
  _objc_release(uVar1);
  _objc_initWeak(auStack_58,param_1);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_106981c10;
  puStack_70 = &UNK_110848708;
  _objc_retain(param_4);
  uStack_68 = param_4;
  _objc_copyWeak(auStack_60,auStack_58);
  ppuVar2 = &puStack_88;
  _objc_retainBlock();
  uVar3 = *(ulong *)(param_1 + 8);
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  _objc_opt_respondsToSelector();
  _objc_release(uVar3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  if ((uVar4 & 1) == 0) {
    func_0x00010c27ece0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0c980();
    _objc_release(uVar1);
    (*(code *)ppuVar2[2])(ppuVar2);
  }
  else {
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0c9a0();
    _objc_release(uVar1);
  }
  _objc_release(ppuVar2);
  _objc_destroyWeak(auStack_60);
  _objc_release(uStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106981c10; end: 106981c93;  */

void FUN_106981c10(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  }
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c277a00();
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf6b020(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef1dc0();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106981c94; end: 106981dcf; -[SCAdAttachmentPresenterUIContainer detachUI:] */

void FUN_106981c94(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf6b020(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef1e20();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c277ae0();
  _objc_release(uVar1);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c27ece0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf6f440(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106981dd0; end: 106981e33;  */

void FUN_106981dd0(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  }
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf6b020(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef1de0();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106981e34; end: 106981e63; -[SCAdAttachmentPresenterUIContainer .cxx_destruct] */

void FUN_106981e34(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106981e64; end: 106981f57; -[SCAdSurveyAttachmentPresenter initWithAttachment:uiContainer:runtime:delegate:] */

undefined1 *
FUN_106981e64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f3ee8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x28),param_6);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106981f58; end: 106981f77; -[SCAdSurveyAttachmentPresenter canHandleAttachment:] */

bool FUN_106981f58(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x00010bf0d600(param_3);
  return param_3 == 6;
}



/* Entry: 106981f78; end: 106981f7f; -[SCAdSurveyAttachmentPresenter isPresenting] */

undefined1 FUN_106981f78(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



/* Entry: 106981f80; end: 106982063; -[SCAdSurveyAttachmentPresenter presentAttachment] */

void FUN_106981f80(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  *(undefined1 *)(param_1 + 0x10) = 1;
  puVar1 = PTR_PTR_1126cf5a0;
  _objc_alloc(PTR_PTR_1126cf5a0);
  func_0x00010c05fce0();
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf0c9a0(uVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(puVar1);
  return;
}



/* Entry: 106982064; end: 1069820ff;  */

void FUN_106982064(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar1);
    puVar2 = PTR_PTR_1126bdc88;
    func_0x00010c264020(PTR_PTR_1126bdc88,param_2,*(undefined8 *)(param_1 + 8));
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126cf540;
    func_0x00010c263ea0(PTR_PTR_1126cf540);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef1ec0(lVar1,param_2,puVar2,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106982100; end: 1069821ab; -[SCAdSurveyAttachmentPresenter dismissAttachment] */

void FUN_106982100(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  *(undefined1 *)(param_1 + 0x10) = 0;
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010bf6f440(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1069821ac; end: 106982277;  */

void FUN_1069821ac(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar1);
    puVar2 = PTR_PTR_1126bdc88;
    func_0x00010c264020(PTR_PTR_1126bdc88,param_2,*(undefined8 *)(param_1 + 8));
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126cf540;
    func_0x00010c263ea0(PTR_PTR_1126cf540);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef1e80(lVar1,param_2,puVar2,puVar3,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106982278; end: 106982327; -[SCAdSurveyAttachmentPresenter onLeaveSurvey:] */

void FUN_106982278(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bf286c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0e4cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bf286c0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0e4cc0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))();
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  func_0x00010bf83200(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106982328; end: 10698236b; -[SCAdSurveyAttachmentPresenter .cxx_destruct] */

void FUN_106982328(long param_1)

{
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10698236c; end: 10698255b; -[SCAdSurveyAttachmentPresenterEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10698236c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  
  uVar1 = param_1;
  FUN_10698255c();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf0cb60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c263ee0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (uVar3 != 0) {
    uVar1 = param_1;
    FUN_10698255c();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c290b60();
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
      if (param_1 == 0) {
        lVar10 = 0;
      }
      else {
        lVar10 = param_1 + (long)_DAT_112754640;
        _objc_loadWeakRetained(lVar10);
      }
      lVar4 = lVar10;
      func_0x00010c295440(lVar10);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c142e00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar10);
      puVar7 = PTR_PTR_1126cf5a8;
      _objc_alloc(PTR_PTR_1126cf5a8);
      uVar1 = param_1;
      FUN_10698255c(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c27ece0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = param_1;
      FUN_10698255c(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar8;
      func_0x00010bf6b020();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bff4a00(puVar7,param_2,uVar3,uVar2,lVar6,uVar9);
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(uVar2);
      _objc_release(uVar1);
      FUN_10698255c(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = param_1;
      func_0x00010bf0d840();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c125b60();
      _objc_release(uVar1);
      _objc_release(param_1);
      _objc_release(puVar7);
      _objc_release(lVar6);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10698255c; end: 10698257f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10698255c(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11275463c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106982580; end: 1069825bb; -[SCAdSurveyAttachmentPresenterEntryPoint end] */

void FUN_106982580(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f3ef0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1069825bc; end: 1069825f3; -[SCAdSurveyAttachmentPresenterEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069825bc(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112754640);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275463c);
  return;
}



/* Entry: 1069825f4; end: 106982787; -[SCAdSurveyViewController initWithValdiRuntime:surveyAttachment:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1069825f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_58 = PTR_PTR_1126f3ef8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112754644),param_5);
    uVar8 = param_4;
    func_0x00010c263ea0(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar8;
    func_0x00010c11dde0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x000100504554();
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126cf5c0;
    _objc_alloc(PTR_PTR_1126cf5c0);
    func_0x00010c03c5a0();
    _objc_release(uVar3);
    _objc_release(uVar8);
    puVar5 = PTR_PTR_1126cf5b0;
    _objc_opt_new(PTR_PTR_1126cf5b0);
    puVar6 = (undefined1 *)puVar1;
    func_0x00010bdf0c00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d28a0(puVar5);
    _objc_release(puVar6);
    puVar7 = PTR_PTR_1126cf5b8;
    _objc_alloc();
    func_0x00010c061d40();
    uVar8 = *(undefined8 *)((long)puVar1 + (long)_DAT_112754648);
    *(undefined **)((long)puVar1 + (long)_DAT_112754648) = puVar7;
    _objc_release(uVar8);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106982788; end: 106982797; -[SCAdSurveyViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106982788(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c222390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setView__112666308,*(undefined8 *)(param_1 + _DAT_112754648));
  return;
}



/* Entry: 106982798; end: 1069828c3; -[SCAdSurveyViewController _createOnLeaveBlock] */

void FUN_106982798(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  ppuVar1 = &puStack_50;
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x106982820;
  puStack_38 = &UNK_110842c58;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retainBlock(&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 1069828c4; end: 10698294f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069828c4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_112754644;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000100504554(uVar2,&PTR___NSConcreteGlobalBlock_11094eb30);
  puVar3 = PTR_PTR_1126cf5d0;
  _objc_alloc(PTR_PTR_1126cf5d0);
  func_0x00010bff3220();
  _objc_release(uVar2);
  func_0x00010c0e4d00(lVar1);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106982950; end: 10698298b; -[SCAdSurveyViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106982950(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112754644);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112754648,0);
  return;
}



/* Entry: 10698298c; end: 106982b0f;  */

void FUN_10698298c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bf39000(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000100504554();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126ca780;
  _objc_alloc(PTR_PTR_1126ca780);
  uVar1 = param_2;
  func_0x00010c26b700(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27dd80();
  _objc_release(param_2);
  func_0x00010bff9020(puVar3);
  _objc_release(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106982b10; end: 106982c17;  */

void FUN_106982b10(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126cf5c8;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010bf39000(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c15a240(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010c11dca0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  func_0x00010c11dda0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_2;
  func_0x00010c0e9160(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c043ba0(puVar1);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106982c18; end: 106982cbb; -[SCAdWebViewAttachmentExternalBrowserPresenter initWithAttachment:urlHandler:] */

undefined1 *
FUN_106982c18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f3f00;
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



/* Entry: 106982cbc; end: 106982d0f; -[SCAdWebViewAttachmentExternalBrowserPresenter canHandleAttachment:] */

bool FUN_106982cbc(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  
  func_0x00010c2a3d40();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    bVar1 = false;
  }
  else {
    lVar2 = param_3;
    func_0x00010bf0d1e0(param_3);
    bVar1 = lVar2 == 1;
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 106982d10; end: 106982d13; -[SCAdWebViewAttachmentExternalBrowserPresenter dismissAttachment] */

void FUN_106982d10(void)

{
  return;
}



/* Entry: 106982d14; end: 106982d1b; -[SCAdWebViewAttachmentExternalBrowserPresenter isPresenting] */

undefined8 FUN_106982d14(void)

{
  return 0;
}



/* Entry: 106982d1c; end: 106983017; -[SCAdWebViewAttachmentExternalBrowserPresenter presentAttachment] */

void FUN_106982d1c(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c28f340();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(ulong *)(param_1 + 0x10);
  func_0x00010bf2cf00();
  puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
  if ((uVar2 & 1) == 0) {
    func_0x00010bf2f8c0(PTR_PTR_1126cf538);
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    lVar4 = param_1;
    _objc_opt_class();
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0d260(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(lVar4);
    param_1 = param_1 + 0x18;
    _objc_loadWeakRetained(param_1);
    func_0x00010c2a3180();
    _objc_release(param_1);
    _objc_release(puVar6);
  }
  else {
    lVar3 = *(long *)(param_1 + 8);
    func_0x00010bf286c0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf99f00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar3);
    if (lVar4 != 0) {
      lVar3 = *(long *)(param_1 + 8);
      func_0x00010bf286c0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bf99f00();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126ca410;
      uVar7 = uVar1;
      func_0x00010beec820(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf21720(puVar6);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar4 + 0x10))(lVar4,puVar6);
      _objc_release(puVar6);
      _objc_release(uVar7);
      _objc_release(lVar4);
      _objc_release(lVar3);
    }
    lVar3 = *(long *)(param_1 + 8);
    func_0x00010bf286c0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf99f00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar3);
    if (lVar4 != 0) {
      lVar3 = *(long *)(param_1 + 8);
      func_0x00010bf286c0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bf99f00();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126ca410;
      func_0x00010bf9a9c0(PTR_PTR_1126ca410);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar4 + 0x10))(lVar4,puVar6);
      _objc_release(puVar6);
      _objc_release(lVar4);
      _objc_release(lVar3);
    }
    _objc_initWeak(auStack_58,param_1);
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    _objc_copyWeak(auStack_60,auStack_58);
    func_0x00010c14d740(uVar7);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(uVar1);
  return;
}



/* Entry: 106983018; end: 10698304b;  */

void FUN_106983018(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2d640();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10698304c; end: 10698317f; -[SCAdWebViewAttachmentExternalBrowserPresenter _handleOpenUrlWithSuccess:] */

void FUN_10698304c(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c28f340();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (param_3 == 0) {
    puVar2 = PTR_PTR_1126cf538;
    func_0x00010bf2f8c0(PTR_PTR_1126cf538);
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    lVar3 = param_1;
    _objc_opt_class();
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar4,param_2,&PTR____CFConstantStringClassReference_110e66578);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0d260(puVar5,param_2,puVar2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(lVar3);
    param_1 = param_1 + 0x18;
    _objc_loadWeakRetained(param_1);
    func_0x00010c2a3180();
    _objc_release(param_1);
  }
  else {
    lVar3 = param_1 + 0x18;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c2a3240();
    _objc_release(lVar3);
    puVar5 = (undefined *)(param_1 + 0x18);
    _objc_loadWeakRetained(puVar5);
    func_0x00010c2a3140();
  }
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106983180; end: 106983197; -[SCAdWebViewAttachmentExternalBrowserPresenter delegate] */

void FUN_106983180(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106983198; end: 1069831a3; -[SCAdWebViewAttachmentExternalBrowserPresenter setDelegate:] */

void FUN_106983198(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 1069831a4; end: 1069831db; -[SCAdWebViewAttachmentExternalBrowserPresenter .cxx_destruct] */

void FUN_1069831a4(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1069831dc; end: 106983443; -[SCAdWebViewAttachmentInternalSnapBrowserPresenter initWithAttachment:uiContainer:urlInterceptor:adCrashLogger:browserScopeExposer:timeProvider:pixelMatchingMetricsManager:pixelServeItemSyncManager:webBrowsingConfigProvider:] */

undefined8 *
FUN_1069831dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126f3f08;
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
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b0798;
    _objc_alloc();
    uVar2 = param_3;
    func_0x00010bf42900(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c15ed20();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_3;
    func_0x00010c0fcb00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c044b60();
    uVar6 = puVar1[7];
    puVar1[7] = puVar3;
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[8];
    puVar1[8] = param_11;
    _objc_release(uVar2);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106983444; end: 106983497; -[SCAdWebViewAttachmentInternalSnapBrowserPresenter canHandleAttachment:] */

bool FUN_106983444(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  
  func_0x00010c2a3d40();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    bVar1 = false;
  }
  else {
    lVar2 = param_3;
    func_0x00010bf0d1e0(param_3);
    bVar1 = lVar2 != 1;
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 106983498; end: 1069834cf; -[SCAdWebViewAttachmentInternalSnapBrowserPresenter isPresenting] */

bool FUN_106983498(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c150520(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return lVar1 != 0;
}



/* Entry: 1069834d0; end: 10698367f; -[SCAdWebViewAttachmentInternalSnapBrowserPresenter dismissAttachment] */

void FUN_1069834d0(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  uVar1 = param_1;
  func_0x00010c07ab40();
  puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
  if ((uVar1 & 1) == 0) {
    puVar2 = PTR_PTR_1126cf538;
    func_0x00010bf0cfe0(PTR_PTR_1126cf538);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar1 = param_1;
    _objc_opt_class();
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110e66598);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0d260(puVar4,param_2,puVar2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(uVar1);
    lVar5 = param_1 + 0x70;
    _objc_loadWeakRetained(lVar5);
    func_0x00010c2a3160();
  }
  else {
    lVar5 = param_1 + 0x48;
    _objc_loadWeakRetained();
    _objc_release();
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    if (lVar5 != 0) {
      puVar4 = (undefined *)(param_1 + 0x48);
      _objc_loadWeakRetained(puVar4);
      func_0x00010bf82f40();
      goto LAB_106983664;
    }
    puVar2 = PTR_PTR_1126cf538;
    func_0x00010c2a3440(PTR_PTR_1126cf538);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar1 = param_1;
    _objc_opt_class();
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110e665b8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0d260(puVar4,param_2,puVar2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(uVar1);
    lVar5 = param_1 + 0x70;
    _objc_loadWeakRetained(lVar5);
    func_0x00010c2a3160();
  }
  _objc_release(lVar5);
LAB_106983664:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 106983680; end: 106983893; -[SCAdWebViewAttachmentInternalSnapBrowserPresenter presentAttachment] */

void FUN_106983680(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126c5518;
  _objc_opt_new();
  uVar7 = *(undefined8 *)(param_1 + 0x68);
  *(undefined **)(param_1 + 0x68) = puVar1;
  _objc_release(uVar7);
  lVar2 = param_1;
  func_0x00010bdf5bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  _objc_initWeak(auStack_68,param_1);
  puVar3 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = auStack_68;
  _objc_copyWeak(auStack_70,puVar6);
  func_0x00010c297260(puVar3);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126ae638;
  _objc_opt_new();
  uStack_60 = *(undefined8 *)(param_1 + 0x38);
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010bf22ba0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = puVar5;
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x28));
  _objc_release(puVar5);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  __Unwind_Resume(lVar2);
  _objc_retain(puVar3);
  _objc_retain(puVar6);
  lVar2 = lVar2 + 0x20;
  _objc_loadWeakRetained(lVar2);
  func_0x00010be68140();
  _objc_release(puVar3);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106983894; end: 1069838fb;  */

void FUN_106983894(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be68140();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069838fc; end: 106983ae7; -[SCAdWebViewAttachmentInternalSnapBrowserPresenter webBrowserDidDismiss:] */

void FUN_1069838fc(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  
  _objc_retain(param_4);
  func_0x00010beec800(*(undefined8 *)(param_2 + 0x30));
  dVar8 = param_1;
  func_0x00010bf885a0(*(undefined8 *)(param_2 + 0x50));
  if (*(long *)(param_2 + 0x58) == 0) {
    dVar8 = param_1 - dVar8;
  }
  else {
    func_0x00010bf885a0(*(long *)(param_2 + 0x58));
    dVar7 = dVar8;
    func_0x00010bf885a0(*(undefined8 *)(param_2 + 0x50));
    dVar8 = dVar8 - dVar7;
    if (dVar8 <= 0.0) {
      dVar8 = 0.0;
    }
  }
  uVar6 = *(undefined8 *)(param_2 + 0x68);
  uVar3 = param_4;
  func_0x00010c063fe0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bea60(dVar8,uVar6);
  _objc_release(uVar3);
  lVar1 = *(long *)(param_2 + 8);
  func_0x00010bf286c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf73ba0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = *(long *)(param_2 + 8);
    func_0x00010bf286c0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf73ba0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_2 + 0x68);
    func_0x00010c2a4420(uVar3);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
    _objc_release(uVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  func_0x00010bddf3e0(param_2);
  puVar4 = PTR_PTR_1126cf548;
  _objc_alloc(PTR_PTR_1126cf548);
  func_0x00010c062580(dVar8);
  param_2 = param_2 + 0x70;
  _objc_loadWeakRetained(param_2);
  puVar5 = PTR_PTR_1126cf550;
  func_0x00010bf42b80(PTR_PTR_1126cf550);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a3140(param_2);
  _objc_release(puVar5);
  _objc_release(param_2);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106983ae8; end: 106983b4b; -[SCAdWebViewAttachmentInternalSnapBrowserPresenter webBrowserPresented:] */

void FUN_106983ae8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010beec800(*(undefined8 *)(param_1 + 0x30));
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  *(undefined **)(param_1 + 0x50) = puVar1;
  _objc_release(uVar2);
  param_1 = param_1 + 0x70;
  _objc_loadWeakRetained(param_1);
  func_0x00010c2a3240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106983b4c; end: 106983bcb; -[SCAdWebViewAttachmentInternalSnapBrowserPresenter webBrowser:didReceiveResponse:url:] */

void FUN_106983b4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126ca410;
  if (param_5 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe4a80(puVar2,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    func_0x00010be6c820(param_1,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 106983bcc; end: 106983cd3; -[SCAdWebViewAttachmentInternalSnapBrowserPresenter webBrowserDidReceiveGAHit:hitTimestampMs:isPageView:isLandingPage:] */

void FUN_106983bcc(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  double dVar4;
  
  dVar4 = param_1;
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126afec0;
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (*(long *)(param_2 + 0x50) == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    func_0x00010bf885a0();
    func_0x00010c155420(puVar2);
    func_0x00010c0df720(param_1 - dVar4,puVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar2 = PTR_PTR_1126ca410;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbca40(puVar2,param_3,param_4,puVar3,puVar1,param_5,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010be6c820(param_2,param_3,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106983cd4; end: 106983d87; -[SCAdWebViewAttachmentInternalSnapBrowserPresenter webBrowserDidInterceptPixelRequest:] */

void FUN_106983cd4(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  double dVar3;
  
  puVar2 = PTR_PTR_1126afec0;
  if (*(long *)(param_2 + 0x50) != 0) {
    dVar3 = param_1;
    func_0x00010bf885a0();
    func_0x00010c155420(param_1 - dVar3,puVar2);
    puVar2 = PTR_PTR_1126ca410;
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0fcc80(puVar2,param_3,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    func_0x00010be6c820(param_2,param_3,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 106983d88; end: 106983dfb; -[SCAdWebViewAttachmentInternalSnapBrowserPresenter webBrowserInterimUpdate:performanceMetrics:] */

void FUN_106983d88(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if ((param_4 != 0) && ((*(byte *)(param_1 + 0x60) & 1) == 0)) {
    _objc_retain(param_4);
    lVar1 = param_1 + 0x48;
    _objc_loadWeakRetained(lVar1);
    func_0x00010be6c7e0(param_1,param_2,lVar1,param_4);
    _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 106983dfc; end: 10698450f; -[SCAdWebViewAttachmentInternalSnapBrowserPresenter _onWebBrowser:performanceMetrics:] */

void FUN_106983dfc(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uStack_a8;
  
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b9450;
  _objc_retain(param_4);
  func_0x00010c0f9840(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  uVar3 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar1);
  uVar14 = uVar2;
  if ((uVar3 & 1) == 0) {
    uVar14 = 0;
  }
  _objc_retain(uVar14);
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126b9450;
  func_0x00010c0f97e0(PTR_PTR_1126b9450);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0b4ca0();
  _objc_release(uVar2);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126bde58;
  func_0x00010c0d6ba0(PTR_PTR_1126bde58);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar14;
  func_0x00010c0e00e0(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0();
  _objc_release(uVar2);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126bde58;
  func_0x00010c13b840(PTR_PTR_1126bde58);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar14;
  func_0x00010c0e00e0(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0();
  uVar4 = param_2;
  func_0x00010beeabe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126bde58;
  func_0x00010bf87b80(PTR_PTR_1126bde58);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar14;
  func_0x00010c0e00e0(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0();
  uVar5 = param_2;
  func_0x00010beeabe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126bde58;
  func_0x00010c09b460(PTR_PTR_1126bde58);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar14;
  func_0x00010c0e00e0(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0();
  uVar6 = param_2;
  func_0x00010beeabe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126bde58;
  func_0x00010bf87ce0(PTR_PTR_1126bde58);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar14;
  func_0x00010c0e00e0(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0();
  uVar7 = param_2;
  func_0x00010beeabe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126bde58;
  func_0x00010bf87b80(PTR_PTR_1126bde58);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar14;
  func_0x00010c0e00e0(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0();
  uVar8 = param_2;
  func_0x00010beeabe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126bde58;
  func_0x00010bf87aa0(PTR_PTR_1126bde58);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar14;
  func_0x00010c0e00e0(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0();
  uVar9 = param_2;
  func_0x00010beeabe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126bde58;
  func_0x00010c13bc60(PTR_PTR_1126bde58);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar14;
  func_0x00010c0e00e0(uVar14);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar14);
  func_0x00010c0b4ca0(uVar2);
  uVar10 = param_2;
  func_0x00010beeabe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(puVar1);
  if ((long)uVar3 < 1) {
    uStack_a8 = (undefined *)0x0;
  }
  else {
    uStack_a8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df7c0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bfdce60(param_4);
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c063f20(param_4);
  func_0x00010c0df720(param_1 * 100.0);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR_PTR_1126b9318;
  _objc_alloc();
  puVar13 = PTR_PTR_1126b9450;
  func_0x00010c0f9880();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_4;
  func_0x00010bf6eb40();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar15;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = PTR_PTR_1126b9450;
  func_0x00010c0f9860(PTR_PTR_1126b9450);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = param_4;
  func_0x00010c087e20();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = param_4;
  func_0x00010c087e40();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = param_4;
  func_0x00010c087e60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00e280(puVar12);
  _objc_release(uVar21);
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(uVar2);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(puVar13);
  uVar15 = param_4;
  _objc_opt_class(param_4);
  _objc_release(param_4);
  func_0x00010bf21840(uVar15);
  puVar13 = PTR_PTR_1126ca410;
  func_0x00010c2a4140(PTR_PTR_1126ca410);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be6c820(param_2);
  puVar17 = PTR_PTR_1126b9450;
  func_0x00010c0f9800(PTR_PTR_1126b9450);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar14;
  func_0x00010bf1f3c0();
  _objc_release(uVar14);
  _objc_release(puVar17);
  if ((int)uVar2 != 0) {
    puVar17 = PTR_PTR_1126ca410;
    func_0x00010bfbca80(PTR_PTR_1126ca410);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be6c820(param_2);
    _objc_release(puVar17);
  }
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar1);
  _objc_release(uStack_a8);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 106984510; end: 106984547; -[SCAdWebViewAttachmentInternalSnapBrowserPresenter _webViewLatencyValue:startTimestamp:] */

void FUN_106984510(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  if ((0 < param_4) && (param_4 <= param_3)) {
    func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3 - param_4);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106984548; end: 1069845bb; -[SCAdWebViewAttachmentInternalSnapBrowserPresenter webBrowserDidFinalizeJavaScriptMetrics:] */

void FUN_106984548(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 0x60) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x60) = 1;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c085420(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be6c7e0(param_1,param_2,param_3,uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1069845bc; end: 10698460b; -[SCAdWebViewAttachmentInternalSnapBrowserPresenter webBrowser:onEvent:] */

void FUN_1069845bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  
  if (param_4 != 0) {
    puVar1 = PTR_PTR_1126ca410;
    func_0x00010bf216c0(PTR_PTR_1126ca410,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be6c820(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 10698460c; end: 10698465b; -[SCAdWebViewAttachmentInternalSnapBrowserPresenter webBrowser:onUserInteractionEvent:] */

void FUN_10698460c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  
  if (param_4 != 0) {
    puVar1 = PTR_PTR_1126ca410;
    func_0x00010c292a40(PTR_PTR_1126ca410,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be6c820(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 10698465c; end: 1069846af; -[SCAdWebViewAttachmentInternalSnapBrowserPresenter webBrowser:didFinishLoadWithSuccess:] */

void FUN_10698465c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (*(long *)(param_1 + 0x58) != 0) {
    return;
  }
  func_0x00010beec800(*(undefined8 *)(param_1 + 0x30));
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  *(undefined **)(param_1 + 0x58) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1069846b0; end: 1069847c7; -[SCAdWebViewAttachmentInternalSnapBrowserPresenter _onBrowserExposed:error:] */

void FUN_1069846b0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126ca410;
  if ((param_3 == 0) || (param_4 != 0)) {
    func_0x00010bdfdbe0(param_1);
  }
  else {
    _objc_opt_class(param_3);
    func_0x00010bf21840();
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c28f340(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf21720(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar1);
    func_0x00010be6c820(param_1);
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c28f340(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09c520(param_3);
    _objc_release(uVar3);
    func_0x00010c1b2ea0(param_3);
    _objc_storeWeak(param_1 + 0x48,param_3);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1069847c8; end: 106984837; -[SCAdWebViewAttachmentInternalSnapBrowserPresenter _didFailToPresent:withError:] */

void FUN_1069847c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bddf3e0(param_1);
  param_1 = param_1 + 0x70;
  _objc_loadWeakRetained(param_1);
  func_0x00010c2a3180();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106984838; end: 1069848b3; -[SCAdWebViewAttachmentInternalSnapBrowserPresenter _cleanup] */

void FUN_106984838(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_storeWeak(param_1 + 0x48,0);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + 0x60) = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + 0x28);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x28));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1069848b4; end: 1069848fb; -[SCAdWebViewAttachmentInternalSnapBrowserPresenter eventHandler] */

void FUN_1069848b4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf286c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf99f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1069848fc; end: 106984d8f; -[SCAdWebViewAttachmentInternalSnapBrowserPresenter _createWebBrowserConfig:] */

void FUN_1069848fc(long param_1,undefined8 param_2,undefined **param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae630;
  func_0x00010bfe6000(PTR_PTR_1126ae630);
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = param_3;
  func_0x00010c28f340(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ad780(puVar1,param_2,ppuVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(ppuVar6);
  puVar1 = puVar2;
  func_0x00010c2b9b80(puVar2,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  ppuVar6 = param_3;
  func_0x00010c0696c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar6 != (undefined **)0x0) {
    ppuVar6 = param_3;
    func_0x00010c0696c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar6;
    func_0x00010bf80020();
    puVar2 = puVar1;
    func_0x00010c2ac4e0(puVar1,param_2,ppuVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    ppuVar3 = ppuVar6;
    func_0x00010bf83380(ppuVar6);
    puVar4 = puVar2;
    func_0x00010c2ac720(puVar2,param_2,ppuVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    ppuVar3 = ppuVar6;
    func_0x00010beee9a0(ppuVar6);
    puVar1 = puVar4;
    func_0x00010c2a75c0(puVar4,param_2,ppuVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(ppuVar6);
  }
  puVar2 = PTR_PTR_1126bddf0;
  func_0x00010bfe6000(PTR_PTR_1126bddf0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c2b9b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = puVar4;
  func_0x00010c2b0160(puVar4,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = puVar2;
  func_0x00010c2baf00(puVar2,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  ppuVar3 = param_3;
  func_0x00010bf42900();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar3;
  func_0x00010bef2c20();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar5 != (undefined **)0x0) {
    ppuVar6 = ppuVar5;
  }
  puVar2 = puVar4;
  func_0x00010c2a7840(puVar4,param_2,ppuVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(ppuVar5);
  ppuVar6 = ppuVar3;
  func_0x00010c15ed20();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar6;
  func_0x00010c08fa60();
  if (ppuVar5 == (undefined **)0x0) {
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar5 = ppuVar3;
    func_0x00010c15ed20(ppuVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar4 = puVar2;
  func_0x00010c2a7ca0(puVar2,param_2,ppuVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar5);
  _objc_release(ppuVar6);
  ppuVar6 = ppuVar3;
  func_0x00010bef47c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar6;
  func_0x00010c08fa60();
  if (ppuVar5 == (undefined **)0x0) {
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar5 = ppuVar3;
    func_0x00010bef47c0(ppuVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar2 = puVar4;
  func_0x00010c2a7bc0(puVar4,param_2,ppuVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(ppuVar5);
  _objc_release(ppuVar6);
  ppuVar5 = ppuVar3;
  func_0x00010bef27a0();
  if (ppuVar5 == (undefined **)0x4) {
    ppuVar6 = *(undefined ***)(param_1 + 0x40);
    func_0x00010c269d40(ppuVar6);
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar6;
    func_0x00010bf8ff80();
  }
  else {
    ppuVar7 = (undefined **)0x0;
  }
  puVar4 = puVar2;
  func_0x00010c2ac4c0(puVar2,param_2,ppuVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  if (ppuVar5 == (undefined **)0x4) {
    _objc_release(ppuVar6);
  }
  ppuVar6 = param_3;
  func_0x00010bf96040();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ad340(puVar1,param_2,ppuVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (ppuVar6 != (undefined **)0x0) {
    ppuVar5 = ppuVar6;
    func_0x00010bf96060(ppuVar6);
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar5;
    func_0x00010c28f340();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar4;
    func_0x00010c2aee40(puVar4,param_2,ppuVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(ppuVar7);
    _objc_release(ppuVar5);
    ppuVar5 = ppuVar6;
    func_0x00010bf96060(ppuVar6);
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar5;
    func_0x00010bf45f80();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c2aee20(puVar1,param_2,ppuVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(ppuVar7);
    _objc_release(ppuVar5);
  }
  puVar1 = puVar2;
  func_0x00010c2a77a0(puVar2,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar6);
  _objc_release(ppuVar3);
  _objc_release(puVar4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106984d90; end: 106984e13; -[SCAdWebViewAttachmentInternalSnapBrowserPresenter _onWebBrowserSessionEvent:] */

void FUN_106984d90(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  func_0x00010c0e7a40(*(undefined8 *)(param_1 + 0x68));
  lVar1 = param_1;
  func_0x00010bf99f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010bf99f00();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_1 + 0x10))();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106984e14; end: 106984e2b; -[SCAdWebViewAttachmentInternalSnapBrowserPresenter delegate] */

void FUN_106984e14(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106984e2c; end: 106984e37; -[SCAdWebViewAttachmentInternalSnapBrowserPresenter setDelegate:] */

void FUN_106984e2c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x70,param_3);
  return;
}



/* Entry: 106984e38; end: 106984ee3; -[SCAdWebViewAttachmentInternalSnapBrowserPresenter .cxx_destruct] */

void FUN_106984e38(long param_1)

{
  _objc_destroyWeak(param_1 + 0x70);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_destroyWeak(param_1 + 0x48);
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



/* Entry: 106984ee4; end: 1069851f3; -[SCAdWebViewAttachmentPresenter initWithAttachment:uiContainer:urlInterceptor:delegate:adCrashLogger:browserScopeExposer:webBrowserScopeExposer:webBrowserScopeServices:pixelMatchingMetricsManager:pixelServeItemSyncManager:webBrowsingConfigProvider:] */

undefined8
FUN_106984ee4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  uVar1 = param_13;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf90fa0();
  if ((int)uVar2 == 0) {
    uVar2 = param_3;
    func_0x00010c0696c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfb5320();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((int)uVar3 == 0) {
      puVar4 = PTR_PTR_1126cf5e0;
      _objc_alloc(PTR_PTR_1126cf5e0);
      puVar5 = PTR_PTR_1126aeea8;
      _objc_opt_new(PTR_PTR_1126aeea8);
      func_0x00010bff4a20(puVar4,param_2,param_3,param_4,param_5,param_7,param_8,puVar5,param_11,
                          param_12,param_13);
      _objc_release(puVar5);
      func_0x00010c18b5e0(puVar4,param_2,param_1);
      puVar5 = PTR_PTR_1126cf5e8;
      _objc_alloc();
      puVar6 = PTR__OBJC_CLASS___UIApplication_1126ae590;
      func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bff4aa0(puVar5,param_2,param_3,puVar6);
      _objc_release(puVar6);
      func_0x00010c18b5e0(puVar5,param_2,param_1);
      goto LAB_10698512c;
    }
  }
  else {
    _objc_release(uVar1);
  }
  puVar4 = PTR_PTR_1126cf5d8;
  _objc_alloc();
  puVar5 = PTR_PTR_1126aeea8;
  _objc_opt_new(PTR_PTR_1126aeea8);
  func_0x00010bff4a80(puVar4,param_2,param_3,param_4,param_9,param_10,puVar5,param_13);
  _objc_release(puVar5);
  func_0x00010c18b5e0(puVar4,param_2,param_1);
  _objc_retain(puVar4);
  puVar5 = puVar4;
LAB_10698512c:
  func_0x00010bff4a60(param_1,param_2,param_3,param_4,param_5,param_6,param_7,puVar4,puVar5,param_13
                     );
  _objc_release(param_13);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 1069851f4; end: 106985353; +[SCAdWebViewAttachmentPresenter presenterWithAttachment:uiContainer:urlInterceptor:delegate:adCrashLogger:browserScopeExposer:webBrowserScopeExposer:webBrowserScopeServices:pixelMatchingMetricsManager:pixelServeItemSyncManager:webBrowsingConfigProvider:] */

void FUN_1069851f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  _objc_retain(param_13);
  _objc_retain(param_12);
  _objc_retain(param_11);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010bff4a40();
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106985354; end: 10698549b; -[SCAdWebViewAttachmentPresenter initWithAttachment:uiContainer:urlInterceptor:delegate:adCrashLogger:internalSnapBrowserPresenter:externalBrowserPresenter:webBrowsingConfigProvider:] */

undefined1 *
FUN_106985354(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_58 = PTR_PTR_1126f3f10;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_6);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_10;
    _objc_release(uVar2);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10698549c; end: 1069854bb; -[SCAdWebViewAttachmentPresenter canHandleAttachment:] */

bool FUN_10698549c(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x00010bf0d600(param_3);
  return param_3 == 1;
}



/* Entry: 1069854bc; end: 1069854f7; -[SCAdWebViewAttachmentPresenter isPresenting] */

/* WARNING: Possible PIC construction at 0x0001069854d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001069854d4) */
/* WARNING: Removing unreachable block (ram,0x0001069854e8) */
/* WARNING: Removing unreachable block (ram,0x0001069854d8) */

void FUN_1069854bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07ab50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_isPresenting_1125fc4e0);
  return;
}



/* Entry: 1069854f8; end: 10698557b; -[SCAdWebViewAttachmentPresenter presentAttachment] */

void FUN_1069854f8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  puVar2 = PTR_PTR_1126bdc88;
  func_0x00010c2a4560(PTR_PTR_1126bdc88,param_2,*(undefined8 *)(param_1 + 8));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef1ee0(lVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(lVar1);
  func_0x00010bef0ea0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10b280();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10698557c; end: 10698564f; -[SCAdWebViewAttachmentPresenter dismissAttachment] */

void FUN_10698557c(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = param_1;
  func_0x00010c07ab40();
  if (((ulong)puVar1 & 1) == 0) {
    puVar2 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_1 + 0x20;
    _objc_loadWeakRetained(puVar1);
    puVar3 = PTR_PTR_1126bdc88;
    func_0x00010c2a4560(PTR_PTR_1126bdc88,param_2,*(undefined8 *)(param_1 + 8));
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126cf540;
    func_0x00010c2a3bc0(PTR_PTR_1126cf540);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef1e80(puVar1,param_2,puVar3,puVar2,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar1);
  }
  else {
    func_0x00010bef0ea0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf83200();
    puVar2 = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106985650; end: 1069856cf; -[SCAdWebViewAttachmentPresenter activePresenter] */

void FUN_106985650(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb4b40();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    func_0x00010bf0d1e0();
    if (2 < uVar2) goto LAB_1069856bc;
    lVar3 = *(long *)(&UNK_10dde3288 + uVar2 * 8);
  }
  else {
    lVar3 = 0x18;
  }
  uVar1 = *(ulong *)(param_1 + lVar3);
  _objc_retain(uVar1);
LAB_1069856bc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1069856d0; end: 106985757; -[SCAdWebViewAttachmentPresenter webBrowserDidPresent:] */

void FUN_1069856d0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  puVar2 = PTR_PTR_1126bdc88;
  func_0x00010c2a4560(PTR_PTR_1126bdc88,param_2,*(undefined8 *)(param_1 + 8));
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126cf540;
  func_0x00010c2a3bc0(PTR_PTR_1126cf540);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef1ec0(lVar1,param_2,puVar2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106985758; end: 106985803; -[SCAdWebViewAttachmentPresenter webBrowserDidDismissWithAdAttachmentLoadingMetrics:] */

void FUN_106985758(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010c2619e0(PTR_PTR_1126af5d0);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar2);
  puVar3 = PTR_PTR_1126bdc88;
  func_0x00010c2a4560(PTR_PTR_1126bdc88,param_2,*(undefined8 *)(param_1 + 8));
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126cf540;
  func_0x00010c2a3bc0(PTR_PTR_1126cf540);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef1e80(lVar2,param_2,puVar3,puVar1,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106985804; end: 1069858b3; -[SCAdWebViewAttachmentPresenter webBrowserDidFailToPresent:withError:] */

void FUN_106985804(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar2);
  puVar3 = PTR_PTR_1126bdc88;
  func_0x00010c2a4560(PTR_PTR_1126bdc88,param_2,*(undefined8 *)(param_1 + 8));
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126cf540;
  func_0x00010c2a3bc0(PTR_PTR_1126cf540);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef1e80(lVar2,param_2,puVar3,puVar1,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1069858b4; end: 106985963; -[SCAdWebViewAttachmentPresenter webBrowserDidFailToDismiss:withError:] */

void FUN_1069858b4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010c2619e0(PTR_PTR_1126af5d0,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar2);
  puVar3 = PTR_PTR_1126bdc88;
  func_0x00010c2a4560(PTR_PTR_1126bdc88,param_2,*(undefined8 *)(param_1 + 8));
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126cf540;
  func_0x00010c2a3bc0(PTR_PTR_1126cf540);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef1e80(lVar2,param_2,puVar3,puVar1,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



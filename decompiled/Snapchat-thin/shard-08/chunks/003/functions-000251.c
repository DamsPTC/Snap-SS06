/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1060555b4; end: 106055643; -[SCCWarningSyncer syncWithUserId:tweaks:blizzardLogger:] */

void FUN_1060555b4(long param_1)

{
  undefined8 in_x4;
  
  _objc_retain(in_x4);
  func_0x000106055808();
  func_0x000106055848();
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106055838();
  func_0x000106055830();
  func_0x000106055828();
  func_0x000106055840();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106055644; end: 10605574f; +[SCCWarningSyncer invokeWithJSRuntimeProvider:userId:tweaks:blizzardLogger:completionHandler:] */

void FUN_106055644(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x00010605586c();
  func_0x000106055808();
  func_0x000106055848();
  _objc_retain(param_7);
  (**(code **)(param_3 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_106055750;
  puStack_70 = &UNK_110852488;
  lStack_68 = param_3;
  uStack_60 = param_4;
  uStack_58 = param_5;
  uStack_50 = param_6;
  uStack_48 = param_7;
  _objc_retain(param_7);
  func_0x000106055848();
  func_0x000106055808();
  func_0x00010605587c();
  _objc_retain(param_3);
  func_0x00010bf85140(param_3,param_2,&puStack_88);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  func_0x000106055864();
  func_0x000106055840();
  func_0x000106055828();
  func_0x000106055830();
  func_0x000106055838();
  _objc_release(param_3);
  return;
}



/* Entry: 106055750; end: 1060557c7;  */

void FUN_106055750(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c7548;
  func_0x00010bfbc0e0(PTR_PTR_1126c7548,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(puVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106055850(*(undefined8 *)(param_1 + 0x40));
  func_0x000106055840();
  func_0x000106055828();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1060557c8; end: 1060557e3; +[SCCWarningSyncer valdiMarshallableObjectDescriptor] */

void FUN_1060557c8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110909700;
  param_1[1] = &PTR_DAT_110909730;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 2;
  return;
}



/* Entry: 1060557e4; end: 106055883; +[SCCWarningManaging valdiMarshallableObjectDescriptor] */

void FUN_1060557e4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110909748;
  param_1[1] = &PTR_DAT_110909778;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 106055884; end: 1060558c7; -[SCCInAppWarning initWithWarningId:warningType:createdAtTs:acknowledgedAtTs:lastModifiedVersion:] */

void FUN_106055884(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ef4e0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 1060558c8; end: 1060558db; +[SCCInAppWarning valdiMarshallableObjectDescriptor] */

void FUN_1060558c8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110909790;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1060558dc; end: 10605590f; -[SCCInAppWarningTweaks init] */

void FUN_1060558dc(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ef4e8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 106055910; end: 106055923; +[SCCInAppWarningTweaks valdiMarshallableObjectDescriptor] */

void FUN_106055910(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110909820;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106055924; end: 1060559e7; -[SCCWarningDependencies initWithBlizzardLogger:openUrl:pagelauncher:notificationPresenter:] */

undefined8 *
FUN_106055924(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_retainBlock();
  puStack_48 = PTR_PTR_1126ef4f0;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFieldValues__1125e24b8,0);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 1060559e8; end: 106055a0b; +[SCCWarningDependencies valdiMarshallableObjectDescriptor] */

void FUN_1060559e8(undefined8 *param_1)

{
  *param_1 = &PTR_s_blizzardLogger_110909880;
  param_1[1] = &PTR_s_SCCBlizzardLogging_110909988;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106055a0c; end: 106055aab; -[SCInAppWarningGrapheneLogger initWithGrapheneRegistry:] */

undefined1 * FUN_106055a0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126ef4f8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfeb360();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106055aac; end: 106055ab3; -[SCInAppWarningGrapheneLogger incrementMetric:] */

void FUN_106055aac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfec2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_increment__1125d8a70);
  return;
}



/* Entry: 106055ab4; end: 106055b57; -[SCInAppWarningGrapheneLogger logTakeoverFgCheck:] */

void FUN_106055ab4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110daf4f8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c7568;
  func_0x00010bfe5360(PTR_PTR_1126c7568);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010bfec640(param_1,param_2,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106055b58; end: 106055b9b; -[SCInAppWarningGrapheneLogger logLaunchTriggered] */

void FUN_106055b58(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c7568;
  func_0x00010bfe52c0(PTR_PTR_1126c7568);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec640(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106055b9c; end: 106055bfb; -[SCInAppWarningGrapheneLogger logLaunchWarningCount:] */

void FUN_106055b9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c7568;
  func_0x00010bfe52e0(PTR_PTR_1126c7568);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180(*(undefined8 *)(param_1 + 8),param_2,puVar1,param_3);
  func_0x00010bfec640(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106055bfc; end: 106055c3f; -[SCInAppWarningGrapheneLogger logLaunchMultiWarnings] */

void FUN_106055bfc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c7568;
  func_0x00010bfe52a0(PTR_PTR_1126c7568);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec640(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106055c40; end: 106055ce3; -[SCInAppWarningGrapheneLogger logWarningPresentedMetric:] */

void FUN_106055c40(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110daf4f8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c7568;
  func_0x00010bfe53c0(PTR_PTR_1126c7568);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010bfec640(param_1,param_2,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106055ce4; end: 106055d87; -[SCInAppWarningGrapheneLogger logWarningAcknowledgedMetric:] */

void FUN_106055ce4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110daf4f8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c7568;
  func_0x00010bfe5380(PTR_PTR_1126c7568);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010bfec640(param_1,param_2,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106055d88; end: 106055ddb; -[SCInAppWarningGrapheneLogger logWarningToAckElapseMs:] */

void FUN_106055d88(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c7568;
  func_0x00010bfe53e0(PTR_PTR_1126c7568);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbfe0(*(undefined8 *)(param_2 + 8),param_3,puVar1,(long)param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106055ddc; end: 106055e7f; -[SCInAppWarningGrapheneLogger logWarningNotDismissed:] */

void FUN_106055ddc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110daf4f8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c7568;
  func_0x00010bfe5300(PTR_PTR_1126c7568);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010bfec640(param_1,param_2,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106055e80; end: 106055f23; -[SCInAppWarningGrapheneLogger logWarningNoInternet:] */

void FUN_106055e80(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110daf4f8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c7568;
  func_0x00010bfe53a0(PTR_PTR_1126c7568);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010bfec640(param_1,param_2,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106055f24; end: 106055fd7; -[SCInAppWarningGrapheneLogger logWarningGuidelinesToDismissElapseMs:warningType:] */

void FUN_106055f24(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,
                      &PTR____CFConstantStringClassReference_110daf4f8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c7568;
  func_0x00010bfe5200(PTR_PTR_1126c7568);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010befbfe0(*(undefined8 *)(param_2 + 8),param_3,puVar3,(long)param_1);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106055fd8; end: 10605607b; -[SCInAppWarningGrapheneLogger logWarningDefaultFallback:] */

void FUN_106055fd8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110daf4f8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c7568;
  func_0x00010bfe50e0(PTR_PTR_1126c7568);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010bfec640(param_1,param_2,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10605607c; end: 1060560bf; -[SCInAppWarningGrapheneLogger logDbUpsertWarningMetric] */

void FUN_10605607c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c7568;
  func_0x00010bfe50c0(PTR_PTR_1126c7568);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec640(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1060560c0; end: 106056103; -[SCInAppWarningGrapheneLogger logDbAcknowledgeWarningMetric] */

void FUN_1060560c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c7568;
  func_0x00010bfe5060(PTR_PTR_1126c7568);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec640(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106056104; end: 106056147; -[SCInAppWarningGrapheneLogger logDbDeleteWarningMetric] */

void FUN_106056104(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c7568;
  func_0x00010bfe50a0(PTR_PTR_1126c7568);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec640(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106056148; end: 10605618b; -[SCInAppWarningGrapheneLogger logDbClearWarningsMetric] */

void FUN_106056148(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c7568;
  func_0x00010bfe5080(PTR_PTR_1126c7568);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec640(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10605618c; end: 1060561cf; -[SCInAppWarningGrapheneLogger logDfSyncCompletedMetric] */

void FUN_10605618c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c7568;
  func_0x00010bfe5180(PTR_PTR_1126c7568);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec640(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1060561d0; end: 106056213; -[SCInAppWarningGrapheneLogger logDfSyncFailedMetric] */

void FUN_1060561d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c7568;
  func_0x00010bfe51a0(PTR_PTR_1126c7568);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec640(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106056214; end: 106056257; -[SCInAppWarningGrapheneLogger logDfWriteMissingUserIdMetric] */

void FUN_106056214(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c7568;
  func_0x00010bfe51e0(PTR_PTR_1126c7568);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec640(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106056258; end: 10605629b; -[SCInAppWarningGrapheneLogger logDfPendingWriteCompletedMetric] */

void FUN_106056258(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c7568;
  func_0x00010bfe5160(PTR_PTR_1126c7568);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec640(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10605629c; end: 1060562ef; -[SCInAppWarningGrapheneLogger logDfHandleUpdatesMetric:] */

void FUN_10605629c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c7568;
  func_0x00010bfe5140(PTR_PTR_1126c7568);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180(*(undefined8 *)(param_1 + 8),param_2,puVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1060562f0; end: 106056333; -[SCInAppWarningGrapheneLogger logDfCondWriteCompletedMetric] */

void FUN_1060562f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c7568;
  func_0x00010bfe5100(PTR_PTR_1126c7568);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec640(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106056334; end: 106056387; -[SCInAppWarningGrapheneLogger logDfHandleDeletesMetric:] */

void FUN_106056334(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c7568;
  func_0x00010bfe5120(PTR_PTR_1126c7568);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180(*(undefined8 *)(param_1 + 8),param_2,puVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106056388; end: 1060563cb; -[SCInAppWarningGrapheneLogger logDfSyncUploadServiceFail] */

void FUN_106056388(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c7568;
  func_0x00010bfe51c0(PTR_PTR_1126c7568);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec640(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1060563cc; end: 10605640f; -[SCInAppWarningGrapheneLogger logSyncAckMissingUserIdMetric] */

void FUN_1060563cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c7568;
  func_0x00010bfe5340(PTR_PTR_1126c7568);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec640(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106056410; end: 106056453; -[SCInAppWarningGrapheneLogger logSyncAckInvalidTimestampMetric] */

void FUN_106056410(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c7568;
  func_0x00010bfe5320(PTR_PTR_1126c7568);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec640(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106056454; end: 106056497; -[SCInAppWarningGrapheneLogger logItemInvalidAcknowledgeAtMetric] */

void FUN_106056454(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c7568;
  func_0x00010bfe5220(PTR_PTR_1126c7568);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec640(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106056498; end: 1060564db; -[SCInAppWarningGrapheneLogger logItemKeyMissingWarningIdMetric] */

void FUN_106056498(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c7568;
  func_0x00010bfe5280(PTR_PTR_1126c7568);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec640(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1060564dc; end: 10605651f; -[SCInAppWarningGrapheneLogger logItemInvalidWarningTypeMetric] */

void FUN_1060564dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c7568;
  func_0x00010bfe5260(PTR_PTR_1126c7568);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec640(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106056520; end: 106056563; -[SCInAppWarningGrapheneLogger logItemInvalidCreatedAtMetric] */

void FUN_106056520(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c7568;
  func_0x00010bfe5240(PTR_PTR_1126c7568);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec640(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106056564; end: 10605656f; -[SCInAppWarningGrapheneLogger .cxx_destruct] */

void FUN_106056564(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106056570; end: 10605659b; +[SCGrapheneInAppWarningMetric iawTakeoverFgCheck] */

void FUN_106056570(void)

{
  _objc_alloc(PTR_PTR_1126c7568);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10605659c; end: 1060565c7; +[SCGrapheneInAppWarningMetric iawLaunchTriggered] */

void FUN_10605659c(void)

{
  _objc_alloc(PTR_PTR_1126c7568);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1060565c8; end: 1060565f3; +[SCGrapheneInAppWarningMetric iawLaunchWarningCount] */

void FUN_1060565c8(void)

{
  _objc_alloc(PTR_PTR_1126c7568);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1060565f4; end: 10605661f; +[SCGrapheneInAppWarningMetric iawLaunchMultiWarnings] */

void FUN_1060565f4(void)

{
  _objc_alloc(PTR_PTR_1126c7568);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106056620; end: 10605664b; +[SCGrapheneInAppWarningMetric iawWarningAcknowledged] */

void FUN_106056620(void)

{
  _objc_alloc(PTR_PTR_1126c7568);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10605664c; end: 106056677; +[SCGrapheneInAppWarningMetric iawWarningPresented] */

void FUN_10605664c(void)

{
  _objc_alloc(PTR_PTR_1126c7568);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106056678; end: 1060566a3; +[SCGrapheneInAppWarningMetric iawWarningToAckElapse] */

void FUN_106056678(void)

{
  _objc_alloc(PTR_PTR_1126c7568);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1060566a4; end: 1060566cf; +[SCGrapheneInAppWarningMetric iawWarningNoInternet] */

void FUN_1060566a4(void)

{
  _objc_alloc(PTR_PTR_1126c7568);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1060566d0; end: 1060566fb; +[SCGrapheneInAppWarningMetric iawNotDismissed] */

void FUN_1060566d0(void)

{
  _objc_alloc(PTR_PTR_1126c7568);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1060566fc; end: 106056727; +[SCGrapheneInAppWarningMetric iawGuidelinesToDimissElapse] */

void FUN_1060566fc(void)

{
  _objc_alloc(PTR_PTR_1126c7568);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106056728; end: 106056753; +[SCGrapheneInAppWarningMetric iawDefaultFallback] */

void FUN_106056728(void)

{
  _objc_alloc(PTR_PTR_1126c7568);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106056754; end: 10605677f; +[SCGrapheneInAppWarningMetric iawDbClearWarnings] */

void FUN_106056754(void)

{
  _objc_alloc(PTR_PTR_1126c7568);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106056780; end: 1060567ab; +[SCGrapheneInAppWarningMetric iawDbUpsertWarning] */

void FUN_106056780(void)

{
  _objc_alloc(PTR_PTR_1126c7568);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1060567ac; end: 1060567d7; +[SCGrapheneInAppWarningMetric iawDbDeleteWarning] */

void FUN_1060567ac(void)

{
  _objc_alloc(PTR_PTR_1126c7568);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1060567d8; end: 106056803; +[SCGrapheneInAppWarningMetric iawDbAcknowledgeWarning] */

void FUN_1060567d8(void)

{
  _objc_alloc(PTR_PTR_1126c7568);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106056804; end: 10605682f; +[SCGrapheneInAppWarningMetric iawDfSyncCompleted] */

void FUN_106056804(void)

{
  _objc_alloc(PTR_PTR_1126c7568);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106056830; end: 10605685b; +[SCGrapheneInAppWarningMetric iawDfSyncFailed] */

void FUN_106056830(void)

{
  _objc_alloc(PTR_PTR_1126c7568);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10605685c; end: 106056887; +[SCGrapheneInAppWarningMetric iawDfHandleUpdates] */

void FUN_10605685c(void)

{
  _objc_alloc(PTR_PTR_1126c7568);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106056888; end: 1060568b3; +[SCGrapheneInAppWarningMetric iawDfHandleDeletes] */

void FUN_106056888(void)

{
  _objc_alloc(PTR_PTR_1126c7568);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1060568b4; end: 1060568df; +[SCGrapheneInAppWarningMetric iawDfCondWriteCompleted] */

void FUN_1060568b4(void)

{
  _objc_alloc(PTR_PTR_1126c7568);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1060568e0; end: 10605690b; +[SCGrapheneInAppWarningMetric iawDfPendingWriteCompleted] */

void FUN_1060568e0(void)

{
  _objc_alloc(PTR_PTR_1126c7568);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10605690c; end: 106056937; +[SCGrapheneInAppWarningMetric iawDfWriteMissingUserId] */

void FUN_10605690c(void)

{
  _objc_alloc(PTR_PTR_1126c7568);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106056938; end: 106056963; +[SCGrapheneInAppWarningMetric iawDfSyncUploadServiceFail] */

void FUN_106056938(void)

{
  _objc_alloc(PTR_PTR_1126c7568);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106056964; end: 10605698f; +[SCGrapheneInAppWarningMetric iawSyncAckMissingUserId] */

void FUN_106056964(void)

{
  _objc_alloc(PTR_PTR_1126c7568);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106056990; end: 1060569bb; +[SCGrapheneInAppWarningMetric iawSyncAckInvalidTimestamp] */

void FUN_106056990(void)

{
  _objc_alloc(PTR_PTR_1126c7568);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1060569bc; end: 1060569e7; +[SCGrapheneInAppWarningMetric iawItemInvalidCreatedAt] */

void FUN_1060569bc(void)

{
  _objc_alloc(PTR_PTR_1126c7568);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1060569e8; end: 106056a13; +[SCGrapheneInAppWarningMetric iawItemInvalidWarningType] */

void FUN_1060569e8(void)

{
  _objc_alloc(PTR_PTR_1126c7568);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106056a14; end: 106056a3f; +[SCGrapheneInAppWarningMetric iawItemInvalidAcknowledgeAt] */

void FUN_106056a14(void)

{
  _objc_alloc(PTR_PTR_1126c7568);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106056a40; end: 106056a6b; +[SCGrapheneInAppWarningMetric iawItemKeyMissingWarningId] */

void FUN_106056a40(void)

{
  _objc_alloc(PTR_PTR_1126c7568);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106056a6c; end: 106056b0b; -[SCGrapheneInAppWarningMetric description] */

void FUN_106056a6c(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110e3a6d8;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110e3a6d8,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126ef500;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 106056b0c; end: 106056b93; -[SCGrapheneRegistry inAppWarningGraphene] */

void FUN_106056b0c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_106056b94;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136c2c70 != -1) {
    func_0x00010002a2fc(0x1136c2c70,&puStack_48);
  }
  uVar1 = uRam00000001136c2c68;
  _objc_retain(uRam00000001136c2c68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106056b94; end: 106056d6f;  */

undefined ** FUN_106056b94(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  ppuStack_120 = &PTR____CFConstantStringClassReference_110e3a6f8;
  ppuStack_118 = &PTR____CFConstantStringClassReference_110e3a718;
  ppuStack_110 = &PTR____CFConstantStringClassReference_110e3a738;
  ppuStack_108 = &PTR____CFConstantStringClassReference_110e3a758;
  ppuStack_100 = &PTR____CFConstantStringClassReference_110e3a778;
  ppuStack_f8 = &PTR____CFConstantStringClassReference_110e3a798;
  ppuStack_f0 = &PTR____CFConstantStringClassReference_110e3a7b8;
  ppuStack_e8 = &PTR____CFConstantStringClassReference_110e3a7d8;
  ppuStack_e0 = &PTR____CFConstantStringClassReference_110e3a7f8;
  ppuStack_d8 = &PTR____CFConstantStringClassReference_110e3a818;
  ppuStack_d0 = &PTR____CFConstantStringClassReference_110e3a838;
  ppuStack_c8 = &PTR____CFConstantStringClassReference_110e3a858;
  ppuStack_c0 = &PTR____CFConstantStringClassReference_110e3a878;
  ppuStack_b8 = &PTR____CFConstantStringClassReference_110e3a898;
  ppuStack_b0 = &PTR____CFConstantStringClassReference_110e3a8b8;
  ppuStack_a8 = &PTR____CFConstantStringClassReference_110e3a8d8;
  ppuStack_a0 = &PTR____CFConstantStringClassReference_110e3a8f8;
  ppuStack_98 = &PTR____CFConstantStringClassReference_110e3a918;
  ppuStack_90 = &PTR____CFConstantStringClassReference_110e3a938;
  ppuStack_88 = &PTR____CFConstantStringClassReference_110e3a958;
  ppuStack_80 = &PTR____CFConstantStringClassReference_110e3a978;
  ppuStack_78 = &PTR____CFConstantStringClassReference_110e3a998;
  ppuStack_70 = &PTR____CFConstantStringClassReference_110e3a9b8;
  ppuStack_68 = &PTR____CFConstantStringClassReference_110e3a9d8;
  ppuStack_60 = &PTR____CFConstantStringClassReference_110e3a9f8;
  ppuStack_58 = &PTR____CFConstantStringClassReference_110e3aa18;
  ppuStack_50 = &PTR____CFConstantStringClassReference_110e3aa38;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110e3aa58;
  ppuStack_40 = &PTR____CFConstantStringClassReference_110e3aa78;
  ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_120,0x1d);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c126d60(uVar3,param_2,&PTR____CFConstantStringClassReference_110e3a6d8,
                      &PTR____CFConstantStringClassReference_110daafd8,ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uRam00000001136c2c68;
  uRam00000001136c2c68 = uVar3;
  _objc_release(uVar1);
  _objc_release(ppuVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return ppuVar2;
  }
  ___stack_chk_fail();
  return &PTR____CFConstantStringClassReference_110e3aa98;
}



/* Entry: 106056d70; end: 106056d7b; +[SCCMyEnforcementsPage componentPath] */

undefined ** FUN_106056d70(void)

{
  return &PTR____CFConstantStringClassReference_110e3aa98;
}



/* Entry: 106056d7c; end: 106056daf; -[SCCMyEnforcementsPage initWithViewModel:componentContext:runtime:] */

void FUN_106056d7c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ef508;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 106056db0; end: 106056dff; -[SCCMyEnforcementsPage setViewModel:] */

void FUN_106056db0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106056e00; end: 106056e43; -[SCCMyEnforcementsPage viewModel] */

void FUN_106056e00(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106056e44; end: 106056f2f; -[SCCMyEnforcementsContext initWithOnDismiss:notificationPresenter:webLauncher:blizzardLogger:deckHierarchy:userInfoProvider:] */

undefined8 *
FUN_106056e44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retainBlock();
  puStack_58 = PTR_PTR_1126ef510;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFieldValues__1125e24b8,0);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106056f30; end: 106056f4f; +[SCCMyEnforcementsContext valdiMarshallableObjectDescriptor] */

void FUN_106056f30(undefined8 *param_1)

{
  *param_1 = &PTR_s_onDismiss_1109099c8;
  param_1[1] = &PTR_s_SCCNotificationPresenter_110909a70;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106056f50; end: 106056f83; -[SCCMyEnforcementsViewModel init] */

void FUN_106056f50(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ef518;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 106056f84; end: 106056f9b; +[SCCMyEnforcementsViewModel valdiMarshallableObjectDescriptor] */

void FUN_106056f84(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &UNK_10ddd3aa8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106056f9c; end: 106056fa7; +[SCCMyReportDetailsPage componentPath] */

undefined ** FUN_106056f9c(void)

{
  return &PTR____CFConstantStringClassReference_110e3aab8;
}



/* Entry: 106056fa8; end: 106056fcb; -[SCCMyReportDetailsPage initWithViewModel:componentContext:runtime:] */

void FUN_106056fa8(void)

{
  FUN_1060570ec(PTR_PTR_1126ef520);
  return;
}



/* Entry: 106056fcc; end: 106057003; -[SCCMyReportDetailsPage setViewModel:] */

void FUN_106056fcc(void)

{
  func_0x000106057108();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106057118();
  func_0x000106057100();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 106057004; end: 106057043; -[SCCMyReportDetailsPage viewModel] */

void FUN_106057004(undefined8 param_1)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106057100();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106057044; end: 10605704f; +[SCCMyReportsListPage componentPath] */

undefined ** FUN_106057044(void)

{
  return &PTR____CFConstantStringClassReference_110e3aad8;
}



/* Entry: 106057050; end: 106057073; -[SCCMyReportsListPage initWithViewModel:componentContext:runtime:] */

void FUN_106057050(void)

{
  FUN_1060570ec(PTR_PTR_1126ef528);
  return;
}



/* Entry: 106057074; end: 1060570ab; -[SCCMyReportsListPage setViewModel:] */

void FUN_106057074(void)

{
  func_0x000106057108();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106057118();
  func_0x000106057100();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1060570ac; end: 1060570eb; -[SCCMyReportsListPage viewModel] */

void FUN_1060570ac(undefined8 param_1)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106057100();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1060570ec; end: 106057123;  */

void FUN_1060570ec(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = param_2;
  uStack0000000000000008 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSendSuper2_11034d298)();
  return;
}



/* Entry: 106057124; end: 10605720f; -[SCCMyReportsContext initWithDeckContainerFactory:onDismiss:blockedUserStore:notificationPresenter:webLauncher:blizzardLogger:] */

undefined8 *
FUN_106057124(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_retainBlock();
  puStack_58 = PTR_PTR_1126ef530;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFieldValues__1125e24b8,0);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 106057210; end: 10605722f; +[SCCMyReportsContext valdiMarshallableObjectDescriptor] */

void FUN_106057210(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110909aa0;
  param_1[1] = &PTR_DAT_110909b48;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106057230; end: 106057263; -[SCCMyReportsListViewModel init] */

void FUN_106057230(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ef538;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 106057264; end: 10605727b; +[SCCMyReportsListViewModel valdiMarshallableObjectDescriptor] */

void FUN_106057264(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &UNK_10ddd3ac0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10605727c; end: 1060573e7; -[SCSessionManagementEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10605727c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  
  puVar1 = PTR_PTR_1126c7570;
  _objc_alloc(PTR_PTR_1126c7570);
  lVar2 = param_1 + _DAT_11273db60;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_11273db64;
  _objc_loadWeakRetained(lVar5);
  lVar6 = param_1 + _DAT_11273db68;
  _objc_loadWeakRetained(lVar6);
  lVar7 = lVar6;
  func_0x00010bf1cf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05fe00(puVar1,param_2,lVar4,lVar5,lVar7,*(undefined8 *)(param_1 + _DAT_11273db6c),
                      param_1);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar8 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
  _objc_alloc(PTR__OBJC_CLASS___UINavigationController_1126af6f0);
  func_0x00010c0402e0();
  func_0x00010c1c8b80();
  param_1 = param_1 + _DAT_11273db70;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(lVar2);
  _objc_release(param_1);
  _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1060573e8; end: 106057473; -[SCSessionManagementEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060573e8(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  lVar1 = param_1 + _DAT_11273db70;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puStack_38 = PTR_PTR_1126ef540;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106057474; end: 1060574bf; -[SCSessionManagementEntryPoint sessionManagementViewControllerDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106057474(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_11273db70;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1601c0();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1060574c0; end: 10605751f; -[SCSessionManagementEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060574c0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273db6c,0);
  _objc_destroyWeak(param_1 + _DAT_11273db68);
  _objc_destroyWeak(param_1 + _DAT_11273db64);
  _objc_destroyWeak(param_1 + _DAT_11273db60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11273db70);
  return;
}



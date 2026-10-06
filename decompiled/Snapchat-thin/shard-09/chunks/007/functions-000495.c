/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1070b8c2c; end: 1070b8dc3; -[SCChatPageLoadMetricsEmitter _emitPerformanceMetricForResult:] */

void FUN_1070b8c2c(double param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  double dVar7;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  if (*(long *)(param_2 + 0x18) != 0) {
    _objc_retain(param_4);
    _objc_opt_new(puVar2);
    lVar3 = param_4;
    func_0x00010c270ce0(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010050471c();
    func_0x00010bef7f60(puVar2);
    _objc_release(lVar4);
    _objc_release(lVar3);
    lVar3 = param_4;
    func_0x00010c27dd80();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuVar1 = &PTR____CFConstantStringClassReference_110e9eb98;
    if (lVar3 != 0) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110e9ebb8;
    }
    _objc_retain(ppuVar1);
    func_0x00010bf957c0(param_4);
    dVar7 = param_1;
    func_0x00010c251020(param_4);
    _objc_release(param_4);
    func_0x00010c0df720((param_1 - dVar7) * 1000.0,puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2);
    _objc_release(puVar5);
    puVar5 = PTR_PTR_1126b15f8;
    _objc_alloc(PTR_PTR_1126b15f8);
    puVar6 = puVar2;
    func_0x00010bf51e00(puVar2);
    func_0x00010c010c80(puVar5);
    _objc_release(ppuVar1);
    _objc_release(puVar6);
    func_0x00010c0aa440(*(undefined8 *)(param_2 + 0x18));
    _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 1070b8dc4; end: 1070b8ddb;  */

undefined ** FUN_1070b8dc4(undefined8 param_1,long param_2)

{
  func_0x00010c2536e0();
  if (param_2 - 1U < 0x13) {
    return (undefined **)(&PTR_PTR_11098ca28)[param_2 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110e9ecf8;
}



/* Entry: 1070b8ddc; end: 1070b8e43;  */

void FUN_1070b8ddc(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  double dVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(param_3);
  func_0x00010bf95860(param_3);
  dVar2 = param_1;
  func_0x00010c2511a0(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            ((param_1 - dVar2) * 1000.0,puVar1,PTR_s_numberWithDouble__1126157e0);
  return;
}



/* Entry: 1070b8e44; end: 1070b8e8b; -[SCChatPageLoadMetricsEmitter .cxx_destruct] */

void FUN_1070b8e44(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1070b8e8c; end: 1070b8f03;  */

undefined ** FUN_1070b8e8c(long param_1)

{
  if (param_1 - 1U < 0x10) {
    return (undefined **)(&PTR_PTR_11098c988)[param_1 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110dab0d8;
}



/* Entry: 1070b8f04; end: 1070b8f93;  */

void FUN_1070b8f04(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain();
  lVar3 = param_1;
  func_0x00010c13ca20();
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c270ce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c2536e0();
    func_0x0001070b8edc();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1070b8f94; end: 1070b9113;  */

void FUN_1070b8f94(undefined **param_1)

{
  undefined **ppuVar1;
  
  _objc_retain();
  ppuVar1 = param_1;
  func_0x00010c247520();
  switch(ppuVar1) {
  case (undefined **)0x1:
    ppuVar1 = &PTR____CFConstantStringClassReference_110e9ef38;
    break;
  case (undefined **)0x2:
    ppuVar1 = &PTR____CFConstantStringClassReference_110e9ef58;
    break;
  case (undefined **)0x3:
    ppuVar1 = &PTR____CFConstantStringClassReference_110e9ef78;
    break;
  case (undefined **)0x4:
    ppuVar1 = &PTR____CFConstantStringClassReference_110e9ef98;
    break;
  case (undefined **)0x5:
    ppuVar1 = &PTR____CFConstantStringClassReference_110e9efb8;
    break;
  case (undefined **)0x6:
    ppuVar1 = &PTR____CFConstantStringClassReference_110e9efd8;
    break;
  case (undefined **)0x7:
    ppuVar1 = &PTR____CFConstantStringClassReference_110e9eff8;
    break;
  case (undefined **)0x8:
    ppuVar1 = &PTR____CFConstantStringClassReference_110e9f018;
    break;
  case (undefined **)0x9:
    ppuVar1 = &PTR____CFConstantStringClassReference_110e9f038;
    break;
  case (undefined **)0xa:
    ppuVar1 = &PTR____CFConstantStringClassReference_110e9f058;
    break;
  case (undefined **)0xb:
    ppuVar1 = param_1;
    func_0x00010c101c60(param_1);
    _objc_retainAutoreleasedReturnValue();
    break;
  case (undefined **)0xc:
    ppuVar1 = &PTR____CFConstantStringClassReference_110e9f078;
    break;
  case (undefined **)0xd:
    ppuVar1 = &PTR____CFConstantStringClassReference_110e9f098;
    break;
  case (undefined **)0xe:
    ppuVar1 = &PTR____CFConstantStringClassReference_110e9f0b8;
    break;
  case (undefined **)0xf:
    ppuVar1 = &PTR____CFConstantStringClassReference_110e9f0d8;
    break;
  case (undefined **)0x10:
    ppuVar1 = &PTR____CFConstantStringClassReference_110e9f0f8;
    break;
  case (undefined **)0x11:
    ppuVar1 = &PTR____CFConstantStringClassReference_110e9f118;
    break;
  case (undefined **)0x12:
    ppuVar1 = &PTR____CFConstantStringClassReference_110e9f138;
    break;
  case (undefined **)0x13:
    ppuVar1 = &PTR____CFConstantStringClassReference_110e9f158;
    break;
  case (undefined **)0x14:
    ppuVar1 = &PTR____CFConstantStringClassReference_110e9f178;
    break;
  case (undefined **)0x15:
    ppuVar1 = &PTR____CFConstantStringClassReference_110e9f198;
    break;
  case (undefined **)0x16:
    ppuVar1 = &PTR____CFConstantStringClassReference_110e9f1b8;
    break;
  case (undefined **)0x17:
    ppuVar1 = &PTR____CFConstantStringClassReference_110e9f1d8;
    break;
  default:
    ppuVar1 = &PTR____CFConstantStringClassReference_110df9af8;
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 1070b9114; end: 1070b9143;  */

undefined ** FUN_1070b9114(long param_1)

{
  undefined **ppuVar1;
  
  if (param_1 - 1U < 0x50) {
    return (undefined **)(&PTR_PTR_11098cac0)[param_1 - 1U];
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110e9f2b8;
  if (param_1 < 0x51) {
    ppuVar1 = (undefined **)0x0;
  }
  return ppuVar1;
}



/* Entry: 1070b9144; end: 1070b9147; -[SCChatPageLoadMetricsResult xLogObjectInfo] */

void FUN_1070b9144(void)

{
  return;
}



/* Entry: 1070b9148; end: 1070b929b; -[SCChatPageLoadMetricsTracker initWithTimeProvider:performer:type:source:conversationSource:pluginIdentifier:] */

undefined1 *
FUN_1070b9148(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126f8970;
  uStack_60 = param_2;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    func_0x00010beec800(*(undefined8 *)((long)puVar1 + 0x18));
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    puVar3 = PTR_PTR_1126ae560;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x28) = 0;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release();
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined8 *)((long)puVar1 + 0x68) = uVar2;
    _objc_release(uVar4);
    *(undefined8 *)((long)puVar1 + 0x38) = param_6;
    *(undefined8 *)((long)puVar1 + 0x40) = param_7;
    *(undefined8 *)((long)puVar1 + 0x48) = param_8;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined8 *)((long)puVar1 + 0x60) = param_9;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1070b929c; end: 1070b92f3; +[SCChatPageLoadMetricsTracker chatReloadMetricsTrackerWithPluginIdentifier:] */

void FUN_1070b929c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cb370;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c056060();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1070b92f4; end: 1070b932f; +[SCChatPageLoadMetricsTracker chatReloadMetricsTrackerWithSource:] */

void FUN_1070b92f4(void)

{
  _objc_alloc(PTR_PTR_1126cb370);
  func_0x00010c056060();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1070b9330; end: 1070b936b; +[SCChatPageLoadMetricsTracker chatLoadMetricsTrackerWithConversationSource:] */

void FUN_1070b9330(void)

{
  _objc_alloc(PTR_PTR_1126cb370);
  func_0x00010c056060();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1070b936c; end: 1070b945f; -[SCChatPageLoadMetricsTracker initWithType:source:conversationSource:pluginIdentifier:] */

undefined8
FUN_1070b936c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae790;
  _objc_retain(param_6);
  _objc_alloc(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f3ff9a4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021520(puVar1,param_2,puVar2,0x11,0,9);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126aeea8;
  _objc_opt_new(PTR_PTR_1126aeea8);
  func_0x00010c052500(param_1,param_2,puVar2,puVar1,param_3,param_4,param_5,param_6);
  _objc_release(param_6);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 1070b9460; end: 1070b9483; -[SCChatPageLoadMetricsTracker copyWithZone:] */

undefined8 FUN_1070b9460(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1070b9484; end: 1070b948b; -[SCChatPageLoadMetricsTracker type] */

undefined8 FUN_1070b9484(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1070b948c; end: 1070b9493; -[SCChatPageLoadMetricsTracker source] */

undefined8 FUN_1070b948c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1070b9494; end: 1070b94af; -[SCChatPageLoadMetricsTracker hasCompletedRenderRequest] */

byte FUN_1070b9494(long param_1)

{
  byte bVar1;
  
  if ((*(byte *)(param_1 + 0x51) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x50);
  }
  else {
    bVar1 = 1;
  }
  return bVar1 & 1;
}



/* Entry: 1070b94b0; end: 1070b94c3; -[SCChatPageLoadMetricsTracker setIsGroup:] */

void FUN_1070b94b0(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  uVar1 = 3;
  if (param_3 != 0) {
    uVar1 = 4;
  }
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  return;
}



/* Entry: 1070b94c4; end: 1070b94cb; -[SCChatPageLoadMetricsTracker setParticipantCount:] */

void FUN_1070b94c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x58) = param_3;
  return;
}



/* Entry: 1070b94cc; end: 1070b959b; -[SCChatPageLoadMetricsTracker trackStep:] */

void FUN_1070b94cc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  long lStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010beec800(*(undefined8 *)(param_2 + 0x18));
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x1070b953c;
  puStack_40 = &UNK_110858dc0;
  lStack_38 = param_2;
  uStack_30 = param_4;
  uStack_28 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_2 + 0x20),param_3,&puStack_58);
  return;
}



/* Entry: 1070b959c; end: 1070b96c7; -[SCChatPageLoadMetricsTracker completeAtStep:withResult:] */

void FUN_1070b959c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010beec800(*(undefined8 *)(param_2 + 0x18));
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x1070b961c;
  puStack_58 = &UNK_11084e430;
  lStack_50 = param_2;
  uStack_48 = param_4;
  uStack_40 = param_1;
  uStack_38 = param_5;
  func_0x00010c0f7fc0(*(undefined8 *)(param_2 + 0x20),param_3,&puStack_70);
  return;
}



/* Entry: 1070b96c8; end: 1070b96cf; -[SCChatPageLoadMetricsTracker metricsResult] */

void FUN_1070b96c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfbc3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_future_1125ccaa0);
  return;
}



/* Entry: 1070b96d0; end: 1070b97a7; -[SCChatPageLoadMetricsTracker _resultForResult:finalTimestamp:] */

void FUN_1070b96d0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar4 = PTR_PTR_1126d4b18;
  _objc_retain(param_5);
  _objc_alloc(puVar4);
  uVar6 = *(undefined8 *)(param_2 + 8);
  func_0x00010bf95860(param_5);
  _objc_release(param_5);
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  uVar3 = *(undefined8 *)(param_2 + 0x40);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  uVar5 = *(undefined8 *)(param_2 + 0x30);
  func_0x00010bf51e00(uVar5);
  func_0x00010c04bc00(uVar6,param_1,puVar4,param_3,param_4,uVar2,uVar1,uVar3,uVar5,
                      *(undefined8 *)(param_2 + 0x68),*(undefined8 *)(param_2 + 0x58),
                      *(undefined8 *)(param_2 + 0x48),*(undefined8 *)(param_2 + 0x60));
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1070b97a8; end: 1070b9813; -[SCChatPageLoadMetricsTracker _timestampForStep:currentTime:] */

void FUN_1070b97a8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d4b20;
  _objc_alloc(PTR_PTR_1126d4b20);
  func_0x00010be09ec0(param_1);
  func_0x00010c04c5a0(puVar1,param_2,param_3,param_3 - 6U < 7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1070b9814; end: 1070b9943; -[SCChatPageLoadMetricsTracker _endTimestampOfMostRecentSerialStep] */

undefined8 FUN_1070b9814(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
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
  uVar7 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010c140180();
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
        lVar4 = *(long *)(lStack_128 + lVar6 * 8);
        lVar3 = lVar4;
        func_0x00010c253800();
        if (lVar3 == 0) {
          func_0x00010bf95860(lVar4);
          uVar8 = uVar7;
          _objc_release(lVar1);
          goto LAB_1070b9904;
        }
        lVar6 = lVar6 + 1;
      } while (lVar2 != lVar6);
      lVar2 = lVar1;
      func_0x00010bf52a60(lVar1,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(lVar1);
  uVar8 = uVar7;
  uVar7 = *(undefined8 *)(param_1 + 8);
LAB_1070b9904:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return uVar7;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)();
  return uVar8;
}



/* Entry: 1070b9944; end: 1070b994f; -[SCChatPageLoadMetricsTracker trackingId] */

void FUN_1070b9944(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x68,1);
  return;
}



/* Entry: 1070b9950; end: 1070b99af; -[SCChatPageLoadMetricsTracker .cxx_destruct] */

void FUN_1070b9950(long param_1)

{
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1070b99b0; end: 1070b9ad3; -[SCChatPageLoadMetricsResult initWithStartTimeSeconds:endTimeSeconds:result:mode:type:source:timestamps:trackingId:participantCount:conversationSource:pluginIdentifier:] */

undefined1 *
FUN_1070b99b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar1 = &uStack_80;
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_13);
  puStack_78 = PTR_PTR_1126f8978;
  uStack_80 = param_3;
  _objc_msgSendSuper2(&uStack_80,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    *(undefined8 *)((long)puVar1 + 0x10) = param_2;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x48) = param_11;
    *(undefined8 *)((long)puVar1 + 0x50) = param_12;
    uVar2 = param_13;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined8 *)((long)puVar1 + 0x58) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_13);
  _objc_release(param_10);
  _objc_release(param_9);
  return (undefined1 *)puVar1;
}



/* Entry: 1070b9ad4; end: 1070b9af7; -[SCChatPageLoadMetricsResult copyWithZone:] */

undefined8 FUN_1070b9ad4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1070b9af8; end: 1070b9bd7; -[SCChatPageLoadMetricsResult hash] */

ulong * FUN_1070b9af8(long param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong *puVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined1 *puVar8;
  double dVar9;
  ulong uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar4 = &uStack_80;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = ~*(ulong *)(param_1 + 8) + *(ulong *)(param_1 + 8) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_80 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_80 = uStack_80 ^ uStack_80 >> 0x16;
  uVar7 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_78 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_78 = uStack_78 ^ uStack_78 >> 0x16;
  uStack_68 = *(undefined8 *)(param_1 + 0x20);
  uStack_70 = *(undefined8 *)(param_1 + 0x18);
  uStack_58 = *(undefined8 *)(param_1 + 0x30);
  uStack_60 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uStack_40 = *(undefined8 *)(param_1 + 0x48);
  lVar6 = *(long *)(param_1 + 0x50);
  lStack_38 = -lVar6;
  if (-1 < lVar6) {
    lStack_38 = lVar6;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  uStack_48 = uVar3;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000100505190(&uStack_80,0xb);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (ulong *)param_3) {
LAB_1070b9d40:
    puVar8 = (undefined1 *)0x1;
  }
  else {
    puVar8 = (undefined1 *)0x0;
    if ((puVar4 == (ulong *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1070b9d4c;
    puVar8 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if (((((ulong)puVar5 & 1) != 0) &&
        ((((*(long *)((long)puVar4 + 0x18) == *(long *)(param_3 + 0x18) &&
           (*(long *)((long)puVar4 + 0x20) == *(long *)(param_3 + 0x20))) &&
          (*(long *)((long)puVar4 + 0x28) == *(long *)(param_3 + 0x28))) &&
         ((*(long *)((long)puVar4 + 0x30) == *(long *)(param_3 + 0x30) &&
          (*(long *)((long)puVar4 + 0x48) == *(long *)(param_3 + 0x48))))))) &&
       (*(long *)((long)puVar4 + 0x50) == *(long *)(param_3 + 0x50))) {
      dVar9 = ABS(*(double *)((long)puVar4 + 8) - *(double *)(param_3 + 8));
      if ((dVar9 < 2.2250738585072014e-308) ||
         (dVar9 < ABS(*(double *)((long)puVar4 + 8) + *(double *)(param_3 + 8)) *
                  2.220446049250313e-16)) {
        dVar9 = ABS(*(double *)((long)puVar4 + 0x10) - *(double *)(param_3 + 0x10));
        if (((dVar9 < 2.2250738585072014e-308) ||
            (dVar9 < ABS(*(double *)((long)puVar4 + 0x10) + *(double *)(param_3 + 0x10)) *
                     2.220446049250313e-16)) &&
           (((lVar6 = *(long *)((long)puVar4 + 0x38), lVar6 == *(long *)(param_3 + 0x38) ||
             (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
            ((lVar6 = *(long *)((long)puVar4 + 0x40), lVar6 == *(long *)(param_3 + 0x40) ||
             (func_0x00010c071ae0(), (int)lVar6 != 0)))))) {
          puVar8 = *(undefined1 **)((long)puVar4 + 0x58);
          if (puVar8 != *(undefined1 **)(param_3 + 0x58)) {
            func_0x00010c071ae0();
            goto LAB_1070b9d4c;
          }
          goto LAB_1070b9d40;
        }
      }
    }
    puVar8 = (undefined1 *)0x0;
  }
LAB_1070b9d4c:
  _objc_release(param_3);
  return (ulong *)puVar8;
}



/* Entry: 1070b9bd8; end: 1070b9d67; -[SCChatPageLoadMetricsResult isEqual:] */

long FUN_1070b9bd8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  double dVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1070b9d40:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1070b9d4c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((uVar2 & 1) != 0) &&
        ((((*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18) &&
           (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))) &&
          (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))) &&
         ((*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30) &&
          (*(long *)(param_1 + 0x48) == *(long *)(param_3 + 0x48))))))) &&
       (*(long *)(param_1 + 0x50) == *(long *)(param_3 + 0x50))) {
      dVar4 = ABS(*(double *)(param_1 + 8) - *(double *)(param_3 + 8));
      if ((dVar4 < 2.2250738585072014e-308) ||
         (dVar4 < ABS(*(double *)(param_1 + 8) + *(double *)(param_3 + 8)) * 2.220446049250313e-16))
      {
        dVar4 = ABS(*(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10));
        if (((dVar4 < 2.2250738585072014e-308) ||
            (dVar4 < ABS(*(double *)(param_1 + 0x10) + *(double *)(param_3 + 0x10)) *
                     2.220446049250313e-16)) &&
           (((lVar3 = *(long *)(param_1 + 0x38), lVar3 == *(long *)(param_3 + 0x38) ||
             (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
            ((lVar3 = *(long *)(param_1 + 0x40), lVar3 == *(long *)(param_3 + 0x40) ||
             (func_0x00010c071ae0(), (int)lVar3 != 0)))))) {
          lVar3 = *(long *)(param_1 + 0x58);
          if (lVar3 != *(long *)(param_3 + 0x58)) {
            func_0x00010c071ae0();
            goto LAB_1070b9d4c;
          }
          goto LAB_1070b9d40;
        }
      }
    }
    lVar3 = 0;
  }
LAB_1070b9d4c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1070b9d68; end: 1070b9d6f; -[SCChatPageLoadMetricsResult startTimeSeconds] */

undefined8 FUN_1070b9d68(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1070b9d70; end: 1070b9d77; -[SCChatPageLoadMetricsResult endTimeSeconds] */

undefined8 FUN_1070b9d70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1070b9d78; end: 1070b9d7f; -[SCChatPageLoadMetricsResult result] */

undefined8 FUN_1070b9d78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1070b9d80; end: 1070b9d87; -[SCChatPageLoadMetricsResult mode] */

undefined8 FUN_1070b9d80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1070b9d88; end: 1070b9d8f; -[SCChatPageLoadMetricsResult type] */

undefined8 FUN_1070b9d88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1070b9d90; end: 1070b9d97; -[SCChatPageLoadMetricsResult source] */

undefined8 FUN_1070b9d90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1070b9d98; end: 1070b9d9f; -[SCChatPageLoadMetricsResult timestamps] */

undefined8 FUN_1070b9d98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1070b9da0; end: 1070b9da7; -[SCChatPageLoadMetricsResult trackingId] */

undefined8 FUN_1070b9da0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1070b9da8; end: 1070b9daf; -[SCChatPageLoadMetricsResult participantCount] */

undefined8 FUN_1070b9da8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1070b9db0; end: 1070b9db7; -[SCChatPageLoadMetricsResult conversationSource] */

undefined8 FUN_1070b9db0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 1070b9db8; end: 1070b9dbf; -[SCChatPageLoadMetricsResult pluginIdentifier] */

undefined8 FUN_1070b9db8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 1070b9dc0; end: 1070b9dfb; -[SCChatPageLoadMetricsResult .cxx_destruct] */

void FUN_1070b9dc0(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x40,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x38,0);
  return;
}



/* Entry: 1070b9dfc; end: 1070b9e5b; -[SCChatPageLoadMetricsTrackerTimestamp initWithStep:stepType:startTimestampSeconds:endTimestampSeconds:] */

void FUN_1070b9dfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f8980;
  uStack_40 = param_3;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_5;
    *(undefined8 *)((long)puVar1 + 0x10) = param_6;
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
    *(undefined8 *)((long)puVar1 + 0x20) = param_2;
  }
  return;
}



/* Entry: 1070b9e5c; end: 1070b9e7f; -[SCChatPageLoadMetricsTrackerTimestamp copyWithZone:] */

undefined8 FUN_1070b9e5c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1070b9e80; end: 1070b9f1b; -[SCChatPageLoadMetricsTrackerTimestamp hash] */

undefined8 * FUN_1070b9e80(long param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong uVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined1 *puVar6;
  double dVar7;
  double dVar8;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  ulong uStack_28;
  long lStack_18;
  
  puVar3 = &uStack_40;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = *(undefined8 *)(param_1 + 8);
  uVar5 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_30 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  uVar5 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_28 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_28 = uStack_28 ^ uStack_28 >> 0x16;
  func_0x000100505190(&uStack_40,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 != (undefined8 *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar6 = (undefined1 *)puVar3;
      _objc_opt_class(puVar3);
      puVar4 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar6);
      if ((((ulong)puVar4 & 1) != 0) &&
         ((*(long *)((long)puVar3 + 8) == *(long *)(param_3 + 8) &&
          (*(long *)((long)puVar3 + 0x10) == *(long *)(param_3 + 0x10))))) {
        dVar8 = ABS(*(double *)((long)puVar3 + 0x18) - *(double *)(param_3 + 0x18));
        dVar7 = ABS(*(double *)((long)puVar3 + 0x18) + *(double *)(param_3 + 0x18)) *
                2.220446049250313e-16;
        bVar2 = true;
        if ((2.2250738585072014e-308 <= dVar8) && (bVar2 = false, !NAN(dVar8) && !NAN(dVar7))) {
          bVar2 = dVar8 < dVar7;
        }
        if (bVar2) {
          dVar7 = ABS(*(double *)((long)puVar3 + 0x20) + *(double *)(param_3 + 0x20)) *
                  2.220446049250313e-16;
          if (dVar7 <= 2.2250738585072014e-308) {
            dVar7 = 2.2250738585072014e-308;
          }
          puVar6 = (undefined1 *)
                   (ulong)(ABS(*(double *)((long)puVar3 + 0x20) - *(double *)(param_3 + 0x20)) <
                          dVar7);
          goto LAB_1070ba000;
        }
      }
      puVar6 = (undefined1 *)0x0;
    }
  }
LAB_1070ba000:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 1070b9f1c; end: 1070ba01b; -[SCChatPageLoadMetricsTrackerTimestamp isEqual:] */

bool FUN_1070b9f1c(ulong param_1,undefined8 param_2,ulong param_3)

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
      if (((uVar3 & 1) != 0) &&
         ((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
          (*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10))))) {
        dVar5 = ABS(*(double *)(param_1 + 0x18) - *(double *)(param_3 + 0x18));
        dVar4 = ABS(*(double *)(param_1 + 0x18) + *(double *)(param_3 + 0x18)) *
                2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar5) && (bVar1 = false, !NAN(dVar5) && !NAN(dVar4))) {
          bVar1 = dVar5 < dVar4;
        }
        if (bVar1) {
          dVar4 = ABS(*(double *)(param_1 + 0x20) + *(double *)(param_3 + 0x20)) *
                  2.220446049250313e-16;
          if (dVar4 <= 2.2250738585072014e-308) {
            dVar4 = 2.2250738585072014e-308;
          }
          bVar1 = ABS(*(double *)(param_1 + 0x20) - *(double *)(param_3 + 0x20)) < dVar4;
          goto LAB_1070ba000;
        }
      }
      bVar1 = false;
    }
  }
LAB_1070ba000:
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 1070ba01c; end: 1070ba023; -[SCChatPageLoadMetricsTrackerTimestamp step] */

undefined8 FUN_1070ba01c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1070ba024; end: 1070ba02b; -[SCChatPageLoadMetricsTrackerTimestamp stepType] */

undefined8 FUN_1070ba024(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1070ba02c; end: 1070ba033; -[SCChatPageLoadMetricsTrackerTimestamp startTimestampSeconds] */

undefined8 FUN_1070ba02c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1070ba034; end: 1070ba03b; -[SCChatPageLoadMetricsTrackerTimestamp endTimestampSeconds] */

undefined8 FUN_1070ba034(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1070ba03c; end: 1070ba0af; -[SCChatTooltipsServices initWithTooltipsService:] */

undefined1 * FUN_1070ba03c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f8988;
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



/* Entry: 1070ba0b0; end: 1070ba0b7; -[SCChatTooltipsServices chatTooltipsService] */

undefined8 FUN_1070ba0b0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1070ba0b8; end: 1070ba0c3; -[SCChatTooltipsServices .cxx_destruct] */

void FUN_1070ba0b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1070ba0c4; end: 1070ba14b; -[SCChatFlashbackHintViewedData initWithCoder:] */

undefined1 *
FUN_1070ba0c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_4);
  puStack_28 = PTR_PTR_1126f8990;
  uStack_30 = param_2;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010bf66da0(param_4);
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1070ba14c; end: 1070ba1a3; -[SCChatFlashbackHintViewedData initWithTimestamp:viewedCount:] */

void FUN_1070ba14c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f8990;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  return;
}



/* Entry: 1070ba1a4; end: 1070ba1c7; -[SCChatFlashbackHintViewedData copyWithZone:] */

undefined8 FUN_1070ba1a4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1070ba1c8; end: 1070ba227; -[SCChatFlashbackHintViewedData encodeWithCoder:] */

void FUN_1070ba1c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf92e80(uVar1,param_3,param_2,&PTR____CFConstantStringClassReference_110e9f2d8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110e9f2f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1070ba228; end: 1070ba2a7; -[SCChatFlashbackHintViewedData hash] */

ulong * FUN_1070ba228(long param_1,undefined8 param_2,ulong *param_3)

{
  long lVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong *puVar5;
  double dVar6;
  ulong uStack_28;
  long lStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x10);
  uVar4 = ~*(ulong *)(param_1 + 8) + *(ulong *)(param_1 + 8) * 0x40000;
  uVar4 = (uVar4 ^ uVar4 >> 0x1f) * 0x15;
  uStack_28 = (uVar4 ^ uVar4 >> 0xb) * 0x41;
  uStack_28 = uStack_28 ^ uStack_28 >> 0x16;
  lStack_20 = -lVar1;
  if (-1 < lVar1) {
    lStack_20 = lVar1;
  }
  puVar2 = &uStack_28;
  func_0x000100505190(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 == param_3) {
    puVar5 = (ulong *)0x1;
  }
  else {
    puVar5 = (ulong *)0x0;
    if ((puVar2 != (ulong *)0x0) && (param_3 != (ulong *)0x0)) {
      puVar5 = puVar2;
      _objc_opt_class(puVar2);
      puVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar5);
      if ((((ulong)puVar3 & 1) == 0) || (puVar2[2] != param_3[2])) {
        puVar5 = (ulong *)0x0;
      }
      else {
        dVar6 = ABS((double)puVar2[1] + (double)param_3[1]) * 2.220446049250313e-16;
        if (dVar6 <= 2.2250738585072014e-308) {
          dVar6 = 2.2250738585072014e-308;
        }
        puVar5 = (ulong *)(ulong)(ABS((double)puVar2[1] - (double)param_3[1]) < dVar6);
      }
    }
  }
  _objc_release(param_3);
  return puVar5;
}



/* Entry: 1070ba2a8; end: 1070ba363; -[SCChatFlashbackHintViewedData isEqual:] */

bool FUN_1070ba2a8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  double dVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar1 = param_1;
      _objc_opt_class(param_1);
      uVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar1);
      if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))) {
        bVar3 = false;
      }
      else {
        dVar4 = ABS(*(double *)(param_1 + 8) + *(double *)(param_3 + 8)) * 2.220446049250313e-16;
        if (dVar4 <= 2.2250738585072014e-308) {
          dVar4 = 2.2250738585072014e-308;
        }
        bVar3 = ABS(*(double *)(param_1 + 8) - *(double *)(param_3 + 8)) < dVar4;
      }
    }
  }
  _objc_release(param_3);
  return bVar3;
}



/* Entry: 1070ba364; end: 1070ba36b; -[SCChatFlashbackHintViewedData timestamp] */

undefined8 FUN_1070ba364(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1070ba36c; end: 1070ba373; -[SCChatFlashbackHintViewedData viewedCount] */

undefined8 FUN_1070ba36c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1070ba374; end: 1070ba37f; -[SCPolaroidViewTransitionServices .cxx_destruct] */

void FUN_1070ba374(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1070ba380; end: 1070ba3cf;  */

void FUN_1070ba380(undefined8 param_1,undefined8 param_2)

{
  FUN_1070ba6e4(param_1,0x3ff0000000000000,0x3ff0000000000000);
  func_0x00010c209760(param_2);
  func_0x0001070ba88c(param_1,0x3ff0000000000000,0x3ff0000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010c196030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_setEndPoint__112643228);
  return;
}



/* Entry: 1070ba3d0; end: 1070ba4ab;  */

void FUN_1070ba3d0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010bf529e0();
  if (uVar5 != 0) {
    uVar5 = 0;
    do {
      uVar2 = param_3;
      func_0x00010c0dfd40(param_3,param_2,uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf40c40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      func_0x00010c1d04c0(puVar1,param_2,uVar4,uVar5);
      _objc_release(uVar3);
      _objc_release(uVar2);
      uVar5 = uVar5 + 1;
      uVar2 = param_3;
      func_0x00010bf529e0();
    } while (uVar5 < uVar2);
  }
  func_0x00010c17eb60(param_1,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1070ba4ac; end: 1070ba6e3;  */

undefined1  [16]
FUN_1070ba4ac(undefined8 param_1,double param_2,undefined8 param_3,long param_4,long param_5)

{
  long lVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  float fVar13;
  double dVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  uVar16 = (undefined4)((ulong)param_3 >> 0x20);
  uVar15 = (undefined4)param_3;
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_5);
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  dVar14 = 0.0;
  lVar4 = param_4;
  func_0x00010c0f4aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  if (lVar5 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = 0;
    do {
      lVar10 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar4);
        }
        uVar12 = *(undefined8 *)(lVar10 * 8);
        uVar6 = uVar12;
        func_0x00010bf41120();
        if ((int)uVar6 != 0) {
          if (lVar11 == 0) {
            lVar7 = param_5;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            lVar11 = lVar7;
            func_0x00010bfc2200();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar7);
          }
          puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010bf41120(uVar12);
          func_0x00010c0df760(puVar8);
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar11;
          func_0x00010c0e00e0(lVar11);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar8);
          func_0x00010c0f4a60(uVar12);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar12;
          func_0x00010c272380();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar3);
          _objc_release(uVar6);
          _objc_release(uVar12);
          _objc_release(lVar7);
        }
        lVar10 = lVar10 + 1;
      } while (lVar5 != lVar10);
      lVar5 = lVar4;
      func_0x00010bf52a60();
    } while (lVar5 != 0);
  }
  _objc_release(lVar4);
  puVar8 = puVar3;
  func_0x00010bf51e00(puVar3);
  _objc_release(lVar11);
  _objc_release(puVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
    auVar19._8_8_ = param_2;
    auVar19._0_8_ = dVar14;
    return auVar19;
  }
  ___stack_chk_fail();
  dVar17 = (double)CONCAT44(uVar16,uVar15);
  fVar13 = (float)dVar14;
  _fmodf(fVar13,0x43b40000);
  bVar2 = false;
  if ((0.0 <= fVar13) && (bVar2 = false, !NAN(fVar13))) {
    bVar2 = fVar13 < 45.0;
  }
  if (bVar2) {
LAB_1070ba7c8:
    fVar13 = (fVar13 * 3.1415927) / 180.0;
    _tanf(fVar13);
    dVar14 = (double)fVar13 * 0.5 + 0.5;
  }
  else {
    bVar2 = false;
    if ((315.0 <= fVar13) && (bVar2 = false, !NAN(fVar13))) {
      bVar2 = fVar13 < 360.0;
    }
    if (bVar2) goto LAB_1070ba7c8;
    bVar2 = false;
    if ((45.0 <= fVar13) && (bVar2 = false, !NAN(fVar13))) {
      bVar2 = fVar13 < 135.0;
    }
    if (bVar2) {
      fVar13 = ((fVar13 + -90.0) * 3.1415927) / 180.0;
      _tanf(fVar13);
      param_2 = param_2 * ((double)fVar13 * 0.5 + 0.5);
      goto LAB_1070ba7fc;
    }
    bVar2 = false;
    if ((135.0 <= fVar13) && (bVar2 = false, !NAN(fVar13))) {
      bVar2 = fVar13 < 225.0;
    }
    if (bVar2) {
      fVar13 = (fVar13 * -3.1415927) / 180.0;
      _tanf(fVar13);
      dVar17 = dVar17 * ((double)fVar13 * 0.5 + 0.5);
      goto LAB_1070ba7fc;
    }
    if ((225.0 <= fVar13) && (fVar13 < 315.0)) {
      fVar13 = ((-90.0 - fVar13) * 3.1415927) / 180.0;
      _tanf(fVar13);
      param_2 = param_2 * ((double)fVar13 * 0.5 + 0.5);
      dVar17 = 0.0;
      goto LAB_1070ba7fc;
    }
    dVar14 = 0.5;
  }
  dVar17 = dVar17 * dVar14;
  param_2 = 0.0;
LAB_1070ba7fc:
  auVar18._8_8_ = dVar17;
  auVar18._0_8_ = param_2;
  return auVar18;
}



/* Entry: 1070ba6e4; end: 1070baa33;  */

undefined1  [16] FUN_1070ba6e4(double param_1,double param_2,double param_3)

{
  bool bVar1;
  float fVar2;
  double dVar3;
  undefined1 auVar4 [16];
  
  fVar2 = (float)param_1;
  _fmodf(fVar2,0x43b40000);
  bVar1 = false;
  if ((0.0 <= fVar2) && (bVar1 = false, !NAN(fVar2))) {
    bVar1 = fVar2 < 45.0;
  }
  if (bVar1) {
LAB_1070ba7c8:
    fVar2 = (fVar2 * 3.1415927) / 180.0;
    _tanf(fVar2);
    dVar3 = (double)fVar2 * 0.5 + 0.5;
  }
  else {
    bVar1 = false;
    if ((315.0 <= fVar2) && (bVar1 = false, !NAN(fVar2))) {
      bVar1 = fVar2 < 360.0;
    }
    if (bVar1) goto LAB_1070ba7c8;
    bVar1 = false;
    if ((45.0 <= fVar2) && (bVar1 = false, !NAN(fVar2))) {
      bVar1 = fVar2 < 135.0;
    }
    if (bVar1) {
      fVar2 = ((fVar2 + -90.0) * 3.1415927) / 180.0;
      _tanf(fVar2);
      param_2 = param_2 * ((double)fVar2 * 0.5 + 0.5);
      goto LAB_1070ba7fc;
    }
    bVar1 = false;
    if ((135.0 <= fVar2) && (bVar1 = false, !NAN(fVar2))) {
      bVar1 = fVar2 < 225.0;
    }
    if (bVar1) {
      fVar2 = (fVar2 * -3.1415927) / 180.0;
      _tanf(fVar2);
      param_3 = param_3 * ((double)fVar2 * 0.5 + 0.5);
      goto LAB_1070ba7fc;
    }
    if ((225.0 <= fVar2) && (fVar2 < 315.0)) {
      fVar2 = ((-90.0 - fVar2) * 3.1415927) / 180.0;
      _tanf(fVar2);
      param_2 = param_2 * ((double)fVar2 * 0.5 + 0.5);
      param_3 = 0.0;
      goto LAB_1070ba7fc;
    }
    dVar3 = 0.5;
  }
  param_3 = param_3 * dVar3;
  param_2 = 0.0;
LAB_1070ba7fc:
  auVar4._8_8_ = param_3;
  auVar4._0_8_ = param_2;
  return auVar4;
}



/* Entry: 1070baa34; end: 1070baa3f; -[SCFeatureSettingsService isMerlinBioAvailable] */

void FUN_1070baa34(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e99a18);
  return;
}



/* Entry: 1070baa40; end: 1070baa4b; -[SCFeatureSettingsService merlinBioServerParam] */

undefined ** FUN_1070baa40(void)

{
  return &PTR____CFConstantStringClassReference_110e99a18;
}



/* Entry: 1070baa4c; end: 1070baa5b; -[SCFeatureSettingsService setMerlinBio:] */

void FUN_1070baa4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_stringValue__112586918,
             &PTR____CFConstantStringClassReference_110e99a18,param_3);
  return;
}



/* Entry: 1070baa5c; end: 1070baa83; -[SCFeatureSettingsService merlin_bio_client_value:] */

void FUN_1070baa5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1070baa84; end: 1070baaab; -[SCFeatureSettingsService merlin_bio_server_value:] */

void FUN_1070baa84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1070baaac; end: 1070baabf; -[SCFeatureSettingsService merlinBio] */

void FUN_1070baaac(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec55d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__stringForFeatureSetting_default_11258ef18,
             &PTR____CFConstantStringClassReference_110e99a18,
             &PTR____CFConstantStringClassReference_110daafd8);
  return;
}



/* Entry: 1070baac0; end: 1070baeb3;  */

void FUN_1070baac0(undefined8 param_1,undefined *param_2,int param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_4);
  puVar1 = param_2;
  func_0x00010bfd8500();
  if ((int)puVar1 == 0) {
LAB_1070bad64:
    puVar8 = (undefined *)0x0;
    goto LAB_1070bae78;
  }
  puVar1 = param_2;
  func_0x00010c091b80();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar1;
  func_0x00010c1185e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar8;
  func_0x00010c08fa60();
  if (puVar2 == (undefined *)0x0) {
    _objc_release(puVar8);
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar2 = param_2;
    func_0x00010c091b80();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c11cb60();
    _objc_release(puVar2);
    _objc_release(puVar8);
    _objc_release(puVar1);
    if ((int)puVar3 != 3) goto LAB_1070bad64;
    puVar1 = PTR_PTR_1126b5c18;
    func_0x00010c0cb140(PTR_PTR_1126b5c18);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = param_2;
    func_0x00010c091b80(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar8;
    func_0x00010c1185e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e4da0(puVar1);
    _objc_release(puVar2);
    _objc_release(puVar8);
    puVar8 = param_2;
    func_0x00010c091b80(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar8;
    func_0x00010bf93ec0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c195ce0(puVar1);
    _objc_release(puVar2);
    _objc_release(puVar8);
    func_0x00010c1e6120(puVar1);
    uVar4 = param_1;
    func_0x00010bf4bc60(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bbd60(puVar1);
    _objc_release(uVar5);
    _objc_release(uVar4);
    puVar8 = param_2;
    func_0x00010c091b80(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar8;
    func_0x00010c118560();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e4cc0(puVar1);
    _objc_release(puVar2);
    _objc_release(puVar8);
    puVar8 = PTR_PTR_1126d4b28;
    func_0x00010c0cb140(PTR_PTR_1126d4b28);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar8;
    func_0x00010beedca0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e4dc0();
    _objc_release(puVar2);
    if (param_3 != 0) {
      func_0x0001070bc208();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar8;
      func_0x00010c09e8e0(puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19a160();
      _objc_release(puVar3);
      _objc_release(puVar2);
      puVar2 = puVar8;
      func_0x00010bfe5400(puVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010bf0af00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1befc0();
      _objc_release(puVar3);
      _objc_release(puVar2);
      func_0x00010c20eb80(puVar8);
      goto LAB_1070bae70;
    }
    puVar2 = PTR_PTR_1126b2c18;
    func_0x00010bfb1120();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c08fa60();
    if (puVar3 < (undefined *)0x8) {
      if ((puVar2 == (undefined *)0x0) ||
         (puVar3 = puVar2, func_0x00010c08fa60(), puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0,
         puVar3 == (undefined *)0x0)) goto LAB_1070bae20;
      func_0x0001070bc238();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar8;
      func_0x00010c09e8e0(puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19a160();
      _objc_release(puVar7);
    }
    else {
      _objc_release(puVar2);
      puVar3 = puVar2;
      puVar2 = (undefined *)0x0;
LAB_1070bae20:
      func_0x0001070bc220();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar8;
      func_0x00010c09e8e0(puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19a160();
    }
    _objc_release(puVar6);
    _objc_release(puVar3);
    func_0x00010c20eb80(puVar8);
    _objc_release(puVar2);
  }
LAB_1070bae70:
  _objc_release(puVar1);
LAB_1070bae78:
  _objc_release(param_4);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1070baeb4; end: 1070bafb3;  */

long FUN_1070baeb4(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
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
  func_0x00010c105080();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf52a60();
  lVar3 = 0;
  if (lVar1 != 0) {
    lVar3 = *plStack_100;
    do {
      lVar4 = 0;
      do {
        if (*plStack_100 != lVar3) {
          _objc_enumerationMutation(param_1);
        }
        uVar2 = *(ulong *)(lStack_108 + lVar4 * 8);
        FUN_1070bafb4();
        if ((uVar2 & 1) != 0) {
          lVar3 = 1;
          goto LAB_1070baf74;
        }
        lVar4 = lVar4 + 1;
      } while (lVar1 != lVar4);
      lVar1 = param_1;
      func_0x00010bf52a60(param_1,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar1 != 0);
    lVar3 = 0;
  }
LAB_1070baf74:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return lVar3;
  }
  ___stack_chk_fail();
  _objc_retain();
  lVar3 = param_1;
  func_0x00010c25e260();
  if (lVar3 == 2) {
    lVar3 = param_1;
    FUN_1070bb34c(param_1);
  }
  else {
    lVar3 = 0;
  }
  _objc_release(param_1);
  return lVar3;
}



/* Entry: 1070bafb4; end: 1070bb003;  */

long FUN_1070bafb4(long param_1)

{
  long lVar1;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010c25e260();
  if (lVar1 == 2) {
    lVar1 = param_1;
    FUN_1070bb34c(param_1);
  }
  else {
    lVar1 = 0;
  }
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 1070bb004; end: 1070bb0c3;  */

undefined8 FUN_1070bb004(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain();
  uVar4 = param_1;
  func_0x00010c25e260();
  if ((int)uVar4 == 2) {
    uVar1 = param_1;
    func_0x00010beedca0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010beeed20();
    if ((int)uVar4 == 0xe) {
      uVar2 = param_1;
      func_0x00010beedca0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c08fba0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c074340();
      _objc_release(uVar3);
      _objc_release(uVar2);
    }
    else {
      uVar4 = 0;
    }
    _objc_release(uVar1);
  }
  else {
    uVar4 = 0;
  }
  _objc_release(param_1);
  return uVar4;
}



/* Entry: 1070bb0c4; end: 1070bb34b;  */

void FUN_1070bb0c4(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puVar9;
  
  _objc_retain();
  uVar8 = param_1;
  func_0x00010bf529e0();
  if (uVar8 == 0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_1;
    func_0x00010bf529e0();
    if (uVar8 != 0) {
      uVar8 = 0;
      do {
        uVar2 = param_1;
        func_0x00010c0dfd40(param_1,param_2,uVar8);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010beedca0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010beeed20();
        _objc_release(uVar3);
        if ((int)uVar4 == 0x46) {
          _objc_release(uVar2);
          goto LAB_1070bb318;
        }
        uVar3 = uVar2;
        FUN_1070bb34c();
        if ((int)uVar3 != 0) {
          puVar9 = PTR_PTR_1126d4b28;
          func_0x00010c0cb140(PTR_PTR_1126d4b28);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar2;
          func_0x00010beedca0(uVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c161620(puVar9,param_2,uVar3);
          _objc_release(uVar3);
          puVar5 = PTR_PTR_1126d4b30;
          func_0x00010c0cb140(PTR_PTR_1126d4b30);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar5;
          func_0x0001070bd6ec();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c19a160(puVar5,param_2,puVar6);
          _objc_release(puVar6);
          func_0x00010c1bf680(puVar9,param_2,puVar5);
          puVar6 = PTR_PTR_1126c94a0;
          func_0x00010c0cb140(PTR_PTR_1126c94a0);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar6;
          func_0x00010bf0af00();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1befc0();
          _objc_release(puVar7);
          puVar7 = puVar6;
          func_0x00010bf0af00(puVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c216120();
          _objc_release(puVar7);
          func_0x00010c1a9680(puVar9,param_2,puVar6);
          func_0x00010c1f8fa0(puVar9,param_2,0);
          func_0x00010c1f9020(puVar9,param_2,0);
          func_0x00010c161fe0(puVar9,param_2,0);
          func_0x00010c20eb80(puVar9,param_2,2);
          puVar7 = puVar9;
          FUN_1070bb684(puVar9);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar1,param_2,puVar7);
          _objc_release(puVar7);
          _objc_release(puVar6);
          _objc_release(puVar5);
          _objc_release(puVar9);
        }
        _objc_release(uVar2);
        uVar8 = uVar8 + 1;
        uVar2 = param_1;
        func_0x00010bf529e0();
      } while (uVar8 < uVar2);
    }
    puVar9 = puVar1;
    func_0x00010bf529e0();
    if (puVar9 == (undefined *)0x0) {
LAB_1070bb318:
      puVar9 = (undefined *)0x0;
    }
    else {
      puVar9 = puVar1;
      func_0x00010bf51e00(puVar1);
    }
    _objc_release(puVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 1070bb34c; end: 1070bb3f3;  */

undefined8 FUN_1070bb34c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010beedca0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010beeed20();
  if ((int)uVar4 == 0xe) {
    uVar2 = param_1;
    func_0x00010beedca0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c08fba0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c074340();
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  else {
    uVar4 = 0;
  }
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar4;
}



/* Entry: 1070bb3f4; end: 1070bb67b;  */

undefined * FUN_1070bb3f4(undefined *param_1,undefined *param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  uVar12 = 0;
  puVar8 = param_1;
  func_0x00010c105080();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar8;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  puVar5 = param_1;
  if (puVar2 == (undefined *)0x0) {
LAB_1070bb604:
    _objc_release(puVar8);
  }
  else {
    uVar10 = 0;
    do {
      puVar11 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar8);
        }
        uVar9 = *(undefined8 *)((long)puVar11 * 8);
        uVar3 = uVar9;
        func_0x00010beedca0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010beeed20();
        _objc_release(uVar3);
        if ((int)uVar4 == 0x46) goto LAB_1070bb604;
        FUN_1070bafb4();
        uVar10 = (uint)uVar9 | uVar10;
        puVar11 = puVar11 + 1;
      } while (puVar2 != puVar11);
      puVar2 = puVar8;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined *)0x0);
    _objc_release(puVar8);
    if ((uVar10 & 1) != 0) {
      puVar8 = param_1;
      func_0x00010c105080();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar8;
      func_0x00010bfaea20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      puVar8 = puVar2;
      func_0x00010bf529e0();
      if (puVar8 == (undefined *)0x0) {
        _objc_retain(param_1);
      }
      else {
        puVar5 = PTR_PTR_1126d4518;
        _objc_alloc(PTR_PTR_1126d4518);
        puVar8 = param_1;
        func_0x00010c242420(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar11 = param_1;
        func_0x00010bf4f080(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = param_1;
        func_0x00010bf50280(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c074920(param_1);
        func_0x00010c29eae0(param_1);
        func_0x00010c07fbc0(param_1);
        func_0x00010c07e8a0();
        func_0x00010c037d40(uVar12,puVar5);
        _objc_release(puVar6);
        _objc_release(puVar11);
        _objc_release(puVar8);
      }
      _objc_release(puVar2);
      goto LAB_1070bb618;
    }
  }
  _objc_retain(param_1);
LAB_1070bb618:
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_retain();
  puVar8 = param_2;
  func_0x00010c25e260();
  if (puVar8 == (undefined *)0x2) {
    puVar8 = param_2;
    FUN_1070bb34c(param_2);
  }
  else {
    puVar8 = (undefined *)0x0;
  }
  _objc_release(param_2);
  return puVar8;
}



/* Entry: 1070bb67c; end: 1070bb683;  */

long FUN_1070bb67c(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain();
  lVar1 = param_2;
  func_0x00010c25e260();
  if (lVar1 == 2) {
    lVar1 = param_2;
    FUN_1070bb34c(param_2);
  }
  else {
    lVar1 = 0;
  }
  _objc_release(param_2);
  return lVar1;
}



/* Entry: 1070bb684; end: 1070bb8d3;  */

void FUN_1070bb684(undefined *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  
  _objc_retain();
  puVar8 = param_1;
  func_0x00010bfd89c0();
  if ((int)puVar8 == 0) {
    puVar8 = param_1;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c08fa60();
    _objc_release(puVar8);
    if (puVar9 == (undefined *)0x0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar8 = PTR_PTR_1126d4b30;
      func_0x00010c0cb140(PTR_PTR_1126d4b30);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = param_1;
      func_0x00010c26b700(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19a160(puVar8,param_2,puVar9);
      _objc_release(puVar9);
    }
  }
  else {
    puVar8 = param_1;
    func_0x00010c09e8e0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar9 = param_1;
  func_0x00010bfdb820();
  if ((int)puVar9 == 0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar9 = param_1;
    func_0x00010c155120();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar10 = param_1;
  func_0x00010bfdb800();
  if ((int)puVar10 == 0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    puVar3 = param_1;
    func_0x00010c154f40(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar3;
    FUN_1070bd1e8();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  puVar3 = PTR_PTR_1126d4b38;
  _objc_alloc(PTR_PTR_1126d4b38);
  puVar4 = param_1;
  func_0x00010bfd3a00();
  if ((int)puVar4 == 0) {
    puVar11 = (undefined *)0x0;
  }
  else {
    puVar11 = param_1;
    func_0x00010beedca0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar5 = param_1;
  func_0x00010bfe5400(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  FUN_1070bd1e8();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = param_1;
  func_0x00010beef1e0();
  uVar1 = 2;
  if ((int)puVar7 != 2) {
    uVar1 = (int)puVar7 == 1;
  }
  puVar7 = param_1;
  func_0x00010c25e260();
  uVar2 = 2;
  if ((int)puVar7 != 2) {
    uVar2 = (int)puVar7 == 1;
  }
  func_0x00010bfeffe0(puVar3,param_2,puVar11,puVar8,puVar6,puVar9,puVar10,uVar1,uVar2);
  _objc_release(puVar6);
  _objc_release(puVar5);
  if ((int)puVar4 != 0) {
    _objc_release(puVar11);
  }
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1070bb8d4; end: 1070bba2f;  */

void FUN_1070bb8d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126b5b00;
  func_0x00010c0cb140(PTR_PTR_1126b5b00);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d4b40;
  func_0x00010c0cb140(PTR_PTR_1126d4b40);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c192fa0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126d4b30;
  func_0x00010c0cb140(PTR_PTR_1126d4b30);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  FUN_1070bc1f0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19a160(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126c94a0;
  func_0x00010c0cb140(PTR_PTR_1126c94a0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf0af00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1befc0();
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126d4b38;
  _objc_alloc(PTR_PTR_1126d4b38);
  puVar5 = puVar3;
  FUN_1070bd1e8(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfeffe0(puVar4,param_2,puVar1,puVar2,puVar5,0,0,0,0);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1070bba30; end: 1070bbaa7;  */

void FUN_1070bba30(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain();
  puVar1 = param_1;
  func_0x00010beef4c0();
  puVar2 = PTR____NSArray0__struct_11034ab48;
  if (puVar1 != (undefined *)0x0) {
    puVar1 = param_1;
    func_0x00010beef4a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x000100504554();
    _objc_release(puVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1070bbaa8; end: 1070bbaaf;  */

void FUN_1070bbaa8(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  _objc_retain();
  puVar5 = param_2;
  func_0x00010bfd89c0();
  if ((int)puVar5 == 0) {
    puVar5 = param_2;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c08fa60();
    _objc_release(puVar5);
    if (puVar6 == (undefined *)0x0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar5 = PTR_PTR_1126d4b30;
      func_0x00010c0cb140(PTR_PTR_1126d4b30);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = param_2;
      func_0x00010c26b700(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19a160(puVar5);
      _objc_release(puVar6);
    }
  }
  else {
    puVar5 = param_2;
    func_0x00010c09e8e0(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar6 = param_2;
  func_0x00010bfdb820();
  if ((int)puVar6 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = param_2;
    func_0x00010c155120();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar7 = param_2;
  func_0x00010bfdb800();
  if ((int)puVar7 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar1 = param_2;
    func_0x00010c154f40(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar1;
    FUN_1070bd1e8();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  puVar1 = PTR_PTR_1126d4b38;
  _objc_alloc(PTR_PTR_1126d4b38);
  puVar2 = param_2;
  func_0x00010bfd3a00();
  if ((int)puVar2 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar8 = param_2;
    func_0x00010beedca0(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar3 = param_2;
  func_0x00010bfe5400(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  FUN_1070bd1e8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef1e0();
  func_0x00010c25e260();
  func_0x00010bfeffe0(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  if ((int)puVar2 != 0) {
    _objc_release(puVar8);
  }
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1070bbab0; end: 1070bbbef;  */

void FUN_1070bbab0(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain();
  puVar1 = param_1;
  func_0x00010beef4c0();
  puVar2 = PTR____NSArray0__struct_11034ab48;
  if (puVar1 != (undefined *)0x0) {
    puVar1 = param_1;
    func_0x00010beef4a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bfb2660();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1070bbbf0; end: 1070bbed7;  */

void FUN_1070bbbf0(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar1 = PTR_PTR_1126d1f78;
  func_0x00010c0cb140();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc();
  func_0x00010bf529e0(param_1);
  func_0x00010bffc4a0();
  uVar14 = 0;
  _objc_retain(param_1);
  lVar3 = param_1;
  func_0x00010bf52a60();
  lVar8 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar12 = 0;
    do {
      if (lRam0000000000000000 != lVar8) {
        _objc_enumerationMutation(param_1);
      }
      puVar4 = PTR_PTR_1126d4b28;
      uVar13 = *(undefined8 *)(lVar12 * 8);
      _objc_retain(uVar13);
      func_0x00010c0cb140();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef1e0();
      func_0x00010c161fe0(puVar4);
      uVar5 = uVar13;
      func_0x00010beedca0(uVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c161620(puVar4);
      _objc_release(uVar5);
      uVar5 = uVar13;
      func_0x00010c09e8e0(uVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1bf680(puVar4);
      _objc_release(uVar5);
      uVar5 = uVar13;
      func_0x00010bfe5400(uVar13);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      FUN_1070bd410();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a9680(puVar4);
      _objc_release(uVar6);
      _objc_release(uVar5);
      uVar5 = uVar13;
      func_0x00010c155120(uVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1f9020(puVar4);
      _objc_release(uVar5);
      uVar5 = uVar13;
      func_0x00010c154f40();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      FUN_1070bd410();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1f8fa0(puVar4);
      _objc_release(uVar6);
      _objc_release(uVar5);
      func_0x00010c25e260();
      _objc_release(uVar13);
      func_0x00010c20eb80(puVar4);
      func_0x00010befa120(puVar2);
      _objc_release(puVar4);
      lVar12 = lVar12 + 1;
    } while (lVar3 != lVar12);
    lVar3 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release(param_1);
  func_0x00010c162160(puVar1);
  _objc_release(puVar2);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
    ___stack_chk_fail();
    _objc_retain(param_2);
    puVar2 = PTR_PTR_1126b5c60;
    _objc_retain(param_1);
    _objc_alloc();
    lVar3 = param_2;
    func_0x00010c0cb5a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfff0c0();
    _objc_release(lVar3);
    lVar3 = param_2;
    func_0x00010c15df40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar1 = PTR_PTR_1126b23a0;
    puVar4 = (undefined *)0x0;
    if (lVar3 != 0) {
      lVar3 = param_2;
      func_0x00010c15df40(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c292680(puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      puVar4 = puVar1;
    }
    puVar7 = PTR_PTR_1126b2398;
    _objc_alloc();
    lVar3 = param_2;
    func_0x00010c15df60(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_2;
    func_0x00010c15dba0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar11 = param_2;
    func_0x00010c15db00(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bcc0();
    _objc_release(lVar11);
    _objc_release(lVar8);
    _objc_release(lVar3);
    puVar9 = PTR_PTR_1126b5ba0;
    _objc_alloc(PTR_PTR_1126b5ba0);
    lVar3 = param_2;
    func_0x00010bf50280(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c074920(param_2);
    func_0x00010c05a6a0(puVar9);
    _objc_release(lVar3);
    puVar10 = PTR_PTR_1126b5ba8;
    _objc_alloc(PTR_PTR_1126b5ba8);
    func_0x00010c047f80();
    puVar1 = PTR_PTR_1126d4518;
    _objc_alloc(PTR_PTR_1126d4518);
    lVar3 = param_1;
    FUN_1070bba30(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    lVar8 = param_2;
    func_0x00010bf4f080(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar11 = param_2;
    func_0x00010bf50280(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c074920(param_2);
    func_0x00010c29eae0(param_2);
    func_0x00010c07fbc0(param_2);
    func_0x00010c073e00();
    func_0x00010c037d40(uVar14,puVar1);
    _objc_release(lVar11);
    _objc_release(lVar8);
    _objc_release(lVar3);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar7);
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1070bbed8; end: 1070bc1ef;  */

void FUN_1070bbed8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b5c60;
  _objc_retain(param_2);
  _objc_alloc();
  lVar2 = param_3;
  func_0x00010c0cb5a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfff0c0();
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c15df40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar3 = PTR_PTR_1126b23a0;
  puVar10 = (undefined *)0x0;
  if (lVar2 != 0) {
    lVar2 = param_3;
    func_0x00010c15df40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c292680(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    puVar10 = puVar3;
  }
  puVar3 = PTR_PTR_1126b2398;
  _objc_alloc();
  lVar2 = param_3;
  func_0x00010c15df60(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_3;
  func_0x00010c15dba0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_3;
  func_0x00010c15db00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01bcc0();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
  puVar6 = PTR_PTR_1126b5ba0;
  _objc_alloc(PTR_PTR_1126b5ba0);
  lVar2 = param_3;
  func_0x00010bf50280(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c074920(param_3);
  func_0x00010c05a6a0(puVar6);
  _objc_release(lVar2);
  puVar7 = PTR_PTR_1126b5ba8;
  _objc_alloc(PTR_PTR_1126b5ba8);
  func_0x00010c047f80();
  puVar8 = PTR_PTR_1126d4518;
  _objc_alloc(PTR_PTR_1126d4518);
  uVar9 = param_2;
  FUN_1070bba30(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = param_3;
  func_0x00010bf4f080(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_3;
  func_0x00010bf50280(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c074920(param_3);
  func_0x00010c29eae0(param_3);
  func_0x00010c07fbc0(param_3);
  func_0x00010c073e00();
  func_0x00010c037d40(param_1,puVar8);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(uVar9);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release(puVar10);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1070bc1f0; end: 1070bc24f;  */

void FUN_1070bc1f0(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e9f338;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e9f338,
                      &PTR____CFConstantStringClassReference_110e9f358,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 1070bc250; end: 1070bc4c3; -[SCStoredPostSnapAction initWithConversationId:messageId:serializedActions:contextSessionId:senderUserId:senderUsername:senderBusinessId:senderDisplayName:isFromSendSide:viewedAtTimestamp:isGroupConversation:isStory:lensPromptId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1070bc250(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined4 param_12,
             undefined4 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_14);
  puStack_78 = PTR_PTR_1126f89a0;
  puVar1 = &uStack_80;
  uStack_80 = param_2;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112763e9c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112763e9c) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112763ea0);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112763ea0) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112763ea4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112763ea4) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112763ea8);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112763ea8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112763eac);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112763eac) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112763eb0);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112763eb0) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112763eb4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112763eb4) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112763eb8);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112763eb8) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112763ebc) = (undefined1)param_12;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112763ec0) = param_1;
    *(undefined1 *)((long)puVar1 + (long)_DAT_112763ec4) = param_12._1_1_;
    *(undefined1 *)((long)puVar1 + (long)_DAT_112763ec8) = param_12._2_1_;
    uVar2 = param_14;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112763ecc);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112763ecc) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_14);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 1070bc4c4; end: 1070bc4e7; -[SCStoredPostSnapAction copyWithZone:] */

undefined8 FUN_1070bc4c4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1070bc4e8; end: 1070bc61b; -[SCStoredPostSnapAction hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1070bc4e8(long param_1,undefined8 param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined1 *puVar8;
  double dVar9;
  double dVar10;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar4 = &uStack_90;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + _DAT_112763e9c);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112763ea0);
  uStack_90 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112763ea4);
  uStack_88 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112763ea8);
  uStack_80 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112763eac);
  uStack_78 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112763eb0);
  uStack_70 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112763eb4);
  uStack_68 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112763eb8);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uStack_50 = (ulong)*(byte *)(param_1 + _DAT_112763ebc);
  uVar7 = ~*(ulong *)(param_1 + _DAT_112763ec0) + *(ulong *)(param_1 + _DAT_112763ec0) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_48 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_48 = uStack_48 ^ uStack_48 >> 0x16;
  uStack_40 = (ulong)*(byte *)(param_1 + _DAT_112763ec4);
  uStack_38 = (ulong)*(byte *)(param_1 + _DAT_112763ec8);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112763ecc);
  uStack_58 = uVar3;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000100505190(&uStack_90,0xd);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (undefined8 *)param_3) {
LAB_1070bc810:
    puVar8 = (undefined1 *)0x1;
  }
  else {
    puVar8 = (undefined1 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1070bc81c;
    puVar8 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((ulong)puVar5 & 1) != 0) &&
       (((*(char *)((long)puVar4 + (long)_DAT_112763ebc) == param_3[_DAT_112763ebc] &&
         (*(char *)((long)puVar4 + (long)_DAT_112763ec4) == param_3[_DAT_112763ec4])) &&
        (*(char *)((long)puVar4 + (long)_DAT_112763ec8) == param_3[_DAT_112763ec8])))) {
      dVar10 = ABS(*(double *)((long)puVar4 + (long)_DAT_112763ec0) -
                   *(double *)(param_3 + _DAT_112763ec0));
      dVar9 = ABS(*(double *)((long)puVar4 + (long)_DAT_112763ec0) +
                  *(double *)(param_3 + _DAT_112763ec0)) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar9))) {
        bVar1 = dVar10 < dVar9;
      }
      if ((((((bVar1) &&
             ((lVar6 = *(long *)((long)puVar4 + (long)_DAT_112763e9c),
              lVar6 == *(long *)(param_3 + _DAT_112763e9c) ||
              (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
            ((lVar6 = *(long *)((long)puVar4 + (long)_DAT_112763ea0),
             lVar6 == *(long *)(param_3 + _DAT_112763ea0) ||
             (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
           ((((lVar6 = *(long *)((long)puVar4 + (long)_DAT_112763ea4),
              lVar6 == *(long *)(param_3 + _DAT_112763ea4) ||
              (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
             ((lVar6 = *(long *)((long)puVar4 + (long)_DAT_112763ea8),
              lVar6 == *(long *)(param_3 + _DAT_112763ea8) ||
              (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
            ((lVar6 = *(long *)((long)puVar4 + (long)_DAT_112763eac),
             lVar6 == *(long *)(param_3 + _DAT_112763eac) ||
             (func_0x00010c071ae0(), (int)lVar6 != 0)))))) &&
          ((lVar6 = *(long *)((long)puVar4 + (long)_DAT_112763eb0),
           lVar6 == *(long *)(param_3 + _DAT_112763eb0) || (func_0x00010c071ae0(), (int)lVar6 != 0))
          )) && (((lVar6 = *(long *)((long)puVar4 + (long)_DAT_112763eb4),
                  lVar6 == *(long *)(param_3 + _DAT_112763eb4) ||
                  (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
                 ((lVar6 = *(long *)((long)puVar4 + (long)_DAT_112763eb8),
                  lVar6 == *(long *)(param_3 + _DAT_112763eb8) ||
                  (func_0x00010c071ae0(), (int)lVar6 != 0)))))) {
        puVar8 = *(undefined1 **)((long)puVar4 + (long)_DAT_112763ecc);
        if (puVar8 != *(undefined1 **)(param_3 + _DAT_112763ecc)) {
          func_0x00010c071ae0();
          goto LAB_1070bc81c;
        }
        goto LAB_1070bc810;
      }
    }
    puVar8 = (undefined1 *)0x0;
  }
LAB_1070bc81c:
  _objc_release(param_3);
  return (undefined8 *)puVar8;
}



/* Entry: 1070bc61c; end: 1070bc837; -[SCStoredPostSnapAction isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1070bc61c(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1070bc810:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1070bc81c;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       (((*(char *)(param_1 + (long)_DAT_112763ebc) == *(char *)(param_3 + (long)_DAT_112763ebc) &&
         (*(char *)(param_1 + (long)_DAT_112763ec4) == *(char *)(param_3 + (long)_DAT_112763ec4)))
        && (*(char *)(param_1 + (long)_DAT_112763ec8) == *(char *)(param_3 + (long)_DAT_112763ec8)))
       )) {
      dVar5 = *(double *)(param_1 + (long)_DAT_112763ec0);
      dVar6 = *(double *)(param_3 + (long)_DAT_112763ec0);
      dVar7 = ABS(dVar5 - dVar6);
      dVar5 = ABS(dVar5 + dVar6) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar7) && (bVar1 = false, !NAN(dVar7) && !NAN(dVar5))) {
        bVar1 = dVar7 < dVar5;
      }
      if ((((((bVar1) &&
             ((lVar4 = *(long *)(param_1 + (long)_DAT_112763e9c),
              lVar4 == *(long *)(param_3 + (long)_DAT_112763e9c) ||
              (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
            ((lVar4 = *(long *)(param_1 + (long)_DAT_112763ea0),
             lVar4 == *(long *)(param_3 + (long)_DAT_112763ea0) ||
             (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
           ((((lVar4 = *(long *)(param_1 + (long)_DAT_112763ea4),
              lVar4 == *(long *)(param_3 + (long)_DAT_112763ea4) ||
              (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
             ((lVar4 = *(long *)(param_1 + (long)_DAT_112763ea8),
              lVar4 == *(long *)(param_3 + (long)_DAT_112763ea8) ||
              (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
            ((lVar4 = *(long *)(param_1 + (long)_DAT_112763eac),
             lVar4 == *(long *)(param_3 + (long)_DAT_112763eac) ||
             (func_0x00010c071ae0(), (int)lVar4 != 0)))))) &&
          ((lVar4 = *(long *)(param_1 + (long)_DAT_112763eb0),
           lVar4 == *(long *)(param_3 + (long)_DAT_112763eb0) ||
           (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
         (((lVar4 = *(long *)(param_1 + (long)_DAT_112763eb4),
           lVar4 == *(long *)(param_3 + (long)_DAT_112763eb4) ||
           (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
          ((lVar4 = *(long *)(param_1 + (long)_DAT_112763eb8),
           lVar4 == *(long *)(param_3 + (long)_DAT_112763eb8) ||
           (func_0x00010c071ae0(), (int)lVar4 != 0)))))) {
        lVar4 = *(long *)(param_1 + (long)_DAT_112763ecc);
        if (lVar4 != *(long *)(param_3 + (long)_DAT_112763ecc)) {
          func_0x00010c071ae0();
          goto LAB_1070bc81c;
        }
        goto LAB_1070bc810;
      }
    }
    lVar4 = 0;
  }
LAB_1070bc81c:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 1070bc838; end: 1070bc847; -[SCStoredPostSnapAction conversationId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1070bc838(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112763e9c);
}



/* Entry: 1070bc848; end: 1070bc857; -[SCStoredPostSnapAction messageId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1070bc848(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112763ea0);
}



/* Entry: 1070bc858; end: 1070bc867; -[SCStoredPostSnapAction serializedActions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1070bc858(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112763ea4);
}



/* Entry: 1070bc868; end: 1070bc877; -[SCStoredPostSnapAction contextSessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1070bc868(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112763ea8);
}



/* Entry: 1070bc878; end: 1070bc887; -[SCStoredPostSnapAction senderUserId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1070bc878(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112763eac);
}



/* Entry: 1070bc888; end: 1070bc897; -[SCStoredPostSnapAction senderUsername] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1070bc888(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112763eb0);
}



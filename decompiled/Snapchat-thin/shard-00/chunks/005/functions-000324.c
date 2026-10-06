/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1006c4c60; end: 1006c4dd3; -[SCGrapheneRegistry lensProcessingGraphene] */

void FUN_1006c4c60(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x1006c4ce8;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam000000011372e3e8 != -1) {
    FUN_10002a2fc(0x11372e3e8,&puStack_48);
  }
  uVar1 = uRam000000011372e3e0;
  func_0x000107c61174(uRam000000011372e3e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1006c4dd4; end: 1006c4ddb; -[SCLensProcessingServices lensReadyTracker] */

undefined8 FUN_1006c4dd4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1006c4ddc; end: 1006c4df7;  */

void FUN_1006c4ddc(void)

{
  func_0x000107c61160(PTR_PTR_1126db6d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1006c4df8; end: 1006c4e7b; -[SCLensProcessingEffectApplyTracker init] */

undefined1 * FUN_1006c4df8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fe190;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR_PTR_1126ae568;
    func_0x000107c61160();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    func_0x000107c61170(uVar3);
    *(undefined4 *)((long)puVar1 + 0x18) = 0;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1006c4e7c; end: 1006c4f1f; -[SCLensProcessingEffectReadyLogger initWithLensProcessingGraphene:effectsApplyTracker:] */

undefined1 *
FUN_1006c4e7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126fe198;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1006c4f20; end: 1006c4f27; -[SCLensProcessingServices lensProcessor] */

undefined8 FUN_1006c4f20(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1006c4f28; end: 1006c4f2f; -[SCLensProcessingComponentsFacade lensEventsProvider] */

undefined8 FUN_1006c4f28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1006c4f30; end: 1006c4f37; -[SCLensProcessingComponentsFacade effectAnalyticsProvider] */

undefined8 FUN_1006c4f30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1006c4f38; end: 1006c4f47; -[_TtC31WebLensesActiveLensServicesImpl32WebLensesActiveLensPublisherImpl applyEventObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006c4f38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112de81c8));
  return;
}



/* Entry: 1006c4f48; end: 1006c5143; -[SCLensProcessingViewfinderEventsWorkflow initWithEffectApplicator:lensProcessingActivator:effectEventsProvider:effectAnalyticsProvider:lensReadyLogger:lensLogger:webLensApplyEventObservable:] */

undefined1 *
FUN_1006c4f48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  puStack_68 = PTR_PTR_1126f07f8;
  uStack_70 = param_1;
  func_0x000107c61154(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined **)((long)puVar1 + 0x50) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined **)((long)puVar1 + 0x48) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined **)((long)puVar1 + 0x58) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126c1838;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined **)((long)puVar1 + 0x60) = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c3c9b4(puVar1);
    func_0x000107c3c9c8(puVar1);
  }
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1006c5144; end: 1006c514b; -[SCIdleTimerManager .cxx_construct] */

void FUN_1006c5144(long param_1)

{
  *(undefined1 *)(param_1 + 8) = 0;
  return;
}



/* Entry: 1006c514c; end: 1006c529f; -[SCLensProcessingViewfinderEventsWorkflow _subscribeOnLensProcessingActivation] */

void FUN_1006c514c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x000107c61144(auStack_48,*(undefined8 *)(param_1 + 0x50));
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c61174(uVar1);
  func_0x000107c61144(auStack_50,param_1);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  puStack_68 = &UNK_106217824;
  puStack_60 = &UNK_110916a38;
  func_0x000107c6111c(auStack_58,auStack_50);
  func_0x000107c4db94(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x000107c6111c(auStack_88,auStack_50);
  func_0x000107c6111c(auStack_80,auStack_48);
  func_0x000107c4db94(uVar2);
  func_0x000107c61120(auStack_80);
  func_0x000107c61120(auStack_88);
  func_0x000107c61120(auStack_58);
  func_0x000107c61120(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_48);
  return;
}



/* Entry: 1006c52a0; end: 1006c5353; -[SCLensProcessingViewfinderEventsWorkflow _subscribeOnWebLensApplyEvents] */

void FUN_1006c52a0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x000107c61174(uVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    puStack_48 = &UNK_106217740;
    puStack_40 = &UNK_110916dd8;
    uStack_38 = uVar1;
    func_0x000107c61174(uVar1);
    func_0x000107c5c320(uVar2,param_2,&puStack_58);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uStack_38);
    func_0x000107c61170(uVar1);
  }
  return;
}



/* Entry: 1006c5354; end: 1006c539f;  */

void FUN_1006c5354(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1006c53a0; end: 1006c53ab;  */

undefined ** FUN_1006c53a0(void)

{
  return &PTR_DAT_1130670f0;
}



/* Entry: 1006c53ac; end: 1006c53d7;  */

void FUN_1006c53ac(void)

{
  FUN_1006b2280();
  return;
}



/* Entry: 1006c53d8; end: 1006c53df;  */

void FUN_1006c53d8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_102b60de4);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1006c53e0; end: 1006c5463;  */

void FUN_1006c53e0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_102b60de4,param_2,FUN_1006c5464,param_2,&UNK_102b60de8,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1006c5464; end: 1006c548b;  */

void FUN_1006c5464(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1006c548c; end: 1006c549f;  */

undefined ** FUN_1006c548c(void)

{
  return &PTR_DAT_1130670f0;
}



/* Entry: 1006c54a0; end: 1006c5547;  */

void FUN_1006c54a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1105a3018;
  func_0x000107c613fc(&UNK_1105a3018,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_1006c5548;
  FUN_1000823a8(FUN_1006c5548,puVar1);
  FUN_100082720("SCViewfinderScopedServicesScopeInitializationPluginProvider",0x3b,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 1006c5548; end: 1006c554f;  */

void FUN_1006c5548(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  uVar2 = uStack_38;
  func_0x000107c61174();
  FUN_100083b20(&uStack_38);
  FUN_10058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1105a2688;
  func_0x000107c613fc(&UNK_1105a2688,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_102b5db64;
  FUN_10058fa64(&UNK_102b5db64,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1006c5550; end: 1006c5613;  */

void FUN_1006c5550(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  uVar2 = uStack_38;
  func_0x000107c61174();
  FUN_100083b20(&uStack_38);
  FUN_10058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1105a2688;
  func_0x000107c613fc(&UNK_1105a2688,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_102b5db64;
  FUN_10058fa64(&UNK_102b5db64,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1006c5614; end: 1006c5637;  */

void FUN_1006c5614(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1006c5638; end: 1006c566f;  */

void FUN_1006c5638(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100094f24();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *param_1 = lVar1;
  return;
}



/* Entry: 1006c5670; end: 1006c5677;  */

void FUN_1006c5670(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1006c5678; end: 1006c56a3;  */

void FUN_1006c5678(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1006c56a4; end: 1006c56af;  */

undefined ** FUN_1006c56a4(void)

{
  return &PTR_DAT_1130670f0;
}



/* Entry: 1006c56b0; end: 1006c578f;  */

void FUN_1006c56b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1105a3750;
  func_0x000107c613fc(&UNK_1105a3750,0x48,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  FUN_1000823a8(FUN_1006c57dc,puVar1);
  return;
}



/* Entry: 1006c5790; end: 1006c57db;  */

void FUN_1006c5790(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1006c56b0(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40));
  FUN_100082720("SelfieSettingsTalkScopeInitializationPluginPluginProvider",0x39,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006c57dc; end: 1006c57ef;  */

void FUN_1006c57dc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  FUN_100083b20(&uStack_68,uVar2,uVar1,*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_1006c58f8();
  func_0x000107c613fc();
  func_0x000107c6157c(uVar1);
  FUN_1006c5918(uStack_68,uVar1,uStack_70,uStack_78,uStack_80,uStack_88,uStack_90);
  *param_1 = uVar2;
  param_1[1] = &PTR_DAT_1105a37a0;
  return;
}



/* Entry: 1006c57f0; end: 1006c58f7;  */

void FUN_1006c57f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_1006c58f8();
  func_0x000107c613fc();
  func_0x000107c6157c(param_3);
  FUN_1006c5918(uStack_68,param_3,uStack_70,uStack_78,uStack_80,uStack_88,uStack_90);
  *param_1 = param_2;
  param_1[1] = &PTR_DAT_1105a37a0;
  return;
}



/* Entry: 1006c58f8; end: 1006c5917;  */

void FUN_1006c58f8(void)

{
  func_0x000107c61168(&PTR_PTR_112ef7da0);
  return;
}



/* Entry: 1006c5918; end: 1006c5ed7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006c5918(long *param_1,undefined8 param_2,ulong param_3,long param_4,long param_5,
                  ulong param_6,ulong param_7)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  code *pcVar14;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  uVar1 = *(ulong *)((long)param_1 + _DAT_113074ea0);
  func_0x000107c515e0();
  func_0x000107c61180();
  if (uVar1 == 0) {
LAB_1006c5cf4:
    func_0x000107c61574(param_2);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_5);
  }
  else {
    uVar2 = uVar1;
    func_0x000107c49fdc();
    func_0x000107c615e8(uVar1);
    if ((uVar2 & 1) == 0) goto LAB_1006c5cf4;
    uVar1 = param_6;
    func_0x000107c4ec80();
    func_0x000107c61180();
    uVar2 = uVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(uVar1);
    if (uVar2 != 0) {
      uVar3 = 0xd000000000000022;
      func_0x000107c5fadc(0xd000000000000022,0x800000010f0f4fb0);
      uVar1 = uVar2;
      func_0x000107c4d9c0();
      func_0x000107c61180();
      func_0x000107c61170(uVar3);
      if (uVar1 == 0) {
        func_0x000107c61574(param_2);
        func_0x000107c61170(param_1);
        func_0x000107c61170(param_5);
        func_0x000107c61170(param_3);
        func_0x000107c61170(param_4);
        func_0x000107c61170(param_6);
        func_0x000107c61170(param_7);
        goto LAB_1006c5d28;
      }
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c61168(PTR__OBJC_CLASS___NSNumber_1126ae570);
      uVar5 = uVar1;
      func_0x000107c6148c(uVar1,puVar4);
      if (uVar5 == 0) {
        func_0x000107c61574(param_2);
        func_0x000107c61170(param_1);
        func_0x000107c61170(param_5);
        func_0x000107c61170(param_3);
        func_0x000107c61170(param_4);
        func_0x000107c61170(param_6);
        func_0x000107c61170(param_7);
        func_0x000107c61170(uVar2);
        func_0x000107c615e8(uVar1);
        return;
      }
      func_0x000107c3ebcc();
      if ((int)uVar5 == 0) {
        func_0x000107c61170(uVar2);
LAB_1006c5de8:
        func_0x000107c615e8(uVar1);
        goto LAB_1006c5dec;
      }
      uVar5 = param_3;
      func_0x000107c4b2ec();
      func_0x000107c61180();
      uVar6 = uVar5;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(uVar5);
      if (uVar6 == 0) {
LAB_1006c5e70:
        func_0x000107c61170(param_1);
        func_0x000107c61170(param_5);
        func_0x000107c61574(param_2);
        func_0x000107c61170(param_3);
        func_0x000107c61170(param_4);
        func_0x000107c61170(param_6);
        func_0x000107c61170(param_7);
      }
      else {
        uVar7 = *(ulong *)(param_5 + _DAT_113081210);
        func_0x000107c51d48();
        func_0x000107c61180();
        uVar5 = uVar7;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(uVar7);
        if (uVar5 == 0) {
LAB_1006c5e6c:
          func_0x000107c615e8(uVar6);
          goto LAB_1006c5e70;
        }
        uVar7 = uVar5;
        func_0x000107c49cd8();
        if ((uVar7 & 1) != 0) {
          uVar7 = uVar5;
          func_0x000107c5ac80();
          if ((int)uVar7 != 0) {
            lVar10 = param_4;
            func_0x000107c3fa04();
            func_0x000107c61180();
            if (lVar10 == 0) {
                    /* WARNING: Does not return */
              pcVar14 = (code *)SoftwareBreakpoint(1,0x1006c5ed8);
              (*pcVar14)();
            }
            uVar3 = 0xd000000000000041;
            func_0x000107c5fadc(0xd000000000000041,0x800000010f0f4fe0);
            lVar8 = lVar10;
            func_0x000107c3ebd4();
            func_0x000107c615e8(lVar10);
            func_0x000107c61170(uVar3);
            if ((int)lVar8 != 0) {
              FUN_1000285a8(0x112ef7d18,&UNK_10db27568);
              func_0x000107c613fc();
              func_0x000107c6157c(param_2);
              puVar4 = &UNK_102b63740;
              FUN_1000bdd8c(&UNK_102b63740,param_2);
              uVar7 = uVar6;
              func_0x000107c4c18c();
              func_0x000107c61180();
              func_0x000107c6157c(puVar4);
              plVar9 = param_1;
              func_0x000102b638a8(param_1,param_7,uVar7);
              lVar10 = 0;
              func_0x000102b63c98();
              func_0x000107c613fc();
              uVar3 = 0;
              func_0x0001005f60b4();
              func_0x000107c613fc();
              FUN_1005f60d4();
              *(undefined **)(lVar10 + 0x10) = puVar4;
              *(long **)(lVar10 + 0x18) = plVar9;
              *(undefined8 *)(lVar10 + 0x20) = uVar3;
              puVar11 = &UNK_1105a3778;
              func_0x000107c613fc(&UNK_1105a3778,0x18,7);
              func_0x000107c61644(puVar11 + 0x10,lVar10);
              pcVar14 = *(code **)(*plVar9 + 0x60);
              func_0x000107c6157c(lVar10);
              puVar12 = &UNK_102b63b30;
              puVar13 = puVar11;
              (*pcVar14)(&UNK_102b63b30);
              func_0x000107c61574(puVar11);
              puVar11 = puVar12;
              func_0x000107c614f0(puVar12);
              (**(code **)(puVar13 + 0x18))(*(undefined8 *)(lVar10 + 0x20),puVar11);
              func_0x000107c61574(lVar10);
              func_0x000107c61170(param_1);
              func_0x000107c61170(param_5);
              func_0x000107c615e8(uVar5);
              func_0x000107c615e8(uVar6);
              func_0x000107c61574(param_2);
              func_0x000107c61170(param_3);
              func_0x000107c61170(param_4);
              func_0x000107c61170(param_6);
              func_0x000107c61170(param_7);
              func_0x000107c615e8(uVar1);
              func_0x000107c615e8(uVar7);
              func_0x000107c61574(puVar4);
              func_0x000107c61170(uVar2);
              func_0x000107c615e8(puVar12);
              uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
              *(long *)(unaff_x20 + 0x10) = lVar10;
              func_0x000107c61574(uVar3);
              return;
            }
            func_0x000107c61170(uVar2);
            func_0x000107c615e8(uVar1);
            func_0x000107c615e8(uVar6);
            uVar1 = uVar5;
            goto LAB_1006c5de8;
          }
          func_0x000107c615e8(uVar6);
          uVar6 = uVar5;
          goto LAB_1006c5e6c;
        }
        func_0x000107c615e8(uVar6);
        func_0x000107c615e8(uVar5);
        func_0x000107c61170(param_1);
        func_0x000107c61170(param_5);
        func_0x000107c61574(param_2);
        func_0x000107c61170(param_3);
        func_0x000107c61170(param_4);
        func_0x000107c61170(param_6);
        func_0x000107c61170(param_7);
      }
      func_0x000107c615e8(uVar1);
      goto LAB_1006c5d28;
    }
LAB_1006c5dec:
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_5);
    func_0x000107c61574(param_2);
  }
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_6);
  uVar2 = param_7;
LAB_1006c5d28:
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1006c5ed8; end: 1006c5efb;  */

void FUN_1006c5ed8(void)

{
  long unaff_x20;
  
  func_0x000107c61640(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1006c5efc; end: 1006c5f03; -[SCCameraSampleBufferMetadataProviderImpl isLiveStreaming] */

undefined1 FUN_1006c5efc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x28);
}



/* Entry: 1006c5f04; end: 1006c5f57;  */

void FUN_1006c5f04(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1006c5f58; end: 1006c5f63;  */

undefined ** FUN_1006c5f58(void)

{
  return &PTR_DAT_1130670f0;
}



/* Entry: 1006c5f64; end: 1006c5f8f;  */

void FUN_1006c5f64(void)

{
  FUN_1006b2280();
  return;
}



/* Entry: 1006c5f90; end: 1006c5f97;  */

void FUN_1006c5f90(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_102b60f04);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1006c5f98; end: 1006c601b;  */

void FUN_1006c5f98(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_102b60f04,param_2,FUN_1006c601c,param_2,&UNK_102b60f08,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1006c601c; end: 1006c6043;  */

void FUN_1006c601c(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1006c6044; end: 1006c604f;  */

void FUN_1006c6044(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_58,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28));
  FUN_100083b20(&uStack_60);
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  func_0x000100694fd0();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_60;
  *(undefined8 *)(lVar1 + 0x20) = uStack_68;
  *(undefined8 *)(lVar1 + 0x28) = uStack_70;
  FUN_1006c614c(0);
  func_0x000107c613fc();
  uVar2 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar3 = uStack_68;
  func_0x000107c61174(uStack_68);
  func_0x000107c61174(uStack_70);
  FUN_1006c616c(uStack_58,uVar2,uVar3,uStack_70);
  *(undefined8 *)(lVar1 + 0x10) = uStack_58;
  *param_1 = lVar1;
  return;
}



/* Entry: 1006c6050; end: 1006c614b;  */

void FUN_1006c6050(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  FUN_100083b20(&uStack_58);
  FUN_100083b20(&uStack_60);
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  func_0x000100694fd0();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_60;
  *(undefined8 *)(param_2 + 0x20) = uStack_68;
  *(undefined8 *)(param_2 + 0x28) = uStack_70;
  FUN_1006c614c(0);
  func_0x000107c613fc();
  uVar1 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar2 = uStack_68;
  func_0x000107c61174(uStack_68);
  func_0x000107c61174(uStack_70);
  FUN_1006c616c(uStack_58,uVar1,uVar2,uStack_70);
  *(undefined8 *)(param_2 + 0x10) = uStack_58;
  *param_1 = param_2;
  return;
}



/* Entry: 1006c614c; end: 1006c616b;  */

void FUN_1006c614c(void)

{
  func_0x000107c61168(&PTR_PTR_112ef8fe0);
  return;
}



/* Entry: 1006c616c; end: 1006c663b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1006c616c(undefined *param_1,undefined *param_2,undefined *param_3,undefined *param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  ulong *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  code *pcVar11;
  long unaff_x20;
  ulong *puVar12;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  puVar4 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar4;
  *(undefined **)(unaff_x20 + 0x18) = param_2;
  *(undefined **)(unaff_x20 + 0x20) = param_3;
  lVar3 = _DAT_113074ea0;
  puVar12 = *(ulong **)(param_1 + _DAT_113074ea0);
  ppuVar5 = (undefined **)0x0;
  func_0x0001006c6684();
  puVar6 = puVar12;
  func_0x000107c61480();
  func_0x000107c61174();
  func_0x000107c61174();
  if (puVar6 != (ulong *)0x0) {
    func_0x000107c615f0(puVar12);
    puVar4 = param_4;
    func_0x000107c3fa04();
    func_0x000107c61180();
    ppuVar5 = (undefined **)&UNK_1105a3fa8;
    func_0x000107c613fc(&UNK_1105a3fa8,0x18,7);
    ppuVar5[2] = puVar4;
    FUN_1000285a8(0x112ef8f98,&UNK_10db28320);
    func_0x000107c613fc();
    puVar4 = &UNK_102b687b4;
    FUN_1000bdd8c();
    lVar7 = *(long *)(param_3 + _DAT_11302a398);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar7 != 0) {
      func_0x000102b6b300(0);
      func_0x000107c610f8();
      puVar8 = puVar4;
      func_0x000107c6157c();
      func_0x000102b691b8();
      lVar2 = _DAT_112ef90b8;
      func_0x000107c61428(puVar8 + _DAT_112ef90b8,auStack_80,1,0);
      func_0x000107c61604(puVar8 + lVar2,puVar6);
      puVar10 = puVar8 + _DAT_112ef90c0;
      func_0x000107c61428(puVar10,auStack_98,1,0);
      *(undefined ***)(puVar10 + 8) = &PTR_DAT_1105a43e8;
      func_0x000107c61604(puVar10,puVar6);
      puVar1 = PTR__swift_isaMask_11034f488;
      (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar6) + 0x168))();
      lVar2 = _DAT_112ef90c8;
      func_0x000107c61428(puVar8 + _DAT_112ef90c8,auStack_b0,1,0);
      uVar9 = *(undefined8 *)(puVar8 + lVar2);
      *(undefined **)(puVar8 + lVar2) = puVar10;
      func_0x000107c615e8(uVar9);
      pcVar11 = *(code **)((*(ulong *)puVar1 & *puVar6) + 0x158);
      puVar10 = puVar8;
      func_0x000107c61174(puVar8);
      (*pcVar11)(puVar8);
      pcVar11 = *(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar6) + 0x1b8);
      func_0x000107c61174(puVar10);
      ppuVar5 = &PTR_DAT_1105a4218;
      (*pcVar11)(puVar8);
      func_0x000107c3d7a4(lVar7);
      func_0x000107c61170(puVar10);
      func_0x000107c615e8(lVar7);
    }
    func_0x000107c615e8(puVar12);
    func_0x000107c61574(puVar4);
    puVar12 = *(ulong **)(param_1 + lVar3);
  }
  func_0x000107c40534();
  func_0x000107c61180();
  puVar6 = puVar12;
  func_0x000107c5faec();
  func_0x000107c61170();
  FUN_1006c66a4();
  puStack_e8 = param_4;
  puVar4 = param_3;
  if (puVar6 == (ulong *)*puVar12 && ppuVar5 == (undefined **)puVar12[1]) {
    func_0x000107c6142c(ppuVar5);
  }
  else {
    func_0x000107c605b8(puVar6,ppuVar5,(ulong *)*puVar12,(undefined **)puVar12[1],0);
    func_0x000107c6142c(ppuVar5);
    if (((ulong)puVar6 & 1) == 0) goto LAB_1006c65f8;
  }
  puVar10 = *(undefined **)(param_2 + _DAT_113074f68);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (puVar10 != (undefined *)0x0) {
    puStack_e8 = puVar10;
    func_0x000107c4c238();
    func_0x000107c61180();
    func_0x000107c615e8(puVar10);
    puVar4 = puStack_e8;
    func_0x000107c5c734();
    func_0x000107c61180();
    if (puVar4 != (undefined *)0x0) {
      puVar10 = puVar4;
      func_0x000107c4c940();
      func_0x000107c61180();
      func_0x000107c615e8(puVar4);
      if (puVar10 != (undefined *)0x0) {
        puVar4 = puVar10;
        func_0x000107c5d58c();
        func_0x000107c61180();
        func_0x000107c615e8(puVar10);
        if (puVar4 != (undefined *)0x0) {
          puVar10 = &UNK_1105a3f58;
          func_0x000107c613fc(&UNK_1105a3f58,0x18,7);
          func_0x000107c61644(puVar10 + 0x10,unaff_x20);
          puStack_c0 = &UNK_102b68258;
          puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_d8 = 0x42000000;
          puStack_d0 = &UNK_102a332cc;
          puStack_c8 = &UNK_1105a3f70;
          ppuVar5 = &puStack_e0;
          puStack_b8 = puVar10;
          func_0x000107c60bc4(ppuVar5);
          func_0x000107c61574(puStack_b8);
          puVar10 = puVar4;
          func_0x000107c5c320(puVar4);
          func_0x000107c61180();
          func_0x000107c60bd0(ppuVar5);
          func_0x000107c61170(puVar4);
          uVar9 = *(undefined8 *)(unaff_x20 + 0x10);
          func_0x000107c61174(uVar9);
          func_0x000107c3e924(puVar10);
          func_0x000107c61170(puVar10);
          func_0x000107c61170(uVar9);
        }
      }
    }
    func_0x000107c61170(param_1);
    puVar4 = param_4;
    param_1 = param_2;
    param_2 = param_3;
  }
LAB_1006c65f8:
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puStack_e8);
  return unaff_x20;
}



/* Entry: 1006c663c; end: 1006c66a3;  */

void FUN_1006c663c(void)

{
  long unaff_x20;
  
  func_0x000107c61640(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1006c66a4; end: 1006c66b3;  */

undefined * FUN_1006c66a4(void)

{
  return &UNK_10dcf5400;
}



/* Entry: 1006c66b4; end: 1006c66ef;  */

void FUN_1006c66b4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1006c66f0; end: 1006c66fb;  */

undefined ** FUN_1006c66f0(void)

{
  return &PTR_DAT_1130670f0;
}



/* Entry: 1006c66fc; end: 1006c677b;  */

void FUN_1006c66fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1105a3af8;
  func_0x000107c613fc(&UNK_1105a3af8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1006c67bc,puVar1);
  return;
}



/* Entry: 1006c677c; end: 1006c67bb;  */

void FUN_1006c677c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1006c66fc(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100082720("ViewfinderScopeGraphBridgeScopeInitializationPluginProvider",0x3b,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006c67bc; end: 1006c67c3;  */

void FUN_1006c67bc(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112ef8620,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112ef8620,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1105a3d10;
  func_0x000107c613fc(&UNK_1105a3d10,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_102b65658;
  FUN_10058fa64(&UNK_102b65658,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1006c67c4; end: 1006c68bb;  */

void FUN_1006c67c4(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112ef8620,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112ef8620,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1105a3d10;
  func_0x000107c613fc(&UNK_1105a3d10,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_102b65658;
  FUN_10058fa64(&UNK_102b65658,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1006c68bc; end: 1006c68df;  */

void FUN_1006c68bc(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1006c68e0; end: 1006c6b47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006c68e0(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_78;
  long lStack_70;
  
  lVar2 = param_2;
  FUN_10069ff30();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112ef8630) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112ef8638) = param_3;
  *(undefined8 *)(lVar3 + _DAT_112ef8640) = param_4;
  *(undefined8 *)(lVar3 + _DAT_112ef8648) = param_5;
  *(undefined8 *)(lVar3 + _DAT_112ef8650) = param_6;
  *(undefined8 *)(lVar3 + _DAT_112ef8658) = param_7;
  *(undefined8 *)(lVar3 + _DAT_112ef8660) = param_8;
  *(undefined8 *)(lVar3 + _DAT_112ef8668) = param_9;
  *(undefined8 *)(lVar3 + _DAT_112ef8670) = param_10;
  *(undefined8 *)(lVar3 + _DAT_112ef8678) = param_11;
  *(undefined8 *)(lVar3 + _DAT_112ef8680) = param_12;
  *(undefined8 *)(lVar3 + _DAT_112ef8688) = param_13;
  *(undefined8 *)(lVar3 + _DAT_112ef8690) = param_14;
  *(undefined8 *)(lVar3 + _DAT_112ef8698) = param_15;
  *(undefined8 *)(lVar3 + _DAT_112ef86a0) = param_16;
  *(undefined8 *)(lVar3 + _DAT_112ef86a8) = param_17;
  *(undefined8 *)(lVar3 + _DAT_112ef86b0) = param_18;
  *(undefined8 *)(lVar3 + _DAT_112ef86b8) = param_19;
  *(undefined8 *)(lVar3 + _DAT_112ef86c0) = param_20;
  puVar1 = PTR_s_init_1125d9248;
  lStack_78 = lVar3;
  lStack_70 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_20);
  plVar4 = &lStack_78;
  func_0x000107c61154(plVar4,puVar1);
  *param_1 = (long)plVar4;
  return;
}



/* Entry: 1006c6b48; end: 1006c6c73;  */

void FUN_1006c6b48(void)

{
  long unaff_x20;
  
  FUN_1006c68e0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0));
  return;
}



/* Entry: 1006c6c74; end: 1006c6c77;  */

void FUN_1006c6c74(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1006c6c78; end: 1006c6cf7;  */

void FUN_1006c6c78(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1006c6cf8; end: 1006c6d17; -[SCCameraLegacyDataSource start] */

void FUN_1006c6cf8(long param_1,undefined8 param_2)

{
  func_0x000107c4d654(*(undefined8 *)(param_1 + 0x10),param_2,
                      &PTR____CFConstantStringClassReference_110e45b58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1006c6d18; end: 1006c6da7; -[SCViewfinderDataSourceTokenHandlerImpl newTokenWithContext:] */

undefined * FUN_1006c6d18(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c611ec(param_1 + 0x20);
  puVar1 = PTR_PTR_1126c9018;
  func_0x000107c610f4(PTR_PTR_1126c9018);
  func_0x000107c46d74();
  *(undefined1 *)(param_1 + 0x24) = 0;
  func_0x000107c3d798(*(undefined8 *)(param_1 + 0x10),param_2,puVar1);
  func_0x000107c611f0(param_1 + 0x20);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 1006c6da8; end: 1006c6ea7; -[SCViewfinderDataSourceTokenImpl initWithIdentifier:performer:delegate:] */

undefined8 *
FUN_1006c6da8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined1 auStack_38 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61144(auStack_38,param_5);
  puStack_40 = PTR_PTR_1126f0878;
  puVar1 = &uStack_48;
  uStack_48 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar4 = puVar1[1];
    puVar1[1] = uVar2;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    func_0x000107c61170(uVar2);
    puVar3 = auStack_38;
    func_0x000107c61148(puVar3);
    func_0x000107c611a0(puVar1 + 3,puVar3);
    func_0x000107c61170(puVar3);
    *(undefined1 *)((long)puVar1 + 0x24) = 1;
    *(undefined4 *)(puVar1 + 4) = 0;
  }
  func_0x000107c61120(auStack_38);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 1006c6ea8; end: 1006c6ebb;  */

void FUN_1006c6ea8(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1006c6ebc; end: 1006c6f03;  */

void FUN_1006c6ebc(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c615f0(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_2);
  return;
}



/* Entry: 1006c6f04; end: 1006c6f0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006c6f04(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  code *pcVar7;
  undefined1 auStack_68 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar2 + 0x10,auStack_68,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    if (param_1 == 0) {
      func_0x000107c61170();
    }
    else {
      uVar3 = uVar4;
      func_0x000107c614f0(uVar4);
      func_0x000107c615f0(param_1);
      lVar5 = param_1;
      FUN_1006c700c(uVar4,param_1,uVar6,uVar1,uVar3);
      func_0x000107c614f0();
      uVar6 = *(undefined8 *)(lVar2 + _DAT_112ef40d8);
      pcVar7 = *(code **)(lVar5 + 0x10);
      func_0x000107c6157c(uVar6);
      (*pcVar7)();
      func_0x000107c61170(lVar2);
      func_0x000107c615e8(param_1);
      func_0x000107c615e8(uVar4);
      func_0x000107c61574(uVar6);
    }
  }
  return;
}



/* Entry: 1006c6f10; end: 1006c700b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006c6f10(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    if (param_1 == 0) {
      func_0x000107c61170();
    }
    else {
      uVar2 = param_3;
      func_0x000107c614f0(param_3);
      func_0x000107c615f0(param_1);
      lVar1 = param_1;
      FUN_1006c700c(param_3,param_1,param_4,param_5,uVar2);
      func_0x000107c614f0();
      uVar2 = *(undefined8 *)(param_2 + _DAT_112ef40d8);
      pcVar3 = *(code **)(lVar1 + 0x10);
      func_0x000107c6157c(uVar2);
      (*pcVar3)();
      func_0x000107c61170(param_2);
      func_0x000107c615e8(param_1);
      func_0x000107c615e8(param_3);
      func_0x000107c61574(uVar2);
    }
  }
  return;
}



/* Entry: 1006c700c; end: 1006c715b;  */

undefined1  [16] FUN_1006c700c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  code *pcVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  undefined *puStack_48;
  
  FUN_1000285a8(0x112ef4128,&UNK_10db22d78);
  func_0x000107c5dd88(param_2);
  func_0x000107c61180();
  uVar1 = param_2;
  func_0x0001000b637c();
  func_0x000107c61170(param_2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c45a48();
  ppuVar3 = &puStack_48;
  puStack_48 = puVar2;
  FUN_1006c71a4();
  func_0x000107c61170(puVar2);
  ppuVar4 = ppuVar3;
  FUN_1006c733c();
  func_0x000107c61574(uVar1);
  func_0x000107c61574(ppuVar3);
  puVar2 = &UNK_11059e8e0;
  func_0x000107c613fc(&UNK_11059e8e0,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  puVar5 = &UNK_11059e908;
  func_0x000107c613fc(&UNK_11059e908,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = 0x1006c7e9c;
  *(undefined **)(puVar5 + 0x18) = puVar2;
  pcVar7 = *(code **)(*ppuVar4 + 0x60);
  func_0x000107c615f0(param_1);
  pcVar6 = FUN_1006c7ee8;
  puVar2 = puVar5;
  (*pcVar7)(FUN_1006c7ee8,puVar5);
  func_0x000107c61574(ppuVar4);
  func_0x000107c61574(puVar5);
  auVar8._8_8_ = puVar2;
  auVar8._0_8_ = pcVar6;
  return auVar8;
}



/* Entry: 1006c715c; end: 1006c71a3;  */

void FUN_1006c715c(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1006c71a4; end: 1006c724f;  */

long * FUN_1006c71a4(undefined8 param_1)

{
  long extraout_x8;
  long *unaff_x20;
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(*unaff_x20 + 0x50);
  lVar2 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar2 + 0x40));
  FUN_1006c7250(0,lVar1);
  (**(code **)(lVar2 + 0x10))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_1,lVar1);
  FUN_1006c72d0();
  func_0x000107c6157c();
  return unaff_x20;
}



/* Entry: 1006c7250; end: 1006c725f;  */

void FUN_1006c7250(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e821038);
  return;
}



/* Entry: 1006c7260; end: 1006c72cf;  */

void FUN_1006c7260(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lStack_28;
  
  uVar2 = *(ulong *)(param_1 + 0xa8);
  lVar1 = 0x13f;
  func_0x000107c6143c();
  if (uVar2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    func_0x000107c61524(param_1,0,1,&lStack_28,param_1 + 0xb0);
  }
  return;
}



/* Entry: 1006c72d0; end: 1006c732f;  */

void FUN_1006c72d0(undefined8 param_1,undefined8 param_2)

{
  long *unaff_x20;
  
  func_0x000107c613fc();
  (**(code **)(*(long *)(*(long *)(*unaff_x20 + 0xa8) + -8) + 0x20))
            ((long)unaff_x20 + *(long *)(*unaff_x20 + 0xb0),param_2);
  FUN_1000c0ea8(param_1);
  return;
}



/* Entry: 1006c7330; end: 1006c733b;  */

void FUN_1006c7330(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e820004);
  return;
}



/* Entry: 1006c733c; end: 1006c73ab;  */

long FUN_1006c733c(long *param_1)

{
  long lVar1;
  long *unaff_x20;
  
  lVar1 = 0;
  FUN_1006c7330(0,*(undefined8 *)(*unaff_x20 + 0x50),*(undefined8 *)(*param_1 + 0x50));
  func_0x000107c613fc();
  *(long **)(lVar1 + 0x10) = unaff_x20;
  *(long **)(lVar1 + 0x18) = param_1;
  FUN_100087bcc();
  func_0x000107c6157c();
  func_0x000107c6157c(param_1);
  return lVar1;
}



/* Entry: 1006c73ac; end: 1006c73af;  */

void FUN_1006c73ac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_11034f220)();
  return;
}



/* Entry: 1006c73b0; end: 1006c73ef;  */

void FUN_1006c73b0(long param_1)

{
  undefined *puStack_18;
  
  puStack_18 = &UNK_10dd3aa98;
  func_0x000107c61524(param_1,0,1,&puStack_18,param_1 + 0x98);
  return;
}



/* Entry: 1006c73f0; end: 1006c73fb;  */

void FUN_1006c73f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e8201f0);
  return;
}



/* Entry: 1006c73fc; end: 1006c74af;  */

undefined1  [16] FUN_1006c73fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *unaff_x20;
  undefined1 auVar4 [16];
  
  FUN_1006c73f0(0,*(undefined8 *)(*unaff_x20 + 0x88),*(undefined8 *)(*unaff_x20 + 0x90));
  lVar1 = unaff_x20[2];
  lVar2 = unaff_x20[3];
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(lVar2);
  FUN_1000b693c(param_2,param_3);
  lVar3 = lVar1;
  FUN_1006c7554(lVar1,lVar2,param_2);
  func_0x000107c61574(lVar1);
  func_0x000107c61574(lVar2);
  func_0x000107c61574(param_2);
  auVar4._8_8_ = &PTR_DAT_1107a7ad8;
  auVar4._0_8_ = lVar3;
  return auVar4;
}



/* Entry: 1006c74b0; end: 1006c74b3;  */

void FUN_1006c74b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_11034f220)();
  return;
}



/* Entry: 1006c74b4; end: 1006c7553;  */

void FUN_1006c74b4(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puVar2 = &uStack_70;
  puStack_48 = &UNK_10dd3ac28;
  uStack_68 = *(undefined8 *)(param_1 + 0x58);
  uStack_70 = *(undefined8 *)(param_1 + 0x50);
  puStack_60 = PTR___ss5NeverON_11034ee88;
  puStack_58 = PTR___ss5NeverON_11034ee88;
  lVar1 = 0x13f;
  FUN_10061efb8();
  if (puVar2 < (undefined1 *)0x40) {
    lStack_40 = *(long *)(lVar1 + -8) + 0x40;
    puStack_38 = PTR___sBoWV_11034d678 + 0x40;
    puStack_30 = puStack_38;
    puStack_28 = puStack_38;
    func_0x000107c61524(param_1,0,5,&puStack_48,param_1 + 0x60);
  }
  return;
}



/* Entry: 1006c7554; end: 1006c75a3;  */

void FUN_1006c7554(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c613fc();
  FUN_1006c75a4(param_1,param_2,param_3);
  return;
}



/* Entry: 1006c75a4; end: 1006c773f;  */

void FUN_1006c75a4(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *unaff_x20;
  long lVar8;
  long lVar9;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar8 = *unaff_x20;
  uVar1 = *(undefined8 *)(lVar8 + 0x50);
  uVar2 = *(undefined8 *)(lVar8 + 0x58);
  FUN_10061f1f8((long)unaff_x20 + *(long *)(lVar8 + 0x68),uVar1,uVar2,PTR___ss5NeverON_11034ee88,
                PTR___ss5NeverON_11034ee88);
  lVar9 = *(long *)(*unaff_x20 + 0x70);
  lVar3 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  uVar4 = 0;
  FUN_10006a340();
  uVar5 = uVar4;
  func_0x000107c613fc();
  FUN_10006a360();
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(lVar3 + 0x10) = uVar5;
  *(undefined **)(lVar3 + 0x18) = puVar6;
  *(long *)((long)unaff_x20 + lVar9) = lVar3;
  lVar3 = *(long *)(*unaff_x20 + 0x78);
  func_0x000107c613fc(uVar4,0x18,7);
  FUN_10006a360();
  *(undefined8 *)((long)unaff_x20 + lVar3) = uVar4;
  unaff_x20[2] = param_1;
  unaff_x20[3] = param_2;
  *(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x80)) = param_3;
  puVar6 = &UNK_10dd3ac98;
  uStack_70 = uVar1;
  uStack_68 = uVar2;
  func_0x000107c614e0(&UNK_10dd3ac98,&uStack_70);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  puVar7 = &DAT_10dd3ac78;
  func_0x000107c61520(&DAT_10dd3ac78,lVar8);
  FUN_100620530(param_1,puVar6,lVar8,puVar7);
  func_0x000107c61574(puVar6);
  puVar6 = &UNK_10dd3acb8;
  uStack_70 = uVar1;
  uStack_68 = uVar2;
  func_0x000107c614e0(&UNK_10dd3acb8,&uStack_70);
  FUN_100620530(param_2,puVar6,lVar8,puVar7);
  func_0x000107c61574(puVar6);
  return;
}



/* Entry: 1006c7740; end: 1006c774f;  */

void FUN_1006c7740(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)
            (*(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x78)));
  return;
}



/* Entry: 1006c7750; end: 1006c778f;  */

undefined1  [16] FUN_1006c7750(undefined8 param_1)

{
  long lVar1;
  long *unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = *(long *)(*unaff_x20 + 0x68);
  func_0x000107c61428((long)unaff_x20 + lVar1,param_1,0x21,0);
  auVar2._8_8_ = (long)unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_1006c7790;
  return auVar2;
}



/* Entry: 1006c7790; end: 1006c7797;  */

void FUN_1006c7790(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 1006c7798; end: 1006c7c87;  */

void FUN_1006c7798(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long *unaff_x20;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  lVar6 = *unaff_x20;
  lVar4 = *(long *)(lVar6 + 0x50);
  lVar7 = *(long *)(lVar6 + 0x58);
  lVar2 = 0xff;
  func_0x000107c61510(0xff,lVar4,lVar7,0,0);
  lVar3 = 0;
  func_0x000107c60188(0,lVar2);
  lStack_a0 = *(long *)(lVar3 + -8);
  lStack_98 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_a0 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar9 = (long)&lStack_a0 - extraout_x8;
  puStack_70 = PTR___ss5NeverON_11034ee88;
  puStack_68 = PTR___ss5NeverON_11034ee88;
  lVar3 = 0;
  lStack_90 = lVar4;
  lStack_88 = lVar7;
  lStack_80 = lVar4;
  lStack_78 = lVar7;
  FUN_10061efb8(0,&lStack_80);
  lVar8 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = lVar9 - extraout_x8_00;
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar11 = lVar4 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar11 - extraout_x12;
  lVar7 = *(long *)(lVar6 + 0x68);
  func_0x000107c61428((long)unaff_x20 + lVar7,&lStack_80,0,0);
  (**(code **)(lVar8 + 0x10))(lVar4,(long)unaff_x20 + lVar7,lVar3);
  func_0x0001006c79bc(lVar9,lVar3);
  (**(code **)(lVar8 + 8))(lVar4,lVar3);
  lVar4 = lVar9;
  (**(code **)(lVar10 + 0x30))(lVar9,1,lVar2);
  if ((int)lVar4 == 1) {
    (**(code **)(lStack_a0 + 8))(lVar9,lStack_98);
  }
  else {
    (**(code **)(lVar10 + 0x20))(lVar12,lVar9,lVar2);
    iVar1 = *(int *)(lVar2 + 0x30);
    (**(code **)(*(long *)(lStack_90 + -8) + 0x10))(lVar11,lVar12);
    (**(code **)(*(long *)(lStack_88 + -8) + 0x10))(lVar11 + iVar1,lVar12 + iVar1);
    func_0x000100087f6c(lVar11);
    pcVar5 = *(code **)(lVar10 + 8);
    (*pcVar5)(lVar11,lVar2);
    (*pcVar5)(lVar12,lVar2);
  }
  return;
}



/* Entry: 1006c7c88; end: 1006c7ca3;  */

void FUN_1006c7c88(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)
            (*(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x70)));
  return;
}



/* Entry: 1006c7ca4; end: 1006c7d77;  */

undefined1  [16] FUN_1006c7ca4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long *unaff_x20;
  code *pcVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  undefined8 uStack_48;
  
  plVar6 = (long *)unaff_x20[2];
  uVar1 = 0;
  func_0x0001006c7c98(0,*(undefined8 *)(*unaff_x20 + 0xa8));
  FUN_1000b693c(param_2,param_3);
  uVar2 = param_2;
  FUN_1006c7df4();
  func_0x000107c61574(param_2);
  pcVar5 = *(code **)(*plVar6 + 0x58);
  puVar3 = &DAT_10dd3bdd0;
  uStack_48 = uVar2;
  func_0x000107c61520(&DAT_10dd3bdd0,uVar1);
  puVar4 = &uStack_48;
  (*pcVar5)(puVar4,uVar1,puVar3);
  func_0x000107c61574(uVar2);
  auVar7._8_8_ = uVar1;
  auVar7._0_8_ = puVar4;
  return auVar7;
}



/* Entry: 1006c7d78; end: 1006c7d7b;  */

void FUN_1006c7d78(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_11034f220)();
  return;
}



/* Entry: 1006c7d7c; end: 1006c7df3;  */

void FUN_1006c7d7c(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  func_0x000107c5eec8();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = PTR___sBoWV_11034d678 + 0x40;
    func_0x000107c61524(param_1,0,2,&lStack_30,param_1 + 0x58);
  }
  return;
}



/* Entry: 1006c7df4; end: 1006c7ee7;  */

void FUN_1006c7df4(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c613fc();
  func_0x0001006c7e3c(param_1,param_2);
  return;
}



/* Entry: 1006c7ee8; end: 1006c7f0f;  */

void FUN_1006c7ee8(undefined8 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1,param_1[1]);
  return;
}



/* Entry: 1006c7f10; end: 1006c7f17; -[SCManagedVideoStreamer setViewfinderProvider:] */

void FUN_1006c7f10(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 1006c7f18; end: 1006c7f63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006c7f18(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  long lVar3;
  
  lVar1 = _DAT_1138154b0;
  lVar3 = *unaff_x20;
  lVar2 = 0;
  func_0x000107c5eec8();
                    /* WARNING: Could not recover jumptable at 0x0001006c7f60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,lVar3 + lVar1,lVar2);
  return;
}



/* Entry: 1006c7f64; end: 1006c7f97;  */

long FUN_1006c7f64(long param_1)

{
  undefined8 uVar1;
  
  FUN_1000b6d7c();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c61574(*(undefined8 *)(param_1 + 0x18));
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 1006c7f98; end: 1006c7fb3;  */

void FUN_1006c7f98(undefined8 param_1)

{
  FUN_1006c7f64();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)(param_1,0x20,7);
  return;
}



/* Entry: 1006c7fb4; end: 1006c7fbf;  */

void FUN_1006c7fb4(undefined8 param_1)

{
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  
  uStack_50 = param_1;
  FUN_100087bd4(FUN_1000c99e4,auStack_60,PTR___sytN_11034f1b0 + 8);
  return;
}



/* Entry: 1006c7fc0; end: 1006c8083;  */

void FUN_1006c7fc0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1006c8084; end: 1006c810f; -[_TtC39ConditionalCameraServicesImplementation39CameraUIViewfinderServiceImplementation opaqueLensViewfinderScopedServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006c8084(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uStack_48;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ef40d0);
  lVar1 = ((undefined8 *)(param_1 + _DAT_112ef40d0))[1];
  func_0x000107c614f0(uVar2);
  pcVar3 = *(code **)(lVar1 + 0x10);
  func_0x000107c61174(param_1);
  (*pcVar3)(uVar2,lVar1);
  FUN_100083b20(&uStack_48);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_48);
  return;
}



/* Entry: 1006c8110; end: 1006c812f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006c8110(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(*(undefined8 *)(unaff_x20 + _DAT_112ef6e58));
  return;
}



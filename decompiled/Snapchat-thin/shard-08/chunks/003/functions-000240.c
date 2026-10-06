/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106026cc0; end: 106026ccf; -[SCCreatorsProfileCollectionViewCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106026cc0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273d1ac);
}



/* Entry: 106026cd0; end: 106026cdf; -[SCCreatorsProfileCollectionViewCell actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106026cd0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273d1b0);
}



/* Entry: 106026ce0; end: 106026d1f; -[SCCreatorsProfileCollectionViewCell setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106026ce0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273d1b0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106026d20; end: 106026d5f; -[SCCreatorsProfileCollectionViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106026d20(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273d1b0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273d1ac,0);
  return;
}



/* Entry: 106026d60; end: 106026d77;  */

void FUN_106026d60(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e39018;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e39018,
                      &PTR____CFConstantStringClassReference_110e39038,0);
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



/* Entry: 106026d78; end: 106026e2b; -[SCCreatorsCollectionViewCellViewModel initWithSubtitleText:actionModel:shouldShowNewBadge:] */

undefined1 *
FUN_106026d78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ef258;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106026e2c; end: 106026e4f; -[SCCreatorsCollectionViewCellViewModel copyWithZone:] */

undefined8 FUN_106026e2c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106026e50; end: 106026ec7; -[SCCreatorsCollectionViewCellViewModel hash] */

undefined8 * FUN_106026e50(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  uStack_38 = uVar2;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_106026f58:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_106026f64;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(char *)((long)puVar3 + 8) == param_3[8])) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
        if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_106026f64;
        }
        goto LAB_106026f58;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_106026f64:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 106026ec8; end: 106026f7f; -[SCCreatorsCollectionViewCellViewModel isEqual:] */

long FUN_106026ec8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106026f58:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106026f64;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_106026f64;
        }
        goto LAB_106026f58;
      }
    }
    lVar3 = 0;
  }
LAB_106026f64:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106026f80; end: 106026f87; -[SCCreatorsCollectionViewCellViewModel subtitleText] */

undefined8 FUN_106026f80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106026f88; end: 106026f8f; -[SCCreatorsCollectionViewCellViewModel actionModel] */

undefined8 FUN_106026f88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106026f90; end: 106026f97; -[SCCreatorsCollectionViewCellViewModel shouldShowNewBadge] */

undefined1 FUN_106026f90(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106026f98; end: 106026fc7; -[SCCreatorsCollectionViewCellViewModel .cxx_destruct] */

void FUN_106026f98(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106026fc8; end: 10602703b; -[SCDiscoverFeedActionHandlerProfilePlugin initWithUserSession:] */

undefined1 * FUN_106026fc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ef260;
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



/* Entry: 10602703c; end: 106027043; -[SCDiscoverFeedActionHandlerProfilePlugin order] */

undefined8 FUN_10602703c(void)

{
  return 0x1b;
}



/* Entry: 106027044; end: 10602704b; -[SCDiscoverFeedActionHandlerProfilePlugin section] */

undefined8 FUN_106027044(void)

{
  return 0;
}



/* Entry: 10602704c; end: 106027063; -[SCDiscoverFeedActionHandlerProfilePlugin lifecycleAnnouncer] */

void FUN_10602704c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106027064; end: 10602706f; -[SCDiscoverFeedActionHandlerProfilePlugin setLifecycleAnnouncer:] */

void FUN_106027064(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 106027070; end: 106027077; -[SCDiscoverFeedActionHandlerProfilePlugin actionHandler] */

undefined8 FUN_106027070(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106027078; end: 1060270a7; -[SCDiscoverFeedActionHandlerProfilePlugin setActionHandler:] */

void FUN_106027078(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1060270a8; end: 1060270df; -[SCDiscoverFeedActionHandlerProfilePlugin .cxx_destruct] */

void FUN_1060270a8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1060270e0; end: 1060278a7; -[SCDiscoverFeedActionHandlerProfileSectionCreator initWithActiveUserSessionScope:userFeatureLaunchServices:storiesServices:readReceiptService:discoverFeedExtensionServices:discoverFeedDataServices:discoverFeedLoggingServices:snapchatterServices:discoverFeedRankingServices:grapheneServices:adConfigService:storiesNetworkingServices:discoverFeedQueryServices:snapTokenServices:bitmojiFetchServices:bitmojiFriendInfoServices:circumstanceEngineServices:discoverFeedSectionService:crashServices:promotedStoryDataServices:userInfoServices:userLocationServices:networkImageServices:imageFetchingServices:userSegmentsServices:dynamicImageSourceProviderServices:bloopsServices:storiesExperimentServices:networkConnectivityMonitorServices:rtusServices:userUnifiedGRPCServices:contentProductPlaybackScopeServices:dpaConfigProviderService:adRenderDataParserServices:notificationServices:customAppThemeServices:storiesMetricServices:spotlightScopeServices:operaSessionScopeExposer:contentProductPlaybackExposer:] */

undefined8 *
FUN_1060270e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
             undefined8 param_41,undefined8 param_42)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_29);
  _objc_retain(param_30);
  _objc_retain(param_31);
  _objc_retain(param_32);
  _objc_retain(param_33);
  _objc_retain(param_34);
  _objc_retain(param_35);
  _objc_retain(param_36);
  _objc_retain(param_37);
  _objc_retain(param_38);
  _objc_retain(param_39);
  _objc_retain(param_40);
  _objc_retain(param_41);
  _objc_retain(param_42);
  puStack_70 = PTR_PTR_1126ef268;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
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
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_24;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_25;
    _objc_release(uVar2);
    _objc_retain(param_26);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_26;
    _objc_release(uVar2);
    _objc_retain(param_27);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_27;
    _objc_release(uVar2);
    _objc_retain(param_28);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_28;
    _objc_release(uVar2);
    _objc_retain(param_29);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_29;
    _objc_release(uVar2);
    _objc_retain(param_30);
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = param_30;
    _objc_release(uVar2);
    _objc_retain(param_31);
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = param_31;
    _objc_release(uVar2);
    _objc_retain(param_32);
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = param_32;
    _objc_release(uVar2);
    _objc_retain(param_33);
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = param_33;
    _objc_release(uVar2);
    _objc_retain(param_34);
    uVar2 = puVar1[0x20];
    puVar1[0x20] = param_34;
    _objc_release(uVar2);
    _objc_retain(param_35);
    uVar2 = puVar1[0x21];
    puVar1[0x21] = param_35;
    _objc_release(uVar2);
    _objc_retain(param_36);
    uVar2 = puVar1[0x22];
    puVar1[0x22] = param_36;
    _objc_release(uVar2);
    _objc_retain(param_37);
    uVar2 = puVar1[0x23];
    puVar1[0x23] = param_37;
    _objc_release(uVar2);
    _objc_retain(param_38);
    uVar2 = puVar1[0x24];
    puVar1[0x24] = param_38;
    _objc_release(uVar2);
    _objc_retain(param_39);
    uVar2 = puVar1[0x25];
    puVar1[0x25] = param_39;
    _objc_release(uVar2);
    _objc_retain(param_40);
    uVar2 = puVar1[0x26];
    puVar1[0x26] = param_40;
    _objc_release(uVar2);
    _objc_retain(param_41);
    uVar2 = puVar1[0x27];
    puVar1[0x27] = param_41;
    _objc_release(uVar2);
    _objc_retain(param_42);
    uVar2 = puVar1[0x28];
    puVar1[0x28] = param_42;
    _objc_release(uVar2);
  }
  _objc_release(param_42);
  _objc_release(param_41);
  _objc_release(param_40);
  _objc_release(param_39);
  _objc_release(param_38);
  _objc_release(param_37);
  _objc_release(param_36);
  _objc_release(param_35);
  _objc_release(param_34);
  _objc_release(param_33);
  _objc_release(param_32);
  _objc_release(param_31);
  _objc_release(param_30);
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
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
  return puVar1;
}



/* Entry: 1060278a8; end: 10602836f; -[SCDiscoverFeedActionHandlerProfileSectionCreator makeSectionProvider] */

void FUN_1060278a8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined *puVar31;
  undefined *puVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined *puVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined *puVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001005929c0();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    puVar41 = (undefined *)0x0;
  }
  else {
    puVar41 = PTR_PTR_1126c72c0;
    _objc_alloc();
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c293740(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05ce40(puVar41,param_2,uVar2);
    _objc_release(uVar2);
    uVar1 = *(undefined8 *)(param_1 + 0x88);
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b1170;
    _objc_alloc();
    uVar2 = *(undefined8 *)(param_1 + 0x98);
    func_0x00010bf53fa0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c006480(puVar3,param_2,uVar2);
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126c2160;
    _objc_alloc();
    uVar5 = *(undefined8 *)(param_1 + 8);
    func_0x00010c293740();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x70);
    func_0x00010c273160();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c155c20();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c2587e0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c258580();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c08d900();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c08d460();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c08d400();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c08d440();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c08d320();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)(param_1 + 0x68);
    func_0x00010c29d900();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(param_1 + 0x68);
    func_0x00010bf40000();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar16;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar39 = *(undefined8 *)(param_1 + 0x138);
    uVar17 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010bef2520();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c08d4a0();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = *(undefined8 *)(param_1 + 0xa0);
    func_0x00010c2527c0();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = *(undefined8 *)(param_1 + 0xa0);
    func_0x00010c0b3760();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c244d60();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010bfcdfa0();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = *(undefined8 *)(param_1 + 0x78);
    func_0x00010bf13100();
    _objc_retainAutoreleasedReturnValue();
    uVar24 = *(undefined8 *)(param_1 + 0x80);
    func_0x00010bfb7c20();
    _objc_retainAutoreleasedReturnValue();
    uVar25 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c244ac0();
    _objc_retainAutoreleasedReturnValue();
    uVar26 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010c0cef00();
    _objc_retainAutoreleasedReturnValue();
    uVar27 = *(undefined8 *)(param_1 + 200);
    func_0x00010c293640();
    _objc_retainAutoreleasedReturnValue();
    uVar40 = *(undefined8 *)(param_1 + 0x130);
    uVar42 = *(undefined8 *)(param_1 + 0x140);
    uVar43 = *(undefined8 *)(param_1 + 0x100);
    uVar28 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c11a360();
    _objc_retainAutoreleasedReturnValue();
    uVar29 = *(undefined8 *)(param_1 + 0xe0);
    func_0x00010c258480();
    _objc_retainAutoreleasedReturnValue();
    uVar30 = *(undefined8 *)(param_1 + 0xe8);
    func_0x00010c0d79a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05e580(puVar4,param_2,uVar5,uVar6,uVar7,0,uVar8,uVar9,uVar10,0,0,uVar11,uVar12,
                        uVar13,0x14,uVar14,uVar15,uVar2,uVar39,0,uVar17,0,uVar1,uVar18,uVar19,uVar20
                        ,0,uVar21,uVar22,uVar23,uVar24,uVar25,uVar26,uVar27,1,puVar3,0,0,uVar40,
                        uVar42,uVar43,uVar28,uVar29,uVar30,0,0,0,0,0,0);
    _objc_release(uVar30);
    _objc_release(uVar29);
    _objc_release(uVar28);
    _objc_release(uVar27);
    _objc_release(uVar26);
    _objc_release(uVar25);
    _objc_release(uVar24);
    _objc_release(uVar23);
    _objc_release(uVar22);
    _objc_release(uVar21);
    _objc_release(uVar20);
    _objc_release(uVar19);
    _objc_release(uVar18);
    _objc_release(uVar17);
    _objc_release(uVar2);
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    puVar31 = PTR_PTR_1126ae720;
    func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_110908d18);
    _objc_retainAutoreleasedReturnValue();
    puVar32 = PTR_PTR_1126ae720;
    uVar5 = *(undefined8 *)(param_1 + 0x98);
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_10602837c;
    puStack_78 = &UNK_1108d4750;
    uStack_70 = uVar5;
    _objc_retain();
    func_0x00010bf11fe0(puVar32,param_2,&puStack_90);
    _objc_retainAutoreleasedReturnValue();
    puVar38 = PTR_PTR_1126c72c8;
    _objc_alloc();
    uVar6 = *(undefined8 *)(param_1 + 8);
    func_0x00010c293740();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010c0cef00();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x70);
    func_0x00010c273160();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c08d900();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c08d4a0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c08d400();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c08d440();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c244d60();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c155c20();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)(param_1 + 0x68);
    func_0x00010c107680();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(param_1 + 0x78);
    func_0x00010bf13100();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(param_1 + 0x80);
    func_0x00010bfb7c20();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c08d920();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010bfcdfa0();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010bef2520();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = *(undefined8 *)(param_1 + 0x90);
    func_0x00010c08d500();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = *(undefined8 *)(param_1 + 0xa8);
    func_0x00010c127bc0();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = *(undefined8 *)(param_1 + 0xa8);
    func_0x00010bf1a840();
    _objc_retainAutoreleasedReturnValue();
    uVar24 = *(undefined8 *)(param_1 + 0xa0);
    func_0x00010c0b3760();
    _objc_retainAutoreleasedReturnValue();
    uVar25 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c244ac0();
    _objc_retainAutoreleasedReturnValue();
    uVar26 = *(undefined8 *)(param_1 + 0xb8);
    func_0x00010bfe7580();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar26;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar27 = *(undefined8 *)(param_1 + 0xd0);
    func_0x00010bf8b8e0();
    _objc_retainAutoreleasedReturnValue();
    uVar28 = *(undefined8 *)(param_1 + 0xc0);
    func_0x00010bfe7760();
    _objc_retainAutoreleasedReturnValue();
    uVar29 = *(undefined8 *)(param_1 + 0xe0);
    func_0x00010c258480();
    _objc_retainAutoreleasedReturnValue();
    uVar30 = *(undefined8 *)(param_1 + 0x78);
    func_0x00010bfe7720();
    _objc_retainAutoreleasedReturnValue();
    uVar39 = *(undefined8 *)(param_1 + 0xe8);
    func_0x00010c0d79a0();
    _objc_retainAutoreleasedReturnValue();
    uVar40 = *(undefined8 *)(param_1 + 0xf0);
    func_0x00010bf3cb80();
    _objc_retainAutoreleasedReturnValue();
    uVar42 = *(undefined8 *)(param_1 + 0xf8);
    func_0x00010bfcfa00();
    _objc_retainAutoreleasedReturnValue();
    uVar43 = *(undefined8 *)(param_1 + 0x108);
    func_0x00010c14c1e0();
    _objc_retainAutoreleasedReturnValue();
    uVar33 = *(undefined8 *)(param_1 + 0x110);
    func_0x00010c112f80();
    _objc_retainAutoreleasedReturnValue();
    uVar34 = *(undefined8 *)(param_1 + 0x118);
    func_0x00010c0dc640();
    _objc_retainAutoreleasedReturnValue();
    uVar35 = *(undefined8 *)(param_1 + 0x120);
    func_0x00010bf611e0();
    _objc_retainAutoreleasedReturnValue();
    uVar36 = *(undefined8 *)(param_1 + 0x128);
    func_0x00010bfcdf20();
    _objc_retainAutoreleasedReturnValue();
    uVar37 = *(undefined8 *)(param_1 + 0xb0);
    func_0x00010c09f2a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05d8c0(puVar38,param_2,uVar6,uVar7,uVar1,uVar8,uVar9,uVar10,uVar11,uVar12,puVar4,
                        uVar13,uVar14,uVar15,uVar16,uVar17,uVar18,uVar19,uVar20,uVar21,uVar22,uVar23
                        ,uVar24,uVar25,uVar2,uVar27,uVar28,puVar31,uVar29,uVar30,uVar39,uVar40,
                        uVar42,uVar43,uVar33,uVar34,uVar35,uVar36,puVar32,uVar37);
    _objc_release(uVar37);
    _objc_release(uVar36);
    _objc_release(uVar35);
    _objc_release(uVar34);
    _objc_release(uVar33);
    _objc_release(uVar43);
    _objc_release(uVar42);
    _objc_release(uVar40);
    _objc_release(uVar39);
    _objc_release(uVar30);
    _objc_release(uVar29);
    _objc_release(uVar28);
    _objc_release(uVar27);
    _objc_release(uVar2);
    _objc_release(uVar26);
    _objc_release(uVar25);
    _objc_release(uVar24);
    _objc_release(uVar23);
    _objc_release(uVar22);
    _objc_release(uVar21);
    _objc_release(uVar20);
    _objc_release(uVar19);
    _objc_release(uVar18);
    _objc_release(uVar17);
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c08d460();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980(puVar38,param_2,uVar2);
    _objc_release(uVar2);
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c08d460();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c250840();
    _objc_release(uVar2);
    _objc_release(uVar6);
    func_0x00010c161980(puVar41,param_2,puVar38);
    _objc_release(puVar38);
    _objc_release(puVar32);
    _objc_release(uVar5);
    _objc_release(puVar31);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar41);
  return;
}



/* Entry: 106028370; end: 10602837b;  */

undefined * FUN_106028370(void)

{
  return PTR____kCFBooleanFalse_11034ab60;
}



/* Entry: 10602837c; end: 1060283d7;  */

void FUN_10602837c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b1170;
  _objc_alloc(PTR_PTR_1126b1170);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf53fa0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c006480(puVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1060283d8; end: 1060285cf; -[SCDiscoverFeedActionHandlerProfileSectionCreator .cxx_destruct] */

void FUN_1060283d8(long param_1)

{
  _objc_storeStrong(param_1 + 0x140,0);
  _objc_storeStrong(param_1 + 0x138,0);
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
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



/* Entry: 1060285d0; end: 1060285db; +[SCMyUnifiedProfileSpotlightActionHandler announcerIdentifier] */

undefined ** FUN_1060285d0(void)

{
  return &PTR____CFConstantStringClassReference_110e39058;
}



/* Entry: 1060285dc; end: 1060285e3; -[SCMyUnifiedProfileSpotlightActionHandler addListener:] */

void FUN_1060285dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x88),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 1060285e4; end: 1060285eb; -[SCMyUnifiedProfileSpotlightActionHandler removeListener:] */

void FUN_1060285e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x88),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 1060285ec; end: 1060285f3; -[SCMyUnifiedProfileSpotlightActionHandler didTriggerEventWithEventName:announcerIdentifier:extraData:] */

void FUN_1060285ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7dbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x88),PTR_s_didTriggerEventWithEventName_ann_1125bd098);
  return;
}



/* Entry: 1060285f4; end: 106028d7b; -[SCMyUnifiedProfileSpotlightActionHandler initWithUserSession:endpointManager:circumstanceEngine:snapTokenProvider:readReceiptCoordinator:interactionHistoryManager:discoverFeedDataFetcher:discoverFeedDataMutator:discoverFeedActionHandler:snapchattersSynchronousDataFetcher:sectionExtensionServices:storiesPrefetcher:bitmojiAvatarProvider:bitmojiFriendAvatarProvider:storiesSnapReadReceiptLogger:grapheneRegistry:adConfigProvider:sectionsCoordinator:lazyUserRegistrationInfoProvider:lazyUserBirthdayProvider:promotedStoriesLogger:snapchattersDataFetcher:imageDownloader:imageSourceProvider:imageFetchingService:isBloopsEnabled:storiesConfigProvider:bitmojiImageFetcher:networkConnectivityMonitor:rtusClientCacheManager:unifiedGRPCClientFactory:dpaConfigProvider:adRenderDataParser:notificationPool:customAppThemeProvider:storiesGrapheneMetricsEmitter:discoverCrashLogger:locationProvider:] */

undefined8 *
FUN_1060285f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_29);
  _objc_retain(param_30);
  _objc_retain(param_31);
  _objc_retain(param_32);
  _objc_retain(param_33);
  _objc_retain(param_34);
  _objc_retain(param_35);
  _objc_retain(param_36);
  _objc_retain(param_37);
  _objc_retain(param_38);
  _objc_retain(param_39);
  _objc_retain(param_40);
  puStack_70 = PTR_PTR_1126ef270;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 1,param_3);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[3];
    puVar1[3] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[4];
    puVar1[4] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[5];
    puVar1[5] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[6];
    puVar1[6] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[7];
    puVar1[7] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[8];
    puVar1[8] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[9];
    puVar1[9] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[10];
    puVar1[10] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_19;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar2 = puVar1[0x11];
    puVar1[0x11] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_24;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_25;
    _objc_release(uVar2);
    _objc_retain(param_26);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_26;
    _objc_release(uVar2);
    _objc_retain(param_27);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_27;
    _objc_release(uVar2);
    _objc_retain(param_30);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_30;
    _objc_release(uVar2);
    _objc_retain(param_29);
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = param_29;
    _objc_release(uVar2);
    _objc_retain(param_31);
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = param_31;
    _objc_release(uVar2);
    _objc_retain(param_40);
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = param_40;
    _objc_release(uVar2);
    _objc_retain(param_28);
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = param_28;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x000108f4a1f0();
    *(char *)(puVar1 + 0x20) = (char)uVar2;
    _objc_retain(param_32);
    uVar2 = puVar1[0x21];
    puVar1[0x21] = param_32;
    _objc_release(uVar2);
    _objc_retain(param_33);
    uVar2 = puVar1[0x22];
    puVar1[0x22] = param_33;
    _objc_release(uVar2);
    _objc_retain(param_34);
    uVar2 = puVar1[0x23];
    puVar1[0x23] = param_34;
    _objc_release(uVar2);
    _objc_retain(param_35);
    uVar2 = puVar1[0x24];
    puVar1[0x24] = param_35;
    _objc_release(uVar2);
    _objc_retain(param_36);
    uVar2 = puVar1[0x25];
    puVar1[0x25] = param_36;
    _objc_release(uVar2);
    _objc_retain(param_37);
    uVar2 = puVar1[0x26];
    puVar1[0x26] = param_37;
    _objc_release(uVar2);
    _objc_retain(param_38);
    uVar2 = puVar1[0x27];
    puVar1[0x27] = param_38;
    _objc_release(uVar2);
    _objc_retain(param_39);
    uVar2 = puVar1[0x28];
    puVar1[0x28] = param_39;
    _objc_release(uVar2);
  }
  _objc_release(param_40);
  _objc_release(param_39);
  _objc_release(param_38);
  _objc_release(param_37);
  _objc_release(param_36);
  _objc_release(param_35);
  _objc_release(param_34);
  _objc_release(param_33);
  _objc_release(param_32);
  _objc_release(param_31);
  _objc_release(param_30);
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
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
  return puVar1;
}



/* Entry: 106028d7c; end: 10602906b; -[SCMyUnifiedProfileSpotlightActionHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined8
FUN_106028d7c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar6 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar6;
  func_0x00010c0720c0();
  _objc_release(uVar6);
  if ((int)uVar1 == 0) {
    uVar6 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar6;
    func_0x00010c0720c0();
    _objc_release(uVar6);
    if ((int)uVar1 == 0) {
      uVar6 = 0;
    }
    else {
      lVar2 = param_1 + 0x148;
      _objc_loadWeakRetained(lVar2);
      func_0x00010c1e1580(*(undefined8 *)(param_1 + 0x40));
      _objc_release(lVar2);
      uVar6 = *(undefined8 *)(param_1 + 0x40);
      func_0x00010bfd0140(uVar6);
    }
  }
  else {
    if ((*(byte *)(param_1 + 0x100) & 1) == 0) {
      uVar6 = *(undefined8 *)(param_1 + 0xf8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1f3c0();
      _objc_release(uVar6);
    }
    puVar3 = PTR_PTR_1126ae720;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010602981c();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126c72d0;
    _objc_alloc(PTR_PTR_1126c72d0);
    lVar2 = param_1 + 8;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c05d9a0(puVar5,*(undefined8 *)(param_1 + 0xe8),lVar2,0xef,0,puVar4,
                        *(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x90),
                        *(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                        *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                        *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),
                        *(undefined8 *)(param_1 + 0x58),0,*(undefined8 *)(param_1 + 0x60),
                        *(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x70),
                        *(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x80),
                        *(undefined8 *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa0),
                        *(undefined8 *)(param_1 + 0xa8),*(undefined8 *)(param_1 + 0xb0),
                        *(undefined8 *)(param_1 + 0xb8),*(undefined8 *)(param_1 + 0xc0),puVar3,
                        *(undefined8 *)(param_1 + 0xd0),*(undefined8 *)(param_1 + 0xe0),
                        *(undefined8 *)(param_1 + 0xd8),*(undefined8 *)(param_1 + 0xe8),
                        *(undefined8 *)(param_1 + 0x108),*(undefined8 *)(param_1 + 0x110),
                        *(undefined8 *)(param_1 + 0x118),*(undefined8 *)(param_1 + 0x120),
                        *(undefined8 *)(param_1 + 0x128),0,*(undefined8 *)(param_1 + 0x130),
                        *(undefined8 *)(param_1 + 0x138),*(undefined8 *)(param_1 + 0x140),
                        *(undefined8 *)(param_1 + 0xf0));
    _objc_release(lVar2);
    func_0x00010c1c8b80(puVar5);
    func_0x00010bef9980(puVar5);
    func_0x00010c1e1580(*(undefined8 *)(param_1 + 0x40));
    param_1 = param_1 + 0x148;
    _objc_loadWeakRetained(param_1);
    uVar6 = 1;
    func_0x00010c10eda0();
    _objc_release(param_1);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar6;
}



/* Entry: 10602906c; end: 10602907f;  */

void FUN_10602906c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0df6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSNumber_1126ae570,PTR_s_numberWithBool__1126157d0,
             *(undefined1 *)(param_1 + 0x20));
  return;
}



/* Entry: 106029080; end: 106029097; -[SCMyUnifiedProfileSpotlightActionHandler presentingViewController] */

void FUN_106029080(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x148);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106029098; end: 1060290a3; -[SCMyUnifiedProfileSpotlightActionHandler setPresentingViewController:] */

void FUN_106029098(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x148,param_3);
  return;
}



/* Entry: 1060290a4; end: 106029293; -[SCMyUnifiedProfileSpotlightActionHandler .cxx_destruct] */

void FUN_1060290a4(long param_1)

{
  _objc_destroyWeak(param_1 + 0x148);
  _objc_storeStrong(param_1 + 0x140,0);
  _objc_storeStrong(param_1 + 0x138,0);
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106029294; end: 106029307; -[SCMyUnifiedProfileSpotlightSectionDataProvider initWithCircumstanceEngine:] */

undefined1 * FUN_106029294(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ef278;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106029308; end: 106029313; +[SCMyUnifiedProfileSpotlightSectionDataProvider announcerIdentifier] */

undefined ** FUN_106029308(void)

{
  return &PTR____CFConstantStringClassReference_110e39098;
}



/* Entry: 106029314; end: 10602931b; -[SCMyUnifiedProfileSpotlightSectionDataProvider addListener:] */

void FUN_106029314(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 10602931c; end: 106029323; -[SCMyUnifiedProfileSpotlightSectionDataProvider removeListener:] */

void FUN_10602931c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 106029324; end: 106029433; -[SCMyUnifiedProfileSpotlightSectionDataProvider setSectionDataModel:] */

void FUN_106029324(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar2;
  
  _objc_retain(param_3);
  lVar4 = *(long *)(param_1 + 0x30);
  _objc_retain(lVar4);
  _objc_retain(param_3);
  if (lVar4 == param_3) {
    iVar1 = 1;
  }
  else if (param_3 == 0) {
    iVar1 = 0;
  }
  else {
    lVar2 = lVar4;
    func_0x00010c071ae0(lVar4,param_2,param_3);
    iVar1 = (int)lVar2;
  }
  _objc_release(param_3);
  _objc_release(lVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  *(long *)(param_1 + 0x30) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar5);
  puVar3 = PTR_PTR_1126b1130;
  func_0x00010c070420(PTR_PTR_1126b1130,param_2,*(undefined8 *)(param_1 + 0x10));
  _objc_release(param_3);
  if ((int)puVar3 != 0) {
    if ((iVar1 == 0) || ((*(byte *)(param_1 + 0x18) & 1) == 0)) {
      lVar4 = param_1 + 0x20;
      _objc_loadWeakRetained(lVar4);
      func_0x00010c155aa0();
      _objc_release(lVar4);
      *(undefined1 *)(param_1 + 0x18) = 1;
    }
    return;
  }
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c155aa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106029434; end: 10602943b; -[SCMyUnifiedProfileSpotlightSectionDataProvider numberOfItemsInSection:] */

undefined8 FUN_106029434(void)

{
  return 1;
}



/* Entry: 10602943c; end: 106029443; -[SCMyUnifiedProfileSpotlightSectionDataProvider dataLoadingStatus] */

undefined8 FUN_10602943c(void)

{
  return 2;
}



/* Entry: 106029444; end: 106029687; -[SCMyUnifiedProfileSpotlightSectionDataProvider containerCellViewModelsForIndexPaths:] */

void FUN_106029444(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined **ppuStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  puVar4 = PTR_PTR_1126b4860;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110e390b8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xcd);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c14d100(puVar1,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe94a0(puVar4,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  puVar2 = PTR_PTR_1126b2c10;
  _objc_alloc(PTR_PTR_1126b2c10);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  func_0x000108f4a238();
  if ((int)uVar5 == 0) {
    func_0x0001060297d4();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000106029804();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar6 = uVar5;
  func_0x000108f62f68();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x000108f637bc();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x000108f62cd0();
  _objc_retainAutoreleasedReturnValue();
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = uVar8;
  func_0x00010c053700(puVar2,param_2,uVar6,0,puVar4,uVar7,0,puVar1);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  puVar3 = PTR_PTR_1126aea98;
  _objc_alloc();
  func_0x00010bffd260();
  puStack_60 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_60,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(puVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    pcStack_98 = FUN_106029688;
    lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_b8 = &PTR____CFConstantStringClassReference_110e39078;
    puVar4 = PTR_PTR_1126aeaa0;
    puStack_a0 = &stack0xfffffffffffffff0;
    _objc_opt_class();
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_b0 = puVar4;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_b0,&ppuStack_b8,1)
    ;
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_a8) {
      ___stack_chk_fail();
      _objc_loadWeakRetained(puVar1 + 0x20);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106029688; end: 106029707; -[SCMyUnifiedProfileSpotlightSectionDataProvider contentCellClassesByReuseIdentifier] */

void FUN_106029688(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110e39078;
  puVar1 = PTR_PTR_1126aeaa0;
  _objc_opt_class();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_20 = puVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_20,&ppuStack_28,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    _objc_loadWeakRetained(puVar2 + 0x20);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106029708; end: 10602971f; -[SCMyUnifiedProfileSpotlightSectionDataProvider dataProviderDelegate] */

void FUN_106029708(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106029720; end: 10602972b; -[SCMyUnifiedProfileSpotlightSectionDataProvider setDataProviderDelegate:] */

void FUN_106029720(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 10602972c; end: 106029733; -[SCMyUnifiedProfileSpotlightSectionDataProvider updateQueuePerformer] */

undefined8 FUN_10602972c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106029734; end: 106029763; -[SCMyUnifiedProfileSpotlightSectionDataProvider setUpdateQueuePerformer:] */

void FUN_106029734(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106029764; end: 10602976b; -[SCMyUnifiedProfileSpotlightSectionDataProvider sectionDataModel] */

undefined8 FUN_106029764(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10602976c; end: 1060297bb; -[SCMyUnifiedProfileSpotlightSectionDataProvider .cxx_destruct] */

void FUN_10602976c(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1060297bc; end: 106029863;  */

void FUN_1060297bc(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e390d8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e390d8,
                      &PTR____CFConstantStringClassReference_110e390f8,0);
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



/* Entry: 106029864; end: 1060299a7; -[SCMyProfileFriendsSectionCreator initWithSnapchattersDataFetcher:imageDownloader:resourceDownloader:bitmojiSelfieServices:circumstanceEngine:hasPublicProfile:] */

undefined1 *
FUN_106029864(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126ef280;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126c72d8;
    _objc_alloc();
    func_0x00010c0496a0();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0x30) = param_8;
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1060299a8; end: 1060299af; -[SCMyProfileFriendsSectionCreator order] */

undefined8 FUN_1060299a8(void)

{
  return 0x26;
}



/* Entry: 1060299b0; end: 106029b2f; -[SCMyProfileFriendsSectionCreator section] */

void FUN_1060299b0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = *(long *)(param_1 + 0x38);
  if (lVar8 == 0) {
    puVar5 = PTR_PTR_1126b1108;
    _objc_alloc();
    func_0x00010c04f820();
    ppuStack_68 = &PTR____CFConstantStringClassReference_110eb4ff8;
    ppuStack_60 = &PTR____CFConstantStringClassReference_110e1cd38;
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_60,&ppuStack_68,1
                       );
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f93c0(puVar5,param_2,puVar6);
    _objc_release(puVar6);
    puVar6 = PTR_PTR_1126c72e0;
    _objc_alloc(PTR_PTR_1126c72e0);
    uVar1 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    lVar8 = param_1 + 0x40;
    _objc_loadWeakRetained(lVar8);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    puVar7 = PTR_PTR_1126b1130;
    func_0x00010c070420(PTR_PTR_1126b1130,param_2,*(undefined8 *)(param_1 + 0x28));
    func_0x00010c008fa0(puVar6,param_2,uVar1,uVar3,lVar8,uVar2,uVar4,puVar7);
    func_0x00010c1f9240(puVar5,param_2,puVar6);
    _objc_release(puVar6);
    _objc_release(lVar8);
    _objc_retain(puVar5);
    lVar8 = *(long *)(param_1 + 0x38);
    *(undefined **)(param_1 + 0x38) = puVar5;
    _objc_release(lVar8);
  }
  else {
    _objc_retain(lVar8);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_loadWeakRetained(lVar8 + 0x40);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106029b30; end: 106029b47; -[SCMyProfileFriendsSectionCreator lifecycleAnnouncer] */

void FUN_106029b30(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106029b48; end: 106029b53; -[SCMyProfileFriendsSectionCreator setLifecycleAnnouncer:] */

void FUN_106029b48(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x40,param_3);
  return;
}



/* Entry: 106029b54; end: 106029b5b; -[SCMyProfileFriendsSectionCreator actionHandler] */

undefined8 FUN_106029b54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 106029b5c; end: 106029bcf; -[SCMyProfileFriendsSectionCreator .cxx_destruct] */

void FUN_106029b5c(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_destroyWeak(param_1 + 0x40);
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



/* Entry: 106029bd0; end: 106029d17; -[SCMyProfileFriendsSectionDataProvider initWithDataSource:imageDownloader:announcer:resourceDownloader:bitmojiSelfieServices:isDeduplicationForDidUpdateViewModelsEnabled:hasPublicProfile:] */

undefined1 *
FUN_106029bd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
             undefined1 param_9)

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
  puStack_58 = PTR_PTR_1126ef288;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
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
    *(undefined1 *)((long)puVar1 + 0x31) = param_9;
    func_0x00010befc780(*(undefined8 *)((long)puVar1 + 0x10));
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106029d18; end: 106029d23; +[SCMyProfileFriendsSectionDataProvider announcerIdentifier] */

undefined ** FUN_106029d18(void)

{
  return &PTR____CFConstantStringClassReference_110e39218;
}



/* Entry: 106029d24; end: 106029d2b; -[SCMyProfileFriendsSectionDataProvider addListener:] */

void FUN_106029d24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 106029d2c; end: 106029d33; -[SCMyProfileFriendsSectionDataProvider removeListener:] */

void FUN_106029d2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 106029d34; end: 106029e2b; -[SCMyProfileFriendsSectionDataProvider setSectionDataModel:] */

void FUN_106029d34(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar3;
  long lVar4;
  long lVar2;
  
  _objc_retain(param_3);
  lVar4 = *(long *)(param_1 + 0x48);
  _objc_retain(lVar4);
  _objc_retain(param_3);
  if (lVar4 == param_3) {
    iVar1 = 1;
  }
  else if (param_3 == 0) {
    iVar1 = 0;
  }
  else {
    lVar2 = lVar4;
    func_0x00010c071ae0(lVar4,param_2,param_3);
    iVar1 = (int)lVar2;
  }
  _objc_release(param_3);
  _objc_release(lVar4);
  lVar4 = param_3;
  func_0x00010bf51e00();
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  *(long *)(param_1 + 0x48) = lVar4;
  _objc_release(uVar3);
  if (*(char *)(param_1 + 0x30) == '\x01') {
    if ((iVar1 == 0) || ((*(byte *)(param_1 + 0x32) & 1) == 0)) {
      lVar4 = param_1 + 0x38;
      _objc_loadWeakRetained(lVar4);
      func_0x00010c155aa0();
      _objc_release(lVar4);
      *(undefined1 *)(param_1 + 0x32) = 1;
    }
  }
  else {
    param_1 = param_1 + 0x38;
    _objc_loadWeakRetained(param_1);
    func_0x00010c155aa0();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106029e2c; end: 106029e4b; -[SCMyProfileFriendsSectionDataProvider numberOfItemsInSection:] */

undefined8 FUN_106029e2c(int param_1)

{
  undefined8 uVar1;
  
  func_0x00010bebb220();
  uVar1 = 1;
  if (param_1 != 0) {
    uVar1 = 2;
  }
  return uVar1;
}



/* Entry: 106029e4c; end: 106029e9f; -[SCMyProfileFriendsSectionDataProvider containerCellViewModelsForIndexPaths:] */

void FUN_106029e4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106029ea0;
  puStack_20 = &UNK_110845ab0;
  uStack_18 = param_1;
  func_0x000100504554(param_3,&puStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106029ea0; end: 10602a33b;  */

void FUN_106029ea0(long param_1,long param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  undefined *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  long lVar19;
  undefined *puVar20;
  long lVar21;
  undefined *puStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined *puStack_288;
  undefined1 auStack_280 [8];
  undefined *puStack_278;
  undefined8 uStack_270;
  code *pcStack_268;
  undefined *puStack_260;
  undefined1 auStack_258 [8];
  undefined1 auStack_250 [8];
  undefined **ppuStack_248;
  undefined **ppuStack_240;
  undefined1 *puStack_238;
  undefined **ppuStack_230;
  long lStack_228;
  
  lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  iVar2 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010bebb220();
  if ((iVar2 == 0) || (lVar3 = param_2, func_0x00010c0840e0(), lVar3 != 0)) {
    _objc_alloc();
    cVar1 = *(char *)(*(long *)(param_1 + 0x20) + 0x31);
    puVar10 = PTR_PTR_1126b0c40;
    func_0x00010bfe7b00(0x4038000000000000,0x4038000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR_PTR_1126b02a8;
    _objc_alloc();
    func_0x00010c01b460();
    ppuVar4 = &PTR____CFConstantStringClassReference_110e39238;
    if (cVar1 == '\0') {
      ppuVar4 = &PTR____CFConstantStringClassReference_110dc7ab8;
    }
    func_0x00010bcbeaa8(ppuVar4,0);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126b2c10;
    _objc_alloc();
    ppuVar5 = ppuVar4;
    func_0x000108f62f68();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar5;
    func_0x000108f637bc();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar6;
    func_0x000108f62cd0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c053700();
    _objc_release(ppuVar7);
    _objc_release(ppuVar6);
    _objc_release(ppuVar5);
    _objc_release(ppuVar4);
    _objc_release(puVar9);
    _objc_release(puVar10);
    func_0x00010bffd260();
  }
  else {
    _objc_alloc();
    puVar8 = *(undefined **)(*(long *)(param_1 + 0x20) + 0x10);
    func_0x00010c0ecba0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dde60();
    _objc_retain(puVar8);
    puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    _objc_retain(puVar8);
    puVar10 = puVar8;
    func_0x00010bf52a60();
    lVar3 = lRam0000000000000000;
    while (puVar10 != (undefined *)0x0) {
      puVar20 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar3) {
          _objc_enumerationMutation(puVar8);
        }
        lVar21 = *(long *)((long)puVar20 * 8);
        lVar11 = lVar21;
        func_0x00010bf1bae0();
        _objc_retainAutoreleasedReturnValue();
        lVar12 = lVar11;
        func_0x00010bf1acc0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(lVar11);
        if (lVar12 != 0) {
          puVar13 = PTR_PTR_1126b4bc0;
          _objc_alloc();
          lVar11 = lVar21;
          func_0x00010c2923e0(lVar21);
          _objc_retainAutoreleasedReturnValue();
          lVar12 = lVar21;
          func_0x00010bf1bae0(lVar21);
          _objc_retainAutoreleasedReturnValue();
          lVar14 = lVar12;
          func_0x00010bf1acc0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf1bae0();
          _objc_retainAutoreleasedReturnValue();
          lVar15 = lVar21;
          func_0x00010bf1c0a0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c05ace0();
          _objc_release(lVar15);
          _objc_release(lVar21);
          _objc_release(lVar14);
          _objc_release(lVar12);
          _objc_release(lVar11);
          func_0x00010befa120(puVar9);
          puVar16 = puVar9;
          func_0x00010bf529e0();
          _objc_release(puVar13);
          if ((undefined *)0x7 < puVar16) goto LAB_10602a290;
        }
        puVar20 = puVar20 + 1;
      } while (puVar10 != puVar20);
      puVar10 = puVar8;
      func_0x00010bf52a60();
    }
LAB_10602a290:
    _objc_release(puVar8);
    func_0x00010bf529e0(puVar9);
    puVar10 = PTR_PTR_1126b02a8;
    _objc_alloc();
    func_0x00010c01b460();
    puVar20 = PTR_PTR_1126c72f0;
    _objc_alloc();
    func_0x00010c046540();
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    func_0x00010bffd260();
    _objc_release(puVar20);
  }
  _objc_release(puVar8);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar19) {
    ___stack_chk_fail();
    lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_opt_class();
    _objc_opt_class();
    puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar19) {
      ___stack_chk_fail();
      ppuVar6 = &puStack_2a0;
      lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
      _objc_initWeak(auStack_250,puVar10);
      puVar10 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_278 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_270 = 0xc2000000;
      pcStack_268 = FUN_10602a584;
      puStack_260 = &UNK_110865f78;
      _objc_copyWeak(auStack_258,auStack_250);
      ppuVar4 = &puStack_278;
      _objc_retainBlock();
      puStack_2a0 = puVar10;
      uStack_298 = 0xc2000000;
      uStack_290 = 0x10602a5cc;
      puStack_288 = &UNK_110865f78;
      puVar18 = auStack_250;
      _objc_copyWeak(auStack_280,puVar18);
      _objc_retainBlock();
      ppuStack_248 = &PTR____CFConstantStringClassReference_110e391f8;
      puVar17 = (undefined1 *)ppuVar6;
      _objc_retainBlock();
      ppuStack_240 = &PTR____CFConstantStringClassReference_110e391d8;
      ppuVar5 = ppuVar4;
      puStack_238 = puVar17;
      _objc_retainBlock();
      ppuStack_230 = ppuVar5;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar5);
      _objc_release(puVar17);
      _objc_release(ppuVar6);
      _objc_destroyWeak(auStack_280);
      _objc_release(ppuVar4);
      _objc_destroyWeak(auStack_258);
      puVar17 = auStack_250;
      _objc_destroyWeak();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_228) {
        ___stack_chk_fail();
        _objc_destroyWeak(auStack_280);
        _objc_destroyWeak(auStack_258);
        _objc_destroyWeak(auStack_250);
        __Unwind_Resume(puVar17);
        _objc_retain(puVar18);
        puVar17 = puVar17 + 0x20;
        _objc_loadWeakRetained(puVar17);
        func_0x00010bde5b00();
        _objc_release(puVar18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(puVar17);
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10602a33c; end: 10602a3d3; -[SCMyProfileFriendsSectionDataProvider contentCellClassesByReuseIdentifier] */

void FUN_10602a33c(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined1 *puVar4;
  undefined **ppuVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [8];
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined1 *puStack_b8;
  undefined **ppuStack_b0;
  long lStack_a8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_opt_class();
  _objc_opt_class();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
    ___stack_chk_fail();
    ppuVar3 = &puStack_120;
    lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_initWeak(auStack_d0,puVar1);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_f0 = 0xc2000000;
    pcStack_e8 = FUN_10602a584;
    puStack_e0 = &UNK_110865f78;
    _objc_copyWeak(auStack_d8,auStack_d0);
    ppuVar2 = &puStack_f8;
    _objc_retainBlock();
    puStack_120 = puVar1;
    uStack_118 = 0xc2000000;
    uStack_110 = 0x10602a5cc;
    puStack_108 = &UNK_110865f78;
    puVar6 = auStack_d0;
    _objc_copyWeak(auStack_100,puVar6);
    _objc_retainBlock();
    ppuStack_c8 = &PTR____CFConstantStringClassReference_110e391f8;
    puVar4 = (undefined1 *)ppuVar3;
    _objc_retainBlock();
    ppuStack_c0 = &PTR____CFConstantStringClassReference_110e391d8;
    ppuVar5 = ppuVar2;
    puStack_b8 = puVar4;
    _objc_retainBlock();
    ppuStack_b0 = ppuVar5;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar5);
    _objc_release(puVar4);
    _objc_release(ppuVar3);
    _objc_destroyWeak(auStack_100);
    _objc_release(ppuVar2);
    _objc_destroyWeak(auStack_d8);
    puVar4 = auStack_d0;
    _objc_destroyWeak();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_a8) {
      ___stack_chk_fail();
      _objc_destroyWeak(auStack_100);
      _objc_destroyWeak(auStack_d8);
      _objc_destroyWeak(auStack_d0);
      __Unwind_Resume(puVar4);
      _objc_retain(puVar6);
      puVar4 = puVar4 + 0x20;
      _objc_loadWeakRetained(puVar4);
      func_0x00010bde5b00();
      _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar4);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10602a3d4; end: 10602a583; -[SCMyProfileFriendsSectionDataProvider configurationBlocksByReuseIdentifier] */

void FUN_10602a3d4(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined1 *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined1 *puStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  ppuVar2 = &puStack_e0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_initWeak(auStack_90,param_1);
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_10602a584;
  puStack_a0 = &UNK_110865f78;
  _objc_copyWeak(auStack_98,auStack_90);
  ppuVar1 = &puStack_b8;
  _objc_retainBlock();
  puStack_e0 = puVar5;
  uStack_d8 = 0xc2000000;
  uStack_d0 = 0x10602a5cc;
  puStack_c8 = &UNK_110865f78;
  puVar6 = auStack_90;
  _objc_copyWeak(auStack_c0,puVar6);
  _objc_retainBlock();
  ppuStack_88 = &PTR____CFConstantStringClassReference_110e391f8;
  puVar3 = (undefined1 *)ppuVar2;
  _objc_retainBlock();
  ppuStack_80 = &PTR____CFConstantStringClassReference_110e391d8;
  ppuVar4 = ppuVar1;
  puStack_78 = puVar3;
  _objc_retainBlock();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  ppuStack_70 = ppuVar4;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar4);
  _objc_release(puVar3);
  _objc_release(ppuVar2);
  _objc_destroyWeak(auStack_c0);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_98);
  puVar3 = auStack_90;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_90);
  __Unwind_Resume(puVar3);
  _objc_retain(puVar6);
  puVar3 = puVar3 + 0x20;
  _objc_loadWeakRetained(puVar3);
  func_0x00010bde5b00();
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10602a584; end: 10602a613;  */

void FUN_10602a584(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde5b00();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10602a614; end: 10602a68b; -[SCMyProfileFriendsSectionDataProvider didUpdateWithAnnouncerIdentifier:] */

void FUN_10602a614(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e393d8);
  if (((uVar1 & 1) != 0) ||
     (uVar1 = param_3,
     func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e393b8),
     (int)uVar1 != 0)) {
    param_1 = param_1 + 0x38;
    _objc_loadWeakRetained(param_1);
    func_0x00010c155aa0();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10602a68c; end: 10602a7cb; -[SCMyProfileFriendsSectionDataProvider _showSquadmojiHeader] */

undefined1 * FUN_10602a68c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar9 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c0ecba0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  puVar10 = (undefined1 *)0x0;
  if (lVar2 != 0) {
    lVar11 = *plStack_110;
    do {
      lVar12 = 0;
      do {
        if (*plStack_110 != lVar11) {
          _objc_enumerationMutation(lVar1);
        }
        lVar3 = *(long *)(lStack_118 + lVar12 * 8);
        func_0x00010bf1bae0();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010bf1acc0();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010c08fa60();
        _objc_release(lVar4);
        _objc_release(lVar3);
        if (lVar5 != 0) {
          puVar10 = (undefined1 *)0x1;
          goto LAB_10602a788;
        }
        lVar12 = lVar12 + 1;
      } while (lVar2 != lVar12);
      lVar2 = lVar1;
      puVar9 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
    puVar10 = (undefined1 *)0x0;
  }
LAB_10602a788:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar10;
  }
  ___stack_chk_fail();
  _objc_retain(puVar9);
  puVar6 = PTR_PTR_1126aeaa0;
  _objc_opt_class(PTR_PTR_1126aeaa0);
  puVar7 = (undefined1 *)puVar9;
  _objc_opt_isKindOfClass(puVar9,puVar6);
  puVar10 = (undefined1 *)puVar9;
  if (((ulong)puVar7 & 1) == 0) {
    puVar10 = (undefined1 *)0x0;
  }
  _objc_retain(puVar10);
  func_0x00010c1eccc0(puVar10);
  puVar6 = PTR_PTR_1126b4330;
  _objc_alloc(PTR_PTR_1126b4330);
  func_0x00010bff3160();
  puVar8 = puVar6;
  func_0x00010c14fc00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d2520(puVar10);
  _objc_release(puVar10);
  _objc_release(puVar8);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar9);
  return (undefined1 *)puVar9;
}



/* Entry: 10602a7cc; end: 10602a88b; -[SCMyProfileFriendsSectionDataProvider _configureMyFriendsButtonCell:] */

void FUN_10602a7cc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126aeaa0;
  _objc_opt_class(PTR_PTR_1126aeaa0);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010c1eccc0(uVar1);
  puVar2 = PTR_PTR_1126b4330;
  _objc_alloc(PTR_PTR_1126b4330);
  func_0x00010bff3160();
  puVar4 = puVar2;
  func_0x00010c14fc00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d2520(uVar1);
  _objc_release(uVar1);
  _objc_release(puVar4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10602a88c; end: 10602a957; -[SCMyProfileFriendsSectionDataProvider _configureSquadmojiCell:] */

void FUN_10602a88c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126c72e8;
  _objc_opt_class(PTR_PTR_1126c72e8);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010c1aa200(uVar1);
  func_0x00010c1714e0(uVar1);
  puVar2 = PTR_PTR_1126b4330;
  _objc_alloc(PTR_PTR_1126b4330);
  func_0x00010bff3160();
  puVar4 = puVar2;
  func_0x00010c14fc00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d2540(uVar1);
  _objc_release(uVar1);
  _objc_release(puVar4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10602a958; end: 10602a96f; -[SCMyProfileFriendsSectionDataProvider dataProviderDelegate] */

void FUN_10602a958(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10602a970; end: 10602a97b; -[SCMyProfileFriendsSectionDataProvider setDataProviderDelegate:] */

void FUN_10602a970(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x38,param_3);
  return;
}



/* Entry: 10602a97c; end: 10602a983; -[SCMyProfileFriendsSectionDataProvider updateQueuePerformer] */

undefined8 FUN_10602a97c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10602a984; end: 10602a9b3; -[SCMyProfileFriendsSectionDataProvider setUpdateQueuePerformer:] */

void FUN_10602a984(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10602a9b4; end: 10602a9bb; -[SCMyProfileFriendsSectionDataProvider sectionDataModel] */

undefined8 FUN_10602a9b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10602a9bc; end: 10602aa2f; -[SCMyProfileFriendsSectionDataProvider .cxx_destruct] */

void FUN_10602a9bc(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_destroyWeak(param_1 + 0x38);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10602aa30; end: 10602ab47; -[SCMyProfileFriendsSectionDataSource initWithSnapchattersDataFetcher:] */

undefined1 * FUN_10602aa30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126ef290;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b45a0;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar4);
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = PTR____NSArray0__struct_11034ab48;
    _objc_release(uVar4);
    func_0x00010be3b380(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10602ab48; end: 10602ac13; -[SCMyProfileFriendsSectionDataSource orderedBestFriends] */

void FUN_10602ab48(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
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
  pcStack_38 = FUN_10602ac14;
  uStack_30 = 0x10602ac24;
  uStack_28 = 0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_10602ac2c;
  puStack_68 = &UNK_11084b9d0;
  lStack_60 = param_1;
  puStack_48 = puStack_58;
  func_0x00010c0f8240(*(undefined8 *)(param_1 + 0x10),param_2,&puStack_80);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10602ac14; end: 10602ac2b;  */

void FUN_10602ac14(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10602ac2c; end: 10602ac5f;  */

void FUN_10602ac2c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10602ac60; end: 10602ad07; -[SCMyProfileFriendsSectionDataSource numFriends] */

undefined8 FUN_10602ac60(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_48 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10602ad08;
  puStack_58 = &UNK_11084b9d0;
  lStack_50 = param_1;
  puStack_38 = puStack_48;
  func_0x00010c0f8240(*(undefined8 *)(param_1 + 0x10),param_2,&puStack_70);
  uVar1 = puStack_38[3];
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 10602ad08; end: 10602ad1b;  */

void FUN_10602ad08(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) =
       *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  return;
}



/* Entry: 10602ad1c; end: 10602ad27; +[SCMyProfileFriendsSectionDataSource announcerIdentifier] */

undefined ** FUN_10602ad1c(void)

{
  return &PTR____CFConstantStringClassReference_110e39258;
}



/* Entry: 10602ad28; end: 10602ad2f; -[SCMyProfileFriendsSectionDataSource addUpdateListener:] */

void FUN_10602ad28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 10602ad30; end: 10602ad37; -[SCMyProfileFriendsSectionDataSource removeUpdateListener:] */

void FUN_10602ad30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 10602ad38; end: 10602ad5b; -[SCMyProfileFriendsSectionDataSource _initializeDataSource] */

void FUN_10602ad38(undefined8 param_1)

{
  func_0x00010bedc880();
                    /* WARNING: Could not recover jumptable at 0x00010bedc450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateNumFriends_112594ab8);
  return;
}



/* Entry: 10602ad5c; end: 10602ae4f; -[SCMyProfileFriendsSectionDataSource _updateOrderedBestFriends] */

void FUN_10602ad5c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = 0;
  func_0x0001000819a8(0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c11f720(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10602ae50; end: 10602aebb;  */

void FUN_10602ae50(long param_1,ulong param_2)

{
  ulong uVar1;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bf529e0();
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  if (uVar1 < 5) {
    func_0x00010be0f2a0();
  }
  else {
    func_0x00010bea61e0();
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10602aebc; end: 10602afd7; -[SCMyProfileFriendsSectionDataSource _fetchAdditionalMutualFriends:] */

void FUN_10602aebc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = 0;
  _dispatch_queue_create(0,0);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0d42c0(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10602afd8; end: 10602b08b;  */

void FUN_10602afd8(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  if (param_3 == 0) {
    func_0x0001006372a4(param_2,&PTR___NSConcreteGlobalBlock_110908d58);
    _objc_release(param_2);
    lVar2 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf09f80(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bea61e0(lVar2);
    _objc_release(uVar3);
  }
  else {
    lVar2 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar2);
    func_0x00010bea61e0();
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10602b08c; end: 10602b0a7;  */

uint FUN_10602b08c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010901ca64(param_2);
  return (uint)param_2 ^ 1;
}



/* Entry: 10602b0a8; end: 10602b177; -[SCMyProfileFriendsSectionDataSource _setOrderedBestFriends:] */

void FUN_10602b0a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x10602b138;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f9420(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10602b178; end: 10602b1f3; -[SCMyProfileFriendsSectionDataSource _dispatchOrderedBestFriendsUpdate] */

void FUN_10602b178(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x0001000819a8(0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010007380c();
  _objc_release(uVar1);
  return;
}



/* Entry: 10602b1f4; end: 10602b20b;  */

void FUN_10602b1f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7e9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),
             PTR_s_didUpdateWithAnnouncerIdentifier_1125bd418,
             &PTR____CFConstantStringClassReference_110e393d8);
  return;
}



/* Entry: 10602b20c; end: 10602b24f; -[SCMyProfileFriendsSectionDataSource _updateNumFriends] */

void FUN_10602b20c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0ee900();
  func_0x00010bea5f40(param_1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10602b250; end: 10602b2a7; -[SCMyProfileFriendsSectionDataSource _setNumFriends:] */

void FUN_10602b250(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_10602b2a8;
  puStack_28 = &UNK_110848c48;
  lStack_20 = param_1;
  uStack_18 = param_3;
  func_0x00010c0f9420(*(undefined8 *)(param_1 + 0x10),param_2,&puStack_40);
  return;
}



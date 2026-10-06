/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10093a72c; end: 10093a86b;  */

void FUN_10093a72c(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  uVar2 = param_1[1];
  if (uVar2 < (ulong)param_1[2]) {
    func_0x000107c6111c(uVar2,param_2);
    lVar9 = uVar2 + 8;
  }
  else {
    lVar9 = uVar2 - *param_1;
    uVar2 = (lVar9 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) {
      func_0x000107c307e8();
LAB_10093a868:
      func_0x000104bd35f4();
      plVar5 = param_1;
      func_0x000107c60c40();
      func_0x000107c60dc4();
      lVar9 = *param_2;
      lVar11 = param_1[1];
      lVar4 = *param_1;
      param_1[1] = param_2[1];
      *param_1 = lVar9;
      param_2[1] = lVar11;
      *param_2 = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(plVar5);
      return;
    }
    uVar6 = param_1[2] - *param_1;
    uVar7 = (long)uVar6 >> 2;
    if (uVar7 <= uVar2) {
      uVar7 = uVar2;
    }
    if (0x7ffffffffffffff7 < uVar6) {
      uVar7 = 0x1fffffffffffffff;
    }
    if (uVar7 == 0) {
      lVar4 = 0;
    }
    else {
      if (uVar7 >> 0x3d != 0) goto LAB_10093a868;
      lVar4 = uVar7 << 3;
      func_0x000107c60e20();
    }
    lVar9 = lVar4 + lVar9;
    func_0x000107c6111c(lVar9,param_2);
    lVar8 = *param_1;
    lVar3 = param_1[1];
    lVar1 = lVar9 + (lVar8 - lVar3);
    lVar11 = lVar8;
    lVar10 = lVar1;
    if (lVar3 != lVar8) {
      do {
        func_0x000107c6114c(lVar10,lVar11);
        lVar11 = lVar11 + 8;
        lVar10 = lVar10 + 8;
      } while (lVar11 != lVar3);
      do {
        func_0x000107c61120(lVar8);
        lVar8 = lVar8 + 8;
      } while (lVar8 != lVar3);
      lVar8 = *param_1;
    }
    lVar9 = lVar9 + 8;
    *param_1 = lVar1;
    param_1[1] = lVar9;
    param_1[2] = lVar4 + uVar7 * 8;
    if (lVar8 != 0) {
      func_0x000107c60e14(lVar8);
    }
  }
  param_1[1] = lVar9;
  return;
}



/* Entry: 10093a86c; end: 10093a8b3;  */

void FUN_10093a86c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = param_1;
  func_0x000107c60c40();
  func_0x000107c60dc4();
  uVar2 = *param_2;
  uVar4 = param_1[1];
  uVar3 = *param_1;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_2[1] = uVar4;
  *param_2 = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(puVar1);
  return;
}



/* Entry: 10093a8b4; end: 10093a8cb; -[SCStoriesConfigProviderImplementation fofSnapPrefetchFixEnabled] */

void FUN_10093a8b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e16af8,0,0);
  return;
}



/* Entry: 10093a8cc; end: 10093a8e3; -[SCStoriesConfigProviderImplementation tileTapPrefetchReaderQueueEnabled] */

void FUN_10093a8cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e16b18,0,0);
  return;
}



/* Entry: 10093a8e4; end: 10093a98b; -[SCStoriesDataCoordinator updateAllSummaryInfosWithViewStates] */

void FUN_10093a8e4(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x000107c61144(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c6111c(auStack_30,auStack_28);
  func_0x000107c4e524(uVar1);
  func_0x000107c61120(auStack_30);
  func_0x000107c61120(auStack_28);
  return;
}



/* Entry: 10093a98c; end: 10093a993; +[SCAttributedStoriesTask serviceEntryPoint] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10093a98c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309bdf8) = 3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10093a994; end: 10093aaab; -[SCStoriesMediaStateUpdateMonitor initWithStoriesDataCoordinator:storiesMediaCoordinator:] */

undefined1 *
FUN_10093a994(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_48 = PTR_PTR_1126f3d60;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c61180();
    func_0x000107c470d0();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61170(puVar4);
    func_0x000107c3d740(*(undefined8 *)((long)puVar1 + 0x10));
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10093aaac; end: 10093aab3; -[SCStoriesMediaCoordinatorUsingContentManagerImpl addListener:] */

void FUN_10093aaac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 10093aab4; end: 10093ab03; -[SCStoriesMediaCoordinatingListenerAnnouncer addListener:] */

undefined8 FUN_10093aab4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_10093ab04(param_3);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
  return 1;
}



/* Entry: 10093ab04; end: 10093ad9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10093ab04(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_a0 [16];
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined **ppuStack_80;
  undefined1 uStack_69;
  undefined *puStack_68;
  
  puStack_68 = PTR___swiftEmptySetSingleton_11034f1d8;
  puVar5 = &UNK_11077c008;
  puVar1 = puVar5;
  func_0x000107c613fc(&UNK_11077c008,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  uVar2 = 0x113080290;
  FUN_1000285a8(0x113080290,&UNK_10dd0b5b0);
  uVar3 = 0x113080470;
  FUN_10093ad9c(0x113080470,0x113080290,&UNK_10dd0b5b0);
  puVar4 = &UNK_1044d4a74;
  func_0x000107c5f21c(&UNK_1044d4a74,puVar1,uVar2,uVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c5f1d8(&puStack_68);
  func_0x000107c61574(puVar4);
  puVar1 = puVar5;
  func_0x000107c613fc(&UNK_11077c008,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  uVar2 = 0x113080298;
  FUN_1000285a8(0x113080298,&UNK_10dd0b428);
  uVar3 = 0x113080480;
  FUN_10093ad9c(0x113080480,0x113080298,&UNK_10dd0b428);
  puVar4 = &UNK_1044d4af4;
  func_0x000107c5f21c(&UNK_1044d4af4,puVar1,uVar2,uVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c5f1d8(&puStack_68);
  func_0x000107c61574(puVar4);
  func_0x000107c613fc(&UNK_11077c008,0x18,7);
  func_0x000107c61614(puVar5 + 0x10,param_1);
  uVar2 = 0x1130802a0;
  FUN_1000285a8(0x1130802a0,&UNK_10dd0b5c0);
  uVar3 = 0x113080490;
  FUN_10093ad9c(0x113080490,0x1130802a0,&UNK_10dd0b5c0);
  puVar4 = &UNK_1044d4b74;
  func_0x000107c5f21c(&UNK_1044d4b74,puVar5,uVar2,uVar3);
  func_0x000107c61574(puVar5);
  func_0x000107c5f1d8(&puStack_68);
  func_0x000107c61574(puVar4);
  puVar5 = &UNK_11077c030;
  func_0x000107c613fc(&UNK_11077c030,0x18,7);
  func_0x000107c61614(puVar5 + 0x10);
  uVar2 = 0x112d518a8;
  puStack_90 = puVar5;
  uStack_88 = param_1;
  ppuStack_80 = &puStack_68;
  FUN_1000285a8(0x112d518a8,&UNK_10d918730);
  FUN_100087bd4(&uStack_69,FUN_10093ade0,auStack_a0,uVar2);
  func_0x000107c61574(puVar5);
  func_0x000107c6142c(puStack_68);
  return 1;
}



/* Entry: 10093ad9c; end: 10093addf;  */

void FUN_10093ad9c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    FUN_10002969c(param_2,param_3);
    puVar1 = PTR___s7Combine18PassthroughSubjectCyxq_GAA9PublisherAAMc_11034ae18;
    func_0x000107c61520(PTR___s7Combine18PassthroughSubjectCyxq_GAA9PublisherAAMc_11034ae18,param_2)
    ;
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 10093ade0; end: 10093adfb;  */

void FUN_10093ade0(void)

{
  long unaff_x20;
  
  FUN_10093ae38(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 10093adfc; end: 10093ae37;  */

void FUN_10093adfc(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  func_0x000107c3ccd0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10093ae38; end: 10093af27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10093ae38(undefined8 param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_1130804a0;
  if (param_2 != 0) {
    uVar4 = *param_4;
    func_0x000107c61428(param_2 + _DAT_1130804a0,auStack_80,0x21,0);
    func_0x000107c61434(uVar4);
    uVar2 = *(undefined8 *)(param_2 + lVar1);
    func_0x000107c61558(uVar2);
    uVar3 = *(undefined8 *)(param_2 + lVar1);
    *(undefined8 *)(param_2 + lVar1) = 0x8000000000000000;
    FUN_10049915c(uVar4,param_3,uVar2);
    *(undefined8 *)(param_2 + lVar1) = uVar3;
    func_0x000107c614a8(auStack_80);
    func_0x000107c61170(param_2);
  }
  *(bool *)param_1 = param_2 == 0;
  return;
}



/* Entry: 10093af28; end: 10093af2b;  */

void FUN_10093af28(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10093af2c; end: 10093af4f;  */

void FUN_10093af2c(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10093af50; end: 10093b0bb; -[SCStoriesDataCoordinator _updateSummaryInfosWithViewStatesForAll:publicationId:storyUserId:storyId:] */

void FUN_10093af50(long param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined1 uStack_68;
  
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_10093bd54;
  puStack_90 = &UNK_1109fc400;
  uStack_68 = param_3;
  func_0x000107c61174(param_4);
  uStack_88 = param_4;
  func_0x000107c61174(param_5);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uStack_80 = param_5;
  uStack_78 = param_6;
  lStack_70 = param_1;
  func_0x000107c61174(param_6);
  func_0x000107c4f7c0(uVar3);
  func_0x000107c61180();
  puStack_e0 = puVar1;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_100ab5238;
  puStack_c8 = &UNK_1109446f8;
  uStack_c0 = param_4;
  uStack_b8 = param_5;
  uStack_b0 = param_3;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_4);
  func_0x000107c4e55c(uVar2,param_2,&puStack_a8,uVar3,&puStack_e0);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uStack_b8);
  func_0x000107c61170(uStack_c0);
  func_0x000107c61170(uStack_78);
  func_0x000107c61170(uStack_80);
  func_0x000107c61170(uStack_88);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_6);
  return;
}



/* Entry: 10093b0bc; end: 10093b1fb;  */

void FUN_10093b0bc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10093b1fc; end: 10093b223;  */

undefined ** FUN_10093b1fc(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 10093b224; end: 10093b263;  */

void FUN_10093b224(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x00010093b208();
  FUN_100082720("SpotlightWidgetServicesProviderWrapperScopeInitializationPluginProvider",0x47,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10093b264; end: 10093b26b;  */

void FUN_10093b264(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102d9d070);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10093b26c; end: 10093b2ef;  */

void FUN_10093b26c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102d9d070,param_2,&UNK_102d9d074,param_2,&UNK_102d9d09c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10093b2f0; end: 10093b313;  */

undefined ** FUN_10093b2f0(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 10093b314; end: 10093b393;  */

void FUN_10093b314(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1106b1058;
  func_0x000107c613fc(&UNK_1106b1058,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_10093b394,puVar1);
  return;
}



/* Entry: 10093b394; end: 10093b39b;  */

void FUN_10093b394(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112fb80f8,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112fb80f8,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1106b10f0;
  func_0x000107c613fc(&UNK_1106b10f0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_10394f33c;
  FUN_10058fa64(&UNK_10394f33c,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10093b39c; end: 10093b493;  */

void FUN_10093b39c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112fb80f8,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112fb80f8,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1106b10f0;
  func_0x000107c613fc(&UNK_1106b10f0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_10394f33c;
  FUN_10058fa64(&UNK_10394f33c,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10093b494; end: 10093b4b7;  */

void FUN_10093b494(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10093b4b8; end: 10093b82b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10093b4b8(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_78;
  long lStack_70;
  
  lVar2 = param_2;
  FUN_100388e8c();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112fb8108) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112fb8110) = param_3;
  *(undefined8 *)(lVar3 + _DAT_112fb8118) = param_4;
  *(undefined8 *)(lVar3 + _DAT_112fb8120) = param_5;
  *(undefined8 *)(lVar3 + _DAT_112fb8128) = param_6;
  *(undefined8 *)(lVar3 + _DAT_112fb8130) = param_7;
  *(undefined8 *)(lVar3 + _DAT_112fb8138) = param_8;
  *(undefined8 *)(lVar3 + _DAT_112fb8140) = param_9;
  *(undefined8 *)(lVar3 + _DAT_112fb8148) = param_10;
  *(undefined8 *)(lVar3 + _DAT_112fb8150) = param_11;
  *(undefined8 *)(lVar3 + _DAT_112fb8158) = param_12;
  *(undefined8 *)(lVar3 + _DAT_112fb8160) = param_13;
  *(undefined8 *)(lVar3 + _DAT_112fb8168) = param_14;
  *(undefined8 *)(lVar3 + _DAT_112fb8170) = param_15;
  *(undefined8 *)(lVar3 + _DAT_112fb8178) = param_16;
  *(undefined8 *)(lVar3 + _DAT_112fb8180) = param_17;
  *(undefined8 *)(lVar3 + _DAT_112fb8188) = param_18;
  *(undefined8 *)(lVar3 + _DAT_112fb8190) = param_19;
  *(undefined8 *)(lVar3 + _DAT_112fb8198) = param_20;
  *(undefined8 *)(lVar3 + _DAT_112fb81a0) = param_21;
  *(undefined8 *)(lVar3 + _DAT_112fb81a8) = param_22;
  *(undefined8 *)(lVar3 + _DAT_112fb81b0) = param_23;
  *(undefined8 *)(lVar3 + _DAT_112fb81b8) = param_24;
  *(undefined8 *)(lVar3 + _DAT_112fb81c0) = param_25;
  *(undefined8 *)(lVar3 + _DAT_112fb81c8) = param_26;
  *(undefined8 *)(lVar3 + _DAT_112fb81d0) = param_27;
  *(undefined8 *)(lVar3 + _DAT_112fb81d8) = param_28;
  *(undefined8 *)(lVar3 + _DAT_112fb81e0) = param_29;
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
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(param_25);
  func_0x000107c6157c(param_26);
  func_0x000107c6157c(param_27);
  func_0x000107c6157c(param_28);
  func_0x000107c6157c(param_29);
  plVar4 = &lStack_78;
  func_0x000107c61154(plVar4,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 10093b82c; end: 10093b9af;  */

void FUN_10093b82c(void)

{
  long unaff_x20;
  
  FUN_10093b4b8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200),
                *(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8),
                *(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8));
  return;
}



/* Entry: 10093b9b0; end: 10093b9d7;  */

undefined ** FUN_10093b9b0(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 10093b9d8; end: 10093ba17;  */

void FUN_10093b9d8(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x00010093b9bc();
  FUN_100082720("TalkScreenshotSendingServiceProviderWrapperScopeInitializationPluginProvider",0x4c,
                2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10093ba18; end: 10093ba1f;  */

void FUN_10093ba18(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102d35130);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10093ba20; end: 10093baa3;  */

void FUN_10093ba20(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102d35130,param_2,&UNK_102d35134,param_2,&UNK_102d3515c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10093baa4; end: 10093bacb;  */

undefined ** FUN_10093baa4(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 10093bacc; end: 10093bb0b;  */

void FUN_10093bacc(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x00010093bab0();
  FUN_100082720("TilePickerLauncherServiceProviderWrapperScopeInitializationPluginProvider",0x49,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10093bb0c; end: 10093bb13;  */

void FUN_10093bb0c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102fc59b4);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10093bb14; end: 10093bb97;  */

void FUN_10093bb14(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102fc59b4,param_2,&UNK_102fc59b8,param_2,&UNK_102fc59e0,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10093bb98; end: 10093bba3;  */

undefined ** FUN_10093bb98(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 10093bba4; end: 10093bc2f;  */

void FUN_10093bba4(undefined8 param_1)

{
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_10093bc30,param_1);
  return;
}



/* Entry: 10093bc30; end: 10093bc37;  */

void FUN_10093bc30(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_100079360(0);
  uVar1 = 0;
  FUN_100933ae0();
  FUN_10093bcfc();
  uVar2 = uVar1;
  FUN_100933b54();
  func_0x000107c61170(uVar1);
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  FUN_1005d8744(uVar2,&UNK_102fae878);
  *param_1 = uVar2;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10093bc38; end: 10093bcfb;  */

void FUN_10093bc38(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_100079360(0);
  uVar1 = 0;
  FUN_100933ae0();
  FUN_10093bcfc();
  uVar2 = uVar1;
  FUN_100933b54();
  func_0x000107c61170(uVar1);
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  FUN_1005d8744(uVar2,&UNK_102fae878,param_2,&UNK_102fae87c,param_2,&UNK_102fae8a4,param_2);
  *param_1 = uVar2;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10093bcfc; end: 10093bd03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10093bcfc(void)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined1 *)(unaff_x20 + _DAT_11309bb60) = 2;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10093bd04; end: 10093bd53; -[SCMessagingExperimentServiceImpl isTIVReplacementEnabled] */

undefined8 FUN_10093bd04(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c3ebd4();
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 10093bd54; end: 10093bd6f;  */

void FUN_10093bd54(long param_1,undefined *param_2)

{
  byte bVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  undefined4 uStack_45c;
  long lStack_458;
  long lStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined *puStack_400;
  undefined *puStack_3f8;
  undefined *puStack_3f0;
  undefined *puStack_3e8;
  undefined1 *puStack_3e0;
  code *pcStack_3d8;
  undefined *puStack_3d0;
  undefined *puStack_3c8;
  undefined *puStack_3c0;
  undefined *puStack_3b8;
  undefined *puStack_3b0;
  undefined *puStack_3a8;
  undefined *puStack_3a0;
  undefined *puStack_398;
  undefined8 uStack_390;
  long lStack_388;
  long *plStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  long lStack_348;
  long *plStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  long lStack_308;
  long *plStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  long lStack_2c8;
  long *plStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  bVar1 = *(byte *)(param_1 + 0x40);
  puVar9 = (undefined *)(ulong)bVar1;
  puVar3 = *(undefined **)(param_1 + 0x20);
  puVar12 = *(undefined **)(param_1 + 0x28);
  puVar13 = *(undefined **)(param_1 + 0x30);
  cVar2 = *(char *)(*(long *)(param_1 + 0x38) + 0x80);
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174();
  func_0x000107c61174(puVar3);
  puStack_3b8 = puVar12;
  func_0x000107c61174(puVar12);
  puStack_3a0 = puVar13;
  func_0x000107c61174(puVar13);
  puStack_3b0 = puVar3;
  puStack_398 = param_2;
  if ((bVar1 & 1) == 0) {
    puVar13 = puVar3;
    func_0x000107c4adac();
    if (((puVar13 == (undefined *)0x0) &&
        (puVar13 = puStack_3b8, func_0x000107c4adac(), puVar13 == (undefined *)0x0)) &&
       (puVar13 = puStack_3a0, func_0x000107c4adac(), puVar13 == (undefined *)0x0))
    goto LAB_10093c4ec;
    param_2 = puStack_398;
    if (cVar2 != '\0') {
      puVar12 = (undefined *)0x0;
      uVar11 = 1;
      func_0x0001084db7a4(1);
      func_0x000107c61180();
      puVar3 = puStack_3a0;
      func_0x000107c49d0c();
      func_0x000107c61170(uVar11);
      if ((int)puVar3 != 0) {
        puVar9 = param_2;
        func_0x0001084db7f4(param_2,puStack_3a0);
        func_0x000107c61180();
        if (puVar9 != (undefined *)0x0) {
          puVar3 = puVar9;
          func_0x000107c5c068();
          func_0x000107c61180();
          puVar12 = puVar3;
          func_0x000107c40808();
          func_0x000107c61170(puVar3);
          if (puVar12 != (undefined *)0x0) {
            puVar3 = puVar9;
            func_0x000107c5c068();
            func_0x000107c61180();
            FUN_100960bc0(param_2,puStack_3a0,puVar3);
            func_0x000107c61170(puVar3);
          }
        }
        func_0x000107c61170(puVar9);
        goto LAB_10093c4ec;
      }
    }
    puVar3 = puStack_3b0;
    func_0x000107c4adac();
    if ((puVar3 == (undefined *)0x0) ||
       (puVar3 = puStack_3b8, func_0x000107c4adac(), puVar3 == (undefined *)0x0)) {
      puVar3 = puStack_3b0;
      func_0x000107c4adac();
      puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
      if (puVar3 == (undefined *)0x0) {
        puStack_90 = puStack_3b8;
        func_0x000107c3e17c();
        func_0x000107c61180();
      }
      else {
        puStack_88 = puStack_3b0;
        func_0x000107c3e17c();
        func_0x000107c61180();
      }
    }
    else {
      puStack_80 = puStack_3b0;
      puStack_78 = puStack_3b8;
      puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x000107c3e17c();
      func_0x000107c61180();
    }
  }
  else {
    puVar3 = param_2;
    FUN_10093c798();
    func_0x000107c61180();
    puVar12 = puVar3;
    func_0x000107c3e1b8();
    func_0x000107c61180();
    puVar13 = puVar12;
    FUN_100504554();
    func_0x000107c61170(puVar12);
    func_0x000107c61170(puVar3);
  }
  puVar3 = puStack_3a0;
  func_0x000107c4adac();
  puVar12 = puVar13;
  if ((puVar3 != (undefined *)0x0) &&
     (puVar3 = puVar13, func_0x000107c40404(), ((ulong)puVar3 & 1) == 0)) {
    puVar3 = puVar13;
    func_0x000107c4d2d4();
    func_0x000107c3d798();
    puVar12 = puVar3;
    func_0x000107c40794();
    func_0x000107c61170(puVar13);
    func_0x000107c61170(puVar3);
    param_2 = puStack_398;
  }
  FUN_10094ff70(param_2,puVar12,cVar2);
  func_0x000107c61180();
  uStack_2a8 = 0;
  uStack_2b0 = 0;
  uStack_298 = 0;
  uStack_2a0 = 0;
  lStack_2c8 = 0;
  uStack_2d0 = 0;
  uStack_2b8 = 0;
  plStack_2c0 = (long *)0x0;
  puStack_3a8 = puVar12;
  func_0x000107c61174();
  puVar3 = param_2;
  func_0x000107c4080c();
  if (puVar3 != (undefined *)0x0) {
    lVar14 = *plStack_2c0;
    do {
      puVar13 = (undefined *)0x0;
      do {
        if (*plStack_2c0 != lVar14) {
          func_0x000107c61128(param_2);
        }
        uVar11 = *(undefined8 *)(lStack_2c8 + (long)puVar13 * 8);
        puVar9 = param_2;
        func_0x000107c4d9e8();
        func_0x000107c61180();
        puVar12 = puVar9;
        func_0x000107c5c068();
        func_0x000107c61180();
        func_0x000107c61170(puVar9);
        puVar9 = puVar12;
        func_0x000107c40808();
        if (puVar9 != (undefined *)0x0) {
          FUN_100960bc0(puStack_398,uVar11,puVar12);
        }
        func_0x000107c61170(puVar12);
        puVar13 = puVar13 + 1;
      } while (puVar3 != puVar13);
      puVar3 = param_2;
      func_0x000107c4080c();
    } while (puVar3 != (undefined *)0x0);
  }
  puVar3 = (undefined *)0x0;
  func_0x000107c61170(param_2);
  puVar13 = puStack_3a8;
  puVar9 = param_2;
  func_0x000107c40808();
  puVar4 = puVar13;
  func_0x000107c40808();
  if (puVar9 < puVar4) {
    func_0x000107c4d2d4();
    puVar3 = param_2;
    puStack_3c0 = puVar13;
    func_0x000107c3db60(param_2);
    func_0x000107c61180();
    func_0x000107c4ff94(puStack_3c0);
    func_0x000107c61170(puVar3);
    puVar13 = puStack_398;
    func_0x0001084e6550(puStack_398,puStack_3c0);
    func_0x000107c61180();
    uStack_2e8 = 0;
    uStack_2f0 = 0;
    uStack_2d8 = 0;
    uStack_2e0 = 0;
    lStack_308 = 0;
    uStack_310 = 0;
    uStack_2f8 = 0;
    plStack_300 = (long *)0x0;
    func_0x000107c61174();
    puVar3 = puVar13;
    func_0x000107c4080c();
    if (puVar3 != (undefined *)0x0) {
      lVar14 = *plStack_300;
      do {
        puVar9 = (undefined *)0x0;
        do {
          if (*plStack_300 != lVar14) {
            func_0x000107c61128(puVar13);
          }
          uVar11 = *(undefined8 *)(lStack_308 + (long)puVar9 * 8);
          puVar4 = puVar13;
          func_0x000107c4d9e8();
          func_0x000107c61180();
          puVar12 = puVar4;
          func_0x000107c5c068();
          func_0x000107c61180();
          func_0x000107c61170(puVar4);
          puVar4 = puVar12;
          func_0x000107c40808();
          if (puVar4 != (undefined *)0x0) {
            FUN_100960bc0(puStack_398,uVar11,puVar12);
          }
          func_0x000107c61170(puVar12);
          puVar9 = puVar9 + 1;
        } while (puVar3 != puVar9);
        puVar3 = puVar13;
        func_0x000107c4080c();
      } while (puVar3 != (undefined *)0x0);
    }
    func_0x000107c61170(puVar13);
    puVar3 = puStack_3c0;
    func_0x000107c4d2d4();
    puVar9 = puVar13;
    puStack_3c8 = puVar3;
    func_0x000107c3db60(puVar13);
    func_0x000107c61180();
    func_0x000107c4ff94(puStack_3c8);
    func_0x000107c61170(puVar9);
    puVar4 = puStack_398;
    func_0x0001084e73c8(puStack_398,puStack_3c8);
    func_0x000107c61180();
    uStack_328 = 0;
    uStack_330 = 0;
    uStack_318 = 0;
    uStack_320 = 0;
    lStack_348 = 0;
    uStack_350 = 0;
    uStack_338 = 0;
    plStack_340 = (long *)0x0;
    func_0x000107c61174();
    puVar3 = puVar4;
    func_0x000107c4080c();
    if (puVar3 != (undefined *)0x0) {
      lVar14 = *plStack_340;
      do {
        puVar9 = (undefined *)0x0;
        do {
          if (*plStack_340 != lVar14) {
            func_0x000107c61128(puVar4);
          }
          uVar11 = *(undefined8 *)(lStack_348 + (long)puVar9 * 8);
          puVar5 = puVar4;
          func_0x000107c4d9e8();
          func_0x000107c61180();
          puVar12 = puVar5;
          func_0x000107c5c068();
          func_0x000107c61180();
          func_0x000107c61170(puVar5);
          puVar5 = puVar12;
          func_0x000107c40808();
          if (puVar5 != (undefined *)0x0) {
            FUN_100960bc0(puStack_398,uVar11,puVar12);
          }
          func_0x000107c61170(puVar12);
          puVar9 = puVar9 + 1;
        } while (puVar3 != puVar9);
        puVar3 = puVar4;
        func_0x000107c4080c();
      } while (puVar3 != (undefined *)0x0);
    }
    puVar3 = (undefined *)0x0;
    func_0x000107c61170(puVar4);
    puVar9 = puStack_3c8;
    func_0x000107c4d2d4();
    puVar5 = puVar4;
    puStack_3d0 = puVar9;
    func_0x000107c3db60(puVar4);
    func_0x000107c61180();
    func_0x000107c4ff94(puStack_3d0);
    func_0x000107c61170(puVar5);
    puVar5 = puStack_398;
    func_0x0001084eb4fc(puStack_398,puStack_3a8);
    func_0x000107c61180();
    uStack_368 = 0;
    uStack_370 = 0;
    uStack_358 = 0;
    uStack_360 = 0;
    lStack_388 = 0;
    uStack_390 = 0;
    uStack_378 = 0;
    plStack_380 = (long *)0x0;
    func_0x000107c61174();
    puVar9 = puVar5;
    func_0x000107c4080c();
    if (puVar9 != (undefined *)0x0) {
      lVar14 = *plStack_380;
      do {
        puVar10 = (undefined *)0x0;
        do {
          if (*plStack_380 != lVar14) {
            func_0x000107c61128(puVar5);
          }
          puVar12 = *(undefined **)(lStack_388 + (long)puVar10 * 8);
          puVar3 = puVar5;
          func_0x000107c4d9e8();
          func_0x000107c61180();
          puVar6 = puVar3;
          func_0x000107c5c068();
          func_0x000107c61180();
          func_0x000107c61170(puVar3);
          puVar7 = puVar6;
          func_0x000107c40808();
          if (puVar7 != (undefined *)0x0) {
            FUN_100960bc0(puStack_398,puVar12,puVar6);
          }
          func_0x000107c61170(puVar6);
          puVar10 = puVar10 + 1;
        } while (puVar9 != puVar10);
        puVar9 = puVar5;
        func_0x000107c4080c();
      } while (puVar9 != (undefined *)0x0);
    }
    puVar9 = (undefined *)0x0;
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puStack_3d0);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puStack_3c8);
    func_0x000107c61170(puVar13);
    func_0x000107c61170(puStack_3c0);
  }
  func_0x000107c61170(param_2);
  func_0x000107c61170(puStack_3a8);
LAB_10093c4ec:
  func_0x000107c61170(puStack_3a0);
  func_0x000107c61170(puStack_3b8);
  func_0x000107c61170(puStack_3b0);
  puVar13 = puStack_398;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    func_0x000107c60e78();
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar9);
    func_0x000107c61170(puStack_3a0);
    func_0x000107c61170(puStack_3b8);
    func_0x000107c61170(puStack_3b0);
    func_0x000107c61170(puStack_398);
    puVar4 = puVar13;
    func_0x000107c60bd8();
    pcStack_3d8 = FUN_10093c798;
    puStack_400 = puVar12;
    puStack_3f8 = puVar3;
    puStack_3f0 = puVar9;
    puStack_3e8 = puVar13;
    puStack_3e0 = &stack0xfffffffffffffff0;
    func_0x000107c61174();
    func_0x000107c61158(PTR_PTR_1126d5360);
    if (puVar4 == (undefined *)0x0) {
      uStack_410 = 0;
      uStack_428 = 0;
      uStack_430 = 0;
      uStack_418 = 0;
      uStack_420 = 0;
      uStack_438 = 0;
      uStack_440 = 0;
    }
    else {
      func_0x000107c430a4(&uStack_440,puVar4);
    }
    lStack_458 = 0;
    lStack_450 = 0;
    uStack_448 = 0;
    uStack_45c = 0;
    puVar8 = &uStack_440;
    func_0x00010054c81c(puVar8,&lStack_458,&uStack_45c);
    func_0x000107c61180();
    if (lStack_458 != 0) {
      lStack_450 = lStack_458;
      func_0x000107c60e14();
    }
    FUN_1000e76e0(&uStack_418);
    func_0x000107c61170(uStack_428);
    func_0x000107c61170(uStack_430);
    func_0x000107c61170(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
    return;
  }
  return;
}



/* Entry: 10093bd70; end: 10093c797;  */

void FUN_10093bd70(undefined *param_1,undefined *param_2,undefined *param_3,undefined *param_4,
                  undefined *param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined4 uStack_45c;
  long lStack_458;
  long lStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined *puStack_400;
  undefined *puStack_3f8;
  undefined *puStack_3f0;
  undefined *puStack_3e8;
  undefined1 *puStack_3e0;
  code *pcStack_3d8;
  undefined *puStack_3d0;
  undefined *puStack_3c8;
  undefined *puStack_3c0;
  undefined *puStack_3b8;
  undefined *puStack_3b0;
  undefined *puStack_3a8;
  undefined *puStack_3a0;
  undefined *puStack_398;
  undefined8 uStack_390;
  long lStack_388;
  long *plStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  long lStack_348;
  long *plStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  long lStack_308;
  long *plStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  long lStack_2c8;
  long *plStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174();
  func_0x000107c61174(param_3);
  puStack_3b8 = param_4;
  func_0x000107c61174(param_4);
  puStack_3a0 = param_5;
  func_0x000107c61174(param_5);
  puStack_3b0 = param_3;
  puStack_398 = param_1;
  if (((ulong)param_2 & 1) == 0) {
    puVar1 = param_3;
    func_0x000107c4adac();
    if (((puVar1 == (undefined *)0x0) &&
        (puVar1 = puStack_3b8, func_0x000107c4adac(), puVar1 == (undefined *)0x0)) &&
       (puVar1 = puStack_3a0, func_0x000107c4adac(), puVar1 == (undefined *)0x0))
    goto LAB_10093c4ec;
    param_1 = puStack_398;
    if ((int)param_6 != 0) {
      param_4 = (undefined *)0x0;
      uVar6 = 1;
      func_0x0001084db7a4(1);
      func_0x000107c61180();
      param_3 = puStack_3a0;
      func_0x000107c49d0c();
      func_0x000107c61170(uVar6);
      if ((int)param_3 != 0) {
        param_2 = param_1;
        func_0x0001084db7f4(param_1,puStack_3a0);
        func_0x000107c61180();
        if (param_2 != (undefined *)0x0) {
          param_3 = param_2;
          func_0x000107c5c068();
          func_0x000107c61180();
          param_4 = param_3;
          func_0x000107c40808();
          func_0x000107c61170(param_3);
          if (param_4 != (undefined *)0x0) {
            param_3 = param_2;
            func_0x000107c5c068();
            func_0x000107c61180();
            FUN_100960bc0(param_1,puStack_3a0,param_3);
            func_0x000107c61170(param_3);
          }
        }
        func_0x000107c61170(param_2);
        goto LAB_10093c4ec;
      }
    }
    puVar1 = puStack_3b0;
    func_0x000107c4adac();
    if ((puVar1 == (undefined *)0x0) ||
       (puVar1 = puStack_3b8, func_0x000107c4adac(), puVar1 == (undefined *)0x0)) {
      puVar1 = puStack_3b0;
      func_0x000107c4adac();
      puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
      if (puVar1 == (undefined *)0x0) {
        puStack_90 = puStack_3b8;
        func_0x000107c3e17c();
        func_0x000107c61180();
      }
      else {
        puStack_88 = puStack_3b0;
        func_0x000107c3e17c();
        func_0x000107c61180();
      }
    }
    else {
      puStack_80 = puStack_3b0;
      puStack_78 = puStack_3b8;
      puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x000107c3e17c();
      func_0x000107c61180();
    }
  }
  else {
    puVar1 = param_1;
    FUN_10093c798();
    func_0x000107c61180();
    puVar8 = puVar1;
    func_0x000107c3e1b8();
    func_0x000107c61180();
    puVar7 = puVar8;
    FUN_100504554();
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar1);
  }
  puVar1 = puStack_3a0;
  func_0x000107c4adac();
  param_4 = puVar7;
  if ((puVar1 != (undefined *)0x0) &&
     (puVar1 = puVar7, func_0x000107c40404(), ((ulong)puVar1 & 1) == 0)) {
    puVar1 = puVar7;
    func_0x000107c4d2d4();
    func_0x000107c3d798();
    param_4 = puVar1;
    func_0x000107c40794();
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar1);
    param_1 = puStack_398;
  }
  FUN_10094ff70(param_1,param_4,param_6);
  func_0x000107c61180();
  uStack_2a8 = 0;
  uStack_2b0 = 0;
  uStack_298 = 0;
  uStack_2a0 = 0;
  lStack_2c8 = 0;
  uStack_2d0 = 0;
  uStack_2b8 = 0;
  plStack_2c0 = (long *)0x0;
  puStack_3a8 = param_4;
  func_0x000107c61174();
  puVar1 = param_1;
  func_0x000107c4080c();
  if (puVar1 != (undefined *)0x0) {
    lVar10 = *plStack_2c0;
    do {
      puVar7 = (undefined *)0x0;
      do {
        if (*plStack_2c0 != lVar10) {
          func_0x000107c61128(param_1);
        }
        uVar6 = *(undefined8 *)(lStack_2c8 + (long)puVar7 * 8);
        puVar8 = param_1;
        func_0x000107c4d9e8();
        func_0x000107c61180();
        param_4 = puVar8;
        func_0x000107c5c068();
        func_0x000107c61180();
        func_0x000107c61170(puVar8);
        puVar8 = param_4;
        func_0x000107c40808();
        if (puVar8 != (undefined *)0x0) {
          FUN_100960bc0(puStack_398,uVar6,param_4);
        }
        func_0x000107c61170(param_4);
        puVar7 = puVar7 + 1;
      } while (puVar1 != puVar7);
      puVar1 = param_1;
      func_0x000107c4080c();
    } while (puVar1 != (undefined *)0x0);
  }
  param_3 = (undefined *)0x0;
  func_0x000107c61170(param_1);
  puVar1 = puStack_3a8;
  param_2 = param_1;
  func_0x000107c40808();
  puVar7 = puVar1;
  func_0x000107c40808();
  if (param_2 < puVar7) {
    func_0x000107c4d2d4();
    puVar7 = param_1;
    puStack_3c0 = puVar1;
    func_0x000107c3db60(param_1);
    func_0x000107c61180();
    func_0x000107c4ff94(puStack_3c0);
    func_0x000107c61170(puVar7);
    puVar1 = puStack_398;
    func_0x0001084e6550(puStack_398,puStack_3c0);
    func_0x000107c61180();
    uStack_2e8 = 0;
    uStack_2f0 = 0;
    uStack_2d8 = 0;
    uStack_2e0 = 0;
    lStack_308 = 0;
    uStack_310 = 0;
    uStack_2f8 = 0;
    plStack_300 = (long *)0x0;
    func_0x000107c61174();
    puVar7 = puVar1;
    func_0x000107c4080c();
    if (puVar7 != (undefined *)0x0) {
      lVar10 = *plStack_300;
      do {
        puVar8 = (undefined *)0x0;
        do {
          if (*plStack_300 != lVar10) {
            func_0x000107c61128(puVar1);
          }
          uVar6 = *(undefined8 *)(lStack_308 + (long)puVar8 * 8);
          puVar9 = puVar1;
          func_0x000107c4d9e8();
          func_0x000107c61180();
          param_4 = puVar9;
          func_0x000107c5c068();
          func_0x000107c61180();
          func_0x000107c61170(puVar9);
          puVar9 = param_4;
          func_0x000107c40808();
          if (puVar9 != (undefined *)0x0) {
            FUN_100960bc0(puStack_398,uVar6,param_4);
          }
          func_0x000107c61170(param_4);
          puVar8 = puVar8 + 1;
        } while (puVar7 != puVar8);
        puVar7 = puVar1;
        func_0x000107c4080c();
      } while (puVar7 != (undefined *)0x0);
    }
    func_0x000107c61170(puVar1);
    puVar7 = puStack_3c0;
    func_0x000107c4d2d4();
    puVar8 = puVar1;
    puStack_3c8 = puVar7;
    func_0x000107c3db60(puVar1);
    func_0x000107c61180();
    func_0x000107c4ff94(puStack_3c8);
    func_0x000107c61170(puVar8);
    puVar7 = puStack_398;
    func_0x0001084e73c8(puStack_398,puStack_3c8);
    func_0x000107c61180();
    uStack_328 = 0;
    uStack_330 = 0;
    uStack_318 = 0;
    uStack_320 = 0;
    lStack_348 = 0;
    uStack_350 = 0;
    uStack_338 = 0;
    plStack_340 = (long *)0x0;
    func_0x000107c61174();
    puVar8 = puVar7;
    func_0x000107c4080c();
    if (puVar8 != (undefined *)0x0) {
      lVar10 = *plStack_340;
      do {
        puVar9 = (undefined *)0x0;
        do {
          if (*plStack_340 != lVar10) {
            func_0x000107c61128(puVar7);
          }
          uVar6 = *(undefined8 *)(lStack_348 + (long)puVar9 * 8);
          puVar5 = puVar7;
          func_0x000107c4d9e8();
          func_0x000107c61180();
          param_4 = puVar5;
          func_0x000107c5c068();
          func_0x000107c61180();
          func_0x000107c61170(puVar5);
          puVar5 = param_4;
          func_0x000107c40808();
          if (puVar5 != (undefined *)0x0) {
            FUN_100960bc0(puStack_398,uVar6,param_4);
          }
          func_0x000107c61170(param_4);
          puVar9 = puVar9 + 1;
        } while (puVar8 != puVar9);
        puVar8 = puVar7;
        func_0x000107c4080c();
      } while (puVar8 != (undefined *)0x0);
    }
    param_3 = (undefined *)0x0;
    func_0x000107c61170(puVar7);
    puVar8 = puStack_3c8;
    func_0x000107c4d2d4();
    puVar9 = puVar7;
    puStack_3d0 = puVar8;
    func_0x000107c3db60(puVar7);
    func_0x000107c61180();
    func_0x000107c4ff94(puStack_3d0);
    func_0x000107c61170(puVar9);
    puVar8 = puStack_398;
    func_0x0001084eb4fc(puStack_398,puStack_3a8);
    func_0x000107c61180();
    uStack_368 = 0;
    uStack_370 = 0;
    uStack_358 = 0;
    uStack_360 = 0;
    lStack_388 = 0;
    uStack_390 = 0;
    uStack_378 = 0;
    plStack_380 = (long *)0x0;
    func_0x000107c61174();
    puVar9 = puVar8;
    func_0x000107c4080c();
    if (puVar9 != (undefined *)0x0) {
      lVar10 = *plStack_380;
      do {
        puVar5 = (undefined *)0x0;
        do {
          if (*plStack_380 != lVar10) {
            func_0x000107c61128(puVar8);
          }
          param_4 = *(undefined **)(lStack_388 + (long)puVar5 * 8);
          param_3 = puVar8;
          func_0x000107c4d9e8();
          func_0x000107c61180();
          puVar2 = param_3;
          func_0x000107c5c068();
          func_0x000107c61180();
          func_0x000107c61170(param_3);
          puVar3 = puVar2;
          func_0x000107c40808();
          if (puVar3 != (undefined *)0x0) {
            FUN_100960bc0(puStack_398,param_4,puVar2);
          }
          func_0x000107c61170(puVar2);
          puVar5 = puVar5 + 1;
        } while (puVar9 != puVar5);
        puVar9 = puVar8;
        func_0x000107c4080c();
      } while (puVar9 != (undefined *)0x0);
    }
    param_2 = (undefined *)0x0;
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puStack_3d0);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puStack_3c8);
    func_0x000107c61170(puVar1);
    func_0x000107c61170(puStack_3c0);
  }
  func_0x000107c61170(param_1);
  func_0x000107c61170(puStack_3a8);
LAB_10093c4ec:
  func_0x000107c61170(puStack_3a0);
  func_0x000107c61170(puStack_3b8);
  func_0x000107c61170(puStack_3b0);
  puVar1 = puStack_398;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    func_0x000107c60e78();
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_2);
    func_0x000107c61170(puStack_3a0);
    func_0x000107c61170(puStack_3b8);
    func_0x000107c61170(puStack_3b0);
    func_0x000107c61170(puStack_398);
    puVar7 = puVar1;
    func_0x000107c60bd8();
    pcStack_3d8 = FUN_10093c798;
    puStack_400 = param_4;
    puStack_3f8 = param_3;
    puStack_3f0 = param_2;
    puStack_3e8 = puVar1;
    puStack_3e0 = &stack0xfffffffffffffff0;
    func_0x000107c61174();
    func_0x000107c61158(PTR_PTR_1126d5360);
    if (puVar7 == (undefined *)0x0) {
      uStack_410 = 0;
      uStack_428 = 0;
      uStack_430 = 0;
      uStack_418 = 0;
      uStack_420 = 0;
      uStack_438 = 0;
      uStack_440 = 0;
    }
    else {
      func_0x000107c430a4(&uStack_440,puVar7);
    }
    lStack_458 = 0;
    lStack_450 = 0;
    uStack_448 = 0;
    uStack_45c = 0;
    puVar4 = &uStack_440;
    func_0x00010054c81c(puVar4,&lStack_458,&uStack_45c);
    func_0x000107c61180();
    if (lStack_458 != 0) {
      lStack_450 = lStack_458;
      func_0x000107c60e14();
    }
    FUN_1000e76e0(&uStack_418);
    func_0x000107c61170(uStack_428);
    func_0x000107c61170(uStack_430);
    func_0x000107c61170(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  return;
}



/* Entry: 10093c798; end: 10093c86f;  */

void FUN_10093c798(long param_1)

{
  undefined8 *puVar1;
  undefined4 uStack_8c;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000107c61174();
  func_0x000107c61158(PTR_PTR_1126d5360);
  if (param_1 == 0) {
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x000107c430a4(&uStack_70,param_1);
  }
  lStack_88 = 0;
  lStack_80 = 0;
  uStack_78 = 0;
  uStack_8c = 0;
  puVar1 = &uStack_70;
  func_0x00010054c81c(puVar1,&lStack_88,&uStack_8c);
  func_0x000107c61180();
  if (lStack_88 != 0) {
    lStack_80 = lStack_88;
    func_0x000107c60e14();
  }
  FUN_1000e76e0(&uStack_48);
  func_0x000107c61170(uStack_58);
  func_0x000107c61170(uStack_60);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10093c870; end: 10093c89f;  */

void FUN_10093c870(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf55450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_createConfigProviderForNamespace_1125b2eb8,0xf);
  return;
}



/* Entry: 10093c8a0; end: 10093c91f;  */

void FUN_10093c8a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104e7370;
  func_0x000107c613fc(&UNK_1104e7370,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_10093c920,puVar1);
  return;
}



/* Entry: 10093c920; end: 10093c927;  */

void FUN_10093c920(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112e6e190,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e6e190,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1104eb808;
  func_0x000107c613fc(&UNK_1104eb808,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_10222ada8;
  FUN_10058fa64(&UNK_10222ada8,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10093c928; end: 10093ca1f;  */

void FUN_10093c928(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112e6e190,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e6e190,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1104eb808;
  func_0x000107c613fc(&UNK_1104eb808,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_10222ada8;
  FUN_10058fa64(&UNK_10222ada8,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10093ca20; end: 10093ca43;  */

void FUN_10093ca20(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10093ca44; end: 100941a3b;  */

void FUN_10093ca44(void)

{
  undefined8 extraout_x8;
  long unaff_x20;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x00010093e408(extraout_x8,*(undefined8 *)(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                      *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                      *(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50),
                      *(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)(unaff_x20 + 0x60),
                      *(undefined8 *)(unaff_x20 + 0x68),*(undefined8 *)(unaff_x20 + 0x70),
                      *(undefined8 *)(unaff_x20 + 0x78),*(undefined8 *)(unaff_x20 + 0x80),
                      *(undefined8 *)(unaff_x20 + 0x88),*(undefined8 *)(unaff_x20 + 0x90),
                      *(undefined8 *)(unaff_x20 + 0x98),*(undefined8 *)(unaff_x20 + 0xa0),
                      *(undefined8 *)(unaff_x20 + 0xa8),*(undefined8 *)(unaff_x20 + 0xb0),
                      *(undefined8 *)(unaff_x20 + 0xb8),*(undefined8 *)(unaff_x20 + 0xc0),
                      *(undefined8 *)(unaff_x20 + 200),*(undefined8 *)(unaff_x20 + 0xd0),
                      *(undefined8 *)(unaff_x20 + 0xd8),*(undefined8 *)(unaff_x20 + 0xe0),
                      *(undefined8 *)(unaff_x20 + 0xe8),*(undefined8 *)(unaff_x20 + 0xf0),
                      *(undefined8 *)(unaff_x20 + 0xf8),*(undefined8 *)(unaff_x20 + 0x100),
                      *(undefined8 *)(unaff_x20 + 0x108),*(undefined8 *)(unaff_x20 + 0x110),
                      *(undefined8 *)(unaff_x20 + 0x118),*(undefined8 *)(unaff_x20 + 0x120),
                      *(undefined8 *)(unaff_x20 + 0x128),*(undefined8 *)(unaff_x20 + 0x130),
                      *(undefined8 *)(unaff_x20 + 0x138),*(undefined8 *)(unaff_x20 + 0x140),
                      *(undefined8 *)(unaff_x20 + 0x148),*(undefined8 *)(unaff_x20 + 0x150),
                      *(undefined8 *)(unaff_x20 + 0x158),*(undefined8 *)(unaff_x20 + 0x160),
                      *(undefined8 *)(unaff_x20 + 0x168),*(undefined8 *)(unaff_x20 + 0x170),
                      *(undefined8 *)(unaff_x20 + 0x178),*(undefined8 *)(unaff_x20 + 0x180),
                      *(undefined8 *)(unaff_x20 + 0x188),*(undefined8 *)(unaff_x20 + 400),
                      *(undefined8 *)(unaff_x20 + 0x198),*(undefined8 *)(unaff_x20 + 0x1a0),
                      *(undefined8 *)(unaff_x20 + 0x1a8),*(undefined8 *)(unaff_x20 + 0x1b0),
                      *(undefined8 *)(unaff_x20 + 0x1b8),*(undefined8 *)(unaff_x20 + 0x1c0),
                      *(undefined8 *)(unaff_x20 + 0x1c8),*(undefined8 *)(unaff_x20 + 0x1d0),
                      *(undefined8 *)(unaff_x20 + 0x1d8),*(undefined8 *)(unaff_x20 + 0x1e0),
                      *(undefined8 *)(unaff_x20 + 0x1e8),*(undefined8 *)(unaff_x20 + 0x1f0),
                      *(undefined8 *)(unaff_x20 + 0x1f8),*(undefined8 *)(unaff_x20 + 0x200),
                      *(undefined8 *)(unaff_x20 + 0x208),*(undefined8 *)(unaff_x20 + 0x210),
                      *(undefined8 *)(unaff_x20 + 0x218),*(undefined8 *)(unaff_x20 + 0x220),
                      *(undefined8 *)(unaff_x20 + 0x228),*(undefined8 *)(unaff_x20 + 0x230),
                      *(undefined8 *)(unaff_x20 + 0x238));
  return;
}



/* Entry: 100941a3c; end: 100941a47; +[SCStoriesSummaryInfo table] */

undefined * FUN_100941a3c(void)

{
  return &UNK_10f4a25af;
}



/* Entry: 100941a48; end: 10094284f;  */

void FUN_100941a48(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x138));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x140));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x148));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x150));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x158));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x160));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x168));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x170));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x178));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x180));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x188));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 400));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x198));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x208));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x210));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x218));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x220));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x228));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x230));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x238));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x240));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x248));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x250));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 600));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x260));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x268));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x270));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x278));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x280));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x288));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x290));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x298));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x300));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x308));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x310));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x318));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 800));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x328));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x330));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x338));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x340));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x348));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x350));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x358));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x360));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x368));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x370));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x378));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x380));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x388));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x390));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x398));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 1000));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x400));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x408));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x410));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x418));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x420));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x428));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x430));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x438));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x440));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x448));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x450));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x458));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x460));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x468));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x470));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x478));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x480));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x488));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x490));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x498));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x500));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x508));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x510));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x518));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x520));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x528));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x530));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x538));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x540));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x548));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x550));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x558));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x560));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x568));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x570));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x578));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x580));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x588));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x590));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x598));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x600));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x608));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x610));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x618));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x620));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x628));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x630));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x638));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x640));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x648));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x650));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x658));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x660));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x668));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x670));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x678));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x680));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x688));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x690));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x698));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x700));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x708));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x710));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x718));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x720));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x728));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x730));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x738));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x740));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x748));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x750));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x758));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x760));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x768));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x770));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x778));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x780));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x788));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x790));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x798));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 2000));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x800));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x808));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x810));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x818));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x820));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x828));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x830));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x838));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x840));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x848));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x850));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x858));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x860));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x868));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x870));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x878));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x880));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x888));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x890));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x898));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x8a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x8a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x8b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x8b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x8c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x8c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x8d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x8d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x8e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x8e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x8f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x8f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x900));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x908));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x910));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x918));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x920));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x928));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x930));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x938));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x940));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x948));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x950));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x958));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x960));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x968));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x970));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x978));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x980));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x988));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x990));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x998));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x9a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x9a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x9b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x9b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x9c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x9c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x9d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x9d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x9e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x9e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x9f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x9f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa00));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa08));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xaa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xaa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xab0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xab8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xac0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xac8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xad0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xad8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xae0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xae8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xaf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xaf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb00));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb08));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xba0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xba8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xbb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 3000));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xbc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xbc8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xbd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xbd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xbe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xbe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xbf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xbf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc00));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc08));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xca0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xca8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xcb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xcb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xcc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xcc8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xcd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xcd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xce0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xce8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xcf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xcf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd00));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd08));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xda0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xda8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xdb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xdb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xdc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xdc8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100942850; end: 10094285b;  */

undefined ** FUN_100942850(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 10094285c; end: 1009428e7;  */

void FUN_10094285c(undefined8 param_1)

{
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1009428e8,param_1);
  return;
}



/* Entry: 1009428e8; end: 1009428ef;  */

void FUN_1009428e8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_102e40900);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009428f0; end: 100942973;  */

void FUN_1009428f0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_102e40900,param_2,FUN_100942974,param_2,&UNK_102e40904,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100942974; end: 10094299b;  */

void FUN_100942974(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10094299c; end: 100942c33;  */

void FUN_10094299c(long *param_1,long param_2)

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
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
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
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  FUN_100083b20(&uStack_a8);
  FUN_10033c848();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  *(undefined8 *)(param_2 + 0x48) = uStack_a0;
  *(undefined8 *)(param_2 + 0x50) = uStack_a8;
  func_0x000100942c68();
  func_0x000107c613fc();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar5 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar6 = uStack_98;
  func_0x000107c61174(uStack_98);
  uVar7 = uStack_a0;
  func_0x000107c61174();
  uVar8 = uStack_a8;
  func_0x000107c61174();
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar7);
  func_0x000107c61174();
  uVar9 = uStack_68;
  func_0x000107c61174();
  uVar10 = uVar9;
  FUN_100942c88();
  *(undefined8 *)(param_2 + 0x10) = uVar10;
  func_0x000107c6157c();
  FUN_100942e2c();
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61574(uVar10);
  *param_1 = param_2;
  return;
}



/* Entry: 100942c34; end: 100942c87;  */

void FUN_100942c34(void)

{
  long unaff_x20;
  
  FUN_10094299c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 100942c88; end: 100942e23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100942c88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,long param_9
                  )

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  uVar3 = param_3;
  func_0x000107c4b8d8();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar3;
  uVar3 = param_4;
  func_0x000107c5aa74();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x20 + 0x20) = uVar3;
  uVar3 = param_4;
  func_0x000107c4ec94();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x20 + 0x18) = uVar3;
  uVar3 = param_5;
  func_0x000107c5dc04();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x20 + 0x28) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x30) = param_6;
  func_0x000107c61174(param_6);
  uVar3 = param_7;
  func_0x000107c52030();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x20 + 0x38) = uVar3;
  uVar3 = param_2;
  func_0x000107c41920();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x20 + 0x40) = uVar3;
  uVar3 = param_3;
  func_0x000107c5d9dc();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x20 + 0x48) = uVar3;
  uVar3 = param_2;
  func_0x000107c4b8d0();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x20 + 0x50) = uVar3;
  lVar2 = param_8;
  func_0x000107c42eac();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_8);
    *(long *)(unaff_x20 + 0x58) = lVar2;
    uVar3 = *(undefined8 *)(param_9 + _DAT_113092298);
    func_0x000107c615f0(uVar3);
    func_0x000107c61170(param_9);
    *(undefined8 *)(unaff_x20 + 0x60) = uVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100942e24);
  (*pcVar1)();
}



/* Entry: 100942e24; end: 100942e2b; -[SCLocationSharingServices sharingService] */

undefined8 FUN_100942e24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 100942e2c; end: 10094346b;  */

/* WARNING: Possible PIC construction at 0x000100943354: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100943438: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100943358) */
/* WARNING: Removing unreachable block (ram,0x00010094343c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100942e2c(void)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  undefined *puVar13;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 uVar14;
  long unaff_x20;
  undefined8 *puVar15;
  undefined8 *puVar16;
  float fVar17;
  long alStack_1e0 [6];
  long *plStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 *puStack_188;
  undefined8 uStack_180;
  undefined1 *puStack_178;
  long lStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 auStack_150 [40];
  undefined8 auStack_128 [3];
  long lStack_110;
  undefined **ppuStack_108;
  undefined8 auStack_100 [3];
  long lStack_e8;
  undefined **ppuStack_e0;
  long *aplStack_d8 [3];
  long lStack_c0;
  undefined **ppuStack_b8;
  long alStack_b0 [3];
  long lStack_98;
  undefined **ppuStack_90;
  long lStack_88;
  long lStack_80;
  
  lVar5 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar5 == 0) {
    uStack_198 = *(undefined8 *)(unaff_x20 + 0x10);
    uStack_190 = *(undefined8 *)(unaff_x20 + 0x18);
    uStack_1a0 = *(undefined8 *)(unaff_x20 + 0x28);
    lStack_170 = *(long *)(unaff_x20 + 0x30);
    lStack_168 = _DAT_113091b70;
    uVar14 = *(undefined8 *)(lStack_170 + _DAT_113091b70);
    puVar6 = PTR_PTR_1126ac660;
    uStack_158 = uVar14;
    func_0x000107c610f8();
    func_0x000107c615f0(uVar14);
    func_0x000107c453e4();
    lVar7 = 0;
    func_0x000102e4dc5c();
    lVar5 = lVar7;
    func_0x000107c613fc();
    *(undefined **)(lVar5 + 0x10) = puVar6;
    uStack_160 = *(undefined8 *)(unaff_x20 + 0x58);
    uStack_180 = *(undefined8 *)(unaff_x20 + 0x60);
    alStack_1e0[4] = *(undefined8 *)(unaff_x20 + 0x48);
    alStack_1e0[5] = *(undefined8 *)(unaff_x20 + 0x50);
    uVar14 = *(undefined8 *)(unaff_x20 + 0x38);
    uVar10 = *(undefined8 *)(unaff_x20 + 0x40);
    lVar8 = 0;
    func_0x000102e488f4();
    lVar9 = lVar8;
    func_0x000107c610f8();
    *(undefined8 *)(lVar9 + _DAT_112f20190) = uVar14;
    *(undefined8 *)(lVar9 + _DAT_112f20198) = uVar10;
    puVar6 = PTR_s_init_1125d9248;
    lStack_88 = lVar9;
    lStack_80 = lVar8;
    func_0x000107c61174(uVar14);
    func_0x000107c61174();
    plVar11 = &lStack_88;
    alStack_1e0[3] = uVar10;
    func_0x000107c61154(plVar11,puVar6);
    ppuStack_90 = &PTR_DAT_1105dc978;
    ppuStack_b8 = &PTR_DAT_1105dc3f8;
    lVar12 = 0;
    lStack_1a8 = lVar5;
    aplStack_d8[0] = plVar11;
    lStack_c0 = lVar8;
    alStack_b0[0] = lVar5;
    lStack_98 = lVar7;
    func_0x000102e4c420();
    func_0x000107c613fc();
    FUN_1000c6518(alStack_b0,lVar7);
    puStack_178 = (undefined1 *)(alStack_1e0 + 2);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
    puVar16 = (undefined8 *)((long)alStack_1e0 + (0x10 - (extraout_x8 + 0xfU & 0xfffffffffffffff0)))
    ;
    (**(code **)(extraout_x12 + 0x10))(puVar16);
    FUN_1000c6518(aplStack_d8,lVar8);
    puStack_188 = puVar16;
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
    puVar15 = (undefined8 *)((long)puVar16 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
    (**(code **)(extraout_x12_00 + 0x10))(puVar15);
    auStack_100[0] = *puVar16;
    auStack_128[0] = *puVar15;
    ppuStack_e0 = &PTR_DAT_1105dc978;
    ppuStack_108 = &PTR_DAT_1105dc3f8;
    lStack_110 = lVar8;
    lStack_e8 = lVar7;
    func_0x000107c6157c(lVar5);
    func_0x000107c61174();
    plStack_1b0 = plVar11;
    func_0x000107c61474(lVar12);
    *(undefined **)(lVar12 + 0xe0) = PTR___swiftEmptyArrayStorage_11034f1c8;
    *(undefined1 *)(lVar12 + 0xe8) = 0;
    *(undefined8 *)(lVar12 + 0xf8) = 0;
    *(undefined8 *)(lVar12 + 0xf0) = 2;
    func_0x000107c5ee60(lVar12 + _DAT_112f20278);
    *(undefined1 *)(lVar12 + _DAT_112f20280) = 0;
    *(undefined1 *)(lVar12 + _DAT_112f20288) = 1;
    lVar5 = _DAT_112f20290;
    puVar6 = PTR_PTR_1126ae810;
    func_0x000107c610f8();
    func_0x000107c453e4();
    uVar4 = uStack_158;
    uVar3 = uStack_190;
    uVar2 = uStack_198;
    uVar10 = uStack_1a0;
    *(undefined **)(lVar12 + lVar5) = puVar6;
    puVar16 = (undefined8 *)(lVar12 + _DAT_112f20298);
    *puVar16 = 0;
    *(undefined1 *)(puVar16 + 1) = 1;
    puVar1 = (undefined4 *)(lVar12 + _DAT_112f202a8);
    *(undefined1 *)(puVar1 + 1) = 2;
    *puVar1 = 0;
    *(undefined8 *)(lVar12 + 0x70) = uStack_198;
    *(undefined8 *)(lVar12 + 0x78) = uStack_1a0;
    *(undefined8 *)(lVar12 + 0x80) = uStack_190;
    *(undefined8 *)(lVar12 + 200) = uStack_158;
    *(undefined8 *)(lVar12 + 0xb0) = uStack_160;
    func_0x000102e48498(auStack_100,lVar12 + 0x88);
    lVar7 = alStack_1e0[5];
    lVar9 = alStack_1e0[4];
    lVar5 = alStack_1e0[3];
    *(long *)(lVar12 + 0xb8) = alStack_1e0[3];
    *(long *)(lVar12 + 0xc0) = alStack_1e0[4];
    *(long *)(lVar12 + 0xd0) = alStack_1e0[5];
    func_0x000102e48498(auStack_128,auStack_150);
    puVar6 = &UNK_1105dc398;
    func_0x000107c613fc(&UNK_1105dc398,0x38,7);
    func_0x000102e484dc(auStack_150,puVar6 + 0x10);
    uVar14 = 0x112f20088;
    FUN_1000285a8(0x112f20088,&UNK_10db58dd0);
    func_0x000107c613fc();
    alStack_1e0[2] = uVar14;
    func_0x000107c615f0(uVar4);
    func_0x000107c61174();
    func_0x000107c61174(uVar2);
    func_0x000107c61174(uVar10);
    func_0x000107c61174(uVar3);
    func_0x000107c61174(uStack_160);
    func_0x000107c61174(lVar9);
    func_0x000107c61174(lVar7);
    puVar13 = &UNK_102e484f4;
    FUN_1000bdd8c(&UNK_102e484f4,puVar6);
    *(undefined **)(lVar12 + _DAT_112f202a0) = puVar13;
    uVar14 = 0xd000000000000029;
    func_0x000107c5fadc(0xd000000000000029,0x800000010f111330);
    fVar17 = 900.0;
    func_0x000107c436e4(uStack_180);
    func_0x000107c61170(uVar14);
    *(double *)(lVar12 + 0xd8) = (double)fVar17;
    puVar6 = &UNK_1105dc3c0;
    func_0x000107c613fc(&UNK_1105dc3c0,0x30,7);
    *(long *)(puVar6 + 0x10) = lVar12;
    *(long *)(puVar6 + 0x18) = lVar5;
    *(undefined8 *)(puVar6 + 0x20) = 0;
    *(undefined8 *)(puVar6 + 0x28) = 0;
    func_0x000107c61174(lVar5);
    func_0x000107c6157c(lVar12);
    puVar15[-2] = PTR___sytN_11034f1b0 + 8;
    func_0x0001001ca524(0x22,0,0x3c,4,0,0,&UNK_10db58dd8,puVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
  return;
}



/* Entry: 10094346c; end: 10094352f;  */

void FUN_10094346c(void)

{
  long unaff_x20;
  
  func_0x0001000834e4(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100943530; end: 10094353b;  */

undefined ** FUN_100943530(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 10094353c; end: 100943567;  */

void FUN_10094353c(void)

{
  FUN_1008f5bec();
  return;
}



/* Entry: 100943568; end: 10094356f;  */

void FUN_100943568(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_101fa9a70);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100943570; end: 1009435f3;  */

void FUN_100943570(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_101fa9a70,param_2,FUN_1009435f4,param_2,&UNK_101fa9a74,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009435f4; end: 10094361b;  */

void FUN_1009435f4(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10094361c; end: 100943627;  */

void FUN_10094361c(long *param_1)

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
  FUN_10034aa90();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_60;
  *(undefined8 *)(lVar1 + 0x20) = uStack_68;
  *(undefined8 *)(lVar1 + 0x28) = uStack_70;
  FUN_100943724(0);
  func_0x000107c613fc();
  uVar2 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar3 = uStack_68;
  func_0x000107c61174(uStack_68);
  func_0x000107c61174(uStack_70);
  FUN_100943744(uStack_58,uVar2,uVar3,uStack_70);
  *(undefined8 *)(lVar1 + 0x10) = uStack_58;
  *param_1 = lVar1;
  return;
}



/* Entry: 100943628; end: 100943723;  */

void FUN_100943628(long *param_1,long param_2)

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
  FUN_10034aa90();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_60;
  *(undefined8 *)(param_2 + 0x20) = uStack_68;
  *(undefined8 *)(param_2 + 0x28) = uStack_70;
  FUN_100943724(0);
  func_0x000107c613fc();
  uVar1 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar2 = uStack_68;
  func_0x000107c61174(uStack_68);
  func_0x000107c61174(uStack_70);
  FUN_100943744(uStack_58,uVar1,uVar2,uStack_70);
  *(undefined8 *)(param_2 + 0x10) = uStack_58;
  *param_1 = param_2;
  return;
}



/* Entry: 100943724; end: 100943743;  */

void FUN_100943724(void)

{
  func_0x000107c61168(&PTR_PTR_112f5bb78);
  return;
}



/* Entry: 100943744; end: 1009438cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100943744(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  char *pcVar7;
  long unaff_x20;
  undefined8 uVar8;
  code *pcVar9;
  
  uVar8 = *(undefined8 *)(param_3 + _DAT_112fc8c48);
  func_0x000107c6157c(uVar8);
  uVar3 = 0x112f5bb30;
  FUN_1000285a8(0x112f5bb30,&UNK_10dbb4060);
  puVar4 = &UNK_10335b6d0;
  FUN_1000cb480(&UNK_10335b6d0,0,uVar3);
  func_0x000107c61574(uVar8);
  puVar5 = (undefined8 *)0x0;
  FUN_1009438d0();
  func_0x000107c613fc();
  puVar5[2] = 0x6f6272656461656c;
  puVar5[3] = 0xec00000073647261;
  puVar5[4] = 1;
  puVar6 = puVar5;
  FUN_1009438f0();
  uVar3 = puVar6[1];
  puVar5[5] = *puVar6;
  puVar5[6] = uVar3;
  func_0x000107c61434();
  pcVar7 = "WebLensLeaderboardCapabilityHandler";
  func_0x0001000c10c0();
  func_0x000107c61180();
  puVar5[7] = puVar4;
  puVar5[8] = pcVar7;
  lVar1 = *(long *)(param_4 + _DAT_113070408);
  lVar2 = ((long *)(param_4 + _DAT_113070408))[1];
  *(long *)(unaff_x20 + 0x10) = lVar1;
  *(long *)(unaff_x20 + 0x18) = lVar2;
  *(undefined8 **)(unaff_x20 + 0x20) = puVar5;
  if (lVar1 != 0) {
    func_0x000107c614f0(lVar1);
    pcVar9 = *(code **)(lVar2 + 0x18);
    func_0x000107c615f4(lVar1,2);
    func_0x000107c6157c(puVar5);
    (*pcVar9)();
    func_0x000107c615e8(lVar1);
    func_0x000107c61574(puVar5);
  }
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 1009438d0; end: 1009438ef;  */

void FUN_1009438d0(void)

{
  func_0x000107c61168(&PTR_PTR_112f5bca8);
  return;
}



/* Entry: 1009438f0; end: 1009438ff;  */

undefined * FUN_1009438f0(void)

{
  return &UNK_11075d1a0;
}



/* Entry: 100943900; end: 1009439e3;  */

/* WARNING: Possible PIC construction at 0x00010094396c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100943970) */
/* WARNING: Removing unreachable block (ram,0x000100943974) */
/* WARNING: Removing unreachable block (ram,0x0001009439b0) */

void FUN_100943900(long param_1,long param_2)

{
  func_0x000107c614f0();
  (**(code **)(param_2 + 8))();
  if (param_1 != 0x6b6473 || param_2 != -0x1d00000000000000) {
    func_0x000107c605b8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1009439e4; end: 100943a0f;  */

undefined1  [16] FUN_1009439e4(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  func_0x000107c61434(*(undefined8 *)(unaff_x20 + 0x18));
  return auVar1;
}



/* Entry: 100943a10; end: 100943ca7;  */

void FUN_100943a10(ulong *param_1,long param_2,ulong param_3)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  code *pcVar10;
  
  lVar9 = param_2;
  func_0x000107c614f0();
  pcVar10 = *(code **)(param_3 + 8);
  lVar2 = lVar9;
  uVar3 = param_3;
  (*pcVar10)();
  uVar6 = *param_1;
  uVar8 = uVar3;
  if (*(long *)(uVar6 + 0x10) != 0) {
    func_0x000107c61434(uVar6);
    func_0x000100029284();
    if ((uVar8 & 1) != 0) {
      uVar8 = *(ulong *)(*(long *)(uVar6 + 0x38) + lVar2 * 8);
      func_0x000107c61434(uVar8);
      func_0x000107c6142c(uVar3);
      func_0x000107c6142c(uVar6);
      lVar2 = *(long *)(uVar8 + 0x10) + 1;
      lVar4 = 0x20;
      do {
        lVar2 = lVar2 + -1;
        if (lVar2 == 0) goto LAB_100943af4;
        plVar1 = (long *)(uVar8 + lVar4);
        lVar4 = lVar4 + 0x10;
      } while (*plVar1 != param_2);
      goto LAB_100943c08;
    }
    func_0x000107c6142c(uVar3);
    uVar8 = uVar6;
  }
LAB_100943af4:
  func_0x000107c6142c(uVar8);
  uVar8 = param_3;
  (*pcVar10)();
  uVar6 = *param_1;
  func_0x000107c61558();
  uVar7 = *param_1;
  lVar4 = lVar9;
  uVar3 = uVar8;
  func_0x000100029284();
  uVar5 = (ulong)~(uint)uVar3 & 1;
  lVar2 = *(long *)(uVar7 + 0x10) + uVar5;
  if (SCARRY8(*(long *)(uVar7 + 0x10),uVar5)) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x100943c38);
    (*pcVar10)();
  }
  if (*(long *)(uVar7 + 0x18) < lVar2) {
    FUN_100943cc0(lVar2,uVar6);
    lVar4 = lVar9;
    uVar6 = uVar8;
    func_0x000100029284();
    if (((uint)uVar3 & 1) != ((uint)uVar6 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x100943ca8);
      (*pcVar10)();
    }
    *param_1 = uVar7;
  }
  else if ((uVar6 & 1) == 0) {
    func_0x000102e9cd80();
    *param_1 = uVar7;
  }
  else {
    *param_1 = uVar7;
  }
  if ((uVar3 & 1) == 0) {
    FUN_100943f5c(lVar4,lVar9,uVar8,PTR___swiftEmptyArrayStorage_11034f1c8,uVar7);
    func_0x000107c61434(uVar8);
  }
  lVar9 = *(long *)(uVar7 + 0x38);
  uVar5 = *(ulong *)(lVar9 + lVar4 * 8);
  uVar3 = uVar5;
  func_0x000107c61558();
  *(ulong *)(lVar9 + lVar4 * 8) = uVar5;
  uVar6 = uVar5;
  if ((uVar3 & 1) == 0) {
    uVar6 = 0;
    FUN_100943fa4(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
    *(ulong *)(lVar9 + lVar4 * 8) = uVar6;
  }
  uVar3 = *(ulong *)(uVar6 + 0x10);
  uVar5 = uVar6;
  if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar3) {
    uVar5 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
    FUN_100943fa4(uVar5,uVar3 + 1,1,uVar6);
    *(ulong *)(lVar9 + lVar4 * 8) = uVar5;
  }
  *(ulong *)(uVar5 + 0x10) = uVar3 + 1;
  lVar9 = uVar5 + uVar3 * 0x10;
  *(long *)(lVar9 + 0x20) = param_2;
  *(ulong *)(lVar9 + 0x28) = param_3;
  func_0x000107c615f0(param_2);
LAB_100943c08:
  func_0x000107c6142c(uVar8);
  return;
}



/* Entry: 100943ca8; end: 100943cbf;  */

void FUN_100943ca8(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100943a10(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 100943cc0; end: 100943f5b;  */

void FUN_100943cc0(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  ulong uVar15;
  ulong *puVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined1 auStack_a8 [72];
  
  lVar17 = *unaff_x20;
  lVar1 = *(long *)(lVar17 + 0x18);
  if (*(long *)(lVar17 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar6 = 0x112f255f8;
  FUN_1000285a8(0x112f255f8,&UNK_10db60410);
  lVar7 = lVar17;
  func_0x000107c60490(lVar17,lVar1,param_2,uVar6);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_100943f28:
    func_0x000107c61574(lVar17);
    *unaff_x20 = lVar7;
    return;
  }
  puVar16 = (ulong *)(lVar17 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar15 = uVar15 & *puVar16;
  lVar1 = lVar7 + 0x40;
  lVar10 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar19 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100943f58);
          (*pcVar5)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) != 0) {
            uVar15 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
            if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
              *puVar16 = -1L << (uVar15 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar17 + 0x10) = 0;
          }
          goto LAB_100943f28;
        }
        uVar15 = puVar16[lVar19];
        lVar10 = lVar10 + 1;
      } while (uVar15 == 0);
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar19 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9) | lVar19 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar17 + 0x30) + uVar9 * 0x10);
    uVar6 = *puVar2;
    uVar3 = puVar2[1];
    uVar18 = *(undefined8 *)(*(long *)(lVar17 + 0x38) + uVar9 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar3);
      func_0x000107c61434(uVar18);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_a8;
    func_0x000107c5fb58(puVar8,uVar6,uVar3);
    func_0x000107c606a8();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar4 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100943f5c);
          (*pcVar5)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar4 = (bool)(uVar13 == uVar9 | bVar4);
        uVar13 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar9 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar9 * 0x10);
    *puVar2 = uVar6;
    puVar2[1] = uVar3;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 8) = uVar18;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar19;
  } while( true );
}



/* Entry: 100943f5c; end: 100943fa3;  */

void FUN_100943f5c(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  
  lVar1 = param_5 + (param_1 >> 6) * 8;
  *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (param_1 & 0x3f);
  puVar2 = (undefined8 *)(*(long *)(param_5 + 0x30) + param_1 * 0x10);
  *puVar2 = param_2;
  puVar2[1] = param_3;
  *(undefined8 *)(*(long *)(param_5 + 0x38) + param_1 * 8) = param_4;
  if (!SCARRY8(*(long *)(param_5 + 0x10),1)) {
    *(long *)(param_5 + 0x10) = *(long *)(param_5 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100943fa4);
  (*pcVar3)();
}



/* Entry: 100943fa4; end: 1009440d3;  */

undefined * FUN_100943fa4(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1009440d4);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = (undefined *)0x112ee4df0;
    FUN_1000285a8(0x112ee4df0,&UNK_10db0ffc0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112f25760;
    FUN_1000285a8(0x112f25760,&UNK_10db604c8);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 0x10 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 1009440d4; end: 1009440db;  */

void FUN_1009440d4(void)

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



/* Entry: 1009440dc; end: 100944117;  */

void FUN_1009440dc(void)

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



/* Entry: 100944118; end: 100944123;  */

undefined ** FUN_100944118(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 100944124; end: 10094414f;  */

void FUN_100944124(void)

{
  FUN_1008f5bec();
  return;
}



/* Entry: 100944150; end: 100944157;  */

void FUN_100944150(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101fa9d10);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100944158; end: 1009441db;  */

void FUN_100944158(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101fa9d10,param_2,&UNK_101fa9d14,param_2,&UNK_101fa9d3c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009441dc; end: 1009441e7;  */

undefined ** FUN_1009441dc(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 1009441e8; end: 100944273;  */

void FUN_1009441e8(undefined8 param_1)

{
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100944274,param_1);
  return;
}



/* Entry: 100944274; end: 10094427b;  */

void FUN_100944274(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_102e99bc8);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10094427c; end: 1009442ff;  */

void FUN_10094427c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_102e99bc8,param_2,FUN_100944300,param_2,&UNK_102e99bcc,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100944300; end: 100944327;  */

void FUN_100944300(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 100944328; end: 10094433b;  */

void FUN_100944328(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long unaff_x20;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                *(undefined8 *)(unaff_x20 + 0x48));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  FUN_10034abdc();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x20) = uStack_70;
  *(undefined8 *)(lVar1 + 0x28) = uStack_78;
  *(undefined8 *)(lVar1 + 0x30) = uStack_80;
  *(undefined8 *)(lVar1 + 0x38) = uStack_88;
  *(undefined8 *)(lVar1 + 0x40) = uStack_90;
  *(undefined8 *)(lVar1 + 0x48) = uStack_98;
  FUN_1000285a8(0x112ed9688,&UNK_10db05e50);
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar6 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar7 = uStack_98;
  func_0x000107c61174(uStack_98);
  uVar8 = uStack_a0;
  func_0x000107c6157c(uStack_a0);
  FUN_10017da58();
  puVar9 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar8);
  *(undefined **)(lVar1 + 0x18) = puVar9;
  FUN_100944768(0);
  func_0x000107c613fc();
  func_0x000107c61174(puVar9);
  uVar8 = uStack_68;
  FUN_100944788(uStack_68,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,puVar9);
  func_0x000107c61574(uStack_a0);
  *(undefined8 *)(lVar1 + 0x10) = uVar8;
  *param_1 = lVar1;
  return;
}



/* Entry: 10094433c; end: 100944533;  */

void FUN_10094433c(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
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
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  FUN_10034abdc();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_70;
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  *(undefined8 *)(param_2 + 0x38) = uStack_88;
  *(undefined8 *)(param_2 + 0x40) = uStack_90;
  *(undefined8 *)(param_2 + 0x48) = uStack_98;
  FUN_1000285a8(0x112ed9688,&UNK_10db05e50);
  func_0x000107c610f8();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar5 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar6 = uStack_98;
  func_0x000107c61174(uStack_98);
  uVar7 = uStack_a0;
  func_0x000107c6157c(uStack_a0);
  FUN_10017da58();
  puVar8 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar7);
  *(undefined **)(param_2 + 0x18) = puVar8;
  FUN_100944768(0);
  func_0x000107c613fc();
  func_0x000107c61174(puVar8);
  uVar7 = uStack_68;
  FUN_100944788(uStack_68,uVar1,uVar2,uVar3,uVar4,uVar5,uVar6,puVar8);
  func_0x000107c61574(uStack_a0);
  *(undefined8 *)(param_2 + 0x10) = uVar7;
  *param_1 = param_2;
  return;
}



/* Entry: 100944534; end: 10094453b;  */

void FUN_100944534(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10094453c; end: 10094458f;  */

void FUN_10094453c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100944590; end: 100944597;  */

void FUN_100944590(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_10033c8d4();
  func_0x000107c613fc();
  uVar1 = 0;
  FUN_100944630();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  func_0x00010094469c();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(uStack_48);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar2;
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100944598; end: 10094462f;  */

void FUN_100944598(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_10033c8d4();
  func_0x000107c613fc();
  uVar1 = 0;
  FUN_100944630();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  func_0x00010094469c();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(uStack_48);
  *(undefined8 *)(param_2 + 0x18) = uVar2;
  *param_1 = param_2;
  return;
}



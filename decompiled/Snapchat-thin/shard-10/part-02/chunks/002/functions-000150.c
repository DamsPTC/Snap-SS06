/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107ce6b5c; end: 107ce6b87; -[SCUnifiedProfileScreenCaptureMonitor _didScreenRecord] */

void FUN_107ce6b5c(long param_1)

{
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf7a460();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107ce6b88; end: 107ce6b9f; -[SCUnifiedProfileScreenCaptureMonitor delegate] */

void FUN_107ce6b88(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107ce6ba0; end: 107ce6bab; -[SCUnifiedProfileScreenCaptureMonitor setDelegate:] */

void FUN_107ce6ba0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 107ce6bac; end: 107ce6bc3; -[SCUnifiedProfileScreenCaptureMonitor circumstanceEngine] */

void FUN_107ce6bac(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107ce6bc4; end: 107ce6bcf; -[SCUnifiedProfileScreenCaptureMonitor setCircumstanceEngine:] */

void FUN_107ce6bc4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 107ce6bd0; end: 107ce6bf7; -[SCUnifiedProfileScreenCaptureMonitor .cxx_destruct] */

void FUN_107ce6bd0(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 0x10);
  return;
}



/* Entry: 107ce6bf8; end: 107ce6c87;  */

void FUN_107ce6bf8(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110eb7158;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110eb7158,
                      &PTR____CFConstantStringClassReference_110eb7178,0);
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



/* Entry: 107ce6c88; end: 107ce6e0b; -[SCUnifiedProfilePrivacyExplainerViewCellViewModel initWithText:leftIconImageAsset:leftIconSize:leftIconAvatar:showCompassPointer:rightIconViewModel:rightIconTapActionModel:rightIconAccessibilityIdentifier:] */

undefined1 *
FUN_107ce6c88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126fa848;
  uStack_70 = param_2;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
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
    *(undefined8 *)((long)puVar1 + 0x20) = param_1;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_7;
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
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
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 107ce6e0c; end: 107ce6e2f; -[SCUnifiedProfilePrivacyExplainerViewCellViewModel copyWithZone:] */

undefined8 FUN_107ce6e0c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107ce6e30; end: 107ce6efb; -[SCUnifiedProfilePrivacyExplainerViewCellViewModel hash] */

undefined8 * FUN_107ce6e30(long param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  double dVar9;
  double dVar10;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uStack_68 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar7 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_58 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_58 = uStack_58 ^ uStack_58 >> 0x16;
  uStack_60 = uVar3;
  func_0x00010bfde980();
  uStack_48 = (ulong)*(byte *)(param_1 + 8);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_40 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  puVar4 = &uStack_68;
  uStack_30 = uVar3;
  func_0x000100505190(puVar4,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_107ce7020:
    puVar8 = (undefined8 *)0x1;
  }
  else {
    puVar8 = (undefined8 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_107ce702c;
    puVar8 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((ulong)puVar5 & 1) != 0) && (*(char *)(puVar4 + 1) == *(char *)(param_3 + 1))) {
      dVar10 = ABS((double)puVar4[4] - (double)param_3[4]);
      dVar9 = ABS((double)puVar4[4] + (double)param_3[4]) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar9))) {
        bVar1 = dVar10 < dVar9;
      }
      if ((((bVar1) &&
           ((lVar6 = puVar4[2], lVar6 == param_3[2] || (func_0x00010c071ae0(), (int)lVar6 != 0))))
          && ((lVar6 = puVar4[3], lVar6 == param_3[3] || (func_0x00010c071ae0(), (int)lVar6 != 0))))
         && ((((lVar6 = puVar4[5], lVar6 == param_3[5] || (func_0x00010c071ae0(), (int)lVar6 != 0))
              && ((lVar6 = puVar4[6], lVar6 == param_3[6] ||
                  (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
             ((lVar6 = puVar4[7], lVar6 == param_3[7] || (func_0x00010c071ae0(), (int)lVar6 != 0))))
            )) {
        puVar8 = (undefined8 *)puVar4[8];
        if (puVar8 != (undefined8 *)param_3[8]) {
          func_0x00010c071ae0();
          goto LAB_107ce702c;
        }
        goto LAB_107ce7020;
      }
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_107ce702c:
  _objc_release(param_3);
  return puVar8;
}



/* Entry: 107ce6efc; end: 107ce7047; -[SCUnifiedProfilePrivacyExplainerViewCellViewModel isEqual:] */

long FUN_107ce6efc(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107ce7020:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107ce702c;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      dVar6 = ABS(*(double *)(param_1 + 0x20) - *(double *)(param_3 + 0x20));
      dVar5 = ABS(*(double *)(param_1 + 0x20) + *(double *)(param_3 + 0x20)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if ((((bVar1) &&
           ((lVar4 = *(long *)(param_1 + 0x10), lVar4 == *(long *)(param_3 + 0x10) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
          ((lVar4 = *(long *)(param_1 + 0x18), lVar4 == *(long *)(param_3 + 0x18) ||
           (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
         ((((lVar4 = *(long *)(param_1 + 0x28), lVar4 == *(long *)(param_3 + 0x28) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
           ((lVar4 = *(long *)(param_1 + 0x30), lVar4 == *(long *)(param_3 + 0x30) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
          ((lVar4 = *(long *)(param_1 + 0x38), lVar4 == *(long *)(param_3 + 0x38) ||
           (func_0x00010c071ae0(), (int)lVar4 != 0)))))) {
        lVar4 = *(long *)(param_1 + 0x40);
        if (lVar4 != *(long *)(param_3 + 0x40)) {
          func_0x00010c071ae0();
          goto LAB_107ce702c;
        }
        goto LAB_107ce7020;
      }
    }
    lVar4 = 0;
  }
LAB_107ce702c:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 107ce7048; end: 107ce704f; -[SCUnifiedProfilePrivacyExplainerViewCellViewModel text] */

undefined8 FUN_107ce7048(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107ce7050; end: 107ce7057; -[SCUnifiedProfilePrivacyExplainerViewCellViewModel leftIconImageAsset] */

undefined8 FUN_107ce7050(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107ce7058; end: 107ce705f; -[SCUnifiedProfilePrivacyExplainerViewCellViewModel leftIconSize] */

undefined8 FUN_107ce7058(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107ce7060; end: 107ce7067; -[SCUnifiedProfilePrivacyExplainerViewCellViewModel leftIconAvatar] */

undefined8 FUN_107ce7060(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107ce7068; end: 107ce706f; -[SCUnifiedProfilePrivacyExplainerViewCellViewModel showCompassPointer] */

undefined1 FUN_107ce7068(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107ce7070; end: 107ce7077; -[SCUnifiedProfilePrivacyExplainerViewCellViewModel rightIconViewModel] */

undefined8 FUN_107ce7070(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107ce7078; end: 107ce707f; -[SCUnifiedProfilePrivacyExplainerViewCellViewModel rightIconTapActionModel] */

undefined8 FUN_107ce7078(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107ce7080; end: 107ce7087; -[SCUnifiedProfilePrivacyExplainerViewCellViewModel rightIconAccessibilityIdentifier] */

undefined8 FUN_107ce7080(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 107ce7088; end: 107ce70e7; -[SCUnifiedProfilePrivacyExplainerViewCellViewModel .cxx_destruct] */

void FUN_107ce7088(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107ce70e8; end: 107ce7c6b;  */

void FUN_107ce70e8(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_1);
  ppuVar1 = &PTR____CFConstantStringClassReference_110eb75d8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110eb75d8,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x000107d3dad8(param_1,0,0x3b7fcec3,1,param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_1);
  ppuVar3 = ppuVar1;
  func_0x000107d4bde8(ppuVar1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 107ce7c6c; end: 107ce83c3; -[SCFriendUnifiedProfileDataSource initWithSnapchatter:conversationId:snapchattersDataFetcher:snapchattersDataTracker:friendStatusManagerCreator:snapchatterPublicInfoFetcher:friendScoreCoordinator:userInfoProvider:currentUserId:friendsFeedDataAccess:messagingExperimentService:sponsoredSnapAdResponseParser:sponsoredSnapBannerDataProvider:storiesDataAccess:remoteStoriesDataProvider:friendProfileConfiguration:creatorSettingsFetcher:creatorSettingsMutator:creatorSettingsTracker:friendStorySettingMutator:circumstanceEngine:] */

undefined8 *
FUN_107ce7c6c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined **param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,long param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined *param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined **ppuVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  long lStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
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
  puStack_80 = PTR_PTR_1126fa850;
  puVar1 = &uStack_88;
  puVar7 = PTR_s_init_1125d9248;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  ppuVar13 = param_7;
  if (puVar1 != (undefined8 *)0x0) {
    puVar4 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar10 = puVar1[2];
    puVar1[2] = puVar4;
    _objc_release(uVar10);
    _objc_release();
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = puVar1[0x20];
    puVar1[0x20] = puVar2;
    _objc_release(uVar10);
    lVar3 = param_3;
    func_0x00010c2923e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21e620(puVar1);
    _objc_release(lVar3);
    lVar3 = param_3;
    func_0x00010c294420(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21f760(puVar1);
    _objc_release(lVar3);
    _objc_retain(param_4);
    uVar10 = puVar1[0x11];
    puVar1[0x11] = param_4;
    _objc_release(uVar10);
    _objc_retain(param_3);
    uVar10 = puVar1[0x12];
    puVar1[0x12] = param_3;
    _objc_release(uVar10);
    puVar1[0x16] = 0x10;
    _objc_retain(param_5);
    uVar10 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar10);
    _objc_retain(param_6);
    puVar11 = puVar1 + 4;
    uVar10 = *puVar11;
    *puVar11 = param_6;
    _objc_release(uVar10);
    _objc_retain(param_8);
    uVar10 = puVar1[5];
    puVar1[5] = param_8;
    _objc_release(uVar10);
    _objc_retain(param_9);
    uVar10 = puVar1[6];
    puVar1[6] = param_9;
    _objc_release(uVar10);
    _objc_retain(param_10);
    uVar10 = puVar1[7];
    puVar1[7] = param_10;
    _objc_release(uVar10);
    puVar4 = PTR_PTR_1126b45a0;
    _objc_opt_new();
    uVar10 = puVar1[1];
    puVar1[1] = puVar4;
    _objc_release(uVar10);
    _objc_retain(param_11);
    uVar10 = puVar1[8];
    puVar1[8] = param_11;
    _objc_release(uVar10);
    _objc_retain(param_12);
    plVar12 = puVar1 + 9;
    lVar3 = *plVar12;
    *plVar12 = param_12;
    _objc_release(lVar3);
    _objc_retain(param_16);
    ppuVar13 = (undefined **)(puVar1 + 0x1d);
    puVar4 = *ppuVar13;
    *ppuVar13 = param_16;
    _objc_release(puVar4);
    _objc_retain(param_17);
    uVar10 = puVar1[0x1e];
    puVar1[0x1e] = param_17;
    _objc_release(uVar10);
    _objc_retain(param_18);
    uVar10 = puVar1[0x1f];
    puVar1[0x1f] = param_18;
    _objc_release(uVar10);
    _objc_retain(param_19);
    uVar10 = puVar1[10];
    puVar1[10] = param_19;
    _objc_release(uVar10);
    _objc_retain(param_20);
    uVar10 = puVar1[0xb];
    puVar1[0xb] = param_20;
    _objc_release(uVar10);
    _objc_retain(param_21);
    uVar10 = puVar1[0xc];
    puVar1[0xc] = param_21;
    _objc_release(uVar10);
    _objc_retain(param_22);
    puVar14 = puVar1 + 0xe;
    uVar10 = *puVar14;
    *puVar14 = param_22;
    _objc_release(uVar10);
    _objc_retain(param_23);
    uVar10 = puVar1[0x1c];
    puVar1[0x1c] = param_23;
    _objc_release(uVar10);
    _objc_retain(param_14);
    uVar10 = puVar1[0xf];
    puVar1[0xf] = param_14;
    _objc_release(uVar10);
    _objc_retain(param_15);
    uVar10 = puVar1[0x10];
    puVar1[0x10] = param_15;
    _objc_release(uVar10);
    ppuVar5 = param_7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar5;
    func_0x00010bf562a0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar1 + 0xd;
    uVar10 = *puVar15;
    *puVar15 = ppuVar6;
    _objc_release(uVar10);
    _objc_release(ppuVar5);
    puVar4 = *ppuVar13;
    func_0x00010c269d40(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(puVar4);
    uVar10 = *puVar11;
    func_0x00010c269d40(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar10);
    func_0x00010befc780(*puVar15);
    uVar10 = *puVar14;
    func_0x00010c269d40(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar10);
    func_0x00010be04080(puVar1);
    if (*plVar12 != 0) {
      _objc_initWeak(auStack_90,puVar1);
      puVar7 = PTR_PTR_1126ae810;
      _objc_opt_new();
      uVar10 = puVar1[0x1b];
      puVar1[0x1b] = puVar7;
      _objc_release(uVar10);
      uVar8 = puVar1[9];
      func_0x00010c269d40(uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar8;
      func_0x00010bfba080();
      _objc_retainAutoreleasedReturnValue();
      puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b0 = 0xc2000000;
      pcStack_a8 = FUN_107ce83c4;
      puStack_a0 = &UNK_110842c58;
      ppuVar13 = &puStack_b8;
      puVar7 = auStack_90;
      _objc_copyWeak(auStack_98,puVar7);
      uVar9 = uVar10;
      func_0x00010c25ff60(uVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1a3e0();
      _objc_release(uVar9);
      _objc_release(uVar10);
      _objc_release(uVar8);
      _objc_destroyWeak(auStack_98);
      _objc_destroyWeak(auStack_90);
    }
    uVar10 = puVar1[0xd];
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_78 = param_3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befb740(uVar10);
    _objc_release(puVar4);
    func_0x00010bed0c20(puVar1);
  }
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
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar13 + 4);
  _objc_destroyWeak(auStack_90);
  __Unwind_Resume(param_3);
  _objc_retain(puVar7);
  puVar1 = (undefined8 *)(param_3 + 0x20);
  _objc_loadWeakRetained(puVar1);
  func_0x00010bed89a0();
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return puVar1;
}



/* Entry: 107ce83c4; end: 107ce840b;  */

void FUN_107ce83c4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed89a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107ce840c; end: 107ce8433; -[SCFriendUnifiedProfileDataSource currentUserId] */

void FUN_107ce840c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107ce8434; end: 107ce84ff; -[SCFriendUnifiedProfileDataSource snapchatter] */

void FUN_107ce8434(long param_1,undefined8 param_2)

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
  pcStack_38 = FUN_107ce8500;
  uStack_30 = 0x107ce8510;
  uStack_28 = 0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_107ce8518;
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



/* Entry: 107ce8500; end: 107ce8517;  */

void FUN_107ce8500(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107ce8518; end: 107ce854b;  */

void FUN_107ce8518(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x90);
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107ce854c; end: 107ce8593; -[SCFriendUnifiedProfileDataSource userSnapchatter] */

void FUN_107ce854c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c293a00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107ce8594; end: 107ce85bb; -[SCFriendUnifiedProfileDataSource conversationId] */

void FUN_107ce8594(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107ce85bc; end: 107ce8687; -[SCFriendUnifiedProfileDataSource userScore] */

void FUN_107ce85bc(long param_1,undefined8 param_2)

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
  pcStack_38 = FUN_107ce8500;
  uStack_30 = 0x107ce8510;
  uStack_28 = 0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_107ce8688;
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



/* Entry: 107ce8688; end: 107ce86c3;  */

void FUN_107ce8688(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x98);
  func_0x00010bf51e00();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107ce86c4; end: 107ce876b; -[SCFriendUnifiedProfileDataSource hasUnviewedStories] */

undefined1 FUN_107ce86c4(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  puStack_48 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_107ce876c;
  puStack_58 = &UNK_11084b9d0;
  lStack_50 = param_1;
  puStack_38 = puStack_48;
  func_0x00010c0f8240(*(undefined8 *)(param_1 + 0x10),param_2,&puStack_70);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 107ce876c; end: 107ce877f;  */

void FUN_107ce876c(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) =
       *(undefined1 *)(*(long *)(param_1 + 0x20) + 0xa8);
  return;
}



/* Entry: 107ce8780; end: 107ce884b; -[SCFriendUnifiedProfileDataSource storyThumbnailNetworkImage] */

void FUN_107ce8780(long param_1,undefined8 param_2)

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
  pcStack_38 = FUN_107ce8500;
  uStack_30 = 0x107ce8510;
  uStack_28 = 0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_107ce884c;
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



/* Entry: 107ce884c; end: 107ce8887;  */

void FUN_107ce884c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xa0);
  func_0x00010bf51e00();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107ce8888; end: 107ce8933; -[SCFriendUnifiedProfileDataSource addFriendStatus] */

undefined8 FUN_107ce8888(long param_1,undefined8 param_2)

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
  uStack_28 = 0x10;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_107ce8934;
  puStack_58 = &UNK_11084b9d0;
  lStack_50 = param_1;
  puStack_38 = puStack_48;
  func_0x00010c0f8240(*(undefined8 *)(param_1 + 0x10),param_2,&puStack_70);
  uVar1 = puStack_38[3];
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 107ce8934; end: 107ce8947;  */

void FUN_107ce8934(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) =
       *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xb0);
  return;
}



/* Entry: 107ce8948; end: 107ce8a13; -[SCFriendUnifiedProfileDataSource friendsFeedItem] */

void FUN_107ce8948(long param_1,undefined8 param_2)

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
  pcStack_38 = FUN_107ce8500;
  uStack_30 = 0x107ce8510;
  uStack_28 = 0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_107ce8a14;
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



/* Entry: 107ce8a14; end: 107ce8a47;  */

void FUN_107ce8a14(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xb8);
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107ce8a48; end: 107ce8b13; -[SCFriendUnifiedProfileDataSource campaignCreatorSnapchatter] */

void FUN_107ce8a48(long param_1,undefined8 param_2)

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
  pcStack_38 = FUN_107ce8500;
  uStack_30 = 0x107ce8510;
  uStack_28 = 0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_107ce8b14;
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



/* Entry: 107ce8b14; end: 107ce8b47;  */

void FUN_107ce8b14(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xd0);
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107ce8b48; end: 107ce8c13; -[SCFriendUnifiedProfileDataSource sponsoredSnapBannerMetadata] */

void FUN_107ce8b48(long param_1,undefined8 param_2)

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
  pcStack_38 = FUN_107ce8500;
  uStack_30 = 0x107ce8510;
  uStack_28 = 0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_107ce8c14;
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



/* Entry: 107ce8c14; end: 107ce8c47;  */

void FUN_107ce8c14(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xc0);
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107ce8c48; end: 107ce8cef; -[SCFriendUnifiedProfileDataSource nonFriendAddSourceType] */

undefined8 FUN_107ce8c48(long param_1,undefined8 param_2)

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
  pcStack_60 = FUN_107ce8cf0;
  puStack_58 = &UNK_11084b9d0;
  lStack_50 = param_1;
  puStack_38 = puStack_48;
  func_0x00010c0f8240(*(undefined8 *)(param_1 + 0x10),param_2,&puStack_70);
  uVar1 = puStack_38[3];
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 107ce8cf0; end: 107ce8d33;  */

void FUN_107ce8cf0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0xf8);
  if (lVar1 == 0) {
    lVar1 = -0x30a2f521;
  }
  else {
    func_0x00010c0daca0();
  }
  *(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = lVar1;
  return;
}



/* Entry: 107ce8d34; end: 107ce8ddf; -[SCFriendUnifiedProfileDataSource nonFriendAddPlacementType] */

undefined8 FUN_107ce8d34(long param_1,undefined8 param_2)

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
  uStack_28 = 0xffffffffffffffff;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_107ce8de0;
  puStack_58 = &UNK_11084b9d0;
  lStack_50 = param_1;
  puStack_38 = puStack_48;
  func_0x00010c0f8240(*(undefined8 *)(param_1 + 0x10),param_2,&puStack_70);
  uVar1 = puStack_38[3];
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 107ce8de0; end: 107ce8e1f;  */

void FUN_107ce8de0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0xf8);
  if (lVar1 == 0) {
    lVar1 = 0x11;
  }
  else {
    func_0x00010c0dac60();
  }
  *(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = lVar1;
  return;
}



/* Entry: 107ce8e20; end: 107ce8e47; -[SCFriendUnifiedProfileDataSource snapchatterDataFetcher] */

void FUN_107ce8e20(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107ce8e48; end: 107ce8eef; -[SCFriendUnifiedProfileDataSource storyContentType] */

undefined8 FUN_107ce8e48(long param_1,undefined8 param_2)

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
  pcStack_60 = FUN_107ce8ef0;
  puStack_58 = &UNK_11084b9d0;
  lStack_50 = param_1;
  puStack_38 = puStack_48;
  func_0x00010c0f8240(*(undefined8 *)(param_1 + 0x10),param_2,&puStack_70);
  uVar1 = puStack_38[3];
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 107ce8ef0; end: 107ce8f03;  */

void FUN_107ce8ef0(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) =
       *(undefined8 *)(*(long *)(param_1 + 0x20) + 200);
  return;
}



/* Entry: 107ce8f04; end: 107ce8f0f; +[SCFriendUnifiedProfileDataSource announcerIdentifier] */

undefined ** FUN_107ce8f04(void)

{
  return &PTR____CFConstantStringClassReference_110eb7758;
}



/* Entry: 107ce8f10; end: 107ce8f17; -[SCFriendUnifiedProfileDataSource addUpdateListener:] */

void FUN_107ce8f10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 107ce8f18; end: 107ce8f1f; -[SCFriendUnifiedProfileDataSource removeUpdateListener:] */

void FUN_107ce8f18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 107ce8f20; end: 107ce90a7; -[SCFriendUnifiedProfileDataSource _updateSnapchatterWithUserId:completion:] */

void FUN_107ce8f20(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = param_1;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0720c0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if ((int)lVar3 == 0) goto LAB_107ce905c;
  }
  _objc_initWeak(auStack_48,param_1);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = 0;
  func_0x0001000819a8(0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  func_0x00010c2448c0(uVar4);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
LAB_107ce905c:
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107ce90a8; end: 107ce9107;  */

void FUN_107ce90a8(long param_1,long param_2,long param_3)

{
  if ((param_2 != 0) && (param_3 == 0)) {
    _objc_retain(param_2);
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010bea7b60();
    _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 107ce9108; end: 107ce929b; -[SCFriendUnifiedProfileDataSource _setSnapchatter:completionBlock:] */

void FUN_107ce9108(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x107ce91c0;
  puStack_50 = &UNK_11084a9e8;
  lStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f9420(uVar1,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107ce929c; end: 107ce9317; -[SCFriendUnifiedProfileDataSource _dispatchSnapchatterUpdate] */

void FUN_107ce929c(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x0001000819a8(0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010007380c();
  _objc_release(uVar1);
  return;
}



/* Entry: 107ce9318; end: 107ce932f;  */

void FUN_107ce9318(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7e9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),
             PTR_s_didUpdateWithAnnouncerIdentifier_1125bd418,
             &PTR____CFConstantStringClassReference_110eb7d78);
  return;
}



/* Entry: 107ce9330; end: 107ce944f; -[SCFriendUnifiedProfileDataSource _dispatchUpdateUserScoreRequest] */

void FUN_107ce9330(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = param_1;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar4);
    _objc_initWeak(auStack_38,param_1);
    uVar3 = 0;
    func_0x0001000819a8(0,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_107ce9450;
    puStack_58 = &UNK_110848218;
    uStack_50 = uVar4;
    _objc_retain(lVar1);
    lStack_48 = lVar1;
    _objc_retain(uVar4);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010007380c(uVar3,&puStack_70);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_40);
    _objc_release(lStack_48);
    _objc_release(uStack_50);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 107ce9450; end: 107ce952f;  */

void FUN_107ce9450(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = 0;
  func_0x0001000819a8(0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_48,param_1 + 0x30);
  func_0x00010bfb8aa0(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 107ce9530; end: 107ce95ef;  */

void FUN_107ce9530(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (param_2 == 0) {
    func_0x00010bee3100(param_1);
  }
  else {
    func_0x00010c150c20(param_2);
    func_0x00010c0df7c0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb5c60(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bee3100(param_1);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107ce95f0; end: 107ce96ff; -[SCFriendUnifiedProfileDataSource _updateUserScore:] */

void FUN_107ce95f0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  ulong uStack_40;
  ulong uStack_38;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c2935a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_retain(uVar1);
  if (param_3 == uVar1) {
    _objc_release(uVar1);
    _objc_release(param_3);
  }
  else {
    if (uVar1 == 0) {
      _objc_release();
    }
    else {
      uVar2 = param_3;
      func_0x00010c071ae0(param_3,param_2,uVar1);
      _objc_release(uVar1);
      _objc_release(param_3);
      _objc_release(uVar1);
      if ((uVar2 & 1) != 0) goto LAB_107ce96e4;
    }
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_107ce9700;
    puStack_48 = &UNK_110841f80;
    uStack_40 = param_1;
    _objc_retain(param_3);
    uStack_38 = param_3;
    func_0x00010c0f9420(uVar3,param_2,&puStack_60);
    uVar1 = uStack_38;
  }
  _objc_release(uVar1);
LAB_107ce96e4:
  _objc_release(param_3);
  return;
}



/* Entry: 107ce9700; end: 107ce973b;  */

void FUN_107ce9700(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf51e00();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x98);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x98) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010be040f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__dispatchUserScoreUpdate_11255e9d8);
  return;
}



/* Entry: 107ce973c; end: 107ce97b7; -[SCFriendUnifiedProfileDataSource _dispatchUserScoreUpdate] */

void FUN_107ce973c(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x0001000819a8(0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010007380c();
  _objc_release(uVar1);
  return;
}



/* Entry: 107ce97b8; end: 107ce97cf;  */

void FUN_107ce97b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7e9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),
             PTR_s_didUpdateWithAnnouncerIdentifier_1125bd418,
             &PTR____CFConstantStringClassReference_110eb7d98);
  return;
}



/* Entry: 107ce97d0; end: 107ce9977; -[SCFriendUnifiedProfileDataSource _udpateStoryThumbnailNetworkImageWithSnapchatter:] */

void FUN_107ce97d0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    _objc_initWeak(auStack_68,param_1);
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_107ce9978;
    puStack_78 = &UNK_110993650;
    _objc_copyWeak(auStack_70,auStack_68);
    ppuVar3 = &puStack_90;
    _objc_retainBlock();
    uVar4 = *(undefined8 *)(param_1 + 0xf0);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010c2923e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = 0;
    func_0x0001000819a8(0,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(ppuVar3);
    func_0x00010bfaa9c0(uVar4);
    _objc_release(uVar5);
    _objc_release(lVar1);
    _objc_release(uVar4);
    _objc_release(ppuVar3);
    _objc_release(ppuVar3);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107ce9978; end: 107ce9a5b;  */

void FUN_107ce9978(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c26d760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar3 = (undefined *)0x0;
  if (lVar1 != 0) {
    lVar1 = param_2;
    func_0x00010c26d760(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x000107d23490();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puVar3 = PTR_PTR_1126b4860;
    func_0x00010c258dc0(PTR_PTR_1126b4860);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfddf20(param_2);
  func_0x00010c259580(param_2);
  func_0x00010bee1100(param_1);
  _objc_release(param_1);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107ce9a5c; end: 107ce9a67;  */

void FUN_107ce9a5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107ce9a64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 107ce9a68; end: 107ce9ba3; -[SCFriendUnifiedProfileDataSource _updateStoryThumbnailNetworkImage:hasUnviewedStories:storyContentType:] */

void FUN_107ce9a68(long param_1,undefined8 param_2,long param_3,int param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c25b5c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_retain(lVar1);
  if (param_3 == lVar1) {
    _objc_release(lVar1);
    _objc_release(param_3);
LAB_107ce9b00:
    lVar2 = param_1;
    func_0x00010bfddf20();
    _objc_release(lVar1);
    if (param_4 == (int)lVar2) goto LAB_107ce9b84;
  }
  else {
    if (lVar1 == 0) {
      _objc_release();
    }
    else {
      lVar2 = param_3;
      func_0x00010c071ae0(param_3,param_2,lVar1);
      _objc_release(lVar1);
      _objc_release(param_3);
      if ((int)lVar2 != 0) goto LAB_107ce9b00;
    }
    _objc_release(lVar1);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_107ce9ba4;
  puStack_68 = &UNK_11091a8c8;
  lStack_60 = param_1;
  _objc_retain(param_3);
  uStack_48 = (undefined1)param_4;
  lStack_58 = param_3;
  uStack_50 = param_5;
  func_0x00010c0f9420(uVar3,param_2,&puStack_80);
  _objc_release(lStack_58);
LAB_107ce9b84:
  _objc_release(param_3);
  return;
}



/* Entry: 107ce9ba4; end: 107ce9bfb;  */

void FUN_107ce9ba4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(lVar1 + 0xa0);
  *(undefined8 *)(lVar1 + 0xa0) = uVar2;
  _objc_release(uVar3);
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0xa8) = *(undefined1 *)(param_1 + 0x38);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 200) = *(undefined8 *)(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010be04010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__dispatchStoryThumbnailNetworkIm_11255e9a0);
  return;
}



/* Entry: 107ce9bfc; end: 107ce9c77; -[SCFriendUnifiedProfileDataSource _dispatchStoryThumbnailNetworkImageUpdate] */

void FUN_107ce9bfc(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x0001000819a8(0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010007380c();
  _objc_release(uVar1);
  return;
}



/* Entry: 107ce9c78; end: 107ce9c8f;  */

void FUN_107ce9c78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7e9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),
             PTR_s_didUpdateWithAnnouncerIdentifier_1125bd418,
             &PTR____CFConstantStringClassReference_110eb7db8);
  return;
}



/* Entry: 107ce9c90; end: 107ce9d0b; -[SCFriendUnifiedProfileDataSource _dispatchRemoveFriend] */

void FUN_107ce9c90(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x0001000819a8(0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010007380c();
  _objc_release(uVar1);
  return;
}



/* Entry: 107ce9d0c; end: 107ce9d23;  */

void FUN_107ce9d0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7e9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),
             PTR_s_didUpdateWithAnnouncerIdentifier_1125bd418,
             &PTR____CFConstantStringClassReference_110eb7e18);
  return;
}



/* Entry: 107ce9d24; end: 107ce9d9f; -[SCFriendUnifiedProfileDataSource _dispatchBlockFriend] */

void FUN_107ce9d24(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x0001000819a8(0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010007380c();
  _objc_release(uVar1);
  return;
}



/* Entry: 107ce9da0; end: 107ce9db7;  */

void FUN_107ce9da0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7e9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),
             PTR_s_didUpdateWithAnnouncerIdentifier_1125bd418,
             &PTR____CFConstantStringClassReference_110eb7e38);
  return;
}



/* Entry: 107ce9db8; end: 107ce9e33; -[SCFriendUnifiedProfileDataSource _dispatchIgnoreFriendRequest] */

void FUN_107ce9db8(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x0001000819a8(0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010007380c();
  _objc_release(uVar1);
  return;
}



/* Entry: 107ce9e34; end: 107ce9e4b;  */

void FUN_107ce9e34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7e9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),
             PTR_s_didUpdateWithAnnouncerIdentifier_1125bd418,
             &PTR____CFConstantStringClassReference_110eb7e58);
  return;
}



/* Entry: 107ce9e4c; end: 107ce9ec7; -[SCFriendUnifiedProfileDataSource _dispatchIgnoreFriendSuggestion] */

void FUN_107ce9e4c(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x0001000819a8(0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010007380c();
  _objc_release(uVar1);
  return;
}



/* Entry: 107ce9ec8; end: 107ce9edf;  */

void FUN_107ce9ec8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7e9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),
             PTR_s_didUpdateWithAnnouncerIdentifier_1125bd418,
             &PTR____CFConstantStringClassReference_110eb7e78);
  return;
}



/* Entry: 107ce9ee0; end: 107ce9f5b; -[SCFriendUnifiedProfileDataSource _dispatchAddFriendStatusUpdate] */

void FUN_107ce9ee0(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x0001000819a8(0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010007380c();
  _objc_release(uVar1);
  return;
}



/* Entry: 107ce9f5c; end: 107ce9f73;  */

void FUN_107ce9f5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7e9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),
             PTR_s_didUpdateWithAnnouncerIdentifier_1125bd418,
             &PTR____CFConstantStringClassReference_110eb7dd8);
  return;
}



/* Entry: 107ce9f74; end: 107cea27b; -[SCFriendUnifiedProfileDataSource _updateFriendsFeedItemBasedOnFriendsFeedItems:] */

void FUN_107ce9f74(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined1 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x48) != 0) {
    lVar2 = param_1;
    func_0x00010c244280();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      lVar3 = lVar2;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      puStack_118 = &uStack_120;
      uStack_120 = 0;
      uStack_110 = 0x2020000000;
      uStack_108 = 0;
      _objc_retain(param_3);
      lVar4 = param_3;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (lVar4 != 0) {
        lVar8 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(param_3);
          }
          uVar10 = *(undefined8 *)(lVar8 * 8);
          func_0x00010bf96da0(uVar10);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(lVar3);
          func_0x00010c0c0020(uVar10);
          _objc_release(uVar10);
          _objc_release(lVar3);
          lVar8 = lVar8 + 1;
        } while (lVar4 != lVar8);
        lVar4 = param_3;
        func_0x00010bf52a60();
      }
      _objc_release(param_3);
      if ((*(byte *)(puStack_118 + 3) & 1) == 0) {
        uVar5 = *(ulong *)(param_1 + 0x80);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar5;
        func_0x00010c24a7c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar5);
        uVar5 = uVar9;
        func_0x00010bfa3d00();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010c0720c0();
        _objc_release(uVar5);
        if ((uVar6 & 1) == 0) {
          _objc_release(uVar9);
          uVar9 = 0;
        }
        func_0x00010bee07a0(param_1);
        func_0x00010bed8980(param_1);
        if (uVar9 == 0) {
          func_0x00010bed4c60(param_1);
        }
        else {
          func_0x00010bed4c80(param_1);
        }
        _objc_release(uVar9);
      }
      else {
        func_0x00010bee07a0(param_1);
      }
      __Block_object_dispose(&uStack_120,8);
      _objc_release(lVar3);
    }
    _objc_release(lVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  uVar7 = 8;
  __Block_object_dispose(&uStack_120);
  __Unwind_Resume();
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar7;
  func_0x00010c0720c0();
  _objc_release(uVar7);
  if ((int)uVar10 != 0) {
    func_0x00010bed8980(*(undefined8 *)(param_3 + 0x28));
    func_0x00010bed4ca0(*(undefined8 *)(param_3 + 0x28));
    *(undefined1 *)(*(long *)(*(long *)(param_3 + 0x38) + 8) + 0x18) = 1;
  }
  return;
}



/* Entry: 107cea27c; end: 107cea2eb;  */

void FUN_107cea27c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  if ((int)uVar1 != 0) {
    func_0x00010bed8980(*(undefined8 *)(param_1 + 0x28));
    func_0x00010bed4ca0(*(undefined8 *)(param_1 + 0x28));
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = 1;
  }
  return;
}



/* Entry: 107cea2ec; end: 107cea2f3;  */

void FUN_107cea2ec(void)

{
  return;
}



/* Entry: 107cea2f4; end: 107cea53f; -[SCFriendUnifiedProfileDataSource _updateCampaignSnapchatterIfNecessary:] */

void FUN_107cea2f4(long param_1,undefined1 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined **unaff_x25;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  long lStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x000100bf39e4();
  if ((int)lVar1 != 0) {
    lVar1 = param_3;
    func_0x000107cfb510();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      lVar3 = *(long *)(param_1 + 0x78);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_3;
      func_0x000107cfb510(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar3;
      func_0x00010c0f3e20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      _objc_release(lVar3);
      lVar1 = lVar2;
      func_0x00010bf5b640();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      func_0x00010bfe44e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      lVar1 = lVar3;
      func_0x00010c08fa60();
      if (lVar1 != 0) {
        _objc_initWeak(auStack_68,param_1);
        uVar4 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
        lStack_60 = lVar3;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = 0;
        func_0x0001000819a8(0,0);
        _objc_retainAutoreleasedReturnValue();
        puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_88 = 0xc2000000;
        pcStack_80 = FUN_107cea540;
        puStack_78 = &UNK_1108434e0;
        param_2 = auStack_68;
        _objc_copyWeak(auStack_70);
        func_0x00010c09d7c0(uVar4);
        _objc_release(uVar6);
        _objc_release(puVar5);
        _objc_release(uVar4);
        _objc_destroyWeak(auStack_70);
        _objc_destroyWeak(auStack_68);
        unaff_x25 = &puStack_90;
      }
      _objc_release(lVar3);
      _objc_release(lVar2);
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak((undefined1 *)((long)unaff_x25 + 0x20));
  _objc_destroyWeak(auStack_68);
  __Unwind_Resume(param_3);
  _objc_retain(param_2);
  puVar7 = param_2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar7 != (undefined1 *)0x0) {
    param_3 = param_3 + 0x20;
    _objc_loadWeakRetained(param_3);
    puVar7 = param_2;
    func_0x00010bfb1920(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bed4c60(param_3);
    _objc_release(puVar7);
    _objc_release(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107cea540; end: 107cea5cb;  */

void FUN_107cea540(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_2;
    func_0x00010bfb1920(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bed4c60(param_1);
    _objc_release(lVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107cea5cc; end: 107cea717; -[SCFriendUnifiedProfileDataSource _updateCampaignCreatorSnapchatter:] */

void FUN_107cea5cc(long param_1,undefined8 param_2,undefined8 param_3)

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
  uStack_50 = 0x107cea65c;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f9420(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 107cea718; end: 107cea793; -[SCFriendUnifiedProfileDataSource _dispatchCampaignCreatorSnapchatterUpdate] */

void FUN_107cea718(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x0001000819a8(0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010007380c();
  _objc_release(uVar1);
  return;
}



/* Entry: 107cea794; end: 107cea7ab;  */

void FUN_107cea794(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7e9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),
             PTR_s_didUpdateWithAnnouncerIdentifier_1125bd418,
             &PTR____CFConstantStringClassReference_110eb7e98);
  return;
}



/* Entry: 107cea7ac; end: 107cea8f7; -[SCFriendUnifiedProfileDataSource _updateFriendsFeedItem:] */

void FUN_107cea7ac(long param_1,undefined8 param_2,undefined8 param_3)

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
  uStack_50 = 0x107cea83c;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f9420(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 107cea8f8; end: 107cea973; -[SCFriendUnifiedProfileDataSource _dispatchFriendsFeedItemUpdate] */

void FUN_107cea8f8(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x0001000819a8(0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010007380c();
  _objc_release(uVar1);
  return;
}



/* Entry: 107cea974; end: 107cea98b;  */

void FUN_107cea974(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7e9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),
             PTR_s_didUpdateWithAnnouncerIdentifier_1125bd418,
             &PTR____CFConstantStringClassReference_110eb7df8);
  return;
}



/* Entry: 107cea98c; end: 107ceaad7; -[SCFriendUnifiedProfileDataSource _updateSponsoredSnapBannerMetadata:] */

void FUN_107cea98c(long param_1,undefined8 param_2,undefined8 param_3)

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
  uStack_50 = 0x107ceaa1c;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f9420(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 107ceaad8; end: 107ceaca7; -[SCFriendUnifiedProfileDataSource _updateCampaignSnapchatterFromBannerMetadata:] */

void FUN_107ceaad8(long param_1,undefined1 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined **unaff_x24;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bef4a60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf5b640();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfe44e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = lVar3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_58,param_1);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_50 = lVar3;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = 0;
    func_0x0001000819a8(0,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_107ceaca8;
    puStack_68 = &UNK_1108434e0;
    param_2 = auStack_58;
    _objc_copyWeak(auStack_60);
    func_0x00010c09d7c0(uVar4);
    _objc_release(uVar6);
    _objc_release(puVar5);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
    unaff_x24 = &puStack_80;
  }
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak((undefined1 *)((long)unaff_x24 + 0x20));
  _objc_destroyWeak(auStack_58);
  __Unwind_Resume(param_3);
  _objc_retain(param_2);
  puVar7 = param_2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar7 != (undefined1 *)0x0) {
    param_3 = param_3 + 0x20;
    _objc_loadWeakRetained(param_3);
    puVar7 = param_2;
    func_0x00010bfb1920(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bed4c60(param_3);
    _objc_release(puVar7);
    _objc_release(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107ceaca8; end: 107cead33;  */

void FUN_107ceaca8(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_2;
    func_0x00010bfb1920(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bed4c60(param_1);
    _objc_release(lVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107cead34; end: 107ceadab; -[SCFriendUnifiedProfileDataSource didUpdateFriendStorySettingWithUpdateRequest:success:] */

void FUN_107cead34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_107ceadac;
  puStack_20 = &UNK_110862228;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x107ceadf0;
  puStack_48 = &UNK_110862228;
  uStack_40 = param_1;
  uStack_18 = param_1;
  func_0x00010c0bede0(param_3,param_2,&puStack_38,&puStack_60,&PTR___NSConcreteGlobalBlock_110a07848
                     );
  return;
}



/* Entry: 107ceadac; end: 107ceae33;  */

void FUN_107ceadac(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bee04a0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107ceae34; end: 107ceae37;  */

void FUN_107ceae34(void)

{
  return;
}



/* Entry: 107ceae38; end: 107ceaec7; -[SCFriendUnifiedProfileDataSource didStartSnapchattersUpdateDataRequest:] */

void FUN_107ceae38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_107ceaec8;
  puStack_20 = &UNK_110866ad0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x107ceaed0;
  puStack_48 = &UNK_110866b00;
  uStack_40 = param_1;
  uStack_18 = param_1;
  func_0x00010c0bc6c0(param_3,param_2,0,0,&puStack_38,0,&puStack_60,0,0,0,0);
  return;
}



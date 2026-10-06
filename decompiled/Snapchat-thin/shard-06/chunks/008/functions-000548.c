/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104e7e5e4; end: 104e7e5eb; -[SCAllContactsSearchQueryCoordinator currentQuery] */

undefined8 FUN_104e7e5e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 104e7e5ec; end: 104e7e5f3; -[SCAllContactsSearchQueryCoordinator setCurrentQuery:] */

void FUN_104e7e5ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 104e7e5f4; end: 104e7e5fb; -[SCAllContactsSearchQueryCoordinator isLoading] */

undefined1 FUN_104e7e5f4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x28);
}



/* Entry: 104e7e5fc; end: 104e7e637; -[SCAllContactsSearchQueryCoordinator .cxx_destruct] */

void FUN_104e7e5fc(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 104e7e638; end: 104e7ea3f; -[SCAllContactsSectionCreator initWithSnapchattersDataFetcher:snapchattersDataTracker:nonSnapchattersDataFetcher:inlineShareSheetViewProviderService:offPlatformLinkGenerationService:usernameProvider:inviteFriendStateTracker:imageDownloader:labelInfoProvider:storyPrivacySettingManager:displayTimestamp:enableTwilioInvites:enablePendingFriendRequest:enableSnapchatterViewMore:circumstanceEngine:contactPhotosService:allContactsSyncer:contextSource:recentlyActiveRecordRepository:avatarFactory:] */

undefined8 *
FUN_104e7e638(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined4 param_14,undefined4 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,long param_19,undefined8 param_20,
             undefined8 param_21)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_88;
  undefined *puStack_80;
  
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
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_20);
  _objc_retain(param_21);
  puStack_80 = PTR_PTR_1126e49b0;
  puVar1 = &uStack_88;
  uStack_88 = param_2;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = puVar1[1];
    puVar1[1] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
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
    puVar1[0xb] = param_1;
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = puVar1[0xc];
    puVar1[0xc] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0xd];
    puVar1[0xd] = puVar3;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0x10) = (undefined1)param_14;
    *(bool *)((long)puVar1 + 0x81) = param_19 == 1;
    *(undefined1 *)((long)puVar1 + 0x82) = param_14._1_1_;
    *(undefined1 *)((long)puVar1 + 0x83) = param_14._2_1_;
    _objc_retain(param_16);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_17;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = puVar1[0x14];
    puVar1[0x14] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_18;
    _objc_release(uVar2);
    puVar1[0x15] = param_19;
    _objc_retain(param_20);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_21;
    _objc_release(uVar2);
    func_0x00010be4c720(puVar1);
  }
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
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
  return puVar1;
}



/* Entry: 104e7ea40; end: 104e7f15b; -[SCAllContactsSectionCreator sectionForDescriptor:] */

void FUN_104e7ea40(long param_1,undefined8 param_2,undefined **param_3)

{
  char cVar1;
  char cVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined1 auStack_f0 [8];
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined4 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 uStack_70;
  
  _objc_retain(param_3);
  ppuVar3 = (undefined **)PTR_PTR_1126b1108;
  _objc_alloc(PTR_PTR_1126b1108);
  ppuVar12 = param_3;
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  cVar1 = *(char *)(param_1 + 0x80);
  cVar2 = *(char *)(param_1 + 0x82);
  _objc_retain();
  _objc_retain(ppuVar12);
  ppuVar4 = ppuVar12;
  func_0x00010c0720c0();
  if ((int)ppuVar4 == 0) {
    ppuVar4 = ppuVar12;
    func_0x00010c0720c0();
    if ((int)ppuVar4 == 0) {
      ppuVar4 = ppuVar12;
      func_0x00010c0720c0();
      if ((int)ppuVar4 == 0) {
        ppuVar4 = &PTR____CFConstantStringClassReference_110daafd8;
      }
      else {
        ppuVar4 = &PTR____CFConstantStringClassReference_110db82f8;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db82f8,0);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      func_0x000104e83e1c();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    func_0x000104e83e04();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(ppuVar12);
  if ((cVar1 == '\0') || (ppuVar13 = ppuVar12, func_0x00010c0720c0(), (int)ppuVar13 == 0)) {
    ppuVar13 = (undefined **)0x0;
  }
  else if (cVar2 == '\0') {
    func_0x000104e83d8c();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x0001069a7080();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar5 = PTR_PTR_1126b1720;
  _objc_alloc(PTR_PTR_1126b1720);
  ppuVar6 = ppuVar4;
  func_0x0001051745a0(ppuVar4,ppuVar13,0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01a160(puVar5);
  _objc_release(ppuVar6);
  _objc_release(ppuVar13);
  _objc_release(ppuVar4);
  _objc_release(ppuVar12);
  func_0x00010c04f820(ppuVar3);
  _objc_release(puVar5);
  _objc_release(ppuVar12);
  func_0x00010c161980(ppuVar3);
  lVar7 = *(long *)(param_1 + 0x50);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c25aac0();
  _objc_release(lVar7);
  ppuVar4 = param_3;
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  ppuVar12 = ppuVar4;
  func_0x00010c0720c0();
  if (((ulong)ppuVar12 & 1) == 0) {
    ppuVar12 = param_3;
    func_0x00010c27dd80();
    _objc_retainAutoreleasedReturnValue();
    ppuVar13 = ppuVar12;
    func_0x00010c0720c0();
    if ((int)ppuVar13 != 0) {
      _objc_release(ppuVar12);
      goto LAB_104e7ec70;
    }
    ppuVar13 = param_3;
    func_0x00010c27dd80();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar13;
    func_0x00010c0720c0();
    _objc_release(ppuVar13);
    _objc_release(ppuVar12);
    _objc_release(ppuVar4);
    if (((ulong)ppuVar6 & 1) != 0) goto LAB_104e7ec78;
    ppuVar4 = param_3;
    func_0x00010c27dd80();
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = ppuVar4;
    func_0x00010c0720c0();
    _objc_release(ppuVar4);
    if ((int)ppuVar12 != 0) {
      uStack_c8 = 4;
      if (*(char *)(param_1 + 0x81) == '\0') {
        uStack_c8 = 2;
      }
      puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_e0 = 0xc0000000;
      pcStack_d8 = FUN_104e7f3ac;
      puStack_d0 = &UNK_110855d70;
      ppuVar4 = &puStack_e8;
      _objc_retainBlock(ppuVar4);
      puVar5 = PTR_PTR_1126b1718;
      _objc_alloc();
      func_0x00010c008c20();
      func_0x00010c1f9240(ppuVar3);
      _objc_retain(puVar5);
      uVar9 = *(undefined8 *)(param_1 + 0x78);
      *(undefined **)(param_1 + 0x78) = puVar5;
      _objc_release(uVar9);
      _objc_initWeak(auStack_98,param_1);
      puVar10 = puVar5;
      func_0x00010c0f11a0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_f0,auStack_98);
      puVar11 = puVar10;
      func_0x00010c25ff60(puVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1a3e0();
      _objc_release(puVar11);
      _objc_release(puVar10);
      func_0x00010bef9980(ppuVar3);
      _objc_destroyWeak(auStack_f0);
      _objc_destroyWeak(auStack_98);
      _objc_release(puVar5);
      goto LAB_104e7eddc;
    }
    ppuVar4 = param_3;
    func_0x00010c27dd80();
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = ppuVar4;
    func_0x00010c0720c0();
    _objc_release(ppuVar4);
    if ((int)ppuVar12 != 0) {
      func_0x0001079ec358();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_104e7edfc;
    }
    ppuVar4 = param_3;
    func_0x00010c27dd80();
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = ppuVar4;
    func_0x00010c0720c0();
    _objc_release(ppuVar4);
    if ((int)ppuVar12 != 0) {
      ppuVar12 = *(undefined ***)(param_1 + 0x20);
      func_0x00010c269d40(ppuVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdf33e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = ppuVar12;
      func_0x00010c156a40(ppuVar12);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
LAB_104e7f11c:
      _objc_release(ppuVar12);
      goto LAB_104e7edfc;
    }
    ppuVar4 = param_3;
    func_0x00010c27dd80();
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = ppuVar4;
    func_0x00010c0720c0();
    _objc_release(ppuVar4);
    if ((int)ppuVar12 != 0) {
      ppuVar12 = (undefined **)(param_1 + 0xd0);
      _objc_loadWeakRetained(ppuVar12);
      uVar9 = *(undefined8 *)(param_1 + 0x88);
      func_0x000108c07984(uVar9);
      ppuVar4 = ppuVar12;
      func_0x0001079ec4f4(ppuVar12,uVar9);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_104e7f11c;
    }
  }
  else {
LAB_104e7ec70:
    _objc_release(ppuVar4);
LAB_104e7ec78:
    puVar5 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc0000000;
    pcStack_80 = FUN_104e7f1e8;
    puStack_78 = &UNK_110855d10;
    ppuVar4 = &puStack_90;
    uStack_70 = lVar8 == 0;
    _objc_retainBlock(ppuVar4);
    puVar10 = PTR_PTR_1126b1708;
    _objc_alloc();
    func_0x00010c049b40(*(undefined8 *)(param_1 + 0x58));
    func_0x00010c1f9240(ppuVar3);
    if (*(char *)(param_1 + 0x83) == '\x01') {
      puVar11 = PTR_PTR_1126b1710;
      _objc_opt_new(PTR_PTR_1126b1710);
      func_0x00010c222a60(ppuVar3);
      _objc_release(puVar11);
    }
    _objc_initWeak(auStack_98,param_1);
    puVar11 = puVar10;
    func_0x00010c0f11a0(puVar10);
    _objc_retainAutoreleasedReturnValue();
    puStack_c0 = puVar5;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_104e7f2f4;
    puStack_a8 = &UNK_110855580;
    _objc_copyWeak(auStack_a0,auStack_98);
    puVar5 = puVar11;
    func_0x00010c25ff60(puVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(puVar5);
    _objc_release(puVar11);
    func_0x00010bef9980(ppuVar3);
    uVar9 = *(undefined8 *)(param_1 + 0x70);
    *(undefined **)(param_1 + 0x70) = puVar10;
    _objc_release(uVar9);
    _objc_destroyWeak(auStack_a0);
    _objc_destroyWeak(auStack_98);
LAB_104e7eddc:
    _objc_release(ppuVar4);
  }
  func_0x00010c161980(ppuVar3);
  _objc_retain(ppuVar3);
  ppuVar4 = ppuVar3;
LAB_104e7edfc:
  _objc_release(ppuVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar4);
  return;
}



/* Entry: 104e7f15c; end: 104e7f1e7;  */

undefined8 FUN_104e7f15c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if ((lVar1 == 0) || (uVar2 = param_3, func_0x00010901ef14(param_3,param_4), (int)uVar2 != 0)) {
    uVar2 = param_3;
    func_0x0001079ec26c(param_1,param_3);
  }
  else {
    uVar2 = 0;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 104e7f1e8; end: 104e7f2f3;  */

void FUN_104e7f1e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined1 *)(param_1 + 0x20);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  uVar2 = 1;
  func_0x00010bc9107c(1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x0001079eb38c(0x41cd27e440000000,param_2,param_3,param_4,param_5,uVar1,0x21,uVar2,8,0,
                      param_7,1,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 104e7f2f4; end: 104e7f33b;  */

void FUN_104e7f2f4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdc6f20();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e7f33c; end: 104e7f3ab;  */

undefined8 FUN_104e7f33c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    uVar2 = 1;
  }
  else {
    uVar2 = param_2;
    func_0x00010901ef84(param_2,param_3);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 104e7f3ac; end: 104e7f3cf;  */

void FUN_104e7f3ac(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  uVar1 = *(undefined4 *)(param_2 + 0x20);
  _objc_retain(param_6);
  _objc_retain(param_3);
  uVar3 = param_3;
  func_0x000107cf40e0(param_3,param_4,param_5,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x000107cf1bd0(param_3,uVar3,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  func_0x00010c070aa0();
  _objc_release(param_3);
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b1910;
  _objc_alloc(PTR_PTR_1126b1910);
  puVar7 = puVar6;
  func_0x000107cf426c();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uRam000000011323cd50;
  uVar3 = uRam000000011323cd40;
  puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b816670();
  func_0x00010c142240();
  _objc_release(param_6);
  func_0x00010c0495a0(0x7fefffffffffffff,uVar3,uVar2,param_1,puVar6);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 104e7f3d0; end: 104e7f417;  */

void FUN_104e7f3d0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdc6f20();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e7f418; end: 104e7f523; -[SCAllContactsSectionCreator _listenToContactSyncStatus] */

void FUN_104e7f418(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c266ce0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 104e7f524; end: 104e7f5df;  */

void FUN_104e7f524(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0c0ae0(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 104e7f5e0; end: 104e7f5e7;  */

void FUN_104e7f5e0(void)

{
  return;
}



/* Entry: 104e7f5e8; end: 104e7f613;  */

void FUN_104e7f5e8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8ac60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e7f614; end: 104e7f617;  */

void FUN_104e7f614(void)

{
  return;
}



/* Entry: 104e7f618; end: 104e7f63f; -[SCAllContactsSectionCreator _reloadSections] */

/* WARNING: Possible PIC construction at 0x000104e7f62c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104e7f630) */

void FUN_104e7f618(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c128f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x70),PTR_s_reloadSections_112627e00);
  return;
}



/* Entry: 104e7f640; end: 104e7f647; -[SCAllContactsSectionCreator _addFriendsPageEventReceived:] */

void FUN_104e7f640(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x60),PTR_s_next__112614028);
  return;
}



/* Entry: 104e7f648; end: 104e7f817; -[SCAllContactsSectionCreator _createShareSheetConfigurationForInvites] */

void FUN_104e7f648(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bfbf720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar4 = PTR_PTR_1126ae720;
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x104e7f778;
  puStack_40 = &UNK_110850038;
  uStack_38 = uVar1;
  _objc_retain(uVar1);
  func_0x00010bf11fe0(puVar4,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b0808;
  _objc_alloc(PTR_PTR_1126b0808);
  func_0x00010c051820();
  _objc_release(puVar4);
  _objc_release(uStack_38);
  _objc_release(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 104e7f818; end: 104e7f81f; -[SCAllContactsSectionCreator actionHandler] */

undefined8 FUN_104e7f818(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 104e7f820; end: 104e7f84f; -[SCAllContactsSectionCreator setActionHandler:] */

void FUN_104e7f820(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xc0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e7f850; end: 104e7f857; -[SCAllContactsSectionCreator pageEventObservable] */

undefined8 FUN_104e7f850(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 104e7f858; end: 104e7f887; -[SCAllContactsSectionCreator setPageEventObservable:] */

void FUN_104e7f858(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e7f888; end: 104e7f88f; -[SCAllContactsSectionCreator uiContainer] */

undefined8 FUN_104e7f888(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



/* Entry: 104e7f890; end: 104e7f8bf; -[SCAllContactsSectionCreator setUiContainer:] */

void FUN_104e7f890(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 200);
  *(undefined8 *)(param_1 + 200) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e7f8c0; end: 104e7f8d7; -[SCAllContactsSectionCreator findFriendsCTADelegate] */

void FUN_104e7f8c0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xd0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e7f8d8; end: 104e7f8e3; -[SCAllContactsSectionCreator setFindFriendsCTADelegate:] */

void FUN_104e7f8d8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xd0,param_3);
  return;
}



/* Entry: 104e7f8e4; end: 104e7fa0b; -[SCAllContactsSectionCreator .cxx_destruct] */

void FUN_104e7f8e4(long param_1)

{
  _objc_destroyWeak(param_1 + 0xd0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
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



/* Entry: 104e7fa0c; end: 104e7fafb; -[SCAllContactsStatusView initWithFindFriendsContextSource:didTapErrorButton:didTapEmptyButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104e7fa0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126e49b8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_50,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127151a0) = param_3;
    uVar2 = param_4;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127151a4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127151a4) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127151a8);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127151a8) = uVar2;
    _objc_release(uVar3);
    func_0x00010beb0d80(puVar1);
    func_0x00010bfe1560(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 104e7fafc; end: 104e80eb7; -[SCAllContactsStatusView _setupUI] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e7fafc(long param_1)

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
  long *plVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lStack_2f0;
  undefined *puStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined1 *puStack_2d0;
  code *pcStack_2c8;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined *puStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  long lStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  lVar14 = (long)_DAT_1127151ac;
  uVar11 = *(undefined8 *)(param_1 + lVar14);
  *(undefined **)(param_1 + lVar14) = puVar1;
  _objc_release(uVar11);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar14));
  func_0x00010befbb60(param_1);
  uVar11 = *(undefined8 *)(param_1 + lVar14);
  lVar13 = param_1;
  func_0x00010c09cea0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar11);
  _objc_release(lVar13);
  uVar11 = *(undefined8 *)(param_1 + lVar14);
  lVar13 = param_1;
  func_0x00010c09d120(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar11);
  _objc_release(lVar13);
  puStack_210 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar11 = *(undefined8 *)(param_1 + lVar14);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  lStack_1e8 = uVar11;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lStack_1f0 = lVar13;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar14);
  lStack_1f8 = uVar11;
  uStack_b0 = uVar11;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  uStack_200 = uVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lStack_208 = lVar13;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar14);
  uStack_a8 = uVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  func_0x00010c2793a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar14);
  uStack_a0 = uVar11;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1;
  func_0x00010bf1ff80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_98 = uVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_210);
  _objc_release(puVar1);
  _objc_release(uVar5);
  _objc_release(lVar15);
  _objc_release(uVar4);
  _objc_release(uVar11);
  _objc_release(lVar13);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(lStack_208);
  _objc_release(uStack_200);
  _objc_release(lStack_1f8);
  _objc_release(lStack_1f0);
  _objc_release(lStack_1e8);
  puStack_218 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar13 = (long)_DAT_1127151b0;
  uVar5 = *(undefined8 *)(param_1 + lVar13);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar14);
  lStack_1e8 = uVar5;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lStack_1f0 = uVar11;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar13);
  lStack_1f8 = uVar5;
  uStack_e0 = uVar5;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar14);
  uStack_200 = uVar2;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lStack_208 = uVar11;
  func_0x00010bf493c0(0xc038000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar15 = (long)_DAT_1127151b4;
  uVar5 = *(undefined8 *)(param_1 + lVar15);
  puStack_210 = (undefined *)uVar2;
  uStack_d8 = uVar2;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar14);
  uStack_220 = uVar5;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uStack_228 = uVar11;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar15);
  uStack_230 = uVar5;
  uStack_d0 = uVar5;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar14);
  uStack_238 = uVar3;
  func_0x00010c08de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf49480(0x4046000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar15);
  uStack_c8 = uVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar14);
  func_0x00010c2793a0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf49520(0xc046000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar15);
  uStack_c0 = uVar5;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar13);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar7;
  func_0x00010bf493c0(0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_b8 = uVar11;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_218);
  _objc_release(puVar1);
  _objc_release(uVar11);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uStack_238);
  _objc_release(uStack_230);
  _objc_release(uStack_228);
  _objc_release(uStack_220);
  _objc_release(puStack_210);
  _objc_release(lStack_208);
  _objc_release(uStack_200);
  _objc_release(lStack_1f8);
  _objc_release(lStack_1f0);
  _objc_release(lStack_1e8);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  lVar14 = (long)_DAT_1127151b8;
  uVar11 = *(undefined8 *)(param_1 + lVar14);
  *(undefined **)(param_1 + lVar14) = puVar1;
  _objc_release(uVar11);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar14));
  func_0x00010befbb60(param_1);
  uVar11 = *(undefined8 *)(param_1 + lVar14);
  lVar13 = param_1;
  func_0x00010bf98c40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar11);
  _objc_release(lVar13);
  uVar11 = *(undefined8 *)(param_1 + lVar14);
  lVar13 = param_1;
  func_0x00010bf98ce0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar11);
  _objc_release(lVar13);
  uVar11 = *(undefined8 *)(param_1 + lVar14);
  lVar13 = param_1;
  func_0x00010bf988c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar11);
  _objc_release(lVar13);
  puStack_210 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar11 = *(undefined8 *)(param_1 + lVar14);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  lStack_1e8 = uVar11;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lStack_1f0 = lVar13;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar14);
  lStack_1f8 = uVar11;
  uStack_100 = uVar11;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  uStack_200 = uVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lStack_208 = lVar13;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar14);
  uStack_f8 = uVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar14);
  uStack_f0 = uVar11;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1;
  func_0x00010bf1ff80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_e8 = uVar5;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_210);
  _objc_release(puVar1);
  _objc_release(uVar5);
  _objc_release(lVar15);
  _objc_release(uVar4);
  _objc_release(uVar11);
  _objc_release(lVar13);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(lStack_208);
  _objc_release(uStack_200);
  _objc_release(lStack_1f8);
  _objc_release(lStack_1f0);
  _objc_release(lStack_1e8);
  puStack_250 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar13 = (long)_DAT_1127151bc;
  uVar5 = *(undefined8 *)(param_1 + lVar13);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar14);
  lStack_1e8 = uVar5;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lStack_1f0 = uVar11;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar13);
  lStack_1f8 = uVar5;
  uStack_160 = uVar5;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uStack_200 = uVar11;
  func_0x00010bf49420(0x4050000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar13);
  lStack_208 = uVar11;
  uStack_158 = uVar11;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puStack_210 = (undefined *)uVar5;
  func_0x00010bf49420(0x4050000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar13);
  puStack_218 = (undefined *)uVar5;
  uStack_150 = uVar5;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar14);
  uStack_220 = uVar2;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uStack_228 = uVar11;
  func_0x00010bf493c0(0xc048000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar15 = (long)_DAT_1127151c0;
  uVar5 = *(undefined8 *)(param_1 + lVar15);
  uStack_230 = uVar2;
  uStack_148 = uVar2;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar14);
  uStack_238 = uVar5;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uStack_240 = uVar11;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar15);
  uStack_248 = uVar5;
  uStack_140 = uVar5;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar14);
  uStack_258 = uVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uStack_260 = uVar11;
  func_0x00010bf49480(0x4046000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar15);
  uStack_268 = uVar2;
  uStack_138 = uVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar14);
  uStack_270 = uVar5;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_278 = uVar11;
  func_0x00010bf49520(0xc046000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar15);
  uStack_280 = uVar5;
  uStack_130 = uVar5;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar13);
  uStack_288 = uVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uStack_290 = uVar11;
  func_0x00010bf493c0(0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = (long)_DAT_1127151c4;
  uVar5 = *(undefined8 *)(param_1 + lVar13);
  uStack_298 = uVar2;
  uStack_128 = uVar2;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar14);
  uStack_2a0 = uVar5;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uStack_2a8 = uVar11;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar13);
  uStack_2b0 = uVar5;
  uStack_120 = uVar5;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar14);
  uStack_2b8 = uVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493c0(0x4046000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar13);
  uStack_118 = uVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar14);
  func_0x00010c2793a0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf493c0(0xc046000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar13);
  uStack_110 = uVar5;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar7;
  func_0x00010bf493c0(0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_108 = uVar11;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_250);
  _objc_release(puVar1);
  _objc_release(uVar11);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uStack_2b8);
  _objc_release(uStack_2b0);
  _objc_release(uStack_2a8);
  _objc_release(uStack_2a0);
  _objc_release(uStack_298);
  _objc_release(uStack_290);
  _objc_release(uStack_288);
  _objc_release(uStack_280);
  _objc_release(uStack_278);
  _objc_release(uStack_270);
  _objc_release(uStack_268);
  _objc_release(uStack_260);
  _objc_release(uStack_258);
  _objc_release(uStack_248);
  _objc_release(uStack_240);
  _objc_release(uStack_238);
  _objc_release(uStack_230);
  _objc_release(uStack_228);
  _objc_release(uStack_220);
  _objc_release(puStack_218);
  _objc_release(puStack_210);
  _objc_release(lStack_208);
  _objc_release(uStack_200);
  _objc_release(lStack_1f8);
  _objc_release(lStack_1f0);
  _objc_release(lStack_1e8);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  lVar14 = (long)_DAT_1127151c8;
  uVar11 = *(undefined8 *)(param_1 + lVar14);
  *(undefined **)(param_1 + lVar14) = puVar1;
  _objc_release(uVar11);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar14));
  func_0x00010befbb60(param_1);
  uVar11 = *(undefined8 *)(param_1 + lVar14);
  lVar13 = param_1;
  func_0x00010bf8ec40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar11);
  _objc_release(lVar13);
  uVar11 = *(undefined8 *)(param_1 + lVar14);
  lVar13 = param_1;
  func_0x00010bf8ec80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar11);
  _objc_release(lVar13);
  uVar11 = *(undefined8 *)(param_1 + lVar14);
  lVar13 = param_1;
  func_0x00010bf8eb80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar11);
  _objc_release(lVar13);
  puStack_210 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar11 = *(undefined8 *)(param_1 + lVar14);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  lStack_1e8 = uVar11;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lStack_1f0 = lVar13;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar14);
  lStack_1f8 = uVar11;
  uStack_180 = uVar11;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  uStack_200 = uVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lStack_208 = lVar13;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar14);
  uStack_178 = uVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  func_0x00010c2793a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar14);
  uStack_170 = uVar5;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_168 = uVar11;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_210);
  _objc_release(puVar1);
  _objc_release(uVar11);
  _objc_release(lVar15);
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_release(lVar13);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(lStack_208);
  _objc_release(uStack_200);
  _objc_release(lStack_1f8);
  _objc_release(lStack_1f0);
  _objc_release(lStack_1e8);
  puStack_250 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar15 = (long)_DAT_1127151cc;
  lVar13 = *(long *)(param_1 + lVar15);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar14);
  lStack_1e8 = lVar13;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lStack_1f0 = uVar11;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar15);
  lStack_1f8 = lVar13;
  lStack_1e0 = lVar13;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uStack_200 = uVar11;
  func_0x00010bf49420(0x4050000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar15);
  lStack_208 = uVar11;
  uStack_1d8 = uVar11;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puStack_210 = (undefined *)uVar5;
  func_0x00010bf49420(0x4050000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar15);
  puStack_218 = (undefined *)uVar5;
  uStack_1d0 = uVar5;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar14);
  uStack_220 = uVar2;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uStack_228 = uVar11;
  func_0x00010bf493c0(0xc048000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = (long)_DAT_1127151d0;
  uVar5 = *(undefined8 *)(param_1 + lVar13);
  uStack_230 = uVar2;
  uStack_1c8 = uVar2;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar14);
  uStack_238 = uVar5;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uStack_240 = uVar11;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar13);
  uStack_248 = uVar5;
  uStack_1c0 = uVar5;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar14);
  uStack_258 = uVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uStack_260 = uVar11;
  func_0x00010bf49480(0x4046000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar13);
  uStack_268 = uVar2;
  uStack_1b8 = uVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar14);
  uStack_270 = uVar5;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_278 = uVar11;
  func_0x00010bf49520(0xc046000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar13);
  uStack_280 = uVar5;
  uStack_1b0 = uVar5;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar15);
  uStack_288 = uVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uStack_290 = uVar11;
  func_0x00010bf493c0(0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar15 = (long)_DAT_1127151d4;
  uVar5 = *(undefined8 *)(param_1 + lVar15);
  uStack_298 = uVar2;
  uStack_1a8 = uVar2;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar14);
  uStack_2a0 = uVar5;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uStack_2a8 = uVar11;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar15);
  uStack_2b0 = uVar5;
  uStack_1a0 = uVar5;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar14);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bf493c0(0x4046000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar15);
  uStack_198 = uVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar14);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar6;
  func_0x00010bf493c0(0xc046000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar15);
  uStack_190 = uVar5;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar13);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar8;
  func_0x00010bf493c0(0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_188 = uVar11;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_250);
  _objc_release(puVar1);
  _objc_release(uVar11);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar5);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uStack_2b0);
  _objc_release(uStack_2a8);
  _objc_release(uStack_2a0);
  _objc_release(uStack_298);
  _objc_release(uStack_290);
  _objc_release(uStack_288);
  _objc_release(uStack_280);
  _objc_release(uStack_278);
  _objc_release(uStack_270);
  _objc_release(uStack_268);
  _objc_release(uStack_260);
  _objc_release(uStack_258);
  _objc_release(uStack_248);
  _objc_release(uStack_240);
  _objc_release(uStack_238);
  _objc_release(uStack_230);
  _objc_release(uStack_228);
  _objc_release(uStack_220);
  _objc_release(puStack_218);
  _objc_release(puStack_210);
  _objc_release(lStack_208);
  _objc_release(uStack_200);
  _objc_release(lStack_1f8);
  _objc_release(lStack_1f0);
  lVar13 = lStack_1e8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return;
  }
  ___stack_chk_fail();
  plVar10 = &lStack_2f0;
  pcStack_2c8 = FUN_104e80eb8;
  puStack_2e8 = PTR_PTR_1126e49b8;
  lStack_2f0 = lVar13;
  uStack_2e0 = uVar2;
  uStack_2d8 = uVar9;
  puStack_2d0 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&lStack_2f0,PTR_s_hitTest_withEvent__1125d6850);
  _objc_retainAutoreleasedReturnValue();
  if ((plVar10 == (long *)*(undefined1 **)(lVar13 + _DAT_1127151c4)) ||
     (plVar10 == (long *)*(undefined1 **)(lVar13 + _DAT_1127151d4))) {
    _objc_retain(plVar10);
    puVar12 = (undefined1 *)plVar10;
  }
  else {
    puVar12 = (undefined1 *)0x0;
  }
  _objc_release(plVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 104e80eb8; end: 104e80f4b; -[SCAllContactsStatusView hitTest:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e80eb8(long param_1)

{
  long *plVar1;
  undefined1 *puVar2;
  long lStack_30;
  undefined *puStack_28;
  
  plVar1 = &lStack_30;
  puStack_28 = PTR_PTR_1126e49b8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_hitTest_withEvent__1125d6850);
  _objc_retainAutoreleasedReturnValue();
  if ((plVar1 == (long *)*(undefined1 **)(param_1 + _DAT_1127151c4)) ||
     (plVar1 == (long *)*(undefined1 **)(param_1 + _DAT_1127151d4))) {
    _objc_retain(plVar1);
    puVar2 = (undefined1 *)plVar1;
  }
  else {
    puVar2 = (undefined1 *)0x0;
  }
  _objc_release(plVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104e80f4c; end: 104e80f53; -[SCAllContactsStatusView hide] */

void FUN_104e80f4c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setHidden__1126479f8,1);
  return;
}



/* Entry: 104e80f54; end: 104e80faf; -[SCAllContactsStatusView showLoadingView] */

/* WARNING: Possible PIC construction at 0x000104e80f78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104e80f98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104e80f7c) */
/* WARNING: Removing unreachable block (ram,0x000104e80f9c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e80f54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127151ac),PTR_s_setHidden__1126479f8,0);
  return;
}



/* Entry: 104e80fb0; end: 104e8100b; -[SCAllContactsStatusView showEmptyView] */

/* WARNING: Possible PIC construction at 0x000104e80fd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104e80ff4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104e80fd8) */
/* WARNING: Removing unreachable block (ram,0x000104e80ff8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e80fb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127151ac),PTR_s_setHidden__1126479f8,1);
  return;
}



/* Entry: 104e8100c; end: 104e81067; -[SCAllContactsStatusView showErrorView] */

/* WARNING: Possible PIC construction at 0x000104e81030: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104e81050: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104e81034) */
/* WARNING: Removing unreachable block (ram,0x000104e81054) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e8100c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127151ac),PTR_s_setHidden__1126479f8,1);
  return;
}



/* Entry: 104e81068; end: 104e810f3; -[SCAllContactsStatusView loadingIndicator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e81068(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_1127151b0;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126aeff0;
    _objc_alloc();
    func_0x00010bfffb60();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar4),param_2,0);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar4),param_2,0);
    func_0x00010c24dbc0(*(undefined8 *)(param_1 + lVar4));
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 104e810f4; end: 104e811fb; -[SCAllContactsStatusView loadingLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e810f4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_1127151b4;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126aea58;
    _objc_opt_new();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar4),param_2,0x16);
    lVar3 = param_1;
    func_0x00010be4f200(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_1 + lVar4),param_2,lVar3);
    _objc_release(lVar3);
    func_0x00010c165e00(*(undefined8 *)(param_1 + lVar4),param_2,1);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)(param_1 + lVar4),param_2,puVar1);
    _objc_release(puVar1);
    func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar4),param_2,0);
    func_0x00010c1bdb00(*(undefined8 *)(param_1 + lVar4),param_2,0);
    func_0x00010c213040(*(undefined8 *)(param_1 + lVar4),param_2,1);
    func_0x00010c23d620(*(undefined8 *)(param_1 + lVar4));
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar4),param_2,0);
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 104e811fc; end: 104e81293; -[SCAllContactsStatusView errorImageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e811fc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_1127151bc;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    lVar3 = param_1;
    func_0x00010be0b000(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bf60(puVar1,param_2,lVar3);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    _objc_release(lVar3);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar4),param_2,0);
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 104e81294; end: 104e8139b; -[SCAllContactsStatusView errorLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e81294(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_1127151c0;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126aea58;
    _objc_opt_new();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar4),param_2,0x16);
    lVar3 = param_1;
    func_0x00010be0b1c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_1 + lVar4),param_2,lVar3);
    _objc_release(lVar3);
    func_0x00010c165e00(*(undefined8 *)(param_1 + lVar4),param_2,1);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)(param_1 + lVar4),param_2,puVar1);
    _objc_release(puVar1);
    func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar4),param_2,0);
    func_0x00010c1bdb00(*(undefined8 *)(param_1 + lVar4),param_2,0);
    func_0x00010c213040(*(undefined8 *)(param_1 + lVar4),param_2,1);
    func_0x00010c23d620(*(undefined8 *)(param_1 + lVar4));
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar4),param_2,0);
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 104e8139c; end: 104e81473; -[SCAllContactsStatusView errorButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e8139c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_1127151c4;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126aec40;
    func_0x00010bf25cc0(PTR_PTR_1126aec40,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar4),param_2,0);
    func_0x00010c198080(*(undefined8 *)(param_1 + lVar4),param_2,1);
    func_0x00010c20eaa0(*(undefined8 *)(param_1 + lVar4),param_2,2);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    lVar3 = param_1;
    func_0x00010be0ae00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216260(uVar2,param_2,lVar3,0);
    _objc_release(lVar3);
    func_0x00010befbd60(*(undefined8 *)(param_1 + lVar4),param_2,param_1,
                        PTR_s__errorButtonPressed_112526868,0x40);
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 104e81474; end: 104e8150b; -[SCAllContactsStatusView emptyImageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e81474(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_1127151cc;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    lVar3 = param_1;
    func_0x00010be08840(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bf60(puVar1,param_2,lVar3);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    _objc_release(lVar3);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar4),param_2,0);
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 104e8150c; end: 104e81613; -[SCAllContactsStatusView emptyLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e8150c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_1127151d0;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126aea58;
    _objc_opt_new();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar4),param_2,0x16);
    lVar3 = param_1;
    func_0x00010be08960(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_1 + lVar4),param_2,lVar3);
    _objc_release(lVar3);
    func_0x00010c165e00(*(undefined8 *)(param_1 + lVar4),param_2,1);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)(param_1 + lVar4),param_2,puVar1);
    _objc_release(puVar1);
    func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar4),param_2,0);
    func_0x00010c1bdb00(*(undefined8 *)(param_1 + lVar4),param_2,0);
    func_0x00010c213040(*(undefined8 *)(param_1 + lVar4),param_2,1);
    func_0x00010c23d620(*(undefined8 *)(param_1 + lVar4));
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar4),param_2,0);
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 104e81614; end: 104e816f7; -[SCAllContactsStatusView emptyButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e81614(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_1127151d4;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126aec40;
    func_0x00010bf25cc0(PTR_PTR_1126aec40,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar4),param_2,0);
    func_0x00010c198080(*(undefined8 *)(param_1 + lVar4),param_2,1);
    func_0x00010c20eaa0(*(undefined8 *)(param_1 + lVar4),param_2,2);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    lVar3 = param_1;
    func_0x00010be087a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216260(uVar2,param_2,lVar3,0);
    _objc_release(lVar3);
    func_0x00010befbd60(*(undefined8 *)(param_1 + lVar4),param_2,param_1,
                        PTR_s__emptyButtonPressed_112526870,0x40);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar4),param_2,1);
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 104e816f8; end: 104e8170b; -[SCAllContactsStatusView _errorButtonPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e816f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104e81708. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + _DAT_1127151a4) + 0x10))();
  return;
}



/* Entry: 104e8170c; end: 104e8171f; -[SCAllContactsStatusView _emptyButtonPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e8170c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104e8171c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + _DAT_1127151a8) + 0x10))();
  return;
}



/* Entry: 104e81720; end: 104e8175b; -[SCAllContactsStatusView _loadingText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e81720(long param_1)

{
  if (*(long *)(param_1 + _DAT_1127151a0) == 3) {
    func_0x000104e83e34();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e8175c; end: 104e817a3; -[SCAllContactsStatusView _errorImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e8175c(long param_1,undefined8 param_2)

{
  if (*(long *)(param_1 + _DAT_1127151a0) == 3) {
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                        &PTR____CFConstantStringClassReference_110db8318);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e817a4; end: 104e817df; -[SCAllContactsStatusView _errorText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e817a4(long param_1)

{
  if (*(long *)(param_1 + _DAT_1127151a0) == 3) {
    func_0x000104e83e4c();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e817e0; end: 104e8181b; -[SCAllContactsStatusView _errorButtonText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e817e0(long param_1)

{
  if (*(long *)(param_1 + _DAT_1127151a0) == 3) {
    func_0x000104e83e64();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e8181c; end: 104e81863; -[SCAllContactsStatusView _emptyImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e8181c(long param_1,undefined8 param_2)

{
  if (*(long *)(param_1 + _DAT_1127151a0) == 3) {
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                        &PTR____CFConstantStringClassReference_110db8318);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e81864; end: 104e8189f; -[SCAllContactsStatusView _emptyText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e81864(long param_1)

{
  if (*(long *)(param_1 + _DAT_1127151a0) == 3) {
    func_0x000104e83e7c();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e818a0; end: 104e818db; -[SCAllContactsStatusView _emptyButtonText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e818a0(long param_1)

{
  if (*(long *)(param_1 + _DAT_1127151a0) == 3) {
    func_0x000104e83e94();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e818dc; end: 104e819cb; -[SCAllContactsStatusView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e818dc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127151a8,0);
  _objc_storeStrong(param_1 + _DAT_1127151a4,0);
  _objc_storeStrong(param_1 + _DAT_1127151d4,0);
  _objc_storeStrong(param_1 + _DAT_1127151d0,0);
  _objc_storeStrong(param_1 + _DAT_1127151cc,0);
  _objc_storeStrong(param_1 + _DAT_1127151c8,0);
  _objc_storeStrong(param_1 + _DAT_1127151c4,0);
  _objc_storeStrong(param_1 + _DAT_1127151c0,0);
  _objc_storeStrong(param_1 + _DAT_1127151bc,0);
  _objc_storeStrong(param_1 + _DAT_1127151b8,0);
  _objc_storeStrong(param_1 + _DAT_1127151b4,0);
  _objc_storeStrong(param_1 + _DAT_1127151b0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127151ac,0);
  return;
}



/* Entry: 104e819cc; end: 104e81df7; -[SCAllContactsViewController initWithSectionCreator:allContactsWorkflowDelegate:inlineShareSheetViewProviderService:enableSnapchatterViewMore:contactPermissionInfoProvider:contextSource:allContactsSyncer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_104e819cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auStack_e8 [8];
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
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_9);
  puStack_80 = PTR_PTR_1126e49c0;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    lVar9 = (long)_DAT_1127151dc;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_1127151e0,param_4);
    lVar9 = (long)_DAT_1127151e4;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_5;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127151e8) = param_6;
    lVar9 = (long)_DAT_1127151ec;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_7;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127151f0) = param_8;
    puVar3 = puVar1;
    func_0x00010c1c8b80();
    func_0x00010b837400();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = (long)_DAT_1127151f4;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 **)((long)puVar1 + lVar9) = puVar3;
    _objc_release(uVar2);
    func_0x00010c219b20(puVar1);
    func_0x00010c1797c0(*(undefined8 *)((long)puVar1 + lVar9));
    puVar4 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127151f8);
    *(undefined **)((long)puVar1 + (long)_DAT_1127151f8) = puVar4;
    _objc_release(uVar2);
    _objc_initWeak(auStack_90,puVar1);
    puVar5 = PTR_PTR_1126b1728;
    _objc_alloc();
    puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_104e81df8;
    puStack_a0 = &UNK_1108434b0;
    _objc_copyWeak(auStack_98,auStack_90);
    puStack_e0 = puVar4;
    uStack_d8 = 0xc2000000;
    uStack_d0 = 0x104e81e24;
    puStack_c8 = &UNK_1108434b0;
    _objc_copyWeak(auStack_c0,auStack_90);
    func_0x00010c013340();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127151fc);
    *(undefined **)((long)puVar1 + (long)_DAT_1127151fc) = puVar5;
    _objc_release(uVar2);
    lVar9 = (long)_DAT_112715200;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_9;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112715204);
    *(undefined **)((long)puVar1 + (long)_DAT_112715204) = puVar4;
    _objc_release(uVar2);
    uVar6 = *(undefined8 *)((long)puVar1 + lVar9);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar6;
    func_0x00010c266ce0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar2;
    func_0x00010c0e0e60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_e8,auStack_90);
    uVar8 = uVar7;
    func_0x00010c25ff60(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(puVar4);
    _objc_release(uVar2);
    _objc_release(uVar6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c265d20();
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_e8);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_90);
  }
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104e81df8; end: 104e81e97;  */

void FUN_104e81df8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec2980();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e81e98; end: 104e81e9b; -[SCAllContactsViewController loadView] */

void FUN_104e81e98(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beb0d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupUI_112589d08);
  return;
}



/* Entry: 104e81e9c; end: 104e82727; -[SCAllContactsViewController _setupUI] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e81e9c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long lStack_1e0;
  undefined *puStack_1d8;
  undefined1 *puStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c013de0();
  lVar10 = (long)_DAT_112715208;
  uVar9 = *(undefined8 *)(param_1 + lVar10);
  *(undefined **)(param_1 + lVar10) = puVar1;
  _objc_release(uVar9);
  _objc_release(puVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar10));
  _objc_release(puVar1);
  func_0x00010c222380(param_1);
  puVar1 = PTR_PTR_1126af078;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar11 = (long)_DAT_11271520c;
  uVar9 = *(undefined8 *)(param_1 + lVar11);
  *(undefined **)(param_1 + lVar11) = puVar1;
  _objc_release(uVar9);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar11));
  lVar3 = param_1;
  func_0x00010becc3a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010bf5eee0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216240();
  _objc_release(uVar9);
  _objc_release(lVar3);
  func_0x00010be9c660(param_1);
  uVar9 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010bf5eee0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f8460();
  _objc_release(uVar9);
  uVar9 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010bf5eee0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20eaa0();
  _objc_release(uVar9);
  uVar4 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010bf5eee0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar4;
  func_0x00010c1539c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16d0c0();
  _objc_release(uVar9);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010bf5eee0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar4;
  func_0x00010c1539c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16d0a0();
  _objc_release(uVar9);
  _objc_release(uVar4);
  uVar9 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010bf5eee0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18f820();
  _objc_release(uVar9);
  uVar9 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010bf5eee0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(uVar9);
  uVar9 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010c160fc0(uVar9);
  func_0x000104e83dec();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010c153980(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dc9c0();
  _objc_release(uVar4);
  _objc_release(uVar9);
  lVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar3);
  ppuVar5 = &PTR____CFConstantStringClassReference_110db8358;
  func_0x000105173f4c();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = (long)_DAT_112715210;
  uVar9 = *(undefined8 *)(param_1 + lVar12);
  *(undefined ***)(param_1 + lVar12) = ppuVar5;
  _objc_release(uVar9);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar12));
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar12));
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar10));
  lVar13 = (long)_DAT_1127151fc;
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar13));
  lVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar3);
  uVar9 = *(undefined8 *)(param_1 + _DAT_1127151f4);
  uStack_88 = *(undefined8 *)(param_1 + lVar11);
  uStack_80 = *(undefined8 *)(param_1 + lVar12);
  uStack_78 = *(undefined8 *)(param_1 + lVar13);
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067a20(uVar9);
  _objc_release(puVar1);
  uVar4 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar10);
  uStack_e8 = uVar4;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uStack_f0 = uVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar11);
  uStack_f8 = uVar4;
  uStack_e0 = uVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar10);
  uStack_100 = uVar6;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uStack_108 = uVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar11);
  uStack_110 = uVar6;
  uStack_d8 = uVar6;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar10);
  uStack_118 = uVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_120 = uVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar12);
  uStack_128 = uVar4;
  uStack_d0 = uVar4;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar11);
  uStack_130 = uVar6;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uStack_138 = uVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar12);
  uStack_140 = uVar6;
  uStack_c8 = uVar6;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar10);
  uStack_148 = uVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uStack_150 = uVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar12);
  uStack_158 = uVar4;
  uStack_c0 = uVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar10);
  uStack_160 = uVar6;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uStack_168 = uVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar12);
  uStack_170 = uVar6;
  uStack_b8 = uVar6;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar10);
  uStack_178 = uVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_180 = uVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar13);
  uStack_188 = uVar4;
  uStack_b0 = uVar4;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  uStack_1a0 = uVar9;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_198 = lVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lStack_1a8 = lVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar13);
  uStack_1b0 = uVar9;
  uStack_a8 = uVar9;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  uStack_1c0 = uVar6;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_1b8 = lVar12;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar13);
  uStack_a0 = uVar6;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar11;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar13);
  uStack_98 = uVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_90 = uVar9;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puStack_190 = puVar1;
  _objc_release(uVar9);
  _objc_release(lVar3);
  _objc_release(param_1);
  _objc_release(uVar8);
  _objc_release(uVar4);
  _objc_release(lVar10);
  _objc_release(lVar11);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(lVar12);
  _objc_release(lStack_1b8);
  _objc_release(uStack_1c0);
  _objc_release(uStack_1b0);
  _objc_release(lStack_1a8);
  _objc_release(lStack_198);
  _objc_release(uStack_1a0);
  _objc_release(uStack_188);
  _objc_release(uStack_180);
  _objc_release(uStack_178);
  _objc_release(uStack_170);
  _objc_release(uStack_168);
  _objc_release(uStack_160);
  _objc_release(uStack_158);
  _objc_release(uStack_150);
  _objc_release(uStack_148);
  _objc_release(uStack_140);
  _objc_release(uStack_138);
  _objc_release(uStack_130);
  _objc_release(uStack_128);
  _objc_release(uStack_120);
  _objc_release(uStack_118);
  _objc_release(uStack_110);
  _objc_release(uStack_108);
  _objc_release(uStack_100);
  _objc_release(uStack_f8);
  _objc_release(uStack_f0);
  _objc_release(uStack_e8);
  puVar1 = puStack_190;
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puStack_1d8 = puVar1;
  pcStack_1c8 = FUN_104e82728;
  puStack_1f8 = PTR_PTR_1126e49c0;
  puStack_200 = puVar2;
  uStack_1f0 = uVar7;
  uStack_1e8 = uVar6;
  lStack_1e0 = lVar12;
  puStack_1d0 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&puStack_200,PTR_s_viewDidLoad_112684cd8);
  func_0x00010beaf460(puVar2);
  func_0x00010beac1a0(puVar2);
  puVar1 = PTR_PTR_1126b1730;
  _objc_alloc();
  func_0x00010c03c420();
  uVar9 = *(undefined8 *)(puVar2 + _DAT_112715218);
  *(undefined **)(puVar2 + _DAT_112715218) = puVar1;
  _objc_release(uVar9);
  uVar9 = *(undefined8 *)(puVar2 + _DAT_11271520c);
  func_0x00010bf5eee0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f8420();
  _objc_release(uVar9);
  uVar9 = *(undefined8 *)(puVar2 + _DAT_1127151f8);
  puVar1 = PTR_PTR_1126b1560;
  func_0x00010c29cac0(PTR_PTR_1126b1560);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar9);
  _objc_release(puVar1);
  return;
}



/* Entry: 104e82728; end: 104e8281b; -[SCAllContactsViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e82728(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126e49c0;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewDidLoad_112684cd8);
  func_0x00010beaf460(param_1);
  func_0x00010beac1a0(param_1);
  puVar1 = PTR_PTR_1126b1730;
  _objc_alloc();
  func_0x00010c03c420();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112715218);
  *(undefined **)(param_1 + _DAT_112715218) = puVar1;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11271520c);
  func_0x00010bf5eee0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f8420();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127151f8);
  puVar1 = PTR_PTR_1126b1560;
  func_0x00010c29cac0(PTR_PTR_1126b1560);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 104e8281c; end: 104e828fb; -[SCAllContactsViewController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e8281c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126e49c0;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewWillAppear__1126853f0);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c14cde0();
  *(undefined **)(param_1 + _DAT_11271521c) = puVar2;
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c106ec0(param_1);
  func_0x00010c14dc60(puVar1);
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127151f8);
  puVar1 = PTR_PTR_1126b1560;
  func_0x00010c29e700(PTR_PTR_1126b1560);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar3);
  _objc_release(puVar1);
  return;
}



/* Entry: 104e828fc; end: 104e82973; -[SCAllContactsViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e828fc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e49c0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidAppear__112684bd0);
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127151f8);
  puVar1 = PTR_PTR_1126b1560;
  func_0x00010c29c680(PTR_PTR_1126b1560);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 104e82974; end: 104e82a23; -[SCAllContactsViewController viewWillDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e82974(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126e49c0;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewWillDisappear__112685438);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14dc60();
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127151f8);
  puVar1 = PTR_PTR_1126b1560;
  func_0x00010c29e820(PTR_PTR_1126b1560);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 104e82a24; end: 104e82a27; -[SCAllContactsViewController preferredStatusBarStyle] */

undefined8 FUN_104e82a24(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_1 != 0) {
    func_0x00010c279540();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c292b20();
    _objc_release(param_1);
    uVar1 = 3;
    if (lVar2 == 2) {
      uVar1 = 1;
    }
    return uVar1;
  }
  return 3;
}



/* Entry: 104e82a28; end: 104e82ad7; -[SCAllContactsViewController _handleAllContactSyncerStatus:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e82a28(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  if (*(long *)(param_1 + _DAT_1127151f0) == 3) {
    puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_30 = 0xc2000000;
    uStack_28 = 0x104e82adc;
    puStack_20 = &UNK_110842e18;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    uStack_50 = 0x104e82af0;
    puStack_48 = &UNK_110855e40;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    uStack_78 = 0x104e82b0c;
    puStack_70 = &UNK_110842e18;
    lStack_68 = param_1;
    lStack_40 = param_1;
    lStack_18 = param_1;
    func_0x00010c0c0ae0(param_3,param_2,&PTR___NSConcreteGlobalBlock_110855e20,&puStack_38,
                        &puStack_60,&puStack_88);
  }
  return;
}



/* Entry: 104e82ad8; end: 104e82b1f;  */

void FUN_104e82ad8(void)

{
  return;
}



/* Entry: 104e82b20; end: 104e82b73; -[SCAllContactsViewController _statusViewDidTapErrorButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e82b20(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + _DAT_1127151f0) == 3) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112715200);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c265d20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 104e82b74; end: 104e82b77; -[SCAllContactsViewController _statusViewDidTapEmptyButton] */

void FUN_104e82b74(void)

{
  return;
}



/* Entry: 104e82b78; end: 104e82b9b; -[SCAllContactsViewController didSelectDismissalActionWithHeaderItem:] */

void FUN_104e82b78(undefined8 param_1)

{
  func_0x00010be02be0();
                    /* WARNING: Could not recover jumptable at 0x00010be01a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dimissButtonPressed_11255e038);
  return;
}



/* Entry: 104e82b9c; end: 104e82bf7; -[SCAllContactsViewController cardTransitionShouldBeginWithView:touchLocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_104e82b9c(double param_1,double param_2,long param_3,undefined8 param_4,long param_5)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112715210;
  if (param_5 == *(long *)(param_3 + lVar2)) {
    func_0x00010bf4cdc0();
    func_0x00010befda00(*(undefined8 *)(param_3 + lVar2));
    bVar1 = param_2 + param_1 <= 0.0;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 104e82bf8; end: 104e82bfb; -[SCAllContactsViewController cardToExpandTransition] */

void FUN_104e82bf8(void)

{
  return;
}



/* Entry: 104e82bfc; end: 104e82c4f; -[SCAllContactsViewController cardTransitionWillBeginWithView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e82bfc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x00010bf84b00(param_1,param_2,1,0);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14dc60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e82c50; end: 104e82ccb; -[SCAllContactsViewController cardTransitionDidUpdateProgress:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e82c50(double param_1,undefined8 param_2,undefined8 param_3,double param_4,long param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(puVar1);
  if (5.0 < param_1 * param_4) {
                    /* WARNING: Could not recover jumptable at 0x00010c1f7b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_5 + _DAT_112715210),PTR_s_setScrollEnabled__11265b8f0,0);
    return;
  }
  return;
}



/* Entry: 104e82ccc; end: 104e82dc3; -[SCAllContactsViewController cardTransitionEndedWithView:transitionType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e82ccc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if (param_4 == 1) {
    func_0x00010c1f7b20(*(undefined8 *)(param_1 + _DAT_112715210),param_2,1);
    uVar2 = *(undefined8 *)(param_1 + _DAT_1127151f8);
    puVar1 = PTR_PTR_1126b1560;
    func_0x00010c2a5e20(PTR_PTR_1126b1560);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar2,param_2,puVar1);
    _objc_release(puVar1);
    puVar1 = (undefined *)(param_1 + _DAT_1127151e0);
    _objc_loadWeakRetained(puVar1);
    func_0x00010beffd40();
  }
  else {
    if (param_4 != 0) goto LAB_104e82dac;
    func_0x00010c1f7b20(*(undefined8 *)(param_1 + _DAT_112715210),param_2,1);
    puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c106ec0(param_1);
    func_0x00010c14dc60(puVar1,param_2,param_1);
  }
  _objc_release(puVar1);
LAB_104e82dac:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104e82dc4; end: 104e82dcb; -[SCAllContactsViewController shouldDismissViewControllerWhenEnterBackground] */

undefined8 FUN_104e82dc4(void)

{
  return 1;
}



/* Entry: 104e82dcc; end: 104e82dd3; -[SCAllContactsViewController viewControllerPrefersSelfDismiss] */

undefined8 FUN_104e82dcc(void)

{
  return 0;
}



/* Entry: 104e82dd4; end: 104e82ddb; -[SCAllContactsViewController pageViewName] */

undefined8 FUN_104e82dd4(void)

{
  return 0xdb;
}



/* Entry: 104e82ddc; end: 104e82de7; -[SCAllContactsViewController defaultProjectNameV2] */

undefined ** FUN_104e82ddc(void)

{
  return &PTR____CFConstantStringClassReference_110db7938;
}



/* Entry: 104e82de8; end: 104e82deb; -[SCAllContactsViewController addContactsButtonTapped] */

void FUN_104e82de8(void)

{
  return;
}



/* Entry: 104e82dec; end: 104e82ebb; -[SCAllContactsViewController openSystemContactTapped] */

void FUN_104e82dec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b1568;
  func_0x00010bfb95a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c08fa60();
  _objc_release(puVar1);
  puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  if (puVar2 == (undefined *)0x0) {
    func_0x00010c14d6e0(puVar3);
  }
  else {
    puVar2 = PTR_PTR_1126b1568;
    func_0x00010bfb95a0(PTR_PTR_1126b1568);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3460(puVar1,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e9b80(puVar3,param_2,puVar1,PTR____NSDictionary0__struct_11034ab58,0);
    _objc_release(puVar1);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 104e82ebc; end: 104e82f57; -[SCAllContactsViewController _title] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e82ebc(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if (*(long *)(param_1 + _DAT_1127151f0) == 3) {
    func_0x000104e83dd4();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (*(long *)(param_1 + _DAT_1127151f0) != 1) {
      uVar1 = *(ulong *)(param_1 + _DAT_1127151ec);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bfcdc00();
      _objc_release(uVar1);
      if ((uVar2 & 1) != 0) {
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db8378,0);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_104e82f4c;
      }
    }
    func_0x000104e83dbc();
    _objc_retainAutoreleasedReturnValue();
  }
LAB_104e82f4c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e82f58; end: 104e82f6f; -[SCAllContactsViewController _searchFieldVisible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_104e82f58(long param_1)

{
  return *(long *)(param_1 + _DAT_1127151f0) != 3;
}



/* Entry: 104e82f70; end: 104e82fab; -[SCAllContactsViewController _dismissKeyboard] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e82f70(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271520c);
  func_0x00010c153980(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13a0e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e82fac; end: 104e8305b; -[SCAllContactsViewController _dimissButtonPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e82fac(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010bf84b00(param_1,param_2,1,0);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14dc60();
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127151f8);
  puVar1 = PTR_PTR_1126b1560;
  func_0x00010c2a5e20(PTR_PTR_1126b1560);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
  _objc_release(puVar1);
  param_1 = param_1 + _DAT_1127151e0;
  _objc_loadWeakRetained(param_1);
  func_0x00010beffd40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e8305c; end: 104e830cb; -[SCAllContactsViewController _setupDismissKeyboardForScrollView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e8305c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112715210;
  func_0x00010c1b6de0(*(undefined8 *)(param_1 + lVar2),param_2,1);
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
  func_0x00010c178280();
  func_0x00010bef9040(*(undefined8 *)(param_1 + lVar2),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e830cc; end: 104e831e3; -[SCAllContactsViewController _setupQueryResultController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e830cc(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar2 = PTR_PTR_1126b1738;
  _objc_alloc(PTR_PTR_1126b1738);
  func_0x00010c0495c0();
  puVar3 = PTR_DAT_1126a4ea8;
  uVar5 = *(undefined8 *)(param_1 + _DAT_1127151dc);
  _objc_retain(uVar5);
  uVar4 = uVar5;
  func_0x00010010fab4(uVar5,puVar3);
  uVar1 = uVar5;
  if ((int)uVar4 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar5);
  puVar3 = PTR_PTR_1126b1150;
  _objc_alloc();
  func_0x00010c03fd60();
  lVar6 = (long)_DAT_112715214;
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  *(undefined **)(param_1 + lVar6) = puVar3;
  _objc_release(uVar4);
  puVar3 = PTR_PTR_1126b1158;
  _objc_alloc(PTR_PTR_1126b1158);
  func_0x00010c03c440();
  func_0x00010c1e6360(*(undefined8 *)(param_1 + lVar6));
  _objc_release(uVar1);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104e831e4; end: 104e831f3; -[SCAllContactsViewController pageEventObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104e831e4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127151f8);
}



/* Entry: 104e831f4; end: 104e83233; -[SCAllContactsViewController setPageEventObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e831f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127151f8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e83234; end: 104e8332f; -[SCAllContactsViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e83234(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112715204,0);
  _objc_storeStrong(param_1 + _DAT_112715200,0);
  _objc_storeStrong(param_1 + _DAT_1127151fc,0);
  _objc_storeStrong(param_1 + _DAT_1127151ec,0);
  _objc_storeStrong(param_1 + _DAT_1127151f8,0);
  _objc_storeStrong(param_1 + _DAT_112715210,0);
  _objc_storeStrong(param_1 + _DAT_11271520c,0);
  _objc_storeStrong(param_1 + _DAT_112715208,0);
  _objc_storeStrong(param_1 + _DAT_112715218,0);
  _objc_storeStrong(param_1 + _DAT_1127151f4,0);
  _objc_storeStrong(param_1 + _DAT_1127151e4,0);
  _objc_destroyWeak(param_1 + _DAT_1127151e0);
  _objc_storeStrong(param_1 + _DAT_1127151dc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112715214,0);
  return;
}



/* Entry: 104e83330; end: 104e834d3; -[SCAllContactsSnapchatterViewMoreButton initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104e83330(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_1126e49c8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b1740;
    _objc_opt_new();
    lVar4 = (long)_DAT_112715224;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010c16d4a0(*(undefined8 *)((long)puVar1 + lVar4));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    func_0x00010c22a660(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19bc00();
    _objc_release(uVar3);
    _objc_release(puVar2);
    func_0x00010befbb60(puVar1);
    puVar2 = PTR_PTR_1126aea58;
    _objc_alloc_init();
    lVar4 = (long)_DAT_112715228;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010c21ad00(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010c213040(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010c21e900(*(undefined8 *)((long)puVar1 + lVar4));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar4));
    _objc_release(puVar2);
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    func_0x00010c050900();
    func_0x00010bef9040(puVar1);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104e834d4; end: 104e835df; -[SCAllContactsSnapchatterViewMoreButton layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e834d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126e49c8;
  lStack_60 = param_5;
  _objc_msgSendSuper2(&lStack_60,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_5);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + _DAT_112715228));
  lVar3 = (long)_DAT_112715224;
  uVar4 = param_1;
  uVar5 = param_2;
  uVar6 = param_3;
  uVar7 = param_4;
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4,*(undefined8 *)(param_5 + lVar3));
  uVar1 = *(ulong *)(param_5 + lVar3);
  func_0x00010c22a660();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0f5800();
  _CGPathGetBoundingBox();
  _CGRectEqualToRect(param_1,param_2,param_3,param_4,uVar4,uVar5,uVar6,uVar7);
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    func_0x00010bf20c00(param_5);
    func_0x00010bea6e40(param_5);
    func_0x00010bdcea00(param_5);
  }
  return;
}



/* Entry: 104e835e0; end: 104e8375b; -[SCAllContactsSnapchatterViewMoreButton setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e835e0(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b1748;
  _objc_opt_class(PTR_PTR_1126b1748);
  uVar5 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  lVar6 = (long)_DAT_11271522c;
  uVar5 = *(ulong *)(param_1 + lVar6);
  _objc_retain(uVar5);
  _objc_retain(uVar1);
  if (uVar5 == uVar1) {
    _objc_release(uVar1);
    _objc_release(uVar5);
  }
  else {
    if (uVar1 == 0) {
      _objc_release(uVar5);
    }
    else {
      uVar3 = uVar5;
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(uVar5);
      if ((uVar3 & 1) != 0) goto LAB_104e8373c;
    }
    uVar5 = uVar1;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    *(ulong *)(param_1 + lVar6) = uVar5;
    _objc_release(uVar4);
    uVar5 = uVar1;
    func_0x00010c2716a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b720(*(undefined8 *)(param_1 + _DAT_112715228));
    _objc_release(uVar5);
    uVar5 = uVar1;
    func_0x00010bf13d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uVar4 = *(undefined8 *)(param_1 + _DAT_112715224);
    func_0x00010c22a660(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19bc00();
    _objc_release(uVar4);
    _objc_release(uVar5);
    func_0x00010c1cbe20(param_1);
  }
LAB_104e8373c:
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104e8375c; end: 104e83763; +[SCAllContactsSnapchatterViewMoreButton sizeWithViewModel:constrainedToSize:] */

void FUN_104e8375c(void)

{
  return;
}



/* Entry: 104e83764; end: 104e8378f; -[SCAllContactsSnapchatterViewMoreButton setRoundedCorners:] */

void FUN_104e83764(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf20c00();
                    /* WARNING: Could not recover jumptable at 0x00010bea6e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setRoundedCorners_bounds__112587538,param_3)
  ;
  return;
}



/* Entry: 104e83790; end: 104e8386b; -[SCAllContactsSnapchatterViewMoreButton setHighlighted:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e83790(long param_1,undefined8 param_2,int param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  puVar2 = PTR_PTR_1126b1748;
  uVar5 = *(ulong *)(param_1 + _DAT_11271522c);
  _objc_retain(uVar5);
  _objc_opt_class(puVar2);
  uVar3 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar2);
  uVar1 = uVar5;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar5);
  uVar3 = uVar1;
  if (param_3 == 0) {
    func_0x00010bf13d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf14040();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar4 = *(undefined8 *)(param_1 + _DAT_112715224);
  func_0x00010c22a660(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bc00();
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e8386c; end: 104e839f3; -[SCAllContactsSnapchatterViewMoreButton _applyShadow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e8386c(double param_1,double param_2,long param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  
  puVar2 = PTR_PTR_1126b1748;
  uVar4 = *(ulong *)(param_3 + _DAT_11271522c);
  _objc_retain(uVar4);
  _objc_opt_class(puVar2);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  uVar3 = uVar1;
  func_0x00010c22a140(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = (long)_DAT_112715224;
  uVar5 = *(undefined8 *)(param_3 + lVar6);
  func_0x00010c0e1c40();
  dVar7 = param_1;
  func_0x00010c11ef60(uVar3);
  dVar8 = dVar7;
  func_0x00010c0e8ca0(uVar3);
  func_0x000108fe9e04(param_1,param_2,dVar7,dVar8,uVar5);
  puVar2 = PTR__OBJC_CLASS___CALayer_1126b1750;
  _objc_alloc_init(PTR__OBJC_CLASS___CALayer_1126b1750);
  func_0x00010bf20c00(*(undefined8 *)(param_3 + lVar6));
  func_0x00010c19f0e0(param_1 + -10.0,param_2 + 0.0,dVar7 + 20.0,dVar8 + 10.0,puVar2);
  uVar4 = uVar1;
  func_0x00010bf13d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010c16e440(puVar2);
  _objc_release(uVar4);
  uVar5 = *(undefined8 *)(param_3 + lVar6);
  func_0x00010c08c0e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c1c2c00(uVar5);
  _objc_release(uVar5);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 104e839f4; end: 104e83a73; -[SCAllContactsSnapchatterViewMoreButton _setRoundedCorners:bounds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e839f4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf199e0(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc1040();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112715224);
  func_0x00010c22a660(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d9820();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e83a74; end: 104e83aaf; -[SCAllContactsSnapchatterViewMoreButton _onTap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e83a74(long param_1)

{
  param_1 = param_1 + _DAT_112715230;
  _objc_loadWeakRetained(param_1);
  func_0x00010c29de20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e83ab0; end: 104e83abf; -[SCAllContactsSnapchatterViewMoreButton viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104e83ab0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271522c);
}



/* Entry: 104e83ac0; end: 104e83acf; -[SCAllContactsSnapchatterViewMoreButton roundedCorners] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104e83ac0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112715220);
}



/* Entry: 104e83ad0; end: 104e83aef; -[SCAllContactsSnapchatterViewMoreButton delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e83ad0(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112715230);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



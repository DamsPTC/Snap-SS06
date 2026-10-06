/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105080514; end: 105080567; -[SCOperaPlaylistProfileChatMediaLoggingPlugin resolveChatMediaContentWithPage:] */

void FUN_105080514(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c118b40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105080568; end: 1050805cf; -[SCOperaPlaylistProfileChatMediaLoggingPlugin resolveMessageBodyTypeWithPage:] */

undefined8 FUN_105080568(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c118b40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar1;
  func_0x00010c0cb2a0(uVar1);
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1050805d0; end: 10508094b; -[SCProfileChatMediaOperaDataSource initWithProfileChatMediaDataSource:initialChatMedia:userSession:conversationServices:storiesCachedSummaryInfoProvider:circumstanceEngine:contentDelivery:chatMediaFetcher:musicContentRestrictionServices:] */

undefined8 *
FUN_1050805d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
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
  puStack_68 = PTR_PTR_1126e5dd8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[9];
    puVar1[9] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[10];
    puVar1[10] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_10;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    puVar3 = PTR_PTR_1126b2d18;
    _objc_alloc();
    uVar2 = param_3;
    func_0x00010bfe7580(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01c860();
    uVar5 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar5);
    _objc_release(uVar6);
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[5];
    puVar1[5] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[6];
    puVar1[6] = param_4;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[7];
    puVar1[7] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b4620;
    _objc_alloc();
    uVar2 = puVar1[1];
    func_0x00010c0c4b00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c029340();
    uVar6 = puVar1[0x10];
    puVar1[0x10] = puVar3;
    _objc_release(uVar6);
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_7;
    _objc_release(uVar2);
    func_0x00010befc780(puVar1[1]);
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



/* Entry: 10508094c; end: 105080953; -[SCProfileChatMediaOperaDataSource groupdataModelForId:] */

void FUN_10508094c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_objectForKeyedSubscript__112615a50);
  return;
}



/* Entry: 105080954; end: 105080a1f; -[SCProfileChatMediaOperaDataSource dataModelFor:] */

void FUN_105080954(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar5,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010c0c4680();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar4 = uVar2;
  func_0x00010c0e00e0(uVar2,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 105080a20; end: 105080a73; -[SCProfileChatMediaOperaDataSource dataModelForGroup:] */

void FUN_105080a20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105080a74; end: 105080bb3; -[SCProfileChatMediaOperaDataSource resolvePlaylistItemGroupWithMutator:] */

void FUN_105080a74(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  lVar6 = *(long *)(param_1 + 0x38);
  uVar1 = param_3;
  func_0x00010bfce400(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (lVar6 != 0) {
    lVar3 = lVar6;
    func_0x00010c0c5240(lVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf51e00();
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_105080bb4;
    puStack_58 = &UNK_110864d68;
    lStack_50 = param_1;
    _objc_retain(lVar6);
    lVar5 = lVar4;
    lStack_48 = lVar6;
    func_0x000100504554(lVar4,&puStack_70);
    _objc_release(lVar4);
    _objc_release(lVar3);
    func_0x00010c13a9c0(param_3);
    func_0x00010be12aa0(param_1);
    _objc_release(lVar5);
    _objc_release(lStack_48);
  }
  _objc_release(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105080bb4; end: 105080c27;  */

void FUN_105080bb4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40);
  _objc_retain(param_2);
  func_0x00010c1d0640(uVar2);
  puVar1 = PTR_PTR_1126b23d8;
  _objc_alloc(PTR_PTR_1126b23d8);
  func_0x00010c0558c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105080c28; end: 105080d0b; -[SCProfileChatMediaOperaDataSource _fetchMoreChatMediaDataModelsWithCurrentDataModel:] */

void FUN_105080c28(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf36b40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar5;
  func_0x00010bfecde0();
  _objc_release(param_3);
  lVar3 = lVar5;
  func_0x00010bf529e0();
  if (lVar2 == lVar3 + -1) {
    iVar1 = (int)*(undefined8 *)(param_1 + 8);
    func_0x00010bfddca0();
    if (iVar1 != 0) {
      uVar4 = 0x15;
      func_0x0001000819a8(0x15,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010007380c();
      _objc_release(uVar4);
    }
  }
  _objc_release(lVar5);
  return;
}



/* Entry: 105080d0c; end: 105080d17;  */

void FUN_105080d0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa8c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),
             PTR_s_fetchMoreSavedInChatMediaDataMod_1125c7cb0);
  return;
}



/* Entry: 105080d18; end: 105081933; -[SCProfileChatMediaOperaDataSource pageDataForDataModel:completion:] */

void FUN_105080d18(long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  undefined **ppuVar25;
  undefined8 uVar26;
  double dVar27;
  
  lVar23 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126b4628;
  _objc_opt_class(PTR_PTR_1126b4628);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar24 = *(ulong *)(param_1 + 0x40);
  uVar3 = uVar1;
  func_0x00010c0c5180(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  if (uVar24 != 0) {
    uVar3 = uVar24;
    func_0x00010c073ba0();
    if ((uVar3 & 1) == 0) {
      uVar26 = *(undefined8 *)(param_1 + 8);
      uVar6 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c2923e0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfc6700();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
    }
    else {
      uVar26 = 0;
    }
    puVar2 = PTR_PTR_1126b4630;
    uVar3 = uVar24;
    FUN_10508d438();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f26a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(uVar3);
    puVar2 = puVar4;
    func_0x00010c118b40(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010c0d3c80();
    _objc_release(puVar2);
    func_0x00010c1d0640(puVar5);
    func_0x00010c1d0640(puVar5);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c2923e0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar24;
    FUN_10508d21c(uVar24,uVar6);
    _objc_release(uVar6);
    puVar7 = PTR_PTR_1126b2dd8;
    _objc_alloc(PTR_PTR_1126b2dd8);
    ppuVar25 = &PTR____CFConstantStringClassReference_110dbdd58;
    if ((int)uVar3 != 0) {
      ppuVar25 = &PTR____CFConstantStringClassReference_110dbdd38;
    }
    func_0x00010bcbeaa8(ppuVar25,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0cb2a0(uVar24);
    func_0x00010c056280(puVar7);
    func_0x00010befa120(puVar2);
    _objc_release(puVar7);
    _objc_release(ppuVar25);
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c2923e0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar24;
    FUN_10508d370(uVar24,uVar6);
    _objc_release(uVar6);
    if ((int)uVar3 != 0) {
      puVar7 = PTR_PTR_1126b2dd8;
      _objc_alloc(PTR_PTR_1126b2dd8);
      ppuVar25 = &PTR____CFConstantStringClassReference_110dc40d8;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc40d8,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0cb2a0(uVar24);
      func_0x00010c056280(puVar7);
      func_0x00010befa120(puVar2);
      _objc_release(puVar7);
      _objc_release(ppuVar25);
    }
    puVar7 = PTR_PTR_1126b2dd8;
    _objc_alloc(PTR_PTR_1126b2dd8);
    ppuVar25 = &PTR____CFConstantStringClassReference_110dc40f8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc40f8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c056260(puVar7);
    func_0x00010befa120(puVar2);
    _objc_release(puVar7);
    _objc_release(ppuVar25);
    func_0x00010bf529e0();
    uVar3 = uVar24;
    func_0x00010c0cb2a0();
    uVar8 = uVar24;
    if (uVar3 == 0x24) {
      func_0x00010c0c5d60();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c15df40();
      _objc_retainAutoreleasedReturnValue();
    }
    lVar9 = *(long *)(param_1 + 8);
    func_0x00010bf50740();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010c294420();
    _objc_retainAutoreleasedReturnValue();
    if (lVar9 == 0) {
      _objc_retain();
      lVar11 = lVar10;
    }
    else {
      lVar11 = lVar9;
      func_0x00010901d7c4();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c1d0640(puVar5);
    dVar27 = 14.0;
    puVar7 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar5);
    _objc_release(puVar7);
    puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar5);
    _objc_release(puVar7);
    func_0x00010c1d0640(puVar5);
    func_0x00010c1d0640(puVar5);
    uVar3 = uVar24;
    func_0x00010c0cb9a0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f380();
    _objc_release(puVar7);
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (86400.0 <= dVar27) {
      ppuVar25 = &PTR____CFConstantStringClassReference_110dc4238;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc4238,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb5de0(puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar5);
      _objc_release(puVar7);
    }
    else {
      ppuVar25 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010bfb5a60(0x4024000000000000,PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar5);
    }
    _objc_release(ppuVar25);
    lVar12 = *(long *)(param_1 + 0x70);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar9;
    func_0x00010c2923e0(lVar9);
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar12;
    func_0x00010c258d00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar13);
    _objc_release(lVar12);
    func_0x00010bfddf20(lVar14);
    if (lVar14 != 0) {
      func_0x00010bfddf20(lVar14);
    }
    func_0x00010c1d0640(puVar5);
    func_0x00010c1d0640(puVar5);
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR_PTR_1126b19f8;
    func_0x00010c1164a0();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar18;
    func_0x00010c0d3c80();
    _objc_release(puVar18);
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar7);
    if (lVar9 != 0) {
      func_0x00010c1d0640(puVar19);
    }
    func_0x00010c1d0640(puVar5);
    puVar7 = puVar19;
    func_0x00010bf51e00(puVar19);
    func_0x00010c1d0640(puVar5);
    _objc_release(puVar7);
    func_0x00010c1d0640(puVar5);
    puVar7 = puVar2;
    func_0x00010bf51e00(puVar2);
    func_0x00010c1d0640(puVar5);
    _objc_release(puVar7);
    func_0x00010c1d0640(puVar5);
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar5);
    _objc_release(puVar7);
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar5);
    _objc_release(puVar7);
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar5);
    _objc_release(puVar7);
    func_0x00010c1d0640(puVar5);
    uVar20 = uVar1;
    func_0x00010c0c6c20();
    if ((0x15 < uVar20) || ((1L << (uVar20 & 0x3f) & 0x363630U) == 0)) {
      func_0x00010c1d0640(puVar5);
    }
    ppuVar25 = &PTR____CFConstantStringClassReference_110dc4258;
    uVar20 = uVar1;
    func_0x00010c0c5180(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110dc4258);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar5);
    _objc_release(ppuVar25);
    _objc_release(uVar20);
    func_0x00010c1d0640(puVar5);
    func_0x00010c1d0640(puVar5);
    puVar7 = PTR_PTR_1126b23e0;
    _objc_alloc(PTR_PTR_1126b23e0);
    func_0x00010c033240();
    (**(code **)(param_4 + 0x10))(param_4,puVar7);
    _objc_release(puVar7);
    uVar21 = *(ulong *)(param_1 + 0x58);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar1;
    func_0x00010c0c5180(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar22 = uVar21;
    func_0x00010bf4b4c0();
    _objc_release(uVar20);
    _objc_release(uVar21);
    if ((uVar22 & 1) == 0) {
      uVar6 = *(undefined8 *)(param_1 + 0x18);
      _objc_retain(uVar24);
      _objc_retain(uVar1);
      func_0x00010c0f7fc0(uVar6);
      _objc_release(uVar1);
      _objc_release(uVar24);
    }
    else {
      uVar22 = *(ulong *)(param_1 + 0x60);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar20 = uVar22;
      func_0x00010c077820();
      _objc_release(uVar22);
      if ((uVar20 & 1) == 0) {
        func_0x00010bed0e00(param_1);
      }
    }
    _objc_release(puVar19);
    _objc_release(lVar14);
    _objc_release(uVar3);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(uVar8);
    _objc_release(puVar2);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(uVar26);
  }
  _objc_release(uVar24);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar23) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010be05d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_3 + 0x20),PTR_s__downloadChatMediaDataModel_chat_11255f0f0,
               *(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x30));
    return;
  }
  return;
}



/* Entry: 105081934; end: 105081943;  */

void FUN_105081934(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be05d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__downloadChatMediaDataModel_chat_11255f0f0,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 105081944; end: 105081947; -[SCProfileChatMediaOperaDataSource prepareMediaForItem:startWaitingForDownloadCallback:completion:] */

void FUN_105081944(void)

{
  return;
}



/* Entry: 105081948; end: 10508194b; -[SCProfileChatMediaOperaDataSource removeMediaForItem:] */

void FUN_105081948(void)

{
  return;
}



/* Entry: 10508194c; end: 105081957; -[SCProfileChatMediaOperaDataSource canResolvePlaylistItemGroupDataModel:] */

bool FUN_10508194c(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 != 0;
}



/* Entry: 105081958; end: 105081a0f; -[SCProfileChatMediaOperaDataSource playlistItemGroupModelForDataModel:] */

void FUN_105081958(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c280560(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar3,param_2,param_3,uVar1);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b23e8;
  _objc_alloc(PTR_PTR_1126b23e8);
  uVar1 = param_3;
  func_0x00010c280560(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c01ade0(puVar2,param_2,uVar1,&PTR____CFConstantStringClassReference_110dc41d8,1,1,1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105081a10; end: 105081a17; -[SCProfileChatMediaOperaDataSource needToPrepareMediaBeforeDisplay] */

undefined8 FUN_105081a10(void)

{
  return 0;
}



/* Entry: 105081a18; end: 105081cdb; -[SCProfileChatMediaOperaDataSource _downloadChatMediaDataModel:chatMediaContent:] */

void FUN_105081a18(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar7 = *(ulong *)(param_1 + 0x28);
  uVar1 = param_4;
  func_0x00010c0c5180(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900();
  _objc_release(uVar1);
  if ((uVar7 & 1) == 0) {
    uVar8 = *(undefined8 *)(param_1 + 0x28);
    uVar1 = param_4;
    func_0x00010c0c5180(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar8);
    _objc_release(uVar1);
    _objc_initWeak(auStack_80,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010bf50600();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010bf374e0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_3;
    func_0x00010bf50280(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c0cb5a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0cb2a0();
    uVar4 = param_4;
    func_0x00010c0c5180(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_3;
    func_0x00010bf026e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_4;
    func_0x00010bf4cce0();
    _objc_retainAutoreleasedReturnValue();
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_105081cdc;
    puStack_98 = &UNK_110841fb0;
    _objc_copyWeak(auStack_88,auStack_80);
    _objc_retain(param_4);
    uStack_90 = param_4;
    _objc_copyWeak(auStack_b8,auStack_80);
    _objc_retain(param_4);
    func_0x00010c15c160(uVar1);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar8);
    _objc_release(uVar1);
    _objc_release(uVar2);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_b8);
    _objc_release(uStack_90);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105081cdc; end: 105081d43;  */

void FUN_105081cdc(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be009c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105081d44; end: 105081ddf; -[SCProfileChatMediaOperaDataSource _didSucceedFetchChatMediaContent:] */

void FUN_105081d44(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105081de0;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  func_0x00010bed0e00(param_1,param_2,param_3);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105081de0; end: 105081e1f;  */

void FUN_105081de0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  func_0x00010c0c5180(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d360(uVar2,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105081e20; end: 105081eaf; -[SCProfileChatMediaOperaDataSource _didFailFetchChatMediaContent:] */

void FUN_105081e20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105081eb0;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105081eb0; end: 105081eef;  */

void FUN_105081eb0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  func_0x00010c0c5180(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d360(uVar2,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105081ef0; end: 105081fef; -[SCProfileChatMediaOperaDataSource _unarchiveChatMediaContent:] */

void FUN_105081ef0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c104be0(uVar1);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105081ff0; end: 1050820a3;  */

void FUN_105081ff0(long param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_4);
  if (param_2 != 0) {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_1050820a4;
    puStack_48 = &UNK_110841fb0;
    _objc_copyWeak(auStack_38,param_1 + 0x28);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar1);
    uStack_40 = uVar1;
    func_0x000100162d98("APPSTORE",&puStack_60);
    _objc_release(uStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 1050820a4; end: 1050820f7;  */

void FUN_1050820a4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0c5180(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bedd660(lVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1050820f8; end: 10508213f; -[SCProfileChatMediaOperaDataSource _updatePlaylistItemControllerForMediaId:] */

void FUN_1050820f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x78;
  _objc_loadWeakRetained(param_1);
  func_0x00010c101400();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105082140; end: 1050821f7; -[SCProfileChatMediaOperaDataSource didUpdateWithAnnouncerIdentifier:] */

void FUN_105082140(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_PTR_1126b4180;
  _objc_retain(param_3);
  func_0x00010bf04780(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0();
  _objc_release(param_3);
  _objc_release(puVar1);
  if ((int)uVar2 != 0) {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_1050821f8;
    puStack_40 = &UNK_110842e18;
    uStack_38 = param_1;
    func_0x0001000d76cc("APPSTORE",&puStack_58);
  }
  return;
}



/* Entry: 1050821f8; end: 10508256b;  */

void FUN_1050821f8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined *puStack_288;
  undefined8 uStack_280;
  code *pcStack_278;
  undefined *puStack_270;
  undefined8 uStack_268;
  long lStack_260;
  long lStack_258;
  undefined1 *puStack_250;
  code *pcStack_248;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long *plStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  long *plStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  code *pcStack_190;
  undefined *puStack_188;
  long lStack_180;
  undefined8 uStack_178;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010bf36b40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x30);
  lVar7 = lVar1;
  func_0x00010b813c80(lVar2,lVar1,&PTR___NSConcreteGlobalBlock_110d622f0);
  _objc_release(&PTR___NSConcreteGlobalBlock_110d622f0);
  lVar10 = lVar1;
  lStack_228 = lVar1;
  func_0x00010bf51e00();
  uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  *(long *)(*(long *)(param_1 + 0x20) + 0x30) = lVar10;
  _objc_release(uVar8);
  lVar10 = lVar2;
  func_0x00010c066900();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar10;
  func_0x00010bf529e0();
  if (lVar3 == 0) {
    lVar3 = lVar2;
    func_0x00010bf6c000();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf529e0();
    _objc_release(lVar3);
    _objc_release(lVar10);
    if (lVar4 == 0) goto LAB_105082350;
  }
  else {
    _objc_release(lVar10);
  }
  lVar10 = *(long *)(param_1 + 0x20) + 0x78;
  _objc_loadWeakRetained(lVar10);
  lVar1 = lStack_228;
  puStack_1a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_198 = 0xc2000000;
  pcStack_190 = FUN_10508256c;
  puStack_188 = &UNK_110864e28;
  _objc_retain(lStack_228);
  uStack_178 = *(undefined8 *)(param_1 + 0x20);
  lStack_180 = lVar1;
  func_0x00010c2889a0(lVar10);
  _objc_release(lVar10);
  _objc_release(lStack_180);
LAB_105082350:
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  lStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1c8 = 0;
  plStack_1d0 = (long *)0x0;
  lStack_240 = lVar2;
  func_0x00010c286820();
  _objc_retainAutoreleasedReturnValue();
  lStack_238 = lVar2;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lStack_230 = *plStack_1d0;
    do {
      lVar10 = 0;
      do {
        if (*plStack_1d0 != lStack_230) {
          _objc_enumerationMutation(lStack_238);
        }
        func_0x00010c0d8ae0(*(undefined8 *)(lStack_1d8 + lVar10 * 8));
        lVar3 = lStack_228;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
        lVar4 = lVar3;
        func_0x00010c280560();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(uVar8);
        _objc_release(lVar4);
        uStack_1f8 = 0;
        uStack_200 = 0;
        uStack_1e8 = 0;
        uStack_1f0 = 0;
        uStack_218 = 0;
        uStack_220 = 0;
        uStack_208 = 0;
        plStack_210 = (long *)0x0;
        lVar4 = lVar3;
        func_0x00010c0c5240();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010bf51e00();
        _objc_release(lVar4);
        lVar4 = lVar5;
        func_0x00010bf52a60();
        if (lVar4 != 0) {
          lVar1 = *plStack_210;
          do {
            lVar9 = 0;
            do {
              if (*plStack_210 != lVar1) {
                _objc_enumerationMutation(lVar5);
              }
              func_0x00010c1d0640(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40));
              lVar6 = *(long *)(param_1 + 0x20) + 0x78;
              _objc_loadWeakRetained(lVar6);
              func_0x00010c101400();
              _objc_release(lVar6);
              lVar9 = lVar9 + 1;
            } while (lVar4 != lVar9);
            lVar4 = lVar5;
            func_0x00010bf52a60();
          } while (lVar4 != 0);
        }
        _objc_release(lVar5);
        _objc_release(lVar3);
        lVar10 = lVar10 + 1;
      } while (lVar10 != lVar2);
      lVar2 = lStack_238;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lStack_238);
  _objc_release(lStack_240);
  lVar10 = lStack_228;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_248 = FUN_10508256c;
  puStack_288 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_280 = 0xc2000000;
  pcStack_278 = FUN_1050825f8;
  puStack_270 = &UNK_110864df8;
  uVar8 = *(undefined8 *)(lVar10 + 0x20);
  uStack_268 = *(undefined8 *)(lVar10 + 0x28);
  lStack_260 = param_1;
  lStack_258 = lVar1;
  puStack_250 = &stack0xfffffffffffffff0;
  _objc_retain(lVar7);
  func_0x000100504554(uVar8,&puStack_288);
  func_0x00010c130e60(lVar7);
  _objc_release(lVar7);
  _objc_release(uVar8);
  return;
}



/* Entry: 10508256c; end: 1050825f7;  */

void FUN_10508256c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1050825f8;
  puStack_30 = &UNK_110864df8;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_28 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_2);
  func_0x000100504554(uVar1,&puStack_48);
  func_0x00010c130e60(param_2);
  _objc_release(param_2);
  _objc_release(uVar1);
  return;
}



/* Entry: 1050825f8; end: 105082603;  */

void FUN_1050825f8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1014f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_playlistItemGroupModelForDataMod_11261df58,
             param_2);
  return;
}



/* Entry: 105082604; end: 10508261b; -[SCProfileChatMediaOperaDataSource playlistItemController] */

void FUN_105082604(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10508261c; end: 105082627; -[SCProfileChatMediaOperaDataSource setPlaylistItemController:] */

void FUN_10508261c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x78,param_3);
  return;
}



/* Entry: 105082628; end: 10508262f; -[SCProfileChatMediaOperaDataSource chatMediaOperaMediaManager] */

undefined8 FUN_105082628(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 105082630; end: 105082703; -[SCProfileChatMediaOperaDataSource .cxx_destruct] */

void FUN_105082630(long param_1)

{
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_destroyWeak(param_1 + 0x78);
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



/* Entry: 105082704; end: 1050827f7; -[SCProfileChatMediaOperaMediaManager initWithMediaDownloader:profileChatMediaOperaDataSource:contentDelivery:chatMediaFetcher:] */

undefined1 *
FUN_105082704(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126e5de0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1050827f8; end: 105082a03; -[SCProfileChatMediaOperaMediaManager imageForKey:completion:] */

void FUN_1050827f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar5 = param_3;
  func_0x00010bfda7c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dc4258);
  if ((int)uVar5 == 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0xc2000000;
    pcStack_c0 = FUN_105082ab0;
    puStack_b8 = &UNK_110864ec0;
    _objc_retain(param_4);
    uStack_a8 = param_4;
    _objc_retain(param_3);
    uStack_b0 = param_3;
    func_0x00010bfe78c0(uVar5,param_2,param_3,0xc,&puStack_d0);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uStack_b0);
    uVar5 = uStack_a8;
  }
  else {
    _objc_retain(param_3);
    ppuVar2 = &PTR____CFConstantStringClassReference_110dc4258;
    func_0x00010c08fa60(&PTR____CFConstantStringClassReference_110dc4258);
    uVar5 = param_3;
    func_0x00010c260c00(param_3,param_2,ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    lVar3 = param_1 + 0x10;
    _objc_loadWeakRetained();
    lVar4 = lVar3;
    func_0x00010bfcf700();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    if (lVar4 != 0) {
      uVar6 = *(undefined8 *)(param_1 + 8);
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0xc2000000;
      pcStack_68 = FUN_105082a04;
      puStack_60 = &UNK_110864e60;
      _objc_retain(param_4);
      puStack_a0 = puVar1;
      uStack_98 = 0xc2000000;
      pcStack_90 = FUN_105082aac;
      puStack_88 = &UNK_110864e90;
      uStack_58 = param_4;
      _objc_retain(lVar4);
      lStack_80 = lVar4;
      func_0x00010c09b780(uVar6,param_2,lVar4,&puStack_78,&puStack_a0,
                          PTR___dispatch_main_q_11034be20);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(lStack_80);
      _objc_release(uStack_58);
    }
    _objc_release(lVar4);
  }
  _objc_release(uVar5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105082a04; end: 105082aab;  */

void FUN_105082a04(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  _objc_opt_class(PTR__OBJC_CLASS___UIImage_1126aea68);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  if ((param_3 != 0) && ((uVar2 & 1) != 0)) {
    lVar4 = *(long *)(param_1 + 0x20);
    _objc_retain(param_3);
    _objc_opt_class(puVar1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    uVar2 = param_3;
    if ((uVar3 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(param_3);
    (**(code **)(lVar4 + 0x10))(lVar4,uVar2);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105082aac; end: 105082aaf;  */

void FUN_105082aac(void)

{
  return;
}



/* Entry: 105082ab0; end: 105082b77;  */

void FUN_105082ab0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105082b78;
  puStack_58 = &UNK_110845188;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = param_2;
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar2;
  _objc_retain(uVar1);
  uStack_48 = uVar1;
  uStack_38 = param_3;
  _objc_retain(param_2);
  func_0x0001000d76cc("APPSTORE",&puStack_70);
  _objc_release(uStack_48);
  _objc_release(uStack_40);
  _objc_release(uStack_50);
  _objc_release(param_2);
  return;
}



/* Entry: 105082b78; end: 105082b8f;  */

void FUN_105082b78(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105082b88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))();
    return;
  }
  return;
}



/* Entry: 105082b90; end: 105082b97; -[SCProfileChatMediaOperaMediaManager videoAssetForKey:] */

undefined8 FUN_105082b90(void)

{
  return 0;
}



/* Entry: 105082b98; end: 105082be7; -[SCProfileChatMediaOperaMediaManager videoAssetFutureForKey:] */

void FUN_105082b98(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x00010c2991c0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126ae558;
  func_0x00010bfe9ca0(PTR_PTR_1126ae558,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105082be8; end: 105082beb; -[SCProfileChatMediaOperaMediaManager resetVideoAssetForKey:] */

void FUN_105082be8(void)

{
  return;
}



/* Entry: 105082bec; end: 105082d8b; -[SCProfileChatMediaOperaMediaManager gifDataForKey:completionQueue:completion:] */

void FUN_105082bec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x105082ce0;
  puStack_48 = &UNK_110864ef0;
  uStack_40 = param_4;
  uStack_38 = param_5;
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c13e4e0(uVar1,param_2,param_3,3,0xc,&puStack_60);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uStack_40);
  _objc_release(uStack_38);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 105082d8c; end: 105082d9b;  */

void FUN_105082d8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105082d98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 105082d9c; end: 105082ddf; -[SCProfileChatMediaOperaMediaManager .cxx_destruct] */

void FUN_105082d9c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105082de0; end: 105082eb7; -[SCFriendProfileChatMediaSectionDataProvider initWithProfileChatMediaDataSource:friendUnifiedProfileDataSource:grapheneServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105082de0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126e5de8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithDataSource_profileType_g_1125dfe00,param_3,4,param_5)
  ;
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_11271b2ec;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    func_0x00010c244280();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x000100bf119c();
    *(char *)((long)puVar1 + (long)_DAT_11271b2f0) = (char)uVar2;
    _objc_release(uVar3);
    func_0x00010befc780(*(undefined8 *)((long)puVar1 + lVar4));
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 105082eb8; end: 105082ec7; -[SCFriendProfileChatMediaSectionDataProvider shouldShowSectionWhenNoSavedInChatCards] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_105082eb8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11271b2f0);
}



/* Entry: 105082ec8; end: 105082f7f; -[SCFriendProfileChatMediaSectionDataProvider didUpdateWithAnnouncerIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105082ec8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_s_didUpdateWithAnnouncerIdentifier_1125bd418;
  puStack_38 = PTR_PTR_1126e5de8;
  lStack_40 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_40,puVar1,param_3);
  uVar2 = param_3;
  func_0x00010c0720c0();
  _objc_release(param_3);
  if ((int)uVar2 != 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11271b2ec);
    func_0x00010c244280(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x000100bf119c();
    _objc_release(uVar2);
    func_0x00010bedfe20(param_1);
  }
  return;
}



/* Entry: 105082f80; end: 10508300b; -[SCFriendProfileChatMediaSectionDataProvider _updateShouldShowSectionWhenNoSavedInChatCards:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105082f80(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + _DAT_11271b2f0) != param_3) {
    *(char *)(param_1 + _DAT_11271b2f0) = (char)param_3;
    func_0x00010c2890a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f7fc0();
    _objc_release(param_1);
  }
  return;
}



/* Entry: 10508300c; end: 105083017;  */

void FUN_10508300c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1f9230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setSectionDataModel__11265beb0,0);
  return;
}



/* Entry: 105083018; end: 10508302b; -[SCFriendProfileChatMediaSectionDataProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105083018(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271b2ec,0);
  return;
}



/* Entry: 10508302c; end: 105083353; -[SCProfileChatMediaCardCollectionViewCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10508302c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126e5df0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c160fc0(puVar1);
    func_0x00010c201160(puVar1);
    func_0x00010c17d4c0(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440();
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    func_0x00010c050900();
    lVar6 = (long)_DAT_11271b2f8;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar5);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar6));
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9040();
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
    _objc_alloc();
    func_0x00010c050900();
    lVar6 = (long)_DAT_11271b2fc;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar5);
    func_0x00010c1c8340(0x3fa99999a0000000,*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar6));
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9040();
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
    _objc_alloc();
    func_0x00010c050900();
    lVar6 = (long)_DAT_11271b300;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar5);
    func_0x00010c1c8340(0x3fd0000000000000,*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar6));
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9040();
    _objc_release(puVar3);
    puVar2 = PTR_PTR_1126b4638;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c026760(0);
    lVar6 = (long)_DAT_11271b304;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar5);
    _objc_release(puVar4);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010c1d0840(puVar1);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271b308);
    *(undefined **)((long)puVar1 + (long)_DAT_11271b308) = puVar2;
    _objc_release(uVar5);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271b30c);
    *(undefined **)((long)puVar1 + (long)_DAT_11271b30c) = puVar2;
    _objc_release(uVar5);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271b310);
    *(undefined **)((long)puVar1 + (long)_DAT_11271b310) = puVar2;
    _objc_release(uVar5);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105083354; end: 1050833ff;  */

void FUN_105083354(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b0648;
  _objc_alloc_init(PTR_PTR_1126b0648);
  puVar2 = PTR_PTR_1126ae790;
  func_0x00010bfcd0e0(PTR_PTR_1126ae790,param_2,0x19,0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae6b8;
  func_0x00010bfe8340(PTR_PTR_1126ae6b8,param_2,puVar2,&PTR___NSConcreteGlobalBlock_110864f88);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1aa620(puVar1,param_2,puVar3);
  _objc_release(puVar3);
  func_0x00010c182220(puVar1,param_2,2);
  func_0x00010c219b60(puVar1,param_2,0);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105083400; end: 105083443;  */

void FUN_105083400(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010b87f3b0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c2a4b60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105083444; end: 1050835b3;  */

void FUN_105083444(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc(PTR__OBJC_CLASS___UILabel_1126aec30);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x402a000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe7a0(0,0x3ff0000000000000);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe840(0x4000000000000000);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar3 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe740();
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe800(0x3f19999a);
  _objc_release(puVar2);
  func_0x00010c219b60(puVar1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1050835b4; end: 105083617;  */

void FUN_1050835b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b1a08;
  _objc_opt_new(PTR_PTR_1126b1a08);
  func_0x00010c182220();
  func_0x00010c219b60(puVar1,param_2,0);
  func_0x00010c21e900(puVar1,param_2,0);
  func_0x00010c1af000(puVar1,param_2,0);
  func_0x00010c1d5da0(puVar1,param_2,3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105083618; end: 1050836a7; -[SCProfileChatMediaCardCollectionViewCell layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105083618(long param_1)

{
  char cVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e5df0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_layoutSubviews_112600e60);
  cVar1 = *(char *)(param_1 + _DAT_11271b314);
  func_0x00010bf20c00(param_1);
  if (cVar1 == '\x01') {
    _CGRectInset();
  }
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_11271b304));
  func_0x00010bf20c00(param_1);
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_11271b318));
  return;
}



/* Entry: 1050836a8; end: 1050836b7; -[SCProfileChatMediaCardCollectionViewCell setMediaDownloader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050836a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1c4550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11271b304),PTR_s_setMediaDownloader__11264eb78);
  return;
}



/* Entry: 1050836b8; end: 10508373f; -[SCProfileChatMediaCardCollectionViewCell setImageDownloader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050836b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_11271b31c;
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = param_3;
  _objc_release(uVar2);
  lVar3 = (long)_DAT_11271b310;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar3);
  func_0x00010c06f880();
  if (iVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1aa200();
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105083740; end: 10508376f; -[SCProfileChatMediaCardCollectionViewCell thumbnailImageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105083740(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271b304);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105083770; end: 105083823; -[SCProfileChatMediaCardCollectionViewCell _didTap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105083770(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  puVar2 = PTR_PTR_1126b4610;
  uVar4 = *(undefined8 *)(param_1 + _DAT_11271b320);
  uVar5 = *(ulong *)(param_1 + _DAT_11271b324);
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
  func_0x00010c268c60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd0140(uVar4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 105083824; end: 105083893; -[SCProfileChatMediaCardCollectionViewCell _didTouch:] */

void FUN_105083824(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c252440();
  if (lVar1 == 1) {
    func_0x00010bebbf00(param_1);
  }
  else {
    lVar1 = param_3;
    func_0x00010c252440();
    if ((lVar1 == 3) || (lVar1 = param_3, func_0x00010c252440(), lVar1 == 4)) {
      func_0x00010be87da0(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105083894; end: 105083973; -[SCProfileChatMediaCardCollectionViewCell _didLongPress:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105083894(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  func_0x00010c252440();
  if (param_3 == 1) {
    func_0x00010be87da0(param_1);
    puVar2 = PTR_PTR_1126b4610;
    uVar4 = *(undefined8 *)(param_1 + _DAT_11271b320);
    uVar5 = *(ulong *)(param_1 + _DAT_11271b324);
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
    func_0x00010c0b4d20(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd0140(uVar4);
    _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 105083974; end: 1050839d7; -[SCProfileChatMediaCardCollectionViewCell _shrinkWithAnimation] */

void FUN_105083974(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1050839d8;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x00010bf03400(0x3fc3333333333333,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_38);
  return;
}



/* Entry: 1050839d8; end: 105083a2b;  */

void FUN_1050839d8(long param_1,undefined8 param_2)

{
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
  
  _CGAffineTransformMakeScale(&uStack_50,0x3feccccccccccccd,0x3feccccccccccccd);
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  uStack_58 = uStack_28;
  uStack_60 = uStack_30;
  func_0x00010c219960(*(undefined8 *)(param_1 + 0x20),param_2,&uStack_80);
  return;
}



/* Entry: 105083a2c; end: 105083acb; -[SCProfileChatMediaCardCollectionViewCell _recoverWithAnimation] */

void FUN_105083a2c(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  uStack_28 = 0x105083a90;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x00010bf03400(0x3fc3333333333333,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_38);
  return;
}



/* Entry: 105083acc; end: 10508445f; -[SCProfileChatMediaCardCollectionViewCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105083acc(long param_1,undefined8 param_2,ulong param_3)

{
  char cVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  ulong uVar22;
  long lVar23;
  int iVar24;
  
  lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar23 = (long)_DAT_11271b324;
  uVar22 = *(ulong *)(param_1 + lVar23);
  _objc_retain(uVar22);
  _objc_retain(param_3);
  if (uVar22 == param_3) {
    _objc_release(param_3);
  }
  else {
    if (param_3 == 0) {
      _objc_release(uVar22);
    }
    else {
      uVar15 = uVar22;
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(uVar22);
      if ((uVar15 & 1) != 0) goto LAB_105084418;
    }
    uVar22 = param_3;
    func_0x00010bf51e00();
    uVar20 = *(undefined8 *)(param_1 + lVar23);
    *(ulong *)(param_1 + lVar23) = uVar22;
    _objc_release(uVar20);
    puVar3 = PTR_PTR_1126b4610;
    _objc_retain(param_3);
    _objc_opt_class(puVar3);
    uVar15 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar3);
    uVar22 = param_3;
    if ((uVar15 & 1) == 0) {
      uVar22 = 0;
    }
    _objc_retain(uVar22);
    _objc_release(param_3);
    uVar20 = *(undefined8 *)(param_1 + _DAT_11271b304);
    uVar15 = uVar22;
    func_0x00010bf36b20(uVar22);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2226c0(uVar20);
    _objc_release(uVar15);
    lVar23 = (long)_DAT_11271b308;
    iVar24 = (int)*(undefined8 *)(param_1 + lVar23);
    func_0x00010c06f880();
    uVar15 = uVar22;
    func_0x00010c07f020();
    if (iVar24 == 0) {
      if ((int)uVar15 != 0) {
        func_0x00010bf57500(*(undefined8 *)(param_1 + lVar23));
        _objc_unsafeClaimAutoreleasedReturnValue();
        lVar5 = param_1;
        func_0x00010bf4dce0(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar20 = *(undefined8 *)(param_1 + lVar23);
        func_0x00010c269d40(uVar20);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befbb60(lVar5);
        _objc_release(uVar20);
        _objc_release(lVar5);
        puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
        uVar4 = *(undefined8 *)(param_1 + lVar23);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar20 = uVar4;
        func_0x00010c1408a0();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = param_1;
        func_0x00010c1408a0();
        _objc_retainAutoreleasedReturnValue();
        uVar13 = uVar20;
        func_0x00010bf493c0(0xc018000000000000);
        _objc_retainAutoreleasedReturnValue();
        uVar16 = *(undefined8 *)(param_1 + lVar23);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar16;
        func_0x00010c274200();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = param_1;
        func_0x00010c274200();
        _objc_retainAutoreleasedReturnValue();
        uVar14 = uVar6;
        func_0x00010bf493c0(0x4014000000000000);
        _objc_retainAutoreleasedReturnValue();
        uVar17 = *(undefined8 *)(param_1 + lVar23);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar21 = uVar17;
        func_0x00010c2a5060();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar21;
        func_0x00010bf49420(0x402e000000000000);
        _objc_retainAutoreleasedReturnValue();
        uVar18 = *(undefined8 *)(param_1 + lVar23);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar18;
        func_0x00010bfe0660();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar9;
        func_0x00010bf49420(0x402e000000000000);
        _objc_retainAutoreleasedReturnValue();
        puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010beef8c0(puVar3);
        _objc_release(puVar11);
        _objc_release(uVar10);
        _objc_release(uVar9);
        _objc_release(uVar18);
        _objc_release(uVar8);
        _objc_release(uVar21);
        _objc_release(uVar17);
        _objc_release(uVar14);
        _objc_release(lVar7);
        _objc_release(uVar6);
        _objc_release(uVar16);
        _objc_release(uVar13);
        _objc_release(lVar5);
        _objc_release(uVar20);
        goto LAB_105083e78;
      }
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + lVar23);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
LAB_105083e78:
      _objc_release(uVar4);
    }
    uVar15 = uVar22;
    func_0x00010c06b220();
    uVar20 = 0x403b000000000000;
    if ((int)uVar15 == 0) {
      uVar20 = 0x4018000000000000;
    }
    lVar23 = (long)_DAT_11271b328;
    iVar24 = _DAT_11271b30c;
    if ((*(byte *)(param_1 + lVar23) & 1) != 0) {
      uVar15 = uVar22;
      func_0x00010bf52640();
      _objc_retainAutoreleasedReturnValue();
      iVar24 = _DAT_11271b30c;
      if (uVar15 != 0) {
        uVar12 = *(ulong *)(param_1 + _DAT_11271b30c);
        func_0x00010c06f880();
        _objc_release(uVar15);
        if ((uVar12 & 1) == 0) {
          func_0x00010bf57500(*(undefined8 *)(param_1 + iVar24));
          _objc_unsafeClaimAutoreleasedReturnValue();
          lVar5 = param_1;
          func_0x00010bf4dce0(param_1);
          _objc_retainAutoreleasedReturnValue();
          uVar13 = *(undefined8 *)(param_1 + iVar24);
          func_0x00010c269d40(uVar13);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befbb60(lVar5);
          _objc_release(uVar13);
          _objc_release(lVar5);
          uVar14 = *(undefined8 *)(param_1 + iVar24);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar13 = uVar14;
          func_0x00010c08e400();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = param_1;
          func_0x00010c08e400(param_1);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar13;
          func_0x00010bf493c0(uVar20);
          _objc_retainAutoreleasedReturnValue();
          uVar21 = *(undefined8 *)(param_1 + _DAT_11271b32c);
          *(undefined8 *)(param_1 + _DAT_11271b32c) = uVar6;
          _objc_release(uVar21);
          _objc_release(lVar5);
          _objc_release(uVar13);
          _objc_release(uVar14);
          puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
          uVar14 = *(undefined8 *)(param_1 + iVar24);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar13 = uVar14;
          func_0x00010bf1ff80();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = param_1;
          func_0x00010bf1ff80(param_1);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar13;
          func_0x00010bf493c0(0xc014000000000000);
          _objc_retainAutoreleasedReturnValue();
          puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010beef8c0(puVar3);
          _objc_release(puVar11);
          _objc_release(uVar6);
          _objc_release(lVar5);
          _objc_release(uVar13);
          _objc_release(uVar14);
        }
      }
    }
    iVar2 = (int)*(undefined8 *)(param_1 + iVar24);
    func_0x00010c06f880();
    if (iVar2 != 0) {
      func_0x00010c181140(uVar20,*(undefined8 *)(param_1 + _DAT_11271b32c));
      cVar1 = *(char *)(param_1 + lVar23);
      if (cVar1 == '\x01') {
        uVar15 = uVar22;
        func_0x00010bf52640(uVar22);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        uVar15 = 0;
      }
      uVar20 = *(undefined8 *)(param_1 + iVar24);
      func_0x00010c269d40(uVar20);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20();
      _objc_release(uVar20);
      if (cVar1 != '\0') {
        _objc_release(uVar15);
      }
    }
    if (*(char *)(param_1 + lVar23) == '\x01') {
      uVar15 = uVar22;
      func_0x00010c15dae0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (uVar15 == 0) goto LAB_1050843d0;
      lVar23 = (long)_DAT_11271b310;
      uVar15 = *(ulong *)(param_1 + lVar23);
      func_0x00010c06f880();
      if ((uVar15 & 1) == 0) {
        func_0x00010bf57500(*(undefined8 *)(param_1 + lVar23));
        _objc_unsafeClaimAutoreleasedReturnValue();
        lVar5 = param_1;
        func_0x00010bf4dce0(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar20 = *(undefined8 *)(param_1 + lVar23);
        func_0x00010c269d40(uVar20);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befbb60(lVar5);
        _objc_release(uVar20);
        _objc_release(lVar5);
        puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
        uVar16 = *(undefined8 *)(param_1 + lVar23);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar20 = uVar16;
        func_0x00010c08e400();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = param_1;
        func_0x00010c08e400();
        _objc_retainAutoreleasedReturnValue();
        uVar13 = uVar20;
        func_0x00010bf493c0(0x4018000000000000);
        _objc_retainAutoreleasedReturnValue();
        uVar17 = *(undefined8 *)(param_1 + lVar23);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar17;
        func_0x00010c274200();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = param_1;
        func_0x00010c274200();
        _objc_retainAutoreleasedReturnValue();
        uVar14 = uVar6;
        func_0x00010bf493c0(0x4018000000000000);
        _objc_retainAutoreleasedReturnValue();
        uVar18 = *(undefined8 *)(param_1 + lVar23);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar21 = uVar18;
        func_0x00010c2a5060();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar21;
        func_0x00010bf49420(0x4038000000000000);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = *(undefined8 *)(param_1 + lVar23);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar4;
        func_0x00010bfe0660();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar9;
        func_0x00010bf49420(0x4038000000000000);
        _objc_retainAutoreleasedReturnValue();
        puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010beef8c0(puVar3);
        _objc_release(puVar11);
        _objc_release(uVar10);
        _objc_release(uVar9);
        _objc_release(uVar4);
        _objc_release(uVar8);
        _objc_release(uVar21);
        _objc_release(uVar18);
        _objc_release(uVar14);
        _objc_release(lVar7);
        _objc_release(uVar6);
        _objc_release(uVar17);
        _objc_release(uVar13);
        _objc_release(lVar5);
        _objc_release(uVar20);
        _objc_release(uVar16);
      }
      uVar20 = *(undefined8 *)(param_1 + lVar23);
      func_0x00010c269d40(uVar20);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1aa200();
      _objc_release(uVar20);
      uVar15 = uVar22;
      func_0x00010c15dae0(uVar22);
      _objc_retainAutoreleasedReturnValue();
      uVar20 = *(undefined8 *)(param_1 + lVar23);
      func_0x00010c269d40(uVar20);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2226c0();
      _objc_release(uVar20);
LAB_105084400:
      _objc_release(uVar15);
    }
    else {
LAB_1050843d0:
      lVar23 = (long)_DAT_11271b310;
      iVar24 = (int)*(undefined8 *)(param_1 + lVar23);
      func_0x00010c06f880();
      if (iVar24 != 0) {
        uVar15 = *(ulong *)(param_1 + lVar23);
        func_0x00010c269d40(uVar15);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1a7f60();
        goto LAB_105084400;
      }
    }
    func_0x00010c1cbe20(param_1);
  }
  _objc_release(uVar22);
LAB_105084418:
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar19) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bea6e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)();
    return;
  }
  return;
}



/* Entry: 105084460; end: 105084463; -[SCProfileChatMediaCardCollectionViewCell setRoundedCorners:] */

void FUN_105084460(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea6e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setRoundedCorners__112587530);
  return;
}



/* Entry: 105084464; end: 105084517; -[SCProfileChatMediaCardCollectionViewCell gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105084464(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar3 = (long)_DAT_11271b300;
  uVar2 = param_3;
  func_0x00010c071ae0(param_3,param_2,*(undefined8 *)(param_1 + lVar3));
  lVar4 = (long)_DAT_11271b2f8;
  if ((((int)uVar2 == 0) ||
      (uVar1 = param_4, func_0x00010c071ae0(param_4,param_2,*(undefined8 *)(param_1 + lVar4)),
      (uVar1 & 1) == 0)) &&
     ((uVar2 = param_3, func_0x00010c071ae0(param_3,param_2,*(undefined8 *)(param_1 + lVar4)),
      (int)uVar2 == 0 ||
      (uVar1 = param_4, func_0x00010c071ae0(param_4,param_2,*(undefined8 *)(param_1 + lVar3)),
      (uVar1 & 1) == 0)))) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 105084518; end: 10508458f; -[SCProfileChatMediaCardCollectionViewCell gestureRecognizer:shouldReceiveTouch:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105084518(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(ulong *)(param_1 + _DAT_11271b330);
  if ((uVar1 == 0) || ((**(code **)(uVar1 + 0x10))(), (uVar1 & 1) == 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 105084590; end: 10508466f; -[SCProfileChatMediaCardCollectionViewCell imageDidLoad:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105084590(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b4498;
  _objc_opt_class(PTR_PTR_1126b4498);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 != 0) {
    puVar2 = PTR_PTR_1126b02a8;
    _objc_alloc(PTR_PTR_1126b02a8);
    uVar3 = param_3;
    func_0x00010c0c5240(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01b460(puVar2);
    _objc_release(uVar3);
    func_0x00010bfd0140(*(undefined8 *)(param_1 + _DAT_11271b320));
    _objc_release(puVar2);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105084670; end: 10508479f; -[SCProfileChatMediaCardCollectionViewCell _setRoundedCorners:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105084670(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (*(long *)(param_1 + _DAT_11271b334) == param_3) {
    return;
  }
  *(long *)(param_1 + _DAT_11271b334) = param_3;
  lVar4 = (long)_DAT_11271b318;
  func_0x00010c12c960(*(undefined8 *)(param_1 + lVar4));
  puVar1 = PTR_PTR_1126b4640;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x000108f7491c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c005ee0(0x4018000000000000);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  _objc_release(puVar2);
  if (*(char *)(param_1 + _DAT_11271b314) == '\x01') {
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c173280(*(undefined8 *)(param_1 + lVar4));
    _objc_release(puVar1);
    func_0x00010c1733a0(0x3fe0000000000000,*(undefined8 *)(param_1 + lVar4));
  }
  lVar4 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 1050847a0; end: 1050847af; -[SCProfileChatMediaCardCollectionViewCell roundedCorners] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1050847a0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271b334);
}



/* Entry: 1050847b0; end: 1050847bf; -[SCProfileChatMediaCardCollectionViewCell actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1050847b0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271b320);
}



/* Entry: 1050847c0; end: 1050847ff; -[SCProfileChatMediaCardCollectionViewCell setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050847c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11271b320;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105084800; end: 10508480f; -[SCProfileChatMediaCardCollectionViewCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105084800(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271b324);
}



/* Entry: 105084810; end: 10508481f; -[SCProfileChatMediaCardCollectionViewCell mediaDownloader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105084810(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271b338);
}



/* Entry: 105084820; end: 10508482f; -[SCProfileChatMediaCardCollectionViewCell imageDownloader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105084820(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271b31c);
}



/* Entry: 105084830; end: 10508483f; -[SCProfileChatMediaCardCollectionViewCell shouldShowBorder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_105084830(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11271b314);
}



/* Entry: 105084840; end: 10508484f; -[SCProfileChatMediaCardCollectionViewCell setShouldShowBorder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105084840(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11271b314) = param_3;
  return;
}



/* Entry: 105084850; end: 10508485f; -[SCProfileChatMediaCardCollectionViewCell shouldShowDetails] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_105084850(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11271b328);
}



/* Entry: 105084860; end: 10508486f; -[SCProfileChatMediaCardCollectionViewCell setShouldShowDetails:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105084860(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11271b328) = param_3;
  return;
}



/* Entry: 105084870; end: 10508487f; -[SCProfileChatMediaCardCollectionViewCell isScrolling] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105084870(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271b330);
}



/* Entry: 105084880; end: 10508488b; -[SCProfileChatMediaCardCollectionViewCell setIsScrolling:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105084880(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10508488c; end: 10508498b; -[SCProfileChatMediaCardCollectionViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10508488c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271b330,0);
  _objc_storeStrong(param_1 + _DAT_11271b338,0);
  _objc_storeStrong(param_1 + _DAT_11271b324,0);
  _objc_storeStrong(param_1 + _DAT_11271b320,0);
  _objc_storeStrong(param_1 + _DAT_11271b300,0);
  _objc_storeStrong(param_1 + _DAT_11271b2fc,0);
  _objc_storeStrong(param_1 + _DAT_11271b2f8,0);
  _objc_storeStrong(param_1 + _DAT_11271b31c,0);
  _objc_storeStrong(param_1 + _DAT_11271b310,0);
  _objc_storeStrong(param_1 + _DAT_11271b32c,0);
  _objc_storeStrong(param_1 + _DAT_11271b30c,0);
  _objc_storeStrong(param_1 + _DAT_11271b308,0);
  _objc_storeStrong(param_1 + _DAT_11271b304,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271b318,0);
  return;
}



/* Entry: 10508498c; end: 105084a23; -[SCProfileChatMediaContainerProxyActionHandler handleActionWithSender:actionModel:fromSourceView:] */

long FUN_10508498c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bfd0120();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 105084a24; end: 105084a3b; -[SCProfileChatMediaContainerProxyActionHandler delegate] */

void FUN_105084a24(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105084a3c; end: 105084a47; -[SCProfileChatMediaContainerProxyActionHandler setDelegate:] */

void FUN_105084a3c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,param_3);
  return;
}



/* Entry: 105084a48; end: 105084a4f; -[SCProfileChatMediaContainerProxyActionHandler .cxx_destruct] */

void FUN_105084a48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105084a50; end: 105084a87; -[SCProfileChatMediaContainerCollectionViewCell setOnMediaFirstTappable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105084a50(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retainBlock();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271b344);
  *(undefined8 *)(param_1 + _DAT_11271b344) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105084a88; end: 105084c27; -[SCProfileChatMediaContainerCollectionViewCell layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105084a88(double param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 unaff_x21;
  undefined *puVar7;
  undefined8 unaff_x22;
  long lVar8;
  long unaff_x23;
  long lVar9;
  long unaff_x24;
  long lVar10;
  double dVar11;
  double dVar12;
  undefined8 uStack_370;
  long lStack_368;
  long *plStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  long lStack_2a8;
  long lStack_2a0;
  long lStack_298;
  long lStack_290;
  undefined *puStack_288;
  long lStack_280;
  undefined1 *puStack_278;
  undefined1 **ppuStack_270;
  code *pcStack_268;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  long lStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_108;
  undefined *puStack_100;
  long lStack_78;
  
  puVar4 = &uStack_150;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_100 = PTR_PTR_1126e5df8;
  lStack_108 = param_2;
  _objc_msgSendSuper2(&lStack_108,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_2);
  _CGRectGetWidth();
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  lVar6 = *(long *)(param_2 + _DAT_11271b348);
  _objc_retain(lVar6);
  lVar8 = lVar6;
  func_0x00010bf52a60();
  if (lVar8 != 0) {
    dVar11 = (param_1 + -40.0) / 5.0;
    unaff_x24 = *plStack_140;
    dVar12 = 6.0;
    do {
      lVar10 = 0;
      do {
        if (*plStack_140 != unaff_x24) {
          _objc_enumerationMutation(lVar6);
        }
        unaff_x22 = *(undefined8 *)(lStack_148 + lVar10 * 8);
        unaff_x23 = param_2;
        func_0x00010bf31be0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010b8166f8(dVar12,0x4018000000000000,dVar11,0x405bc00000000000);
        func_0x00010c19f0e0(unaff_x22);
        _objc_release(unaff_x23);
        dVar12 = dVar11 + 7.0 + dVar12;
        lVar10 = lVar10 + 1;
      } while (lVar8 != lVar10);
      lVar8 = lVar6;
      puVar4 = &uStack_150;
      func_0x00010bf52a60();
      unaff_x21 = 0;
    } while (lVar8 != 0);
  }
  lVar8 = lVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = &uStack_260;
  pcStack_158 = FUN_105084c28;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_190 = unaff_x24;
  lStack_188 = unaff_x23;
  uStack_180 = unaff_x22;
  uStack_178 = unaff_x21;
  lStack_170 = lVar6;
  lStack_168 = param_2;
  puStack_160 = &stack0xfffffffffffffff0;
  _objc_retain(puVar4);
  puVar7 = &DAT_11271b348;
  lVar10 = (long)_DAT_11271b34c;
  _objc_retain(puVar4);
  uVar1 = *(undefined8 *)(lVar8 + lVar10);
  *(undefined8 **)(lVar8 + lVar10) = puVar4;
  _objc_release(uVar1);
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  lStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  plStack_250 = (long *)0x0;
  lVar6 = *(long *)(lVar8 + _DAT_11271b348);
  _objc_retain(lVar6);
  lVar8 = lVar6;
  func_0x00010bf52a60();
  if (lVar8 != 0) {
    lVar10 = *plStack_250;
    do {
      unaff_x23 = 0;
      do {
        if (*plStack_250 != lVar10) {
          _objc_enumerationMutation(lVar6);
        }
        func_0x00010c1c4540(*(undefined8 *)(lStack_258 + unaff_x23 * 8));
        unaff_x23 = unaff_x23 + 1;
      } while (lVar8 != unaff_x23);
      lVar8 = lVar6;
      puVar3 = &uStack_260;
      func_0x00010bf52a60();
      puVar7 = (undefined *)0x0;
    } while (lVar8 != 0);
  }
  _objc_release(lVar6);
  puVar2 = (undefined1 *)puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return;
  }
  ___stack_chk_fail();
  puVar5 = &uStack_370;
  pcStack_268 = FUN_105084d58;
  lStack_2a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_2a0 = unaff_x24;
  lStack_298 = unaff_x23;
  lStack_290 = lVar10;
  puStack_288 = puVar7;
  lStack_280 = lVar6;
  puStack_278 = (undefined1 *)puVar4;
  ppuStack_270 = &puStack_160;
  _objc_retain(puVar3);
  lVar8 = (long)_DAT_11271b350;
  _objc_retain(puVar3);
  uVar1 = *(undefined8 *)(puVar2 + lVar8);
  *(undefined8 **)(puVar2 + lVar8) = puVar3;
  _objc_release(uVar1);
  uStack_348 = 0;
  uStack_350 = 0;
  uStack_338 = 0;
  uStack_340 = 0;
  lStack_368 = 0;
  uStack_370 = 0;
  uStack_358 = 0;
  plStack_360 = (long *)0x0;
  lVar6 = *(long *)(puVar2 + _DAT_11271b348);
  _objc_retain(lVar6);
  lVar8 = lVar6;
  func_0x00010bf52a60();
  if (lVar8 != 0) {
    lVar10 = *plStack_360;
    do {
      lVar9 = 0;
      do {
        if (*plStack_360 != lVar10) {
          _objc_enumerationMutation(lVar6);
        }
        func_0x00010c1aa200(*(undefined8 *)(lStack_368 + lVar9 * 8));
        lVar9 = lVar9 + 1;
      } while (lVar8 != lVar9);
      lVar8 = lVar6;
      puVar5 = &uStack_370;
      func_0x00010bf52a60();
    } while (lVar8 != 0);
  }
  _objc_release(lVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar5);
  uVar1 = *(undefined8 *)((long)puVar3 + (long)_DAT_11271b354);
  *(undefined8 **)((long)puVar3 + (long)_DAT_11271b354) = puVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105084c28; end: 105084d57; -[SCProfileChatMediaContainerCollectionViewCell setMediaDownloader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105084c28(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_220;
  long lStack_218;
  long *plStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long lStack_158;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  puVar2 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar5 = (long)_DAT_11271b34c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  *(long *)(param_1 + lVar5) = param_3;
  _objc_release(uVar1);
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  lVar4 = *(long *)(param_1 + _DAT_11271b348);
  _objc_retain(lVar4);
  lVar5 = lVar4;
  func_0x00010bf52a60();
  if (lVar5 != 0) {
    lVar6 = *plStack_100;
    do {
      lVar7 = 0;
      do {
        if (*plStack_100 != lVar6) {
          _objc_enumerationMutation(lVar4);
        }
        func_0x00010c1c4540(*(undefined8 *)(lStack_108 + lVar7 * 8),param_2,param_3);
        lVar7 = lVar7 + 1;
      } while (lVar5 != lVar7);
      lVar5 = lVar4;
      puVar2 = &uStack_110;
      func_0x00010bf52a60();
    } while (lVar5 != 0);
  }
  _objc_release(lVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = &uStack_220;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar2);
  lVar5 = (long)_DAT_11271b350;
  _objc_retain(puVar2);
  uVar1 = *(undefined8 *)(param_3 + lVar5);
  *(undefined8 **)(param_3 + lVar5) = puVar2;
  _objc_release(uVar1);
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  lStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  plStack_210 = (long *)0x0;
  lVar4 = *(long *)(param_3 + _DAT_11271b348);
  _objc_retain(lVar4);
  lVar5 = lVar4;
  func_0x00010bf52a60();
  if (lVar5 != 0) {
    lVar6 = *plStack_210;
    do {
      lVar7 = 0;
      do {
        if (*plStack_210 != lVar6) {
          _objc_enumerationMutation(lVar4);
        }
        func_0x00010c1aa200(*(undefined8 *)(lStack_218 + lVar7 * 8),param_2,puVar2);
        lVar7 = lVar7 + 1;
      } while (lVar5 != lVar7);
      lVar5 = lVar4;
      puVar3 = &uStack_220;
      func_0x00010bf52a60();
    } while (lVar5 != 0);
  }
  _objc_release(lVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar3);
  uVar1 = *(undefined8 *)((long)puVar2 + (long)_DAT_11271b354);
  *(undefined8 **)((long)puVar2 + (long)_DAT_11271b354) = puVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105084d58; end: 105084e87; -[SCProfileChatMediaContainerCollectionViewCell setImageDownloader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105084d58(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  puVar2 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar4 = (long)_DAT_11271b350;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  *(long *)(param_1 + lVar4) = param_3;
  _objc_release(uVar1);
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  lVar3 = *(long *)(param_1 + _DAT_11271b348);
  _objc_retain(lVar3);
  lVar4 = lVar3;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    lVar5 = *plStack_100;
    do {
      lVar6 = 0;
      do {
        if (*plStack_100 != lVar5) {
          _objc_enumerationMutation(lVar3);
        }
        func_0x00010c1aa200(*(undefined8 *)(lStack_108 + lVar6 * 8),param_2,param_3);
        lVar6 = lVar6 + 1;
      } while (lVar4 != lVar6);
      lVar4 = lVar3;
      puVar2 = &uStack_110;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar2);
  uVar1 = *(undefined8 *)(param_3 + _DAT_11271b354);
  *(undefined8 **)(param_3 + _DAT_11271b354) = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105084e88; end: 105084ebf; -[SCProfileChatMediaContainerCollectionViewCell setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105084e88(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271b354);
  *(undefined8 *)(param_1 + _DAT_11271b354) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105084ec0; end: 105084edb; -[SCProfileChatMediaContainerCollectionViewCell handleActionWithProxy:sender:actionModel:fromSourceView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105084ec0(long param_1)

{
  undefined8 in_x4;
  undefined8 in_x5;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfd0150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11271b354),
             PTR_s_handleActionWithSender_actionMod_1125d19f8,param_1,in_x4,in_x5);
  return;
}



/* Entry: 105084edc; end: 10508506b; -[SCProfileChatMediaContainerCollectionViewCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105084edc(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_11271b358;
  if (*(long *)(param_1 + lVar5) == 0) {
    puVar2 = PTR_PTR_1126b4648;
    _objc_opt_new();
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar2;
    _objc_release(uVar4);
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar5));
  }
  puVar2 = PTR_PTR_1126b4650;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  uVar6 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar6 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  lVar5 = (long)_DAT_11271b35c;
  uVar6 = *(ulong *)(param_1 + lVar5);
  _objc_retain(uVar6);
  _objc_retain(uVar1);
  if (uVar6 == uVar1) {
    _objc_release(uVar1);
    _objc_release(uVar6);
  }
  else {
    if (uVar1 == 0) {
      _objc_release(uVar6);
    }
    else {
      uVar3 = uVar6;
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(uVar6);
      if ((uVar3 & 1) != 0) goto LAB_10508504c;
    }
    uVar6 = uVar1;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    *(ulong *)(param_1 + lVar5) = uVar6;
    _objc_release(uVar4);
    uVar6 = uVar1;
    func_0x00010c1166e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bee35a0(param_1);
    _objc_release(uVar6);
    lVar5 = (long)_DAT_11271b344;
    if (*(long *)(param_1 + lVar5) != 0) {
      (**(code **)(*(long *)(param_1 + lVar5) + 0x10))();
      uVar4 = *(undefined8 *)(param_1 + lVar5);
      *(undefined8 *)(param_1 + lVar5) = 0;
      _objc_release(uVar4);
    }
    func_0x00010c1cbe20(param_1);
  }
LAB_10508504c:
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10508506c; end: 1050853f7; -[SCProfileChatMediaContainerCollectionViewCell _updateViewBasedOnMediaCards:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10508506c(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uStack_210;
  long lStack_208;
  long *plStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined1 auStack_190 [128];
  undefined1 auStack_110 [128];
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  lStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  plStack_1c0 = (long *)0x0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  lVar5 = (long)_DAT_11271b348;
  lVar6 = *(long *)(param_1 + lVar5);
  _objc_retain(lVar6);
  lVar9 = lVar6;
  func_0x00010bf52a60(lVar6,param_2,&uStack_1d0,auStack_110,0x10);
  if (lVar9 != 0) {
    lVar10 = *plStack_1c0;
    do {
      lVar11 = 0;
      do {
        if (*plStack_1c0 != lVar10) {
          _objc_enumerationMutation(lVar6);
        }
        uVar7 = *(undefined8 *)(lStack_1c8 + lVar11 * 8);
        uVar13 = uVar7;
        func_0x00010c29d560(uVar7);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = param_3;
        func_0x00010bf4b900(param_3,param_2,uVar13);
        _objc_release(uVar13);
        if ((uVar2 & 1) == 0) {
          func_0x00010c12c960(uVar7);
        }
        else {
          uVar13 = uVar7;
          func_0x00010c29d560(uVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar1,param_2,uVar7,uVar13);
          _objc_release(uVar13);
        }
        lVar11 = lVar11 + 1;
      } while (lVar9 != lVar11);
      lVar9 = lVar6;
      func_0x00010bf52a60(lVar6,param_2,&uStack_1d0,auStack_110,0x10);
    } while (lVar9 != 0);
  }
  _objc_release(lVar6);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  plStack_200 = (long *)0x0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_210,auStack_190,0x10);
  if (uVar2 != 0) {
    lVar9 = *plStack_200;
    uVar13 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar7 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar14 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar15 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    do {
      uVar12 = 0;
      do {
        if (*plStack_200 != lVar9) {
          _objc_enumerationMutation(param_3);
        }
        uVar8 = *(undefined8 *)(lStack_208 + uVar12 * 8);
        puVar4 = puVar1;
        func_0x00010c0e00e0(puVar1,param_2,uVar8);
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar4 == (undefined *)0x0) {
          puVar4 = PTR_PTR_1126b44e0;
          _objc_alloc(PTR_PTR_1126b44e0);
          func_0x00010c013de0(uVar13,uVar7,uVar14,uVar15);
          func_0x00010c2010a0();
          func_0x00010c201160(puVar4,param_2,0);
          func_0x00010c1c4540(puVar4,param_2,*(undefined8 *)(param_1 + _DAT_11271b34c));
          func_0x00010c1aa200(puVar4,param_2,*(undefined8 *)(param_1 + _DAT_11271b350));
          func_0x00010c161980(puVar4,param_2,*(undefined8 *)(param_1 + _DAT_11271b358));
          func_0x00010c2226c0(puVar4,param_2,uVar8);
          func_0x00010c1ee980(puVar4,param_2,0xffffffffffffffff);
          lVar6 = param_1;
          func_0x00010bf31be0(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befbb60();
          _objc_release(lVar6);
        }
        else {
          puVar4 = puVar1;
          func_0x00010c0e00e0(puVar1,param_2,uVar8);
          _objc_retainAutoreleasedReturnValue();
        }
        func_0x00010befa120(puVar3,param_2,puVar4);
        _objc_release(puVar4);
        uVar12 = uVar12 + 1;
      } while (uVar2 != uVar12);
      uVar2 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_210,auStack_190,0x10);
    } while (uVar2 != 0);
  }
  _objc_release(param_3);
  puVar4 = puVar3;
  func_0x00010bf51e00();
  uVar13 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar4;
  _objc_release(uVar13);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 1050853f8; end: 105085403; +[SCProfileChatMediaContainerCollectionViewCell sizeWithViewModel:constrainedToSize:] */

void FUN_1050853f8(void)

{
  return;
}


